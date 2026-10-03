# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 53
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 37 | #2 | #5 | (7, 19) | 0 | 51 |
| 46 | #4 | #5 | (4, 17) | 1 | 51 |
| 52 | #2 | #5 | (4, 17) | 41 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 7) (ô=165)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[0, 3, 3, 2, 3, 2, 2, 2, 2, 2, 1, 1, 1, 2, 0, 0, 0, 0, 5, 0, 1, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 31 |
| 2-3 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 30 |
| 4-5 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 29 |
| 6-7 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 28 |
| 8-9 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 27 |
| 10 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 25 |
| 11 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 23 |
| 12-14 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 21 |
| 15-16 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 20 |
| 17 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 18 |
| 18 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 16 |
| 19-20 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 15 |
| 21-22 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 14 |
| 23-24 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 13 |
| 25-26 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 12 |
| 27-28 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 11 |
| 29 | Di chuyển hướng 0 (`0`) | (19, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 9 |
| 30-32 | Di chuyển hướng 0 (`0`) | (19, 3) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 7 |
| 33-34 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 5 |
| 35-36 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 4 |
| 37-38 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 3 |
| 39-52 | Chờ 14 bước (`-14`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 11) (ô=244)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(1, 11))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(1, 11))
- Mảng hành động đã gửi server: `[0, 4, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 5 |
| 2-3 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 4 |
| 4-52 | Chờ 49 bước (`-49`) | (1, 11) | (1, 11) | Dự kiến đứng yên tại (1, 11); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 19) (ô=425)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(4, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(4, 17))
- Mảng hành động đã gửi server: `[-38, 1, 1, 0, 0, 5, 4, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-37 | Chờ 38 bước (`-38`) | (7, 19) | (7, 19) | Dự kiến đứng yên tại (7, 19); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |
| 38-39 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 50 |
| 40 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 48 |
| 41 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 46 |
| 42-43 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 45 |
| 44-45 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 44 |
| 46-47 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 43 |
| 48-49 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 42 |
| 50-51 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 51 |
| 52 | Chờ 1 bước (`-1`) | (4, 17) | (4, 17) | Dự kiến đứng yên tại (4, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 19) (ô=429)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(11, 21))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(11, 21))
- Mảng hành động đã gửi server: `[4, 3, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 3 |
| 2-3 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 1 |
| 4-52 | Chờ 49 bước (`-49`) | (11, 21) | (11, 21) | Dự kiến đứng yên tại (11, 21); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 1 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (6, 19) (ô=424)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(4, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(4, 17))
- Mảng hành động đã gửi server: `[0, 5, 0, -46]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 4 |
| 2-4 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 2 |
| 5-6 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 1 |
| 7-52 | Chờ 46 bước (`-46`) | (4, 17) | (4, 17) | Dự kiến đứng yên tại (4, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 51 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (21, 5) (ô=131)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(4, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(4, 17))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 4, 4, 4, 5, 4, 5, 5, 5, 5, 5, 5, 5, 4, 3, 4, 4, 3, 4, 4, 5, 0, 5, 0, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (21, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 3-4 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 51 |
| 5-6 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 51 |
| 7-8 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 51 |
| 9-10 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 51 |
| 11 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 51 |
| 12-13 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 51 |
| 14 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 51 |
| 15 | Di chuyển hướng 4 (`4`) | (16, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 51 |
| 16-18 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 19-20 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 51 |
| 21 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 51 |
| 22 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 51 |
| 23 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 51 |
| 24-25 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 51 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 51 |
| 28 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 29 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 51 |
| 30-31 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 32 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 33-34 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 51 |
| 35 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 51 |
| 36 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |
| 37-38 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 51 |
| 39-40 | Di chuyển hướng 0 (`0`) | (6, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 51 |
| 41-43 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 51 |
| 44-45 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 51 |
| 46-52 | Chờ 7 bước (`-7`) | (4, 17) | (4, 17) | Dự kiến đứng yên tại (4, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 51 |

