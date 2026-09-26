# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 44
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 18 | #1 | #6 | (10, 13) | 30 | 51 |
| 31 | #5 | #6 | (10, 13) | 30 | 51 |
| 39 | #2 | #6 | (10, 13) | 7 | 51 |
| 42 | #0 | #6 | (10, 13) | 11 | 51 |
| 43 | #2 | #6 | (10, 13) | 49 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 10) (ô=265)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(9, 13))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(9, 13))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 3, 3, 2, 2, 2, 2, 2, 1, 0, 0, 0, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 50 |
| 2-3 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 49 |
| 4 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 47 |
| 5 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 45 |
| 6 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 43 |
| 7 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 41 |
| 8 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 39 |
| 9 | Di chuyển hướng 5 (`5`) | (10, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 37 |
| 10 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 35 |
| 11 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 33 |
| 12 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 31 |
| 13 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 29 |
| 14-15 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 28 |
| 16 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 26 |
| 17-18 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 25 |
| 19-21 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 23 |
| 22-23 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 22 |
| 24-25 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 21 |
| 26-27 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 20 |
| 28-29 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 19 |
| 30-32 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 17 |
| 33-34 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 16 |
| 35-36 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 15 |
| 37-38 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 14 |
| 39 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 12 |
| 40-41 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 42-43 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 50 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 8) (ô=217)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(3, 15))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(3, 15))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 4, 4, 4, 5, 5, 5, 5, 0, 2, 3, 4, 3, 4, 5, 5, 5, 5, 5, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 50 |
| 2 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 48 |
| 3-4 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 47 |
| 5-6 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 46 |
| 7-8 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 45 |
| 9 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 43 |
| 10 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 41 |
| 11 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 39 |
| 12 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 37 |
| 13 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 35 |
| 14 | Di chuyển hướng 5 (`5`) | (10, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 33 |
| 15 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 31 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 18-19 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 50 |
| 20 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 48 |
| 21-22 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 47 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 46 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 45 |
| 27-29 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 43 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 42 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 41 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 40 |
| 36-37 | Di chuyển hướng 0 (`0`) | (5, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 39 |
| 38-40 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 37 |
| 41-42 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 36 |
| 43 | Chờ 1 bước (`-1`) | (3, 15) | (3, 15) | Dự kiến đứng yên tại (3, 15); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 36 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 4) (ô=113)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(10, 13))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(10, 13))
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 4, 5, 5, 5, 5, 4, 4, 3, 4, 4, 4, 0, 5, 1, 0, 5, 2, 2, 2, 2, 2, 3, 2, 1, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 50 |
| 2 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 48 |
| 3 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 46 |
| 4-5 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 45 |
| 6-7 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 44 |
| 8 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 42 |
| 9 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 40 |
| 10 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 38 |
| 11 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 36 |
| 12 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 34 |
| 13 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 32 |
| 14 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 30 |
| 15 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 28 |
| 16 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 26 |
| 17 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 24 |
| 18-19 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 23 |
| 20 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 21 |
| 21-22 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 20 |
| 23 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 18 |
| 24-25 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 12)) | 17 |
| 26-27 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 16 |
| 28-29 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 15 |
| 30 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 13 |
| 31-33 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 11 |
| 34 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 9 |
| 35-36 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 8 |
| 37-38 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 39-40 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 50 |
| 41-42 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 43 | Chờ 1 bước (`-1`) | (10, 13) | (10, 13) | Dự kiến đứng yên tại (10, 13); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (19, 7) (ô=194)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 17)
- Mảng hành động đã gửi server: `[5, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 5, 3, 3, 3, 3, 4, 4, 1, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 7)) | 50 |
| 2-3 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 49 |
| 4-5 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 48 |
| 6 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 46 |
| 7 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 44 |
| 8 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 42 |
| 9 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 40 |
| 10 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 38 |
| 11 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 36 |
| 12 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 34 |
| 13 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 32 |
| 14 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 30 |
| 15 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 28 |
| 16 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 26 |
| 17 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 24 |
| 18 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 22 |
| 19 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 20 |
| 20-21 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 12)) | 19 |
| 22-23 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 18 |
| 24-26 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 16 |
| 27-28 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 15 |
| 29 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 13 |
| 30-31 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 12 |
| 32-33 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 11 |
| 34-35 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 10 |
| 36-37 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 9 |
| 38-39 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 8 |
| 40-41 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 7 |
| 42-43 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 6 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (6, 17) (ô=431)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 9)
- Mảng hành động đã gửi server: `[2, 0, 1, 1, 1, 0, 0, 1, 1, 2, 2, 2, 2, 1, 0, 0, 1, 2, 2, 2, 1, 2, 4, 4, 3, 3, 2, 2, 2, -1, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 50 |
| 2-3 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 49 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 47 |
| 5 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 45 |
| 6 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 43 |
| 7 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 41 |
| 8 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 39 |
| 9 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 37 |
| 10 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 35 |
| 11 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 33 |
| 12 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 31 |
| 13 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 29 |
| 14 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 27 |
| 15 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 25 |
| 16-17 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 24 |
| 18-19 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 23 |
| 20 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 21 |
| 21-22 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 20 |
| 23 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 18 |
| 24 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 16 |
| 25 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 14 |
| 26 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 4)) | 12 |
| 27-28 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 11 |
| 29-31 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 9 |
| 32 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 7 |
| 33-34 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 6 |
| 35-36 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 5 |
| 37-38 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 4 |
| 39-40 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 3 |
| 41 | Chờ 1 bước (`-1`) | (19, 8) | (19, 8) | Dự kiến đứng yên tại (19, 8); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 3 |
| 42-43 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 2 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 16) (ô=405)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(6, 15))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(6, 15))
- Mảng hành động đã gửi server: `[0, 5, 5, 3, 3, 2, 2, 2, 2, 2, 2, 1, 0, 0, 0, 2, 1, 5, 5, 4, 4, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 50 |
| 2 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 48 |
| 3-4 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 47 |
| 5-6 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 46 |
| 7-9 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 44 |
| 10 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 42 |
| 11-12 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 41 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 40 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 39 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 38 |
| 19-21 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 36 |
| 22-23 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 35 |
| 24-25 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 34 |
| 26-27 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 33 |
| 28 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 31 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 31-32 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 50 |
| 33-34 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 49 |
| 35-37 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 47 |
| 38-39 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 46 |
| 40 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 44 |
| 41 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 42 |
| 42 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 40 |
| 43 | Chờ 1 bước (`-1`) | (6, 15) | (6, 15) | Dự kiến đứng yên tại (6, 15); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 40 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (16, 7) (ô=191)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(10, 13))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(10, 13))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 3, 4, 4, 5, 5, 5, 0, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 51 |
| 2-4 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 51 |
| 5 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 51 |
| 6 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 51 |
| 7 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 8 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 51 |
| 9 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 51 |
| 10 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 51 |
| 11 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 51 |
| 12 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 51 |
| 13 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 14-43 | Chờ 30 bước (`-30`) | (10, 13) | (10, 13) | Dự kiến đứng yên tại (10, 13); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |

