# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 50
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #2 | #4 | (12, 14) | 0 | 59 |
| 17 | #2 | #4 | (12, 13) | 58 | 59 |
| 21 | #2 | #4 | (11, 11) | 55 | 59 |
| 24 | #2 | #4 | (11, 9) | 56 | 59 |
| 36 | #0 | #4 | (7, 5) | 7 | 59 |
| 44 | #3 | #4 | (8, 9) | 30 | 59 |
| 46 | #0 | #4 | (9, 9) | 51 | 59 |
| 47 | #1 | #4 | (9, 9) | 18 | 59 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (17, 5) (ô=117)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 9)
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 0, 5, 4, 4, 4, 4, 4, 5, 5, 0, 0, 5, 0, 5, 5, 5, 4, 4, 4, 4, 2, 2, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 36 |
| 2 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 34 |
| 3 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 32 |
| 4 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 2)) | 30 |
| 5-6 | Di chuyển hướng 0 (`0`) | (19, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 29 |
| 7-8 | Di chuyển hướng 5 (`5`) | (19, 1) | (18, 1) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(18, 1)) | 28 |
| 9-10 | Di chuyển hướng 4 (`4`) | (18, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 27 |
| 11-12 | Di chuyển hướng 4 (`4`) | (17, 2) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 26 |
| 13 | Di chuyển hướng 4 (`4`) | (17, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 24 |
| 14-15 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 23 |
| 16 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 6)) | 21 |
| 17-18 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 20 |
| 19 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 18 |
| 20-21 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 17 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 16 |
| 24-25 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 15 |
| 26-27 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 14 |
| 28-29 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 13 |
| 30 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 11 |
| 31-32 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 10 |
| 33 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 8 |
| 34-35 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 59 |
| 36-37 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 58 |
| 38-39 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 7)) | 57 |
| 40-41 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 56 |
| 42-43 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 55 |
| 44 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 53 |
| 45 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 59 |
| 46-49 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 57 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 10) (ô=211)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 9)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 2, 2, 2, 2, 4, 4, 5, 4, 5, 5, 0, 5, 5, 1, 1, 1, 0, 0, 5, 5, 5, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 52 |
| 1-3 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 50 |
| 4-5 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 49 |
| 6 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 47 |
| 7 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 45 |
| 8 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 43 |
| 9 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 41 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 40 |
| 12-13 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 12)) | 39 |
| 14-15 | Di chuyển hướng 4 (`4`) | (19, 12) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 38 |
| 16-17 | Di chuyển hướng 4 (`4`) | (19, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 37 |
| 18-19 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 36 |
| 20-21 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 35 |
| 22 | Di chuyển hướng 5 (`5`) | (17, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 33 |
| 23-24 | Di chuyển hướng 5 (`5`) | (16, 15) | (15, 15) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 15)) | 32 |
| 25-26 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 31 |
| 27-28 | Di chuyển hướng 5 (`5`) | (14, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 30 |
| 29-30 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 14)) | 29 |
| 31-32 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 13)) | 28 |
| 33-34 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 27 |
| 35-36 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 11)) | 26 |
| 37-38 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 25 |
| 39-40 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 24 |
| 41 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 22 |
| 42-43 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 21 |
| 44-45 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 20 |
| 46 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 59 |
| 47-49 | Chờ 3 bước (`-3`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); hướng tới tọa độ (9, 9) | 59 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 9) (ô=191)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 11)
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 4, 4, 4, -2, 0, 0, 0, 1, 0, 5, 4, 4, 4, 4, 5, 5, 5, 5, 4, 5, 0, 0, 0, 5, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 7 |
| 2-3 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 6 |
| 4 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 4 |
| 5-6 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 11)) | 3 |
| 7-8 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 2 |
| 9-10 | Di chuyển hướng 4 (`4`) | (13, 12) | (13, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 13)) | 1 |
| 11-12 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 14)) | 0 |
| 13-14 | Chờ 2 bước (`-2`) | (12, 14) | (12, 14) | Dự kiến đứng yên tại (12, 14); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 14)) | 59 |
| 15-16 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 59 |
| 17-19 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 57 |
| 20 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 59 |
| 21-22 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 58 |
| 23 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 59 |
| 24-25 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 58 |
| 26 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 56 |
| 27-28 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 55 |
| 29-30 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 54 |
| 31 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 52 |
| 32 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 50 |
| 33 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 48 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 47 |
| 36 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 45 |
| 37 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 14)) | 43 |
| 38-39 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 42 |
| 40-41 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 41 |
| 42-43 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 40 |
| 44 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 38 |
| 45-46 | Di chuyển hướng 5 (`5`) | (1, 11) | (0, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 11)) | 37 |
| 47-48 | Di chuyển hướng 2 (`2`) | (0, 11) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 36 |
| 49 | Chờ 1 bước (`-1`) | (1, 11) | (1, 11) | Dự kiến đứng yên tại (1, 11); hướng tới tọa độ (1, 11) | 36 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 9) (ô=189)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(6, 7))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(6, 7))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 5, 5, 5, 5, 0, 0, 0, 5, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 0, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 57 |
| 4-5 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 56 |
| 6-7 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 55 |
| 8-9 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 54 |
| 10 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(6, 14)) | 52 |
| 11-12 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 51 |
| 13-15 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 49 |
| 16-17 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 14)) | 48 |
| 18-19 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 47 |
| 20-21 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 46 |
| 22-23 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 45 |
| 24 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 43 |
| 25-26 | Di chuyển hướng 5 (`5`) | (1, 11) | (0, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 11)) | 42 |
| 27-28 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 41 |
| 29-30 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 9)) | 40 |
| 31-32 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 39 |
| 33 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 37 |
| 34-35 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 36 |
| 36-38 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 34 |
| 39-40 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 33 |
| 41-42 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 32 |
| 43 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 59 |
| 44 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 57 |
| 45 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 55 |
| 46 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 53 |
| 47-48 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 7)) | 52 |
| 49 | Chờ 1 bước (`-1`) | (6, 7) | (6, 7) | Dự kiến đứng yên tại (6, 7); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 7)) | 52 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (9, 9) (ô=189)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 9)
- Mảng hành động đã gửi server: `[2, 2, 3, 4, 3, 3, 3, 0, 0, 0, 1, 0, 5, 5, 0, 0, 0, 0, 3, 3, 3, 4, -2, 2, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 59 |
| 4 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 59 |
| 5-6 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 59 |
| 7 | Di chuyển hướng 4 (`4`) | (11, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 59 |
| 8-9 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 59 |
| 10 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 59 |
| 11-13 | Di chuyển hướng 3 (`3`) | (12, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 14)) | 59 |
| 14-15 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 59 |
| 16-18 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 59 |
| 19 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 59 |
| 20-21 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 59 |
| 22 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 59 |
| 23-24 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 59 |
| 25 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 59 |
| 26-29 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 59 |
| 30 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 59 |
| 31 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 59 |
| 32-34 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 59 |
| 35-36 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 59 |
| 37-39 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 59 |
| 40 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 59 |
| 41 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 59 |
| 42-43 | Chờ 2 bước (`-2`) | (8, 9) | (8, 9) | Dự kiến đứng yên tại (8, 9); hướng tới tọa độ (8, 9) | 59 |
| 44 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 59 |
| 45-49 | Chờ 5 bước (`-5`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); hướng tới tọa độ (9, 9) | 59 |

