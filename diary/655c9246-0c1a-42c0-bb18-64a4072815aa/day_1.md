# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 43
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 17 | #0 | #4 | (9, 9) | 46 | 59 |
| 39 | #1 | #4 | (9, 9) | 0 | 59 |
| 43 | #3 | #4 | (9, 9) | 4 | 59 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 9) (ô=191)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(17, 5))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(17, 5))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 0, 0, 5, 5, 5, 5, 0, 0, 1, 1, 1, 1, 2, 3, 3, 3, 2, 2, 2, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 58 |
| 2-3 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 57 |
| 4 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 55 |
| 5-6 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 11)) | 54 |
| 7-8 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 53 |
| 9-10 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 52 |
| 11 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 50 |
| 12-13 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 49 |
| 14-15 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 48 |
| 16 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 59 |
| 17 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 57 |
| 18 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 55 |
| 19 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 53 |
| 20-21 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 52 |
| 22-24 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 50 |
| 25-26 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 49 |
| 27 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 47 |
| 28-29 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 46 |
| 30-31 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 45 |
| 32-33 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 44 |
| 34-35 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 43 |
| 36-37 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 42 |
| 38 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 6)) | 40 |
| 39-40 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 39 |
| 41 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 5)) | 37 |
| 42 | Chờ 1 bước (`-1`) | (17, 5) | (17, 5) | Dự kiến đứng yên tại (17, 5); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 5)) | 37 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 6) (ô=128)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 10)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 0, 5, 0, 5, 5, 5, 2, 3, 3, 3, 3, 2, 2, 2, -1, 2, 2, 3, 3, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 27 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 26 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 25 |
| 6-7 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 24 |
| 8-9 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 23 |
| 10 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 21 |
| 11-12 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 20 |
| 13 | Di chuyển hướng 5 (`5`) | (3, 3) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 18 |
| 14-15 | Di chuyển hướng 5 (`5`) | (2, 3) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 17 |
| 16-17 | Di chuyển hướng 5 (`5`) | (1, 3) | (0, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(0, 3)) | 16 |
| 18-19 | Di chuyển hướng 2 (`2`) | (0, 3) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 15 |
| 20-21 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 14 |
| 22-23 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 13 |
| 24-25 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 12 |
| 26 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 10 |
| 27-28 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 9 |
| 29-30 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 8 |
| 31 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 7)) | 6 |
| 32 | Chờ 1 bước (`-1`) | (6, 7) | (6, 7) | Dự kiến đứng yên tại (6, 7); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 7)) | 6 |
| 33-34 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 5 |
| 35-36 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 4 |
| 37 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 2 |
| 38 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 59 |
| 39 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 57 |
| 40 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 55 |
| 41-42 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 54 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 14) (ô=298)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(11, 9))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(11, 9))
- Mảng hành động đã gửi server: `[1, 1, 5, 5, 5, 5, 4, 5, 5, 4, 2, 3, 2, 0, 0, 0, 1, 0, 0, 5, 5, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 31 |
| 2-3 | Di chuyển hướng 1 (`1`) | (19, 13) | (19, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 12)) | 30 |
| 4-5 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 29 |
| 6-7 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 28 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 27 |
| 10 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 25 |
| 11 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 23 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 22 |
| 14-15 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 13)) | 21 |
| 16-17 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 14)) | 20 |
| 18-19 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 19 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 18 |
| 22-23 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 15)) | 17 |
| 24-25 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 16 |
| 26-27 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 15 |
| 28-29 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 14 |
| 30-31 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 11)) | 13 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 12 |
| 34-35 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 11 |
| 36 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 9 |
| 37-38 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 8 |
| 39-42 | Chờ 4 bước (`-4`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 8 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=187)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 9)
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 3, 5, 5, 5, 5, 0, 0, 0, 5, 1, 1, 2, 3, 2, 2, 2, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 33 |
| 1-2 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 32 |
| 3 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 30 |
| 4 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 28 |
| 5-6 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(6, 14)) | 27 |
| 7-8 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 26 |
| 9-11 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 24 |
| 12-13 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 14)) | 23 |
| 14-15 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 22 |
| 16-17 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 21 |
| 18-19 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 20 |
| 20 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 18 |
| 21-22 | Di chuyển hướng 5 (`5`) | (1, 11) | (0, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 11)) | 17 |
| 23-24 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 16 |
| 25-26 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 9)) | 15 |
| 27-28 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 14 |
| 29 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 12 |
| 30-31 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 11 |
| 32-33 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 10 |
| 34 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 8 |
| 35-36 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 7 |
| 37-38 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 6 |
| 39-40 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 5 |
| 41-42 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 59 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (11, 9) (ô=191)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 9)
- Mảng hành động đã gửi server: `[5, 5, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 59 |
| 2 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 59 |
| 3-42 | Chờ 40 bước (`-40`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); hướng tới tọa độ (9, 9) | 59 |

