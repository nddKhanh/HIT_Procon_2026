# HexaUdon — Codebase Context & Match Data Playbook

> **Mục đích:** Đây là điểm vào đầu tiên cho các prompt/agent làm việc với HexaUdon.
> Đọc file này trước, sau đó chỉ mở những file nằm trong phạm vi thay đổi. Không cần
> quét lại toàn bộ repository nếu snapshot này vẫn còn phù hợp.
>
> **Snapshot:** 2026-09-22, sau hiệu chỉnh simulator bằng replay server của hai đội.
> Khi thuật toán, API, cấu trúc file hoặc test thay đổi, cập nhật file này trong cùng diff.

> **Checkpoint đang phát triển:** đọc [CHECKPOINT_2026-09-22.md](CHECKPOINT_2026-09-22.md)
> trước khi tiếp tục. Simulator đã kiểm chứng; cải tiến routing còn dang dở, có test
> cũ đang fail và benchmark thử nghiệm có regression. Các mục routing bên dưới
> chưa phản ánh đầy đủ policy thử nghiệm; không coi checkpoint là bản production.

## 1. Trạng thái hiện tại trong một phút

- C++17, không dùng framework; JSON dùng `third_party/nlohmann/json.hpp`.
- Có hai chế độ chạy: API thật và stdin/offline.
- Điểm trận được so sánh theo thứ tự từ điển:
  1. số brand khác nhau toàn trận;
  2. tổng số brand khác nhau theo từng ngày;
  3. tổng servings.
- Đội hình quét đủ số Supply từ `0` đến `floor(n/2)` và thử thêm cách gán vị trí
  tốt nhất theo độ phủ tĩnh. Một assignment mới chỉ thay legacy khi tăng match
  hoặc daily brands; servings-only không đủ vì dễ overfit traffic. Traffic được
  cập nhật mỗi ngày; khi chưa có action đối thủ, giả định đối thủ tạo traffic giống đội mình.
- Patrol dùng pathfinding Pareto theo `(steps, fuel)`, lookahead hai spot và chaining
  nhiều spot trong ngày.
- Khi có từ hai patrol trở lên, Solver giải bài toán matching để mỗi patrol có tối đa
  một spot đầu tiên và mỗi spot đầu tiên chỉ thuộc một patrol. Matching ưu tiên số xe
  được gán nhiều nhất, rồi tối thiểu tổng thời gian di chuyển.
- Sau spot đầu tiên, patrol quay về lookahead/scoring thông thường.
- Solver giữ một beam nhỏ các candidate khác action. Candidate đồng hạng hoàn toàn
  trong ngày được phân xử bằng rollout thật của ngày kế tiếp; rollout dừng ở hai ngày.
  Trạng thái brand chỉ được commit sau khi server chấp nhận action.
- Build và toàn bộ `tests/test_all.cpp` đang chạy thành công ở snapshot này.

## 2. Quy tắc làm việc cho prompt sau

1. Đọc file này.
2. Chạy `git status --short`; thay đổi chưa commit là của người dùng, không ghi đè.
3. Xác định module sở hữu logic từ bảng ở mục 6 và chỉ đọc module đó cùng caller/test.
4. Với bug, grep tất cả caller rồi sửa tại điểm dùng chung nhỏ nhất.
5. Mọi logic không tầm thường phải có một test nhỏ trong `tests/test_all.cpp`.
6. Chạy tối thiểu `cmd /c build.bat test`; trước bàn giao chạy thêm `cmd /c build.bat`.
7. Không gọi endpoint `POST`, `PUT`, `DELETE` khi nhiệm vụ chỉ yêu cầu đọc/phân tích.
8. Không in, log, commit hoặc đưa `API_TOKEN` vào command output/tài liệu.

`docs/logic.md` mô tả thiết kế cũ và hữu ích để đọc nền, nhưng một số chi tiết đã
lỗi thời. Khi có mâu thuẫn, ưu tiên code hiện tại và snapshot này.

## 3. Cách lấy dữ liệu trận đấu

### 3.1 Nguồn và quyền truy cập

Trang xem trận:

```text
https://procon26.haui.ac.vn/matches/<MATCH_ID>
```

API mà bot sử dụng:

| Method | Endpoint | Ý nghĩa |
|---|---|---|
| `GET` | `/api/game/matches` | Danh sách trận hiện thấy bởi token đội |
| `GET` | `/api/game/matches/<id>/config` | Map, spot, stock, vị trí đầu, ngày, fuel |
| `GET` | `/api/game/matches/<id>/status` | Ngày hiện tại, xe, fuel, traffic, đối thủ |
| `POST` | `/api/game/matches/<id>/agents` | Gửi loại xe — **có side effect** |
| `POST` | `/api/game/matches/<id>/answer` | Gửi action — **có side effect** |

Header xác thực của API đội là `x-api-token`. Giá trị được lưu cục bộ trong
`HexaUdon/.env`; file này không được commit. Các biến hiện dùng:

```text
API_BASE_URL
API_TOKEN
MATCH_ID
API_TRACE
```

Trang quản trị tải replay đầy đủ qua:

```text
GET /api/admin/matches/<MATCH_ID>
```

Endpoint này cần **admin session cookie**, không chấp nhận team token. Không cố vượt
đăng nhập. Nếu cần breakdown từng ngày/action mà không có session admin, yêu cầu người
dùng cung cấp export/replay hoặc mở trình duyệt đã đăng nhập.

### 3.2 Recipe PowerShell chỉ đọc, không làm lộ token

Đoạn sau chỉ gọi `GET`. Không thêm `Write-Output $token`, không bật trace HTTP:

```powershell
$envMap = @{}
Get-Content HexaUdon\.env |
  Where-Object { $_ -match '^\s*[^#][^=]*=' } |
  ForEach-Object {
    $key, $value = $_ -split '=', 2
    $envMap[$key.Trim()] = $value.Trim().Trim('"').Trim("'")
  }

$base = $envMap['API_BASE_URL']
$token = $envMap['API_TOKEN']
$matchId = '<MATCH_ID>'
$headers = @{ 'x-api-token' = $token }

$config = Invoke-RestMethod -Headers $headers `
  -Uri "$base/api/game/matches/$matchId/config"
$status = Invoke-RestMethod -Headers $headers `
  -Uri "$base/api/game/matches/$matchId/status"
```

Trong môi trường sandbox, network có thể bị proxy chặn. Nếu lệnh đọc quan trọng thất
bại vì sandbox/network, chạy lại đúng lệnh với quyền network được phê duyệt; không đổi
sang POST và không đưa token vào lời giải.

### 3.3 Checklist tổng hợp config

Sau khi lấy `$config`, luôn báo ít nhất:

- `map.width × map.height` và số ô theo terrain `0/1/2/3`;
- số xe, vị trí `pos` và tọa độ `(x = pos % width, y = pos / width)`;
- `fuelLimits`, `players`, `busyThreshold`, `jammedThreshold`;
- `daySeconds`, `daySteps`;
- từng spot: index, brand, pos, stocks;
- tổng stock/ngày và tổng tiềm năng:
  `sum(spots.stocks) × number_of_days`;
- trạng thái hiện tại: day, vị trí/fuel/kind của xe, traffic và finished.

Không suy ra nguyên nhân điểm thấp chỉ từ config. Muốn kết luận theo từng ngày cần
replay/action history hoặc diary tương ứng.

### 3.4 Trận tham chiếu `e44eee79-21d1-431d-9624-070577b335d5`

| Thuộc tính | Giá trị |
|---|---|
| Map | `15 × 17` = 255 ô |
| Terrain | 35 plain (`0`), 112 road (`1`), 80 mountain (`2`), 28 pond (`3`) |
| Vị trí đầu xe | `80, 251, 247, 244, 243, 169` |
| Tọa độ đầu | `(5,5), (11,16), (7,16), (4,16), (3,16), (4,11)` |
| Fuel limit | `67` |
| Players | `2` |
| Traffic thresholds | busy `4`, jammed `10` |
| Ngày | `5`, mỗi ngày 60 giây |
| Steps/ngày | `32, 48, 64, 80, 96` |
| Spot/brand | 12 spot, 9 brand |
| Stock/ngày | `48` |
| Tiềm năng toàn trận | `48 × 5 = 240 servings` |
| Kết quả đã quan sát | `148/240 servings` |

Danh sách spot theo index:

| Spot | Brand | Pos | Stock/ngày |
|---:|---:|---:|---:|
| 0 | 0 | 181 | 2 |
| 1 | 1 | 84 | 6 |
| 2 | 2 | 71 | 5 |
| 3 | 3 | 58 | 5 |
| 4 | 4 | 245 | 4 |
| 5 | 5 | 127 | 5 |
| 6 | 6 | 135 | 2 |
| 7 | 7 | 82 | 5 |
| 8 | 8 | 53 | 6 |
| 9 | 0 | 238 | 1 |
| 10 | 1 | 23 | 3 |
| 11 | 2 | 144 | 4 |

Stock gộp theo brand: B0=3, B1=9, B2=9, B3=5, B4=4, B5=5, B6=2,
B7=5, B8=6.

### 3.5 Trận tham chiếu `b3a4f1df-9538-47dd-9bad-d2efe83ec5b1`

| Thuộc tính | Giá trị |
|---|---|
| Map | `17 × 18` = 306 ô |
| Terrain | 191 plain, 57 road, 33 mountain, 25 pond |
| Vị trí đầu xe | `273, 104, 79, 216, 238, 67` |
| Fuel limit | `74` |
| Ngày/steps | 5 ngày; `35, 53, 70, 88, 105` |
| Spot/brand | 12 spot, 9 brand |
| Stock/ngày | `29` |
| Tiềm năng toàn trận | `145 servings` |

Trận đã chạy bằng policy cũ `5 Patrol + 1 Supply`. Team API chỉ trả config/status;
các endpoint trace/history/replay dưới `/api/game` không tồn tại và
`/api/admin/matches/<id>` trả `401 Admin session required` khi dùng team token.
Muốn phân tích chính xác từng serving ngày 1 cần browser admin hoặc export replay.

Tái hiện offline ngày 1 với traffic smooth (không phải trace server): policy cũ đạt
17 servings/9 brands/1 refuel; policy mới `4 Patrol + 2 Supply` đạt 15 servings/9
brands/1 refuel. Hai Supply đã được sửa để giữ chỗ hai patrol khác nhau. Việc giảm
servings ngày đầu là trade-off trực tiếp của việc bớt một xe có khả năng thu Udon;
giá trị của Supply thứ hai chỉ có thể hoàn vốn ở các ngày sau.

## 4. Cấu trúc repository

```text
Procon/
├─ AGENTS.md                    Quy tắc làm việc của repo
├─ build.bat / build.sh         Build/test entry points
├─ diary/<match-id>/            Nhật ký từng ngày do bot ghi
└─ HexaUdon/
   ├─ .env                      Secret cục bộ, không commit
   ├─ CMakeLists.txt
   ├─ README.md
   ├─ demo_input.json           Fixture stdin cục bộ
   ├─ include/
   │  ├─ GameState.hpp
   │  ├─ model/
   │  ├─ map/
   │  ├─ solver/
   │  ├─ api/
   │  └─ io/
   ├─ src/
   │  ├─ main.cpp
   │  ├─ model/                 Model chủ yếu header-only
   │  ├─ map/
   │  ├─ solver/
   │  ├─ api/
   │  └─ io/
   ├─ tests/
   ├─ docs/
   └─ third_party/nlohmann/
```

## 5. Data model và luật map

### `include/model/GameConfig.hpp`

- `MapConfig`: `height`, `width`, ma trận `cells`.
- `Spot`: `brand`, vị trí tuyến tính `pos`, `stocks` tái tạo mỗi ngày.
- `GameConfig`: thời gian, day steps, map, spot, vị trí đầu xe, fuel limit,
  players và traffic thresholds.
- `getDaySteps(day)` trả `0` khi day ngoài phạm vi.

### `include/model/Agent.hpp`, `Traffic.hpp`, `GameState.hpp`

- `Agent`: `kind` (`0=Patrol`, `1=Supply`), `pos`, `fuel`.
- `Traffic`: `pos`, `status`.
- `OtherPlayer`: id và danh sách xe đối thủ.
- `GameState`: `endsAt`, `day`, xe đội mình, đối thủ và traffic hiện tại.
- `Position`: tọa độ `(x,y)` dùng nội bộ.

### `Map.hpp/.cpp`

- Chuyển `pos ↔ Position`, kiểm tra biên/pond, lấy hàng xóm hex theo 6 hướng.
- `updateTraffic()` reset rồi áp trạng thái traffic mới.
- Chi phí tính theo **ô xuất phát của một move**:

| Terrain | Mã | Travel time | Fuel Patrol |
|---|---:|---:|---:|
| Plain | 0 | 2 | 1 |
| Road smooth | 1/status 0 | 1 | 2 |
| Road busy | 1/status 1 | 2 | 2 |
| Road jammed | 1/status ≥2 | 4 | 2 |
| Mountain | 2 | 3 | 2 |
| Pond | 3 | không đi được | không áp dụng |

Supply không tiêu thụ fuel trong `MoveSimulator`.

## 6. Phân chia trách nhiệm theo file/class

### Entry point, API và I/O

| File | Trách nhiệm hiện tại |
|---|---|
| `src/main.cpp` | Parse CLI; chạy API hoặc stdin; poll status; gọi Solver; validate; fallback; POST action; commit/discard plan; ghi diary. |
| `api/HttpClient.hpp/.cpp` | HTTPS mỏng trên WinINet; header tùy chỉnh; GET/POST/PUT/DELETE. Không chứa luật game. |
| `api/GameApiClient.hpp/.cpp` | Chuyển JSON API ↔ `GameConfig`/`GameState`; submit agent/action; phát hiện HTTP 200 nhưng `{valid:false}`. |
| `io/JsonReader.hpp/.cpp` | Đọc config và state từ stdin cho offline mode. |
| `io/JsonWriter.hpp/.cpp` | Ghi loại xe/action dạng JSON ra stdout. |
| `io/DiaryWriter.hpp/.cpp` | Ghi `diary/<match>/day_<n>.md`, gồm action, mục tiêu và timeline; không thay đổi plan. |

### Solver

| File/class | Trách nhiệm hiện tại |
|---|---|
| `Solver.hpp/.cpp` | Nhạc trưởng: đội hình, state xuyên trận, matching spot đầu tiên, sinh candidate, gọi patrol/supply, joint refuel suffix, mô phỏng và chọn plan. |
| `PatrolPlanner.hpp/.cpp` | Lập route cho **một patrol**: forced first target, lookahead hai spot, chaining, cập nhật stock/brand/visited và metadata từng step. |
| `SupplyPlanner.hpp/.cpp` | Chọn patrol chưa được Supply khác giữ chỗ, tìm rendezvous ở cuối movement prefix, đi tới điểm hẹn và cung cấp metadata cho diary. |
| `SpotScorer.hpp/.cpp` | Xếp hạng spot theo mục tiêu chính thức hoặc scalar baseline. Không điều phối nhiều xe. |
| `PathFinder.hpp/.cpp` | Dijkstra nhiều nhãn Pareto `(steps,fuel)`, reconstruct path và cache SSSP theo `(source,maxFuel,fuelWeight)`. |
| `MoveSimulator.hpp/.cpp` | Mô phỏng một route hoặc đồng hồ chung của cả ngày; thu Udon, refuel, occupancy, trạng thái cuối và `MatchScore`. |
| `ActionValidator.hpp/.cpp` | Kiểm tra shape action, tổng steps, hướng đi, pond/biên và fuel trước khi submit. |

### Test/tooling

| File | Trách nhiệm |
|---|---|
| `tests/test_all.cpp` | Bộ assert regression chính; phải chạy sau thay đổi solver. |
| `tests/test_runner.cpp` | Chạy fixture stdin và in diễn biến dễ đọc. |
| `tests/benchmark.cpp` | Benchmark từ dữ liệu stdin; **không tự có fixture**, chạy không redirect input sẽ parse lỗi. |
| `tests/debug_match.cpp` | Fixture/debug thủ công cho cấu hình match cụ thể. |
| `tests/baseline_scores.csv` | Baseline benchmark theo seed. |

## 7. Luồng thuật toán hiện tại

### 7.1 Chọn loại xe — `AgentStrategy::decideAgentTypes`

- Quét đầy đủ mọi số Supply từ `0` đến `floor(n/2)`.
- Với mỗi số lượng, rollout assignment legacy (Supply ở cuối mảng) và assignment
  có độ phủ brand/stock/khoảng cách tốt nhất từ vị trí xuất phát.
- So theo điểm chính thức; nếu assignment thay thế chỉ hơn servings thì giữ legacy
  để tránh đổi daily brand khi traffic đối thủ khác giả định.

### 7.2 `Solver::solve`

1. Lấy `daySteps`, cập nhật traffic vào `Map`, tạo `PathCache`.
2. Tạo deadline tìm kiếm: dừng sinh candidate trước `endsAt - 750ms`.
3. Tạo các thứ tự patrol:
   - tối đa 4 patrol: tất cả permutation;
   - nhiều hơn: original, reverse, rotation/reverse rotation (tối đa 24), low-fuel-first.
4. Với mỗi candidate:
   - reset stock/visited/targets;
   - thu serving tại spot nơi patrol đứng ở đầu ngày;
   - gọi `assignFirstSpots()`;
   - lập patrol theo order;
   - lập supply sau patrol;
   - thử nối thêm một patrol suffix sau rendezvous/refuel;
   - mô phỏng toàn bộ ngày bằng `MoveSimulator::simulateDay()`;
   - xếp candidate nhanh theo tuple gồm match/daily brands, khả năng tiếp cận ngày
     sau, servings và fuel;
   - giữ tối đa bốn action plan khác nhau trong shortlist.
5. Candidate đầu tiên giữ policy cũ: scalar scoring + exclusive claim.
6. Các candidate còn lại dùng official lexicographic ranking; matching đầu ngày vẫn
   bảo đảm ownership độc lập với `exclusiveClaims`.
7. Nếu có ít nhất hai plan đồng hạng hoàn toàn, rollout thật ngày kế tiếp cho tối đa
   hai plan và dùng điểm chính thức hai ngày để phá hòa. Không hy sinh tiêu chí đã
   kiểm chứng hôm nay cho dự báo traffic chưa chắc chắn.
8. Lưu plan tốt nhất vào trạng thái pending. Chỉ `commitLastPlan()` sau khi server
   nhận action; khi fallback/retry dùng `discardLastPlan()`.

### 7.3 Matching spot đầu tiên — `assignFirstSpots`

- Chỉ bật khi có ít nhất hai patrol; một patrol giữ nguyên scoring cũ.
- Chỉ xét spot còn stock, chưa được chính patrol đó ghé ở step 0, có route đủ fuel
  và đến được trong ngày.
- DP theo mask patrol, độ phức tạp `O(spots × patrols × 2^patrols)`.
- Mục tiêu:
  1. tối đa số patrol có spot;
  2. với cùng cardinality, tối thiểu tổng `path.totalSteps`.
- Kết quả một-một: một patrol ≤ một first spot, một first spot ≤ một patrol.
- Sentinel truyền vào `PatrolPlanner`:
  - `-2`: không override, dùng thuật toán cũ;
  - `-1`: matching không tìm được spot, xe không tự tranh spot đầu;
  - `>=0`: spot bắt buộc đầu tiên.
- Giới hạn có chủ ý: matching chỉ xử lý **spot đầu tiên trong ngày**. Các mục tiêu
  sau đó có thể hội tụ vì planner quay lại lookahead thường.

### 7.4 Patrol planning

`PatrolPlanner::planDay()`:

1. Nếu có forced first spot, đi spot đó trước.
2. Sau đó `findLookaheadSpot()` tạo tối đa 16 first candidates tốt nhất.
3. Với mỗi first candidate, thử một second spot khả thi và cộng rank để nhìn trước.
4. Ưu tiên route đến được trong phần ngày còn lại; nếu không còn, có fallback chọn
   route có thể tiếp tục qua nhiều ngày.
5. `MoveSimulator::simulate()` cắt route theo steps/fuel.
6. Trong lúc trace route, mọi spot đi xuyên qua cũng được thu và cập nhật planner state.
7. Nếu chưa di chuyển và không có target, Zero-Wait policy thử đi một ô hợp lệ.
8. Pad wait âm để đủ chính xác `daySteps`.

Official `SpotRank` là tuple:

```text
(new match brand, new daily brand, one serving, rarity, -steps, -fuel)
```

Scalar baseline cộng bonus brand mới, brand hiếm, stock sắp hết; trừ steps và phạt
route ăn quá nửa fuel hiện có.

### 7.5 Pathfinding

- Dijkstra giữ frontier nhãn không bị dominate theo `(steps,fuel)`.
- Trọng số chọn path là `steps + fuelWeight × fuel`.
- Planner thường dùng `fuelWeight=1.0`.
- Frontier mỗi cell bị giới hạn 16 nhãn để tránh nổ thời gian; đây là heuristic có
  chủ ý, được đánh dấu `ponytail:` trong code.
- `PathCache` tránh chạy lại SSSP cho cùng source/fuel/weight trong một lần solve.

### 7.6 Supply và joint refuel

- Ưu tiên rendezvous tại điểm cuối movement prefix của patrol nếu Supply có thể tới
  trước khi hết ngày.
- Solver giữ `suppliedPatrols` trong lúc lập plan để hai Supply không chọn cùng một
  patrol; Supply sau phải chọn patrol khác nếu còn lựa chọn khả thi.
- Rank rendezvous theo `(fuel deficit, extension potential, usable steps)`.
- Fallback `findTargetPatrol()` cân bằng fuel urgency, brand mới gần patrol, số spot
  trong tầm và khoảng cách Supply.
- Solver chỉ nối tối đa một refuel suffix cho mỗi patrol/ngày.
- Nếu không có target, Supply áp Zero-Wait, đi một ô hợp lệ hoặc chờ cả ngày.

### 7.7 Mô phỏng và validation

- `simulateDay()` chạy các xe của một đội trên một clock chung. Stock riêng từng
  đội, reset mỗi ngày; mỗi patrol thu tối đa một suất/spot/ngày.
- Thu ở đầu ngày và khi đến spot, kể cả bước cuối; cùng thời điểm theo agent index.
- Trừ fuel khi hoàn thành di chuyển, rồi tiếp tế tại vị trí sau bước cho tất cả
  patrol cùng ô với Supply, kể cả xe đang di chuyển và boundary cuối ngày.
- Vẫn kiểm tra đủ fuel trước khi xuất phát; không dựa vào lần tiếp tế tương lai
  để hợp thức hóa lệnh thiếu nhiên liệu. Replay chưa phân biệt được cách server
  xử lý các lệnh không hợp lệ hoặc xe thiếu fuel cùng Supply tại t=0.
- `fuelAtTime` lưu fuel sau arrival/refuel, index 0 là fuel đầu vào.
- `roadOccupancy` đếm vị trí sau từng bước `1..daySteps`, bỏ boundary đầu ngày.
- `nextTraffic()` nhận tổng occupancy của **tất cả đội** trong hai ngày vừa qua;
  so tổng với `players * busyThreshold` và `players * jammedThreshold`.
- Bỏ `SimulationRules`: chỉ dùng một bộ luật đã hiệu chỉnh cho production/test.
- `tests/replay_5cc3b9ea.json` chứa config, action và kết quả server đã loại thông tin
  tài khoản. Test nối trạng thái dự đoán qua 7 ngày cho cả hai đội: 112 trạng thái xe,
  380 collection event có thứ tự, stock, occupancy, 6 chuyển traffic và điểm cuối
  `(20,135,204)` / `(20,134,176)` đều phải khớp.
- Nhật ký dùng cùng simulator và traffic đầu ngày; nếu invalid, giữ action và báo
  lỗi, không tự tạo bảng fuel từ phép trừ dự phòng.
- `ActionValidator` là cổng cuối trước submit; invalid plan bị thay bằng `[-daySteps]`
  cho từng xe.

## 8. Trạng thái thay đổi hiện tại và nguyên nhân 148/240

Diff đang làm việc tại snapshot này gồm:

- `include/solver/PatrolPlanner.hpp`
- `src/solver/PatrolPlanner.cpp`
- `src/solver/Solver.cpp`
- `include/solver/SupplyPlanner.hpp`
- `src/solver/SupplyPlanner.cpp`
- `tests/test_all.cpp`

Root cause đã sửa: candidate official trước đây gọi patrol với
`exclusiveClaims=false`; `remainingStock` lại bị giảm theo thứ tự lập kế hoạch, nên
ownership spot đầu tiên phụ thuộc patrol nào được plan trước, không phụ thuộc xe nào
có route tối ưu. Spot còn nhiều stock cũng không bị claim độc quyền. Permutation chỉ
đổi thứ tự được ưu tiên, không tạo assignment một-một.

Fix hiện tại thêm global first-spot matching rồi truyền forced target vào
`PatrolPlanner`. Regression `test_first_spot_uses_global_shortest_assignment()` xác
nhận xe gần hơn nhận spot đang bị tranh chấp và xe còn lại nhận spot riêng tối ưu hơn.

Không được khẳng định toàn bộ 92 servings thiếu đều do bug này: team API không trả
replay từng ngày. Muốn định lượng cần admin replay, export action/history hoặc diary
đủ 5 ngày.

## 9. Hạn chế/điểm cần nhớ trước khi tối ưu tiếp

- Matching đầu ngày tối ưu khoảng cách, chưa đưa brand rank/stock urgency vào objective.
- Độ phức tạp matching là exponential theo số patrol; phù hợp trận hiện tại 5 patrol,
  cần Hungarian/min-cost flow nếu quy mô tăng mạnh.
- Ownership chỉ áp dụng mục tiêu đầu tiên; spot tiếp theo vẫn có thể bị nhiều xe chọn.
- Opponent (`state.others`) được parse; stock của mỗi đội độc lập, nhưng action
  đối thủ ảnh hưởng traffic ngày sau. Formation rollout dùng giả định mirrored
  traffic; cần action đối thủ thật để đánh giá chính xác nhiều ngày.
- Lập plan Supply ban đầu dùng rendezvous ổn định ở cuối prefix; refinement sau đó
  quét tối đa 64 cuộc gặp khả thi mỗi vòng khi có tối đa hai Supply, gồm cả
  boundary khi Patrol đang chạy, và hỗ trợ multi-stop trong cùng ngày. Với nhiều
  Supply hơn, giữ giới hạn 24 wait-rendezvous vì benchmark cho thấy search mở rộng
  gây nhiễu coordination.
- Beam hai ngày chỉ phá hòa current-day; đây là giới hạn chủ ý để không overfit
  giả định mirrored traffic.
- Pareto frontier bị cap 16 nhãn/cell.
- Simulator đã khớp replay của một trận hai đội. Thêm replay khác làm tập kiểm tra
  độc lập khi có dữ liệu; không xem khớp một trận là chứng minh mọi trường hợp.
- `main.cpp` API loop dùng `Sleep`, WinINet và build link `wininet`; đường production
  hiện thiên về Windows.
- `docs/logic.md` có mô tả cũ như Solver đơn giản/score bonus cũ; không dùng nó làm
  nguồn duy nhất khi sửa thuật toán.

## 10. Build, test và lệnh chẩn đoán

Từ root `D:\HIT\Procon`:

```powershell
# Build executable chính
cmd /c build.bat

# Compile và chạy toàn bộ assert regression
cmd /c build.bat test

# Chạy fixture stdin
cmd /c build.bat runner

# Benchmark bắt buộc phải có input JSON
Get-Content HexaUdon\demo_input.json | cmd /c build.bat benchmark

# Kiểm tra diff trước bàn giao
git status --short
git diff --check
```

Kết quả đã xác minh tại snapshot:

- `cmd /c build.bat test`: tất cả test pass, gồm matching, pathfinding, scoring,
  simulator, refuel, retry transactional và multi-day.
- `cmd /c build.bat`: build thành công `HexaUdon/HexaUdon.exe`.

## 11. Khi nào phải cập nhật file này

Cập nhật cùng commit nếu có một trong các thay đổi sau:

- thêm/xóa/đổi trách nhiệm class hoặc file;
- đổi endpoint, schema config/status/action;
- đổi score/rank/candidate selection;
- đổi luật movement, collection hoặc refuel;
- đổi matching/claim policy;
- thêm assumption/ceiling `ponytail:`;
- thêm fixture trận chuẩn hoặc có replay xác nhận từ server;
- test/build command thay đổi.

Khi chỉ sửa implementation nội bộ mà interface, thuật toán và giới hạn không đổi,
không cần viết lại toàn bộ tài liệu; chỉ cập nhật ngày snapshot nếu việc đó hữu ích.
