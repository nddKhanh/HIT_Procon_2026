# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 42
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 4) (ô=79)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(10, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(10, 10))
- Mảng hành động đã gửi server: `[4, 4, 2, 1, 2, 2, 3, 2, 3, 3, 3, 3, 2, 2, 1, 2, 1, 4, 3, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 38 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 37 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 36 |
| 6-7 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 35 |
| 8-9 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 34 |
| 10 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 32 |
| 11-12 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 31 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 30 |
| 15-16 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 29 |
| 17-18 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 28 |
| 19-20 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 43 |
| 21-22 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 42 |
| 23-24 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 25-26 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 42 |
| 27-28 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 40 |
| 29 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 38 |
| 30-31 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 8)) | 37 |
| 32-33 | Di chuyển hướng 4 (`4`) | (13, 8) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 36 |
| 34-35 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 35 |
| 36-37 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 34 |
| 38-39 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 33 |
| 40-41 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 31 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 10) (ô=203)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 14)
- Mảng hành động đã gửi server: `[5, 5, 4, 3, 4, 3, 4, 5, 5, 5, 0, 5, 5, 5, -1, 3, 2, 3, 1, 1, 1, 3, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 24 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 23 |
| 4-5 | Di chuyển hướng 4 (`4`) | (11, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 21 |
| 6-7 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 19 |
| 8-9 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 10-11 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 41 |
| 12-13 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 39 |
| 14-15 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 37 |
| 16-17 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 35 |
| 18-19 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 33 |
| 20-21 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 31 |
| 22 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 14)) | 29 |
| 23-24 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 28 |
| 25-26 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 14)) | 26 |
| 27 | Chờ 1 bước (`-1`) | (4, 14) | (4, 14) | Dự kiến đứng yên tại (4, 14); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 14)) | 26 |
| 28-29 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 25 |
| 30-31 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 24 |
| 32 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 16)) | 22 |
| 33-34 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 21 |
| 35-36 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 19 |
| 37 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(8, 13)) | 17 |
| 38-39 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 16 |
| 40 | Chờ 1 bước (`-1`) | (8, 14) | (8, 14) | Dự kiến đứng yên tại (8, 14); hướng tới tọa độ (8, 14) | 43 |
| 41 | Chờ 1 bước (`-1`) | (8, 14) | (8, 14) | Dự kiến đứng yên tại (8, 14); hướng tới tọa độ (8, 14) | 43 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 9) (ô=184)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 8)
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 5, 5, 3, 3, 5, 5, 3, 2, 2, 2, -1, 2, 2, 2, 0, 1, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 17 |
| 2 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 15 |
| 3-4 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 13 |
| 5-6 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 12 |
| 7 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 10 |
| 8-9 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 9 |
| 10-11 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 8 |
| 12-13 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 7 |
| 14-15 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 6 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 5 |
| 18-19 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 4 |
| 20 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 2 |
| 21-22 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 1 |
| 23-24 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 25 | Chờ 1 bước (`-1`) | (10, 10) | (10, 10) | Dự kiến đứng yên tại (10, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 26-27 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 42 |
| 28-29 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 30-31 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 39 |
| 32-33 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 38 |
| 34-35 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 8)) | 37 |
| 36-37 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 36 |
| 38 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 34 |
| 39-40 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 32 |
| 41 | Chờ 1 bước (`-1`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); hướng tới tọa độ (10, 8) | 32 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 2) (ô=44)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(11, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(11, 1))
- Mảng hành động đã gửi server: `[5, 5, 3, 3, 3, 3, 2, 3, 3, 3, 5, 5, 1, 1, 1, 1, 1, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 42 |
| 2-4 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 40 |
| 5-6 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 39 |
| 7-8 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 37 |
| 9-12 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 35 |
| 13-14 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 34 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 33 |
| 17-18 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 32 |
| 19-20 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 31 |
| 21-22 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 42 |
| 23-24 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 41 |
| 25-26 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 40 |
| 27-28 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 39 |
| 29-30 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 37 |
| 31-32 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 36 |
| 33-34 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 35 |
| 35-36 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 34 |
| 37 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 32 |
| 38 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 30 |
| 39-40 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 29 |
| 41 | Chờ 1 bước (`-1`) | (11, 1) | (11, 1) | Dự kiến đứng yên tại (11, 1); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 29 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=293)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 4))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 4))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 0, 1, 0, 0, 5, 0, 0, 0, 0, 5, 0, 5, 5, 4, 5, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 2-3 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 4-5 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 6-7 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 8-9 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 10-11 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 43 |
| 12-13 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 43 |
| 14-15 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 16-17 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 43 |
| 18-19 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 43 |
| 20-21 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 43 |
| 22-23 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 43 |
| 24-25 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 42 |
| 26-27 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 43 |
| 28-29 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 42 |
| 30-31 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 41 |
| 32 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 39 |
| 33-34 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 43 |
| 35-36 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 42 |
| 37-38 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 41 |
| 39-40 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 40 |
| 41 | Chờ 1 bước (`-1`) | (3, 4) | (3, 4) | Dự kiến đứng yên tại (3, 4); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 40 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (11, 0) (ô=11)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 6)
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 5, 0, 5, 5, 4, 4, 4, 4, 2, -5, 1, 2, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 21 |
| 2-3 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 20 |
| 4-5 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 19 |
| 6 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 17 |
| 7 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 15 |
| 8-9 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 13 |
| 10-11 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 11 |
| 12-13 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 10 |
| 14-16 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 8 |
| 17-18 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 7 |
| 19-22 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 5 |
| 23-24 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 4 |
| 25-26 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 3 |
| 27-28 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 2 |
| 29-33 | Chờ 5 bước (`-5`) | (3, 6) | (3, 6) | Dự kiến đứng yên tại (3, 6); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 43 |
| 34-35 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 42 |
| 36-37 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 41 |
| 38 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 39 |
| 39-40 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 43 |
| 41 | Chờ 1 bước (`-1`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); hướng tới tọa độ (6, 6) | 43 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (8, 15) (ô=293)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 6)
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 0, 1, 0, 0, 5, 0, 0, 0, 5, 0, 5, 5, 5, 2, 2, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 2-3 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 4-5 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 6-7 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 8-9 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 10-11 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 43 |
| 12-13 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 43 |
| 14-15 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 16-17 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 43 |
| 18-19 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 43 |
| 20-21 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 43 |
| 22-23 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 43 |
| 24-25 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 43 |
| 26-27 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 43 |
| 28-29 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 43 |
| 30-31 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 43 |
| 32-33 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 43 |
| 34-35 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 43 |
| 36-37 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 43 |
| 38-39 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 43 |
| 40-41 | Chờ 2 bước (`-2`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); hướng tới tọa độ (6, 6) | 43 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (6, 2) (ô=44)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 14)
- Mảng hành động đã gửi server: `[3, 2, 2, 3, 3, 4, 3, 3, 3, 4, -10, 3, 3, 4, 3, 4, 5, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 43 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 43 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 43 |
| 6 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 43 |
| 7 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 43 |
| 8 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 43 |
| 9 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 43 |
| 10 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 43 |
| 11-12 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 43 |
| 13-14 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 15-24 | Chờ 10 bước (`-10`) | (10, 10) | (10, 10) | Dự kiến đứng yên tại (10, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 25-26 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 43 |
| 27-28 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 43 |
| 29-30 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 31-32 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 33-34 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 35-36 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 37-38 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 39-40 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 43 |
| 41 | Chờ 1 bước (`-1`) | (8, 14) | (8, 14) | Dự kiến đứng yên tại (8, 14); hướng tới tọa độ (8, 14) | 43 |

