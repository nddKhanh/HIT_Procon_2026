# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 43
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 41 | #2 | #5 | (2, 10) | 19 | 49 |
| 42 | #1 | #4 | (12, 16) | 20 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 8) (ô=184)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 19)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 4, 4, 4, 4, 4, 2, 5, 4, 5, 5, 4, 5, 4, 3, 2, 3, 3, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 48 |
| 2 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 46 |
| 3-4 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 45 |
| 5-6 | Di chuyển hướng 2 (`2`) | (19, 8) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 44 |
| 7-8 | Di chuyển hướng 4 (`4`) | (20, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 43 |
| 9-11 | Di chuyển hướng 4 (`4`) | (20, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 41 |
| 12 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 39 |
| 13-14 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 38 |
| 15-16 | Di chuyển hướng 4 (`4`) | (18, 12) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 37 |
| 17-18 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 36 |
| 19-20 | Di chuyển hướng 5 (`5`) | (19, 13) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 35 |
| 21-22 | Di chuyển hướng 4 (`4`) | (18, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 34 |
| 23-24 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 33 |
| 25-26 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 32 |
| 27 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 30 |
| 28-29 | Di chuyển hướng 5 (`5`) | (15, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 29 |
| 30-31 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 28 |
| 32-34 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 26 |
| 35-36 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 25 |
| 37 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 23 |
| 38-39 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 22 |
| 40-41 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 21 |
| 42 | Chờ 1 bước (`-1`) | (15, 19) | (15, 19) | Dự kiến đứng yên tại (15, 19); hướng tới tọa độ (15, 19) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 20) (ô=420)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 16)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 3, 3, 4, 3, 3, 2, 2, 2, 1, 2, 2, 2, 0, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 20) | (1, 19) | Dự kiến đến điểm hẹn tọa độ (1, 19) | 48 |
| 2 | Di chuyển hướng 1 (`1`) | (1, 19) | (1, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 18)) | 46 |
| 3-4 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 45 |
| 5-6 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 44 |
| 7-8 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(3, 16)) | 43 |
| 9-10 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 42 |
| 11 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 40 |
| 12-14 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 38 |
| 15 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 36 |
| 16-17 | Di chuyển hướng 3 (`3`) | (4, 20) | (5, 21) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(5, 21)) | 35 |
| 18-19 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 34 |
| 20-21 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 33 |
| 22-24 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 21)) | 31 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 30 |
| 27-28 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 29 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 28 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 20)) | 27 |
| 33-34 | Di chuyển hướng 0 (`0`) | (11, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 26 |
| 35-37 | Di chuyển hướng 1 (`1`) | (11, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 24 |
| 38-40 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 22 |
| 41 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 49 |
| 42 | Chờ 1 bước (`-1`) | (12, 16) | (12, 16) | Dự kiến đứng yên tại (12, 16); hướng tới tọa độ (12, 16) | 49 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 9) (ô=191)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 10)
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 1, 1, 1, 2, 5, 4, 4, 4, 4, 4, 4, 3, 4, 3, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 48 |
| 2 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 46 |
| 3 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 44 |
| 4-6 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 42 |
| 7-9 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 40 |
| 10-12 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 38 |
| 13-14 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 2)) | 37 |
| 15-16 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(5, 2)) | 36 |
| 17-18 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 2)) | 35 |
| 19-20 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 34 |
| 21-22 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 33 |
| 23-25 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 31 |
| 26-28 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 29 |
| 29-31 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 27 |
| 32 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 25 |
| 33 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 23 |
| 34-35 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 22 |
| 36-37 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 21 |
| 38-40 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 49 |
| 41-42 | Chờ 2 bước (`-2`) | (2, 10) | (2, 10) | Dự kiến đứng yên tại (2, 10); hướng tới tọa độ (2, 10) | 49 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 17) (ô=363)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(14, 15))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(14, 15))
- Mảng hành động đã gửi server: `[0, 0, 1, 0, 0, 1, 2, 2, 1, 2, 2, 2, 2, 2, 3, 4, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 48 |
| 2-3 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 47 |
| 4-6 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 45 |
| 7-9 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 43 |
| 10-11 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 42 |
| 12-13 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 41 |
| 14-16 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 39 |
| 17-19 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 37 |
| 20-21 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 36 |
| 22 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 34 |
| 23-25 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 32 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 31 |
| 28-30 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 29 |
| 31-32 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 28 |
| 33 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 26 |
| 34-35 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 25 |
| 36-38 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 23 |
| 39 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 21 |
| 40-42 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 19 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (18, 14) (ô=312)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 16)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 4, 5, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 49 |
| 2-3 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 49 |
| 4-5 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 49 |
| 6 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 49 |
| 7-8 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 49 |
| 9-10 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 49 |
| 11-13 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 49 |
| 14-42 | Chờ 29 bước (`-29`) | (12, 16) | (12, 16) | Dự kiến đứng yên tại (12, 16); hướng tới tọa độ (12, 16) | 49 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (12, 8) (ô=180)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 10)
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 5, 5, 5, 5, 4, 5, 4, 4, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 49 |
| 2 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 49 |
| 3-5 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 49 |
| 6-8 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 49 |
| 9-10 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 49 |
| 11 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 49 |
| 12-13 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 49 |
| 14 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 49 |
| 15-17 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 49 |
| 18 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 49 |
| 19-20 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 49 |
| 21 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 49 |
| 22-42 | Chờ 21 bước (`-21`) | (2, 10) | (2, 10) | Dự kiến đứng yên tại (2, 10); hướng tới tọa độ (2, 10) | 49 |

