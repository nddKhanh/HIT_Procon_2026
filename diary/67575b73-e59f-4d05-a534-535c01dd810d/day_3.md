# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 40
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 15 | #1 | #2 | (7, 3) | 3 | 40 |
| 17 | #1 | #2 | (8, 3) | 39 | 40 |
| 25 | #0 | #2 | (7, 8) | 2 | 40 |
| 27 | #0 | #2 | (8, 8) | 39 | 40 |
| 28 | #0 | #2 | (9, 8) | 38 | 40 |
| 29 | #0 | #2 | (10, 8) | 38 | 40 |
| 31 | #0 | #2 | (11, 8) | 39 | 40 |
| 33 | #0 | #2 | (12, 9) | 39 | 40 |
| 34 | #0 | #2 | (12, 10) | 38 | 40 |
| 35 | #0 | #2 | (13, 11) | 38 | 40 |
| 36 | #0 | #2 | (13, 12) | 38 | 40 |
| 37 | #0 | #2 | (14, 12) | 38 | 40 |
| 40 | #0 | #2 | (14, 12) | 37 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 15) (ô=241)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 12)
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 0, 0, 0, 5, 0, 1, 1, 2, 2, 2, 2, 2, -1, 2, 2, 2, 2, 3, 3, 3, 3, 2, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 25 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 23 |
| 3 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 21 |
| 4 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 19 |
| 5 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 17 |
| 6-7 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 16 |
| 8-9 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 15 |
| 10 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 13 |
| 11-12 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 12 |
| 13-14 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 11 |
| 15 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 9 |
| 16-17 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 8 |
| 18 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 6 |
| 19 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 4 |
| 20-21 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 3 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 2 |
| 24 | Chờ 1 bước (`-1`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 25-26 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 40 |
| 27 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 40 |
| 28 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 40 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 40 |
| 31-32 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 40 |
| 33 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 34 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 40 |
| 35 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 40 |
| 36 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 40 |
| 37 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 38 |
| 38-39 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 40 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 1) (ô=25)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[5, 4, 4, -11, 2, 2, 2, 3, 3, 2, 2, 2, 1, 0, 0, 1, 1, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 7 |
| 2 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 5 |
| 3 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 3 |
| 4-14 | Chờ 11 bước (`-11`) | (7, 3) | (7, 3) | Dự kiến đứng yên tại (7, 3); mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 40 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 40 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 39 |
| 19-20 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 38 |
| 21 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 36 |
| 22 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 34 |
| 23 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 32 |
| 24-25 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 31 |
| 26-27 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 30 |
| 28 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 28 |
| 29-31 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 26 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 25 |
| 34-35 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 24 |
| 36 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 22 |
| 37-38 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 21 |
| 39 | Chờ 1 bước (`-1`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 21 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (2, 10) (ô=162)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 12)
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 1, 1, 1, 1, 2, 3, 3, 4, 4, 4, 2, 2, 2, 2, 3, 3, 3, 3, 2, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 40 |
| 2-3 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 40 |
| 4 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 40 |
| 5 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 40 |
| 6 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 40 |
| 7-8 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 40 |
| 9-11 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 40 |
| 12-14 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 40 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 40 |
| 17-18 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 40 |
| 19-20 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 40 |
| 21-22 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 40 |
| 23 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 40 |
| 24 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 25-26 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 40 |
| 27 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 40 |
| 28 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 40 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 40 |
| 31-32 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 40 |
| 33 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 34 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 40 |
| 35 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 40 |
| 36 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 40 |
| 37-39 | Chờ 3 bước (`-3`) | (14, 12) | (14, 12) | Dự kiến đứng yên tại (14, 12); hướng tới tọa độ (14, 12) | 40 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 14) (ô=233)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=9, tọa độ=(9, 14))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=9, tọa độ=(9, 14))
- Mảng hành động đã gửi server: `[-40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-39 | Chờ 40 bước (`-40`) | (9, 14) | (9, 14) | Dự kiến đứng yên tại (9, 14); mục tiêu Spot #13 (thương hiệu=9, tọa độ=(9, 14)) | 0 |

