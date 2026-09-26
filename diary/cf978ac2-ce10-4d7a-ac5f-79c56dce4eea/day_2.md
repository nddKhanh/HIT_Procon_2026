# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 48
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #6 | (19, 9) | 50 | 51 |
| 4 | #2 | #6 | (18, 9) | 50 | 51 |
| 5 | #2 | #6 | (17, 10) | 49 | 51 |
| 6 | #2 | #6 | (16, 10) | 49 | 51 |
| 8 | #2 | #6 | (15, 10) | 50 | 51 |
| 10 | #2 | #6 | (15, 11) | 50 | 51 |
| 12 | #2 | #6 | (14, 12) | 50 | 51 |
| 16 | #2 | #6 | (14, 13) | 49 | 51 |
| 18 | #2 | #6 | (13, 14) | 49 | 51 |
| 20 | #2 | #6 | (12, 14) | 49 | 51 |
| 22 | #2 | #6 | (11, 14) | 49 | 51 |
| 24 | #2 | #6 | (10, 14) | 49 | 51 |
| 30 | #1 | #6 | (10, 12) | 0 | 51 |
| 33 | #1 | #6 | (10, 13) | 50 | 51 |
| 37 | #1 | #6 | (9, 14) | 49 | 51 |
| 42 | #5 | #6 | (10, 17) | 2 | 51 |
| 44 | #5 | #6 | (9, 17) | 50 | 51 |
| 47 | #1 | #6 | (9, 17) | 46 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 4) (ô=116)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(19, 8))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(19, 8))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 3, 4, 3, 2, 2, 3, 3, 2, 2, 1, 0, 1, 2, 3, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 33 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 31 |
| 4-6 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 29 |
| 7-8 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 28 |
| 9 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 26 |
| 10-11 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 25 |
| 12-13 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 23 |
| 14-15 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 22 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 21 |
| 18-20 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 19 |
| 21 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 17 |
| 22-23 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 15 |
| 24-25 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 14 |
| 26-27 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 13 |
| 28 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 11 |
| 29 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 9 |
| 30-31 | Di chuyển hướng 1 (`1`) | (17, 8) | (18, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 7)) | 8 |
| 32-33 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 7 |
| 34-35 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 6 |
| 36-47 | Chờ 12 bước (`-12`) | (19, 8) | (19, 8) | Dự kiến đứng yên tại (19, 8); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 6 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 12) (ô=310)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 17)
- Mảng hành động đã gửi server: `[-31, 4, 5, 3, 3, 3, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-30 | Chờ 31 bước (`-31`) | (10, 12) | (10, 12) | Dự kiến đứng yên tại (10, 12); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 51 |
| 31-32 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 50 |
| 35-36 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 51 |
| 37-40 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 49 |
| 41-42 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 48 |
| 43-44 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 47 |
| 45-46 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 51 |
| 47 | Chờ 1 bước (`-1`) | (9, 17) | (9, 17) | Dự kiến đứng yên tại (9, 17); hướng tới tọa độ (9, 17) | 51 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 8) (ô=219)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(6, 15))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(6, 15))
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 5, 4, 4, 4, 4, 5, 5, 5, 4, 4, 5, 4, 5, 5, 5, 4, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 51 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 51 |
| 4 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 51 |
| 5 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 51 |
| 6-7 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 8-9 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 51 |
| 10-11 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 12-15 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 51 |
| 16-17 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 51 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 51 |
| 20-21 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 51 |
| 22-23 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 51 |
| 24-27 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 49 |
| 28-29 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 48 |
| 30-32 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 46 |
| 33 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 44 |
| 34-35 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 43 |
| 36-37 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 42 |
| 38-39 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 41 |
| 40-41 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 40 |
| 42-43 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 39 |
| 44-45 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 38 |
| 46-47 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 37 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 17) (ô=435)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 5, 4, 4, 0, 0, 5, 2, 1, 1, 0, 5, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 21 |
| 2-4 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 19 |
| 5 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 17 |
| 6-7 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 16 |
| 8-9 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 14 |
| 10-11 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 13 |
| 12-13 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 12 |
| 14-15 | Di chuyển hướng 0 (`0`) | (5, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 11 |
| 16-18 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 9 |
| 19-20 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 8 |
| 21-22 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 7 |
| 23-24 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 6 |
| 25-26 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 5 |
| 27-28 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 3 |
| 29-30 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 12)) | 2 |
| 31-47 | Chờ 17 bước (`-17`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 12)) | 2 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 11) (ô=290)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(6, 15))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(6, 15))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 5, 0, 5, 5, 5, 5, 5, 4, 4, 5, 2, 3, 3, 4, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 42 |
| 2-5 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 40 |
| 6-7 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 38 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 36 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 34 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 32 |
| 14-17 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 30 |
| 18-19 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 29 |
| 20-21 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 28 |
| 22-23 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 26 |
| 24-25 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 24 |
| 26 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 22 |
| 27-28 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 20 |
| 29-30 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 19 |
| 31-32 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 18 |
| 33-34 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 17 |
| 35-36 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 16 |
| 37-39 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 14 |
| 40-41 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 13 |
| 42-43 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 12 |
| 44-45 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 11 |
| 46-47 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 10 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (10, 13) (ô=335)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[5, 0, 3, 3, 3, 3, 4, -26, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 9 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 8 |
| 4-5 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 7 |
| 6-7 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 6 |
| 8-11 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 4 |
| 12-13 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 3 |
| 14-15 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 2 |
| 16-41 | Chờ 26 bước (`-26`) | (10, 17) | (10, 17) | Dự kiến đứng yên tại (10, 17); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 51 |
| 42-43 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 51 |
| 44-46 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 49 |
| 47 | Chờ 1 bước (`-1`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 49 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (19, 8) (ô=219)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 17)
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 5, 4, 4, 4, 4, 5, 5, 5, 0, 1, 4, 4, 3, 3, 4, 5, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 51 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 51 |
| 4 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 51 |
| 5 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 51 |
| 6-7 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 8-9 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 51 |
| 10-11 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 12-15 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 51 |
| 16-17 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 51 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 51 |
| 20-21 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 51 |
| 22-23 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 51 |
| 24-27 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 28-29 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 51 |
| 30-31 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 32-33 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 51 |
| 34-37 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 51 |
| 38-39 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 51 |
| 40-41 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 51 |
| 42-43 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 51 |
| 44-47 | Chờ 4 bước (`-4`) | (9, 17) | (9, 17) | Dự kiến đứng yên tại (9, 17); hướng tới tọa độ (9, 17) | 51 |

