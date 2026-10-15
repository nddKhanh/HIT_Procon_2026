# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #2 | #6 | (14, 8) | 27 | 120 |
| 29 | #2 | #5 | (16, 4) | 93 | 120 |
| 30 | #3 | #6 | (6, 26) | 0 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 18) (ô=596)
- Nhiên liệu đầu ngày: 78
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Mảng hành động đã gửi server: `[3, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 4, 4, 4, 4, 4, 5, 0, 5, 5, 5, 4, 4, 4, 5, 4, 4, 3, 4, 1, 2, 2, 2, 3, 3, 5, 5, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 77 |
| 2 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 75 |
| 3 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 73 |
| 4 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 71 |
| 5-7 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 69 |
| 8-10 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 67 |
| 11-12 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 66 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 65 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 64 |
| 17 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 62 |
| 18 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 60 |
| 19 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 58 |
| 20 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 56 |
| 21-23 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 54 |
| 24-25 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến di chuyển đến (9, 22); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 53 |
| 26-27 | Di chuyển hướng 4 (`4`) | (9, 22) | (9, 23) | Dự kiến di chuyển đến (9, 23); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 52 |
| 28-29 | Di chuyển hướng 4 (`4`) | (9, 23) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 51 |
| 30 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 49 |
| 31 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến di chuyển đến (7, 23); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 47 |
| 32 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến di chuyển đến (6, 23); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 45 |
| 33 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến di chuyển đến (5, 23); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 43 |
| 34-35 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến di chuyển đến (4, 23); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 42 |
| 36 | Di chuyển hướng 4 (`4`) | (4, 23) | (3, 24) | Dự kiến di chuyển đến (3, 24); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 40 |
| 37 | Di chuyển hướng 4 (`4`) | (3, 24) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 38 |
| 38 | Di chuyển hướng 4 (`4`) | (3, 25) | (2, 26) | Dự kiến di chuyển đến (2, 26); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 36 |
| 39 | Di chuyển hướng 5 (`5`) | (2, 26) | (1, 26) | Dự kiến di chuyển đến (1, 26); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 34 |
| 40-42 | Di chuyển hướng 4 (`4`) | (1, 26) | (1, 27) | Dự kiến di chuyển đến (1, 27); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 32 |
| 43 | Di chuyển hướng 4 (`4`) | (1, 27) | (0, 28) | Dự kiến di chuyển đến (0, 28); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 30 |
| 44 | Di chuyển hướng 3 (`3`) | (0, 28) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 28 |
| 45 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 26 |
| 46-47 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 25 |
| 48 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến di chuyển đến (2, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 23 |
| 49-51 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến di chuyển đến (3, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 21 |
| 52-54 | Di chuyển hướng 2 (`2`) | (3, 29) | (4, 29) | Dự kiến di chuyển đến (4, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 19 |
| 55-57 | Di chuyển hướng 3 (`3`) | (4, 29) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 17 |
| 58 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 15 |
| 59-60 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến di chuyển đến (4, 31); hướng tới tọa độ (3, 31) (Spot #18 (thương hiệu=11, tọa độ=(3, 31))) | 14 |
| 61 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 12 |
| 62-87 | Chờ 26 bước (`-26`) | (3, 31) | (3, 31) | Dự kiến đứng yên tại (3, 31); mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 12 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (29, 24) (ô=797)
- Nhiên liệu đầu ngày: 98
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=1, tọa độ=(21, 15))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=1, tọa độ=(21, 15))
- Mảng hành động đã gửi server: `[4, 5, 0, 0, 5, 5, 0, 5, 5, 0, 4, 4, 4, 4, 3, 3, 3, 3, 3, 4, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 5, 0, 0, 0, 5, 5, 4, 3, 4, 5, 5, 5, 5, 5, 0, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (29, 24) | (29, 25) | Dự kiến di chuyển đến (29, 25); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 97 |
| 2 | Di chuyển hướng 5 (`5`) | (29, 25) | (28, 25) | Dự kiến di chuyển đến (28, 25); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 95 |
| 3 | Di chuyển hướng 0 (`0`) | (28, 25) | (27, 24) | Dự kiến di chuyển đến (27, 24); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 93 |
| 4 | Di chuyển hướng 0 (`0`) | (27, 24) | (27, 23) | Dự kiến di chuyển đến (27, 23); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 91 |
| 5 | Di chuyển hướng 5 (`5`) | (27, 23) | (26, 23) | Dự kiến di chuyển đến (26, 23); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 89 |
| 6 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến di chuyển đến (25, 23); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 87 |
| 7 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến di chuyển đến (24, 22); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 85 |
| 8 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến di chuyển đến (23, 22); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 83 |
| 9-10 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến di chuyển đến (22, 22); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 82 |
| 11-12 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 81 |
| 13-14 | Di chuyển hướng 4 (`4`) | (22, 21) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 80 |
| 15 | Di chuyển hướng 4 (`4`) | (21, 22) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 78 |
| 16 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến di chuyển đến (20, 24); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 76 |
| 17 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 74 |
| 18 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến di chuyển đến (20, 26); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 72 |
| 19 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến di chuyển đến (21, 27); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 70 |
| 20 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến di chuyển đến (21, 28); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 68 |
| 21 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến di chuyển đến (22, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 66 |
| 22 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 64 |
| 23 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 62 |
| 24-25 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 61 |
| 26 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 59 |
| 27-28 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến di chuyển đến (24, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 58 |
| 29-30 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 57 |
| 31-32 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 56 |
| 33 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 54 |
| 34 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 52 |
| 35-36 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến di chuyển đến (28, 30); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 51 |
| 37-38 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến di chuyển đến (29, 30); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 50 |
| 39-41 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 48 |
| 42-43 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến di chuyển đến (30, 28); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 47 |
| 44 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến di chuyển đến (31, 27); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 45 |
| 45 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến di chuyển đến (30, 26); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 43 |
| 46 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến di chuyển đến (30, 25); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 41 |
| 47 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến di chuyển đến (30, 24); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 39 |
| 48-49 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến di chuyển đến (31, 23); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 38 |
| 50-52 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến di chuyển đến (31, 22); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 36 |
| 53-54 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 35 |
| 55-56 | Di chuyển hướng 1 (`1`) | (31, 21) | (31, 20) | Dự kiến di chuyển đến (31, 20); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 34 |
| 57 | Di chuyển hướng 0 (`0`) | (31, 20) | (31, 19) | Dự kiến di chuyển đến (31, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 32 |
| 58 | Di chuyển hướng 5 (`5`) | (31, 19) | (30, 19) | Dự kiến di chuyển đến (30, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 30 |
| 59 | Di chuyển hướng 0 (`0`) | (30, 19) | (29, 18) | Dự kiến di chuyển đến (29, 18); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 28 |
| 60 | Di chuyển hướng 0 (`0`) | (29, 18) | (29, 17) | Dự kiến di chuyển đến (29, 17); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 26 |
| 61 | Di chuyển hướng 0 (`0`) | (29, 17) | (28, 16) | Dự kiến di chuyển đến (28, 16); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 24 |
| 62 | Di chuyển hướng 5 (`5`) | (28, 16) | (27, 16) | Dự kiến di chuyển đến (27, 16); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 22 |
| 63-64 | Di chuyển hướng 5 (`5`) | (27, 16) | (26, 16) | Dự kiến di chuyển đến (26, 16); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 21 |
| 65-66 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến di chuyển đến (26, 17); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 20 |
| 67-69 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 18 |
| 70-71 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến di chuyển đến (26, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 17 |
| 72 | Di chuyển hướng 5 (`5`) | (26, 19) | (25, 19) | Dự kiến di chuyển đến (25, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 15 |
| 73-75 | Di chuyển hướng 5 (`5`) | (25, 19) | (24, 19) | Dự kiến di chuyển đến (24, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 13 |
| 76 | Di chuyển hướng 5 (`5`) | (24, 19) | (23, 19) | Dự kiến di chuyển đến (23, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 11 |
| 77-78 | Di chuyển hướng 5 (`5`) | (23, 19) | (22, 19) | Dự kiến di chuyển đến (22, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 10 |
| 79-80 | Di chuyển hướng 5 (`5`) | (22, 19) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 9 |
| 81 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 7 |
| 82-83 | Di chuyển hướng 2 (`2`) | (20, 18) | (21, 18) | Dự kiến di chuyển đến (21, 18); hướng tới tọa độ (21, 15) (Spot #3 (thương hiệu=1, tọa độ=(21, 15))) | 6 |
| 84-86 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến di chuyển đến (22, 17); hướng tới tọa độ (21, 15) (Spot #3 (thương hiệu=1, tọa độ=(21, 15))) | 4 |
| 87 | Chờ 1 bước (`-1`) | (22, 17) | (22, 17) | Dự kiến đứng yên tại (22, 17); mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 9) (ô=302)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 0, 0, 0, 1, 1, 3, 4, 4, 3, 2, 2, 2, -4, 3, 3, 2, 2, 3, 2, 5, 4, 4, 5, 5, 5, 4, 4, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 0, 5, 0, 0, 0, 0, 0, 1, 1, 1, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 120 |
| 3-6 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 118 |
| 7 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 116 |
| 8 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 114 |
| 9 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 112 |
| 10 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 110 |
| 11 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 108 |
| 12 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 106 |
| 13 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 104 |
| 14-15 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 103 |
| 16-17 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 102 |
| 18-20 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 100 |
| 21 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 98 |
| 22 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 96 |
| 23-24 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 95 |
| 25 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 93 |
| 26-29 | Chờ 4 bước (`-4`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); hướng tới tọa độ (16, 4) | 120 |
| 30-31 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 119 |
| 32-33 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 118 |
| 34-35 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 117 |
| 36 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 115 |
| 37 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 113 |
| 38 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 111 |
| 39-40 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 110 |
| 41 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 108 |
| 42-43 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 107 |
| 44 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 105 |
| 45-47 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 103 |
| 48-50 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến di chuyển đến (16, 9); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 101 |
| 51-53 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 99 |
| 54 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 97 |
| 55 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 95 |
| 56 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 93 |
| 57 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 91 |
| 58-59 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 90 |
| 60-61 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 89 |
| 62-63 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 88 |
| 64-65 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 87 |
| 66-68 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 85 |
| 69 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 83 |
| 70-71 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 82 |
| 72-73 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 81 |
| 74 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 79 |
| 75 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 77 |
| 76 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 75 |
| 77 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 73 |
| 78 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 71 |
| 79 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 69 |
| 80 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 67 |
| 81 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 65 |
| 82 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 63 |
| 83 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 61 |
| 84-85 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 60 |
| 86-87 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 59 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 31) (ô=1003)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #31 (thương hiệu=23, tọa độ=(22, 31))
- Địa điểm đích kế hoạch: Spot #31 (thương hiệu=23, tọa độ=(22, 31))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 5, 0, 0, -23, 2, 2, 2, 3, 2, 2, 3, 2, 2, 1, 1, 2, 1, 2, 3, 3, 4, 4, 5, 2, 1, 1, 0, 1, 2, 1, 1, 1, 1, 0, 0, 0, 3, 4, 4, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 31) | (10, 31) | Dự kiến di chuyển đến (10, 31); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 12 |
| 2 | Di chuyển hướng 0 (`0`) | (10, 31) | (9, 30) | Dự kiến di chuyển đến (9, 30); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 10 |
| 3 | Di chuyển hướng 0 (`0`) | (9, 30) | (9, 29) | Dự kiến di chuyển đến (9, 29); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 8 |
| 4 | Di chuyển hướng 0 (`0`) | (9, 29) | (8, 28) | Dự kiến di chuyển đến (8, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 6 |
| 5 | Di chuyển hướng 5 (`5`) | (8, 28) | (7, 28) | Dự kiến di chuyển đến (7, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 4 |
| 6 | Di chuyển hướng 0 (`0`) | (7, 28) | (7, 27) | Dự kiến di chuyển đến (7, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 2 |
| 7 | Di chuyển hướng 0 (`0`) | (7, 27) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 0 |
| 8-30 | Chờ 23 bước (`-23`) | (6, 26) | (6, 26) | Dự kiến đứng yên tại (6, 26); hướng tới tọa độ (6, 26) | 120 |
| 31-32 | Di chuyển hướng 2 (`2`) | (6, 26) | (7, 26) | Dự kiến di chuyển đến (7, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 119 |
| 33 | Di chuyển hướng 2 (`2`) | (7, 26) | (8, 26) | Dự kiến di chuyển đến (8, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 117 |
| 34-36 | Di chuyển hướng 2 (`2`) | (8, 26) | (9, 26) | Dự kiến di chuyển đến (9, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 115 |
| 37-38 | Di chuyển hướng 3 (`3`) | (9, 26) | (10, 27) | Dự kiến di chuyển đến (10, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 114 |
| 39-40 | Di chuyển hướng 2 (`2`) | (10, 27) | (11, 27) | Dự kiến di chuyển đến (11, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 113 |
| 41-42 | Di chuyển hướng 2 (`2`) | (11, 27) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 112 |
| 43 | Di chuyển hướng 3 (`3`) | (12, 27) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 110 |
| 44 | Di chuyển hướng 2 (`2`) | (12, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 108 |
| 45 | Di chuyển hướng 2 (`2`) | (13, 28) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 106 |
| 46-47 | Di chuyển hướng 1 (`1`) | (14, 28) | (15, 27) | Dự kiến di chuyển đến (15, 27); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 105 |
| 48-50 | Di chuyển hướng 1 (`1`) | (15, 27) | (15, 26) | Dự kiến di chuyển đến (15, 26); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 103 |
| 51-53 | Di chuyển hướng 2 (`2`) | (15, 26) | (16, 26) | Dự kiến di chuyển đến (16, 26); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 101 |
| 54-55 | Di chuyển hướng 1 (`1`) | (16, 26) | (17, 25) | Dự kiến di chuyển đến (17, 25); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 100 |
| 56-57 | Di chuyển hướng 2 (`2`) | (17, 25) | (18, 25) | Dự kiến di chuyển đến (18, 25); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 99 |
| 58-60 | Di chuyển hướng 3 (`3`) | (18, 25) | (18, 26) | Dự kiến di chuyển đến (18, 26); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 97 |
| 61 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến di chuyển đến (19, 27); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 95 |
| 62 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến di chuyển đến (18, 28); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 93 |
| 63 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 91 |
| 64 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 89 |
| 65-66 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 88 |
| 67 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến di chuyển đến (18, 28); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 86 |
| 68 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến di chuyển đến (19, 27); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 84 |
| 69 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến di chuyển đến (18, 26); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 82 |
| 70 | Di chuyển hướng 1 (`1`) | (18, 26) | (19, 25) | Dự kiến di chuyển đến (19, 25); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 80 |
| 71 | Di chuyển hướng 2 (`2`) | (19, 25) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 78 |
| 72 | Di chuyển hướng 1 (`1`) | (20, 25) | (20, 24) | Dự kiến di chuyển đến (20, 24); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 76 |
| 73 | Di chuyển hướng 1 (`1`) | (20, 24) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 74 |
| 74 | Di chuyển hướng 1 (`1`) | (21, 23) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 72 |
| 75 | Di chuyển hướng 1 (`1`) | (21, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 70 |
| 76-77 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến di chuyển đến (21, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 69 |
| 78-80 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 67 |
| 81 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 65 |
| 82-83 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 64 |
| 84 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 62 |
| 85 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 60 |
| 86 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến di chuyển đến (20, 22); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 58 |
| 87 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 56 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (29, 7) (ô=253)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=5, tọa độ=(31, 4))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=5, tọa độ=(31, 4))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 5, 0, 1, 2, -45]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (29, 7) | (28, 6) | Dự kiến di chuyển đến (28, 6); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 52 |
| 2 | Di chuyển hướng 0 (`0`) | (28, 6) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 50 |
| 3-4 | Di chuyển hướng 0 (`0`) | (28, 5) | (27, 4) | Dự kiến di chuyển đến (27, 4); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 49 |
| 5-6 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 48 |
| 7-8 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 47 |
| 9-11 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 45 |
| 12-14 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 43 |
| 15 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 41 |
| 16 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 39 |
| 17 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 37 |
| 18-19 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 36 |
| 20 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 34 |
| 21 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 32 |
| 22 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 30 |
| 23-25 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 28 |
| 26-28 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 26 |
| 29-30 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến di chuyển đến (27, 4); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 25 |
| 31-32 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 24 |
| 33-34 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến di chuyển đến (28, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 23 |
| 35 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến di chuyển đến (29, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 21 |
| 36 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 19 |
| 37 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 17 |
| 38-39 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 16 |
| 40 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến di chuyển đến (30, 5); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 14 |
| 41 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 12 |
| 42 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 10 |
| 43-87 | Chờ 45 bước (`-45`) | (31, 4) | (31, 4) | Dự kiến đứng yên tại (31, 4); mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 10 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (26, 18) (ô=602)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=4, tọa độ=(16, 4))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 5, 0, 0, 5, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, -59]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (26, 18) | (26, 17) | Dự kiến di chuyển đến (26, 17); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 2-4 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến di chuyển đến (26, 16); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 5-6 | Di chuyển hướng 0 (`0`) | (26, 16) | (26, 15) | Dự kiến di chuyển đến (26, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 7 | Di chuyển hướng 0 (`0`) | (26, 15) | (25, 14) | Dự kiến di chuyển đến (25, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 8 | Di chuyển hướng 5 (`5`) | (25, 14) | (24, 14) | Dự kiến di chuyển đến (24, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 9 | Di chuyển hướng 0 (`0`) | (24, 14) | (24, 13) | Dự kiến di chuyển đến (24, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 10 | Di chuyển hướng 0 (`0`) | (24, 13) | (23, 12) | Dự kiến di chuyển đến (23, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 11 | Di chuyển hướng 5 (`5`) | (23, 12) | (22, 12) | Dự kiến di chuyển đến (22, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 12-13 | Di chuyển hướng 4 (`4`) | (22, 12) | (22, 13) | Dự kiến di chuyển đến (22, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 14-16 | Di chuyển hướng 5 (`5`) | (22, 13) | (21, 13) | Dự kiến di chuyển đến (21, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 17 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 18 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến di chuyển đến (20, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 19 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 20-21 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 22 | Di chuyển hướng 0 (`0`) | (19, 9) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 23 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 24 | Di chuyển hướng 0 (`0`) | (18, 7) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 25-26 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới điểm hẹn của xe tuần tra #2 tại (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 120 |
| 27-28 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (16, 4) | 120 |
| 29-87 | Chờ 59 bước (`-59`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); điểm hẹn của xe tuần tra #2 tại (16, 4) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (14, 8) (ô=270)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #10 (thương hiệu=5, tọa độ=(6, 26))
- Mảng hành động đã gửi server: `[3, 3, 4, 5, 5, 4, 4, 5, 4, 4, 4, 3, 3, 3, 4, 4, 4, 4, 4, 5, 4, 4, -58]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 4 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 5 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 6 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 7 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 8 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 9 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 10 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 11 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 12 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 13 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 14 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 15 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 16 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 17 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 18-20 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 21-22 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến di chuyển đến (9, 22); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 23-24 | Di chuyển hướng 4 (`4`) | (9, 22) | (9, 23) | Dự kiến di chuyển đến (9, 23); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 25-26 | Di chuyển hướng 4 (`4`) | (9, 23) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 27 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 28 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến di chuyển đến (7, 25); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 120 |
| 29 | Di chuyển hướng 4 (`4`) | (7, 25) | (6, 26) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (6, 26) | 120 |
| 30-87 | Chờ 58 bước (`-58`) | (6, 26) | (6, 26) | Dự kiến đứng yên tại (6, 26); điểm hẹn của xe tuần tra #3 tại (6, 26) | 120 |

