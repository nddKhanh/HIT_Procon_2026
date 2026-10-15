# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 40
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 1 | #1 | #2 | (14, 15) | 37 | 40 |
| 3 | #1 | #2 | (13, 15) | 39 | 40 |
| 4 | #1 | #2 | (12, 14) | 38 | 40 |
| 5 | #1 | #2 | (11, 14) | 38 | 40 |
| 6 | #1 | #2 | (11, 13) | 38 | 40 |
| 7 | #1 | #2 | (10, 12) | 38 | 40 |
| 8 | #1 | #2 | (10, 11) | 38 | 40 |
| 18 | #0 | #2 | (13, 5) | 1 | 40 |
| 20 | #0 | #2 | (12, 5) | 39 | 40 |
| 31 | #0 | #2 | (12, 1) | 27 | 40 |
| 40 | #0 | #2 | (12, 1) | 28 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 12) (ô=207)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 1)
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 0, 1, 0, 1, 5, 5, 0, 0, 0, 0, 2, 2, 2, 2, 2, 1, 3, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 14 |
| 2-4 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 12 |
| 5-7 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 10 |
| 8-10 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 8 |
| 11-13 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 6 |
| 14 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 4 |
| 15-16 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 3 |
| 17 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 40 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 40 |
| 20-21 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 39 |
| 22 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 37 |
| 23 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 35 |
| 24 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 33 |
| 25 | Di chuyển hướng 0 (`0`) | (9, 2) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 31 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 30 |
| 28-29 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 29 |
| 30 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 40 |
| 31 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 38 |
| 32 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 36 |
| 33 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 34 |
| 34-35 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 33 |
| 36-37 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 32 |
| 38 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 30 |
| 39 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 40 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 15) (ô=253)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=7, tọa độ=(1, 10))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=7, tọa độ=(1, 10))
- Mảng hành động đã gửi server: `[2, 5, 0, 5, 0, 0, 0, 5, 0, 0, 0, 5, 5, 5, 5, 5, 4, 4, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(14, 15)) | 40 |
| 1-2 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 40 |
| 3 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 40 |
| 4 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 40 |
| 5 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 40 |
| 6 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 40 |
| 7 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 40 |
| 8 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 38 |
| 9-11 | Di chuyển hướng 0 (`0`) | (9, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 36 |
| 12-13 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 35 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 34 |
| 16-17 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 33 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 32 |
| 20-21 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 31 |
| 22 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 29 |
| 23 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 27 |
| 24-25 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 26 |
| 26 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 24 |
| 27-39 | Chờ 13 bước (`-13`) | (1, 10) | (1, 10) | Dự kiến đứng yên tại (1, 10); mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 24 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (14, 15) (ô=254)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 1)
- Mảng hành động đã gửi server: `[-1, 5, 0, 5, 0, 0, 0, 1, 0, 0, 1, 1, 2, 2, 1, 5, 5, 0, 0, 0, 1, 2, 2, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Chờ 1 bước (`-1`) | (14, 15) | (14, 15) | Dự kiến đứng yên tại (14, 15); mục tiêu Spot #15 (thương hiệu=11, tọa độ=(14, 15)) | 40 |
| 1-2 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 40 |
| 3 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 40 |
| 4 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 40 |
| 5 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 40 |
| 6 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 40 |
| 7 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 40 |
| 8 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 40 |
| 9 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 40 |
| 10 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 40 |
| 11 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 40 |
| 12-13 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 40 |
| 14 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 40 |
| 15 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 40 |
| 16 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 40 |
| 17-18 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 40 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 40 |
| 21 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 40 |
| 22 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 40 |
| 23 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 40 |
| 24 | Di chuyển hướng 1 (`1`) | (9, 2) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 40 |
| 25-26 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 40 |
| 27 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 40 |
| 28-39 | Chờ 12 bước (`-12`) | (12, 1) | (12, 1) | Dự kiến đứng yên tại (12, 1); hướng tới tọa độ (12, 1) | 40 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 14) (ô=233)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=9, tọa độ=(9, 14))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=9, tọa độ=(9, 14))
- Mảng hành động đã gửi server: `[-40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-39 | Chờ 40 bước (`-40`) | (9, 14) | (9, 14) | Dự kiến đứng yên tại (9, 14); mục tiêu Spot #13 (thương hiệu=9, tọa độ=(9, 14)) | 12 |

