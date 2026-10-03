# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 44
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #2 | #5 | (7, 19) | 25 | 51 |
| 33 | #1 | #5 | (7, 19) | 27 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 9) (ô=201)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(7, 15))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(7, 15))
- Mảng hành động đã gửi server: `[1, 0, 1, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 3, 2, 2, 2, 5, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 50 |
| 2-3 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 49 |
| 4-6 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 47 |
| 7-8 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 46 |
| 9-11 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 44 |
| 12-14 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 42 |
| 15-16 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 41 |
| 17-18 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 40 |
| 19-20 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 39 |
| 21-22 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 38 |
| 23 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 36 |
| 24-26 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 34 |
| 27-29 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 32 |
| 30 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 30 |
| 31-32 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 29 |
| 33-35 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 27 |
| 36 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 25 |
| 37-38 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 24 |
| 39 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 22 |
| 40 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 20 |
| 41-43 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 18 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 7) (ô=155)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 16)
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 5, 2, 2, 3, 3, 2, 3, 3, 2, 3, 3, 4, 4, 5, 0, 5, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 50 |
| 2-3 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 49 |
| 4-6 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 47 |
| 7-8 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 46 |
| 9-10 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 45 |
| 11-12 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 44 |
| 13-14 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 43 |
| 15 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 41 |
| 16-18 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 39 |
| 19-21 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 37 |
| 22 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 35 |
| 23-24 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 34 |
| 25-26 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 33 |
| 27-28 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 32 |
| 29-30 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 31 |
| 31 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 29 |
| 32 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 50 |
| 35-36 | Di chuyển hướng 0 (`0`) | (6, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 49 |
| 37-39 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 47 |
| 40-41 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 46 |
| 42-43 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 45 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 3) (ô=73)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 20)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 4, 4, 3, 4, 4, 3, 4, 4, 3, 4, 4, 2, 1, 2, 2, 3, 4, 3, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 50 |
| 2-4 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 48 |
| 5-6 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 47 |
| 7 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 45 |
| 8-9 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 44 |
| 10-11 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 43 |
| 12-14 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 41 |
| 15-17 | Di chuyển hướng 3 (`3`) | (8, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 39 |
| 18 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 37 |
| 19 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 35 |
| 20 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 33 |
| 21-22 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 32 |
| 23 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 30 |
| 24-25 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 29 |
| 26 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 27 |
| 27 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |
| 28-29 | Di chuyển hướng 2 (`2`) | (7, 19) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 50 |
| 30 | Di chuyển hướng 1 (`1`) | (8, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 48 |
| 31-33 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 46 |
| 34 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 44 |
| 35-36 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 43 |
| 37-38 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 42 |
| 39 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 40 |
| 40-41 | Di chuyển hướng 2 (`2`) | (11, 21) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 39 |
| 42-43 | Di chuyển hướng 1 (`1`) | (12, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 38 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (15, 10) (ô=235)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(17, 21))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(17, 21))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 1, 1, 1, 5, 4, 4, 3, 2, 3, 3, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 50 |
| 2-3 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 49 |
| 4 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 47 |
| 5 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 45 |
| 6 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 43 |
| 7-8 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 42 |
| 9-10 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 41 |
| 11-12 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 40 |
| 13-14 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 39 |
| 15-16 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 38 |
| 17-18 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 37 |
| 19 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 35 |
| 20 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 33 |
| 21-22 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 32 |
| 23-24 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 31 |
| 25-26 | Di chuyển hướng 4 (`4`) | (20, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 30 |
| 27-29 | Di chuyển hướng 4 (`4`) | (20, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 28 |
| 30-31 | Di chuyển hướng 4 (`4`) | (19, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 27 |
| 32-33 | Di chuyển hướng 4 (`4`) | (19, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 26 |
| 34-36 | Di chuyển hướng 4 (`4`) | (18, 16) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 24 |
| 37-39 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 22 |
| 40 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 20 |
| 41 | Di chuyển hướng 4 (`4`) | (18, 19) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 18 |
| 42 | Di chuyển hướng 4 (`4`) | (17, 20) | (17, 21) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(17, 21)) | 16 |
| 43 | Chờ 1 bước (`-1`) | (17, 21) | (17, 21) | Dự kiến đứng yên tại (17, 21); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(17, 21)) | 16 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 3) (ô=78)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 5)
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 3, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 3, 3, 2, 3, 3, 2, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 50 |
| 2 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 48 |
| 3-5 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 46 |
| 6-7 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 45 |
| 8-9 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 44 |
| 10-11 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 43 |
| 12 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 41 |
| 13 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 39 |
| 14-16 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 37 |
| 17 | Di chuyển hướng 1 (`1`) | (13, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 35 |
| 18-20 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 33 |
| 21 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 31 |
| 22-24 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 29 |
| 25-27 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 27 |
| 28-29 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 26 |
| 30-31 | Di chuyển hướng 3 (`3`) | (17, 0) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 25 |
| 32 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 23 |
| 33 | Di chuyển hướng 2 (`2`) | (18, 2) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 21 |
| 34 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 19 |
| 35-36 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 18 |
| 37-39 | Di chuyển hướng 2 (`2`) | (20, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 16 |
| 40-41 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 15 |
| 42-43 | Chờ 2 bước (`-2`) | (21, 5) | (21, 5) | Dự kiến đứng yên tại (21, 5); hướng tới tọa độ (21, 5) | 15 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (2, 15) (ô=332)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 2, 3, 2, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 51 |
| 2-4 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 51 |
| 5-7 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 51 |
| 8-9 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 51 |
| 10-11 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 51 |
| 12-14 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 51 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |
| 17-43 | Chờ 27 bước (`-27`) | (7, 19) | (7, 19) | Dự kiến đứng yên tại (7, 19); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |

