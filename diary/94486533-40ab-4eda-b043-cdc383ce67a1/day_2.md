# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 48
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 15 | #3 | #5 | (11, 21) | 2 | 51 |
| 24 | #2 | #5 | (8, 17) | 37 | 51 |
| 25 | #2 | #5 | (7, 16) | 49 | 51 |
| 43 | #0 | #5 | (7, 16) | 8 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 7) (ô=162)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 5, 4, 4, 4, 4, 4, 2, 3, 3, 2, 2, 3, 3, 2, 3, 3, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 34 |
| 3-4 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 33 |
| 5 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 31 |
| 6-8 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 29 |
| 9-11 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 27 |
| 12-13 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 26 |
| 14-16 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 24 |
| 17-19 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 22 |
| 20-21 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 21 |
| 22-23 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 20 |
| 24-25 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 19 |
| 26-27 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 18 |
| 28-30 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 16 |
| 31-32 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 15 |
| 33-35 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 13 |
| 36 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 11 |
| 37-38 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 10 |
| 39-40 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 9 |
| 41-42 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 43-44 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 50 |
| 45 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 48 |
| 46 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 46 |
| 47 | Chờ 1 bước (`-1`) | (7, 19) | (7, 19) | Dự kiến đứng yên tại (7, 19); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 46 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(18, 8))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(18, 8))
- Mảng hành động đã gửi server: `[4, 2, 3, 2, 3, 3, 2, 4, 4, 5, 4, 4, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 18 |
| 2-3 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 17 |
| 4 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 15 |
| 5 | Di chuyển hướng 2 (`2`) | (18, 2) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 13 |
| 6 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 11 |
| 7-8 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 10 |
| 9-11 | Di chuyển hướng 2 (`2`) | (20, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 8 |
| 12-13 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 7 |
| 14-16 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 5 |
| 17-18 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 4 |
| 19-20 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 3 |
| 21-22 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 2 |
| 23-47 | Chờ 25 bước (`-25`) | (18, 8) | (18, 8) | Dự kiến đứng yên tại (18, 8); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 16) (ô=357)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 6)
- Mảng hành động đã gửi server: `[1, 2, 5, 4, 5, 4, 3, 2, 3, 2, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 50 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 49 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 48 |
| 6-7 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 47 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 46 |
| 10-11 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 45 |
| 12-13 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 44 |
| 14-15 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 43 |
| 16-18 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 41 |
| 19-20 | Di chuyển hướng 2 (`2`) | (6, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 40 |
| 21-22 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 39 |
| 23 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 51 |
| 24 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 25-26 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 50 |
| 27 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 48 |
| 28-29 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 47 |
| 30-32 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 45 |
| 33-34 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 44 |
| 35-36 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 43 |
| 37-38 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 42 |
| 39-41 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 40 |
| 42-43 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 39 |
| 44-45 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 38 |
| 46-47 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 37 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 21) (ô=473)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(17, 21))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(17, 21))
- Mảng hành động đã gửi server: `[-16, 0, 1, 0, 5, 5, 4, 5, 2, 1, 2, 2, 2, 2, 2, 3, 3, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-15 | Chờ 16 bước (`-16`) | (11, 21) | (11, 21) | Dự kiến đứng yên tại (11, 21); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 51 |
| 16-17 | Di chuyển hướng 0 (`0`) | (11, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 50 |
| 18 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 48 |
| 19-20 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 47 |
| 21-22 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 46 |
| 23 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 44 |
| 24-26 | Di chuyển hướng 4 (`4`) | (8, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 42 |
| 27 | Di chuyển hướng 5 (`5`) | (8, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 40 |
| 28-29 | Di chuyển hướng 2 (`2`) | (7, 19) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 39 |
| 30 | Di chuyển hướng 1 (`1`) | (8, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 37 |
| 31-33 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 35 |
| 34 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 33 |
| 35-36 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 32 |
| 37-38 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 31 |
| 39-40 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 30 |
| 41 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 28 |
| 42-43 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 27 |
| 44 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 25 |
| 45 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 23 |
| 46-47 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(17, 21)) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 10) (ô=240)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(20, 10))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(20, 10))
- Mảng hành động đã gửi server: `[-48]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-47 | Chờ 48 bước (`-48`) | (20, 10) | (20, 10) | Dự kiến đứng yên tại (20, 10); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 2 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (5, 16) (ô=357)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 16)
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 3, 3, 3, 3, 0, 0, 0, 0, 5, 0, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 51 |
| 2-4 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 5-6 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 51 |
| 7 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 51 |
| 8-9 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 51 |
| 10 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 51 |
| 11-13 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 51 |
| 14 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 51 |
| 15-16 | Di chuyển hướng 0 (`0`) | (11, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 51 |
| 17 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 51 |
| 18-20 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 51 |
| 21 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 51 |
| 22-23 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 51 |
| 24 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 25-47 | Chờ 23 bước (`-23`) | (7, 16) | (7, 16) | Dự kiến đứng yên tại (7, 16); hướng tới tọa độ (7, 16) | 51 |

