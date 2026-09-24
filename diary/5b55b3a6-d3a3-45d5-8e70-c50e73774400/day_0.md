# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 41
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 11) (ô=252)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(1, 7))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(1, 7))
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 0, 1, 1, 3, 2, 2, 3, 3, 4, 5, 5, 5, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 46 |
| 2-3 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 45 |
| 4-5 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 44 |
| 6 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 42 |
| 7 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 40 |
| 8 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 38 |
| 9 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 36 |
| 10 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 34 |
| 11 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 32 |
| 12 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 30 |
| 13 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 28 |
| 14 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 26 |
| 15 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 24 |
| 16 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 22 |
| 17 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 20 |
| 18 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 18 |
| 19-20 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 17 |
| 21 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 15 |
| 22-23 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 14 |
| 24-25 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 13 |
| 26-27 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 12 |
| 28-29 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 11 |
| 30 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 9 |
| 31 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 6)) | 7 |
| 32-33 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 6 |
| 34-35 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 5 |
| 36 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 3 |
| 37-38 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 47 |
| 39 | Chờ 1 bước (`-1`) | (1, 7) | (1, 7) | Dự kiến đứng yên tại (1, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 47 |
| 40 | Chờ 1 bước (`-1`) | (1, 7) | (1, 7) | Dự kiến đứng yên tại (1, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 47 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 9) (ô=212)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Mảng hành động đã gửi server: `[1, 2, 2, 0, 0, 0, 4, 4, 4, 4, 3, 4, 5, 5, 5, 4, 4, 5, 4, 4, 4, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 46 |
| 2-3 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 45 |
| 4-5 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 44 |
| 6-7 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 7)) | 43 |
| 8-9 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 6)) | 42 |
| 10-11 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 41 |
| 12-13 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 40 |
| 14-15 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 39 |
| 16 | Di chuyển hướng 4 (`4`) | (14, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 37 |
| 17 | Di chuyển hướng 4 (`4`) | (13, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 35 |
| 18 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(13, 10)) | 33 |
| 19-20 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 32 |
| 21 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 30 |
| 22-23 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 29 |
| 24-25 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 28 |
| 26-27 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(9, 12)) | 27 |
| 28-29 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 26 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 25 |
| 32-34 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 23 |
| 35 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 21 |
| 36 | Di chuyển hướng 4 (`4`) | (7, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 19 |
| 37 | Di chuyển hướng 3 (`3`) | (6, 16) | (7, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(7, 17)) | 17 |
| 38-39 | Di chuyển hướng 4 (`4`) | (7, 17) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 47 |
| 40 | Chờ 1 bước (`-1`) | (6, 18) | (6, 18) | Dự kiến đứng yên tại (6, 18); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 47 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 11) (ô=254)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(4, 16))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(4, 16))
- Mảng hành động đã gửi server: `[2, 1, 2, 1, 2, 1, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 4, 5, 4, 4, 4, 3, 4, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 46 |
| 2 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(13, 10)) | 44 |
| 3-4 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 10)) | 43 |
| 5-6 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 42 |
| 7 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 40 |
| 8 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 38 |
| 9-10 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 37 |
| 11-12 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 36 |
| 13-14 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 35 |
| 15 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 33 |
| 16 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 31 |
| 17 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 29 |
| 18 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 27 |
| 19-20 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 26 |
| 21-22 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 25 |
| 23 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(9, 12)) | 23 |
| 24-25 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 22 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 21 |
| 28-30 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 19 |
| 31 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 17 |
| 32 | Di chuyển hướng 4 (`4`) | (7, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 15 |
| 33 | Di chuyển hướng 3 (`3`) | (6, 16) | (7, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(7, 17)) | 13 |
| 34-35 | Di chuyển hướng 4 (`4`) | (7, 17) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 47 |
| 36-37 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 46 |
| 38 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 44 |
| 39 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(4, 16)) | 42 |
| 40 | Chờ 1 bước (`-1`) | (4, 16) | (4, 16) | Dự kiến đứng yên tại (4, 16); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(4, 16)) | 42 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (4, 15) (ô=334)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 1, 1, 1, 2, 1, 0, 1, 1, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 4, 4, 3, 3, -1, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 46 |
| 2 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 44 |
| 3 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 42 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 40 |
| 5 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 38 |
| 6 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 36 |
| 7-8 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 35 |
| 9 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 33 |
| 10-11 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 32 |
| 12-13 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 31 |
| 14 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 29 |
| 15 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 27 |
| 16 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 25 |
| 17 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 23 |
| 18 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 21 |
| 19 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 19 |
| 20 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 17 |
| 21 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 15 |
| 22 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 13 |
| 23 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 11 |
| 24 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 9 |
| 25 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 7 |
| 26-27 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 6 |
| 28-29 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 5 |
| 30-31 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 4 |
| 32 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 2 |
| 33-34 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 47 |
| 35 | Chờ 1 bước (`-1`) | (1, 7) | (1, 7) | Dự kiến đứng yên tại (1, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 47 |
| 36-37 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 46 |
| 38-39 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 45 |
| 40 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 43 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 6) (ô=133)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 9)
- Mảng hành động đã gửi server: `[4, 0, 0, 1, 1, 3, 2, 2, 3, 3, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, 3, 5, 5, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 46 |
| 2-3 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 45 |
| 4-5 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 44 |
| 6 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 42 |
| 7-8 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 41 |
| 9-10 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 40 |
| 11-12 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 39 |
| 13-14 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 38 |
| 15 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 36 |
| 16 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 6)) | 34 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 33 |
| 19 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 31 |
| 20 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 29 |
| 21 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 27 |
| 22 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 25 |
| 23 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 23 |
| 24 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 21 |
| 25 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 19 |
| 26 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 17 |
| 27 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 15 |
| 28 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 13 |
| 29-30 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 6)) | 12 |
| 31-32 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 7)) | 11 |
| 33-34 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 10 |
| 35-36 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 9 |
| 37-38 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 8 |
| 39-40 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 7 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (3, 17) (ô=377)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(1, 7))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(1, 7))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 0, 1, 0, 1, 0, 1, 2, 2, 2, 2, 1, 1, 0, 5, 5, 5, 5, 5, 5, 5, 4, 4, 5, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 47 |
| 2 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(4, 16)) | 47 |
| 3-4 | Di chuyển hướng 1 (`1`) | (4, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 47 |
| 5 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 47 |
| 6 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 47 |
| 7 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 47 |
| 8 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 47 |
| 9 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 47 |
| 10 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 47 |
| 11 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 47 |
| 12 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 47 |
| 13 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 47 |
| 14 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 47 |
| 15 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 47 |
| 16 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 47 |
| 17 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 47 |
| 18 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 47 |
| 19 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 47 |
| 20 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 47 |
| 21 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 47 |
| 22 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 47 |
| 23 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 47 |
| 24 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 47 |
| 25 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 47 |
| 26 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 47 |
| 27 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 47 |
| 28-29 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 47 |
| 30-40 | Chờ 11 bước (`-11`) | (1, 7) | (1, 7) | Dự kiến đứng yên tại (1, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 47 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (5, 17) (ô=379)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Mảng hành động đã gửi server: `[2, 3, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 47 |
| 2 | Di chuyển hướng 3 (`3`) | (6, 17) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 47 |
| 3-40 | Chờ 38 bước (`-38`) | (6, 18) | (6, 18) | Dự kiến đứng yên tại (6, 18); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 47 |

