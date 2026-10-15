# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 48
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #3 | #2 | (2, 15) | 39 | 40 |
| 3 | #3 | #2 | (3, 15) | 38 | 40 |
| 4 | #3 | #2 | (4, 15) | 38 | 40 |
| 28 | #0 | #2 | (15, 12) | 8 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 12) (ô=207)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 14)
- Mảng hành động đã gửi server: `[-28, 5, 5, 0, 0, 5, 4, 4, 3, 3, 2, 3, 2, 5, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-27 | Chờ 28 bước (`-28`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 40 |
| 28-29 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 39 |
| 30 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 37 |
| 31 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 35 |
| 32 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 33 |
| 33 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 31 |
| 34-36 | Di chuyển hướng 4 (`4`) | (11, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 29 |
| 37-38 | Di chuyển hướng 4 (`4`) | (11, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 28 |
| 39 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 26 |
| 40 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 24 |
| 41 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 22 |
| 42 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 20 |
| 43 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(14, 15)) | 18 |
| 44-45 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 17 |
| 46 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 15 |
| 47 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 13 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 0) (ô=7)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[3, 4, 4, 2, 2, 2, 3, 3, 2, 2, 2, 1, 0, 0, 1, 1, 3, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 26 |
| 2 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 24 |
| 3 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 22 |
| 4-5 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 21 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 20 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 19 |
| 10 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 17 |
| 11 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 15 |
| 12 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 13 |
| 13-14 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 12 |
| 15-16 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 11 |
| 17 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 9 |
| 18-20 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 7 |
| 21-22 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 6 |
| 23-24 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 5 |
| 25 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 3 |
| 26-27 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 2 |
| 28-47 | Chờ 20 bước (`-20`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 2 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (1, 15) (ô=241)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=8, tọa độ=(15, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=8, tọa độ=(15, 12))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 1, 1, 2, 2, 3, 3, 2, 2, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 40 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 40 |
| 3 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 40 |
| 4 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 40 |
| 5 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 40 |
| 6 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 40 |
| 7-8 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 40 |
| 9-11 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 40 |
| 12-13 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 40 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 40 |
| 16-18 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 40 |
| 19 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 40 |
| 20 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 40 |
| 21-23 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 24 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 40 |
| 25 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 40 |
| 26 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 40 |
| 27 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 40 |
| 28-47 | Chờ 20 bước (`-20`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 40 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 15) (ô=241)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=7, tọa độ=(0, 10))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=7, tọa độ=(0, 10))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 1, 4, 5, 5, 0, 0, 1, 2, 1, 1, 0, 0, 5, 5, 5, 5, 5, 4, 4, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 40 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 40 |
| 3 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 40 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 38 |
| 5 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 36 |
| 6 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 34 |
| 7 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 32 |
| 8 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 30 |
| 9-10 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(9, 14)) | 29 |
| 11-12 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 28 |
| 13-14 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 27 |
| 15 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 25 |
| 16 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 23 |
| 17-19 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 21 |
| 20-21 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 20 |
| 22-24 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 18 |
| 25-26 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 17 |
| 27-28 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 16 |
| 29-30 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 15 |
| 31-32 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 14 |
| 33-34 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 13 |
| 35-36 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 12 |
| 37-38 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 11 |
| 39 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 9 |
| 40 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 7 |
| 41-42 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 6 |
| 43 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 4 |
| 44-45 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(0, 10)) | 3 |
| 46-47 | Chờ 2 bước (`-2`) | (0, 10) | (0, 10) | Dự kiến đứng yên tại (0, 10); mục tiêu Spot #10 (thương hiệu=7, tọa độ=(0, 10)) | 3 |

