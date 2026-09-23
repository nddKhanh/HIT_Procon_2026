# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 46
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 10) (ô=203)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(10, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(10, 10))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 4, 4, 4, 4, 4, 4, 4, 3, 3, 5, 5, 2, 2, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 32 |
| 2-3 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 31 |
| 4 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 29 |
| 5-7 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 27 |
| 8 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 25 |
| 9 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 23 |
| 10 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 21 |
| 11 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 19 |
| 12-13 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 18 |
| 14-15 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 17 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 16 |
| 18-19 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 15 |
| 20-21 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 14 |
| 22-23 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 12 |
| 24 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 10 |
| 25-26 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 9 |
| 27-28 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 8 |
| 29-30 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 7 |
| 31-32 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 6 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 5 |
| 35-36 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 4 |
| 37-38 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 3 |
| 39-40 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 2 |
| 41-42 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 1 |
| 43-44 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 45 | Chờ 1 bước (`-1`) | (10, 10) | (10, 10) | Dự kiến đứng yên tại (10, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (4, 2) (ô=42)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 10)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 2, 2, 2, 1, 1, 0, 1, 4, 3, 3, 3, 3, 2, 2, 2, 3, 2, 2, 4, 3, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 42 |
| 2-5 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 40 |
| 6-7 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 39 |
| 8-9 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 38 |
| 10-11 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 37 |
| 12-13 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 36 |
| 14-15 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 34 |
| 16-17 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 32 |
| 18-19 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 31 |
| 20-21 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 29 |
| 22 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 27 |
| 23-24 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 26 |
| 25 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 43 |
| 26-27 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 41 |
| 28 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 39 |
| 29-30 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 38 |
| 31-32 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 37 |
| 33-34 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 36 |
| 35 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 34 |
| 36 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 32 |
| 37-38 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 30 |
| 39 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 8)) | 28 |
| 40-41 | Di chuyển hướng 4 (`4`) | (13, 8) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 27 |
| 42-43 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 26 |
| 44-45 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 25 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 8) (ô=162)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 2)
- Mảng hành động đã gửi server: `[5, 4, 0, 0, 4, 4, -5, 1, 0, 0, 0, 4, 5, 5, 5, 1, 1, 1, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 9 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 8 |
| 4-5 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 7 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 6 |
| 8-9 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 5 |
| 10-11 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 3 |
| 12-16 | Chờ 5 bước (`-5`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 43 |
| 17-18 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 43 |
| 19-20 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 43 |
| 21-22 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 43 |
| 23-24 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 42 |
| 25-26 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 41 |
| 27-28 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 39 |
| 29-30 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 37 |
| 31-32 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 36 |
| 33-34 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 35 |
| 35-36 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 34 |
| 37-38 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 33 |
| 39-42 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 31 |
| 43-44 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 30 |
| 45 | Chờ 1 bước (`-1`) | (5, 2) | (5, 2) | Dự kiến đứng yên tại (5, 2); hướng tới tọa độ (5, 2) | 30 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 14) (ô=272)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(6, 16))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(6, 16))
- Mảng hành động đã gửi server: `[5, 5, 2, 3, 3, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 16 |
| 2 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 14)) | 14 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 13 |
| 5 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 11 |
| 6 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 16)) | 9 |
| 7-45 | Chờ 39 bước (`-39`) | (6, 16) | (6, 16) | Dự kiến đứng yên tại (6, 16); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 16)) | 9 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 3) (ô=62)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 10)
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 1, 1, 1, 1, 2, 2, 4, 3, 4, 2, 3, 3, 3, 3, 5, 5, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 40 |
| 4 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 38 |
| 5-6 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 37 |
| 7-8 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 36 |
| 9-10 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 35 |
| 11-12 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 34 |
| 13-14 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 33 |
| 15-18 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 31 |
| 19-20 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 30 |
| 21-23 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 28 |
| 24-25 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 27 |
| 26 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 25 |
| 27-28 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 23 |
| 29-30 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 22 |
| 31 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 20 |
| 32-33 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 19 |
| 34-35 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 18 |
| 36-37 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 17 |
| 38-39 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 16 |
| 40-41 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 42 |
| 42-43 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 41 |
| 44 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 43 |
| 45 | Chờ 1 bước (`-1`) | (8, 10) | (8, 10) | Dự kiến đứng yên tại (8, 10); hướng tới tọa độ (8, 10) | 43 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (8, 13) (ô=255)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 7)
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 1, 0, 1, 0, 0, -1, 5, 0, 5, 5, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 17 |
| 2-4 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 15 |
| 5-8 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 13 |
| 9-12 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 11 |
| 13-16 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 9 |
| 17-20 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 7 |
| 21-24 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 5 |
| 25-28 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 3 |
| 29-32 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 33 | Chờ 1 bước (`-1`) | (10, 10) | (10, 10) | Dự kiến đứng yên tại (10, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 34-35 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 42 |
| 36-37 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 41 |
| 38-39 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 40 |
| 40-41 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 42 |
| 42-43 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 41 |
| 44-45 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 39 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (11, 0) (ô=11)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 10)
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 4, 4, 4, 4, 4, 5, 1, 0, 0, 1, 0, 0, 0, 3, 3, 3, 3, 3, 3, 4, 3, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 43 |
| 2-3 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 43 |
| 4-5 | Di chuyển hướng 3 (`3`) | (10, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 43 |
| 6 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 43 |
| 7 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 43 |
| 8 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 43 |
| 9 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 43 |
| 10-11 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 43 |
| 12-13 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 43 |
| 14-15 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 43 |
| 16-17 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 43 |
| 18-19 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 43 |
| 20-21 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 43 |
| 22-23 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 43 |
| 24 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 43 |
| 25-26 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 43 |
| 27 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 43 |
| 28-30 | Di chuyển hướng 3 (`3`) | (5, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 43 |
| 31 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 43 |
| 32-33 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 43 |
| 34 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 43 |
| 35-36 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 43 |
| 37-38 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 43 |
| 39-40 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 43 |
| 41-42 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 43 |
| 43-45 | Chờ 3 bước (`-3`) | (8, 10) | (8, 10) | Dự kiến đứng yên tại (8, 10); hướng tới tọa độ (8, 10) | 43 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (4, 2) (ô=42)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(10, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(10, 10))
- Mảng hành động đã gửi server: `[2, 3, 3, 2, 2, 3, 3, 3, 3, 3, 4, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 43 |
| 2-4 | Di chuyển hướng 3 (`3`) | (5, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 43 |
| 5 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 43 |
| 6-7 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 43 |
| 8 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 43 |
| 9 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 43 |
| 10-11 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 43 |
| 12 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 43 |
| 13 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 43 |
| 14-15 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 43 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 18-45 | Chờ 28 bước (`-28`) | (10, 10) | (10, 10) | Dự kiến đứng yên tại (10, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |

