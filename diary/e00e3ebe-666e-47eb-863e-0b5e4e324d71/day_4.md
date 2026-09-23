# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 43
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 10) (ô=200)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(11, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(11, 1))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 2, 2, 2, 3, 2, 3, 3, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 30 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 29 |
| 4-5 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 28 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 27 |
| 8-9 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 26 |
| 10-11 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 25 |
| 12 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 23 |
| 13 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 21 |
| 14-15 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 19 |
| 16 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 17 |
| 17-18 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 16 |
| 19-20 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 15 |
| 21-22 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 8)) | 14 |
| 23-24 | Di chuyển hướng 0 (`0`) | (13, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 13 |
| 25-27 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 11 |
| 28-30 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 9 |
| 31-32 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 8 |
| 33-34 | Di chuyển hướng 0 (`0`) | (12, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 7 |
| 35-36 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 6 |
| 37-38 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 5 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 4 |
| 41-42 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 14) (ô=274)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 12)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 3, 2, 3, 1, 1, 1, 3, 3, 2, 2, 1, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 41 |
| 3 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 14)) | 39 |
| 4-5 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 38 |
| 6-7 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 14)) | 36 |
| 8-9 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 35 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 34 |
| 12 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 16)) | 32 |
| 13-14 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 31 |
| 15-16 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 29 |
| 17 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(8, 13)) | 27 |
| 18-19 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 26 |
| 20-22 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 24 |
| 23-26 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 22 |
| 27-30 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 20 |
| 31-34 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 18 |
| 35-38 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 16 |
| 39-42 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 14 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 8) (ô=162)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Mảng hành động đã gửi server: `[0, 1, 0, 1, 1, 0, 1, 4, 4, 5, 5, 5, 0, 3, 4, 4, 5, 5, 4, 5, -1, 1, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 31 |
| 2 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 29 |
| 3 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 27 |
| 4 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 25 |
| 5 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 23 |
| 6 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 21 |
| 7-8 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 20 |
| 9-10 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 19 |
| 11-12 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 18 |
| 13 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 16 |
| 14 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 14 |
| 15-16 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 12 |
| 17-18 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 10 |
| 19-20 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 9 |
| 21-22 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 7 |
| 23-24 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 5 |
| 25-26 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 4 |
| 27-28 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 2 |
| 29-30 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 1 |
| 31-32 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 43 |
| 33 | Chờ 1 bước (`-1`) | (2, 6) | (2, 6) | Dự kiến đứng yên tại (2, 6); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 43 |
| 34-35 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 43 |
| 36-37 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 38-39 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 43 |
| 40-41 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |
| 42 | Chờ 1 bước (`-1`) | (4, 2) | (4, 2) | Dự kiến đứng yên tại (4, 2); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 1) (ô=30)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 9)
- Mảng hành động đã gửi server: `[1, 5, 5, 4, 4, 4, 5, 0, 5, 5, 3, 3, 3, 3, 2, 3, 3, 3, 5, 5, -1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 28 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 27 |
| 4 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 25 |
| 5 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 23 |
| 6 | Di chuyển hướng 4 (`4`) | (9, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 21 |
| 7-8 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 20 |
| 9-10 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 18 |
| 11-12 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 16 |
| 13-14 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 15 |
| 15-17 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 13 |
| 18-19 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 12 |
| 20-21 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 10 |
| 22-25 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 8 |
| 26-27 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 7 |
| 28-29 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 6 |
| 30-31 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 5 |
| 32-33 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 4 |
| 34-35 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 3 |
| 36-37 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 2 |
| 38-39 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 43 |
| 40 | Chờ 1 bước (`-1`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 43 |
| 41-42 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 42 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 4) (ô=79)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 6)
- Mảng hành động đã gửi server: `[4, 4, 2, 1, 2, 2, 3, 2, 3, 3, 3, 3, 2, 1, 2, 2, 3, 0, 1, 5, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 39 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 38 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 43 |
| 6-7 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 42 |
| 8-9 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 41 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 39 |
| 12-13 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 38 |
| 14-15 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 37 |
| 16-17 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 36 |
| 18-19 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 35 |
| 20-21 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 34 |
| 22-23 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 33 |
| 24-25 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 32 |
| 26-27 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 31 |
| 28-29 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 29 |
| 30 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 27 |
| 31-32 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 26 |
| 33-34 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 25 |
| 35-36 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 8)) | 24 |
| 37-38 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 23 |
| 39 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 21 |
| 40-42 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 19 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 6) (ô=120)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 9)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 1, 1, 1, 1, 2, 2, 3, 4, 4, 3, 2, 3, 3, 3, 5, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 43 |
| 2-3 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 43 |
| 4-5 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 43 |
| 6-7 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 43 |
| 8-9 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 42 |
| 10-11 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 41 |
| 12-13 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 40 |
| 14-15 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 38 |
| 16-17 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 37 |
| 18-20 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 35 |
| 21-22 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 34 |
| 23-24 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 32 |
| 25-26 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 30 |
| 27-28 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 29 |
| 29-30 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 28 |
| 31-32 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 27 |
| 33-34 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 26 |
| 35-36 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 25 |
| 37-38 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 24 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 43 |
| 41-42 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 42 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (6, 6) (ô=120)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, -25, 1, 1, 1, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 43 |
| 2-3 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 43 |
| 4-5 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 43 |
| 6-7 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 43 |
| 8-32 | Chờ 25 bước (`-25`) | (2, 6) | (2, 6) | Dự kiến đứng yên tại (2, 6); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 43 |
| 33-34 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 43 |
| 35-36 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 37-38 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 43 |
| 39-40 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |
| 41-42 | Chờ 2 bước (`-2`) | (4, 2) | (4, 2) | Dự kiến đứng yên tại (4, 2); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (8, 14) (ô=274)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(7, 9))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(7, 9))
- Mảng hành động đã gửi server: `[3, 2, 2, 1, 0, 1, 0, 0, 5, 5, 5, 0, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 3-6 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 7-10 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 11-14 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 15-18 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 19-22 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 43 |
| 23-26 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 43 |
| 27-30 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 43 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 43 |
| 35-36 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 43 |
| 37 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 43 |
| 38-42 | Chờ 5 bước (`-5`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 43 |

