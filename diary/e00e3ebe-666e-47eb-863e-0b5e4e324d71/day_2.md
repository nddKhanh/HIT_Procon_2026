# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 40
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 3) (ô=64)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 4))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 4))
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 2, 1, 5, 5, 4, 4, 4, 5, 0, 4, 3, 4, 0, 5, 5, 4, 4, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 40 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 38 |
| 4-5 | Di chuyển hướng 1 (`1`) | (8, 2) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 37 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 35 |
| 7-8 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 34 |
| 9-10 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 33 |
| 11-12 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 32 |
| 13 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 30 |
| 14 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 28 |
| 15 | Di chuyển hướng 4 (`4`) | (9, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 26 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 25 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 23 |
| 20-21 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 21 |
| 22-23 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 20 |
| 24 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 18 |
| 25 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 16 |
| 26-27 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 15 |
| 28-29 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 13 |
| 30 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 31-32 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 42 |
| 33-34 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 41 |
| 35-36 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 40 |
| 37-38 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 39 |
| 39 | Chờ 1 bước (`-1`) | (3, 4) | (3, 4) | Dự kiến đứng yên tại (3, 4); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 39 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 4) (ô=79)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(13, 10))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(13, 10))
- Mảng hành động đã gửi server: `[4, 4, 2, 2, 2, 1, 1, 0, 1, 4, 3, 3, 3, 3, 3, 3, 1, 2, 2, 2, 2, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 42 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 41 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 40 |
| 6-7 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 39 |
| 8-9 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 37 |
| 10 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 35 |
| 11-12 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 34 |
| 13 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 32 |
| 14 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |
| 15-16 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 43 |
| 17 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 41 |
| 18 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 39 |
| 19-20 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 37 |
| 21-22 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 36 |
| 23-24 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 35 |
| 25-26 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 34 |
| 27-28 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 33 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 32 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 31 |
| 33-34 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 29 |
| 35 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 8)) | 27 |
| 36-37 | Di chuyển hướng 4 (`4`) | (13, 8) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 26 |
| 38-39 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 25 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 2) (ô=42)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(13, 9))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(13, 9))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 5, 1, 1, 2, 3, 2, 3, 3, 2, 3, 3, 3, 2, 2, 2, 2, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 43 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 41 |
| 4 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 39 |
| 5-6 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 38 |
| 7-8 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 37 |
| 9-10 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 36 |
| 11-12 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 35 |
| 13-14 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 34 |
| 15 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 32 |
| 16-17 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 30 |
| 18-19 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 29 |
| 20-21 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 28 |
| 22-23 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 27 |
| 24-25 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 26 |
| 26-27 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 25 |
| 28-29 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 24 |
| 30-31 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 23 |
| 32-33 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 22 |
| 34-35 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 20 |
| 36-37 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 19 |
| 38-39 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 18 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 8) (ô=159)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(6, 2))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(6, 2))
- Mảng hành động đã gửi server: `[2, 3, 5, 5, 1, 0, 0, 0, 4, 5, 5, 5, 1, 1, 1, 1, 2, 2, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 28 |
| 2-3 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 27 |
| 4-5 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 26 |
| 6-7 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 25 |
| 8-9 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 24 |
| 10-11 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 22 |
| 12-13 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 21 |
| 14-15 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 20 |
| 16-17 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 19 |
| 18 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 17 |
| 19-20 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 15 |
| 21-22 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 14 |
| 23-24 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 13 |
| 25-26 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 27-28 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 42 |
| 29-32 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 40 |
| 33-34 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 39 |
| 35-37 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |
| 38 | Chờ 1 bước (`-1`) | (6, 2) | (6, 2) | Dự kiến đứng yên tại (6, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |
| 39 | Chờ 1 bước (`-1`) | (6, 2) | (6, 2) | Dự kiến đứng yên tại (6, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 13) (ô=255)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 15)
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 3, 2, 3, -24, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 10 |
| 2 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 14)) | 8 |
| 3-4 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 7 |
| 5-6 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 14)) | 5 |
| 7-8 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 4 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 3 |
| 11 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 16)) | 1 |
| 12-35 | Chờ 24 bước (`-24`) | (6, 16) | (6, 16) | Dự kiến đứng yên tại (6, 16); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 16)) | 43 |
| 36-37 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 42 |
| 38 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 43 |
| 39 | Chờ 1 bước (`-1`) | (8, 15) | (8, 15) | Dự kiến đứng yên tại (8, 15); hướng tới tọa độ (8, 15) | 43 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 2) (ô=44)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(11, 0))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(11, 0))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 0, 1, 5, 0, 0, 0, 1, 0, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 42 |
| 2 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 40 |
| 3 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 38 |
| 4-5 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 36 |
| 6-7 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 35 |
| 8-9 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 34 |
| 10-11 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 33 |
| 12-13 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 32 |
| 14-15 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 16-17 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 42 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 20-21 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 39 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 38 |
| 24-25 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 8)) | 37 |
| 26-27 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 36 |
| 28 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 34 |
| 29-31 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 32 |
| 32 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 30 |
| 33 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 28 |
| 34 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 26 |
| 35 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 24 |
| 36-37 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 23 |
| 38-39 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 22 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (4, 2) (ô=42)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 15)
- Mảng hành động đã gửi server: `[3, 2, 3, 2, 2, 3, 3, 3, 3, 3, 4, 3, 3, 4, 3, 4, 5, 5, 5, 5, 4, 1, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 43 |
| 2-3 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 43 |
| 4 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 43 |
| 5 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 43 |
| 6 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 43 |
| 7 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 43 |
| 8-9 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 43 |
| 10 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 43 |
| 11 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 43 |
| 12-13 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 43 |
| 14-15 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 43 |
| 16-17 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 43 |
| 18-19 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 43 |
| 20-21 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 22-23 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 24-25 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 26-27 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 28-29 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 43 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 43 |
| 34 | Di chuyển hướng 4 (`4`) | (7, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 16)) | 43 |
| 35-36 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 43 |
| 37 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 43 |
| 38-39 | Chờ 2 bước (`-2`) | (8, 15) | (8, 15) | Dự kiến đứng yên tại (8, 15); hướng tới tọa độ (8, 15) | 43 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (6, 2) (ô=44)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(6, 2))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(6, 2))
- Mảng hành động đã gửi server: `[-15, 4, 4, 5, 5, -10, 2, 2, 1, 1, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-14 | Chờ 15 bước (`-15`) | (6, 2) | (6, 2) | Dự kiến đứng yên tại (6, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |
| 15-16 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 43 |
| 17 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 43 |
| 18-19 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 43 |
| 20 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 21-30 | Chờ 10 bước (`-10`) | (3, 4) | (3, 4) | Dự kiến đứng yên tại (3, 4); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 43 |
| 31-32 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 43 |
| 33 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 43 |
| 34-35 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 43 |
| 36 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |
| 37-39 | Chờ 3 bước (`-3`) | (6, 2) | (6, 2) | Dự kiến đứng yên tại (6, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 43 |

