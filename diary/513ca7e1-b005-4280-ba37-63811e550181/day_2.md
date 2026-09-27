# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 52
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 6 | #4 | #6 | (6, 12) | 0 | 55 |
| 19 | #5 | #6 | (11, 15) | 26 | 55 |
| 26 | #4 | #6 | (12, 17) | 41 | 55 |
| 45 | #3 | #6 | (12, 17) | 22 | 55 |
| 49 | #4 | #6 | (12, 17) | 39 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 6) (ô=158)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(13, 7))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(13, 7))
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 3, 3, 3, 5, 0, 5, 5, 5, 0, 4, 4, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 23 |
| 2-3 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 21 |
| 4-5 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 19 |
| 6-7 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 18 |
| 8-9 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 17 |
| 10-11 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 16 |
| 12-13 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 14 |
| 14-15 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 13 |
| 16 | Di chuyển hướng 0 (`0`) | (18, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 11 |
| 17-18 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 9 |
| 19-20 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 7 |
| 21-22 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 5 |
| 23-24 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 3 |
| 25-26 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 2 |
| 27-30 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 0 |
| 31-51 | Chờ 21 bước (`-21`) | (13, 7) | (13, 7) | Dự kiến đứng yên tại (13, 7); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (19, 8) (ô=211)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(12, 3))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(12, 3))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 4, 4, 5, 0, 4, 4, 5, 5, 0, 1, 1, 1, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 27 |
| 2-3 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 26 |
| 4-5 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 24 |
| 6-7 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 23 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 22 |
| 10-11 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 21 |
| 12-13 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 19 |
| 14-15 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 17 |
| 16-17 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 15 |
| 18-19 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 14 |
| 20-23 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 12 |
| 24-25 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 11 |
| 26-28 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 9 |
| 29-30 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 8 |
| 31-32 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 7 |
| 33-34 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 5 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 3 |
| 37-51 | Chờ 15 bước (`-15`) | (12, 3) | (12, 3) | Dự kiến đứng yên tại (12, 3); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 12) (ô=300)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 8)
- Mảng hành động đã gửi server: `[5, 5, 3, 2, 3, 4, 3, 4, 5, 5, 5, 5, 4, 0, 0, 0, 1, 0, 1, 2, 2, 1, 1, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 45 |
| 2-4 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 43 |
| 5-6 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 42 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 41 |
| 9-11 | Di chuyển hướng 3 (`3`) | (12, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 39 |
| 12-13 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 38 |
| 14-15 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 37 |
| 16-17 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 35 |
| 18-19 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 34 |
| 20-21 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 33 |
| 22-24 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 31 |
| 25 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 29 |
| 26-27 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 28 |
| 28-29 | Di chuyển hướng 0 (`0`) | (7, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 27 |
| 30 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 25 |
| 31-32 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 23 |
| 33-34 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 22 |
| 35-36 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 21 |
| 37-38 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 20 |
| 39-40 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 19 |
| 41 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 17 |
| 42-44 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 15 |
| 45-46 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 13 |
| 47-48 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 11 |
| 49-50 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 9 |
| 51 | Chờ 1 bước (`-1`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); hướng tới tọa độ (9, 8) | 9 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 15) (ô=366)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(12, 14))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(12, 14))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 1, 1, 2, 2, 4, 5, 5, 4, 4, 4, 4, 3, 5, 2, 2, 2, 2, 2, 0, 0, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 54 |
| 2 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 52 |
| 3-5 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 50 |
| 6 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 48 |
| 7 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 46 |
| 8-9 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 45 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 44 |
| 12-14 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 42 |
| 15-16 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 41 |
| 17-19 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 39 |
| 20-21 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 38 |
| 22-23 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 37 |
| 24 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 35 |
| 25 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 33 |
| 26-27 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 31 |
| 28-29 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 30 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 29 |
| 32-33 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 28 |
| 34-35 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 27 |
| 36-38 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 25 |
| 39-40 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 24 |
| 41-42 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 23 |
| 43-44 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 45-46 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 47-48 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 52 |
| 49-50 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 51 |
| 51 | Chờ 1 bước (`-1`) | (12, 14) | (12, 14) | Dự kiến đứng yên tại (12, 14); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 51 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (6, 13) (ô=318)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(12, 18))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(12, 18))
- Mảng hành động đã gửi server: `[2, 0, -3, 3, 4, 4, 2, 3, 3, 2, 2, 2, 2, 0, 1, 1, 0, 5, 0, 4, 3, 3, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 1 |
| 2-3 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 0 |
| 4-6 | Chờ 3 bước (`-3`) | (6, 12) | (6, 12) | Dự kiến đứng yên tại (6, 12); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 55 |
| 7-8 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 54 |
| 9-10 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 53 |
| 11-12 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 52 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 51 |
| 15 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 49 |
| 16-17 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 47 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 46 |
| 20 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 44 |
| 21-23 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 42 |
| 24-25 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 26-27 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 28-29 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 52 |
| 30-31 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 51 |
| 32-33 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 50 |
| 34-36 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 48 |
| 37-38 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 47 |
| 39-40 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 46 |
| 41-42 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 45 |
| 43-45 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 46 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 41 |
| 47-48 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 49-50 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 54 |
| 51 | Chờ 1 bước (`-1`) | (12, 18) | (12, 18) | Dự kiến đứng yên tại (12, 18); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 54 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (7, 18) (ô=439)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(7, 13))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(7, 13))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 0, 0, 1, 5, 2, 1, 0, 1, 5, 5, 4, 5, 0, 5, 5, 3, 4, 4, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 36 |
| 2-3 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 35 |
| 4-6 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 33 |
| 7-8 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 32 |
| 9-10 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 31 |
| 11-12 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 30 |
| 13-14 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 29 |
| 15-16 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 27 |
| 17-18 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 55 |
| 19 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 53 |
| 20-21 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 52 |
| 22-23 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 51 |
| 24-26 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 49 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 48 |
| 29-31 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 46 |
| 32-33 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 45 |
| 34-35 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 44 |
| 36 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 42 |
| 37-39 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 40 |
| 40 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 38 |
| 41-42 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 37 |
| 43-44 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 36 |
| 45-46 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 35 |
| 47-48 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 34 |
| 49-50 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 33 |
| 51 | Chờ 1 bước (`-1`) | (7, 13) | (7, 13) | Dự kiến đứng yên tại (7, 13); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 33 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (6, 15) (ô=366)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(12, 17))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(12, 17))
- Mảng hành động đã gửi server: `[1, 0, 1, 2, 2, 3, 3, 3, 2, -2, 3, 3, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 55 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 55 |
| 4-5 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 55 |
| 6-7 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 55 |
| 8 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 55 |
| 9-11 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 55 |
| 12 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 55 |
| 13 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 55 |
| 14-16 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 55 |
| 17-18 | Chờ 2 bước (`-2`) | (11, 15) | (11, 15) | Dự kiến đứng yên tại (11, 15); hướng tới tọa độ (11, 15) | 55 |
| 19 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 55 |
| 20-21 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 22-51 | Chờ 30 bước (`-30`) | (12, 17) | (12, 17) | Dự kiến đứng yên tại (12, 17); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |

