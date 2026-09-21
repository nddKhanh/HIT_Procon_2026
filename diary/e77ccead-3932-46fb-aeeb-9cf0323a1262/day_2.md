# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 49
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 12) (ô=279)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(9, 19))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(9, 19))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 4, 3, 4, 4, 5, 4, 4, 4, 5, 5, 0, 5, 5, 5, 5, 2, 2, 2, 2, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 35 |
| 2 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 33 |
| 3-4 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 32 |
| 5-6 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 31 |
| 7-8 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 30 |
| 9-10 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 29 |
| 11 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 27 |
| 12-13 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 26 |
| 14-15 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 25 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 23 |
| 18-19 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 21 |
| 20-21 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 20 |
| 22-23 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 19 |
| 24 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến di chuyển đến (7, 22); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 17 |
| 25-26 | Di chuyển hướng 0 (`0`) | (7, 22) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 16 |
| 27-28 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 15 |
| 29-30 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 14 |
| 31-32 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 21)) | 13 |
| 33-34 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 21)) | 12 |
| 35-36 | Di chuyển hướng 2 (`2`) | (3, 21) | (4, 21) | Dự kiến di chuyển đến (4, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 11 |
| 37-38 | Di chuyển hướng 2 (`2`) | (4, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 10 |
| 39-40 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 9 |
| 41-42 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 8 |
| 43-44 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 7 |
| 45-46 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (9, 19) (Spot #10 (thương hiệu=10, tọa độ=(9, 19))) | 6 |
| 47-48 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 19)) | 5 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 12) (ô=271)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Mảng hành động đã gửi server: `[4, 3, 4, 3, 3, 4, 3, 3, 4, 3, 2, 5, 5, 0, 5, 5, 5, 5, 0, 0, 0, 1, 0, -1, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 26 |
| 2-4 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 24 |
| 5-6 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 23 |
| 7-8 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 22 |
| 9-10 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 21 |
| 11-12 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 20 |
| 13-14 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến di chuyển đến (8, 19); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 19 |
| 15 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 17 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 16 |
| 18-19 | Di chuyển hướng 3 (`3`) | (8, 21) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 15 |
| 20 | Di chuyển hướng 2 (`2`) | (8, 22) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 13 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 12 |
| 23 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến di chuyển đến (7, 22); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 10 |
| 24-25 | Di chuyển hướng 0 (`0`) | (7, 22) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 9 |
| 26-27 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 8 |
| 28-29 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 7 |
| 30-31 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến di chuyển đến (4, 21); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 6 |
| 32-33 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 21)) | 5 |
| 34-35 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến di chuyển đến (2, 20); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 4 |
| 36-37 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 3 |
| 38-39 | Di chuyển hướng 0 (`0`) | (2, 19) | (1, 18) | Dự kiến di chuyển đến (1, 18); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 2 |
| 40-41 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 1 |
| 42-43 | Di chuyển hướng 0 (`0`) | (2, 17) | (1, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 16)) | 0 |
| 44 | Chờ 1 bước (`-1`) | (1, 16) | (1, 16) | Dự kiến đứng yên tại (1, 16); hướng tới tọa độ (1, 16) | 52 |
| 45-46 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến di chuyển đến (1, 15); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 51 |
| 47-48 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến di chuyển đến (1, 14); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 50 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 3) (ô=80)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(21, 4))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(21, 4))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 5, 5, 5, 5, 0, 0, 0, 5, 2, 2, 2, 2, 2, 3, 2, 3, 3, 3, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 39 |
| 2-3 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 38 |
| 4-5 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 37 |
| 6-8 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 35 |
| 9-10 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 4)) | 34 |
| 11-12 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 33 |
| 13-14 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 32 |
| 15-17 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 30 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 29 |
| 20-21 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 28 |
| 22-23 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 27 |
| 24 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(13, 1)) | 25 |
| 25-26 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(12, 1)) | 24 |
| 27-28 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 23 |
| 29-30 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 22 |
| 31 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến di chuyển đến (15, 1); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 20 |
| 32-34 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến di chuyển đến (16, 1); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 18 |
| 35-36 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến di chuyển đến (17, 1); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 17 |
| 37-38 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 16 |
| 39-40 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến di chuyển đến (18, 2); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 15 |
| 41 | Di chuyển hướng 3 (`3`) | (18, 2) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 13 |
| 42 | Di chuyển hướng 3 (`3`) | (19, 3) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 11 |
| 43-44 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(20, 5)) | 10 |
| 45-46 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (21, 4) (Spot #6 (thương hiệu=6, tọa độ=(21, 4))) | 9 |
| 47-48 | Di chuyển hướng 2 (`2`) | (20, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 4)) | 8 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 3) (ô=77)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(10, 7))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(10, 7))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 5, 5, 5, 5, -22, 3, 3, 3, 3, 3, 3, 3, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 15 |
| 2 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 13 |
| 3-4 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 12 |
| 5-6 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 11 |
| 7-8 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 10 |
| 9-10 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 9 |
| 11 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 7 |
| 12 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 1)) | 5 |
| 13-34 | Chờ 22 bước (`-22`) | (4, 1) | (4, 1) | Dự kiến đứng yên tại (4, 1); hướng tới tọa độ (4, 1) | 52 |
| 35-36 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 51 |
| 37 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 49 |
| 38-39 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 48 |
| 40-41 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 47 |
| 42-43 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 46 |
| 44-45 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 45 |
| 46 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 8)) | 43 |
| 47-48 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 42 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (9, 22) (ô=493)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #21 (thương hiệu=21, tọa độ=(1, 16))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 5, 5, 0, 0, 5, 0, 5, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (9, 22) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới điểm hẹn của xe tuần tra #1 tại (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 52 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 52 |
| 4-5 | Di chuyển hướng 0 (`0`) | (8, 20) | (8, 19) | Dự kiến di chuyển đến (8, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 52 |
| 6 | Di chuyển hướng 5 (`5`) | (8, 19) | (7, 19) | Dự kiến di chuyển đến (7, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 52 |
| 7 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 52 |
| 8-9 | Di chuyển hướng 5 (`5`) | (6, 19) | (5, 19) | Dự kiến di chuyển đến (5, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 52 |
| 10-11 | Di chuyển hướng 0 (`0`) | (5, 19) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 52 |
| 12-13 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 52 |
| 14 | Di chuyển hướng 5 (`5`) | (4, 17) | (3, 17) | Dự kiến di chuyển đến (3, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 52 |
| 15-16 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 52 |
| 17 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (1, 16) | 52 |
| 18-48 | Chờ 31 bước (`-31`) | (1, 16) | (1, 16) | Dự kiến đứng yên tại (1, 16); điểm hẹn của xe tuần tra #1 tại (1, 16) | 52 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (21, 6) (ô=153)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #0 (thương hiệu=0, tọa độ=(4, 1))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 5, 0, 5, 0, 5, 5, 5, 5, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 2-3 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 4 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 5 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 6-7 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 8-9 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 10-11 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 12-13 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 14-15 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 16-17 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 18 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 23 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 24-25 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 26-27 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 30-31 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 32 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 33 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (4, 1) | 52 |
| 34-48 | Chờ 15 bước (`-15`) | (4, 1) | (4, 1) | Dự kiến đứng yên tại (4, 1); điểm hẹn của xe tuần tra #3 tại (4, 1) | 52 |

