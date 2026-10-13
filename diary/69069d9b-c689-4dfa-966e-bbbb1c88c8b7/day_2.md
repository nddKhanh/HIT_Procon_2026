# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 52
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 16 | #2 | #7 | (8, 7) | 6 | 54 |
| 25 | #5 | #7 | (7, 2) | 0 | 54 |
| 28 | #5 | #7 | (6, 2) | 53 | 54 |
| 30 | #5 | #7 | (5, 2) | 53 | 54 |
| 43 | #2 | #7 | (4, 6) | 36 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=315)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(11, 20))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(11, 20))
- Mảng hành động đã gửi server: `[4, 5, 2, 2, 3, 3, 2, 3, 2, 3, 2, 3, 3, 3, 2, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 20 |
| 2 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 18 |
| 3-4 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 17 |
| 5 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 15 |
| 6-7 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 14 |
| 8-9 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 13 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 12 |
| 12 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 10 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 9 |
| 15-16 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 8 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 7 |
| 19-20 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 6 |
| 21-22 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 5 |
| 23-24 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 4 |
| 25-26 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 3 |
| 27-51 | Chờ 25 bước (`-25`) | (11, 20) | (11, 20) | Dự kiến đứng yên tại (11, 20); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 12) (ô=329)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(16, 12))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(16, 12))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 5, 5, 5, 5, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 33 |
| 3-4 | Di chuyển hướng 4 (`4`) | (18, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 32 |
| 5-6 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 31 |
| 7 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 29 |
| 8-10 | Di chuyển hướng 4 (`4`) | (16, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 27 |
| 11 | Di chuyển hướng 4 (`4`) | (16, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 25 |
| 12-13 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 24 |
| 14-15 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 23 |
| 16 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 21 |
| 17-19 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 19 |
| 20 | Di chuyển hướng 2 (`2`) | (19, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 17 |
| 21-22 | Di chuyển hướng 1 (`1`) | (20, 18) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 16 |
| 23 | Di chuyển hướng 1 (`1`) | (21, 17) | (21, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(21, 16)) | 14 |
| 24-25 | Di chuyển hướng 1 (`1`) | (21, 16) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 13 |
| 26-27 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 12 |
| 28-29 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 11 |
| 30-31 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 10 |
| 32-33 | Di chuyển hướng 2 (`2`) | (23, 12) | (24, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 9 |
| 34-35 | Di chuyển hướng 5 (`5`) | (24, 12) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 8 |
| 36-37 | Di chuyển hướng 5 (`5`) | (23, 12) | (22, 12) | Dự kiến đến điểm hẹn tọa độ (22, 12) | 7 |
| 38-39 | Di chuyển hướng 5 (`5`) | (22, 12) | (21, 12) | Dự kiến đến điểm hẹn tọa độ (21, 12) | 6 |
| 40-41 | Di chuyển hướng 5 (`5`) | (21, 12) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 5 |
| 42-43 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 4 |
| 44-45 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 3 |
| 46-47 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 2 |
| 48-50 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 0 |
| 51 | Chờ 1 bước (`-1`) | (16, 12) | (16, 12) | Dự kiến đứng yên tại (16, 12); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 8) (ô=222)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=25, tọa độ=(9, 5))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=25, tọa độ=(9, 5))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 0, 4, 5, 4, 5, 5, 4, 5, 5, 5, 5, 5, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 14 |
| 2-3 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 12 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 11 |
| 6-7 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 10 |
| 8-9 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 9 |
| 10-11 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 8 |
| 12-13 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 7 |
| 14-15 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 54 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 53 |
| 18-19 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 52 |
| 20-21 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 51 |
| 22-23 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 50 |
| 24-25 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 49 |
| 26-27 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 48 |
| 28-29 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 47 |
| 30 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 45 |
| 31-32 | Di chuyển hướng 5 (`5`) | (1, 9) | (0, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 9)) | 44 |
| 33-34 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 43 |
| 35-36 | Di chuyển hướng 2 (`2`) | (0, 8) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 42 |
| 37-38 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 41 |
| 39-40 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 40 |
| 41 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 38 |
| 42 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 54 |
| 43-44 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 53 |
| 45-47 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 51 |
| 48-49 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 50 |
| 50 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 48 |
| 51 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 46 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=24, tọa độ=(18, 0))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=24, tọa độ=(18, 0))
- Mảng hành động đã gửi server: `[2, -50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (17, 0) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 6 |
| 2-51 | Chờ 50 bước (`-50`) | (18, 0) | (18, 0) | Dự kiến đứng yên tại (18, 0); mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 6 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (13, 16) (ô=429)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 19)
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 5, 4, 5, 4, 4, 4, 4, 5, 4, 4, 1, 0, 1, 1, 2, 2, 3, 2, 3, 3, 3, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 39 |
| 2-3 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 38 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 37 |
| 6 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 35 |
| 7-8 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 34 |
| 9 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 32 |
| 10-11 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 31 |
| 12-13 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 30 |
| 14-15 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 29 |
| 16-17 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 28 |
| 18-19 | Di chuyển hướng 4 (`4`) | (7, 17) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 27 |
| 20-21 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 26 |
| 22-23 | Di chuyển hướng 4 (`4`) | (5, 18) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 25 |
| 24-25 | Di chuyển hướng 4 (`4`) | (5, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 24 |
| 26-27 | Di chuyển hướng 1 (`1`) | (4, 20) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 23 |
| 28-29 | Di chuyển hướng 0 (`0`) | (5, 19) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 22 |
| 30-31 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 21 |
| 32-33 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 20 |
| 34-35 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 19 |
| 36-37 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 18 |
| 38-39 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 17 |
| 40-41 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 16 |
| 42-43 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 15 |
| 44-45 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 14 |
| 46-47 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 13 |
| 48-49 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 12 |
| 50-51 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 11 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 4) (ô=109)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(1, 5))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(1, 5))
- Mảng hành động đã gửi server: `[0, 1, 1, 3, 2, -16, 5, 5, 0, 5, 5, 5, 5, 0, 3, 4, 3, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 4 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 3 |
| 4-5 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 2 |
| 6-7 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 1 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 0 |
| 10-25 | Chờ 16 bước (`-16`) | (7, 2) | (7, 2) | Dự kiến đứng yên tại (7, 2); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 54 |
| 26-27 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 54 |
| 28-29 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 54 |
| 30-31 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 53 |
| 32-33 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 52 |
| 34 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 50 |
| 35-36 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 49 |
| 37-38 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 48 |
| 39-40 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 47 |
| 41-42 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 46 |
| 43-44 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 45 |
| 45-46 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 44 |
| 47-48 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 43 |
| 49-50 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 42 |
| 51 | Chờ 1 bước (`-1`) | (1, 5) | (1, 5) | Dự kiến đứng yên tại (1, 5); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 42 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (25, 14) (ô=389)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(24, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(24, 12))
- Mảng hành động đã gửi server: `[0, 0, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (25, 14) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 3 |
| 2 | Di chuyển hướng 0 (`0`) | (25, 13) | (24, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 1 |
| 3-51 | Chờ 49 bước (`-49`) | (24, 12) | (24, 12) | Dự kiến đứng yên tại (24, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 1 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (7, 16) (ô=423)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 6)
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 5, 5, 4, 4, 4, 4, 2, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 54 |
| 2-3 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 54 |
| 4-5 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 54 |
| 6 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 54 |
| 7 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 54 |
| 8-10 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 54 |
| 11 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 54 |
| 12-13 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 54 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 54 |
| 16-17 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 54 |
| 18-19 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 54 |
| 20 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 54 |
| 21-22 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 54 |
| 23-24 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 54 |
| 25-26 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 54 |
| 27-28 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 54 |
| 29-30 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 54 |
| 31-32 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 54 |
| 33 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 54 |
| 34-36 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 54 |
| 37 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 54 |
| 38-51 | Chờ 14 bước (`-14`) | (4, 6) | (4, 6) | Dự kiến đứng yên tại (4, 6); hướng tới tọa độ (4, 6) | 54 |

