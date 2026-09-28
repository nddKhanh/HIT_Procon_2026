# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 179
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 26 | #1 | #3 | (25, 23) | 4 | 64 |
| 29 | #1 | #3 | (24, 23) | 63 | 64 |
| 32 | #1 | #3 | (22, 23) | 61 | 64 |
| 34 | #1 | #3 | (21, 23) | 63 | 64 |
| 36 | #1 | #3 | (20, 23) | 63 | 64 |
| 38 | #1 | #3 | (19, 23) | 63 | 64 |
| 41 | #1 | #3 | (17, 22) | 61 | 64 |
| 45 | #1 | #3 | (15, 20) | 59 | 64 |
| 48 | #1 | #3 | (15, 19) | 62 | 64 |
| 50 | #1 | #3 | (15, 18) | 63 | 64 |
| 52 | #1 | #3 | (15, 17) | 63 | 64 |
| 54 | #1 | #3 | (15, 16) | 63 | 64 |
| 56 | #1 | #3 | (15, 15) | 62 | 64 |
| 59 | #1 | #3 | (14, 14) | 62 | 64 |
| 61 | #1 | #3 | (14, 13) | 63 | 64 |
| 63 | #1 | #3 | (14, 12) | 63 | 64 |
| 66 | #1 | #3 | (14, 10) | 61 | 64 |
| 69 | #1 | #3 | (15, 8) | 61 | 64 |
| 72 | #1 | #3 | (17, 7) | 61 | 64 |
| 74 | #1 | #3 | (17, 8) | 63 | 64 |
| 76 | #1 | #3 | (18, 9) | 63 | 64 |
| 94 | #2 | #3 | (26, 5) | 7 | 64 |
| 122 | #1 | #3 | (26, 5) | 33 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (28, 22) (ô=732)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(6, 21))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(6, 21))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, -133]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (28, 22) | (27, 22) | Dự kiến đến điểm hẹn tọa độ (27, 22) | 40 |
| 2-3 | Di chuyển hướng 5 (`5`) | (27, 22) | (26, 22) | Dự kiến đến điểm hẹn tọa độ (26, 22) | 39 |
| 4 | Di chuyển hướng 5 (`5`) | (26, 22) | (25, 22) | Dự kiến đến điểm hẹn tọa độ (25, 22) | 37 |
| 5-6 | Di chuyển hướng 0 (`0`) | (25, 22) | (25, 21) | Dự kiến đến điểm hẹn tọa độ (25, 21) | 36 |
| 7-8 | Di chuyển hướng 5 (`5`) | (25, 21) | (24, 21) | Dự kiến đến điểm hẹn tọa độ (24, 21) | 35 |
| 9-10 | Di chuyển hướng 5 (`5`) | (24, 21) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 34 |
| 11-12 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 33 |
| 13-14 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 32 |
| 15-16 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 31 |
| 17-18 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 30 |
| 19-20 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 29 |
| 21-22 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 28 |
| 23 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 26 |
| 24 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 24 |
| 25-27 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 22 |
| 28-30 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 20 |
| 31-32 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 19 |
| 33-34 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 18 |
| 35-36 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 17 |
| 37-38 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 16 |
| 39-40 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 15 |
| 41 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 13 |
| 42-43 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 12 |
| 44-45 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 11 |
| 46-178 | Chờ 133 bước (`-133`) | (6, 21) | (6, 21) | Dự kiến đứng yên tại (6, 21); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 11 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (25, 23) (ô=761)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(2, 0))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(2, 0))
- Mảng hành động đã gửi server: `[-27, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 1, 1, 2, 1, 2, 2, 2, 1, 1, 1, 0, 0, 0, 5, 0, 5, 5, 5, 4, 5, 4, 5, 5, 5, 5, 5, 0, 5, 5, 5, 0, 0, 5, 0, 5, 5, 0, 5, 5, 5, 0, 5, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-26 | Chờ 27 bước (`-27`) | (25, 23) | (25, 23) | Dự kiến đứng yên tại (25, 23); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(25, 23)) | 64 |
| 27-28 | Di chuyển hướng 5 (`5`) | (25, 23) | (24, 23) | Dự kiến đến điểm hẹn tọa độ (24, 23) | 64 |
| 29-30 | Di chuyển hướng 5 (`5`) | (24, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 63 |
| 31 | Di chuyển hướng 5 (`5`) | (23, 23) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 64 |
| 32-33 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 64 |
| 34-35 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 64 |
| 36-37 | Di chuyển hướng 5 (`5`) | (20, 23) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 64 |
| 38-39 | Di chuyển hướng 5 (`5`) | (19, 23) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 63 |
| 40 | Di chuyển hướng 0 (`0`) | (18, 23) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 64 |
| 41-42 | Di chuyển hướng 0 (`0`) | (17, 22) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 63 |
| 43 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 61 |
| 44 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 64 |
| 45-47 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 64 |
| 48-49 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 64 |
| 50-51 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 64 |
| 52-53 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 64 |
| 54-55 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 64 |
| 56-58 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 64 |
| 59-60 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 61-62 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 64 |
| 63-64 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 63 |
| 65 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 66-67 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 63 |
| 68 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 69-70 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 63 |
| 71 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 64 |
| 72-73 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 64 |
| 74-75 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 64 |
| 76-78 | Di chuyển hướng 3 (`3`) | (18, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 62 |
| 79-80 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 61 |
| 81-82 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 60 |
| 83-84 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 59 |
| 85-87 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 57 |
| 88-90 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 55 |
| 91-92 | Di chuyển hướng 2 (`2`) | (21, 15) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 54 |
| 93-94 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 53 |
| 95-96 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 52 |
| 97 | Di chuyển hướng 2 (`2`) | (23, 13) | (24, 13) | Dự kiến đến điểm hẹn tọa độ (24, 13) | 50 |
| 98 | Di chuyển hướng 1 (`1`) | (24, 13) | (24, 12) | Dự kiến đến điểm hẹn tọa độ (24, 12) | 48 |
| 99-100 | Di chuyển hướng 2 (`2`) | (24, 12) | (25, 12) | Dự kiến đến điểm hẹn tọa độ (25, 12) | 47 |
| 101-102 | Di chuyển hướng 2 (`2`) | (25, 12) | (26, 12) | Dự kiến đến điểm hẹn tọa độ (26, 12) | 46 |
| 103-104 | Di chuyển hướng 2 (`2`) | (26, 12) | (27, 12) | Dự kiến đến điểm hẹn tọa độ (27, 12) | 45 |
| 105-106 | Di chuyển hướng 1 (`1`) | (27, 12) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 44 |
| 107-108 | Di chuyển hướng 1 (`1`) | (28, 11) | (28, 10) | Dự kiến đến điểm hẹn tọa độ (28, 10) | 43 |
| 109-111 | Di chuyển hướng 1 (`1`) | (28, 10) | (29, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 41 |
| 112-113 | Di chuyển hướng 0 (`0`) | (29, 9) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 40 |
| 114-115 | Di chuyển hướng 0 (`0`) | (28, 8) | (28, 7) | Dự kiến đến điểm hẹn tọa độ (28, 7) | 38 |
| 116-118 | Di chuyển hướng 0 (`0`) | (28, 7) | (27, 6) | Dự kiến đến điểm hẹn tọa độ (27, 6) | 36 |
| 119 | Di chuyển hướng 5 (`5`) | (27, 6) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 34 |
| 120-121 | Di chuyển hướng 0 (`0`) | (26, 6) | (26, 5) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 64 |
| 122-123 | Di chuyển hướng 5 (`5`) | (26, 5) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 63 |
| 124-125 | Di chuyển hướng 5 (`5`) | (25, 5) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 62 |
| 126-127 | Di chuyển hướng 5 (`5`) | (24, 5) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 61 |
| 128-129 | Di chuyển hướng 4 (`4`) | (23, 5) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 60 |
| 130-131 | Di chuyển hướng 5 (`5`) | (22, 6) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 59 |
| 132-133 | Di chuyển hướng 4 (`4`) | (21, 6) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 58 |
| 134-135 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 57 |
| 136 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 55 |
| 137-138 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 54 |
| 139-141 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 52 |
| 142-143 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 51 |
| 144 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 49 |
| 145-146 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 48 |
| 147-149 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 46 |
| 150-151 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 45 |
| 152-153 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 44 |
| 154-155 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 43 |
| 156-157 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 42 |
| 158-159 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 41 |
| 160-161 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 40 |
| 162-163 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 39 |
| 164-165 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 38 |
| 166-167 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 37 |
| 168-169 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 36 |
| 170-171 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 35 |
| 172-173 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 34 |
| 174 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 32 |
| 175-176 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 0)) | 31 |
| 177-178 | Chờ 2 bước (`-2`) | (2, 0) | (2, 0) | Dự kiến đứng yên tại (2, 0); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 0)) | 31 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (29, 9) (ô=317)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(6, 21))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(6, 21))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 0, -84, 4, 4, 4, 4, 5, 4, 4, 5, 5, 4, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 4, 4, 4, 5, 4, 5, 5, 5, 5, 5, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (29, 9) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 14 |
| 2-3 | Di chuyển hướng 0 (`0`) | (28, 8) | (28, 7) | Dự kiến đến điểm hẹn tọa độ (28, 7) | 12 |
| 4-6 | Di chuyển hướng 0 (`0`) | (28, 7) | (27, 6) | Dự kiến đến điểm hẹn tọa độ (27, 6) | 10 |
| 7 | Di chuyển hướng 5 (`5`) | (27, 6) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 8 |
| 8-9 | Di chuyển hướng 0 (`0`) | (26, 6) | (26, 5) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 7 |
| 10-93 | Chờ 84 bước (`-84`) | (26, 5) | (26, 5) | Dự kiến đứng yên tại (26, 5); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 64 |
| 94-95 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 63 |
| 96-97 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 62 |
| 98 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 60 |
| 99-100 | Di chuyển hướng 4 (`4`) | (24, 8) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 59 |
| 101 | Di chuyển hướng 5 (`5`) | (24, 9) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 57 |
| 102 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 55 |
| 103-104 | Di chuyển hướng 4 (`4`) | (22, 10) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 54 |
| 105 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 52 |
| 106-107 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 51 |
| 108-109 | Di chuyển hướng 4 (`4`) | (20, 11) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 50 |
| 110-111 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 49 |
| 112-114 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 47 |
| 115-117 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 45 |
| 118-119 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 44 |
| 120-122 | Di chuyển hướng 0 (`0`) | (20, 14) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 42 |
| 123-125 | Di chuyển hướng 0 (`0`) | (20, 13) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 40 |
| 126-127 | Di chuyển hướng 0 (`0`) | (19, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 39 |
| 128-129 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 38 |
| 130-131 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 37 |
| 132-134 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 35 |
| 135-136 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 34 |
| 137-138 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 33 |
| 139 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 31 |
| 140-141 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 30 |
| 142 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 28 |
| 143-144 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 27 |
| 145 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 25 |
| 146-147 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 24 |
| 148-149 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 23 |
| 150-151 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 22 |
| 152-154 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 20 |
| 155-156 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 18 |
| 157-158 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 17 |
| 159-161 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 15 |
| 162-163 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 14 |
| 164-165 | Di chuyển hướng 4 (`4`) | (13, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 13 |
| 166-167 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 12 |
| 168-169 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 11 |
| 170-171 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 10 |
| 172-173 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 9 |
| 174 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 7 |
| 175-176 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 6 |
| 177-178 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 5 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (12, 20) (ô=652)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(26, 5))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(26, 5))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 2, 3, 3, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, -85]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 64 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 64 |
| 4-6 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 64 |
| 7-9 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 64 |
| 10 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 64 |
| 11 | Di chuyển hướng 3 (`3`) | (17, 21) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 64 |
| 12-13 | Di chuyển hướng 3 (`3`) | (17, 22) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 64 |
| 14 | Di chuyển hướng 2 (`2`) | (18, 23) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 64 |
| 15-16 | Di chuyển hướng 2 (`2`) | (19, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 64 |
| 17-18 | Di chuyển hướng 2 (`2`) | (20, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 64 |
| 19-20 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 64 |
| 21-22 | Di chuyển hướng 2 (`2`) | (22, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 64 |
| 23 | Di chuyển hướng 2 (`2`) | (23, 23) | (24, 23) | Dự kiến đến điểm hẹn tọa độ (24, 23) | 64 |
| 24-25 | Di chuyển hướng 2 (`2`) | (24, 23) | (25, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(25, 23)) | 64 |
| 26-27 | Di chuyển hướng 5 (`5`) | (25, 23) | (24, 23) | Dự kiến đến điểm hẹn tọa độ (24, 23) | 64 |
| 28-29 | Di chuyển hướng 5 (`5`) | (24, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 64 |
| 30 | Di chuyển hướng 5 (`5`) | (23, 23) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 64 |
| 31-32 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 64 |
| 33-34 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 64 |
| 35-36 | Di chuyển hướng 5 (`5`) | (20, 23) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 64 |
| 37-38 | Di chuyển hướng 5 (`5`) | (19, 23) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 64 |
| 39 | Di chuyển hướng 0 (`0`) | (18, 23) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 64 |
| 40-41 | Di chuyển hướng 0 (`0`) | (17, 22) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 64 |
| 42 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 64 |
| 43 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 64 |
| 44-46 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 64 |
| 47-48 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 64 |
| 49-50 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 64 |
| 51-52 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 64 |
| 53-54 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 64 |
| 55-57 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 64 |
| 58-59 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 60-61 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 64 |
| 62-63 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 64 |
| 64 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 65-66 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 64 |
| 67 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 68-69 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 64 |
| 70 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 64 |
| 71-72 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 64 |
| 73-74 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 64 |
| 75-77 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 64 |
| 78-79 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 64 |
| 80-81 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 64 |
| 82 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 64 |
| 83-84 | Di chuyển hướng 2 (`2`) | (21, 7) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 64 |
| 85-86 | Di chuyển hướng 2 (`2`) | (22, 7) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 64 |
| 87-88 | Di chuyển hướng 2 (`2`) | (23, 7) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 64 |
| 89-90 | Di chuyển hướng 2 (`2`) | (24, 7) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 64 |
| 91 | Di chuyển hướng 1 (`1`) | (25, 7) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 64 |
| 92-93 | Di chuyển hướng 1 (`1`) | (25, 6) | (26, 5) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 64 |
| 94-178 | Chờ 85 bước (`-85`) | (26, 5) | (26, 5) | Dự kiến đứng yên tại (26, 5); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 64 |

