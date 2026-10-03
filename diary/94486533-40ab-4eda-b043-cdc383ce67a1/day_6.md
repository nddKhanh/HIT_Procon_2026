# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 55
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 15 | #1 | #5 | (2, 11) | 2 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(17, 1))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(17, 1))
- Mảng hành động đã gửi server: `[4, -53]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 2 |
| 2-54 | Chờ 53 bước (`-53`) | (17, 1) | (17, 1) | Dự kiến đứng yên tại (17, 1); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 11) (ô=243)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(20, 6))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(20, 6))
- Mảng hành động đã gửi server: `[1, 3, -12, 0, 1, 1, 1, 1, 2, 2, 3, 2, 2, 2, 2, 1, 3, 3, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 3 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 2 |
| 4-15 | Chờ 12 bước (`-12`) | (2, 11) | (2, 11) | Dự kiến đứng yên tại (2, 11); hướng tới tọa độ (2, 11) | 51 |
| 16-17 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (3, 6) (Spot #15 (thương hiệu=15, tọa độ=(3, 6))) | 50 |
| 18-19 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (3, 6) (Spot #15 (thương hiệu=15, tọa độ=(3, 6))) | 49 |
| 20-21 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (3, 6) (Spot #15 (thương hiệu=15, tọa độ=(3, 6))) | 48 |
| 22-24 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (3, 6) (Spot #15 (thương hiệu=15, tọa độ=(3, 6))) | 46 |
| 25-27 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 44 |
| 28-29 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (10, 6) (Spot #3 (thương hiệu=3, tọa độ=(10, 6))) | 43 |
| 30-32 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (10, 6) (Spot #3 (thương hiệu=3, tọa độ=(10, 6))) | 41 |
| 33-35 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (10, 6) (Spot #3 (thương hiệu=3, tọa độ=(10, 6))) | 39 |
| 36 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (10, 6) (Spot #3 (thương hiệu=3, tọa độ=(10, 6))) | 37 |
| 37-38 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (10, 6) (Spot #3 (thương hiệu=3, tọa độ=(10, 6))) | 36 |
| 39-41 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (10, 6) (Spot #3 (thương hiệu=3, tọa độ=(10, 6))) | 34 |
| 42-43 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (10, 6) (Spot #3 (thương hiệu=3, tọa độ=(10, 6))) | 33 |
| 44 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 31 |
| 45-46 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 30 |
| 47-48 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 29 |
| 49-50 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (20, 6) (Spot #14 (thương hiệu=14, tọa độ=(20, 6))) | 28 |
| 51-52 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (20, 6) (Spot #14 (thương hiệu=14, tọa độ=(20, 6))) | 27 |
| 53-54 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (20, 6) (Spot #14 (thương hiệu=14, tọa độ=(20, 6))) | 26 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 17) (ô=378)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(7, 15))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(7, 15))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 3, 2, 3, 2, 2, 2, 2, 3, 3, 2, 2, 3, 0, 5, 5, 0, 0, 5, 5, 4, 0, 5, 5, 4, 5, 5, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 50 |
| 2-3 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 49 |
| 4-5 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 48 |
| 6-8 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 46 |
| 9-10 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 45 |
| 11 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 43 |
| 12-13 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 42 |
| 14 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 40 |
| 15-16 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 39 |
| 17-18 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 38 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 37 |
| 21 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến di chuyển đến (14, 19); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 35 |
| 22-23 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 34 |
| 24 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 32 |
| 25 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (17, 21) (Spot #0 (thương hiệu=0, tọa độ=(17, 21))) | 30 |
| 26-27 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(17, 21)) | 29 |
| 28-29 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (11, 19) (Spot #6 (thương hiệu=6, tọa độ=(11, 19))) | 28 |
| 30-31 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (11, 19) (Spot #6 (thương hiệu=6, tọa độ=(11, 19))) | 27 |
| 32 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới tọa độ (11, 19) (Spot #6 (thương hiệu=6, tọa độ=(11, 19))) | 25 |
| 33 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến di chuyển đến (14, 19); hướng tới tọa độ (11, 19) (Spot #6 (thương hiệu=6, tọa độ=(11, 19))) | 23 |
| 34-35 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (11, 19) (Spot #6 (thương hiệu=6, tọa độ=(11, 19))) | 22 |
| 36 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (11, 19) (Spot #6 (thương hiệu=6, tọa độ=(11, 19))) | 20 |
| 37-38 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (11, 19) (Spot #6 (thương hiệu=6, tọa độ=(11, 19))) | 19 |
| 39-40 | Di chuyển hướng 4 (`4`) | (11, 18) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 18 |
| 41-42 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (7, 19) (Spot #4 (thương hiệu=4, tọa độ=(7, 19))) | 17 |
| 43-44 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới tọa độ (7, 19) (Spot #4 (thương hiệu=4, tọa độ=(7, 19))) | 16 |
| 45 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến di chuyển đến (8, 18); hướng tới tọa độ (7, 19) (Spot #4 (thương hiệu=4, tọa độ=(7, 19))) | 14 |
| 46-48 | Di chuyển hướng 4 (`4`) | (8, 18) | (8, 19) | Dự kiến di chuyển đến (8, 19); hướng tới tọa độ (7, 19) (Spot #4 (thương hiệu=4, tọa độ=(7, 19))) | 12 |
| 49 | Di chuyển hướng 5 (`5`) | (8, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 10 |
| 50-51 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 9 |
| 52-53 | Di chuyển hướng 2 (`2`) | (6, 19) | (7, 19) | Dự kiến di chuyển đến (7, 19); hướng tới tọa độ (7, 15) (Spot #1 (thương hiệu=1, tọa độ=(7, 15))) | 8 |
| 54 | Chờ 1 bước (`-1`) | (7, 19) | (7, 19) | Dự kiến đứng yên tại (7, 19); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 8 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 21) (ô=473)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 21)
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (11, 21) | (11, 21) | Dự kiến đứng yên tại (11, 21); hướng tới tọa độ (11, 21) | 1 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 17) (ô=378)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(21, 4))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(21, 4))
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 0, 0, 2, 2, 2, 2, 2, 3, 2, 2, 3, 3, 2, 3, 0, 1, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (7, 15) (Spot #1 (thương hiệu=1, tọa độ=(7, 15))) | 50 |
| 2-3 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (7, 15) (Spot #1 (thương hiệu=1, tọa độ=(7, 15))) | 49 |
| 4-5 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (7, 15) (Spot #1 (thương hiệu=1, tọa độ=(7, 15))) | 48 |
| 6-7 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 47 |
| 8-9 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (9, 12) (Spot #12 (thương hiệu=12, tọa độ=(9, 12))) | 46 |
| 10-12 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (9, 12) (Spot #12 (thương hiệu=12, tọa độ=(9, 12))) | 44 |
| 13 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (9, 12) (Spot #12 (thương hiệu=12, tọa độ=(9, 12))) | 42 |
| 14 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 40 |
| 15-16 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (11, 8) (Spot #7 (thương hiệu=7, tọa độ=(11, 8))) | 39 |
| 17-18 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (11, 8) (Spot #7 (thương hiệu=7, tọa độ=(11, 8))) | 38 |
| 19-20 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (11, 8) (Spot #7 (thương hiệu=7, tọa độ=(11, 8))) | 37 |
| 21-23 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 35 |
| 24-25 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 34 |
| 26-27 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 33 |
| 28-29 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (18, 8) (Spot #5 (thương hiệu=5, tọa độ=(18, 8))) | 32 |
| 30 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (18, 8) (Spot #5 (thương hiệu=5, tọa độ=(18, 8))) | 30 |
| 31 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (18, 8) (Spot #5 (thương hiệu=5, tọa độ=(18, 8))) | 28 |
| 32-34 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (18, 8) (Spot #5 (thương hiệu=5, tọa độ=(18, 8))) | 26 |
| 35-36 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới tọa độ (18, 8) (Spot #5 (thương hiệu=5, tọa độ=(18, 8))) | 25 |
| 37 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (18, 8) (Spot #5 (thương hiệu=5, tọa độ=(18, 8))) | 23 |
| 38-40 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (18, 8) (Spot #5 (thương hiệu=5, tọa độ=(18, 8))) | 21 |
| 41 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới tọa độ (18, 8) (Spot #5 (thương hiệu=5, tọa độ=(18, 8))) | 19 |
| 42 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 17 |
| 43-44 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (20, 10) (Spot #11 (thương hiệu=11, tọa độ=(20, 10))) | 16 |
| 45 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến di chuyển đến (20, 9); hướng tới tọa độ (20, 10) (Spot #11 (thương hiệu=11, tọa độ=(20, 10))) | 14 |
| 46 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 12 |
| 47-48 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến di chuyển đến (20, 9); hướng tới tọa độ (20, 6) (Spot #14 (thương hiệu=14, tọa độ=(20, 6))) | 11 |
| 49 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến di chuyển đến (20, 8); hướng tới tọa độ (20, 6) (Spot #14 (thương hiệu=14, tọa độ=(20, 6))) | 9 |
| 50 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (20, 6) (Spot #14 (thương hiệu=14, tọa độ=(20, 6))) | 7 |
| 51-52 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 6 |
| 53-54 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến di chuyển đến (21, 5); hướng tới tọa độ (21, 4) (Spot #8 (thương hiệu=8, tọa độ=(21, 4))) | 5 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 17) (ô=378)
- Nhiên liệu đầu ngày: 51
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #19 (thương hiệu=19, tọa độ=(2, 11))
- Mảng hành động đã gửi server: `[0, 0, 0, 1, 0, 0, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 11) (Spot #19 (thương hiệu=19, tọa độ=(2, 11))) | 51 |
| 2-4 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 11) (Spot #19 (thương hiệu=19, tọa độ=(2, 11))) | 51 |
| 5-7 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 11) (Spot #19 (thương hiệu=19, tọa độ=(2, 11))) | 51 |
| 8-9 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 11) (Spot #19 (thương hiệu=19, tọa độ=(2, 11))) | 51 |
| 10-11 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 11) (Spot #19 (thương hiệu=19, tọa độ=(2, 11))) | 51 |
| 12-14 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (2, 11) | 51 |
| 15-54 | Chờ 40 bước (`-40`) | (2, 11) | (2, 11) | Dự kiến đứng yên tại (2, 11); điểm hẹn của xe tuần tra #1 tại (2, 11) | 51 |

