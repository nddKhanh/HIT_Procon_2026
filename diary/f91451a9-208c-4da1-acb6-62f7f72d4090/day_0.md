# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 38
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 22 | #0 | #5 | (17, 11) | 40 | 61 |
| 26 | #0 | #5 | (17, 11) | 59 | 61 |
| 31 | #1 | #5 | (17, 11) | 38 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 1) (ô=36)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=0, tọa độ=(19, 17))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=0, tọa độ=(19, 17))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 3, 3, 3, 3, 4, 4, 5, 2, 2, 1, 4, 4, 3, 3, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (16, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 60 |
| 2 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 58 |
| 3 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 56 |
| 4 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 54 |
| 5-6 | Di chuyển hướng 3 (`3`) | (15, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 53 |
| 7-8 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 52 |
| 9-11 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 50 |
| 12-13 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 49 |
| 14 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 47 |
| 15-17 | Di chuyển hướng 4 (`4`) | (16, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 45 |
| 18 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 43 |
| 19-20 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 42 |
| 21 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 61 |
| 22-23 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 10)) | 60 |
| 24-25 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 61 |
| 26-27 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 60 |
| 28 | Di chuyển hướng 3 (`3`) | (16, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 58 |
| 29-30 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 57 |
| 31-32 | Di chuyển hướng 3 (`3`) | (17, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 56 |
| 33-34 | Di chuyển hướng 3 (`3`) | (18, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 55 |
| 35-36 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(19, 17)) | 54 |
| 37 | Chờ 1 bước (`-1`) | (19, 17) | (19, 17) | Dự kiến đứng yên tại (19, 17); mục tiêu Spot #15 (thương hiệu=0, tọa độ=(19, 17)) | 54 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=243)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 7)
- Mảng hành động đã gửi server: `[4, 3, 1, 1, 2, 2, 3, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 60 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 14)) | 59 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 58 |
| 6-7 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 57 |
| 8 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 55 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 54 |
| 11-12 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 53 |
| 13 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 14 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 49 |
| 15-16 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 48 |
| 17 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 46 |
| 18-19 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 45 |
| 20-21 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 11)) | 44 |
| 22-23 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 43 |
| 24-25 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 42 |
| 26-27 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 41 |
| 28-29 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 40 |
| 30 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 61 |
| 31-32 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 10)) | 60 |
| 33-34 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 59 |
| 35 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 57 |
| 36-37 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 56 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 4) (ô=80)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 5)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 3, 2, 2, 2, 2, 2, 2, 3, 3, 2, 3, 4, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 60 |
| 2-3 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 59 |
| 4-6 | Di chuyển hướng 1 (`1`) | (1, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 57 |
| 7-8 | Di chuyển hướng 1 (`1`) | (2, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 56 |
| 9-10 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 1)) | 55 |
| 11-12 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 54 |
| 13-14 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 53 |
| 15-17 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 1)) | 51 |
| 18-19 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 50 |
| 20-21 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 49 |
| 22-24 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 1)) | 47 |
| 25-26 | Di chuyển hướng 3 (`3`) | (9, 1) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 46 |
| 27 | Di chuyển hướng 3 (`3`) | (9, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 44 |
| 28 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 42 |
| 29-31 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 40 |
| 32-33 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 5)) | 39 |
| 34-35 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 38 |
| 36-37 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 37 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 16) (ô=338)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 10)
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 5, 5, 5, 5, 5, 5, 5, 4, 4, 5, 5, 0, 1, 0, 0, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 60 |
| 2-3 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 59 |
| 4-5 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 58 |
| 6 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 56 |
| 7-8 | Di chuyển hướng 5 (`5`) | (16, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 55 |
| 9 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 53 |
| 10-11 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 52 |
| 12-13 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 51 |
| 14-15 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 50 |
| 16-17 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 49 |
| 18 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 47 |
| 19-20 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 46 |
| 21 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 44 |
| 22-23 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 43 |
| 24-25 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(6, 15)) | 42 |
| 26-27 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 41 |
| 28-29 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 40 |
| 30-31 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 39 |
| 32-33 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 38 |
| 34-35 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=2, tọa độ=(5, 10)) | 37 |
| 36-37 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 36 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 8) (ô=162)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(1, 8))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(1, 8))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 1, 1, 0, 5, 5, 5, 4, 4, 4, 3, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 60 |
| 2-3 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 7)) | 59 |
| 4-5 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 58 |
| 6-7 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 57 |
| 8-9 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 56 |
| 10-11 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 55 |
| 12-14 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(6, 2)) | 53 |
| 15-16 | Di chuyển hướng 0 (`0`) | (6, 2) | (6, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 1)) | 52 |
| 17-18 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 51 |
| 19-21 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 49 |
| 22-23 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 1)) | 48 |
| 24-25 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 47 |
| 26-28 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 45 |
| 29-31 | Di chuyển hướng 4 (`4`) | (2, 3) | (1, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 4)) | 43 |
| 32-33 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 42 |
| 34-35 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 41 |
| 36 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 39 |
| 37 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 37 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (11, 16) (ô=331)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 11)
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 2, 2, 1, 1, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 61 |
| 2-4 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 61 |
| 5-6 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 61 |
| 7 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 61 |
| 8-9 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 61 |
| 10 | Di chuyển hướng 2 (`2`) | (15, 13) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 61 |
| 11-12 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 61 |
| 13 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 61 |
| 14-37 | Chờ 24 bước (`-24`) | (17, 11) | (17, 11) | Dự kiến đứng yên tại (17, 11); hướng tới tọa độ (17, 11) | 61 |

