# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 39
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 10) (ô=203)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 3)
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 5, 5, 5, 0, 5, 5, 5, 5, 5, 1, 1, 1, 1, 3, 3, 3, 0, 1, 1, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 42 |
| 2-3 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 41 |
| 4 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 39 |
| 5 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 37 |
| 6 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 35 |
| 7 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 33 |
| 8-9 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 32 |
| 10-11 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 31 |
| 12-13 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 30 |
| 14-15 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 29 |
| 16 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 27 |
| 17 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 25 |
| 18-19 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 24 |
| 20-21 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 23 |
| 22-23 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 22 |
| 24-25 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 21 |
| 26-27 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 19 |
| 28-29 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 18 |
| 30 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 16 |
| 31 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 14 |
| 32-33 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 13 |
| 34 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 11 |
| 35 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |
| 36-37 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 42 |
| 38 | Chờ 1 bước (`-1`) | (7, 3) | (7, 3) | Dự kiến đứng yên tại (7, 3); hướng tới tọa độ (7, 3) | 42 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 10) (ô=201)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 4))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 4))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 1, 0, 0, 1, 1, 4, 4, 5, 4, 5, 5, 4, 0, 1, 1, 5, 5, 4, 4, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 39 |
| 2 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 37 |
| 3 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 35 |
| 4 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 33 |
| 5 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 31 |
| 6 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 29 |
| 7 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 27 |
| 8 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 25 |
| 9-10 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 24 |
| 11-12 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 23 |
| 13-14 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 22 |
| 15 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 20 |
| 16 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 18 |
| 17 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 16 |
| 18 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 14 |
| 19 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 12 |
| 20-21 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 11 |
| 22 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 9 |
| 23 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 7 |
| 24-25 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 6 |
| 26-28 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 4 |
| 29-30 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 3 |
| 31-32 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 33-38 | Chờ 6 bước (`-6`) | (3, 4) | (3, 4) | Dự kiến đứng yên tại (3, 4); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 14) (ô=274)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Mảng hành động đã gửi server: `[3, 2, 2, 1, 0, 1, 0, 0, 5, 0, 0, 0, 0, 5, 0, 5, 4, 5, 5, 1, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 3 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 4 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 5 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 6 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 7 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 43 |
| 8 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 43 |
| 9 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 10-11 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 42 |
| 12-13 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 41 |
| 14-15 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 40 |
| 16-17 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 39 |
| 18-19 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 38 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 37 |
| 22-23 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 36 |
| 24-25 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 35 |
| 26 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 33 |
| 27 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 31 |
| 28-29 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 30 |
| 30-31 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 29 |
| 32-33 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 34-35 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 43 |
| 36-37 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |
| 38 | Chờ 1 bước (`-1`) | (4, 2) | (4, 2) | Dự kiến đứng yên tại (4, 2); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 1) (ô=30)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 8)
- Mảng hành động đã gửi server: `[1, 3, 3, 4, 3, 3, 4, 3, 3, 4, -1, 5, 5, 5, 5, 0, 0, 4, 4, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 11 |
| 2-3 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 10 |
| 4-5 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 9 |
| 6-7 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 8 |
| 8-9 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 7 |
| 10-11 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 6 |
| 12-13 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 5 |
| 14-16 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 3 |
| 17-19 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 8)) | 1 |
| 20-21 | Di chuyển hướng 4 (`4`) | (13, 8) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 43 |
| 22 | Chờ 1 bước (`-1`) | (13, 9) | (13, 9) | Dự kiến đứng yên tại (13, 9); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 43 |
| 23-24 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 42 |
| 25 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 40 |
| 26 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 38 |
| 27-29 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 36 |
| 30-31 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 35 |
| 32-33 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 34 |
| 34-35 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 33 |
| 36 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 31 |
| 37-38 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 30 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 8) (ô=163)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(8, 13))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(8, 13))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 3, 3, 3, 2, -1, 3, 3, 4, 3, 4, 5, 5, 5, 0, 5, 5, 5, 2, 3, 3, 1, 1, 1, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 9 |
| 1 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 7 |
| 2 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 5 |
| 3-4 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 4 |
| 5-6 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 3 |
| 7-8 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 2 |
| 9-10 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 1 |
| 11-12 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 13 | Chờ 1 bước (`-1`) | (10, 10) | (10, 10) | Dự kiến đứng yên tại (10, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 14-15 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 42 |
| 16 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 40 |
| 17 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 38 |
| 18 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 36 |
| 19 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 34 |
| 20 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 32 |
| 21 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 30 |
| 22 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 28 |
| 23 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 26 |
| 24 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 14)) | 24 |
| 25-26 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 23 |
| 27 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 14)) | 21 |
| 28-29 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 20 |
| 30 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 18 |
| 31 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 16)) | 16 |
| 32-33 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 15 |
| 34 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 13 |
| 35 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(8, 13)) | 11 |
| 36-38 | Chờ 3 bước (`-3`) | (8, 13) | (8, 13) | Dự kiến đứng yên tại (8, 13); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(8, 13)) | 11 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=178)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(6, 2))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(6, 2))
- Mảng hành động đã gửi server: `[1, 0, 0, 5, 5, 5, 5, 1, 1, -11, 1, 1, 3, 3, 3, 0, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 11 |
| 2 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 9 |
| 3-4 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 8 |
| 5-6 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 7 |
| 7 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 5 |
| 8 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 3 |
| 9-10 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 2 |
| 11-12 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 1 |
| 13-14 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 0 |
| 15-25 | Chờ 11 bước (`-11`) | (3, 4) | (3, 4) | Dự kiến đứng yên tại (3, 4); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 26-27 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 42 |
| 28-29 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 40 |
| 30-31 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 39 |
| 32 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 37 |
| 33 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 35 |
| 34-35 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 34 |
| 36 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 32 |
| 37 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |
| 38 | Chờ 1 bước (`-1`) | (6, 2) | (6, 2) | Dự kiến đứng yên tại (6, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 10) (ô=203)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Mảng hành động đã gửi server: `[5, 5, 5, -7, 1, 1, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, -7, 1, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 43 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 43 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 6-12 | Chờ 7 bước (`-7`) | (10, 10) | (10, 10) | Dự kiến đứng yên tại (10, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 13-14 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 43 |
| 15 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 43 |
| 16 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 43 |
| 17 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 43 |
| 18 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 43 |
| 19 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 43 |
| 20 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 43 |
| 21 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 43 |
| 22 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 43 |
| 23 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 43 |
| 24 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 43 |
| 25 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 26-32 | Chờ 7 bước (`-7`) | (3, 4) | (3, 4) | Dự kiến đứng yên tại (3, 4); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 33-34 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 43 |
| 35-36 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |
| 37-38 | Chờ 2 bước (`-2`) | (4, 2) | (4, 2) | Dự kiến đứng yên tại (4, 2); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (8, 14) (ô=274)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(6, 2))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(6, 2))
- Mảng hành động đã gửi server: `[3, 2, 2, 1, 0, 1, 0, 1, 1, 2, -9, 0, 5, 0, 0, 0, 0, 5, 5, 0, 0, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 3 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 4 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 5 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 6 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 7 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 43 |
| 8 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 43 |
| 9 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 43 |
| 10-11 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 43 |
| 12 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 43 |
| 13-21 | Chờ 9 bước (`-9`) | (13, 9) | (13, 9) | Dự kiến đứng yên tại (13, 9); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 43 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 43 |
| 24 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 43 |
| 25 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 43 |
| 26 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 43 |
| 27 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 43 |
| 28 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 43 |
| 29 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 43 |
| 30 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 43 |
| 31 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 43 |
| 32-33 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |
| 34-38 | Chờ 5 bước (`-5`) | (6, 2) | (6, 2) | Dự kiến đứng yên tại (6, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |

