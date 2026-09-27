# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 48
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 7 | #2 | #6 | (13, 6) | 44 | 55 |
| 10 | #3 | #6 | (13, 6) | 44 | 55 |
| 14 | #4 | #6 | (13, 6) | 42 | 55 |
| 19 | #0 | #6 | (13, 6) | 39 | 55 |
| 21 | #1 | #6 | (13, 6) | 38 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 5) (ô=140)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 16)
- Mảng hành động đã gửi server: `[4, 4, 0, 0, 0, 5, 4, 4, 5, 0, 4, 4, 0, 0, 0, 1, 4, 4, 4, 4, 4, 4, 3, 4, 3, 2, 3, 3, 2, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 54 |
| 2-4 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 52 |
| 5-6 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 51 |
| 7 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 49 |
| 8-9 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 48 |
| 10-11 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 47 |
| 12-13 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 46 |
| 14 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 44 |
| 15 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 42 |
| 16 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 40 |
| 17-18 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 55 |
| 19 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 53 |
| 20-21 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 52 |
| 22 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 50 |
| 23 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 48 |
| 24 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 46 |
| 25-26 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 45 |
| 27 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 43 |
| 28 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 41 |
| 29-30 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 40 |
| 31-33 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 38 |
| 34 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 36 |
| 35 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 34 |
| 36 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 32 |
| 37 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 30 |
| 38 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 28 |
| 39-40 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 27 |
| 41-42 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 26 |
| 43 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 24 |
| 44-45 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 23 |
| 46-47 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 22 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 6) (ô=164)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(12, 15))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(12, 15))
- Mảng hành động đã gửi server: `[4, 4, 0, 0, 0, 0, 5, 4, 4, 5, 0, 4, 4, 0, 0, 0, 1, 4, 4, 4, 4, 4, 4, 3, 4, 3, 2, 3, 3, 2, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 54 |
| 2-4 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 8)) | 52 |
| 5-6 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 51 |
| 7-8 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 50 |
| 9 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 48 |
| 10-11 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 47 |
| 12-13 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 46 |
| 14-15 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 45 |
| 16 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 43 |
| 17 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 41 |
| 18 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 39 |
| 19-20 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 53 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 52 |
| 24 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 50 |
| 25 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 48 |
| 26 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 46 |
| 27-28 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 45 |
| 29 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 43 |
| 30 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 41 |
| 31-32 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 40 |
| 33-35 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 38 |
| 36 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 36 |
| 37 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 34 |
| 38 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 32 |
| 39 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 30 |
| 40 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 28 |
| 41-42 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 27 |
| 43-44 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 26 |
| 45 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 24 |
| 46-47 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 23 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 5) (ô=139)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(6, 13))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(6, 13))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 4, 5, 5, 5, 4, 4, 3, 4, 3, 2, 4, 4, 4, 4, 4, 3, 5, 0, 0, 0, 1, 1, 0, 4, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 54 |
| 2 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 52 |
| 3 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 50 |
| 4 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 48 |
| 5 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 46 |
| 6 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 55 |
| 7 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 53 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 52 |
| 10-12 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 50 |
| 13-14 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 49 |
| 15-17 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 47 |
| 18 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 45 |
| 19 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 43 |
| 20 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 41 |
| 21 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 39 |
| 22 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 37 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 36 |
| 25-26 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 35 |
| 27 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 33 |
| 28 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 31 |
| 29 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 29 |
| 30-31 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 28 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 27 |
| 34-35 | Di chuyển hướng 0 (`0`) | (7, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 26 |
| 36 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 24 |
| 37 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 22 |
| 38-39 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 21 |
| 40-41 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 20 |
| 42-43 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 19 |
| 44-45 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 18 |
| 46 | Chờ 1 bước (`-1`) | (6, 13) | (6, 13) | Dự kiến đứng yên tại (6, 13); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 18 |
| 47 | Chờ 1 bước (`-1`) | (6, 13) | (6, 13) | Dự kiến đứng yên tại (6, 13); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 18 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (19, 4) (ô=115)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(7, 18))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(7, 18))
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 5, 5, 5, 4, 5, 5, 5, 4, 4, 3, 4, 3, 2, 3, 3, 3, 3, 4, 3, 5, 5, 0, 5, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 54 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 53 |
| 4-5 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 52 |
| 6 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 50 |
| 7 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 48 |
| 8 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 46 |
| 9 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 55 |
| 10 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 53 |
| 11-12 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 52 |
| 13-15 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 50 |
| 16-17 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 49 |
| 18-20 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 47 |
| 21 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 45 |
| 22 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 43 |
| 23 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 41 |
| 24 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 39 |
| 25 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 37 |
| 26-27 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 36 |
| 28-29 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 35 |
| 30 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 33 |
| 31-32 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 32 |
| 33 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 30 |
| 34-35 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 29 |
| 36-37 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 28 |
| 38-39 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 27 |
| 40-41 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 26 |
| 42-44 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 24 |
| 45 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 22 |
| 46-47 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 21 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (17, 5) (ô=137)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 18)
- Mảng hành động đã gửi server: `[0, 2, 3, 4, 5, 5, 5, 0, 4, 4, 0, 0, 0, 1, 4, 4, 4, 4, 4, 4, 3, 4, 3, 2, 3, 3, 2, 4, 3, 4, 3, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 54 |
| 2-3 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 53 |
| 4-5 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 52 |
| 6-7 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 51 |
| 8 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 49 |
| 9 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 47 |
| 10 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 45 |
| 11 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 43 |
| 12-13 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 55 |
| 14 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 53 |
| 15-16 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 52 |
| 17 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 50 |
| 18 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 48 |
| 19 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 46 |
| 20-21 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 45 |
| 22 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 43 |
| 23 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 41 |
| 24-25 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 40 |
| 26-28 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 38 |
| 29 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 36 |
| 30 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 34 |
| 31 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 32 |
| 32 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 30 |
| 33 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 28 |
| 34-35 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 27 |
| 36-37 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 26 |
| 38 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 24 |
| 39-40 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 23 |
| 41-42 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 22 |
| 43 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 20 |
| 44-45 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 19 |
| 46-47 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 18 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (11, 18) (ô=443)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 15)
- Mảng hành động đã gửi server: `[2, 0, 0, 1, 1, 5, 4, 4, 5, 4, 4, 5, 1, 0, 5, 0, 1, 0, 1, 2, 2, 2, 2, 2, 2, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 54 |
| 2-3 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 53 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 52 |
| 6 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 50 |
| 7-8 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 49 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 48 |
| 11 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 46 |
| 12 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 44 |
| 13 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 42 |
| 14 | Di chuyển hướng 4 (`4`) | (9, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 40 |
| 15 | Di chuyển hướng 4 (`4`) | (9, 17) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 38 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 37 |
| 18-19 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 36 |
| 20-21 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 35 |
| 22 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 33 |
| 23 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 31 |
| 24-25 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 30 |
| 26-27 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 29 |
| 28-29 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 28 |
| 30-31 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 27 |
| 32 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 25 |
| 33-35 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 23 |
| 36 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 21 |
| 37-38 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 20 |
| 39-41 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 18 |
| 42-43 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 17 |
| 44-46 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 15 |
| 47 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 13 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 5) (ô=133)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 6)
- Mảng hành động đã gửi server: `[3, -46]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 55 |
| 2-47 | Chờ 46 bước (`-46`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); hướng tới tọa độ (13, 6) | 55 |

