# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 31 | #0 | #5 | (5, 31) | 1 | 120 |
| 35 | #2 | #6 | (26, 16) | 1 | 120 |
| 40 | #1 | #6 | (26, 16) | 39 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 31) (ô=997)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Mảng hành động đã gửi server: `[-32, 0, 0, 5, 5, 5, 4, 1, 0, 1, 1, 2, 1, 1, 1, 2, 2, 2, 3, 2, 3, 2, 2, 3, 3, 3, 2, 2, 0, 0, 0, 1, 1, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-31 | Chờ 32 bước (`-32`) | (5, 31) | (5, 31) | Dự kiến đứng yên tại (5, 31); hướng tới tọa độ (5, 31) | 120 |
| 32-33 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 119 |
| 34 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến di chuyển đến (4, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 117 |
| 35-37 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến di chuyển đến (3, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 115 |
| 38-40 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến di chuyển đến (2, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 113 |
| 41-43 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 111 |
| 44 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 109 |
| 45-46 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 108 |
| 47 | Di chuyển hướng 0 (`0`) | (1, 29) | (0, 28) | Dự kiến di chuyển đến (0, 28); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 106 |
| 48 | Di chuyển hướng 1 (`1`) | (0, 28) | (1, 27) | Dự kiến di chuyển đến (1, 27); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 104 |
| 49 | Di chuyển hướng 1 (`1`) | (1, 27) | (1, 26) | Dự kiến di chuyển đến (1, 26); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 102 |
| 50-52 | Di chuyển hướng 2 (`2`) | (1, 26) | (2, 26) | Dự kiến di chuyển đến (2, 26); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 100 |
| 53 | Di chuyển hướng 1 (`1`) | (2, 26) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 98 |
| 54 | Di chuyển hướng 1 (`1`) | (3, 25) | (3, 24) | Dự kiến di chuyển đến (3, 24); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 96 |
| 55 | Di chuyển hướng 1 (`1`) | (3, 24) | (4, 23) | Dự kiến di chuyển đến (4, 23); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 94 |
| 56 | Di chuyển hướng 2 (`2`) | (4, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 92 |
| 57-58 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến di chuyển đến (6, 23); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 91 |
| 59 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến di chuyển đến (7, 23); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 89 |
| 60 | Di chuyển hướng 3 (`3`) | (7, 23) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 87 |
| 61 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 85 |
| 62 | Di chuyển hướng 3 (`3`) | (8, 24) | (9, 25) | Dự kiến di chuyển đến (9, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 83 |
| 63 | Di chuyển hướng 2 (`2`) | (9, 25) | (10, 25) | Dự kiến di chuyển đến (10, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 81 |
| 64 | Di chuyển hướng 2 (`2`) | (10, 25) | (11, 25) | Dự kiến di chuyển đến (11, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 79 |
| 65 | Di chuyển hướng 3 (`3`) | (11, 25) | (11, 26) | Dự kiến di chuyển đến (11, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 77 |
| 66 | Di chuyển hướng 3 (`3`) | (11, 26) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 75 |
| 67 | Di chuyển hướng 3 (`3`) | (12, 27) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 73 |
| 68 | Di chuyển hướng 2 (`2`) | (12, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 71 |
| 69 | Di chuyển hướng 2 (`2`) | (13, 28) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 69 |
| 70-71 | Di chuyển hướng 0 (`0`) | (14, 28) | (14, 27) | Dự kiến di chuyển đến (14, 27); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 68 |
| 72-74 | Di chuyển hướng 0 (`0`) | (14, 27) | (13, 26) | Dự kiến di chuyển đến (13, 26); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 66 |
| 75-76 | Di chuyển hướng 0 (`0`) | (13, 26) | (13, 25) | Dự kiến di chuyển đến (13, 25); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 65 |
| 77-78 | Di chuyển hướng 1 (`1`) | (13, 25) | (13, 24) | Dự kiến di chuyển đến (13, 24); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 64 |
| 79-81 | Di chuyển hướng 1 (`1`) | (13, 24) | (14, 23) | Dự kiến di chuyển đến (14, 23); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 62 |
| 82-83 | Di chuyển hướng 1 (`1`) | (14, 23) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 61 |
| 84-85 | Di chuyển hướng 1 (`1`) | (14, 22) | (15, 21) | Dự kiến di chuyển đến (15, 21); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 60 |
| 86-87 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 59 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 0) (ô=12)
- Nhiên liệu đầu ngày: 88
- Mục tiêu kế hoạch từ Solver: Spot #28 (thương hiệu=20, tọa độ=(27, 30))
- Địa điểm đích kế hoạch: Spot #28 (thương hiệu=20, tọa độ=(27, 30))
- Mảng hành động đã gửi server: `[2, 4, 4, 3, 3, 2, 2, 2, 3, 3, 2, 2, 3, 2, 5, 4, 4, 3, 3, 3, 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 3, 3, 3, 2, 3, 4, 3, 4, 4, 4, 3, 3, 4, 4, 4, 5, 5, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 86 |
| 1-2 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 85 |
| 3 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 83 |
| 4 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 81 |
| 5 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 79 |
| 6 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 77 |
| 7-8 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 76 |
| 9 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 74 |
| 10-11 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 73 |
| 12-13 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 72 |
| 14-15 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 71 |
| 16 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 69 |
| 17 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 67 |
| 18 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 65 |
| 19-20 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 64 |
| 21 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 62 |
| 22-23 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 61 |
| 24 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 59 |
| 25-26 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến di chuyển đến (20, 11); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 58 |
| 27 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 56 |
| 28 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến di chuyển đến (21, 13); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 54 |
| 29 | Di chuyển hướng 2 (`2`) | (21, 13) | (22, 13) | Dự kiến di chuyển đến (22, 13); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 52 |
| 30-32 | Di chuyển hướng 1 (`1`) | (22, 13) | (22, 12) | Dự kiến di chuyển đến (22, 12); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 50 |
| 33-34 | Di chuyển hướng 2 (`2`) | (22, 12) | (23, 12) | Dự kiến di chuyển đến (23, 12); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 49 |
| 35 | Di chuyển hướng 3 (`3`) | (23, 12) | (24, 13) | Dự kiến di chuyển đến (24, 13); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 47 |
| 36 | Di chuyển hướng 3 (`3`) | (24, 13) | (24, 14) | Dự kiến di chuyển đến (24, 14); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 45 |
| 37 | Di chuyển hướng 2 (`2`) | (24, 14) | (25, 14) | Dự kiến di chuyển đến (25, 14); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 43 |
| 38 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến di chuyển đến (26, 15); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 41 |
| 39 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến di chuyển đến (26, 16); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 120 |
| 40-41 | Di chuyển hướng 2 (`2`) | (26, 16) | (27, 16) | Dự kiến di chuyển đến (27, 16); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 119 |
| 42-43 | Di chuyển hướng 2 (`2`) | (27, 16) | (28, 16) | Dự kiến di chuyển đến (28, 16); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 118 |
| 44 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến di chuyển đến (29, 17); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 116 |
| 45 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến di chuyển đến (29, 18); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 114 |
| 46 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến di chuyển đến (30, 19); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 112 |
| 47 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến di chuyển đến (31, 19); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 110 |
| 48 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến di chuyển đến (31, 20); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 108 |
| 49 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 106 |
| 50-51 | Di chuyển hướng 3 (`3`) | (31, 21) | (31, 22) | Dự kiến di chuyển đến (31, 22); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 105 |
| 52-53 | Di chuyển hướng 4 (`4`) | (31, 22) | (31, 23) | Dự kiến di chuyển đến (31, 23); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 104 |
| 54-56 | Di chuyển hướng 4 (`4`) | (31, 23) | (30, 24) | Dự kiến di chuyển đến (30, 24); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 102 |
| 57-58 | Di chuyển hướng 4 (`4`) | (30, 24) | (30, 25) | Dự kiến di chuyển đến (30, 25); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 101 |
| 59 | Di chuyển hướng 3 (`3`) | (30, 25) | (30, 26) | Dự kiến di chuyển đến (30, 26); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 99 |
| 60 | Di chuyển hướng 3 (`3`) | (30, 26) | (31, 27) | Dự kiến di chuyển đến (31, 27); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 97 |
| 61 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến di chuyển đến (30, 28); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 95 |
| 62 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 93 |
| 63-64 | Di chuyển hướng 4 (`4`) | (30, 29) | (29, 30) | Dự kiến di chuyển đến (29, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 92 |
| 65-67 | Di chuyển hướng 5 (`5`) | (29, 30) | (28, 30) | Dự kiến di chuyển đến (28, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 90 |
| 68-69 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 89 |
| 70-87 | Chờ 18 bước (`-18`) | (27, 30) | (27, 30) | Dự kiến đứng yên tại (27, 30); mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 89 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (21, 20) (ô=661)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #28 (thương hiệu=20, tọa độ=(27, 30))
- Địa điểm đích kế hoạch: Spot #28 (thương hiệu=20, tọa độ=(27, 30))
- Mảng hành động đã gửi server: `[3, 0, 0, 0, 3, 2, 2, 2, 2, 2, 1, 0, 1, -10, 4, 4, 4, 4, 4, 4, 5, 5, 4, 4, 4, 5, 4, 3, 4, 4, 5, 2, 3, 3, 2, 2, 2, 1, 1, 2, 2, 2, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (21, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 20 |
| 3-4 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến di chuyển đến (21, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 19 |
| 5-7 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 17 |
| 8 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 15 |
| 9-10 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 14 |
| 11 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến di chuyển đến (22, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 12 |
| 12-13 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến di chuyển đến (23, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 11 |
| 14-15 | Di chuyển hướng 2 (`2`) | (23, 19) | (24, 19) | Dự kiến di chuyển đến (24, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 10 |
| 16 | Di chuyển hướng 2 (`2`) | (24, 19) | (25, 19) | Dự kiến di chuyển đến (25, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 8 |
| 17-19 | Di chuyển hướng 2 (`2`) | (25, 19) | (26, 19) | Dự kiến di chuyển đến (26, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 6 |
| 20 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 4 |
| 21-22 | Di chuyển hướng 0 (`0`) | (26, 18) | (26, 17) | Dự kiến di chuyển đến (26, 17); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 3 |
| 23-25 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 1 |
| 26-35 | Chờ 10 bước (`-10`) | (26, 16) | (26, 16) | Dự kiến đứng yên tại (26, 16); hướng tới tọa độ (26, 16) | 120 |
| 36-37 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến di chuyển đến (26, 17); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 119 |
| 38-40 | Di chuyển hướng 4 (`4`) | (26, 17) | (25, 18) | Dự kiến di chuyển đến (25, 18); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 117 |
| 41-42 | Di chuyển hướng 4 (`4`) | (25, 18) | (25, 19) | Dự kiến di chuyển đến (25, 19); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 116 |
| 43-45 | Di chuyển hướng 4 (`4`) | (25, 19) | (24, 20) | Dự kiến di chuyển đến (24, 20); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 114 |
| 46-47 | Di chuyển hướng 4 (`4`) | (24, 20) | (24, 21) | Dự kiến di chuyển đến (24, 21); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 113 |
| 48 | Di chuyển hướng 4 (`4`) | (24, 21) | (23, 22) | Dự kiến di chuyển đến (23, 22); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 111 |
| 49-50 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến di chuyển đến (22, 22); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 110 |
| 51-52 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 109 |
| 53 | Di chuyển hướng 4 (`4`) | (21, 22) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 107 |
| 54 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến di chuyển đến (20, 24); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 105 |
| 55 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 103 |
| 56 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến di chuyển đến (19, 25); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 101 |
| 57 | Di chuyển hướng 4 (`4`) | (19, 25) | (18, 26) | Dự kiến di chuyển đến (18, 26); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 99 |
| 58 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến di chuyển đến (19, 27); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 97 |
| 59 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến di chuyển đến (18, 28); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 95 |
| 60 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 93 |
| 61 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 91 |
| 62-63 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 90 |
| 64 | Di chuyển hướng 3 (`3`) | (18, 29) | (18, 30) | Dự kiến di chuyển đến (18, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 88 |
| 65-67 | Di chuyển hướng 3 (`3`) | (18, 30) | (19, 31) | Dự kiến di chuyển đến (19, 31); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 86 |
| 68-70 | Di chuyển hướng 2 (`2`) | (19, 31) | (20, 31) | Dự kiến di chuyển đến (20, 31); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 84 |
| 71-73 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến di chuyển đến (21, 31); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 82 |
| 74-76 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 80 |
| 77-78 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 79 |
| 79 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 77 |
| 80-81 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến di chuyển đến (24, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 76 |
| 82-83 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 75 |
| 84-85 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 74 |
| 86 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 72 |
| 87 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 70 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (4, 23) (ô=740)
- Nhiên liệu đầu ngày: 72
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 1, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (4, 23) | (3, 22) | Dự kiến di chuyển đến (3, 22); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 70 |
| 1 | Di chuyển hướng 5 (`5`) | (3, 22) | (2, 22) | Dự kiến di chuyển đến (2, 22); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 68 |
| 2 | Di chuyển hướng 0 (`0`) | (2, 22) | (2, 21) | Dự kiến di chuyển đến (2, 21); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 66 |
| 3-4 | Di chuyển hướng 0 (`0`) | (2, 21) | (1, 20) | Dự kiến di chuyển đến (1, 20); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 65 |
| 5-6 | Di chuyển hướng 0 (`0`) | (1, 20) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 64 |
| 7 | Di chuyển hướng 0 (`0`) | (1, 19) | (0, 18) | Dự kiến di chuyển đến (0, 18); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 62 |
| 8-9 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến di chuyển đến (0, 17); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 61 |
| 10-11 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến di chuyển đến (0, 16); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 60 |
| 12 | Di chuyển hướng 0 (`0`) | (0, 16) | (0, 15) | Dự kiến di chuyển đến (0, 15); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 58 |
| 13 | Di chuyển hướng 1 (`1`) | (0, 15) | (0, 14) | Dự kiến di chuyển đến (0, 14); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 56 |
| 14 | Di chuyển hướng 1 (`1`) | (0, 14) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 54 |
| 15 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 52 |
| 16 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 50 |
| 17 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 48 |
| 18 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 46 |
| 19 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 44 |
| 20 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 42 |
| 21 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 40 |
| 22 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 38 |
| 23 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 36 |
| 24 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 34 |
| 25-26 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 33 |
| 27-28 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 32 |
| 29-30 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 31 |
| 31 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 29 |
| 32 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 27 |
| 33 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 25 |
| 34 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 23 |
| 35 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 21 |
| 36 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 19 |
| 37 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 17 |
| 38 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 15 |
| 39 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 13 |
| 40 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 11 |
| 41-42 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 10 |
| 43-44 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 9 |
| 45 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 7 |
| 46-48 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 5 |
| 49-50 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 4 |
| 51-52 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 3 |
| 53-54 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 2 |
| 55-87 | Chờ 33 bước (`-33`) | (12, 11) | (12, 11) | Dự kiến đứng yên tại (12, 11); mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 2 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=389)
- Nhiên liệu đầu ngày: 113
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=1, tọa độ=(21, 11))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=1, tọa độ=(21, 11))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 0, 1, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 5, 0, 1, 2, 5, 4, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 112 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 111 |
| 4 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 109 |
| 5-7 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 107 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 106 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 105 |
| 12-13 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 104 |
| 14-15 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 103 |
| 16 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 101 |
| 17-18 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 100 |
| 19-21 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 98 |
| 22 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 96 |
| 23 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 94 |
| 24 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 92 |
| 25 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 90 |
| 26 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 88 |
| 27-29 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến di chuyển đến (16, 2); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 86 |
| 30-31 | Di chuyển hướng 2 (`2`) | (16, 2) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 85 |
| 32-33 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến di chuyển đến (18, 2); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 84 |
| 34 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến di chuyển đến (19, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 82 |
| 35 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến di chuyển đến (20, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 80 |
| 36-37 | Di chuyển hướng 2 (`2`) | (20, 1) | (21, 1) | Dự kiến di chuyển đến (21, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 79 |
| 38-39 | Di chuyển hướng 2 (`2`) | (21, 1) | (22, 1) | Dự kiến di chuyển đến (22, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 78 |
| 40-42 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến di chuyển đến (23, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 76 |
| 43-44 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến di chuyển đến (24, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 75 |
| 45-46 | Di chuyển hướng 2 (`2`) | (24, 1) | (25, 1) | Dự kiến di chuyển đến (25, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 74 |
| 47 | Di chuyển hướng 1 (`1`) | (25, 1) | (25, 0) | Dự kiến di chuyển đến (25, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 72 |
| 48 | Di chuyển hướng 2 (`2`) | (25, 0) | (26, 0) | Dự kiến di chuyển đến (26, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 70 |
| 49 | Di chuyển hướng 2 (`2`) | (26, 0) | (27, 0) | Dự kiến di chuyển đến (27, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 68 |
| 50 | Di chuyển hướng 2 (`2`) | (27, 0) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 66 |
| 51 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 64 |
| 52 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 62 |
| 53 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 60 |
| 54-55 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 59 |
| 56 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 57 |
| 57 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 55 |
| 58 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 53 |
| 59-61 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 51 |
| 62-64 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 49 |
| 65-66 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến di chuyển đến (27, 4); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 48 |
| 67-68 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 47 |
| 69-70 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến di chuyển đến (28, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 46 |
| 71 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến di chuyển đến (29, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 44 |
| 72 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 42 |
| 73 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 40 |
| 74-75 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 39 |
| 76 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến di chuyển đến (30, 5); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 37 |
| 77 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 35 |
| 78 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 33 |
| 79-80 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (21, 11) (Spot #2 (thương hiệu=1, tọa độ=(21, 11))) | 32 |
| 81 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến di chuyển đến (30, 5); hướng tới tọa độ (21, 11) (Spot #2 (thương hiệu=1, tọa độ=(21, 11))) | 30 |
| 82 | Di chuyển hướng 5 (`5`) | (30, 5) | (29, 5) | Dự kiến di chuyển đến (29, 5); hướng tới tọa độ (21, 11) (Spot #2 (thương hiệu=1, tọa độ=(21, 11))) | 28 |
| 83-84 | Di chuyển hướng 5 (`5`) | (29, 5) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (21, 11) (Spot #2 (thương hiệu=1, tọa độ=(21, 11))) | 27 |
| 85-86 | Di chuyển hướng 5 (`5`) | (28, 5) | (27, 5) | Dự kiến di chuyển đến (27, 5); hướng tới tọa độ (21, 11) (Spot #2 (thương hiệu=1, tọa độ=(21, 11))) | 26 |
| 87 | Di chuyển hướng 5 (`5`) | (27, 5) | (26, 5) | Dự kiến di chuyển đến (26, 5); hướng tới tọa độ (21, 11) (Spot #2 (thương hiệu=1, tọa độ=(21, 11))) | 24 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (8, 16) (ô=520)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Mảng hành động đã gửi server: `[3, 2, 3, 3, 4, 4, 4, 4, 4, 5, 4, 4, 4, 5, 4, 3, 4, 3, -57]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 2-4 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 5 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 6 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 7 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 8-10 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 11-12 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến di chuyển đến (9, 22); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 13-14 | Di chuyển hướng 4 (`4`) | (9, 22) | (9, 23) | Dự kiến di chuyển đến (9, 23); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 15-16 | Di chuyển hướng 4 (`4`) | (9, 23) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 17 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 18 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến di chuyển đến (7, 25); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 19 | Di chuyển hướng 4 (`4`) | (7, 25) | (6, 26) | Dự kiến di chuyển đến (6, 26); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 20-21 | Di chuyển hướng 4 (`4`) | (6, 26) | (6, 27) | Dự kiến di chuyển đến (6, 27); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 22-24 | Di chuyển hướng 5 (`5`) | (6, 27) | (5, 27) | Dự kiến di chuyển đến (5, 27); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 25-27 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 28 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 29 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 120 |
| 30 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (5, 31) | 120 |
| 31-87 | Chờ 57 bước (`-57`) | (5, 31) | (5, 31) | Dự kiến đứng yên tại (5, 31); điểm hẹn của xe tuần tra #0 tại (5, 31) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (9, 16) (ô=521)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #17 (thương hiệu=11, tọa độ=(26, 16))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 1, 1, 2, 2, 3, 2, 2, 2, 2, 2, 3, 2, 1, 2, 3, 3, 2, 3, 3, -53]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 4 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 5 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 6 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 7 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 8 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 9 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 10 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 11 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 12 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 13-15 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 16-18 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 19-20 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến di chuyển đến (19, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 21-22 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 23 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến di chuyển đến (21, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 24 | Di chuyển hướng 2 (`2`) | (21, 13) | (22, 13) | Dự kiến di chuyển đến (22, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 25-27 | Di chuyển hướng 1 (`1`) | (22, 13) | (22, 12) | Dự kiến di chuyển đến (22, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 28-29 | Di chuyển hướng 2 (`2`) | (22, 12) | (23, 12) | Dự kiến di chuyển đến (23, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 30 | Di chuyển hướng 3 (`3`) | (23, 12) | (24, 13) | Dự kiến di chuyển đến (24, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 31 | Di chuyển hướng 3 (`3`) | (24, 13) | (24, 14) | Dự kiến di chuyển đến (24, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 32 | Di chuyển hướng 2 (`2`) | (24, 14) | (25, 14) | Dự kiến di chuyển đến (25, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 33 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến di chuyển đến (26, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 120 |
| 34 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (26, 16) | 120 |
| 35-87 | Chờ 53 bước (`-53`) | (26, 16) | (26, 16) | Dự kiến đứng yên tại (26, 16); điểm hẹn của xe tuần tra #2 tại (26, 16) | 120 |

