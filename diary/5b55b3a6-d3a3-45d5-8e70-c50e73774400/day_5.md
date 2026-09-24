# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 51
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=90)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 10)
- Mảng hành động đã gửi server: `[5, 0, 4, 4, 3, 3, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 4, 4, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (2, 4) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 46 |
| 2-3 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 45 |
| 4-5 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 44 |
| 6-7 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 43 |
| 8-9 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 41 |
| 10-11 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 40 |
| 12-13 | Di chuyển hướng 2 (`2`) | (1, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 39 |
| 14-15 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 38 |
| 16 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 36 |
| 17 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 34 |
| 18-19 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 32 |
| 20-23 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 30 |
| 24-27 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 28 |
| 28-31 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 26 |
| 32-35 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 24 |
| 36-39 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 22 |
| 40-43 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 20 |
| 44-45 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 18 |
| 46 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 16 |
| 47 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 14 |
| 48-49 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 47 |
| 50 | Chờ 1 bước (`-1`) | (9, 10) | (9, 10) | Dự kiến đứng yên tại (9, 10); hướng tới tọa độ (9, 10) | 47 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 7) (ô=157)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(10, 9))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(10, 9))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 1, 1, 3, 2, 3, 2, 3, 1, 2, 2, 2, 2, 2, 3, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 39 |
| 2-3 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 38 |
| 4-5 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 37 |
| 6-7 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 36 |
| 8-9 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 34 |
| 10-11 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 33 |
| 12-13 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 32 |
| 14-15 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 31 |
| 16-17 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 30 |
| 18 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 28 |
| 19-20 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 6)) | 26 |
| 21-22 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 25 |
| 23-26 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 23 |
| 27-30 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 21 |
| 31-34 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 19 |
| 35-38 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 17 |
| 39-42 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 15 |
| 43-46 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 13 |
| 47-48 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 11 |
| 49 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 9 |
| 50 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 7 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 13) (ô=295)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(4, 16))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(4, 16))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 0, 0, 5, 1, 4, 4, 3, -1, 5, 5, 5, 5, 4, 4, 5, 4, 4, 4, 4, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(9, 12)) | 25 |
| 2-3 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 24 |
| 4-5 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 23 |
| 6-7 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 22 |
| 8-9 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 21 |
| 10 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(13, 10)) | 19 |
| 11-12 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 10)) | 18 |
| 13-14 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 17 |
| 15 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 15 |
| 16-17 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 14 |
| 18-19 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 7)) | 13 |
| 20-21 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 6)) | 12 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 11 |
| 24-25 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 10 |
| 26-27 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 9 |
| 28-29 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 8 |
| 30 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 47 |
| 31 | Chờ 1 bước (`-1`) | (14, 8) | (14, 8) | Dự kiến đứng yên tại (14, 8); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 47 |
| 32-33 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 46 |
| 34 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 44 |
| 35 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 42 |
| 36 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 47 |
| 37-38 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 47 |
| 39-40 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 47 |
| 41-42 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 46 |
| 43 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 44 |
| 44-45 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 43 |
| 46 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 41 |
| 47 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 39 |
| 48 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 37 |
| 49 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 35 |
| 50 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(4, 16)) | 33 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 15) (ô=336)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 4, 5, 4, 5, 4, 5, 5, 5, 4, 4, 5, 4, 4, 3, 4, -1, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 42 |
| 2 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 40 |
| 3 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 38 |
| 4 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 36 |
| 5-6 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 35 |
| 7 | Di chuyển hướng 2 (`2`) | (9, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 33 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 32 |
| 10-11 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 31 |
| 12 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 29 |
| 13-14 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 28 |
| 15 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 26 |
| 16 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 24 |
| 17-18 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 23 |
| 19-20 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 22 |
| 21-22 | Di chuyển hướng 4 (`4`) | (16, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 21 |
| 23 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 19 |
| 24 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 10)) | 17 |
| 25-26 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(13, 10)) | 16 |
| 27-28 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 15 |
| 29 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 13 |
| 30-31 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 12 |
| 32-33 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 11 |
| 34-35 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(9, 12)) | 10 |
| 36-37 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 9 |
| 38-39 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 8 |
| 40-42 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 6 |
| 43-44 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 4 |
| 45-46 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 2 |
| 47 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(7, 17)) | 47 |
| 48 | Chờ 1 bước (`-1`) | (7, 17) | (7, 17) | Dự kiến đứng yên tại (7, 17); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(7, 17)) | 47 |
| 49-50 | Di chuyển hướng 4 (`4`) | (7, 17) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 46 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 5) (ô=114)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(1, 7))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(1, 7))
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 0, 1, 1, 3, 2, 2, 3, 3, 4, 5, 5, 5, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 42 |
| 2 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 40 |
| 3 | Di chuyển hướng 5 (`5`) | (2, 6) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 38 |
| 4-5 | Di chuyển hướng 5 (`5`) | (1, 6) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 37 |
| 6-7 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 36 |
| 8-9 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 34 |
| 10-11 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 33 |
| 12-13 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 32 |
| 14-15 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 31 |
| 16-17 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 30 |
| 18 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 28 |
| 19-20 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 6)) | 26 |
| 21-22 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 25 |
| 23-24 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 24 |
| 25-26 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 22 |
| 27-28 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 21 |
| 29-50 | Chờ 22 bước (`-22`) | (1, 7) | (1, 7) | Dự kiến đứng yên tại (1, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 21 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 16) (ô=356)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 10)
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, -12, 5, 5, 5, 5, 4, 4, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 47 |
| 2 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 47 |
| 3 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 47 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 47 |
| 5 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 47 |
| 6 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 47 |
| 7-8 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 47 |
| 9 | Di chuyển hướng 2 (`2`) | (9, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 47 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 47 |
| 12-13 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 47 |
| 14 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 47 |
| 15-16 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 47 |
| 17 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 47 |
| 18 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 47 |
| 19-30 | Chờ 12 bước (`-12`) | (14, 8) | (14, 8) | Dự kiến đứng yên tại (14, 8); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 47 |
| 31-32 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 47 |
| 33 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 47 |
| 34 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 47 |
| 35 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 47 |
| 36-37 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 47 |
| 38-39 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 47 |
| 40-50 | Chờ 11 bước (`-11`) | (9, 10) | (9, 10) | Dự kiến đứng yên tại (9, 10); hướng tới tọa độ (9, 10) | 47 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (2, 4) (ô=90)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(7, 17))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(7, 17))
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 2, 2, 2, 2, 3, 4, 4, 3, 4, 4, 5, 4, 4, 4, 3, 3, 4, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 47 |
| 2 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 47 |
| 3-4 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 47 |
| 5-8 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 47 |
| 9-12 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 47 |
| 13-16 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 47 |
| 17-20 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 47 |
| 21-24 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 47 |
| 25-28 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 47 |
| 29-30 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 47 |
| 31 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 47 |
| 32 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 47 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 47 |
| 35-36 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 47 |
| 37 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 47 |
| 38-39 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 47 |
| 40 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 47 |
| 41 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 47 |
| 42 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 47 |
| 43-44 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 47 |
| 45 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(7, 17)) | 47 |
| 46-50 | Chờ 5 bước (`-5`) | (7, 17) | (7, 17) | Dự kiến đứng yên tại (7, 17); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(7, 17)) | 47 |

