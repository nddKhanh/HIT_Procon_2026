# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 36
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #3 | (2, 15) | 39 | 40 |
| 3 | #2 | #3 | (3, 15) | 38 | 40 |
| 4 | #2 | #3 | (4, 15) | 38 | 40 |
| 5 | #2 | #3 | (4, 14) | 38 | 40 |
| 6 | #2 | #3 | (5, 13) | 38 | 40 |
| 7 | #2 | #3 | (4, 12) | 38 | 40 |
| 23 | #1 | #3 | (4, 2) | 1 | 40 |
| 35 | #1 | #3 | (9, 1) | 27 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 7) (ô=125)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=8, tọa độ=(15, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=8, tọa độ=(15, 12))
- Mảng hành động đã gửi server: `[4, 3, 3, 2, 3, 3, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 10 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 8 |
| 3-5 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 6 |
| 6-8 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 4 |
| 9-11 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 2 |
| 12-14 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 0 |
| 15-35 | Chờ 21 bước (`-21`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 0) (ô=2)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=1, tọa độ=(9, 1))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=1, tọa độ=(9, 1))
- Mảng hành động đã gửi server: `[3, 2, 3, -20, 2, 2, 3, 1, 1, 0, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 5 |
| 2 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 3 |
| 3 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(4, 2)) | 1 |
| 4-23 | Chờ 20 bước (`-20`) | (4, 2) | (4, 2) | Dự kiến đứng yên tại (4, 2); mục tiêu Spot #6 (thương hiệu=4, tọa độ=(4, 2)) | 40 |
| 24-25 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 39 |
| 26 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 37 |
| 27 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 35 |
| 28-29 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 34 |
| 30 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 32 |
| 31 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 30 |
| 32-33 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 29 |
| 34 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 40 |
| 35 | Chờ 1 bước (`-1`) | (9, 1) | (9, 1) | Dự kiến đứng yên tại (9, 1); mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 40 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 15) (ô=241)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=7, tọa độ=(0, 10))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=7, tọa độ=(0, 10))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 1, 0, 1, 1, 1, 1, 2, 5, 5, 5, 5, 5, 4, 4, 5, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 40 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 40 |
| 3 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 40 |
| 4 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 40 |
| 5 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 40 |
| 6 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 40 |
| 7 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 38 |
| 8 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 9-11 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 34 |
| 12-13 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 33 |
| 14-15 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 32 |
| 16-17 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 31 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 30 |
| 20-21 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 29 |
| 22 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 27 |
| 23 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 25 |
| 24-25 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 24 |
| 26 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 22 |
| 27-28 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(0, 10)) | 21 |
| 29-35 | Chờ 7 bước (`-7`) | (0, 10) | (0, 10) | Dự kiến đứng yên tại (0, 10); mục tiêu Spot #10 (thương hiệu=7, tọa độ=(0, 10)) | 21 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (1, 15) (ô=241)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=1, tọa độ=(9, 1))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=1, tọa độ=(9, 1))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 1, 0, 0, 5, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 2, 3, 2, 2, 2, 1, 2, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 40 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 40 |
| 3 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 40 |
| 4 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 40 |
| 5 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 40 |
| 6 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 40 |
| 7 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 40 |
| 8 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 40 |
| 9 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 40 |
| 10 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 40 |
| 11 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 40 |
| 12-13 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 40 |
| 14-15 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 40 |
| 16 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 40 |
| 17 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 40 |
| 18 | Di chuyển hướng 1 (`1`) | (1, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 40 |
| 19 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 40 |
| 20 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 40 |
| 21 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 40 |
| 22 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(4, 2)) | 40 |
| 23-24 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 40 |
| 25 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 40 |
| 26 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 40 |
| 27 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 40 |
| 28 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 40 |
| 29-35 | Chờ 7 bước (`-7`) | (9, 1) | (9, 1) | Dự kiến đứng yên tại (9, 1); mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 40 |

