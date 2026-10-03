# Kế hoạch xây dựng chức năng chuyển tiền sát production

**Stack:** Java 21 · Spring Boot 3 · PostgreSQL · Kafka · Resilience4j · Docker Compose
**Phạm vi:** tiền giả, nhưng ngữ nghĩa nghiệp vụ và độ tin cậy giống hệ thống thật.
**Kiến trúc:** ứng dụng chuyển tiền standalone (DB riêng) + Fake Bank (app nhỏ, hệ thống ngoài giả lập) + dự án thương mại có sẵn đóng vai client.
**Mục tiêu:** học nghiệp vụ chuyển tiền, không cần hoàn thành một app hoàn chỉnh.
**Quan sát (observability):** tạm để mức tối thiểu (xem Giai đoạn 6), làm sâu sau.

---

## Mục lục

0. Đổi tư duy: từ CRUD sang sổ cái (ledger)
1. Kiến trúc tổng thể (ứng dụng chuyển tiền, Fake Bank, dự án thương mại)
2. Thiết kế schema database (đáp án tham khảo, rubric tự chấm)
3. Các giai đoạn thực hiện (Giai đoạn 0 → 9)
4. Danh sách vấn đề khó cần suy nghĩ
5. Kịch bản kiểm thử bắt buộc
6. Thứ tự làm và mốc hoàn thành
7. Checklist tổng

---

## 0. Đổi tư duy: từ CRUD sang sổ cái

CRUD: `UPDATE accounts SET balance = balance - 100 ...` rồi `... + 100 ...`. Sai vì không có lịch sử, không audit được, lỗi giữa chừng là mất tiền, không giải thích được "tiền đi đâu".

Chuyển tiền thật dựa trên **ledger**:

- **Double-entry**: mỗi giao dịch tạo ít nhất 2 bút toán (DEBIT một bên, CREDIT bên kia), tổng luôn bằng 0.
- **Append-only**: không UPDATE/DELETE bút toán. Sai thì tạo bút toán đảo (reversal).
- **Số dư là kết quả của ledger**; cột `balance` trong `accounts` chỉ là cache để đọc nhanh.
- **Tiền là số nguyên** ở đơn vị nhỏ nhất (VND: đồng), kiểu `BIGINT` + `currency`. Không dùng `double`/`float`; nếu cần tính toán dùng `long` hoặc `BigDecimal` rồi quy đổi.

### Bốn bất biến (invariants) phải luôn đúng

1. Tổng DEBIT = tổng CREDIT trên toàn hệ thống.
2. Số dư tài khoản người dùng không bao giờ âm.
3. Một yêu cầu chuyển tiền chỉ tạo hiệu ứng tiền tệ đúng một lần dù được gửi nhiều lần.
4. `accounts.balance` = tổng ledger của tài khoản đó.

Mọi test và mọi quyết định thiết kế nên quy về việc bảo vệ 4 điều này. Hãy viết chúng thành **câu SQL kiểm tra** ngay từ đầu.

---

## 1. Kiến trúc tổng thể

### 1.1 Ba hệ thống, ba vai trò

```
┌─────────────────────┐   REST + Kafka    ┌───────────────────────────┐   HTTP + callback   ┌──────────────────┐
│ Dự án thương mại    │ ────────────────► │ Ứng dụng chuyển tiền      │ ──────────────────► │ Fake Bank        │
│ (monolith có sẵn)   │ ◄──────────────── │ (wallet-service)          │ ◄────────────────── │ (app nhỏ)        │
│ CLIENT: yêu cầu     │  transfer.* event │ CHỦ SỔ SÁCH: tài khoản,   │                     │ HỆ THỐNG NGOÀI:  │
│ thanh toán, không   │                   │ ledger, state machine,    │                     │ đơn giản, hay    │
│ giữ tiền            │                   │ saga, đối soát            │                     │ gây lỗi          │
└─────────────────────┘                   └───────────────────────────┘                     └──────────────────┘
        DB riêng                                    DB riêng                                      DB riêng
```

| Hệ thống | Vai trò | Giữ tiền? | Độ phức tạp nghiệp vụ |
|---|---|---|---|
| Dự án thương mại (có sẵn) | Người yêu cầu: "trừ ví người mua, cộng ví người bán" | Không | Đã có, chỉ thêm phần gọi ví |
| **Ứng dụng chuyển tiền** (bạn xây) | Ví/ngân hàng thu nhỏ: tài khoản, ledger, chuyển nội bộ, điều phối chuyển ra/vào ngân hàng ngoài | **Có** | **Cao, đây là nơi học nghiệp vụ** |
| Fake Bank | Đóng vai ngân hàng khác, cố tình gây lỗi để bạn luyện xử lý lỗi và đối soát | Ít (số dư đơn giản) | Thấp |

### 1.2 Nguyên tắc ranh giới (vi phạm là mất giá trị học tập)

- **Mỗi hệ thống một database riêng.** Không truy cập DB của nhau.
- Chỉ giao tiếp qua **API (REST) và event (Kafka)**. Không import code của nhau.
- Phía gọi luôn coi lời gọi là **có thể chậm, lỗi, hoặc không rõ kết quả**: timeout, retry có backoff + idempotency key, circuit breaker, hỏi lại trạng thái thay vì đoán.
- Hợp đồng API/event được ghi rõ và ổn định (có version).

### 1.3 Ba loại chuyển tiền và bút toán tương ứng

**Quy ước trong tài liệu này:** `DEBIT` = tiền ra khỏi tài khoản (balance giảm), `CREDIT` = tiền vào tài khoản (balance tăng). Đây là quy ước "kiểu ví" cho dễ hiểu; kế toán thật dùng chart of accounts và ý nghĩa debit/credit phụ thuộc loại tài khoản. Đủ dùng cho mục tiêu học.

**Tài khoản hệ thống cần có:**

| Loại | Vai trò |
|---|---|
| `SYSTEM_FEE` | Nhận phí |
| `SYSTEM_CLEARING` | Giữ tiền "đang bay" tới/từ ngân hàng ngoài |
| `SYSTEM_BANK` | Một tài khoản cho mỗi ngân hàng đối tác, đại diện phần tiền đã đi ra hoặc đã đi vào hệ thống qua ngân hàng đó. Được phép có số dư bất kỳ |

**Loại 1: chuyển nội bộ (INTERNAL).** Ví A → ví B, một DB, một transaction.

| Ledger transaction (`type`) | DEBIT | CREDIT | Số tiền |
|---|---|---|---|
| `PRINCIPAL` | A | B | amount |
| `FEE` (nếu có phí) | A | SYSTEM_FEE | fee |

**Loại 2: chuyển ra ngân hàng ngoài (OUTBOUND).** Saga nhiều bước.

| Bước | Ledger transaction (`type`) | DEBIT | CREDIT | Số tiền |
|---|---|---|---|---|
| Giữ tiền | `TO_CLEARING` | A | SYSTEM_CLEARING | amount + fee |
| Bank báo thành công | `SETTLE` | SYSTEM_CLEARING | SYSTEM_BANK | amount |
| Bank báo thành công | `FEE` | SYSTEM_CLEARING | SYSTEM_FEE | fee |
| Bank báo thất bại | `REFUND` | SYSTEM_CLEARING | A | amount + fee |

**Loại 3: nạp tiền từ ngân hàng ngoài (INBOUND).** Bank báo có tiền vào (callback).

| Ledger transaction (`type`) | DEBIT | CREDIT | Số tiền |
|---|---|---|---|
| `TOPUP` | SYSTEM_BANK | Ví của người dùng | amount |

> **Nạp tiền ban đầu cho môi trường dev:** không set `balance` trực tiếp. Tạo một bút toán từ `SYSTEM_BANK` sang ví người dùng (giống loại 3) để các bất biến vẫn đúng ngay từ đầu.

### 1.4 Lộ trình xây dựng

1. **Ứng dụng chuyển tiền standalone**: một Spring Boot app, DB riêng, chia package `account`, `ledger`, `transfer`, `idempotency`, `outbox`. Làm Giai đoạn 0-3 ở đây (có Kafka, outbox). Test bằng test tự động hoặc Postman/curl.
2. **Fake Bank** (tùy chọn theo tiến độ): app nhỏ riêng, thêm chuyển ra/nạp vào (Giai đoạn 4).
3. **Nối dự án thương mại** làm client (Giai đoạn 9). Bước này **không phụ thuộc** bước 2, có thể làm trước nếu muốn.

Không cần tách nhiều microservice. Tách thêm chỉ khi thật sự có lý do học.

### 1.5 Cấu trúc dự án gợi ý

```
money-transfer/
├── docker-compose.yml          # postgres (nhiều DB), kafka (KRaft), toxiproxy (sau)
├── wallet-service/             # ứng dụng chuyển tiền (Spring Boot)
├── fake-bank/                  # ngân hàng giả (Spring Boot, nhỏ)
├── common/                     # (tùy chọn) DTO/event schema dùng chung
└── docs/                       # sơ đồ, ADR (quyết định thiết kế), runbook
```

Dự án thương mại nằm ở repo hiện có của bạn, chỉ thêm module/client gọi sang `wallet-service`.

### 1.6 Thư viện Spring Boot dự kiến

| Nhu cầu | Thư viện |
|---|---|
| Web/API | spring-boot-starter-web, validation |
| DB | spring-boot-starter-data-jpa (hoặc JdbcTemplate/jOOQ cho phần ledger), PostgreSQL driver |
| Migration | Flyway |
| Kafka | spring-kafka |
| Timeout/Retry/Circuit breaker/Rate limiter/Bulkhead | Resilience4j (`resilience4j-spring-boot3`) |
| Rate limit phân tán (tùy chọn) | Bucket4j + Redis |
| Test | JUnit 5, Testcontainers (Postgres + Kafka), Awaitility, jqwik |
| Security | spring-boot-starter-security (API key hoặc JWT đơn giản) |
| Health | spring-boot-starter-actuator |

> Dùng **Testcontainers** cho mọi test chạm DB/Kafka. Test concurrency trên H2 hoặc mock cho kết quả sai.

---

## 2. Thiết kế schema database (đáp án tham khảo)

### 2.0 Cách dùng phần này để tự học

Bạn muốn tự thiết kế rồi đối chiếu. Gợi ý quy trình:

1. Đọc mục 1.3 (bút toán của từng loại chuyển tiền). Trên giấy, tự trả lời: *với mỗi loại chuyển tiền, dòng nào được ghi vào bảng nào, và trạng thái nào được lưu ở đâu?*
2. Tự vẽ ERD và viết DDL cho **V1** (mục 2.4). Chưa xem đáp án.
3. Tự kiểm bằng cách chạy các câu SQL bất biến (mục 2.11) và test song song 1000 request.
4. **Sau đó** mới đối chiếu với mục 2.4 và **rubric 2.10**.
5. Khác biệt với đáp án **không nhất thiết là sai**. Điều quan trọng là thiết kế của bạn thỏa các tiêu chí trong rubric. Nếu khác, hãy tự hỏi: thiết kế của mình có chặn được lỗi mà đáp án chặn không?

Làm tương tự cho từng migration: tự thiết kế phần V2, V3... ngay trước khi bạn làm giai đoạn tương ứng.

### 2.1 Nguyên tắc chung

- **Khóa chính UUID** cho thực thể nghiệp vụ (`accounts`, `transfers`...), sinh ở ứng dụng (UUIDv7 nếu có thư viện, vì có thứ tự thời gian, index thân thiện). Dùng `BIGSERIAL/IDENTITY` cho bảng chỉ ghi thêm, khối lượng lớn (`ledger_entries`, history, outbox).
- **Tiền là `BIGINT`** ở đơn vị nhỏ nhất, luôn đi kèm `currency CHAR(3)`. Không `FLOAT/DOUBLE`.
- **Thời gian là `TIMESTAMPTZ`**, lưu UTC.
- **Trạng thái/loại là `VARCHAR` + `CHECK`**, không dùng ENUM của Postgres (đổi giá trị ENUM khó hơn khi migrate).
- **Ép ràng buộc ở DB**, không chỉ ở code: `CHECK`, `UNIQUE`, `FOREIGN KEY`, `NOT NULL`. Code sai thì DB vẫn chặn được.
- Đặt tên: bảng số nhiều `snake_case`, index `ix_*`, unique `uq_*`, check `ck_*`.

### 2.2 Sơ đồ quan hệ (wallet-service)

```
api_clients ──< transfers >── accounts
                  │  │            │
                  │  │            └──< ledger_entries >── ledger_transactions
                  │  │                                          │
                  │  └──────────────────< (transfer_id) ────────┘
                  ├──< transfer_status_history
                  ├──< bank_requests            (mỗi lần gọi bank)
                  └──< reconciliation_issues

idempotency_keys   (độc lập, trỏ resource_id → transfers)
outbox_events      (độc lập)   processed_messages (độc lập)
bank_callbacks     (inbox, có thể chưa gắn transfer)
bank_statement_lines / reconciliation_runs
account_limits, daily_usage, account_holds  ── accounts
```

Điểm mấu chốt: **`transfers` là ý định nghiệp vụ có trạng thái; `ledger_transactions` là bút toán thực sự.** Một transfer có thể sinh nhiều ledger transaction (chuyển ra ngân hàng: giữ tiền, rồi quyết toán hoặc hoàn tiền).

### 2.3 Thứ tự migration (Flyway) và giai đoạn tương ứng

| Migration | Bảng | Dùng từ giai đoạn |
|---|---|---|
| `V1__core.sql` | api_clients, accounts, transfers, transfer_status_history, ledger_transactions, ledger_entries (+ trigger) | GĐ 1 |
| `V2__idempotency.sql` | idempotency_keys | GĐ 2 |
| `V3__messaging.sql` | outbox_events, processed_messages | GĐ 3 |
| `V4__bank_integration.sql` | bank_requests, bank_callbacks | GĐ 4 |
| `V5__reconciliation.sql` | bank_statement_lines, reconciliation_runs, reconciliation_issues | GĐ 7 |
| `V6__limits_and_holds.sql` | account_limits, daily_usage, account_holds (+ cột held_balance) | GĐ 5 |

### 2.4 DDL của wallet-service

#### V1: lõi chuyển tiền và sổ cái

```sql
-- Hệ thống gọi vào (ví dụ: dự án thương mại)
CREATE TABLE api_clients (
  id            UUID PRIMARY KEY,
  name          VARCHAR(100) NOT NULL UNIQUE,
  api_key_hash  CHAR(64) NOT NULL,
  status        VARCHAR(20) NOT NULL DEFAULT 'ACTIVE',
  created_at    TIMESTAMPTZ NOT NULL DEFAULT now(),
  CONSTRAINT ck_api_clients_status CHECK (status IN ('ACTIVE','DISABLED'))
);

CREATE TABLE accounts (
  id              UUID PRIMARY KEY,
  account_number  VARCHAR(20) NOT NULL UNIQUE,      -- số tài khoản hiển thị/nhập tay
  owner_ref       VARCHAR(64),                      -- id người dùng bên hệ thống thương mại; NULL với TK hệ thống
  type            VARCHAR(30) NOT NULL,             -- USER | SYSTEM_FEE | SYSTEM_CLEARING | SYSTEM_BANK
  bank_code       VARCHAR(20),                      -- chỉ có với SYSTEM_BANK
  currency        CHAR(3) NOT NULL DEFAULT 'VND',
  status          VARCHAR(20) NOT NULL DEFAULT 'ACTIVE',
  balance         BIGINT NOT NULL DEFAULT 0,        -- cache của ledger
  entry_seq       BIGINT NOT NULL DEFAULT 0,        -- số thứ tự bút toán gần nhất của tài khoản
  version         BIGINT NOT NULL DEFAULT 0,        -- optimistic lock (nếu dùng)
  created_at      TIMESTAMPTZ NOT NULL DEFAULT now(),
  updated_at      TIMESTAMPTZ NOT NULL DEFAULT now(),
  CONSTRAINT ck_accounts_type CHECK (type IN ('USER','SYSTEM_FEE','SYSTEM_CLEARING','SYSTEM_BANK')),
  CONSTRAINT ck_accounts_status CHECK (status IN ('ACTIVE','FROZEN','CLOSED')),
  CONSTRAINT ck_accounts_user_balance CHECK (type <> 'USER' OR balance >= 0),
  CONSTRAINT ck_accounts_owner CHECK (type <> 'USER' OR owner_ref IS NOT NULL)
);
-- Mỗi người dùng chỉ có một ví cho mỗi loại tiền
CREATE UNIQUE INDEX uq_accounts_owner_currency ON accounts (owner_ref, currency) WHERE type = 'USER';
-- Mỗi ngân hàng đối tác chỉ có một tài khoản SYSTEM_BANK
CREATE UNIQUE INDEX uq_accounts_system_bank ON accounts (bank_code) WHERE type = 'SYSTEM_BANK';

CREATE TABLE transfers (
  id                          UUID PRIMARY KEY,
  client_id                   UUID NOT NULL REFERENCES api_clients(id),
  idempotency_key             VARCHAR(100) NOT NULL,
  type                        VARCHAR(20) NOT NULL,       -- INTERNAL | OUTBOUND | INBOUND | ADJUSTMENT
  status                      VARCHAR(30) NOT NULL,
  from_account_id             UUID REFERENCES accounts(id),   -- NULL với INBOUND
  to_account_id               UUID REFERENCES accounts(id),   -- NULL với OUTBOUND
  amount                      BIGINT NOT NULL,
  fee_amount                  BIGINT NOT NULL DEFAULT 0,
  currency                    CHAR(3) NOT NULL,
  counterparty_bank_code      VARCHAR(20),                -- OUTBOUND/INBOUND
  counterparty_account_number VARCHAR(50),
  counterparty_account_name   VARCHAR(100),
  description                 VARCHAR(255),
  source_type                 VARCHAR(30),                -- ví dụ 'ORDER', 'ORDER_REFUND'
  source_id                   VARCHAR(64),                -- ví dụ mã đơn hàng
  reversal_of_transfer_id     UUID REFERENCES transfers(id),  -- hoàn tiền trỏ về giao dịch gốc
  failure_code                VARCHAR(50),
  failure_reason              VARCHAR(255),
  version                     BIGINT NOT NULL DEFAULT 0,
  created_at                  TIMESTAMPTZ NOT NULL DEFAULT now(),
  updated_at                  TIMESTAMPTZ NOT NULL DEFAULT now(),
  completed_at                TIMESTAMPTZ,
  CONSTRAINT ck_transfers_type CHECK (type IN ('INTERNAL','OUTBOUND','INBOUND','ADJUSTMENT')),
  CONSTRAINT ck_transfers_status CHECK (status IN (
    'CREATED','VALIDATED','FUNDS_RESERVED','SENT_TO_BANK','COMPLETED',
    'FAILED','REFUNDING','REFUNDED','UNKNOWN','PENDING_REVIEW')),
  CONSTRAINT ck_transfers_amount CHECK (amount > 0),
  CONSTRAINT ck_transfers_fee CHECK (fee_amount >= 0),
  CONSTRAINT ck_transfers_internal CHECK (
    type <> 'INTERNAL' OR (from_account_id IS NOT NULL AND to_account_id IS NOT NULL AND from_account_id <> to_account_id)),
  CONSTRAINT ck_transfers_outbound CHECK (
    type <> 'OUTBOUND' OR (from_account_id IS NOT NULL AND counterparty_bank_code IS NOT NULL AND counterparty_account_number IS NOT NULL)),
  CONSTRAINT ck_transfers_inbound CHECK (
    type <> 'INBOUND' OR (to_account_id IS NOT NULL AND counterparty_bank_code IS NOT NULL))
);
-- Lớp idempotency thứ hai: cùng client + cùng key thì chỉ một transfer
CREATE UNIQUE INDEX uq_transfers_idem ON transfers (client_id, idempotency_key);
-- Idempotency nghiệp vụ: một đơn hàng chỉ có một khoản thanh toán cùng loại
CREATE UNIQUE INDEX uq_transfers_source ON transfers (client_id, source_type, source_id, type)
  WHERE source_id IS NOT NULL;
-- Phục vụ recovery worker: quét transfer kẹt
CREATE INDEX ix_transfers_stuck ON transfers (status, updated_at)
  WHERE status NOT IN ('COMPLETED','FAILED','REFUNDED');
CREATE INDEX ix_transfers_from ON transfers (from_account_id, created_at DESC);
CREATE INDEX ix_transfers_to   ON transfers (to_account_id, created_at DESC);

CREATE TABLE transfer_status_history (
  id           BIGSERIAL PRIMARY KEY,
  transfer_id  UUID NOT NULL REFERENCES transfers(id),
  from_status  VARCHAR(30),
  to_status    VARCHAR(30) NOT NULL,
  actor        VARCHAR(30) NOT NULL,     -- API | KAFKA_CONSUMER | RECOVERY_WORKER | BANK_CALLBACK | ADMIN
  reason       VARCHAR(255),
  created_at   TIMESTAMPTZ NOT NULL DEFAULT now()
);
CREATE INDEX ix_status_history_transfer ON transfer_status_history (transfer_id, id);

-- Một bút toán nghiệp vụ (nhóm các dòng phải cân nhau)
CREATE TABLE ledger_transactions (
  id                      UUID PRIMARY KEY,
  transfer_id             UUID NOT NULL REFERENCES transfers(id),
  type                    VARCHAR(30) NOT NULL,   -- PRINCIPAL | FEE | TO_CLEARING | SETTLE | REFUND | TOPUP | ADJUSTMENT
  description             VARCHAR(255),
  reverses_ledger_txn_id  UUID REFERENCES ledger_transactions(id),
  created_at              TIMESTAMPTZ NOT NULL DEFAULT now(),
  CONSTRAINT ck_ledger_txn_type CHECK (type IN
    ('PRINCIPAL','FEE','TO_CLEARING','SETTLE','REFUND','TOPUP','ADJUSTMENT'))
);
-- Chặn ghi trùng: mỗi bước của một transfer chỉ được ghi sổ đúng một lần
-- (message Kafka giao lại hay recovery chạy lại cũng không ghi đôi được)
CREATE UNIQUE INDEX uq_ledger_txn_step ON ledger_transactions (transfer_id, type);

-- Từng dòng bút toán, append-only
CREATE TABLE ledger_entries (
  id                    BIGSERIAL PRIMARY KEY,
  ledger_transaction_id UUID NOT NULL REFERENCES ledger_transactions(id),
  account_id            UUID NOT NULL REFERENCES accounts(id),
  direction             VARCHAR(6) NOT NULL,
  amount                BIGINT NOT NULL,
  currency              CHAR(3) NOT NULL,
  account_seq           BIGINT NOT NULL,          -- thứ tự bút toán trong tài khoản (1,2,3...)
  balance_after         BIGINT NOT NULL,
  created_at            TIMESTAMPTZ NOT NULL DEFAULT now(),
  CONSTRAINT ck_ledger_entries_direction CHECK (direction IN ('DEBIT','CREDIT')),
  CONSTRAINT ck_ledger_entries_amount CHECK (amount > 0),
  CONSTRAINT uq_ledger_entries_account_seq UNIQUE (account_id, account_seq)
);
CREATE INDEX ix_ledger_entries_txn ON ledger_entries (ledger_transaction_id);
-- Sao kê theo tài khoản: đã có index từ UNIQUE (account_id, account_seq)

-- (1) Ledger không được sửa/xóa
CREATE FUNCTION fn_ledger_entries_immutable() RETURNS trigger AS $$
BEGIN
  RAISE EXCEPTION 'ledger_entries is append-only';
END; $$ LANGUAGE plpgsql;

CREATE TRIGGER trg_ledger_entries_immutable
  BEFORE UPDATE OR DELETE ON ledger_entries
  FOR EACH ROW EXECUTE FUNCTION fn_ledger_entries_immutable();

-- (2) Mỗi ledger_transaction phải cân (tổng debit = tổng credit), kiểm tra lúc COMMIT
CREATE FUNCTION fn_ledger_txn_balanced() RETURNS trigger AS $$
DECLARE diff BIGINT;
BEGIN
  SELECT COALESCE(SUM(CASE direction WHEN 'CREDIT' THEN amount ELSE -amount END), 0)
    INTO diff FROM ledger_entries WHERE ledger_transaction_id = NEW.ledger_transaction_id;
  IF diff <> 0 THEN
    RAISE EXCEPTION 'ledger_transaction % is not balanced (diff=%)', NEW.ledger_transaction_id, diff;
  END IF;
  RETURN NULL;
END; $$ LANGUAGE plpgsql;

CREATE CONSTRAINT TRIGGER trg_ledger_txn_balanced
  AFTER INSERT ON ledger_entries
  DEFERRABLE INITIALLY DEFERRED
  FOR EACH ROW EXECUTE FUNCTION fn_ledger_txn_balanced();
```

Giải thích các điểm dễ sai:

- `entry_seq` trong `accounts` + `account_seq` trong `ledger_entries`: khi khóa tài khoản, tăng `entry_seq` rồi gán cho dòng mới. `UNIQUE (account_id, account_seq)` sẽ **phát hiện ngay** nếu có hai luồng ghi đồng thời mà không khóa đúng cách (lỗi mà `balance` cache có thể che mất).
- `uq_ledger_txn_step` là "chốt chặn cuối" chống ghi sổ trùng, ngoài idempotency ở tầng trên.
- Trigger cân bút toán là `DEFERRABLE INITIALLY DEFERRED` để bạn được insert từng dòng rồi kiểm tra một lần lúc commit.
- Trigger chặn `UPDATE/DELETE` không chặn `TRUNCATE`; dùng `TRUNCATE` để dọn dữ liệu giữa các test.

#### V2: idempotency

```sql
CREATE TABLE idempotency_keys (
  client_id       UUID NOT NULL REFERENCES api_clients(id),
  idempotency_key VARCHAR(100) NOT NULL,
  request_hash    CHAR(64) NOT NULL,            -- hash của method + path + body chuẩn hóa
  status          VARCHAR(20) NOT NULL,         -- IN_PROGRESS | COMPLETED
  resource_type   VARCHAR(30),                  -- 'TRANSFER'
  resource_id     UUID,
  response_code   INT,
  response_body   JSONB,
  locked_at       TIMESTAMPTZ,                  -- để nhận lại key kẹt IN_PROGRESS
  created_at      TIMESTAMPTZ NOT NULL DEFAULT now(),
  expires_at      TIMESTAMPTZ NOT NULL,
  PRIMARY KEY (client_id, idempotency_key),
  CONSTRAINT ck_idem_status CHECK (status IN ('IN_PROGRESS','COMPLETED'))
);
CREATE INDEX ix_idem_expires ON idempotency_keys (expires_at);
```

Luồng: `INSERT ... ON CONFLICT DO NOTHING`. Chèn được thì xử lý tiếp; không chèn được thì đọc bản ghi cũ và so `request_hash`.

#### V3: messaging (outbox và consumer idempotent)

```sql
CREATE TABLE outbox_events (
  id             BIGSERIAL PRIMARY KEY,
  event_id       UUID NOT NULL UNIQUE,          -- id ổn định của message, consumer dùng để chống trùng
  aggregate_type VARCHAR(30) NOT NULL,          -- 'TRANSFER'
  aggregate_id   UUID NOT NULL,
  event_type     VARCHAR(50) NOT NULL,
  topic          VARCHAR(100) NOT NULL,
  message_key    VARCHAR(100) NOT NULL,         -- thường là transferId để giữ thứ tự trong partition
  payload        JSONB NOT NULL,
  created_at     TIMESTAMPTZ NOT NULL DEFAULT now(),
  published_at   TIMESTAMPTZ,
  attempts       INT NOT NULL DEFAULT 0
);
CREATE INDEX ix_outbox_unpublished ON outbox_events (id) WHERE published_at IS NULL;

CREATE TABLE processed_messages (
  consumer_group VARCHAR(100) NOT NULL,
  message_id     UUID NOT NULL,                 -- = outbox_events.event_id
  processed_at   TIMESTAMPTZ NOT NULL DEFAULT now(),
  PRIMARY KEY (consumer_group, message_id)
);
```

Ghi `processed_messages` **trong cùng transaction** với xử lý nghiệp vụ. Trùng khóa nghĩa là message đã xử lý, bỏ qua.

#### V4: tích hợp ngân hàng ngoài

```sql
-- Mỗi lần gọi sang bank là một dòng (retry sinh dòng mới)
CREATE TABLE bank_requests (
  id                UUID PRIMARY KEY,
  transfer_id       UUID NOT NULL REFERENCES transfers(id),
  bank_code         VARCHAR(20) NOT NULL,
  operation         VARCHAR(20) NOT NULL,       -- TRANSFER | INQUIRY
  attempt_no        INT NOT NULL,
  bank_request_id   VARCHAR(100) NOT NULL,      -- idempotency key gửi cho bank; GIỮ NGUYÊN qua các lần retry
  bank_reference    VARCHAR(100),               -- mã giao dịch phía bank (nếu đã nhận được)
  status            VARCHAR(20) NOT NULL,       -- SENT | SUCCEEDED | FAILED | TIMEOUT | UNKNOWN
  http_status       INT,
  error_code        VARCHAR(50),
  request_payload   JSONB,
  response_payload  JSONB,
  sent_at           TIMESTAMPTZ NOT NULL DEFAULT now(),
  responded_at      TIMESTAMPTZ,
  CONSTRAINT ck_bank_requests_op CHECK (operation IN ('TRANSFER','INQUIRY')),
  CONSTRAINT ck_bank_requests_status CHECK (status IN ('SENT','SUCCEEDED','FAILED','TIMEOUT','UNKNOWN')),
  CONSTRAINT uq_bank_requests_attempt UNIQUE (transfer_id, operation, attempt_no)
);
CREATE INDEX ix_bank_requests_transfer ON bank_requests (transfer_id, sent_at);

-- Inbox: mọi callback từ bank được lưu TRƯỚC khi xử lý
CREATE TABLE bank_callbacks (
  id              BIGSERIAL PRIMARY KEY,
  bank_code       VARCHAR(20) NOT NULL,
  event_id        VARCHAR(100) NOT NULL,        -- id sự kiện do bank cấp, dùng chống trùng
  event_type      VARCHAR(50) NOT NULL,         -- TRANSFER_SUCCEEDED | TRANSFER_FAILED | INCOMING_FUNDS
  bank_reference  VARCHAR(100),
  transfer_id     UUID REFERENCES transfers(id),-- NULL nếu chưa gắn được (ví dụ nạp tiền mới đến)
  payload         JSONB NOT NULL,
  signature_valid BOOLEAN NOT NULL,
  status          VARCHAR(20) NOT NULL DEFAULT 'RECEIVED',  -- RECEIVED | PROCESSED | IGNORED | FAILED
  error           VARCHAR(255),
  received_at     TIMESTAMPTZ NOT NULL DEFAULT now(),
  processed_at    TIMESTAMPTZ,
  CONSTRAINT uq_bank_callbacks_event UNIQUE (bank_code, event_id)
);
CREATE INDEX ix_bank_callbacks_pending ON bank_callbacks (id) WHERE status = 'RECEIVED';
```

Hai điểm quan trọng: (1) `bank_request_id` **không đổi** giữa các lần retry của cùng một giao dịch, để bank nhận ra yêu cầu trùng; (2) callback được `INSERT` trước, trùng `event_id` thì bỏ qua, xử lý sau (inbox pattern).

#### V5: đối soát

```sql
CREATE TABLE bank_statement_lines (       -- báo cáo giao dịch lấy từ bank (GET /bank/report)
  id              BIGSERIAL PRIMARY KEY,
  bank_code       VARCHAR(20) NOT NULL,
  statement_date  DATE NOT NULL,
  bank_reference  VARCHAR(100) NOT NULL,
  our_reference   VARCHAR(100),            -- thường là transferId ta gửi cho bank
  direction       VARCHAR(10) NOT NULL,    -- OUT | IN
  amount          BIGINT NOT NULL,
  status          VARCHAR(20) NOT NULL,
  raw             JSONB,
  imported_at     TIMESTAMPTZ NOT NULL DEFAULT now(),
  CONSTRAINT uq_statement_line UNIQUE (bank_code, bank_reference)
);

CREATE TABLE reconciliation_runs (
  id            UUID PRIMARY KEY,
  run_type      VARCHAR(20) NOT NULL,      -- INTERNAL | BANK
  bank_code     VARCHAR(20),
  business_date DATE NOT NULL,
  status        VARCHAR(20) NOT NULL,      -- RUNNING | SUCCEEDED | FAILED
  started_at    TIMESTAMPTZ NOT NULL DEFAULT now(),
  finished_at   TIMESTAMPTZ,
  summary       JSONB
);

CREATE TABLE reconciliation_issues (
  id                     UUID PRIMARY KEY,
  run_id                 UUID NOT NULL REFERENCES reconciliation_runs(id),
  issue_type             VARCHAR(40) NOT NULL,
    -- MISSING_AT_BANK | MISSING_INTERNALLY | AMOUNT_MISMATCH | STATUS_MISMATCH
    -- | LEDGER_UNBALANCED | BALANCE_CACHE_MISMATCH
  transfer_id            UUID REFERENCES transfers(id),
  bank_reference         VARCHAR(100),
  expected_amount        BIGINT,
  actual_amount          BIGINT,
  details                JSONB,
  status                 VARCHAR(20) NOT NULL DEFAULT 'OPEN',   -- OPEN | INVESTIGATING | RESOLVED | IGNORED
  resolution_note        VARCHAR(500),
  resolved_by            VARCHAR(100),
  resolved_at            TIMESTAMPTZ,
  adjustment_transfer_id UUID REFERENCES transfers(id),        -- bút toán điều chỉnh (nếu có)
  created_at             TIMESTAMPTZ NOT NULL DEFAULT now()
);
CREATE INDEX ix_recon_issues_open ON reconciliation_issues (status) WHERE status IN ('OPEN','INVESTIGATING');
```

Đối soát **không sửa dữ liệu cũ**. Muốn sửa số dư thì tạo một `transfer` loại `ADJUSTMENT` với ledger transaction mới, rồi gắn vào `adjustment_transfer_id`.

#### V6: hạn mức và giữ tiền

```sql
CREATE TABLE account_limits (
  account_id        UUID PRIMARY KEY REFERENCES accounts(id),
  per_txn_limit     BIGINT NOT NULL,
  daily_limit       BIGINT NOT NULL,
  daily_count_limit INT NOT NULL,
  updated_at        TIMESTAMPTZ NOT NULL DEFAULT now()
);

CREATE TABLE daily_usage (
  account_id   UUID NOT NULL REFERENCES accounts(id),
  usage_date   DATE NOT NULL,
  total_amount BIGINT NOT NULL DEFAULT 0,
  txn_count    INT NOT NULL DEFAULT 0,
  PRIMARY KEY (account_id, usage_date)
);

-- Giữ tiền tạm (authorize/capture), tùy chọn
ALTER TABLE accounts ADD COLUMN held_balance BIGINT NOT NULL DEFAULT 0;
ALTER TABLE accounts ADD CONSTRAINT ck_accounts_available
  CHECK (type <> 'USER' OR balance - held_balance >= 0);

CREATE TABLE account_holds (
  id          UUID PRIMARY KEY,
  account_id  UUID NOT NULL REFERENCES accounts(id),
  transfer_id UUID REFERENCES transfers(id),
  amount      BIGINT NOT NULL CHECK (amount > 0),
  status      VARCHAR(20) NOT NULL,        -- ACTIVE | CAPTURED | RELEASED | EXPIRED
  expires_at  TIMESTAMPTZ NOT NULL,
  created_at  TIMESTAMPTZ NOT NULL DEFAULT now(),
  updated_at  TIMESTAMPTZ NOT NULL DEFAULT now()
);
CREATE INDEX ix_holds_active_expiry ON account_holds (expires_at) WHERE status = 'ACTIVE';
```

Kiểm tra hạn mức ngày **nguyên tử** (tránh race khi hai giao dịch cùng kiểm tra):

```sql
INSERT INTO daily_usage (account_id, usage_date, total_amount, txn_count)
VALUES (:acc, :day, :amt, 1)
ON CONFLICT (account_id, usage_date) DO UPDATE
   SET total_amount = daily_usage.total_amount + EXCLUDED.total_amount,
       txn_count    = daily_usage.txn_count + 1
 WHERE daily_usage.total_amount + EXCLUDED.total_amount <= :daily_limit
   AND daily_usage.txn_count + 1 <= :daily_count_limit
RETURNING total_amount;     -- không trả về dòng nào = vượt hạn mức
```

Lưu ý: nhánh `INSERT` (lần đầu trong ngày) không bị điều kiện `WHERE` chặn, nên phải kiểm `amount <= per_txn_limit` và `amount <= daily_limit` ở code trước. Câu hỏi thiết kế còn lại cho bạn: nếu giao dịch thất bại sau đó, có hoàn lại `daily_usage` không?

### 2.5 Schema của Fake Bank (DB riêng, nhỏ)

```sql
CREATE TABLE bank_accounts (
  id             UUID PRIMARY KEY,
  account_number VARCHAR(50) NOT NULL UNIQUE,
  holder_name    VARCHAR(100) NOT NULL,
  balance        BIGINT NOT NULL DEFAULT 0 CHECK (balance >= 0),
  status         VARCHAR(20) NOT NULL DEFAULT 'ACTIVE'
);

CREATE TABLE bank_transactions (
  id                 UUID PRIMARY KEY,
  bank_reference     VARCHAR(50) NOT NULL UNIQUE,     -- mã giao dịch bank cấp
  client_request_id  VARCHAR(100) NOT NULL UNIQUE,    -- idempotency key do wallet-service gửi
  type               VARCHAR(30) NOT NULL,            -- RECEIVE_FROM_WALLET | SEND_TO_WALLET
  account_number     VARCHAR(50) NOT NULL,
  amount             BIGINT NOT NULL CHECK (amount > 0),
  currency           CHAR(3) NOT NULL,
  status             VARCHAR(20) NOT NULL,            -- PENDING | SUCCESS | FAILED
  failure_code       VARCHAR(50),
  created_at         TIMESTAMPTZ NOT NULL DEFAULT now(),
  updated_at         TIMESTAMPTZ NOT NULL DEFAULT now(),
  completed_at       TIMESTAMPTZ
);
CREATE INDEX ix_bank_tx_completed ON bank_transactions (completed_at);   -- phục vụ GET /bank/report?date=

-- Callback gửi về wallet-service (có retry, và có thể cố tình gửi trùng/trễ)
CREATE TABLE bank_callback_outbox (
  id                  BIGSERIAL PRIMARY KEY,
  bank_transaction_id UUID NOT NULL REFERENCES bank_transactions(id),
  event_id            UUID NOT NULL UNIQUE,
  event_type          VARCHAR(50) NOT NULL,
  payload             JSONB NOT NULL,
  attempts            INT NOT NULL DEFAULT 0,
  next_attempt_at     TIMESTAMPTZ NOT NULL DEFAULT now(),
  delivered_at        TIMESTAMPTZ
);
CREATE INDEX ix_bank_cb_due ON bank_callback_outbox (next_attempt_at) WHERE delivered_at IS NULL;

-- Công tắc gây lỗi, đổi lúc chạy mà không cần deploy lại
CREATE TABLE chaos_rules (
  id          SERIAL PRIMARY KEY,
  name        VARCHAR(50) NOT NULL UNIQUE,
  enabled     BOOLEAN NOT NULL DEFAULT FALSE,
  mode        VARCHAR(40) NOT NULL,
    -- DELAY | ERROR_5XX | LOSE_RESPONSE | CALLBACK_FAIL_AFTER_SUCCESS
    -- | CALLBACK_DUPLICATE | CALLBACK_LATE | DOWNTIME | REJECT_ACCOUNT
  probability NUMERIC(4,3) NOT NULL DEFAULT 1.0 CHECK (probability BETWEEN 0 AND 1),
  params      JSONB,                       -- ví dụ {"delay_ms":[100,30000]}
  updated_at  TIMESTAMPTZ NOT NULL DEFAULT now()
);
```

Báo cáo giao dịch (`GET /bank/report?date=...`) chỉ là truy vấn trên `bank_transactions`, không cần bảng riêng.

### 2.6 Phía dự án thương mại (thêm vào DB có sẵn)

```sql
ALTER TABLE orders ADD COLUMN payment_status VARCHAR(20) NOT NULL DEFAULT 'UNPAID';
  -- UNPAID | PAYMENT_PENDING | PAID | PAYMENT_FAILED | REFUNDED

CREATE TABLE order_payments (
  id                  UUID PRIMARY KEY,
  order_id            BIGINT NOT NULL REFERENCES orders(id),   -- kiểu theo bảng orders của bạn
  attempt_no          INT NOT NULL,
  idempotency_key     VARCHAR(100) NOT NULL UNIQUE,            -- ổn định: sinh từ order_id + attempt_no, KHÔNG random mỗi lần retry
  wallet_transfer_id  UUID,                                    -- id trả về từ wallet-service
  status              VARCHAR(20) NOT NULL,                    -- PENDING | SUCCEEDED | FAILED | UNKNOWN
  amount              BIGINT NOT NULL,
  failure_code        VARCHAR(50),
  created_at          TIMESTAMPTZ NOT NULL DEFAULT now(),
  updated_at          TIMESTAMPTZ NOT NULL DEFAULT now(),
  UNIQUE (order_id, attempt_no)
);
-- Nếu monolith consume event từ Kafka, thêm bảng processed_messages giống V3.
```

Quy tắc `idempotency_key`: **retry cùng một lần thanh toán thì dùng lại đúng key cũ**; chỉ khi người dùng chủ động thanh toán lại sau khi đã thất bại rõ ràng mới tăng `attempt_no` và sinh key mới.

### 2.7 Tổng hợp index và lý do

| Index | Phục vụ truy vấn nào |
|---|---|
| `uq_transfers_idem (client_id, idempotency_key)` | Chống tạo trùng transfer khi retry |
| `uq_transfers_source (client_id, source_type, source_id, type)` | Một đơn hàng chỉ một khoản thanh toán |
| `ix_transfers_stuck (status, updated_at)` (partial) | Recovery worker quét transfer kẹt |
| `uq_ledger_txn_step (transfer_id, type)` | Chống ghi sổ trùng cho từng bước |
| `uq_ledger_entries_account_seq (account_id, account_seq)` | Sao kê theo tài khoản, đồng thời phát hiện ghi song song sai |
| `ix_outbox_unpublished` (partial) | Relay lấy message chưa gửi |
| `ix_bank_callbacks_pending` (partial) | Xử lý callback chưa xử lý |
| `ix_recon_issues_open` (partial) | Màn hình/việc xử lý sai lệch còn mở |

Index partial (có `WHERE`) nhỏ và nhanh vì các bảng này phần lớn dòng đã ở trạng thái cuối.

### 2.8 Quyết định thiết kế và đánh đổi

| Quyết định | Lựa chọn trong đáp án | Lý do | Phương án khác |
|---|---|---|---|
| Cách ghi sổ | `ledger_transactions` + `ledger_entries` (mỗi tài khoản một dòng) | Có `balance_after`, `account_seq` theo tài khoản; một transfer sinh được nhiều bút toán | Một dòng/giao dịch có `debit_account` và `credit_account` (gọn hơn, kiểu TigerBeetle), khó gắn số dư theo từng tài khoản |
| Transfer và ledger | Tách hai khái niệm | Transfer có vòng đời/trạng thái, ledger thì bất biến | Gộp lại thì không mô tả được saga nhiều bước |
| Chống ghi sổ trùng | `UNIQUE (transfer_id, type)` | Chặn ở DB, không phụ thuộc code | Chỉ kiểm tra ở code (dễ lọt khi message giao lại) |
| Idempotency | Bảng `idempotency_keys` + unique trên `transfers` + unique nghiệp vụ theo `source` | Ba lớp bảo vệ, mỗi lớp chặn một loại trùng | Chỉ Redis với TTL (mất khi Redis mất) |
| Trạng thái | `VARCHAR` + `CHECK` | Dễ đổi khi mở rộng | ENUM Postgres (khó migrate) |
| Số dư | Cache `balance` + ledger là nguồn sự thật | Đọc nhanh, đối soát được | Chỉ tính từ ledger (chậm khi lớn) |
| Gọi bank | Bảng `bank_requests` riêng | Mỗi lần gọi là một sự kiện, phục vụ điều tra/`UNKNOWN` | Ghi đè một cột `status` trên transfer (mất lịch sử) |
| Callback | Bảng inbox `bank_callbacks` + unique `(bank_code, event_id)` | Lưu trước xử lý sau, chống trùng | Xử lý thẳng trong controller (mất khi lỗi giữa chừng) |
| Khóa chính | UUID cho thực thể, `BIGSERIAL` cho bảng chỉ ghi | UUID an toàn để lộ ra ngoài, BIGSERIAL rẻ và có thứ tự | Toàn bộ UUID v4 (index phân mảnh) |
| Hoàn tiền | Transfer/ledger transaction mới trỏ về bản gốc | Không sửa dữ liệu cũ, vẫn truy vết được | UPDATE/DELETE giao dịch cũ (sai nguyên tắc ledger) |

### 2.9 Lỗi thường gặp khi tự thiết kế

1. Chỉ có bảng `accounts.balance` và bảng `transactions` một dòng/giao dịch, không có bút toán kép.
2. Lưu tiền bằng `DECIMAL/FLOAT` lẫn với số nguyên, hoặc quên `currency`.
3. Cho phép `UPDATE/DELETE` trên bảng ledger.
4. Chỉ kiểm tra "số dư không âm" ở code mà không có `CHECK` ở DB.
5. Có `status` trên transfer nhưng không có bảng lịch sử chuyển trạng thái.
6. Không có `UNIQUE` cho idempotency, hoặc chỉ đặt `UNIQUE (idempotency_key)` mà không kèm `client_id`.
7. Ghi đè kết quả gọi bank lên transfer, không lưu từng lần gọi.
8. Không có bảng inbox cho callback nên callback trùng bị xử lý hai lần.
9. Quên bảng `processed_messages` cho consumer Kafka.
10. Không có index cho truy vấn nóng (recovery quét kẹt, outbox chưa gửi), dẫn đến full scan khi dữ liệu lớn.
11. Không tách được "một transfer, nhiều ledger transaction", nên hoàn tiền phải sửa dữ liệu cũ.
12. Set số dư ban đầu trực tiếp bằng `UPDATE accounts SET balance = ...`, làm ledger lệch ngay từ đầu.

### 2.10 Rubric tự chấm

Đánh dấu thiết kế của bạn đạt bao nhiêu mục. Mục tiêu là đạt các mục 1-9 trước khi viết code Giai đoạn 1.

1. [ ] Tiền là số nguyên, có `currency`, không dùng float.
2. [ ] Ledger append-only, được **ép ở DB** (trigger hoặc quyền), không chỉ quy ước.
3. [ ] Mỗi ledger transaction cân (debit = credit), có cơ chế ép ở DB hoặc có test bắt buộc.
4. [ ] Tách được `transfer` (có trạng thái) khỏi bút toán ledger; một transfer có thể có nhiều bút toán.
5. [ ] Chặn ghi sổ trùng ở DB (ví dụ `UNIQUE (transfer_id, type)`).
6. [ ] Số dư không âm được ép bằng `CHECK` ở DB.
7. [ ] Idempotency có ít nhất hai lớp: key theo client + ràng buộc unique nghiệp vụ.
8. [ ] Có thứ tự bút toán theo tài khoản (`account_seq`) hoặc cơ chế tương đương để phát hiện ghi song song sai.
9. [ ] Có lịch sử chuyển trạng thái của transfer.
10. [ ] Lưu từng lần gọi bank riêng; idempotency key gửi bank giữ nguyên qua các lần retry.
11. [ ] Callback lưu dạng inbox với `UNIQUE (bank_code, event_id)`.
12. [ ] Outbox cùng transaction với dữ liệu; consumer có `processed_messages`.
13. [ ] Có nơi ghi sai lệch đối soát và bút toán điều chỉnh, không sửa dữ liệu cũ.
14. [ ] Có index phù hợp cho recovery, outbox, sao kê tài khoản.
15. [ ] Hoàn tiền là bản ghi mới trỏ về giao dịch gốc.

### 2.11 Câu SQL kiểm tra bất biến (dùng trong test và reconciliation)

```sql
-- (1) Tổng debit = tổng credit toàn hệ thống
SELECT
  SUM(CASE WHEN direction='DEBIT'  THEN amount ELSE 0 END) AS total_debit,
  SUM(CASE WHEN direction='CREDIT' THEN amount ELSE 0 END) AS total_credit
FROM ledger_entries;

-- (1b) Ledger transaction nào không cân
SELECT ledger_transaction_id,
       SUM(CASE direction WHEN 'CREDIT' THEN amount ELSE -amount END) AS diff
FROM ledger_entries GROUP BY ledger_transaction_id HAVING SUM(CASE direction WHEN 'CREDIT' THEN amount ELSE -amount END) <> 0;

-- (2) Không tài khoản USER nào âm
SELECT id, balance FROM accounts WHERE type='USER' AND balance < 0;

-- (4) Balance cache lệch ledger
SELECT a.id, a.balance AS cached,
       COALESCE(SUM(CASE WHEN e.direction='CREDIT' THEN e.amount ELSE -e.amount END),0) AS from_ledger
FROM accounts a LEFT JOIN ledger_entries e ON e.account_id = a.id
GROUP BY a.id, a.balance
HAVING a.balance <> COALESCE(SUM(CASE WHEN e.direction='CREDIT' THEN e.amount ELSE -e.amount END),0);

-- (5) Transfer nội bộ COMPLETED nhưng không có bút toán
SELECT t.id FROM transfers t
LEFT JOIN ledger_transactions l ON l.transfer_id = t.id AND l.type = 'PRINCIPAL'
WHERE t.type = 'INTERNAL' AND t.status = 'COMPLETED' AND l.id IS NULL;

-- (6) Khoảng trống trong account_seq (dấu hiệu ghi sai)
SELECT account_id, account_seq FROM (
  SELECT account_id, account_seq,
         LAG(account_seq) OVER (PARTITION BY account_id ORDER BY account_seq) AS prev
  FROM ledger_entries) x
WHERE prev IS NOT NULL AND account_seq <> prev + 1;
```

---

## 3. Các giai đoạn thực hiện

### Giai đoạn 0: Thiết kế và môi trường (1–2 ngày)

- [ ] Dựng `docker-compose.yml`: PostgreSQL, Kafka (chế độ KRaft, không cần Zookeeper).
- [ ] Tạo project Spring Boot, Flyway, Testcontainers chạy được.
- [ ] **Tự thiết kế schema V1** (mục 2.0 hướng dẫn cách tự làm rồi đối chiếu), sau đó viết thành migration Flyway.
- [ ] Viết 4 invariants thành 4 hàm/query kiểm tra dùng lại được trong test.
- [ ] Vẽ state machine của `transfers` ra giấy (xem Giai đoạn 3).

**Mốc:** có test rỗng chạy được với Postgres thật qua Testcontainers.

---

### Giai đoạn 1: Chuyển tiền nội bộ đúng đắn trên một database

Mục tiêu: **đúng trước, nhanh sau.** Chưa cần Kafka, chưa cần idempotency.

**Việc cần làm**

- [ ] API `POST /transfers` (đồng bộ) chuyển tiền giữa 2 tài khoản nội bộ.
- [ ] Trong **một** transaction: khóa 2 tài khoản → kiểm tra trạng thái ACTIVE, số dư đủ → ghi 2 ledger entries → cập nhật `balance` → set transfer `COMPLETED`.
- [ ] Khóa theo **thứ tự cố định** (ví dụ `ORDER BY id`) để tránh deadlock khi A→B và B→A chạy cùng lúc.
- [ ] Ràng buộc DB (`CHECK`, `FOREIGN KEY`, `UNIQUE`) làm lớp bảo vệ cuối.

**Gợi ý Spring Boot / JPA**

```java
public interface AccountRepository extends JpaRepository<Account, UUID> {

    // Khóa nhiều tài khoản theo thứ tự id để tránh deadlock
    @Lock(LockModeType.PESSIMISTIC_WRITE)
    @Query("select a from Account a where a.id in :ids order by a.id")
    List<Account> lockAllOrdered(@Param("ids") Collection<UUID> ids);
}
```

```java
@Service
@RequiredArgsConstructor
public class LedgerService {

    private final AccountRepository accounts;
    private final LedgerEntryRepository entries;
    private final LedgerTransactionRepository ledgerTxns;

    @Transactional
    public void transfer(UUID transferId, UUID fromId, UUID toId, long amount) {
        List<Account> locked = accounts.lockAllOrdered(List.of(fromId, toId));
        Account from = pick(locked, fromId);
        Account to   = pick(locked, toId);

        if (from.getStatus() != ACTIVE || to.getStatus() != ACTIVE) throw new AccountNotActiveException();
        if (from.getBalance() < amount) throw new InsufficientFundsException();

        from.setBalance(from.getBalance() - amount);
        to.setBalance(to.getBalance() + amount);

        // Mỗi tài khoản: tăng entry_seq rồi gán cho dòng bút toán (xem mục 2.4, account_seq)
        LedgerTransaction txn = ledgerTxns.save(LedgerTransaction.of(transferId, "PRINCIPAL"));
        entries.save(LedgerEntry.debit(txn.getId(), fromId, amount, from.nextSeq(), from.getBalance()));
        entries.save(LedgerEntry.credit(txn.getId(), toId, amount, to.nextSeq(), to.getBalance()));
    }
}
```

**Câu hỏi phải tự trả lời**

- Dùng khóa bi quan (`FOR UPDATE`) hay lạc quan (`@Version` + retry) cho tài khoản? Đánh đổi là gì khi contention cao?
- Mức isolation nào (READ COMMITTED đủ chưa khi đã có `FOR UPDATE`)? Khi nào cần SERIALIZABLE?
- Chuyển cho chính mình (`from == to`) xử lý ra sao?

**Mốc:** chạy 1000 request song song từ cùng một tài khoản (ExecutorService/CountDownLatch trong test) → không âm, tổng tiền hệ thống không đổi, cả 4 invariants đúng.

---

### Giai đoạn 2: Idempotency

**Việc cần làm**

- [ ] Client gửi header `Idempotency-Key` (UUID). Bắt buộc với `POST /transfers`.
- [ ] Bước đầu request: `INSERT INTO idempotency_keys ... ON CONFLICT DO NOTHING`.
  - Chèn thành công → tiếp tục xử lý.
  - Đã tồn tại + `COMPLETED` + cùng `request_hash` → trả lại response cũ.
  - Đã tồn tại + `IN_PROGRESS` → trả `409 Conflict` (hoặc chờ ngắn).
  - Đã tồn tại + `request_hash` khác → `422 Unprocessable Entity`.
- [ ] Lưu kết quả và chuyển key sang `COMPLETED` **trong cùng transaction** với nghiệp vụ.
- [ ] Đặt TTL cho key (ví dụ 24h) + job dọn dẹp.
- [ ] `UNIQUE (client_id, idempotency_key)` trên `transfers` là lớp bảo vệ thứ hai, và `UNIQUE (client_id, source_type, source_id, type)` là lớp idempotency nghiệp vụ (một đơn hàng chỉ một khoản thanh toán). Xem mục 2.4.

**Cần cẩn thận**

- Hai request cùng key đến **đồng thời** (race).
- Request đang xử lý thì process chết: key kẹt ở `IN_PROGRESS`. Cần cơ chế timeout/nhận lại (recovery).
- Chỉ lưu response cho kết quả có tính chất cuối (thành công hoặc lỗi nghiệp vụ). Lỗi tạm thời (5xx) có nên cho phép retry cùng key không?

**Mốc:** gửi cùng một request 50 lần song song → đúng 1 lần trừ tiền, 49 lần nhận cùng kết quả.

---

### Giai đoạn 3: State machine + bất đồng bộ với Kafka

**3.1 State machine cho transfer**

Các trạng thái hợp lệ khớp với `CHECK` trên `transfers.status` (mục 2.4):

```
Chuyển nội bộ (INTERNAL): bút toán PRINCIPAL ghi cả debit lẫn credit trong MỘT transaction,
                          nên không cần trạng thái "đã trừ, chưa cộng".

  CREATED ──► VALIDATED ──► COMPLETED
     │            │
     ▼            ▼
   FAILED       FAILED

Chuyển ra ngân hàng (OUTBOUND): xem Giai đoạn 4.

  CREATED ─► VALIDATED ─► FUNDS_RESERVED ─► SENT_TO_BANK ─► COMPLETED
                              │                 │
                              │                 ├─► FAILED ─► REFUNDING ─► REFUNDED
                              │                 └─► UNKNOWN ─► (inquiry/đối soát) ─► COMPLETED | REFUNDING
                              └─► PENDING_REVIEW (kẹt, cần xử lý thủ công)
```

- Định nghĩa các chuyển trạng thái hợp lệ trong một enum/bảng; mọi chuyển trạng thái đi qua **một hàm duy nhất** và ghi vào `transfer_status_history`.
- Chuyển trạng thái phải có điều kiện: `UPDATE transfers SET status='VALIDATED' WHERE id=? AND status='CREATED'`. Nếu 0 row bị ảnh hưởng nghĩa là ai đó đã xử lý rồi (an toàn cho message trùng).
- Các trạng thái kết thúc (`COMPLETED`, `FAILED`, `REFUNDED`) không được đi tiếp.
- Ở Giai đoạn 3 bạn mới có chuyển nội bộ, nên chỉ cần nhánh đầu; nhánh OUTBOUND làm ở Giai đoạn 4.

**3.2 Đổi API sang bất đồng bộ**

- `POST /transfers` → tạo transfer `CREATED` + ghi outbox → trả `202 Accepted` + `transferId`.
- `GET /transfers/{id}` để client poll trạng thái (webhook làm sau).

**3.3 Transactional Outbox**

Vấn đề: ghi DB xong rồi gửi Kafka — một trong hai có thể thất bại (dual write).
Giải pháp: ghi `outbox_events` **cùng transaction** với dữ liệu; một relay đọc outbox và gửi lên Kafka.

- Cách đơn giản nên bắt đầu: **polling relay** bằng `@Scheduled`, dùng `SELECT ... FOR UPDATE SKIP LOCKED` để nhiều instance không đọc trùng.
- Cách nâng cao sau này: Debezium (CDC).

```java
@Scheduled(fixedDelay = 200)
@Transactional
public void publish() {
    List<OutboxEvent> batch = outboxRepo.lockNextBatch(100); // FOR UPDATE SKIP LOCKED
    for (OutboxEvent e : batch) {
        kafkaTemplate.send(e.getTopic(), e.getMessageKey(), e.getPayload()).get(5, TimeUnit.SECONDS);
        e.markPublished();
    }
}
```

> Lưu ý: relay có thể gửi Kafka thành công nhưng chết trước khi đánh dấu `published` → message bị gửi lại. **Đây là at-least-once, và consumer phải idempotent.**

**3.4 Thiết kế Kafka**

| Topic | Key | Nội dung |
|---|---|---|
| `transfer.requested` | `transferId` | yêu cầu chuyển tiền mới |
| `ledger.debited` / `ledger.credited` | `transferId` | kết quả bút toán |
| `transfer.completed` / `transfer.failed` | `transferId` | kết quả cuối |
| `bank.outbound.requested` | `transferId` | gửi sang Fake Bank |
| `*.DLT` | | dead letter cho mỗi topic |

Điểm phải quyết định:

- **Message key**: dùng `transferId` để mọi sự kiện của một transfer vào cùng partition → giữ thứ tự. Nếu cần thứ tự theo tài khoản, key theo `accountId`.
- **Số partition** và số consumer trong group (concurrency).
- Producer: `acks=all`, `enable.idempotence=true`, `retries` cao + `delivery.timeout.ms` hợp lý.
- Consumer: tắt auto-commit, dùng `AckMode.RECORD` hoặc manual ack, chỉ commit offset **sau khi** xử lý và commit DB xong.
- Consumer idempotent: chèn `processed_messages (consumer, message_id)` **trong cùng transaction** với xử lý; trùng khóa nghĩa là đã xử lý, bỏ qua.
- **Retry và DLT**: dùng `DefaultErrorHandler` + `DeadLetterPublishingRecoverer` với `ExponentialBackOff`; phân biệt lỗi tạm thời (retry) và lỗi vĩnh viễn (đẩy DLT ngay, ví dụ `InsufficientFundsException` là lỗi nghiệp vụ, không retry).
- `@RetryableTopic` (retry topic không chặn partition) là lựa chọn nâng cao.

> Bạn đã quen RabbitMQ nên lưu ý sự khác biệt: Kafka là **log**, không xóa message khi consume; consumer tự quản lý offset; thứ tự chỉ được đảm bảo **trong một partition**; không có "requeue một message" như RabbitMQ, retry phải thiết kế bằng retry topic hoặc tự publish lại.

**Mốc:** kill ứng dụng ngay sau khi trừ tiền, trước khi cộng tiền → khởi động lại, transfer tự tiếp tục và hoàn tất, không mất/không nhân đôi tiền.

---

### Giai đoạn 4: Fake Bank và chuyển tiền liên ngân hàng (tùy chọn theo tiến độ)

Chỉ làm khi phần lõi (Giai đoạn 1-3) đã vững. Đây là phần khó nhất về xử lý lỗi. Schema xem mục 2.4 (V4) và 2.5.

**4.1 Fake Bank** (một Spring Boot app riêng, DB riêng, vài trăm dòng code)

API:

- `POST /bank/transfers`: nhận yêu cầu (kèm idempotency key `client_request_id`). Cùng key thì trả lại kết quả cũ, không xử lý lại.
- `GET /bank/transfers/{ref}`: tra cứu trạng thái (inquiry).
- `GET /bank/report?date=YYYY-MM-DD`: báo cáo giao dịch trong ngày để đối soát.
- Gọi **callback** về wallet-service khi giao dịch xong (có ký chữ ký đơn giản, ví dụ HMAC).

Chế độ gây rối, bật/tắt qua bảng `chaos_rules` lúc chạy:

- Chậm ngẫu nhiên (100ms - 30s).
- Trả 500/503 ngẫu nhiên.
- **Xử lý thành công nhưng response bị "mất"** (bên gọi thấy timeout dù tiền đã đi).
- Callback báo thành công rồi sau đó báo thất bại (và ngược lại).
- Callback bị gửi **hai lần**, hoặc trễ, hoặc sai thứ tự.
- Từ chối vì tài khoản đích không hợp lệ (lỗi vĩnh viễn).
- Sập hoàn toàn trong N phút.

**4.2 Chuyển ra ngân hàng ngoài (OUTBOUND) theo saga**

```
CREATED → VALIDATED → FUNDS_RESERVED → SENT_TO_BANK → COMPLETED
                           │                │
                           │                ├─(bank từ chối rõ ràng)→ FAILED → REFUNDING → REFUNDED
                           │                └─(timeout/không rõ)────→ UNKNOWN → inquiry/đối soát → COMPLETED hoặc REFUNDING
```

Bút toán từng bước xem bảng loại 2 ở mục 1.3 (`TO_CLEARING`, `SETTLE`, `FEE`, `REFUND`). Mỗi bước dùng `UNIQUE (transfer_id, type)` để không ghi trùng.

Quy tắc quan trọng:

- Timeout **không có nghĩa là thất bại**. Chuyển sang `UNKNOWN`, gọi inquiry, chờ callback hoặc đối soát. Không hoàn tiền vội.
- Idempotency key gửi cho bank (`bank_request_id`) giữ nguyên qua mọi lần retry.
- Chỉ hoàn tiền (`REFUND`) khi bank **xác nhận** thất bại (hoặc quá hạn và đã được duyệt thủ công).
- Circuit breaker mở thì transfer ở lại `FUNDS_RESERVED` và được worker thử lại sau, không phải lý do để hoàn tiền.

**4.3 Nạp tiền từ ngân hàng ngoài (INBOUND)**

- Bank gửi callback `INCOMING_FUNDS` (có `event_id`). Lưu vào `bank_callbacks` trước (unique `(bank_code, event_id)`), xác thực chữ ký, rồi mới tạo transfer `INBOUND` và bút toán `TOPUP`.
- Callback trùng thì bỏ qua nhờ unique; callback tới trước khi bạn kịp có transfer thì vẫn phải xử lý được.

**4.4 Gọi ra ngoài bằng Resilience4j**

```yaml
resilience4j:
  timelimiter:
    instances:
      bank: { timeout-duration: 3s }
  retry:
    instances:
      bank:
        max-attempts: 3
        wait-duration: 500ms
        enable-exponential-backoff: true
        exponential-backoff-multiplier: 2
        enable-randomized-wait: true          # jitter
        retry-exceptions: [java.io.IOException, org.springframework.web.client.HttpServerErrorException]
        ignore-exceptions: [com.example.BankRejectedException]   # lỗi vĩnh viễn, không retry
  circuitbreaker:
    instances:
      bank:
        sliding-window-size: 20
        failure-rate-threshold: 50
        wait-duration-in-open-state: 30s
        permitted-number-of-calls-in-half-open-state: 3
  bulkhead:
    instances:
      bank: { max-concurrent-calls: 20 }
```

- Cấu hình timeout ở cả HTTP client (connect/read) lẫn tầng bao ngoài.
- Kiểm tra thứ tự aspect mặc định của Resilience4j (Retry, CircuitBreaker, RateLimiter, TimeLimiter, Bulkhead) rồi chỉnh cho đúng ý.
- Mỗi lần gọi ghi một dòng `bank_requests`.

**Mốc:** chạy Fake Bank với mọi chế độ gây lỗi bật lên; sau khi hệ thống ổn định, mọi transfer đều ở trạng thái cuối xác định, hoặc `UNKNOWN` có thể đối soát; 4 invariants vẫn đúng.

---

### Giai đoạn 5: Bảo vệ hệ thống

- [ ] **Rate limit** ở API: Bucket4j (+ Redis nếu nhiều instance) hoặc Resilience4j RateLimiter cho bản đơn giản; theo user/API key/IP; trả `429` + header `Retry-After`.
- [ ] **Hạn mức nghiệp vụ**: tối đa/giao dịch, tối đa/ngày, số giao dịch/phút. Chú ý race khi kiểm tra hạn mức ngày (phải nguyên tử với việc ghi giao dịch).
- [ ] **Xác thực/phân quyền**: JWT đơn giản; chỉ chủ tài khoản được chuyển từ tài khoản của mình.
- [ ] **Chống bất thường cơ bản**: tài khoản đích mới + số tiền lớn, nhiều giao dịch liên tiếp → đánh dấu/tạm giữ.
- [ ] **Đóng băng tài khoản** (`FROZEN`): chặn cả gửi lẫn nhận.
- [ ] Không log dữ liệu nhạy cảm (số tài khoản đầy đủ, token).

**Mốc:** bắn 1000 request/giây từ một user → phần lớn bị `429`, hệ thống không quá tải, giao dịch hợp lệ vẫn qua.

---

### Giai đoạn 6: Observability tối thiểu (tạm không đi sâu Prometheus)

Bạn chưa quen phân tích metrics nên **chưa cần dashboard phức tạp**. Thay vào đó dùng những thứ dễ hiểu và đủ giá trị:

**Bắt buộc (rẻ, hiệu quả nhất)**

1. **Structured log kèm ID xuyên suốt.** Gắn `transferId` và `idempotencyKey` vào MDC để mọi dòng log của một giao dịch đều tìm được bằng một từ khóa:

   ```java
   MDC.put("transferId", transferId.toString());
   log.info("transfer.state_changed from={} to={}", from, to);
   ```

   Log dạng JSON (logstash-logback-encoder) nếu muốn.

2. **Bảng lịch sử trạng thái** `transfer_status_history`: bạn xem được "giao dịch này đi qua những bước nào, lúc nào" chỉ bằng SQL. Đây là "observability của nghiệp vụ", có giá trị hơn nhiều biểu đồ.

3. **Câu SQL "sức khỏe hệ thống"** thay cho dashboard:

   ```sql
   -- Transfer kẹt ở trạng thái trung gian quá 5 phút
   SELECT id, status, updated_at FROM transfers
   WHERE status NOT IN ('COMPLETED','FAILED','REFUNDED')
     AND updated_at < now() - interval '5 minutes';

   -- Số transfer theo trạng thái
   SELECT status, count(*) FROM transfers GROUP BY status;

   -- Outbox bị ùn
   SELECT count(*) FROM outbox_events WHERE published_at IS NULL;
   ```

4. **Actuator health** (`/actuator/health`) cho DB và Kafka.

**Tùy chọn khi sẵn sàng (chỉ 3 chỉ số, đừng theo dõi hết)**

Nếu muốn đưa lên Prometheus, chỉ cần học đọc 3 thứ, mỗi thứ trả lời một câu hỏi cụ thể:

| Chỉ số | Câu hỏi nó trả lời | Dấu hiệu xấu |
|---|---|---|
| Số transfer kẹt (gauge từ câu SQL trên) | Có giao dịch nào bị bỏ quên không? | > 0 kéo dài |
| Tỷ lệ lỗi gọi Fake Bank / trạng thái circuit breaker | Đối tác có đang hỏng không? | breaker `OPEN`, tỷ lệ lỗi tăng |
| Consumer lag của Kafka | Xử lý có theo kịp không? | lag tăng liên tục |

Micrometer + Resilience4j đã tự xuất metrics cho breaker/retry, bạn chỉ cần bật Actuator + Prometheus endpoint. Tracing (OpenTelemetry) để dành sau cùng.

---

### Giai đoạn 7: Recovery và Reconciliation

**Recovery worker** (`@Scheduled`, dùng `SKIP LOCKED` để nhiều instance không tranh nhau)

- Quét transfer kẹt ở trạng thái trung gian quá ngưỡng thời gian, quyết định **tiếp tục** hoặc **hoàn tác** dựa trên trạng thái hiện tại:
  - `FUNDS_RESERVED` lâu mà chưa gửi bank → gửi lại (idempotent, cùng `bank_request_id`).
  - `SENT_TO_BANK`/`UNKNOWN` → gọi **inquiry API** hỏi trạng thái thật rồi mới quyết.
  - Quá số lần thử / quá hạn → chuyển `PENDING_REVIEW` để xử lý thủ công.
- Nhận lại các `idempotency_keys` kẹt `IN_PROGRESS`.

**Reconciliation job** (chạy định kỳ, ví dụ mỗi đêm hoặc mỗi giờ)

- Chạy các câu kiểm tra bất biến ở mục 2.11 và ghi kết quả lệch vào `reconciliation_issues`.
- **Đối soát với Fake Bank**: lấy báo cáo giao dịch của bank (Fake Bank cung cấp endpoint `GET /bank/report?date=`) so với `transfers` của bạn. Tìm 3 loại lệch:
  1. Bank có, mình không có/đang thất bại.
  2. Mình có `COMPLETED`, bank không có.
  3. Lệch số tiền.
- Mỗi lệch phải tạo **bản ghi đối soát** (`reconciliation_issues`) và cách xử lý (bút toán điều chỉnh có lý do, không sửa dữ liệu cũ).

**DLT tooling**

- Endpoint/command để xem message trong DLT và replay có kiểm soát (replay cũng phải idempotent).

**Runbook** (`docs/runbook.md`): với mỗi loại sự cố, viết "triệu chứng → cách xác nhận (câu SQL) → cách xử lý".

**Mốc:** cố tình tạo sai lệch (sửa tay một dòng trong Fake Bank) → job đối soát phát hiện và báo đúng.

---

### Giai đoạn 8: Kiểm thử độ tin cậy

Xem chi tiết ở mục 5. Mục tiêu giai đoạn này: **phá hệ thống có chủ đích** và sửa cho đến khi các invariants luôn đúng.

---

### Giai đoạn 9: Tích hợp với dự án thương mại (client của wallet-service)

Không phụ thuộc Giai đoạn 4, có thể làm ngay sau Giai đoạn 3. Schema phía thương mại xem mục 2.6.

**Use case:** thanh toán đơn hàng bằng ví. Đây là bài học **phía client**, bổ sung cho bài học phía orchestrator ở Giai đoạn 4.

**Luồng chính**

1. Checkout trong monolith tạo `order_payments` (trạng thái `PENDING`) với `idempotency_key` ổn định (từ `order_id` + `attempt_no`), đặt `orders.payment_status = PAYMENT_PENDING`.
2. Gọi `POST /transfers` sang wallet-service (người mua → ví người bán/nền tảng, kèm `source_type='ORDER'`, `source_id=order_id`), có timeout, retry với **cùng key**, circuit breaker.
3. Nhận kết quả qua polling `GET /transfers/{id}` hoặc event Kafka `transfer.completed` / `transfer.failed`. Consumer phía monolith phải idempotent (`processed_messages`).
4. Cập nhật `order_payments` và `orders.payment_status` (`PAID`, `PAYMENT_FAILED`, hoặc giữ `PENDING`/`UNKNOWN` nếu chưa rõ).
5. Hủy đơn: tạo transfer hoàn tiền mới (`source_type='ORDER_REFUND'`, `reversal_of_transfer_id` trỏ về giao dịch gốc).

**Câu hỏi thực tế phải trả lời**

- Gọi wallet-service bị timeout thì đơn hàng ở trạng thái gì? (Gợi ý: `PAYMENT_PENDING`, hỏi lại bằng `GET` chứ không tạo thanh toán mới.)
- Khách bấm thanh toán hai lần? (Cùng `attempt_no` thì cùng key; ràng buộc `uq_transfers_source` chặn trùng ở phía wallet.)
- Tiền đã trừ nhưng monolith chết trước khi ghi nhận? (Consumer nhận lại event khi khởi động; job phía monolith quét `order_payments` ở `PENDING` quá lâu và hỏi lại.)
- Ai là nguồn sự thật về "đơn đã thanh toán"? (Wallet-service là nguồn sự thật về tiền; monolith chỉ phản chiếu trạng thái.)
- Hủy đơn khi thanh toán còn đang `PENDING`?
- Đối soát giữa `order_payments` và `transfers` (đơn `PAID` nhưng không có transfer, hoặc ngược lại).

**Mốc:** tắt wallet-service giữa lúc checkout, bật lại; đơn hàng cuối cùng hoặc `PAID` đúng một lần, hoặc `PAYMENT_FAILED` rõ ràng, không có đơn nào bị trừ tiền hai lần hay bị trừ tiền mà không ghi nhận.

---

## 4. Danh sách vấn đề khó cần suy nghĩ

### Về đúng đắn

1. **Double-spend do race condition:** hai request cùng đọc số dư 100, cùng trừ 80. Chọn khóa bi quan/lạc quan/serializable và chấp nhận đánh đổi hiệu năng.
2. **Deadlock:** A→B và B→A đồng thời. Cần thứ tự khóa nhất quán.
3. **Kiểm tra hạn mức cũng có race:** "50 triệu/ngày" bị vượt nếu kiểm tra và ghi không nguyên tử.
4. **Làm tròn và phí:** phí tính thế nào, tiền lẻ đi về đâu để tổng vẫn cân?
5. **Chuyển cho chính mình, số tiền 0/âm, tràn số `long`.**

### Về lỗi mạng và tính không chắc chắn

6. **Timeout không có nghĩa là thất bại.** Gọi bank bị timeout, tiền có thể đã đi. Không được retry mù quáng cũng không được hoàn tiền vội. Cần trạng thái `UNKNOWN`, inquiry API và đối soát.
7. **Exactly-once là ảo tưởng.** Thực tế là at-least-once + idempotency. Xác định rõ từng ranh giới (client→API, API→DB, DB→Kafka, Kafka→consumer, mình→bank) và cơ chế idempotent ở mỗi ranh giới.
8. **Partial failure:** đã trừ tiền nhưng bước sau chết. Ai phát hiện, ai sửa, sửa bằng cách nào?
9. **Dual write:** ghi DB rồi gửi Kafka. Outbox giải quyết, nhưng hãy chắc bạn hiểu vì sao và hiểu hậu quả (message trùng).
10. **Callback trùng, trễ, sai thứ tự** từ đối tác: xử lý bằng state machine chỉ cho phép chuyển tiến hợp lệ.
11. **Rebalance Kafka giữa chừng:** consumer đang xử lý thì partition bị chuyển sang consumer khác, message có thể được xử lý hai lần.
12. **Poison message:** một message luôn lỗi có thể chặn cả partition nếu retry tại chỗ không giới hạn.

### Về dữ liệu và vận hành

13. **Không xóa, không sửa:** sai sót xử lý bằng reversal/adjustment. Thiết kế nghiệp vụ hoàn tiền/chargeback thế nào?
14. **Balance cache lệch ledger:** phát hiện và tự sửa thế nào?
15. **Hot account:** một tài khoản (như tài khoản phí hoặc merchant lớn) bị khóa liên tục làm nghẽn hệ thống. Cân nhắc sub-account/batch/ghi phí bất đồng bộ.
16. **Migration khi đang có giao dịch bay**, và **đổi state machine** khi vẫn còn transfer ở phiên bản cũ.
17. **Thời gian:** dùng thời gian DB hay app? Múi giờ, cutoff ngày cho hạn mức và đối soát.
18. **Bảo mật:** replay attack, chỉnh sửa `amount` giữa đường (ký request), lộ dữ liệu trong log.
19. **Sắp xếp/phân trang lịch sử giao dịch** với dữ liệu lớn (index, keyset pagination).
20. **Multi-currency** (mở rộng): tỷ giá khóa lúc nào, ai chịu chênh lệch?

---

## 5. Kịch bản kiểm thử bắt buộc

**Concurrency (Testcontainers + nhiều thread)**

- [ ] 1000 request song song từ cùng một tài khoản (tổng vượt số dư) → không âm.
- [ ] A→B và B→A song song hàng nghìn lần → không deadlock, tổng tiền không đổi.
- [ ] 50 request cùng `Idempotency-Key` song song → đúng 1 lần trừ tiền.

**Property-based (jqwik)**

- [ ] Sinh ngẫu nhiên chuỗi thao tác (chuyển, chuyển trùng key, chuyển thất bại, reversal) → sau cùng cả 4 invariants đúng.

**Crash test (dừng process tại từng điểm)**

- [ ] Sau khi ghi transfer, trước khi ghi outbox (không thể xảy ra nếu cùng transaction: hãy chứng minh).
- [ ] Sau khi ghi outbox, trước khi gửi Kafka.
- [ ] Sau khi gửi Kafka, trước khi đánh dấu `published`.
- [ ] Sau khi trừ tiền, trước khi gọi bank.
- [ ] Sau khi gọi bank, trước khi nhận response.
- [ ] Sau khi nhận callback, trước khi commit DB.
- [ ] Ở mỗi điểm: khởi động lại → hệ thống hội tụ về trạng thái đúng, invariants đúng.

**Fault injection**

- [ ] Fake Bank ở từng chế độ lỗi ở mục 4.1.
- [ ] Toxiproxy đặt giữa app và Postgres/Kafka/Fake Bank: thêm độ trễ, ngắt kết nối, chặn gói tin.
- [ ] Dừng Kafka broker vài phút rồi bật lại.
- [ ] Postgres chậm/đầy connection pool.

**Load test** (k6 hoặc Gatling)

- [ ] Đo throughput, latency, tìm hot account, quan sát circuit breaker mở/đóng.

**Kiểm chứng cuối mỗi kịch bản:** chạy 4 câu SQL bất biến. Nếu chỉ một câu sai, đó là bug nghiêm trọng.

---

## 6. Thứ tự làm và mốc hoàn thành

| Bước | Nội dung | Mốc |
|---|---|---|
| 1 | Giai đoạn 0: môi trường + **tự thiết kế schema V1**, đối chiếu rubric mục 2.10 | Đạt các mục 1-9 của rubric; test rỗng chạy được với Postgres thật |
| 2 | Giai đoạn 1: chuyển tiền nội bộ đồng bộ | 1000 request song song vẫn đúng 4 bất biến |
| 3 | Giai đoạn 2: idempotency (tự thiết kế V2 trước) | 50 request trùng key chỉ trừ 1 lần |
| 4 | Giai đoạn 3: state machine + outbox + Kafka (tự thiết kế V3 trước) | Kill giữa chừng vẫn hội tụ đúng |
| 5a | Giai đoạn 9: nối dự án thương mại (thanh toán đơn hàng) | Tắt wallet-service giữa checkout, không đơn nào trừ tiền sai |
| 5b | Giai đoạn 4: Fake Bank + chuyển ra/nạp vào (độc lập với 5a, làm trước hay sau đều được) | Mọi chế độ lỗi đều về trạng thái xác định |
| 6 | Giai đoạn 5: rate limit, hạn mức, bảo mật | 429 hoạt động, giao dịch hợp lệ vẫn qua |
| 7 | Giai đoạn 6: log/MDC + SQL sức khỏe | Truy được mọi bước của một transfer |
| 8 | Giai đoạn 7: recovery + reconciliation (đối soát bank chỉ khi đã làm 5b) | Phát hiện được sai lệch cố tình tạo |
| 9 | Giai đoạn 8: chaos + load test | Báo cáo: hỏng gì, vì sao, sửa ra sao |

**Mẹo học:** ở mỗi giai đoạn hãy **phá trước khi coi là xong**. Với mỗi lỗi bạn tự tái hiện và sửa, ghi lại vào `docs/` theo mẫu: *triệu chứng → nguyên nhân gốc → cách sửa → cách phòng ngừa*. Đây là phần giá trị nhất của dự án.

---

## 7. Checklist tổng

**Đúng đắn**
- [ ] Schema tự thiết kế đã đối chiếu rubric mục 2.10
- [ ] Ledger double-entry, append-only (ép ở DB), tiền là số nguyên
- [ ] Tách transfer (trạng thái) khỏi ledger transaction (bút toán)
- [ ] Khóa có thứ tự, không deadlock
- [ ] 4 invariants có test và câu SQL kiểm tra
- [ ] Idempotency ở API, consumer, và khi gọi bank

**Bất đồng bộ**
- [ ] State machine với chuyển trạng thái có điều kiện
- [ ] Transactional outbox
- [ ] Kafka: `acks=all`, idempotent producer, manual ack, consumer idempotent, DLT
- [ ] Phân biệt lỗi tạm thời và lỗi vĩnh viễn

**Chống chịu**
- [ ] Timeout ở mọi lời gọi ra ngoài
- [ ] Retry có backoff + jitter, chỉ với lỗi tạm thời
- [ ] Circuit breaker + bulkhead
- [ ] Trạng thái `UNKNOWN` + inquiry API
- [ ] Rate limit + hạn mức nghiệp vụ

**Phục hồi**
- [ ] Recovery worker cho transfer kẹt
- [ ] Reconciliation nội bộ và với Fake Bank
- [ ] Reversal/adjustment thay vì sửa dữ liệu
- [ ] Runbook cho từng loại sự cố

**Quan sát tối thiểu**
- [ ] Log kèm `transferId` (MDC)
- [ ] `transfer_status_history`
- [ ] Câu SQL sức khỏe hệ thống
- [ ] Actuator health

**Kiểm thử**
- [ ] Concurrency, property-based, crash test, fault injection, load test
