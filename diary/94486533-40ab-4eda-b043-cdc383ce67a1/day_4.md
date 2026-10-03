# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 51
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 13 | #0 | #5 | (17, 1) | 2 | 51 |
| 19 | #0 | #5 | (20, 3) | 44 | 51 |
| 21 | #0 | #5 | (20, 4) | 50 | 51 |
| 26 | #0 | #5 | (21, 5) | 48 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(11, 7))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(11, 7))
- Mảng hành động đã gửi server: `[4, -12, 2, 3, 2, 3, 3, 2, 4, 4, 5, 4, 4, 4, 5, 5, 5, 5, 5, 0, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 2 |
| 2-13 | Chờ 12 bước (`-12`) | (17, 1) | (17, 1) | Dự kiến đứng yên tại (17, 1); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 51 |
| 14-15 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 50 |
| 16 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 48 |
| 17 | Di chuyển hướng 2 (`2`) | (18, 2) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 46 |
| 18 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 51 |
| 19-20 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 51 |
| 21-23 | Di chuyển hướng 2 (`2`) | (20, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 49 |
| 24-25 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 51 |
| 26-28 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 49 |
| 29-30 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 48 |
| 31-32 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 47 |
| 33-34 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 46 |
| 35-36 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 45 |
| 37 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 43 |
| 38 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 41 |
| 39-40 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 40 |
| 41-43 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 38 |
| 44 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 36 |
| 45 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 34 |
| 46-47 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 33 |
| 48-49 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 32 |
| 50 | Chờ 1 bước (`-1`) | (11, 7) | (11, 7) | Dự kiến đứng yên tại (11, 7); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 32 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 10) (ô=240)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(2, 11))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(2, 11))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 5, 0, 0, 5, 5, 5, 5, 5, 5, 0, 5, 5, 4, 4, 4, 4, 4, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 45 |
| 2-3 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 43 |
| 4-5 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 41 |
| 6 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 39 |
| 7 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 37 |
| 8-9 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 36 |
| 10-12 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 34 |
| 13 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 32 |
| 14 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 30 |
| 15-16 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 29 |
| 17 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 27 |
| 18-19 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 26 |
| 20 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 24 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 23 |
| 23-25 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 21 |
| 26-27 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 20 |
| 28 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 18 |
| 29-31 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 16 |
| 32-34 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 14 |
| 35-36 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 13 |
| 37-39 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 11 |
| 40-42 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 9 |
| 43-44 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 8 |
| 45-46 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 7 |
| 47-48 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 6 |
| 49-50 | Chờ 2 bước (`-2`) | (2, 11) | (2, 11) | Dự kiến đứng yên tại (2, 11); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 6 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 6) (ô=136)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 4, 4, 2, 3, 3, 4, 3, 3, 3, 3, 2, 3, 2, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 21 |
| 3-5 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 19 |
| 6-7 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 18 |
| 8-9 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 17 |
| 10-11 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 16 |
| 12-13 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 15 |
| 14-15 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 14 |
| 16-17 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 13 |
| 18-20 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 11 |
| 21-22 | Di chuyển hướng 4 (`4`) | (3, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 10 |
| 23-24 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 9 |
| 25-27 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 7 |
| 28-30 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 5 |
| 31-32 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 4 |
| 33-34 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 3 |
| 35-37 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 1 |
| 38-39 | Di chuyển hướng 2 (`2`) | (6, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 0 |
| 40-50 | Chờ 11 bước (`-11`) | (7, 19) | (7, 19) | Dự kiến đứng yên tại (7, 19); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 19) (ô=436)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(11, 19))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(11, 19))
- Mảng hành động đã gửi server: `[4, 4, 0, 5, 5, 5, 5, 4, 5, 0, 1, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (18, 19) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 20 |
| 1 | Di chuyển hướng 4 (`4`) | (17, 20) | (17, 21) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(17, 21)) | 18 |
| 2-3 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 17 |
| 4-5 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 16 |
| 6-7 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 14 |
| 8-9 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 12 |
| 10 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 10 |
| 11-13 | Di chuyển hướng 4 (`4`) | (12, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 8 |
| 14-15 | Di chuyển hướng 5 (`5`) | (12, 21) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 7 |
| 16-17 | Di chuyển hướng 0 (`0`) | (11, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 6 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 4 |
| 20-50 | Chờ 31 bước (`-31`) | (11, 19) | (11, 19) | Dự kiến đứng yên tại (11, 19); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 4 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 5) (ô=130)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(6, 19))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(6, 19))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 3, 3, 4, 4, 4, 4, 5, 4, 4, 4, 5, 2, 3, 3, 4, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 44 |
| 2 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 42 |
| 3-5 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 40 |
| 6-7 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 39 |
| 8-10 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 37 |
| 11 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 35 |
| 12-13 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 34 |
| 14-16 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 32 |
| 17 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 30 |
| 18 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 28 |
| 19-20 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 27 |
| 21-22 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 26 |
| 23-24 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 25 |
| 25-27 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 23 |
| 28-29 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 22 |
| 30-31 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 21 |
| 32-33 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 20 |
| 34 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 18 |
| 35 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 16 |
| 36-38 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 14 |
| 39-40 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 13 |
| 41-42 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 12 |
| 43-44 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 11 |
| 45-46 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 10 |
| 47 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 8 |
| 48 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 6 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 5 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (18, 8) (ô=194)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 5)
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 0, 0, 0, 5, 2, 3, 2, 3, 3, 3, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 51 |
| 2-3 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 51 |
| 4-5 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 51 |
| 6 | Di chuyển hướng 1 (`1`) | (19, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 51 |
| 7 | Di chuyển hướng 0 (`0`) | (19, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 51 |
| 8-10 | Di chuyển hướng 0 (`0`) | (19, 3) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 51 |
| 11 | Di chuyển hướng 0 (`0`) | (18, 2) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 51 |
| 12 | Di chuyển hướng 5 (`5`) | (18, 1) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 51 |
| 13-14 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 51 |
| 15 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 51 |
| 16 | Di chuyển hướng 2 (`2`) | (18, 2) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 51 |
| 17 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 51 |
| 18-19 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 51 |
| 20-22 | Di chuyển hướng 3 (`3`) | (20, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 51 |
| 23-50 | Chờ 28 bước (`-28`) | (21, 5) | (21, 5) | Dự kiến đứng yên tại (21, 5); hướng tới tọa độ (21, 5) | 51 |

