# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 29
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #3 | #5 | (1, 2) | 39 | 61 |
| 15 | #3 | #5 | (1, 1) | 59 | 61 |
| 19 | #3 | #5 | (2, 1) | 59 | 61 |
| 29 | #0 | #5 | (2, 1) | 25 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=173)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 1)
- Mảng hành động đã gửi server: `[1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 4, 5, 5, 5, 5, 5, 5, 0, 1, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 60 |
| 2 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 58 |
| 3 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 56 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 54 |
| 5 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 52 |
| 6 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 50 |
| 7 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 48 |
| 8-10 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 46 |
| 11-12 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 45 |
| 13-14 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 44 |
| 15 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 42 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 41 |
| 18 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 39 |
| 19 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 37 |
| 20 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 35 |
| 21 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 33 |
| 22 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 31 |
| 23 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 29 |
| 24 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 27 |
| 25-26 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 26 |
| 27-28 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 61 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 4) (ô=67)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(7, 4))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(7, 4))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 3, 3, 4, 3, 0, 0, 5, 5, 5, 5, 0, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 60 |
| 2-4 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 58 |
| 5 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 56 |
| 6-7 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 55 |
| 8-9 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 54 |
| 10-11 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 53 |
| 12 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 51 |
| 13-14 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 50 |
| 15-16 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 49 |
| 17-18 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 48 |
| 19 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 46 |
| 20 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 44 |
| 21 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 42 |
| 22 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 40 |
| 23 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 38 |
| 24-25 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 37 |
| 26 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 35 |
| 27-28 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 34 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 11) (ô=158)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(9, 7))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(9, 7))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 5, 2, 3, 3, 3, 3, 1, 1, 2, 2, 2, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 60 |
| 2 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 58 |
| 3 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 56 |
| 4 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 54 |
| 5-6 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 53 |
| 7-8 | Di chuyển hướng 2 (`2`) | (0, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 52 |
| 9-10 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 51 |
| 11 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 49 |
| 12 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 47 |
| 13-14 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 46 |
| 15-16 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 45 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 44 |
| 19 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 42 |
| 20 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 40 |
| 21 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 38 |
| 22 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 36 |
| 23-25 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 34 |
| 26-27 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 33 |
| 28 | Chờ 1 bước (`-1`) | (9, 7) | (9, 7) | Dự kiến đứng yên tại (9, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 33 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 13) (ô=183)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(0, 8))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(0, 8))
- Mảng hành động đã gửi server: `[2, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 3, 4, 3, 3, 4, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 60 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 58 |
| 3 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 56 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 54 |
| 5 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 52 |
| 6 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 50 |
| 7-8 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 49 |
| 9 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 47 |
| 10 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 45 |
| 11 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 43 |
| 12 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 41 |
| 13 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 61 |
| 14 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 61 |
| 15-16 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 60 |
| 17-18 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 61 |
| 19 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 59 |
| 20 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 57 |
| 21 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 55 |
| 22 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 53 |
| 23 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 51 |
| 24 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 49 |
| 25-27 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 47 |
| 28 | Chờ 1 bước (`-1`) | (0, 8) | (0, 8) | Dự kiến đứng yên tại (0, 8); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 47 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (9, 1) (ô=23)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 6)
- Mảng hành động đã gửi server: `[5, 2, 2, 2, 2, 1, 3, 4, 3, 3, 4, 4, 5, 5, 4, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 60 |
| 2-3 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 59 |
| 4-5 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 58 |
| 6 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 56 |
| 7-9 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 54 |
| 10-11 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 53 |
| 12-13 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 52 |
| 14-15 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 51 |
| 16 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 49 |
| 17-18 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 48 |
| 19-20 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 47 |
| 21-22 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 46 |
| 23 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 44 |
| 24 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 42 |
| 25 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 40 |
| 26 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 38 |
| 27-28 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 37 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (8, 8) (ô=120)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 1)
- Mảng hành động đã gửi server: `[1, 0, 5, 5, 0, 1, 0, 0, 5, 5, 5, 5, 0, 2, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 61 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 61 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 61 |
| 5 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 61 |
| 6 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 61 |
| 7 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 61 |
| 8 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 61 |
| 9 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 61 |
| 10 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 61 |
| 11 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 61 |
| 12 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 61 |
| 13 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 61 |
| 14 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 61 |
| 15-16 | Di chuyển hướng 2 (`2`) | (1, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 61 |
| 17-28 | Chờ 12 bước (`-12`) | (2, 1) | (2, 1) | Dự kiến đứng yên tại (2, 1); hướng tới tọa độ (2, 1) | 61 |

