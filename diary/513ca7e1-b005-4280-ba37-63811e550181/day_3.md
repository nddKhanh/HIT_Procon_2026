# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 54
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 26 | #0 | #6 | (13, 7) | 0 | 55 |
| 26 | #2 | #6 | (13, 7) | 0 | 55 |
| 32 | #1 | #6 | (12, 3) | 3 | 55 |
| 34 | #1 | #6 | (11, 4) | 54 | 55 |
| 36 | #1 | #6 | (12, 5) | 53 | 55 |
| 37 | #1 | #6 | (12, 6) | 53 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 7) (ô=181)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 11)
- Mảng hành động đã gửi server: `[-27, 1, 1, 3, 2, 1, 1, 2, 3, 3, 3, 4, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-26 | Chờ 27 bước (`-27`) | (13, 7) | (13, 7) | Dự kiến đứng yên tại (13, 7); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 55 |
| 27-28 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 54 |
| 29-30 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 52 |
| 31-32 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 51 |
| 33-34 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 49 |
| 35-38 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 47 |
| 39-40 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 45 |
| 41-42 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 44 |
| 43-44 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 43 |
| 45-46 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 42 |
| 47-48 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 40 |
| 49-50 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 39 |
| 51 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 37 |
| 52 | Di chuyển hướng 3 (`3`) | (18, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 35 |
| 53 | Di chuyển hướng 4 (`4`) | (18, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 33 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 3) (ô=84)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(17, 4))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(17, 4))
- Mảng hành động đã gửi server: `[-32, 4, 3, 3, 3, 1, 1, 3, 2, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-31 | Chờ 32 bước (`-32`) | (12, 3) | (12, 3) | Dự kiến đứng yên tại (12, 3); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 55 |
| 32-33 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 34-35 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 55 |
| 36 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 55 |
| 37 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 53 |
| 38-39 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 52 |
| 40-41 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 50 |
| 42-43 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 49 |
| 44-45 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 47 |
| 46-49 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 45 |
| 50-51 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 43 |
| 52-53 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 42 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 8) (ô=201)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(13, 7))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(13, 7))
- Mảng hành động đã gửi server: `[0, 2, 2, 2, 2, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 7 |
| 2 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 5 |
| 3-5 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 3 |
| 6-7 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 2 |
| 8-10 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 0 |
| 11-53 | Chờ 43 bước (`-43`) | (13, 7) | (13, 7) | Dự kiến đứng yên tại (13, 7); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 55 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 14) (ô=348)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Mảng hành động đã gửi server: `[5, 0, 0, 4, 5, 0, 5, 5, 4, 3, 4, 3, 3, 3, 2, 0, 2, 3, 2, 2, 1, 3, 0, 1, 0, 1, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 50 |
| 2-3 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 48 |
| 4-5 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 47 |
| 6-7 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 46 |
| 8-9 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 45 |
| 10 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 43 |
| 11-13 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 41 |
| 14 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 39 |
| 15-16 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 38 |
| 17-18 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 37 |
| 19-20 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 36 |
| 21-22 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 35 |
| 23-24 | Di chuyển hướng 3 (`3`) | (6, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 33 |
| 25 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 31 |
| 26-27 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 30 |
| 28-29 | Di chuyển hướng 0 (`0`) | (8, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 29 |
| 30-31 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 28 |
| 32 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 26 |
| 33-35 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 24 |
| 36-37 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 23 |
| 38-39 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 22 |
| 40-41 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 21 |
| 42-43 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 20 |
| 44-45 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 19 |
| 46 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 17 |
| 47-48 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 16 |
| 49-50 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 15 |
| 51-53 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 13 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 18) (ô=444)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(11, 7))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(11, 7))
- Mảng hành động đã gửi server: `[0, 1, 2, 2, 2, 2, 2, 1, 1, 0, 1, 0, 1, 0, 1, 2, 0, 0, 0, 0, 5, 4, 4, 5, 0, 4, 4, 5, 5, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 53 |
| 2-3 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 52 |
| 4 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 50 |
| 5 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 48 |
| 6 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 46 |
| 7 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 44 |
| 8 | Di chuyển hướng 2 (`2`) | (16, 16) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 42 |
| 9 | Di chuyển hướng 1 (`1`) | (17, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 40 |
| 10 | Di chuyển hướng 1 (`1`) | (18, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 38 |
| 11 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 36 |
| 12 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 34 |
| 13 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 32 |
| 14 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 30 |
| 15 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 28 |
| 16 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 26 |
| 17 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 8)) | 24 |
| 18-19 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 23 |
| 20-21 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 22 |
| 22-23 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 20 |
| 24-25 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 19 |
| 26-27 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 18 |
| 28-29 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 17 |
| 30-31 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 15 |
| 32-35 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 13 |
| 36-37 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 11 |
| 38-39 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 10 |
| 40-41 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 8 |
| 42-43 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 7 |
| 44-46 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 5 |
| 47-53 | Chờ 7 bước (`-7`) | (11, 7) | (11, 7) | Dự kiến đứng yên tại (11, 7); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 5 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (7, 13) (ô=319)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(10, 12))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(10, 12))
- Mảng hành động đã gửi server: `[0, 4, 3, 4, 3, 3, 3, 2, 0, 2, 3, 2, 2, 2, 0, 1, 0, 1, 0, 1, 5, 5, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 32 |
| 2-3 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 31 |
| 4-5 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 30 |
| 6-7 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 29 |
| 8-9 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 28 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 26 |
| 12 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 24 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 23 |
| 15-16 | Di chuyển hướng 0 (`0`) | (8, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 22 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 21 |
| 19 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 19 |
| 20-22 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 17 |
| 23-24 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 16 |
| 25-26 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 15 |
| 27-28 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 14 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 13 |
| 31 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 11 |
| 32-33 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 10 |
| 34-35 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 9 |
| 36-38 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 7 |
| 39-40 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 6 |
| 41-43 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 4 |
| 44-53 | Chờ 10 bước (`-10`) | (10, 12) | (10, 12) | Dự kiến đứng yên tại (10, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 4 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 17) (ô=420)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 6)
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 5, 5, 5, 4, 5, 0, 0, 0, 1, 4, 3, 3, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 55 |
| 2 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 55 |
| 3 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 55 |
| 4 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 55 |
| 5 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 55 |
| 6 | Di chuyển hướng 2 (`2`) | (16, 16) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 55 |
| 7 | Di chuyển hướng 1 (`1`) | (17, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 55 |
| 8 | Di chuyển hướng 1 (`1`) | (18, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 55 |
| 9 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 55 |
| 10 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 55 |
| 11 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 55 |
| 12 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 55 |
| 13 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 55 |
| 14 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 55 |
| 15 | Di chuyển hướng 1 (`1`) | (17, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 55 |
| 16 | Di chuyển hướng 0 (`0`) | (18, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 55 |
| 17 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 55 |
| 18 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 55 |
| 19-22 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 55 |
| 23-24 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 55 |
| 25 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 55 |
| 26-27 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 55 |
| 28 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 55 |
| 29 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 30-31 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 55 |
| 32-33 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 34-35 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 55 |
| 36 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 55 |
| 37-53 | Chờ 17 bước (`-17`) | (12, 6) | (12, 6) | Dự kiến đứng yên tại (12, 6); hướng tới tọa độ (12, 6) | 55 |

