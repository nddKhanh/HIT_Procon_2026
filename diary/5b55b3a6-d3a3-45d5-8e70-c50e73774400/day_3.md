# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 47
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 5) (ô=111)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(10, 9))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(10, 9))
- Mảng hành động đã gửi server: `[4, 3, 0, 1, 0, 2, 2, 2, 3, 3, 1, 2, 2, 2, 2, 2, 3, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 38 |
| 1-2 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 37 |
| 3-4 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 36 |
| 5-6 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 35 |
| 7 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 33 |
| 8-9 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 32 |
| 10-11 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 31 |
| 12-13 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 30 |
| 14 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 28 |
| 15-16 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 6)) | 26 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 25 |
| 19-22 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 23 |
| 23-26 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 21 |
| 27-30 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 19 |
| 31-34 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 17 |
| 35-38 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 47 |
| 39-42 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 45 |
| 43-44 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 43 |
| 45 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 41 |
| 46 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 39 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 5) (ô=117)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 5)
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 5, 5, 0, 4, 4, 3, 3, 2, 2, 2, 1, 1, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 45 |
| 4-7 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 43 |
| 8-11 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 41 |
| 12-13 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 40 |
| 14 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 38 |
| 15-16 | Di chuyển hướng 5 (`5`) | (2, 4) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 37 |
| 17-18 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 36 |
| 19-20 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 35 |
| 21-22 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 34 |
| 23 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 32 |
| 24-25 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 31 |
| 26-27 | Di chuyển hướng 2 (`2`) | (1, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 30 |
| 28-29 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 29 |
| 30 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 27 |
| 31-32 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 6)) | 26 |
| 33-34 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 25 |
| 35-38 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 23 |
| 39-42 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 21 |
| 43-46 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 19 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 9) (ô=210)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(4, 16))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(4, 16))
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 2, 0, 0, 5, -5, 5, 4, 5, 5, 4, 4, 4, 3, 4, 4, 5, 5, 4, 4, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 10 |
| 2 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 8 |
| 3-4 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 7 |
| 5-6 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 6 |
| 7-8 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 5 |
| 9-10 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 7)) | 4 |
| 11-12 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 6)) | 3 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 2 |
| 15-19 | Chờ 5 bước (`-5`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 47 |
| 20-21 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 47 |
| 22 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 45 |
| 23 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 43 |
| 24-25 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 42 |
| 26 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 40 |
| 27-28 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 38 |
| 29-30 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 37 |
| 31-32 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 36 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(9, 12)) | 35 |
| 35-36 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 34 |
| 37-38 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 33 |
| 39-41 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 31 |
| 42 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 29 |
| 43 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 27 |
| 44 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 25 |
| 45 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(4, 16)) | 23 |
| 46 | Chờ 1 bước (`-1`) | (4, 16) | (4, 16) | Dự kiến đứng yên tại (4, 16); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(4, 16)) | 23 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 15) (ô=335)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 7)
- Mảng hành động đã gửi server: `[4, 2, 3, 3, 1, 0, 1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 0, 0, 5, 1, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(4, 16)) | 47 |
| 1-2 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 46 |
| 3 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 44 |
| 4 | Di chuyển hướng 3 (`3`) | (6, 17) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 42 |
| 5-6 | Di chuyển hướng 1 (`1`) | (6, 18) | (7, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(7, 17)) | 41 |
| 7-8 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 40 |
| 9 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 38 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 36 |
| 12-13 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 34 |
| 14-16 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 32 |
| 17-18 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(9, 12)) | 31 |
| 19-20 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 30 |
| 21-22 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 29 |
| 23-24 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 28 |
| 25-26 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 27 |
| 27 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(13, 10)) | 25 |
| 28-29 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 10)) | 24 |
| 30-31 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 23 |
| 32 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 21 |
| 33-34 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 20 |
| 35-36 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 7)) | 19 |
| 37-38 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 6)) | 18 |
| 39-40 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 47 |
| 41-42 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 46 |
| 43-44 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 47 |
| 45-46 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 46 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 3) (ô=67)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 5)
- Mảng hành động đã gửi server: `[4, 4, 3, 1, 1, 2, 4, 4, 4, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, -1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 38 |
| 2-3 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 37 |
| 4 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 35 |
| 5-6 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 34 |
| 7 | Di chuyển hướng 1 (`1`) | (1, 5) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 32 |
| 8-9 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 31 |
| 10-11 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 30 |
| 12 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 28 |
| 13-14 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 27 |
| 15-16 | Di chuyển hướng 2 (`2`) | (1, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 26 |
| 17-18 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 25 |
| 19 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 23 |
| 20-21 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 6)) | 22 |
| 22-23 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 21 |
| 24-27 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 19 |
| 28-31 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 17 |
| 32-35 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 15 |
| 36-39 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 13 |
| 40-43 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 47 |
| 44 | Chờ 1 bước (`-1`) | (10, 5) | (10, 5) | Dự kiến đứng yên tại (10, 5); hướng tới tọa độ (10, 5) | 47 |
| 45-46 | Chờ 2 bước (`-2`) | (10, 5) | (10, 5) | Dự kiến đứng yên tại (10, 5); hướng tới tọa độ (10, 5) | 47 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 5) (ô=117)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 5)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 3, 2, 0, 5, 5, 5, 5, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 47 |
| 4-7 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 47 |
| 8-11 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 47 |
| 12-15 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 47 |
| 16-17 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 47 |
| 18-19 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 47 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 47 |
| 22 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 47 |
| 23-24 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 47 |
| 25 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 47 |
| 26-27 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 47 |
| 28-29 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 47 |
| 30-31 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 47 |
| 32-46 | Chờ 15 bước (`-15`) | (10, 5) | (10, 5) | Dự kiến đứng yên tại (10, 5); hướng tới tọa độ (10, 5) | 47 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (4, 16) (ô=356)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(14, 6))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(14, 6))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 0, 1, 0, 1, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 47 |
| 2 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 47 |
| 3 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 47 |
| 4 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 47 |
| 5 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 47 |
| 6 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 47 |
| 7 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 47 |
| 8 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 47 |
| 9 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 47 |
| 10 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 47 |
| 11 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 47 |
| 12 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 47 |
| 13 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 47 |
| 14 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 47 |
| 15 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 47 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 47 |
| 18 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 47 |
| 19 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 47 |
| 20-46 | Chờ 27 bước (`-27`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 47 |

