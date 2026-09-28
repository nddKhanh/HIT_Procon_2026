# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 256
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #1 | #3 | (16, 7) | 21 | 64 |
| 49 | #0 | #3 | (26, 5) | 6 | 64 |
| 52 | #0 | #3 | (25, 5) | 63 | 64 |
| 110 | #0 | #3 | (14, 14) | 26 | 64 |
| 111 | #1 | #3 | (14, 14) | 10 | 64 |
| 113 | #1 | #3 | (14, 13) | 63 | 64 |
| 115 | #1 | #3 | (14, 12) | 63 | 64 |
| 142 | #2 | #3 | (2, 0) | 0 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (29, 9) (ô=317)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(6, 21))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(6, 21))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, -39, 5, 4, 4, 4, 4, 4, 4, 5, 4, 5, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 4, 4, 4, 3, 4, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 4, 5, 5, -116]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (29, 9) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 12 |
| 2-3 | Di chuyển hướng 5 (`5`) | (28, 8) | (27, 8) | Dự kiến đến điểm hẹn tọa độ (27, 8) | 10 |
| 4-5 | Di chuyển hướng 0 (`0`) | (27, 8) | (27, 7) | Dự kiến đến điểm hẹn tọa độ (27, 7) | 9 |
| 6-8 | Di chuyển hướng 0 (`0`) | (27, 7) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 7 |
| 9-10 | Di chuyển hướng 0 (`0`) | (26, 6) | (26, 5) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 6 |
| 11-49 | Chờ 39 bước (`-39`) | (26, 5) | (26, 5) | Dự kiến đứng yên tại (26, 5); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 64 |
| 50-51 | Di chuyển hướng 5 (`5`) | (26, 5) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 64 |
| 52-53 | Di chuyển hướng 4 (`4`) | (25, 5) | (24, 6) | Dự kiến đến điểm hẹn tọa độ (24, 6) | 63 |
| 54-55 | Di chuyển hướng 4 (`4`) | (24, 6) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 62 |
| 56-57 | Di chuyển hướng 4 (`4`) | (24, 7) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 61 |
| 58-59 | Di chuyển hướng 4 (`4`) | (23, 8) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 60 |
| 60 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 58 |
| 61-62 | Di chuyển hướng 4 (`4`) | (22, 10) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 57 |
| 63 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 55 |
| 64-65 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 54 |
| 66-67 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 53 |
| 68-69 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 52 |
| 70-72 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 50 |
| 73-75 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 48 |
| 76-77 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 47 |
| 78-80 | Di chuyển hướng 0 (`0`) | (20, 14) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 45 |
| 81-83 | Di chuyển hướng 0 (`0`) | (20, 13) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 43 |
| 84-85 | Di chuyển hướng 0 (`0`) | (19, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 42 |
| 86-87 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 41 |
| 88-89 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 40 |
| 90-92 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 38 |
| 93-94 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 37 |
| 95-96 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 36 |
| 97-98 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 34 |
| 99-100 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 33 |
| 101-102 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 31 |
| 103-104 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 30 |
| 105 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 28 |
| 106-107 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 27 |
| 108-109 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 64 |
| 110-111 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 63 |
| 112-114 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 61 |
| 115-116 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 59 |
| 117-118 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 58 |
| 119-121 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 56 |
| 122-123 | Di chuyển hướng 4 (`4`) | (14, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 55 |
| 124-125 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 54 |
| 126-127 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 53 |
| 128-129 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 52 |
| 130-131 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 51 |
| 132-133 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 50 |
| 134-135 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 48 |
| 136-137 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 47 |
| 138-139 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 46 |
| 140-255 | Chờ 116 bước (`-116`) | (6, 21) | (6, 21) | Dự kiến đứng yên tại (6, 21); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 46 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (29, 9) (ô=317)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(6, 21))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(6, 21))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 4, 3, 3, 3, 4, 3, 4, 3, 2, 2, 3, 3, 2, 3, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 0, 5, 0, 0, 5, 5, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 4, 4, 4, 4, 3, 4, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 4, 5, 5, -47]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (29, 9) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 37 |
| 2-3 | Di chuyển hướng 5 (`5`) | (28, 8) | (27, 8) | Dự kiến đến điểm hẹn tọa độ (27, 8) | 35 |
| 4-5 | Di chuyển hướng 5 (`5`) | (27, 8) | (26, 8) | Dự kiến đến điểm hẹn tọa độ (26, 8) | 34 |
| 6-7 | Di chuyển hướng 5 (`5`) | (26, 8) | (25, 8) | Dự kiến đến điểm hẹn tọa độ (25, 8) | 33 |
| 8-9 | Di chuyển hướng 5 (`5`) | (25, 8) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 32 |
| 10-11 | Di chuyển hướng 5 (`5`) | (24, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 31 |
| 12-13 | Di chuyển hướng 0 (`0`) | (23, 8) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 30 |
| 14-15 | Di chuyển hướng 5 (`5`) | (23, 7) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 29 |
| 16-17 | Di chuyển hướng 5 (`5`) | (22, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 28 |
| 18-19 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 27 |
| 20 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 25 |
| 21-22 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 24 |
| 23-25 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 22 |
| 26-27 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 64 |
| 28-29 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 62 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 61 |
| 32-33 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 59 |
| 34-35 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 58 |
| 36 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 56 |
| 37-38 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 55 |
| 39-40 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 54 |
| 41-42 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 53 |
| 43-45 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 51 |
| 46-47 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 49 |
| 48-49 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 48 |
| 50-51 | Di chuyển hướng 4 (`4`) | (15, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 47 |
| 52-53 | Di chuyển hướng 3 (`3`) | (15, 19) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 46 |
| 54-56 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 44 |
| 57-58 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 42 |
| 59-60 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 41 |
| 61-62 | Di chuyển hướng 3 (`3`) | (18, 21) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 40 |
| 63-64 | Di chuyển hướng 2 (`2`) | (18, 22) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 39 |
| 65-66 | Di chuyển hướng 3 (`3`) | (19, 22) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 38 |
| 67-68 | Di chuyển hướng 2 (`2`) | (20, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 37 |
| 69-70 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 36 |
| 71-72 | Di chuyển hướng 2 (`2`) | (22, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 35 |
| 73 | Di chuyển hướng 2 (`2`) | (23, 23) | (24, 23) | Dự kiến đến điểm hẹn tọa độ (24, 23) | 33 |
| 74-75 | Di chuyển hướng 2 (`2`) | (24, 23) | (25, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(25, 23)) | 32 |
| 76-77 | Di chuyển hướng 5 (`5`) | (25, 23) | (24, 23) | Dự kiến đến điểm hẹn tọa độ (24, 23) | 31 |
| 78-79 | Di chuyển hướng 5 (`5`) | (24, 23) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 30 |
| 80 | Di chuyển hướng 5 (`5`) | (23, 23) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 28 |
| 81-82 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 27 |
| 83-84 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 26 |
| 85-86 | Di chuyển hướng 0 (`0`) | (20, 23) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 25 |
| 87-88 | Di chuyển hướng 5 (`5`) | (19, 22) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 24 |
| 89-90 | Di chuyển hướng 0 (`0`) | (18, 22) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 23 |
| 91-92 | Di chuyển hướng 0 (`0`) | (18, 21) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 22 |
| 93-94 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 21 |
| 95-96 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 19 |
| 97-99 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 17 |
| 100-101 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 16 |
| 102-103 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 15 |
| 104-105 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 14 |
| 106-107 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 12 |
| 108-110 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 64 |
| 111-112 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 113-114 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 64 |
| 115-116 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 63 |
| 117 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 61 |
| 118-119 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 60 |
| 120-121 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 58 |
| 122-123 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 57 |
| 124-125 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 55 |
| 126-127 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 54 |
| 128-129 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 53 |
| 130-132 | Di chuyển hướng 3 (`3`) | (18, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 51 |
| 133-134 | Di chuyển hướng 3 (`3`) | (18, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 50 |
| 135-136 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 49 |
| 137-138 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 48 |
| 139-141 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 46 |
| 142-144 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 44 |
| 145-146 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 43 |
| 147-149 | Di chuyển hướng 0 (`0`) | (20, 14) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 41 |
| 150-152 | Di chuyển hướng 0 (`0`) | (20, 13) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 39 |
| 153-154 | Di chuyển hướng 0 (`0`) | (19, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 38 |
| 155-156 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 37 |
| 157-158 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 36 |
| 159-161 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 34 |
| 162-163 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 33 |
| 164-165 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 32 |
| 166-167 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 30 |
| 168-169 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 29 |
| 170-171 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 27 |
| 172-173 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 26 |
| 174 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 24 |
| 175-176 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 23 |
| 177-178 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 22 |
| 179-180 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 21 |
| 181-183 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 19 |
| 184-185 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 17 |
| 186-187 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 16 |
| 188-190 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 14 |
| 191-192 | Di chuyển hướng 4 (`4`) | (14, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 13 |
| 193-194 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 12 |
| 195-196 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 11 |
| 197-198 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 10 |
| 199-200 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 9 |
| 201-202 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 8 |
| 203-204 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 6 |
| 205-206 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 5 |
| 207-208 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 4 |
| 209-255 | Chờ 47 bước (`-47`) | (6, 21) | (6, 21) | Dự kiến đứng yên tại (6, 21); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (21, 15) (ô=501)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(29, 9))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(29, 9))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 5, 5, 5, 5, 5, 0, 5, 0, 0, 5, 5, 5, 0, 0, 5, -89, 2, 3, 2, 2, 2, 3, 3, 3, 2, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 3, 3, 3, 2, 3, -52]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 33 |
| 2-4 | Di chuyển hướng 0 (`0`) | (20, 14) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 31 |
| 5-7 | Di chuyển hướng 0 (`0`) | (20, 13) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 29 |
| 8-9 | Di chuyển hướng 0 (`0`) | (19, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 28 |
| 10-11 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 27 |
| 12-13 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 26 |
| 14-16 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 24 |
| 17-18 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 23 |
| 19-20 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 22 |
| 21-22 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 20 |
| 23-24 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 19 |
| 25-26 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 18 |
| 27-29 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 16 |
| 30-31 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 15 |
| 32-33 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 14 |
| 34-35 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 13 |
| 36 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 11 |
| 37 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 9 |
| 38-39 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 8 |
| 40-41 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 7 |
| 42-43 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 6 |
| 44-45 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 5 |
| 46-47 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 4 |
| 48-49 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 3 |
| 50 | Di chuyển hướng 0 (`0`) | (4, 1) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 1 |
| 51-52 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 0)) | 0 |
| 53-141 | Chờ 89 bước (`-89`) | (2, 0) | (2, 0) | Dự kiến đứng yên tại (2, 0); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 0)) | 64 |
| 142-143 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 63 |
| 144-145 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 62 |
| 146 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 60 |
| 147-148 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 59 |
| 149-150 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 58 |
| 151 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 56 |
| 152-153 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 55 |
| 154-155 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 54 |
| 156-157 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 53 |
| 158 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 51 |
| 159 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 49 |
| 160 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 47 |
| 161 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 45 |
| 162-163 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 44 |
| 164-165 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 43 |
| 166-167 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 42 |
| 168-170 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 40 |
| 171-172 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 38 |
| 173-174 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 37 |
| 175-177 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 35 |
| 178-179 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 34 |
| 180 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 32 |
| 181-182 | Di chuyển hướng 1 (`1`) | (21, 7) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 31 |
| 183-184 | Di chuyển hướng 1 (`1`) | (21, 6) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 30 |
| 185-186 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 29 |
| 187-188 | Di chuyển hướng 2 (`2`) | (23, 5) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 28 |
| 189-190 | Di chuyển hướng 2 (`2`) | (24, 5) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 27 |
| 191-192 | Di chuyển hướng 2 (`2`) | (25, 5) | (26, 5) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 26 |
| 193-194 | Di chuyển hướng 3 (`3`) | (26, 5) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 25 |
| 195-196 | Di chuyển hướng 3 (`3`) | (26, 6) | (27, 7) | Dự kiến đến điểm hẹn tọa độ (27, 7) | 24 |
| 197-199 | Di chuyển hướng 3 (`3`) | (27, 7) | (27, 8) | Dự kiến đến điểm hẹn tọa độ (27, 8) | 22 |
| 200-201 | Di chuyển hướng 2 (`2`) | (27, 8) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 21 |
| 202-203 | Di chuyển hướng 3 (`3`) | (28, 8) | (29, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 19 |
| 204-255 | Chờ 52 bước (`-52`) | (29, 9) | (29, 9) | Dự kiến đứng yên tại (29, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 19 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (15, 20) (ô=655)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(2, 0))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(2, 0))
- Mảng hành động đã gửi server: `[0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 5, 5, 5, 4, 5, 4, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 4, 3, -26, 0, 1, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 5, 0, 0, 5, 5, 5, 0, 5, -114]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 64 |
| 3-4 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 64 |
| 5-6 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 64 |
| 7-8 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 64 |
| 9-10 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 64 |
| 11-13 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 64 |
| 14-15 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 16-17 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 64 |
| 18-19 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 64 |
| 20 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 21-22 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 64 |
| 23-24 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 25-26 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 64 |
| 27-28 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 64 |
| 29-30 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 64 |
| 31-33 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 64 |
| 34-35 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 64 |
| 36 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 64 |
| 37-38 | Di chuyển hướng 2 (`2`) | (20, 6) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 64 |
| 39-40 | Di chuyển hướng 2 (`2`) | (21, 6) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 64 |
| 41-42 | Di chuyển hướng 2 (`2`) | (22, 6) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 64 |
| 43-44 | Di chuyển hướng 2 (`2`) | (23, 6) | (24, 6) | Dự kiến đến điểm hẹn tọa độ (24, 6) | 64 |
| 45-46 | Di chuyển hướng 1 (`1`) | (24, 6) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 64 |
| 47-48 | Di chuyển hướng 2 (`2`) | (25, 5) | (26, 5) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 64 |
| 49-50 | Di chuyển hướng 5 (`5`) | (26, 5) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 64 |
| 51-52 | Di chuyển hướng 5 (`5`) | (25, 5) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 64 |
| 53-54 | Di chuyển hướng 5 (`5`) | (24, 5) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 64 |
| 55-56 | Di chuyển hướng 4 (`4`) | (23, 5) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 64 |
| 57-58 | Di chuyển hướng 5 (`5`) | (22, 6) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 64 |
| 59-60 | Di chuyển hướng 4 (`4`) | (21, 6) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 64 |
| 61-62 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 64 |
| 63 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 64 |
| 64-65 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 64 |
| 66-68 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 64 |
| 69-70 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 64 |
| 71-72 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 64 |
| 73-74 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 64 |
| 75-76 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 77-78 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 64 |
| 79 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 64 |
| 80-81 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 82-83 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 64 |
| 84-109 | Chờ 26 bước (`-26`) | (14, 14) | (14, 14) | Dự kiến đứng yên tại (14, 14); hướng tới tọa độ (14, 14) | 64 |
| 110-111 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 112-113 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 64 |
| 114-115 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 64 |
| 116 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 64 |
| 117 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 64 |
| 118-119 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 64 |
| 120-121 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 64 |
| 122-123 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 64 |
| 124 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 64 |
| 125 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 64 |
| 126 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 64 |
| 127 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 64 |
| 128-129 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 64 |
| 130-131 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 64 |
| 132-133 | Di chuyển hướng 0 (`0`) | (7, 2) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 64 |
| 134 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 64 |
| 135-136 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 64 |
| 137-138 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 64 |
| 139 | Di chuyển hướng 0 (`0`) | (4, 1) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 64 |
| 140-141 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 0)) | 64 |
| 142-255 | Chờ 114 bước (`-114`) | (2, 0) | (2, 0) | Dự kiến đứng yên tại (2, 0); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 0)) | 64 |

