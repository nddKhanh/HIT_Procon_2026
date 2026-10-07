# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 40
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 11 | #2 | #0 | (7, 8) | 6 | 40 |
| 14 | #2 | #0 | (6, 8) | 39 | 40 |
| 16 | #2 | #0 | (5, 8) | 39 | 40 |
| 20 | #2 | #0 | (2, 8) | 35 | 40 |
| 22 | #3 | #0 | (1, 10) | 0 | 40 |
| 36 | #2 | #0 | (5, 3) | 20 | 40 |
| 39 | #2 | #0 | (6, 2) | 37 | 40 |

### Xe #0 - Tiếp tế

- Vị trí đầu ngày: (14, 12) (ô=206)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 2)
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 0, 0, 0, 1, 2, 1, 2, 1, 2, 1, 1, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 40 |
| 1 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 40 |
| 2 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 3 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 40 |
| 4 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 40 |
| 5-6 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 40 |
| 7-8 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 40 |
| 9 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 40 |
| 10 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 11-12 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 40 |
| 13-14 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 40 |
| 15-16 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 40 |
| 17 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 40 |
| 18 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 40 |
| 19-20 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 40 |
| 21 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 40 |
| 22-23 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 40 |
| 24 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 40 |
| 25 | Di chuyển hướng 0 (`0`) | (0, 8) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 40 |
| 26 | Di chuyển hướng 1 (`1`) | (0, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 40 |
| 27 | Di chuyển hướng 2 (`2`) | (0, 6) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 40 |
| 28 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 40 |
| 29 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 40 |
| 30 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 40 |
| 31-32 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 40 |
| 33-34 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 40 |
| 35-36 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 40 |
| 37 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 40 |
| 38-39 | Chờ 2 bước (`-2`) | (6, 2) | (6, 2) | Dự kiến đứng yên tại (6, 2); hướng tới tọa độ (6, 2) | 40 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 12) (ô=207)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=3, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 0, 1, 1, 1, 0, 5, 5, 0, 0, 0, 0, 2, 2, 2, 2, 2, 1, 3, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 37 |
| 2 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 35 |
| 3 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 33 |
| 4 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 31 |
| 5 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 29 |
| 6 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 27 |
| 7 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 25 |
| 8-9 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 24 |
| 10 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 22 |
| 11-12 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 21 |
| 13-14 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 20 |
| 15 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 18 |
| 16 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 16 |
| 17 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 14 |
| 18 | Di chuyển hướng 0 (`0`) | (9, 2) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 12 |
| 19-20 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 11 |
| 21-22 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 10 |
| 23 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 8 |
| 24 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 6 |
| 25 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 4 |
| 26 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 2 |
| 27-28 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 1 |
| 29-39 | Chờ 11 bước (`-11`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 13) (ô=219)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=4, tọa độ=(7, 3))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=4, tọa độ=(7, 3))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 0, 0, -2, 5, 5, 5, 5, 5, 0, 0, 1, 0, 1, 1, 1, 0, 3, 2, 3, 3, 1, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 14 |
| 1 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 12 |
| 2 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 10 |
| 3-5 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 8 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 7 |
| 8-9 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 6 |
| 10-11 | Chờ 2 bước (`-2`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 12-13 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 40 |
| 14-15 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 40 |
| 16-17 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 39 |
| 18 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 37 |
| 19 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 40 |
| 20-21 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 39 |
| 22-23 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 38 |
| 24 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 36 |
| 25 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 34 |
| 26 | Di chuyển hướng 1 (`1`) | (1, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 32 |
| 27 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 30 |
| 28 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 28 |
| 29 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 26 |
| 30-31 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 25 |
| 32 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 23 |
| 33 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(4, 2)) | 21 |
| 34-35 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 40 |
| 36-37 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 39 |
| 38 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 40 |
| 39 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 38 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 10) (ô=160)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 15)
- Mảng hành động đã gửi server: `[2, -20, 1, 1, 4, 3, 3, 3, 3, 3, 4, 5, 5, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 0 |
| 2-21 | Chờ 20 bước (`-20`) | (1, 10) | (1, 10) | Dự kiến đứng yên tại (1, 10); mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 40 |
| 22-23 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 39 |
| 24 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 37 |
| 25-26 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 36 |
| 27 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 34 |
| 28 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 32 |
| 29 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 30 |
| 30-31 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 29 |
| 32-33 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 28 |
| 34 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 26 |
| 35 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 24 |
| 36 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 22 |
| 37 | Di chuyển hướng 5 (`5`) | (2, 15) | (1, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 15)) | 20 |
| 38-39 | Di chuyển hướng 2 (`2`) | (1, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 19 |

