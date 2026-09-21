# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 41
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 2) (ô=41)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 4, 4, 4, 5, 4, 4, 3, 4, 5, 4, 3, -5, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 2) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 18 |
| 2 | Di chuyển hướng 1 (`1`) | (4, 1) | (4, 0) | Dự kiến di chuyển đến (4, 0); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 16 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến di chuyển đến (5, 0); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 15 |
| 5-7 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 0)) | 13 |
| 8-9 | Di chuyển hướng 4 (`4`) | (6, 0) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 12 |
| 10-11 | Di chuyển hướng 4 (`4`) | (6, 1) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 11 |
| 12-14 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 9 |
| 15-16 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 8 |
| 17-18 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 7 |
| 19 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 5 |
| 20-21 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 4 |
| 22-23 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 3 |
| 24-25 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 7)) | 2 |
| 26-27 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 1 |
| 28-29 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 0 |
| 30-34 | Chờ 5 bước (`-5`) | (2, 9) | (2, 9) | Dự kiến đứng yên tại (2, 9); hướng tới tọa độ (2, 9) | 45 |
| 35-36 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 44 |
| 37-38 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 43 |
| 39-40 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 42 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 12) (ô=246)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 4, 5, 4, 5, 4, 4, 3, 3, -1, 0, 0, 0, 1, 0, 1, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 19 |
| 2-3 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 18 |
| 4-5 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 17 |
| 6-7 | Di chuyển hướng 5 (`5`) | (16, 13) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 16 |
| 8 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 14 |
| 9 | Di chuyển hướng 5 (`5`) | (14, 14) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 12 |
| 10 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 10 |
| 11-12 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 9 |
| 13-14 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 8 |
| 15-16 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 7 |
| 17-18 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 6 |
| 19-20 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 19)) | 4 |
| 21 | Chờ 1 bước (`-1`) | (12, 19) | (12, 19) | Dự kiến đứng yên tại (12, 19); hướng tới tọa độ (12, 19) | 45 |
| 22-23 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 44 |
| 24-25 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 42 |
| 26-27 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 41 |
| 28-29 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 40 |
| 30-31 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 39 |
| 32-34 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(11, 13)) | 37 |
| 35-36 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 36 |
| 37-39 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 34 |
| 40 | Chờ 1 bước (`-1`) | (11, 15) | (11, 15) | Dự kiến đứng yên tại (11, 15); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 16)) | 34 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 7) (ô=136)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(2, 0))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(2, 0))
- Mảng hành động đã gửi server: `[4, 4, 1, 1, 1, 0, 2, 2, 2, 3, 0, 0, 0, 1, 1, 1, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 44 |
| 2-3 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 43 |
| 4-5 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 42 |
| 6-7 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 41 |
| 8-9 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 40 |
| 10-11 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 39 |
| 12-13 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 38 |
| 14-16 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 36 |
| 17 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 34 |
| 18 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 32 |
| 19-20 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 44 |
| 21 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 42 |
| 22-24 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 40 |
| 25-26 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 39 |
| 27-29 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 37 |
| 30-31 | Di chuyển hướng 1 (`1`) | (6, 1) | (6, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 0)) | 36 |
| 32-33 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến di chuyển đến (5, 0); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 35 |
| 34-36 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến di chuyển đến (4, 0); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 33 |
| 37-38 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến di chuyển đến (3, 0); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 32 |
| 39-40 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(2, 0)) | 31 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (4, 4) (ô=80)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(2, 9))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(2, 9))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 2, 1, 4, 5, 5, 5, 4, -1, 0, 5, 5, 5, 3, 4, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 18 |
| 2 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 16 |
| 3 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 14 |
| 4-6 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 12 |
| 7-8 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 11 |
| 9-10 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 9 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 4)) | 8 |
| 13-14 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 7 |
| 15-16 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 6 |
| 17-18 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 4 |
| 19-20 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 3 |
| 21-23 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 1 |
| 24 | Chờ 1 bước (`-1`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); hướng tới tọa độ (6, 6) | 45 |
| 25-26 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 44 |
| 27 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 42 |
| 28 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 40 |
| 29-31 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 38 |
| 32-33 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 37 |
| 34-35 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 36 |
| 36-37 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 7)) | 35 |
| 38-39 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 34 |
| 40 | Chờ 1 bước (`-1`) | (1, 8) | (1, 8) | Dự kiến đứng yên tại (1, 8); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 34 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 17) (ô=335)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(12, 19))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(12, 19))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 0, 0, 4, 3, 4, 5, 5, 4, 5, 4, 5, 5, 5, 2, 2, 1, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 44 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 43 |
| 4-6 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 41 |
| 7 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 39 |
| 8 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 37 |
| 9-11 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 14)) | 35 |
| 12-13 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 34 |
| 14-15 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 16)) | 33 |
| 16-17 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 32 |
| 18-19 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 31 |
| 20-21 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 30 |
| 22-23 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 29 |
| 24-25 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến di chuyển đến (3, 18); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 28 |
| 26 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 26 |
| 27-28 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 25 |
| 29 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 23 |
| 30 | Di chuyển hướng 5 (`5`) | (1, 19) | (0, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 19)) | 21 |
| 31-32 | Di chuyển hướng 2 (`2`) | (0, 19) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 20 |
| 33 | Di chuyển hướng 2 (`2`) | (1, 19) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 18 |
| 34 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến di chuyển đến (2, 18); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 16 |
| 35-36 | Di chuyển hướng 2 (`2`) | (2, 18) | (3, 18) | Dự kiến di chuyển đến (3, 18); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 15 |
| 37 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 13 |
| 38-39 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 12 |
| 40 | Chờ 1 bước (`-1`) | (5, 17) | (5, 17) | Dự kiến đứng yên tại (5, 17); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 19)) | 12 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (12, 17) (ô=335)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #0 (thương hiệu=0, tọa độ=(2, 9))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 0, 0, 1, 0, 1, 1, 0, 5, 5, 5, 5, 5, 5, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 4-6 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 7 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 8 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 9-11 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 12-13 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 16-17 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 18-20 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 21-22 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 23-24 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 25-26 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 27 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 28-29 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 30-31 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 32-33 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (2, 9) | 45 |
| 34-40 | Chờ 7 bước (`-7`) | (2, 9) | (2, 9) | Dự kiến đứng yên tại (2, 9); điểm hẹn của xe tuần tra #0 tại (2, 9) | 45 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (3, 7) (ô=136)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #11 (thương hiệu=11, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 45 |
| 2-3 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 45 |
| 4-6 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 45 |
| 7 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (6, 6) | 45 |
| 8-40 | Chờ 33 bước (`-33`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); điểm hẹn của xe tuần tra #3 tại (6, 6) | 45 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (18, 15) (ô=303)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=8, tọa độ=(12, 19))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 4, 4, 4, 5, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến di chuyển đến (17, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 2-3 | Di chuyển hướng 5 (`5`) | (17, 16) | (16, 16) | Dự kiến di chuyển đến (16, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 4-5 | Di chuyển hướng 5 (`5`) | (16, 16) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 6 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 7-8 | Di chuyển hướng 4 (`4`) | (14, 16) | (14, 17) | Dự kiến di chuyển đến (14, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 9-10 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 11-12 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 13-14 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (12, 19) | 45 |
| 15-40 | Chờ 26 bước (`-26`) | (12, 19) | (12, 19) | Dự kiến đứng yên tại (12, 19); điểm hẹn của xe tuần tra #1 tại (12, 19) | 45 |

