# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 63
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #5 | (16, 20) | 56 | 57 |
| 3 | #2 | #5 | (15, 20) | 55 | 57 |
| 5 | #2 | #5 | (14, 20) | 56 | 57 |
| 7 | #2 | #5 | (13, 20) | 56 | 57 |
| 9 | #2 | #5 | (12, 20) | 55 | 57 |
| 11 | #2 | #5 | (12, 19) | 56 | 57 |
| 13 | #2 | #5 | (11, 18) | 56 | 57 |
| 40 | #1 | #4 | (9, 0) | 1 | 57 |
| 44 | #0 | #5 | (4, 18) | 2 | 57 |
| 48 | #3 | #5 | (4, 18) | 13 | 57 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 16) (ô=437)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(8, 15))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(8, 15))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 4, 4, 5, 5, 5, 0, 5, 5, 0, 4, 5, 4, 5, 0, 0, 0, 5, 5, 5, -1, 0, 1, 0, 1, 0, 2, 2, 2, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 16) | (20, 16) | Dự kiến di chuyển đến (20, 16); hướng tới tọa độ (18, 21) (Spot #2 (thương hiệu=2, tọa độ=(18, 21))) | 31 |
| 2-3 | Di chuyển hướng 4 (`4`) | (20, 16) | (20, 17) | Dự kiến di chuyển đến (20, 17); hướng tới tọa độ (18, 21) (Spot #2 (thương hiệu=2, tọa độ=(18, 21))) | 30 |
| 4-5 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến di chuyển đến (19, 18); hướng tới tọa độ (18, 21) (Spot #2 (thương hiệu=2, tọa độ=(18, 21))) | 29 |
| 6-7 | Di chuyển hướng 4 (`4`) | (19, 18) | (19, 19) | Dự kiến di chuyển đến (19, 19); hướng tới tọa độ (18, 21) (Spot #2 (thương hiệu=2, tọa độ=(18, 21))) | 28 |
| 8-10 | Di chuyển hướng 4 (`4`) | (19, 19) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới tọa độ (18, 21) (Spot #2 (thương hiệu=2, tọa độ=(18, 21))) | 26 |
| 11-12 | Di chuyển hướng 4 (`4`) | (18, 20) | (18, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 21)) | 25 |
| 13-14 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến di chuyển đến (17, 21); hướng tới tọa độ (16, 21) (Spot #22 (thương hiệu=22, tọa độ=(16, 21))) | 24 |
| 15-17 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 21)) | 22 |
| 18-19 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến di chuyển đến (15, 21); hướng tới tọa độ (14, 20) (Spot #18 (thương hiệu=18, tọa độ=(14, 20))) | 21 |
| 20 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 20)) | 19 |
| 21-22 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (12, 19) (Spot #3 (thương hiệu=3, tọa độ=(12, 19))) | 18 |
| 23-24 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến di chuyển đến (12, 20); hướng tới tọa độ (12, 19) (Spot #3 (thương hiệu=3, tọa độ=(12, 19))) | 16 |
| 25-26 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 19)) | 15 |
| 27-28 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến di chuyển đến (11, 20); hướng tới tọa độ (10, 21) (Spot #6 (thương hiệu=6, tọa độ=(10, 21))) | 14 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (10, 21) (Spot #6 (thương hiệu=6, tọa độ=(10, 21))) | 13 |
| 31-32 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 21)) | 12 |
| 33-34 | Di chuyển hướng 5 (`5`) | (10, 21) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 11 |
| 35 | Di chuyển hướng 0 (`0`) | (9, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 9 |
| 36 | Di chuyển hướng 0 (`0`) | (8, 20) | (8, 19) | Dự kiến di chuyển đến (8, 19); hướng tới tọa độ (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 7 |
| 37-38 | Di chuyển hướng 0 (`0`) | (8, 19) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới tọa độ (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 6 |
| 39 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến di chuyển đến (6, 18); hướng tới tọa độ (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 4 |
| 40-41 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới tọa độ (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 3 |
| 42-43 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 18)) | 57 |
| 44 | Chờ 1 bước (`-1`) | (4, 18) | (4, 18) | Dự kiến đứng yên tại (4, 18); hướng tới tọa độ (4, 18) | 57 |
| 45-46 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới tọa độ (4, 13) (Spot #17 (thương hiệu=17, tọa độ=(4, 13))) | 56 |
| 47 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (4, 13) (Spot #17 (thương hiệu=17, tọa độ=(4, 13))) | 54 |
| 48-49 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (4, 13) (Spot #17 (thương hiệu=17, tọa độ=(4, 13))) | 53 |
| 50-51 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (4, 13) (Spot #17 (thương hiệu=17, tọa độ=(4, 13))) | 52 |
| 52-53 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 13)) | 51 |
| 54-55 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 50 |
| 56-57 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 49 |
| 58 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 47 |
| 59 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 45 |
| 60-61 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 15)) | 44 |
| 62 | Chờ 1 bước (`-1`) | (8, 15) | (8, 15) | Dự kiến đứng yên tại (8, 15); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 15)) | 44 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 3) (ô=87)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(0, 10))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(0, 10))
- Mảng hành động đã gửi server: `[4, 5, 4, 0, 1, 2, 1, 1, 1, -24, 4, 5, 5, 5, 5, 5, 5, 5, 3, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (7, 5) (Spot #4 (thương hiệu=4, tọa độ=(7, 5))) | 10 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (7, 5) (Spot #4 (thương hiệu=4, tọa độ=(7, 5))) | 8 |
| 3-4 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 5)) | 7 |
| 5-6 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (7, 3) (Spot #13 (thương hiệu=13, tọa độ=(7, 3))) | 6 |
| 7-8 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(7, 3)) | 5 |
| 9-10 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 4 |
| 11-12 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 3 |
| 13-14 | Di chuyển hướng 1 (`1`) | (8, 2) | (9, 1) | Dự kiến di chuyển đến (9, 1); hướng tới tọa độ (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 2 |
| 15-16 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 0)) | 1 |
| 17-40 | Chờ 24 bước (`-24`) | (9, 0) | (9, 0) | Dự kiến đứng yên tại (9, 0); hướng tới tọa độ (9, 0) | 57 |
| 41-42 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến di chuyển đến (9, 1); hướng tới tọa độ (2, 1) (Spot #19 (thương hiệu=19, tọa độ=(2, 1))) | 56 |
| 43-44 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (2, 1) (Spot #19 (thương hiệu=19, tọa độ=(2, 1))) | 55 |
| 45 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (2, 1) (Spot #19 (thương hiệu=19, tọa độ=(2, 1))) | 53 |
| 46-47 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (2, 1) (Spot #19 (thương hiệu=19, tọa độ=(2, 1))) | 52 |
| 48-49 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (2, 1) (Spot #19 (thương hiệu=19, tọa độ=(2, 1))) | 51 |
| 50 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (2, 1) (Spot #19 (thương hiệu=19, tọa độ=(2, 1))) | 49 |
| 51 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (2, 1) (Spot #19 (thương hiệu=19, tọa độ=(2, 1))) | 47 |
| 52-53 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 46 |
| 54-55 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (1, 4) (Spot #11 (thương hiệu=11, tọa độ=(1, 4))) | 45 |
| 56-57 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới tọa độ (1, 4) (Spot #11 (thương hiệu=11, tọa độ=(1, 4))) | 44 |
| 58-59 | Di chuyển hướng 4 (`4`) | (2, 3) | (1, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 4)) | 43 |
| 60-61 | Di chuyển hướng 4 (`4`) | (1, 4) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới tọa độ (0, 10) (Spot #14 (thương hiệu=14, tọa độ=(0, 10))) | 42 |
| 62 | Chờ 1 bước (`-1`) | (1, 5) | (1, 5) | Dự kiến đứng yên tại (1, 5); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(0, 10)) | 42 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 20) (ô=537)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=1, tọa độ=(19, 9))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=1, tọa độ=(19, 9))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 0, 5, 0, 0, 2, 2, 2, 1, 1, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 57 |
| 2 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 57 |
| 3-4 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 57 |
| 5-6 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 57 |
| 7-8 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến di chuyển đến (12, 20); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 57 |
| 9-10 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 57 |
| 11-12 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 57 |
| 13-14 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 56 |
| 15-17 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 54 |
| 18-19 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 53 |
| 20-21 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 52 |
| 22 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 50 |
| 23 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 48 |
| 24 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 46 |
| 25-26 | Di chuyển hướng 2 (`2`) | (9, 11) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 45 |
| 27-28 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 44 |
| 29-30 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 43 |
| 31-32 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 42 |
| 33 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 40 |
| 34-35 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới tọa độ (15, 9) (Spot #0 (thương hiệu=0, tọa độ=(15, 9))) | 39 |
| 36 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 9)) | 37 |
| 37-38 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến di chuyển đến (16, 9); hướng tới tọa độ (17, 6) (Spot #9 (thương hiệu=9, tọa độ=(17, 6))) | 36 |
| 39-40 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (17, 6) (Spot #9 (thương hiệu=9, tọa độ=(17, 6))) | 35 |
| 41-42 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (17, 6) (Spot #9 (thương hiệu=9, tọa độ=(17, 6))) | 34 |
| 43-44 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(17, 6)) | 33 |
| 45-46 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (15, 3) (Spot #15 (thương hiệu=15, tọa độ=(15, 3))) | 32 |
| 47-48 | Di chuyển hướng 5 (`5`) | (17, 5) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới tọa độ (15, 3) (Spot #15 (thương hiệu=15, tọa độ=(15, 3))) | 31 |
| 49-50 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (15, 3) (Spot #15 (thương hiệu=15, tọa độ=(15, 3))) | 30 |
| 51 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 3)) | 28 |
| 52-53 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (19, 1) (Spot #24 (thương hiệu=0, tọa độ=(19, 1))) | 27 |
| 54-55 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (19, 1) (Spot #24 (thương hiệu=0, tọa độ=(19, 1))) | 26 |
| 56 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới tọa độ (19, 1) (Spot #24 (thương hiệu=0, tọa độ=(19, 1))) | 24 |
| 57 | Di chuyển hướng 1 (`1`) | (18, 3) | (18, 2) | Dự kiến di chuyển đến (18, 2); hướng tới tọa độ (19, 1) (Spot #24 (thương hiệu=0, tọa độ=(19, 1))) | 22 |
| 58-59 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=0, tọa độ=(19, 1)) | 21 |
| 60-61 | Di chuyển hướng 3 (`3`) | (19, 1) | (19, 2) | Dự kiến di chuyển đến (19, 2); hướng tới tọa độ (19, 9) (Spot #25 (thương hiệu=1, tọa độ=(19, 9))) | 20 |
| 62 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới tọa độ (19, 9) (Spot #25 (thương hiệu=1, tọa độ=(19, 9))) | 18 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 6) (ô=173)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(0, 21))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(0, 21))
- Mảng hành động đã gửi server: `[2, 3, 3, 4, 3, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 3, 4, 4, 5, 4, 5, 4, 4, 5, 5, 4, 4, 5, 4, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (19, 9) (Spot #25 (thương hiệu=1, tọa độ=(19, 9))) | 44 |
| 2-3 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến di chuyển đến (19, 7); hướng tới tọa độ (19, 9) (Spot #25 (thương hiệu=1, tọa độ=(19, 9))) | 43 |
| 4 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới tọa độ (19, 9) (Spot #25 (thương hiệu=1, tọa độ=(19, 9))) | 41 |
| 5-6 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=1, tọa độ=(19, 9)) | 40 |
| 7-8 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (20, 11) (Spot #10 (thương hiệu=10, tọa độ=(20, 11))) | 39 |
| 9-11 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 11)) | 37 |
| 12-13 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến di chuyển đến (19, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 36 |
| 14-15 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến di chuyển đến (18, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 35 |
| 16-17 | Di chuyển hướng 5 (`5`) | (18, 11) | (17, 11) | Dự kiến di chuyển đến (17, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 34 |
| 18-19 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến di chuyển đến (16, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 33 |
| 20-21 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 32 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 31 |
| 24-25 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 30 |
| 26 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 28 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 27 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 26 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 25 |
| 33-34 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 24 |
| 35 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 22 |
| 36 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (8, 15) (Spot #8 (thương hiệu=8, tọa độ=(8, 15))) | 20 |
| 37-38 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 15)) | 19 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (0, 20) (Spot #21 (thương hiệu=21, tọa độ=(0, 20))) | 18 |
| 41-42 | Di chuyển hướng 4 (`4`) | (7, 15) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (0, 20) (Spot #21 (thương hiệu=21, tọa độ=(0, 20))) | 17 |
| 43 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (0, 20) (Spot #21 (thương hiệu=21, tọa độ=(0, 20))) | 15 |
| 44-45 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (0, 20) (Spot #21 (thương hiệu=21, tọa độ=(0, 20))) | 14 |
| 46-47 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới tọa độ (0, 20) (Spot #21 (thương hiệu=21, tọa độ=(0, 20))) | 57 |
| 48-49 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến di chuyển đến (3, 18); hướng tới tọa độ (0, 20) (Spot #21 (thương hiệu=21, tọa độ=(0, 20))) | 56 |
| 50 | Di chuyển hướng 5 (`5`) | (3, 18) | (2, 18) | Dự kiến di chuyển đến (2, 18); hướng tới tọa độ (0, 20) (Spot #21 (thương hiệu=21, tọa độ=(0, 20))) | 54 |
| 51 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (0, 20) (Spot #21 (thương hiệu=21, tọa độ=(0, 20))) | 52 |
| 52-53 | Di chuyển hướng 4 (`4`) | (2, 19) | (1, 20) | Dự kiến di chuyển đến (1, 20); hướng tới tọa độ (0, 20) (Spot #21 (thương hiệu=21, tọa độ=(0, 20))) | 51 |
| 54-56 | Di chuyển hướng 5 (`5`) | (1, 20) | (0, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(0, 20)) | 49 |
| 57-58 | Di chuyển hướng 4 (`4`) | (0, 20) | (0, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(0, 21)) | 48 |
| 59-62 | Chờ 4 bước (`-4`) | (0, 21) | (0, 21) | Dự kiến đứng yên tại (0, 21); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(0, 21)) | 48 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (19, 1) (ô=45)
- Nhiên liệu đầu ngày: 57
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #5 (thương hiệu=5, tọa độ=(9, 0))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 1) | (18, 2) | Dự kiến di chuyển đến (18, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 2-3 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 4 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 5-6 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 7-8 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 9-10 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 11-12 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 13-14 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 15-16 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 17 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 18-19 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 20 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 21-22 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 23-24 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 25-26 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 27-28 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 29-30 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 31 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 32-33 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 34 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 35-37 | Di chuyển hướng 0 (`0`) | (10, 2) | (10, 1) | Dự kiến di chuyển đến (10, 1); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 0) (Spot #5 (thương hiệu=5, tọa độ=(9, 0))) | 57 |
| 38-39 | Di chuyển hướng 0 (`0`) | (10, 1) | (9, 0) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (9, 0) | 57 |
| 40-62 | Chờ 23 bước (`-23`) | (9, 0) | (9, 0) | Dự kiến đứng yên tại (9, 0); điểm hẹn của xe tuần tra #1 tại (9, 0) | 57 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (17, 20) (ô=537)
- Nhiên liệu đầu ngày: 57
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #7 (thương hiệu=7, tọa độ=(4, 18))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 2 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 3-4 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 5-6 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 7-8 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến di chuyển đến (12, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 9-10 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 11-12 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 13-14 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 15-16 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 17 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến di chuyển đến (8, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 20 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến di chuyển đến (6, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 21-22 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 18) (Spot #7 (thương hiệu=7, tọa độ=(4, 18))) | 57 |
| 23-24 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (4, 18) | 57 |
| 25-62 | Chờ 38 bước (`-38`) | (4, 18) | (4, 18) | Dự kiến đứng yên tại (4, 18); điểm hẹn của xe tuần tra #0 tại (4, 18) | 57 |

