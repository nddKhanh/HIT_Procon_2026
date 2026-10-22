# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 100
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 44 | #1 | #3 | (20, 18) | 0 | 120 |
| 52 | #5 | #6 | (22, 21) | 0 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (25, 14) (ô=473)
- Nhiên liệu đầu ngày: 104
- Mục tiêu kế hoạch từ Solver: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Địa điểm đích kế hoạch: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 3, 3, 3, 2, 3, 4, 3, 4, 4, 4, 3, 3, 4, 4, 4, 5, 5, 5, 0, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 5, 2, 1, 1, 0, 0, 5, 4, 5, 4, 4, 5, 5, 0, 5, 5, 0, 5, 5, 5, 3, 3, 2, 3, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến di chuyển đến (26, 15); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 102 |
| 1 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 100 |
| 2-3 | Di chuyển hướng 2 (`2`) | (26, 16) | (27, 16) | Dự kiến di chuyển đến (27, 16); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 99 |
| 4-5 | Di chuyển hướng 2 (`2`) | (27, 16) | (28, 16) | Dự kiến di chuyển đến (28, 16); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 98 |
| 6 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến di chuyển đến (29, 17); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 96 |
| 7 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến di chuyển đến (29, 18); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 94 |
| 8 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến di chuyển đến (30, 19); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 92 |
| 9 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến di chuyển đến (31, 19); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 90 |
| 10 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến di chuyển đến (31, 20); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 88 |
| 11 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 86 |
| 12-13 | Di chuyển hướng 3 (`3`) | (31, 21) | (31, 22) | Dự kiến di chuyển đến (31, 22); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 85 |
| 14-15 | Di chuyển hướng 4 (`4`) | (31, 22) | (31, 23) | Dự kiến di chuyển đến (31, 23); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 84 |
| 16-18 | Di chuyển hướng 4 (`4`) | (31, 23) | (30, 24) | Dự kiến di chuyển đến (30, 24); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 82 |
| 19-20 | Di chuyển hướng 4 (`4`) | (30, 24) | (30, 25) | Dự kiến di chuyển đến (30, 25); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 81 |
| 21 | Di chuyển hướng 3 (`3`) | (30, 25) | (30, 26) | Dự kiến di chuyển đến (30, 26); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 79 |
| 22 | Di chuyển hướng 3 (`3`) | (30, 26) | (31, 27) | Dự kiến di chuyển đến (31, 27); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 77 |
| 23 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến di chuyển đến (30, 28); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 75 |
| 24 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 73 |
| 25-26 | Di chuyển hướng 4 (`4`) | (30, 29) | (29, 30) | Dự kiến di chuyển đến (29, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 72 |
| 27-29 | Di chuyển hướng 5 (`5`) | (29, 30) | (28, 30) | Dự kiến di chuyển đến (28, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 70 |
| 30-31 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 69 |
| 32-33 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 68 |
| 34 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 66 |
| 35 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 64 |
| 36-37 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến di chuyển đến (24, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 63 |
| 38-39 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 62 |
| 40-41 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 61 |
| 42 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 59 |
| 43-44 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến di chuyển đến (21, 31); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 58 |
| 45-47 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến di chuyển đến (20, 31); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 56 |
| 48-50 | Di chuyển hướng 5 (`5`) | (20, 31) | (19, 31) | Dự kiến di chuyển đến (19, 31); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 54 |
| 51-53 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến di chuyển đến (18, 30); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 52 |
| 54-56 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 50 |
| 57 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 48 |
| 58-59 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 47 |
| 60 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến di chuyển đến (18, 28); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 45 |
| 61 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến di chuyển đến (19, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 43 |
| 62 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến di chuyển đến (18, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 41 |
| 63 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến di chuyển đến (18, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 39 |
| 64-66 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến di chuyển đến (17, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 37 |
| 67-68 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến di chuyển đến (16, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 36 |
| 69-70 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến di chuyển đến (15, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 35 |
| 71-73 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến di chuyển đến (15, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 33 |
| 74-76 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 31 |
| 77-78 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 30 |
| 79 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 28 |
| 80 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 26 |
| 81 | Di chuyển hướng 5 (`5`) | (12, 27) | (11, 27) | Dự kiến di chuyển đến (11, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 24 |
| 82-83 | Di chuyển hướng 5 (`5`) | (11, 27) | (10, 27) | Dự kiến di chuyển đến (10, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 23 |
| 84-85 | Di chuyển hướng 0 (`0`) | (10, 27) | (9, 26) | Dự kiến di chuyển đến (9, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 22 |
| 86-87 | Di chuyển hướng 5 (`5`) | (9, 26) | (8, 26) | Dự kiến di chuyển đến (8, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 21 |
| 88-90 | Di chuyển hướng 5 (`5`) | (8, 26) | (7, 26) | Dự kiến di chuyển đến (7, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 19 |
| 91 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 17 |
| 92-93 | Di chuyển hướng 3 (`3`) | (6, 26) | (7, 27) | Dự kiến di chuyển đến (7, 27); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 16 |
| 94 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến di chuyển đến (7, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 14 |
| 95 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến di chuyển đến (8, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 12 |
| 96 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến di chuyển đến (9, 29); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 10 |
| 97 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến di chuyển đến (9, 30); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 8 |
| 98 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến di chuyển đến (10, 31); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 6 |
| 99 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 4 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 0) (ô=13)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=12, tọa độ=(0, 18))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=12, tọa độ=(0, 18))
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 2, 2, 2, 3, 3, 2, 2, 3, 2, 4, 5, 4, 3, 4, 3, 3, 3, 3, 3, 3, 4, 5, -1, 3, 4, 5, 0, 0, 5, 0, 0, 1, 0, 0, 0, 0, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 0, 5, 0, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 39 |
| 2 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 37 |
| 3 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 35 |
| 4 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 33 |
| 5 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 31 |
| 6-7 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 30 |
| 8 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 28 |
| 9-10 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 27 |
| 11-12 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 26 |
| 13-14 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 25 |
| 15 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 23 |
| 16 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 21 |
| 17 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 19 |
| 18-19 | Di chuyển hướng 4 (`4`) | (21, 7) | (20, 8) | Dự kiến di chuyển đến (20, 8); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 18 |
| 20-21 | Di chuyển hướng 5 (`5`) | (20, 8) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 17 |
| 22-23 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 16 |
| 24 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 14 |
| 25-26 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến di chuyển đến (19, 11); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 13 |
| 27 | Di chuyển hướng 3 (`3`) | (19, 11) | (19, 12) | Dự kiến di chuyển đến (19, 12); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 11 |
| 28-29 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến di chuyển đến (20, 13); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 10 |
| 30-31 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến di chuyển đến (20, 14); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 9 |
| 32 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến di chuyển đến (21, 15); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 7 |
| 33-34 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến di chuyển đến (21, 16); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 6 |
| 35-37 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến di chuyển đến (22, 17); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 4 |
| 38-40 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến di chuyển đến (21, 18); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 2 |
| 41-43 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 120 |
| 44 | Chờ 1 bước (`-1`) | (20, 18) | (20, 18) | Dự kiến đứng yên tại (20, 18); hướng tới tọa độ (20, 18) | 120 |
| 45-46 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 119 |
| 47-50 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 117 |
| 51 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 115 |
| 52 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến di chuyển đến (19, 19); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 113 |
| 53 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến di chuyển đến (18, 18); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 111 |
| 54 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến di chuyển đến (17, 18); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 109 |
| 55 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến di chuyển đến (17, 17); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 107 |
| 56 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến di chuyển đến (16, 16); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 105 |
| 57 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 103 |
| 58 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 101 |
| 59 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 99 |
| 60 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 97 |
| 61 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 95 |
| 62 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 93 |
| 63 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 91 |
| 64 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 89 |
| 65-66 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 88 |
| 67-68 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 87 |
| 69-70 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 86 |
| 71-72 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 85 |
| 73-75 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 83 |
| 76 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 81 |
| 77-78 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 80 |
| 79-80 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 79 |
| 81 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 77 |
| 82 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 75 |
| 83 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 73 |
| 84 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 71 |
| 85 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 69 |
| 86 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 67 |
| 87 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 65 |
| 88 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 63 |
| 89 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 61 |
| 90 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 59 |
| 91-92 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 58 |
| 93-94 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 57 |
| 95-96 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 56 |
| 97 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 54 |
| 98 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 52 |
| 99 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 50 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (31, 0) (ô=31)
- Nhiên liệu đầu ngày: 79
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 0, 5, 4, 4, 5, 5, 4, 3, 5, 4, 4, 3, 4, 4, 4, 4, 5, 4, 5, 5, 5, 5, 5, 5, 2, 2, 3, 3, 3, 4, 2, 3, 3, 3, 2, 2, 3, 2, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 78 |
| 2 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 76 |
| 3 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 74 |
| 4 | Di chuyển hướng 5 (`5`) | (28, 0) | (27, 0) | Dự kiến di chuyển đến (27, 0); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 72 |
| 5 | Di chuyển hướng 5 (`5`) | (27, 0) | (26, 0) | Dự kiến di chuyển đến (26, 0); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 70 |
| 6 | Di chuyển hướng 5 (`5`) | (26, 0) | (25, 0) | Dự kiến di chuyển đến (25, 0); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 68 |
| 7 | Di chuyển hướng 4 (`4`) | (25, 0) | (25, 1) | Dự kiến di chuyển đến (25, 1); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 66 |
| 8 | Di chuyển hướng 5 (`5`) | (25, 1) | (24, 1) | Dự kiến di chuyển đến (24, 1); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 64 |
| 9-10 | Di chuyển hướng 5 (`5`) | (24, 1) | (23, 1) | Dự kiến di chuyển đến (23, 1); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 63 |
| 11-12 | Di chuyển hướng 5 (`5`) | (23, 1) | (22, 1) | Dự kiến di chuyển đến (22, 1); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 62 |
| 13-15 | Di chuyển hướng 5 (`5`) | (22, 1) | (21, 1) | Dự kiến di chuyển đến (21, 1); hướng tới tọa độ (20, 0) (Spot #1 (thương hiệu=1, tọa độ=(20, 0))) | 60 |
| 16-17 | Di chuyển hướng 0 (`0`) | (21, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 0)) | 59 |
| 18-19 | Di chuyển hướng 5 (`5`) | (20, 0) | (19, 0) | Dự kiến di chuyển đến (19, 0); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 58 |
| 20 | Di chuyển hướng 4 (`4`) | (19, 0) | (19, 1) | Dự kiến di chuyển đến (19, 1); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 56 |
| 21 | Di chuyển hướng 4 (`4`) | (19, 1) | (18, 2) | Dự kiến di chuyển đến (18, 2); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 54 |
| 22 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 52 |
| 23-24 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến di chuyển đến (16, 2); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 51 |
| 25-26 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 50 |
| 27-29 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 48 |
| 30-31 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 47 |
| 32 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 45 |
| 33 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 43 |
| 34 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 41 |
| 35 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 39 |
| 36 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 37 |
| 37-39 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 35 |
| 40-41 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 34 |
| 42 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 32 |
| 43-44 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 31 |
| 45-46 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 30 |
| 47-48 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 29 |
| 49-50 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 28 |
| 51-53 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 26 |
| 54 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 24 |
| 55-56 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 23 |
| 57-58 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 22 |
| 59-60 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 21 |
| 61 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 19 |
| 62 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 17 |
| 63-64 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 16 |
| 65-66 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 15 |
| 67-68 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 14 |
| 69 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 12 |
| 70 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 10 |
| 71 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 8 |
| 72 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 6 |
| 73 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 4 |
| 74 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 2 |
| 75 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 0 |
| 76-99 | Chờ 24 bước (`-24`) | (14, 20) | (14, 20) | Dự kiến đứng yên tại (14, 20); mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 0 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (21, 19) (ô=629)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #21 (thương hiệu=13, tọa độ=(20, 18))
- Mảng hành động đã gửi server: `[0, -96]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (20, 18) | 120 |
| 4-99 | Chờ 96 bước (`-96`) | (20, 18) | (20, 18) | Dự kiến đứng yên tại (20, 18); điểm hẹn của xe tuần tra #1 tại (20, 18) | 120 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 27) (ô=879)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Địa điểm đích kế hoạch: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Mảng hành động đã gửi server: `[4, 5, 5, 0, 5, 5, 0, 5, 5, 5, 5, 4, 4, 3, 4, 3, 0, 0, 5, 5, 5, 4, -58]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 36 |
| 3-4 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 35 |
| 5 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 33 |
| 6 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 31 |
| 7 | Di chuyển hướng 5 (`5`) | (12, 27) | (11, 27) | Dự kiến di chuyển đến (11, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 29 |
| 8-9 | Di chuyển hướng 5 (`5`) | (11, 27) | (10, 27) | Dự kiến di chuyển đến (10, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 28 |
| 10-11 | Di chuyển hướng 0 (`0`) | (10, 27) | (9, 26) | Dự kiến di chuyển đến (9, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 27 |
| 12-13 | Di chuyển hướng 5 (`5`) | (9, 26) | (8, 26) | Dự kiến di chuyển đến (8, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 26 |
| 14-16 | Di chuyển hướng 5 (`5`) | (8, 26) | (7, 26) | Dự kiến di chuyển đến (7, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 24 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 22 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến di chuyển đến (5, 26); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 21 |
| 20-22 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến di chuyển đến (5, 27); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 19 |
| 23-25 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 17 |
| 26 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 15 |
| 27 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 13 |
| 28 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 11 |
| 29-30 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 10 |
| 31 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến di chuyển đến (4, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 8 |
| 32-34 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến di chuyển đến (3, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 6 |
| 35-37 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến di chuyển đến (2, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 4 |
| 38-40 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 2 |
| 41 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 0 |
| 42-99 | Chờ 58 bước (`-58`) | (0, 30) | (0, 30) | Dự kiến đứng yên tại (0, 30); mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (29, 4) (ô=157)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Mảng hành động đã gửi server: `[2, 2, 5, 4, 3, 2, 5, 5, 4, 4, 4, 5, 4, 4, 4, 4, 3, 3, 3, 4, 3, 5, 5, 5, 4, 4, 4, -1, 4, 4, 4, 4, 5, 5, 5, 4, 5, 4, 4, 5, 5, 0, 0, 0, 5, 5, 0, 5, 0, 5, 5, 5, 4, 4, 3, 3, 3, 3, 4, 3, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (29, 4) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 43 |
| 3 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 41 |
| 4-5 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 40 |
| 6 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến di chuyển đến (30, 5); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 38 |
| 7 | Di chuyển hướng 3 (`3`) | (30, 5) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 36 |
| 8 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 34 |
| 9-10 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 33 |
| 11 | Di chuyển hướng 5 (`5`) | (30, 6) | (29, 6) | Dự kiến di chuyển đến (29, 6); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 31 |
| 12 | Di chuyển hướng 4 (`4`) | (29, 6) | (29, 7) | Dự kiến di chuyển đến (29, 7); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 29 |
| 13-14 | Di chuyển hướng 4 (`4`) | (29, 7) | (28, 8) | Dự kiến di chuyển đến (28, 8); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 28 |
| 15-17 | Di chuyển hướng 4 (`4`) | (28, 8) | (28, 9) | Dự kiến di chuyển đến (28, 9); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 26 |
| 18-20 | Di chuyển hướng 5 (`5`) | (28, 9) | (27, 9) | Dự kiến di chuyển đến (27, 9); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 24 |
| 21-23 | Di chuyển hướng 4 (`4`) | (27, 9) | (26, 10) | Dự kiến di chuyển đến (26, 10); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 22 |
| 24 | Di chuyển hướng 4 (`4`) | (26, 10) | (26, 11) | Dự kiến di chuyển đến (26, 11); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 20 |
| 25-27 | Di chuyển hướng 4 (`4`) | (26, 11) | (25, 12) | Dự kiến di chuyển đến (25, 12); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 18 |
| 28-29 | Di chuyển hướng 4 (`4`) | (25, 12) | (25, 13) | Dự kiến di chuyển đến (25, 13); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 17 |
| 30-31 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến di chuyển đến (25, 14); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 16 |
| 32 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến di chuyển đến (26, 15); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 14 |
| 33 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 12 |
| 34-35 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến di chuyển đến (26, 17); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 11 |
| 36-38 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 9 |
| 39-40 | Di chuyển hướng 5 (`5`) | (26, 18) | (25, 18) | Dự kiến di chuyển đến (25, 18); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 8 |
| 41-42 | Di chuyển hướng 5 (`5`) | (25, 18) | (24, 18) | Dự kiến di chuyển đến (24, 18); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 7 |
| 43-45 | Di chuyển hướng 5 (`5`) | (24, 18) | (23, 18) | Dự kiến di chuyển đến (23, 18); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 5 |
| 46 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến di chuyển đến (23, 19); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 3 |
| 47-48 | Di chuyển hướng 4 (`4`) | (23, 19) | (22, 20) | Dự kiến di chuyển đến (22, 20); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 2 |
| 49-51 | Di chuyển hướng 4 (`4`) | (22, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 120 |
| 52 | Chờ 1 bước (`-1`) | (22, 21) | (22, 21) | Dự kiến đứng yên tại (22, 21); hướng tới tọa độ (22, 21) | 120 |
| 53-54 | Di chuyển hướng 4 (`4`) | (22, 21) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 119 |
| 55 | Di chuyển hướng 4 (`4`) | (21, 22) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 117 |
| 56 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến di chuyển đến (20, 24); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 115 |
| 57 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 113 |
| 58 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến di chuyển đến (19, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 111 |
| 59 | Di chuyển hướng 5 (`5`) | (19, 25) | (18, 25) | Dự kiến di chuyển đến (18, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 109 |
| 60-62 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến di chuyển đến (17, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 107 |
| 63-64 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến di chuyển đến (16, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 106 |
| 65-66 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến di chuyển đến (15, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 105 |
| 67-69 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến di chuyển đến (15, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 103 |
| 70-72 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 101 |
| 73-74 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 100 |
| 75 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 98 |
| 76 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 96 |
| 77 | Di chuyển hướng 0 (`0`) | (12, 27) | (11, 26) | Dự kiến di chuyển đến (11, 26); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 94 |
| 78 | Di chuyển hướng 0 (`0`) | (11, 26) | (11, 25) | Dự kiến di chuyển đến (11, 25); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 92 |
| 79 | Di chuyển hướng 5 (`5`) | (11, 25) | (10, 25) | Dự kiến di chuyển đến (10, 25); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 90 |
| 80 | Di chuyển hướng 5 (`5`) | (10, 25) | (9, 25) | Dự kiến di chuyển đến (9, 25); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 88 |
| 81 | Di chuyển hướng 0 (`0`) | (9, 25) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 86 |
| 82 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 84 |
| 83 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến di chuyển đến (7, 23); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 82 |
| 84 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến di chuyển đến (6, 23); hướng tới tọa độ (5, 23) (Spot #20 (thương hiệu=12, tọa độ=(5, 23))) | 80 |
| 85 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 78 |
| 86-87 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến di chuyển đến (4, 23); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 77 |
| 88 | Di chuyển hướng 4 (`4`) | (4, 23) | (3, 24) | Dự kiến di chuyển đến (3, 24); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 75 |
| 89 | Di chuyển hướng 4 (`4`) | (3, 24) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 73 |
| 90 | Di chuyển hướng 3 (`3`) | (3, 25) | (3, 26) | Dự kiến di chuyển đến (3, 26); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 71 |
| 91-92 | Di chuyển hướng 3 (`3`) | (3, 26) | (4, 27) | Dự kiến di chuyển đến (4, 27); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 70 |
| 93 | Di chuyển hướng 3 (`3`) | (4, 27) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 68 |
| 94 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 66 |
| 95 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 64 |
| 96 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 62 |
| 97-98 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến di chuyển đến (4, 31); hướng tới tọa độ (3, 31) (Spot #18 (thương hiệu=11, tọa độ=(3, 31))) | 61 |
| 99 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 59 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (15, 20) (ô=655)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #5
- Điểm hẹn của xe tuần tra: Spot #5 (thương hiệu=1, tọa độ=(22, 21))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 3, 2, 1, -86]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 120 |
| 2-3 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 120 |
| 4-6 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 120 |
| 7-9 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 120 |
| 10 | Di chuyển hướng 3 (`3`) | (19, 20) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 120 |
| 11 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến di chuyển đến (20, 22); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 120 |
| 12 | Di chuyển hướng 2 (`2`) | (20, 22) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 120 |
| 13 | Di chuyển hướng 1 (`1`) | (21, 22) | (22, 21) | Dự kiến đến điểm hẹn của xe tuần tra #5 tại (22, 21) | 120 |
| 14-99 | Chờ 86 bước (`-86`) | (22, 21) | (22, 21) | Dự kiến đứng yên tại (22, 21); điểm hẹn của xe tuần tra #5 tại (22, 21) | 120 |

