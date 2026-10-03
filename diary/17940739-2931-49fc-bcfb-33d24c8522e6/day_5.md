# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 39
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #0 | #5 | (10, 2) | 27 | 37 |
| 14 | #3 | #4 | (10, 13) | 3 | 37 |
| 18 | #3 | #4 | (8, 12) | 34 | 37 |
| 20 | #3 | #4 | (7, 12) | 36 | 37 |
| 22 | #3 | #4 | (6, 12) | 36 | 37 |
| 27 | #2 | #5 | (10, 2) | 2 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 7) (ô=119)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 7)
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 1, 2, 0, 2, 1, 2, 3, 4, 4, 4, 4, 4, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 36 |
| 2 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 34 |
| 3-4 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 33 |
| 5-6 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 32 |
| 7-8 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 30 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 29 |
| 11 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 37 |
| 12-13 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 36 |
| 14-15 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 35 |
| 16-18 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 1)) | 33 |
| 19-20 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 32 |
| 21-23 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 30 |
| 24-26 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 28 |
| 27-28 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 5)) | 27 |
| 29-30 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 26 |
| 31-32 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 25 |
| 33-34 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 24 |
| 35 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 22 |
| 36-38 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 20 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 5) (ô=91)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(15, 13))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(15, 13))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 4, 5, 5, 5, 3, 3, 4, 3, 3, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 5)) | 35 |
| 3-4 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 34 |
| 5-6 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 33 |
| 7-9 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 31 |
| 10-12 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 5)) | 29 |
| 13-14 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 28 |
| 15-17 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 26 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 25 |
| 20-22 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 23 |
| 23-24 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 22 |
| 25 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 20 |
| 26-28 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 18 |
| 29-31 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 16 |
| 32-33 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 15 |
| 34-35 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 14 |
| 36 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 12 |
| 37-38 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 13)) | 11 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 9) (ô=144)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(11, 7))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(11, 7))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 1, 1, -1, 3, 3, 3, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 8)) | 22 |
| 1-2 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 21 |
| 3-5 | Di chuyển hướng 2 (`2`) | (1, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 19 |
| 6 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 17 |
| 7-8 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 16 |
| 9-11 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 14 |
| 12 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 12 |
| 13-14 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 11 |
| 15 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 9 |
| 16-18 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 7 |
| 19-20 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 6 |
| 21-22 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 5 |
| 23-24 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 3 |
| 25-26 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 37 |
| 27 | Chờ 1 bước (`-1`) | (10, 2) | (10, 2) | Dự kiến đứng yên tại (10, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 37 |
| 28-29 | Di chuyển hướng 3 (`3`) | (10, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 36 |
| 30 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 34 |
| 31-33 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 5)) | 32 |
| 34-35 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 31 |
| 36-37 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 30 |
| 38 | Chờ 1 bước (`-1`) | (11, 7) | (11, 7) | Dự kiến đứng yên tại (11, 7); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 30 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 11) (ô=181)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(2, 9))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(2, 9))
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 4, 2, 2, -4, 5, 0, 5, 5, 5, 5, 5, 0, 5, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 11)) | 11 |
| 1-2 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 10 |
| 3 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 8 |
| 4-5 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 7 |
| 6-7 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 13)) | 6 |
| 8-9 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 5 |
| 10 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 3 |
| 11-14 | Chờ 4 bước (`-4`) | (10, 13) | (10, 13) | Dự kiến đứng yên tại (10, 13); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 37 |
| 15-16 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 36 |
| 17 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 37 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 37 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 37 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 36 |
| 24-26 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 34 |
| 27 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 32 |
| 28-30 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 11)) | 30 |
| 31-32 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 29 |
| 33-35 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 27 |
| 36-38 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 9)) | 25 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (7, 7) (ô=119)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 12)
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 3, 2, 5, 0, 5, 5, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 37 |
| 2 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 37 |
| 3-4 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 37 |
| 5-7 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 37 |
| 8-10 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 37 |
| 11-12 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 37 |
| 13 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 37 |
| 14-15 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 37 |
| 16 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 37 |
| 17-18 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 37 |
| 19-20 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 37 |
| 21-38 | Chờ 18 bước (`-18`) | (6, 12) | (6, 12) | Dự kiến đứng yên tại (6, 12); hướng tới tọa độ (6, 12) | 37 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (11, 5) (ô=91)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(10, 2))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(10, 2))
- Mảng hành động đã gửi server: `[0, 1, 0, 3, 0, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 37 |
| 3-5 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 37 |
| 6 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 37 |
| 7-8 | Di chuyển hướng 3 (`3`) | (10, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 37 |
| 9 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 37 |
| 10-38 | Chờ 29 bước (`-29`) | (10, 2) | (10, 2) | Dự kiến đứng yên tại (10, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 37 |

