# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 63
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 10 | #2 | #4 | (13, 13) | 47 | 59 |
| 28 | #0 | #4 | (13, 13) | 7 | 59 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 14) (ô=282)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(11, 9))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(11, 9))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 2, 3, 3, 3, 3, 4, 2, 3, 2, -1, 2, 2, 2, 2, 5, 5, 0, 0, 0, 0, 5, 0, 0, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 14)) | 28 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 27 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 26 |
| 6-8 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(6, 14)) | 24 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 23 |
| 11 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 21 |
| 12 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 19 |
| 13 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 17 |
| 14-15 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 16 |
| 16-17 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 15 |
| 18-19 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 13 |
| 20-21 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 12 |
| 22 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 10 |
| 23-25 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 8 |
| 26-27 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 13)) | 59 |
| 28-29 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 14)) | 58 |
| 30-31 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 57 |
| 32-33 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 56 |
| 34-35 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 15)) | 55 |
| 36 | Chờ 1 bước (`-1`) | (15, 15) | (15, 15) | Dự kiến đứng yên tại (15, 15); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 15)) | 55 |
| 37-38 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 54 |
| 39-40 | Di chuyển hướng 2 (`2`) | (16, 15) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 53 |
| 41 | Di chuyển hướng 2 (`2`) | (17, 15) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 51 |
| 42-43 | Di chuyển hướng 2 (`2`) | (18, 15) | (19, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 15)) | 50 |
| 44-45 | Di chuyển hướng 5 (`5`) | (19, 15) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 49 |
| 46-47 | Di chuyển hướng 5 (`5`) | (18, 15) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 48 |
| 48 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 46 |
| 49-50 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 45 |
| 51-52 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 44 |
| 53 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 42 |
| 54 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 11)) | 40 |
| 55-56 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 39 |
| 57-58 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 38 |
| 59 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 36 |
| 60-61 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 35 |
| 62 | Chờ 1 bước (`-1`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 35 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 14) (ô=298)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(0, 11))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(0, 11))
- Mảng hành động đã gửi server: `[1, 1, 5, 5, 5, 5, 0, 5, 0, 0, 5, 5, 5, 5, 0, 0, 5, 5, 2, 2, 3, 4, 4, 4, 3, 4, 4, 5, 5, 5, 5, 0, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 49 |
| 2-3 | Di chuyển hướng 1 (`1`) | (19, 13) | (19, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 12)) | 48 |
| 4-5 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 47 |
| 6-7 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 46 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 45 |
| 10 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 43 |
| 11 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 41 |
| 12 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 11)) | 39 |
| 13-14 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 38 |
| 15-16 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 37 |
| 17 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 35 |
| 18-19 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 34 |
| 20-21 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 33 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 31 |
| 24-27 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 29 |
| 28 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 27 |
| 29 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 25 |
| 30-31 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 7)) | 24 |
| 32-33 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 23 |
| 34-35 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 22 |
| 36 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 20 |
| 37 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 18 |
| 38 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 16 |
| 39-40 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 15 |
| 41-42 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 14 |
| 43-44 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 13 |
| 45 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(6, 14)) | 11 |
| 46-47 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 10 |
| 48-50 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 8 |
| 51-52 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 14)) | 7 |
| 53-54 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 6 |
| 55-56 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 5 |
| 57-58 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 4 |
| 59 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 2 |
| 60-61 | Di chuyển hướng 5 (`5`) | (1, 11) | (0, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 11)) | 1 |
| 62 | Chờ 1 bước (`-1`) | (0, 11) | (0, 11) | Dự kiến đứng yên tại (0, 11); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 11)) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 14) (ô=294)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 13)
- Mảng hành động đã gửi server: `[0, 0, 1, 4, 4, 4, 0, 0, 0, 1, 0, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, 4, 4, 2, 3, 3, 3, 2, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 51 |
| 2-3 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 50 |
| 4-5 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 11)) | 49 |
| 6-7 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 48 |
| 8-9 | Di chuyển hướng 4 (`4`) | (13, 12) | (13, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 13)) | 59 |
| 10-11 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 14)) | 58 |
| 12-13 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 57 |
| 14-16 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 55 |
| 17 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 53 |
| 18-19 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 52 |
| 20 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 50 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 49 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 47 |
| 25-26 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 46 |
| 27-28 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 45 |
| 29-30 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 44 |
| 31-32 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 43 |
| 33-34 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 42 |
| 35 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 40 |
| 36-37 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 39 |
| 38-39 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 38 |
| 40 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 9)) | 36 |
| 41-42 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 35 |
| 43-44 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 11)) | 34 |
| 45-46 | Di chuyển hướng 2 (`2`) | (0, 11) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 33 |
| 47-48 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 32 |
| 49 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 30 |
| 50-51 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 29 |
| 52-53 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 14)) | 28 |
| 54-55 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 27 |
| 56-57 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 26 |
| 58-60 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(6, 14)) | 24 |
| 61-62 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 23 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 1) (ô=38)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(15, 6))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(15, 6))
- Mảng hành động đã gửi server: `[2, 3, 4, 4, 4, 5, 5, 4, -51]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (18, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 11 |
| 2-3 | Di chuyển hướng 3 (`3`) | (19, 1) | (19, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 2)) | 10 |
| 4-5 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 9 |
| 6 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 7 |
| 7 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 5 |
| 8 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 5)) | 3 |
| 9-10 | Di chuyển hướng 5 (`5`) | (17, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 2 |
| 11 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 6)) | 0 |
| 12-62 | Chờ 51 bước (`-51`) | (15, 6) | (15, 6) | Dự kiến đứng yên tại (15, 6); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 6)) | 0 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (13, 13) (ô=273)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(13, 13))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(13, 13))
- Mảng hành động đã gửi server: `[-63]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-62 | Chờ 63 bước (`-63`) | (13, 13) | (13, 13) | Dự kiến đứng yên tại (13, 13); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 13)) | 59 |

