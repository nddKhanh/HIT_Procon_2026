# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 38
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #0 | #6 | (4, 3) | 41 | 61 |
| 37 | #2 | #6 | (4, 4) | 37 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 3) (ô=62)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 4)
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 4, 5, 5, 0, 5, 5, 5, 2, 1, 1, 2, 2, 3, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 60 |
| 2-4 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 58 |
| 5-6 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 57 |
| 7-9 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 55 |
| 10 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 53 |
| 11-12 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 52 |
| 13-14 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 51 |
| 15 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 49 |
| 16-17 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 48 |
| 18-20 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 46 |
| 21-22 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 45 |
| 23-24 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 44 |
| 25-26 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 43 |
| 27 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 61 |
| 28-29 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 60 |
| 30-32 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 58 |
| 33-34 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 57 |
| 35 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 55 |
| 36-37 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 54 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 3) (ô=63)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(12, 12))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(12, 12))
- Mảng hành động đã gửi server: `[5, 0, 5, 4, 4, 5, 3, 4, 3, 4, 4, 2, 3, 2, 3, 2, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 60 |
| 2-3 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 59 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 58 |
| 6-7 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 57 |
| 8-9 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 56 |
| 10-12 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 54 |
| 13-14 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 53 |
| 15 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 51 |
| 16-17 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 50 |
| 18-19 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 49 |
| 20 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 47 |
| 21-22 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 46 |
| 23 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 44 |
| 24-26 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 42 |
| 27-29 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 40 |
| 30-32 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 38 |
| 33-34 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 37 |
| 35-36 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 36 |
| 37 | Chờ 1 bước (`-1`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 36 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 12) (ô=205)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(5, 5))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(5, 5))
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 1, 2, 1, 5, 5, 5, 0, 0, 1, 0, 5, 2, 1, 1, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 60 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 58 |
| 3-4 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 57 |
| 5-6 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(5, 11)) | 56 |
| 7-8 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 55 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 54 |
| 11-13 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 52 |
| 14-15 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 51 |
| 16-18 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 49 |
| 19 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 47 |
| 20-21 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 46 |
| 22-23 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 45 |
| 24-25 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 44 |
| 26-27 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 43 |
| 28-29 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 42 |
| 30-31 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 41 |
| 32-33 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 40 |
| 34 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 38 |
| 35-36 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 61 |
| 37 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 59 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 17))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 17))
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 4, 3, 3, 3, 4, 3, 3, 4, 4, 2, 3, 4, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 60 |
| 2-4 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 58 |
| 5-7 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 56 |
| 8-9 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 55 |
| 10 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 53 |
| 11-13 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 51 |
| 14 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 49 |
| 15 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 47 |
| 16-18 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 45 |
| 19-20 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 44 |
| 21-22 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 43 |
| 23 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 41 |
| 24-25 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 40 |
| 26-27 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 39 |
| 28-29 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 14)) | 38 |
| 30-31 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 37 |
| 32-34 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 35 |
| 35-37 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 17)) | 33 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 14) (ô=246)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 14)
- Mảng hành động đã gửi server: `[2, 2, 1, 0, 1, 2, 4, 4, 4, 4, 2, 2, 3, 3, 2, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 60 |
| 2-4 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 58 |
| 5-7 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 56 |
| 8-9 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 55 |
| 10-11 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 54 |
| 12-13 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 53 |
| 14-15 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 52 |
| 16-18 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 50 |
| 19-20 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 49 |
| 21-23 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=1, tọa độ=(10, 15)) | 47 |
| 24-25 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 46 |
| 26-27 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 45 |
| 28-29 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 44 |
| 30 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 42 |
| 31 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 40 |
| 32-33 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 39 |
| 34-35 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 38 |
| 36-37 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 37 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (11, 17) (ô=300)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 0, 0, 5, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 60 |
| 2-3 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 59 |
| 4-5 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 58 |
| 6-8 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 56 |
| 9 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 54 |
| 10-11 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 53 |
| 12-13 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 52 |
| 14-15 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 51 |
| 16-18 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 49 |
| 19-21 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 47 |
| 22 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 45 |
| 23-24 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 44 |
| 25-27 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 42 |
| 28-29 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 41 |
| 30 | Di chuyển hướng 1 (`1`) | (13, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 39 |
| 31-32 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 38 |
| 33-34 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 37 |
| 35-36 | Di chuyển hướng 0 (`0`) | (13, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 36 |
| 37 | Chờ 1 bước (`-1`) | (12, 0) | (12, 0) | Dự kiến đứng yên tại (12, 0); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 36 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (0, 11) (ô=187)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 4)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 1, 1, -11, 3, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 61 |
| 2 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 61 |
| 3-4 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 61 |
| 5-7 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 61 |
| 8-10 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 61 |
| 11-13 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 61 |
| 14-15 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 61 |
| 16 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 61 |
| 17-27 | Chờ 11 bước (`-11`) | (4, 3) | (4, 3) | Dự kiến đứng yên tại (4, 3); mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 61 |
| 28-29 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 61 |
| 30-37 | Chờ 8 bước (`-8`) | (4, 4) | (4, 4) | Dự kiến đứng yên tại (4, 4); hướng tới tọa độ (4, 4) | 61 |

