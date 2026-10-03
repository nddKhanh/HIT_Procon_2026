# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 33
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #1 | #5 | (12, 10) | 35 | 37 |
| 5 | #1 | #5 | (13, 11) | 36 | 37 |
| 7 | #1 | #5 | (13, 12) | 36 | 37 |
| 19 | #3 | #4 | (11, 7) | 3 | 37 |
| 23 | #2 | #4 | (11, 7) | 2 | 37 |
| 25 | #2 | #4 | (10, 6) | 36 | 37 |
| 28 | #2 | #4 | (10, 5) | 35 | 37 |
| 31 | #1 | #5 | (14, 13) | 18 | 37 |
| 31 | #2 | #4 | (9, 4) | 35 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 12) (ô=200)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 6)
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 4, 5, 0, 5, 0, 1, 5, 0, 1, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 35 |
| 2-3 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 34 |
| 4 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 11)) | 32 |
| 5-6 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 31 |
| 7 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 29 |
| 8 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 27 |
| 9-11 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 11)) | 25 |
| 12-13 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 24 |
| 14-16 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 22 |
| 17-19 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 9)) | 20 |
| 20-21 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 19 |
| 22-24 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 8)) | 17 |
| 25-26 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 16 |
| 27-29 | Di chuyển hướng 2 (`2`) | (1, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 14 |
| 30 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 12 |
| 31-32 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 11 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 9) (ô=156)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(15, 13))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(15, 13))
- Mảng hành động đã gửi server: `[3, 3, 3, 5, 5, 4, 5, 5, 5, 2, 2, 2, 1, 2, 2, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 37 |
| 3-4 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 37 |
| 5-6 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 37 |
| 7 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 35 |
| 8-9 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 34 |
| 10-11 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 33 |
| 12-14 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 31 |
| 15-16 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 30 |
| 17 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 13)) | 28 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 27 |
| 20 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 25 |
| 21-22 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 24 |
| 23-25 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 22 |
| 26-27 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 21 |
| 28-29 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 20 |
| 30 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 37 |
| 31-32 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 13)) | 36 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 1) (ô=29)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(8, 4))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(8, 4))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 5, 5, 5, 4, 0, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 15 |
| 2-4 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 13 |
| 5-7 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 11 |
| 8-10 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 5)) | 9 |
| 11-12 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 8 |
| 13-15 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 6 |
| 16-17 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 5 |
| 18-20 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 3 |
| 21-22 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 37 |
| 23-24 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 37 |
| 25-27 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 37 |
| 28-30 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 31 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 35 |
| 32 | Chờ 1 bước (`-1`) | (8, 4) | (8, 4) | Dự kiến đứng yên tại (8, 4); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 35 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 5) (ô=90)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 6)
- Mảng hành động đã gửi server: `[0, 5, 2, 1, 1, 3, 3, 3, 4, 4, -1, 2, 2, 2, 1, 1, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 16 |
| 3 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 14 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 13 |
| 6 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 11 |
| 7-8 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 10 |
| 9-10 | Di chuyển hướng 3 (`3`) | (10, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 9 |
| 11 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 7 |
| 12-14 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 5)) | 5 |
| 15-16 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 4 |
| 17-18 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 37 |
| 19 | Chờ 1 bước (`-1`) | (11, 7) | (11, 7) | Dự kiến đứng yên tại (11, 7); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 37 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 36 |
| 22 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 34 |
| 23-25 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 32 |
| 26 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 30 |
| 27-29 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 5)) | 28 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 27 |
| 32 | Chờ 1 bước (`-1`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); hướng tới tọa độ (14, 6) | 27 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (7, 12) (ô=199)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 4)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 2, -7, 0, 0, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 37 |
| 2-4 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 37 |
| 5-7 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 37 |
| 8-9 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 37 |
| 10-12 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 37 |
| 13-15 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 37 |
| 16-22 | Chờ 7 bước (`-7`) | (11, 7) | (11, 7) | Dự kiến đứng yên tại (11, 7); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 37 |
| 23-24 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 37 |
| 25-27 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 37 |
| 28-30 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 31-32 | Chờ 2 bước (`-2`) | (9, 4) | (9, 4) | Dự kiến đứng yên tại (9, 4); hướng tới tọa độ (9, 4) | 37 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (12, 9) (ô=156)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 13)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 37 |
| 3-4 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 37 |
| 5-6 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 37 |
| 7 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 37 |
| 8-32 | Chờ 25 bước (`-25`) | (14, 13) | (14, 13) | Dự kiến đứng yên tại (14, 13); hướng tới tọa độ (14, 13) | 37 |

