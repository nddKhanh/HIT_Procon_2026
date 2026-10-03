# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 50
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #5 | (7, 15) | 50 | 51 |
| 4 | #2 | #5 | (7, 16) | 50 | 51 |
| 6 | #2 | #5 | (8, 17) | 50 | 51 |
| 14 | #3 | #5 | (11, 21) | 2 | 51 |
| 18 | #3 | #5 | (11, 19) | 48 | 51 |
| 42 | #4 | #5 | (20, 10) | 2 | 51 |
| 44 | #4 | #5 | (20, 9) | 50 | 51 |
| 46 | #1 | #5 | (18, 8) | 0 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 7) (ô=162)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 4, 4, 1, 1, 1, 1, 0, 0, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 34 |
| 3-4 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 33 |
| 5-6 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 32 |
| 7-9 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 30 |
| 10-11 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 29 |
| 12-13 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 28 |
| 14-15 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 27 |
| 16-17 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 26 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 25 |
| 20-22 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 23 |
| 23-24 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 22 |
| 25-26 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 21 |
| 27-28 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 20 |
| 29 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 18 |
| 30 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 16 |
| 31-33 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 14 |
| 34 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 12 |
| 35-37 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 10 |
| 38 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 8 |
| 39-41 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 6 |
| 42-44 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 4 |
| 45-46 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 3 |
| 47-49 | Chờ 3 bước (`-3`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 1) (ô=40)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(20, 10))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(20, 10))
- Mảng hành động đã gửi server: `[5, 2, 3, 2, 3, 3, 2, 4, 4, 5, 4, 4, -24, 3, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (18, 1) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 16 |
| 1-2 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 15 |
| 3 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 13 |
| 4 | Di chuyển hướng 2 (`2`) | (18, 2) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 11 |
| 5 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 9 |
| 6-7 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 8 |
| 8-10 | Di chuyển hướng 2 (`2`) | (20, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 6 |
| 11-12 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 5 |
| 13-15 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 3 |
| 16-17 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 2 |
| 18-19 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 1 |
| 20-21 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 0 |
| 22-45 | Chờ 24 bước (`-24`) | (18, 8) | (18, 8) | Dự kiến đứng yên tại (18, 8); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 51 |
| 46-47 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 50 |
| 48 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 48 |
| 49 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 46 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 15) (ô=336)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 6)
- Mảng hành động đã gửi server: `[2, 3, 3, 4, 4, 5, 0, 5, 0, 0, 0, 0, 1, 0, 0, 0, 4, 1, 1, 1, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 51 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 4-5 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 51 |
| 6 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 49 |
| 7 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 47 |
| 8-9 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 46 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 45 |
| 12-14 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 43 |
| 15-16 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 42 |
| 17-18 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 41 |
| 19-21 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 39 |
| 22-24 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 37 |
| 25-26 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 36 |
| 27-28 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 35 |
| 29-31 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 33 |
| 32-33 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 32 |
| 34-35 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 31 |
| 36-37 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 30 |
| 38-39 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 29 |
| 40-41 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 28 |
| 42-44 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 26 |
| 45-47 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 24 |
| 48-49 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 23 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 21) (ô=473)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 19)
- Mảng hành động đã gửi server: `[-15, 0, 1, 0, 5, 5, 4, 5, 2, 1, 2, 2, 2, 2, 2, 3, 3, 2, 2, 3, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-14 | Chờ 15 bước (`-15`) | (11, 21) | (11, 21) | Dự kiến đứng yên tại (11, 21); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 51 |
| 15-16 | Di chuyển hướng 0 (`0`) | (11, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 50 |
| 17 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 51 |
| 18-19 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 50 |
| 20-21 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 49 |
| 22 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 47 |
| 23-25 | Di chuyển hướng 4 (`4`) | (8, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 45 |
| 26 | Di chuyển hướng 5 (`5`) | (8, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 43 |
| 27-28 | Di chuyển hướng 2 (`2`) | (7, 19) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 42 |
| 29 | Di chuyển hướng 1 (`1`) | (8, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 40 |
| 30-32 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 38 |
| 33 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 36 |
| 34-35 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 35 |
| 36-37 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 34 |
| 38-39 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 33 |
| 40 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 31 |
| 41-42 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 30 |
| 43 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 28 |
| 44 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 26 |
| 45-46 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(17, 21)) | 25 |
| 47-48 | Di chuyển hướng 1 (`1`) | (17, 21) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 24 |
| 49 | Di chuyển hướng 1 (`1`) | (17, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 10) (ô=240)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 5)
- Mảng hành động đã gửi server: `[-42, 0, 1, 0, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-41 | Chờ 42 bước (`-42`) | (20, 10) | (20, 10) | Dự kiến đứng yên tại (20, 10); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 51 |
| 42-43 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 51 |
| 44 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 49 |
| 45 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 47 |
| 46-47 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 46 |
| 48-49 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 45 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (6, 15) (ô=336)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(18, 8))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(18, 8))
- Mảng hành động đã gửi server: `[2, 3, 3, 2, 3, 3, 3, 3, 0, 1, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 0, 1, 1, 2, 3, 0, 5, 0, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 51 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 4-5 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 51 |
| 6 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 51 |
| 7-8 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 51 |
| 9 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 51 |
| 10-12 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 51 |
| 13 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 51 |
| 14-15 | Di chuyển hướng 0 (`0`) | (11, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 51 |
| 16 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 51 |
| 17-18 | Di chuyển hướng 1 (`1`) | (11, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 51 |
| 19-20 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 51 |
| 21-22 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 51 |
| 23 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 51 |
| 24 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 51 |
| 25-27 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 51 |
| 28 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 51 |
| 29-31 | Di chuyển hướng 2 (`2`) | (16, 15) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 51 |
| 32-33 | Di chuyển hướng 1 (`1`) | (17, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 51 |
| 34 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 51 |
| 35 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 51 |
| 36 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 51 |
| 37-38 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 51 |
| 39 | Di chuyển hướng 1 (`1`) | (18, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 51 |
| 40 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 51 |
| 41 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 51 |
| 42-43 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 51 |
| 44 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 51 |
| 45 | Di chuyển hướng 0 (`0`) | (19, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 51 |
| 46-49 | Chờ 4 bước (`-4`) | (18, 8) | (18, 8) | Dự kiến đứng yên tại (18, 8); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 51 |

