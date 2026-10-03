# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 46
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 6 | #1 | #5 | (7, 15) | 42 | 51 |
| 22 | #0 | #5 | (1, 11) | 5 | 51 |
| 45 | #2 | #5 | (5, 16) | 0 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 15) (ô=337)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 7)
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 0, 0, 5, 0, 4, -5, 1, 1, 1, 1, 1, 2, 2, 3, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 17 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 16 |
| 4-5 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 15 |
| 6 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 13 |
| 7-9 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 11 |
| 10-12 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 9 |
| 13 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 7 |
| 14-15 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 6 |
| 16-17 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 5 |
| 18-22 | Chờ 5 bước (`-5`) | (1, 11) | (1, 11) | Dự kiến đứng yên tại (1, 11); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 51 |
| 23-24 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 50 |
| 25-26 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 49 |
| 27-28 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 48 |
| 29-31 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 46 |
| 32-34 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 44 |
| 35-36 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 43 |
| 37-39 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 41 |
| 40-42 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 39 |
| 43 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 37 |
| 44-45 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 36 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (4, 16) (ô=356)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 0, 0, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 44 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 43 |
| 4-5 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 51 |
| 6-7 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 50 |
| 8-10 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 48 |
| 11 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 46 |
| 12 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 44 |
| 13-14 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 43 |
| 15-16 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 42 |
| 17-18 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 41 |
| 19-21 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 39 |
| 22-23 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 38 |
| 24-25 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 37 |
| 26-27 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 36 |
| 28 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 34 |
| 29 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 32 |
| 30-32 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 30 |
| 33 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 28 |
| 34-36 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 26 |
| 37 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 24 |
| 38-40 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 22 |
| 41-43 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 20 |
| 44-45 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 19 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 20) (ô=452)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 16)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 0, 5, 5, 5, 5, 4, 5, 0, 1, 0, 5, 5, 4, 5, 5, 0, 5, 0, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 36 |
| 3 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 34 |
| 4 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 32 |
| 5 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 30 |
| 6-7 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(17, 21)) | 29 |
| 8-9 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 28 |
| 10-11 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 27 |
| 12 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 25 |
| 13 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 23 |
| 14 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 21 |
| 15-17 | Di chuyển hướng 4 (`4`) | (12, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 19 |
| 18-19 | Di chuyển hướng 5 (`5`) | (12, 21) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 18 |
| 20-21 | Di chuyển hướng 0 (`0`) | (11, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 17 |
| 22 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 15 |
| 23-24 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 14 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 13 |
| 27 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 11 |
| 28-30 | Di chuyển hướng 4 (`4`) | (8, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 9 |
| 31 | Di chuyển hướng 5 (`5`) | (8, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 7 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 6 |
| 34-35 | Di chuyển hướng 0 (`0`) | (6, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 5 |
| 36-38 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 3 |
| 39-40 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 2 |
| 41-42 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 1 |
| 43-44 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 51 |
| 45 | Chờ 1 bước (`-1`) | (5, 16) | (5, 16) | Dự kiến đứng yên tại (5, 16); hướng tới tọa độ (5, 16) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 21) (ô=479)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(11, 21))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(11, 21))
- Mảng hành động đã gửi server: `[0, 5, 5, 0, 0, 5, 5, 4, 4, 3, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 15 |
| 2-3 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 14 |
| 4 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 12 |
| 5 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 10 |
| 6-7 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 9 |
| 8 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 7 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 6 |
| 11-12 | Di chuyển hướng 4 (`4`) | (11, 18) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 5 |
| 13-14 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 4 |
| 15 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 2 |
| 16-45 | Chờ 30 bước (`-30`) | (11, 21) | (11, 21) | Dự kiến đứng yên tại (11, 21); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 2 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (21, 5) (ô=131)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(20, 10))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(20, 10))
- Mảng hành động đã gửi server: `[1, 4, 4, 5, 4, 4, 3, 2, 3, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 13 |
| 3-4 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 12 |
| 5-7 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 10 |
| 8-9 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 9 |
| 10-11 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 8 |
| 12-13 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 7 |
| 14-15 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 6 |
| 16 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 4 |
| 17 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 2 |
| 18-45 | Chờ 28 bước (`-28`) | (20, 10) | (20, 10) | Dự kiến đứng yên tại (20, 10); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 2 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 19) (ô=425)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 16)
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 5, 0, 0, 5, 0, 0, 5, 5, 3, 2, 3, 4, 3, 3, 3, 1, 2, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 51 |
| 2 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 51 |
| 3 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 4-5 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 51 |
| 6-7 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 51 |
| 8-9 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 51 |
| 10-11 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 51 |
| 12 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 51 |
| 13-15 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 51 |
| 16-18 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 51 |
| 19 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 51 |
| 20-21 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 51 |
| 22-23 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 51 |
| 24 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 51 |
| 25-27 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 51 |
| 28-29 | Di chuyển hướng 4 (`4`) | (3, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 51 |
| 30-31 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 51 |
| 32-34 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 51 |
| 35-37 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 51 |
| 38-39 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 51 |
| 40-41 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 51 |
| 42-45 | Chờ 4 bước (`-4`) | (5, 16) | (5, 16) | Dự kiến đứng yên tại (5, 16); hướng tới tọa độ (5, 16) | 51 |

