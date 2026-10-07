# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #2 | #1 | (7, 8) | 28 | 40 |
| 31 | #3 | #1 | (0, 10) | 2 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 0) (ô=5)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 7)
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 2, 2, 2, 2, 2, 1, 3, 5, 4, 3, 3, 4, 5, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 39 |
| 2-4 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 37 |
| 5-6 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 36 |
| 7 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 34 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 33 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 32 |
| 12 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 30 |
| 13 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 28 |
| 14 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 26 |
| 15 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 24 |
| 16-17 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 23 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 22 |
| 20 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 20 |
| 21-22 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 19 |
| 23-24 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 18 |
| 25-27 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 16 |
| 28 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 14 |
| 29-30 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 13 |
| 31 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 11 |

### Xe #1 - Tiếp tế

- Vị trí đầu ngày: (12, 5) (ô=92)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=7, tọa độ=(0, 10))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=7, tọa độ=(0, 10))
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 4, 4, -5, 5, 5, 5, 5, 5, 4, 5, 4, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 40 |
| 2 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 40 |
| 3 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 40 |
| 4 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 40 |
| 5 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 40 |
| 6 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 7-11 | Chờ 5 bước (`-5`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 12-13 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 40 |
| 14-15 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 40 |
| 16-17 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 40 |
| 18 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 40 |
| 19 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 40 |
| 20-21 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 40 |
| 22 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 40 |
| 23 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(0, 10)) | 40 |
| 24-31 | Chờ 8 bước (`-8`) | (0, 10) | (0, 10) | Dự kiến đứng yên tại (0, 10); mục tiêu Spot #10 (thương hiệu=7, tọa độ=(0, 10)) | 40 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 9) (ô=144)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 1)
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 0, 0, 5, 0, 5, 5, 0, 5, 0, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 39 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 37 |
| 3 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 35 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 34 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 32 |
| 7 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 30 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 29 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 12-13 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 39 |
| 14 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 37 |
| 15 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 35 |
| 16-17 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 34 |
| 18-19 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 33 |
| 20-21 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 32 |
| 22-23 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 31 |
| 24 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 29 |
| 25 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(4, 2)) | 27 |
| 26-27 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 26 |
| 28 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 24 |
| 29 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 22 |
| 30-31 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 21 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 15) (ô=249)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=7, tọa độ=(0, 10))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=7, tọa độ=(0, 10))
- Mảng hành động đã gửi server: `[1, 4, 5, 5, 5, 5, 5, 5, 5, 5, 2, 2, 2, 1, 0, 0, 0, 0, 0, 1, 4, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(9, 14)) | 39 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 38 |
| 4-5 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 37 |
| 6 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 35 |
| 7 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 33 |
| 8 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 31 |
| 9 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 29 |
| 10 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 27 |
| 11 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 25 |
| 12 | Di chuyển hướng 5 (`5`) | (2, 15) | (1, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 15)) | 23 |
| 13-14 | Di chuyển hướng 2 (`2`) | (1, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 22 |
| 15 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 20 |
| 16 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 18 |
| 17 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 16 |
| 18 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 14 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 13 |
| 21-22 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 12 |
| 23 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 10 |
| 24 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 8 |
| 25 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 6 |
| 26-27 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 5 |
| 28 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 3 |
| 29-30 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(0, 10)) | 40 |
| 31 | Chờ 1 bước (`-1`) | (0, 10) | (0, 10) | Dự kiến đứng yên tại (0, 10); mục tiêu Spot #10 (thương hiệu=7, tọa độ=(0, 10)) | 40 |

