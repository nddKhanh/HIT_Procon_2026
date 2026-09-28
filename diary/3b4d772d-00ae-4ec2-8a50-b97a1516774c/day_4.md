# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 40
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 16 | #6 | #7 | (8, 14) | 4 | 37 |
| 33 | #1 | #7 | (13, 6) | 1 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (6, 7) (ô=118)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(12, 3))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(12, 3))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 2, 3, 3, 3, 2, 2, 0, 0, 0, 1, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 35 |
| 2-3 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 33 |
| 4-6 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 31 |
| 7-8 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 30 |
| 9-11 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 28 |
| 12-13 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 27 |
| 14-16 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 25 |
| 17-19 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 23 |
| 20-22 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 21 |
| 23-24 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 20 |
| 25-27 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 18 |
| 28-29 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 17 |
| 30-31 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 16 |
| 32-34 | Di chuyển hướng 0 (`0`) | (12, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 14 |
| 35-36 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 13 |
| 37-38 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 12 |
| 39 | Chờ 1 bước (`-1`) | (12, 3) | (12, 3) | Dự kiến đứng yên tại (12, 3); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 12 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 5) (ô=95)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 6)
- Mảng hành động đã gửi server: `[5, 4, -29, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 2 |
| 2-3 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 1 |
| 4-32 | Chờ 29 bước (`-29`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 37 |
| 33-34 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 36 |
| 35-37 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 34 |
| 38-39 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 33 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 3) (ô=57)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(11, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(11, 6))
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 4, 3, 3, 3, 1, 2, 5, 5, 5, 4, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 16 |
| 2-4 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 14 |
| 5-6 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 13 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 12 |
| 9-10 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 11 |
| 11-12 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 10 |
| 13-15 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 8 |
| 16-17 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 7 |
| 18-19 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 6 |
| 20-21 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 5 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 4 |
| 24-25 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 3 |
| 26-27 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 2 |
| 28-30 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 0 |
| 31-39 | Chờ 9 bước (`-9`) | (11, 6) | (11, 6) | Dự kiến đứng yên tại (11, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 11) (ô=181)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(0, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(0, 2))
- Mảng hành động đã gửi server: `[2, 1, 1, 0, 0, 5, 4, 4, 0, 0, 0, 0, 0, 0, 0, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 25 |
| 3-4 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 24 |
| 5-7 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 22 |
| 8-9 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 21 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 20 |
| 12-13 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 19 |
| 14-15 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 18 |
| 16-18 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 16 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 15 |
| 21-22 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 14 |
| 23-24 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 13 |
| 25-27 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 11 |
| 28-29 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 10 |
| 30-32 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 8 |
| 33 | Di chuyển hướng 0 (`0`) | (1, 3) | (0, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 2)) | 6 |
| 34-39 | Chờ 6 bước (`-6`) | (0, 2) | (0, 2) | Dự kiến đứng yên tại (0, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 2)) | 6 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 5) (ô=95)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(15, 5))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(15, 5))
- Mảng hành động đã gửi server: `[-40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-39 | Chờ 40 bước (`-40`) | (15, 5) | (15, 5) | Dự kiến đứng yên tại (15, 5); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=197)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(14, 0))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(14, 0))
- Mảng hành động đã gửi server: `[1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 0, 0, 2, 2, 2, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 28 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 27 |
| 4-5 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 25 |
| 6 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 23 |
| 7-8 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 21 |
| 9-10 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 20 |
| 11-12 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 19 |
| 13-14 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 18 |
| 15-17 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 16 |
| 18-20 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 14 |
| 21-22 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 12 |
| 23-24 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 11 |
| 25-26 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 10 |
| 27-29 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 0)) | 8 |
| 30-31 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 7 |
| 32-33 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 6 |
| 34-36 | Di chuyển hướng 2 (`2`) | (13, 0) | (14, 0) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 0)) | 4 |
| 37-39 | Chờ 3 bước (`-3`) | (14, 0) | (14, 0) | Dự kiến đứng yên tại (14, 0); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 0)) | 4 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (10, 15) (ô=250)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 8)
- Mảng hành động đã gửi server: `[5, 5, 5, 2, 1, -7, 0, 0, 0, 1, 0, 0, 0, 5, 4, 4, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 8 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 7 |
| 4-5 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 15)) | 6 |
| 6-7 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 5 |
| 8-9 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 4 |
| 10-16 | Chờ 7 bước (`-7`) | (8, 14) | (8, 14) | Dự kiến đứng yên tại (8, 14); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 37 |
| 17-18 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 36 |
| 19-20 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 35 |
| 21-23 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 33 |
| 24-25 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 31 |
| 26 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 29 |
| 27-28 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 28 |
| 29-30 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 27 |
| 31-32 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 26 |
| 33-34 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 25 |
| 35-37 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 23 |
| 38-39 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 22 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (5, 7) (ô=117)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(13, 6))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(13, 6))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 4, 3, 3, 3, 1, 1, 1, 1, 1, 1, 2, 1, 1, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 37 |
| 2-3 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 37 |
| 4-5 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |
| 6-7 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 37 |
| 8 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 37 |
| 9-10 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 37 |
| 11-13 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 37 |
| 14-15 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 37 |
| 16-17 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 37 |
| 18 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 37 |
| 19-20 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 37 |
| 21-22 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 37 |
| 23-25 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 37 |
| 26 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 37 |
| 27 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 37 |
| 28-29 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 37 |
| 30-32 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 37 |
| 33-39 | Chờ 7 bước (`-7`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 37 |

