# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 60
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #0 | #7 | (15, 3) | 31 | 55 |
| 29 | #3 | #6 | (22, 17) | 4 | 55 |
| 31 | #4 | #6 | (22, 17) | 5 | 55 |
| 53 | #5 | #7 | (15, 3) | 15 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 3) (ô=84)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 2, 3, 2, 2, 2, 3, 2, 1, 1, 1, 1, 2, 2, 3, 3, 2, 4, 3, 4, 4, 4, 4, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 40 |
| 2-4 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 38 |
| 5-6 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 36 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 35 |
| 9 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 33 |
| 10-11 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 32 |
| 12-13 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 55 |
| 14-16 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 53 |
| 17-18 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 51 |
| 19-20 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 50 |
| 21-22 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 49 |
| 23-24 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 47 |
| 25-28 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 45 |
| 29-30 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 44 |
| 31 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 42 |
| 32-33 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 41 |
| 34-35 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 40 |
| 36 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 38 |
| 37-38 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 37 |
| 39-40 | Di chuyển hướng 2 (`2`) | (23, 2) | (24, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 36 |
| 41-42 | Di chuyển hướng 4 (`4`) | (24, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 35 |
| 43-44 | Di chuyển hướng 3 (`3`) | (24, 3) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 34 |
| 45-46 | Di chuyển hướng 4 (`4`) | (24, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 33 |
| 47-50 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 31 |
| 51-52 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 30 |
| 53-56 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 28 |
| 57-59 | Chờ 3 bước (`-3`) | (22, 8) | (22, 8) | Dự kiến đứng yên tại (22, 8); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 28 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[-60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-59 | Chờ 60 bước (`-60`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 17) (ô=433)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(15, 10))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(15, 10))
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 5, 5, 5, 5, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 54 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 53 |
| 4-6 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 51 |
| 7 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 49 |
| 8-9 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 48 |
| 10-11 | Di chuyển hướng 5 (`5`) | (3, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 47 |
| 12-13 | Di chuyển hướng 5 (`5`) | (2, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 46 |
| 14-15 | Di chuyển hướng 5 (`5`) | (1, 18) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 45 |
| 16-17 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 44 |
| 18-19 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 43 |
| 20-22 | Di chuyển hướng 2 (`2`) | (0, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 41 |
| 23-24 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 40 |
| 25-26 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 39 |
| 27 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 37 |
| 28-29 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 36 |
| 30-32 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 34 |
| 33 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 32 |
| 34-35 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 30 |
| 36-37 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 29 |
| 38-39 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 28 |
| 40-42 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 26 |
| 43 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 24 |
| 44-46 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 22 |
| 47-48 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 21 |
| 49 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 19 |
| 50 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 17 |
| 51-52 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 16 |
| 53-54 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 15 |
| 55-56 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 14 |
| 57-59 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 12 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (22, 17) (ô=447)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 18)
- Mảng hành động đã gửi server: `[-30, 5, 5, 5, 5, 5, 0, 0, 0, 5, 4, 4, 3, 4, 4, 0, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-29 | Chờ 30 bước (`-30`) | (22, 17) | (22, 17) | Dự kiến đứng yên tại (22, 17); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 55 |
| 30-31 | Di chuyển hướng 5 (`5`) | (22, 17) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 54 |
| 32-34 | Di chuyển hướng 5 (`5`) | (21, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 52 |
| 35 | Di chuyển hướng 5 (`5`) | (20, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 50 |
| 36 | Di chuyển hướng 5 (`5`) | (19, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 48 |
| 37-39 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 46 |
| 40 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 44 |
| 41-42 | Di chuyển hướng 0 (`0`) | (16, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 43 |
| 43-45 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 41 |
| 46-47 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 40 |
| 48 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 38 |
| 49 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 36 |
| 50-51 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 35 |
| 52-53 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 33 |
| 54 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 31 |
| 55-56 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 30 |
| 57-58 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 28 |
| 59 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 26 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 15) (ô=389)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 9)
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 2, 3, 3, 2, 2, 2, 2, 2, 2, 0, 1, 1, 1, -2, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 1, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 30 |
| 1-2 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 29 |
| 3-4 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 27 |
| 5 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 25 |
| 6-7 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 24 |
| 8 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 22 |
| 9-11 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 21)) | 20 |
| 12-13 | Di chuyển hướng 2 (`2`) | (15, 21) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 19 |
| 14-16 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 17 |
| 17-18 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 16 |
| 19-20 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 15 |
| 21-23 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 13 |
| 24 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(21, 21)) | 11 |
| 25-26 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 10 |
| 27-28 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 9 |
| 29 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 7 |
| 30 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 55 |
| 31-32 | Chờ 2 bước (`-2`) | (22, 17) | (22, 17) | Dự kiến đứng yên tại (22, 17); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 55 |
| 33-34 | Di chuyển hướng 5 (`5`) | (22, 17) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 54 |
| 35-37 | Di chuyển hướng 5 (`5`) | (21, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 52 |
| 38 | Di chuyển hướng 5 (`5`) | (20, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 50 |
| 39 | Di chuyển hướng 5 (`5`) | (19, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 48 |
| 40-42 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 46 |
| 43 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 44 |
| 44-45 | Di chuyển hướng 0 (`0`) | (16, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 43 |
| 46-48 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 41 |
| 49-50 | Di chuyển hướng 0 (`0`) | (15, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 40 |
| 51-52 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 39 |
| 53-54 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 38 |
| 55-56 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 37 |
| 57-58 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 36 |
| 59 | Chờ 1 bước (`-1`) | (15, 9) | (15, 9) | Dự kiến đứng yên tại (15, 9); hướng tới tọa độ (15, 9) | 36 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (8, 17) (ô=433)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 4)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 2, 1, 2, 2, 5, 0, 0, 2, 2, 2, 2, 1, 3, 3, 2, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 54 |
| 2-3 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 52 |
| 4 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 50 |
| 5-6 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 49 |
| 7 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 47 |
| 8-9 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 46 |
| 10 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 44 |
| 11-13 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 42 |
| 14-15 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 8)) | 41 |
| 16-17 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 40 |
| 18 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 38 |
| 19-21 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 36 |
| 22-23 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 35 |
| 24 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 33 |
| 25-27 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 31 |
| 28-29 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 30 |
| 30-31 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 28 |
| 32-33 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 27 |
| 34-35 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 26 |
| 36-37 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 25 |
| 38-40 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 23 |
| 41-43 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 21 |
| 44-45 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 20 |
| 46 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 18 |
| 47-48 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 17 |
| 49-50 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 16 |
| 51-52 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 55 |
| 53-55 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 53 |
| 56-57 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 51 |
| 58-59 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 50 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (8, 17) (ô=433)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(22, 17))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(22, 17))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 55 |
| 4-5 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 55 |
| 6-8 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 55 |
| 9 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 55 |
| 10-11 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 55 |
| 12 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 55 |
| 13-14 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 55 |
| 15-16 | Di chuyển hướng 2 (`2`) | (15, 17) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 55 |
| 17-19 | Di chuyển hướng 2 (`2`) | (16, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 55 |
| 20 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 55 |
| 21-23 | Di chuyển hướng 2 (`2`) | (18, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 55 |
| 24 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 55 |
| 25 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 55 |
| 26-28 | Di chuyển hướng 2 (`2`) | (21, 17) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 55 |
| 29-59 | Chờ 31 bước (`-31`) | (22, 17) | (22, 17) | Dự kiến đứng yên tại (22, 17); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (15, 3) (ô=90)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 3)
- Mảng hành động đã gửi server: `[-60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-59 | Chờ 60 bước (`-60`) | (15, 3) | (15, 3) | Dự kiến đứng yên tại (15, 3); hướng tới tọa độ (15, 3) | 55 |

