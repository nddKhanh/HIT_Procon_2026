# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 50
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 24 | #1 | #5 | (18, 8) | 2 | 51 |
| 28 | #4 | #5 | (20, 10) | 2 | 51 |
| 30 | #4 | #5 | (20, 9) | 50 | 51 |
| 31 | #4 | #5 | (20, 8) | 49 | 51 |
| 32 | #4 | #5 | (20, 7) | 49 | 51 |
| 34 | #4 | #5 | (20, 6) | 50 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 19) (ô=425)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 12)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 4, 4, 4, 4, 4, 2, 2, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 45 |
| 2-4 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 43 |
| 5-7 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 41 |
| 8-9 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 40 |
| 10-12 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 38 |
| 13-14 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 37 |
| 15-17 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 35 |
| 18-20 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 33 |
| 21 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 31 |
| 22-23 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 30 |
| 24-25 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 29 |
| 26-27 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 28 |
| 28-30 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 26 |
| 31-32 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 25 |
| 33-35 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 23 |
| 36-38 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 21 |
| 39-40 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 20 |
| 41-42 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 19 |
| 43-44 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 18 |
| 45-46 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 17 |
| 47 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 15 |
| 48-49 | Chờ 2 bước (`-2`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); hướng tới tọa độ (3, 12) | 15 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 8) (ô=194)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(17, 1))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(17, 1))
- Mảng hành động đã gửi server: `[-25, 1, 1, 2, 1, 1, 0, 5, 0, 5, 0, 5, 1, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-24 | Chờ 25 bước (`-25`) | (18, 8) | (18, 8) | Dự kiến đứng yên tại (18, 8); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 51 |
| 25-26 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 50 |
| 27-28 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 49 |
| 29-30 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 48 |
| 31-32 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 47 |
| 33-35 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 45 |
| 36-37 | Di chuyển hướng 0 (`0`) | (21, 4) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 44 |
| 38-40 | Di chuyển hướng 5 (`5`) | (21, 3) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 42 |
| 41-42 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 41 |
| 43 | Di chuyển hướng 5 (`5`) | (19, 2) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 39 |
| 44 | Di chuyển hướng 0 (`0`) | (18, 2) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 37 |
| 45 | Di chuyển hướng 5 (`5`) | (18, 1) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 35 |
| 46-47 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 34 |
| 48-49 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 33 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 6) (ô=143)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Mảng hành động đã gửi server: `[4, 3, 0, 0, 4, 3, 4, 3, 4, 4, 5, 4, 4, 4, 5, 4, 5, 4, 3, 2, 3, 2, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 35 |
| 1-2 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 34 |
| 3-4 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 33 |
| 5-6 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 32 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 31 |
| 9 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 29 |
| 10 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 27 |
| 11-13 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 25 |
| 14-15 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 24 |
| 16-17 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 23 |
| 18-19 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 22 |
| 20 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 20 |
| 21 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 18 |
| 22-24 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 16 |
| 25-26 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 15 |
| 27-28 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 14 |
| 29-30 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 13 |
| 31-32 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 12 |
| 33-34 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 11 |
| 35-36 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 10 |
| 37-39 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 8 |
| 40-41 | Di chuyển hướng 2 (`2`) | (6, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 7 |
| 42-49 | Chờ 8 bước (`-8`) | (7, 19) | (7, 19) | Dự kiến đứng yên tại (7, 19); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 7 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 21) (ô=479)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(7, 15))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(7, 15))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 4, 5, 0, 1, 0, 5, 0, 5, 0, 0, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 21 |
| 2-3 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 20 |
| 4-5 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 18 |
| 6-7 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 16 |
| 8 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 14 |
| 9-11 | Di chuyển hướng 4 (`4`) | (12, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 12 |
| 12-13 | Di chuyển hướng 5 (`5`) | (12, 21) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 11 |
| 14-15 | Di chuyển hướng 0 (`0`) | (11, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 10 |
| 16-17 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 8 |
| 18-19 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 7 |
| 20-21 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 6 |
| 22-23 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 4 |
| 24-25 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 3 |
| 26-27 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 1 |
| 28-29 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 0 |
| 30-49 | Chờ 20 bước (`-20`) | (7, 15) | (7, 15) | Dự kiến đứng yên tại (7, 15); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 10) (ô=240)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 3)
- Mảng hành động đã gửi server: `[-28, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-27 | Chờ 28 bước (`-28`) | (20, 10) | (20, 10) | Dự kiến đứng yên tại (20, 10); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 51 |
| 28-29 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 51 |
| 30 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 51 |
| 31 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 32-33 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 51 |
| 34-35 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 50 |
| 36-37 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 49 |
| 38 | Di chuyển hướng 0 (`0`) | (19, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 47 |
| 39-41 | Di chuyển hướng 0 (`0`) | (19, 3) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 45 |
| 42 | Di chuyển hướng 0 (`0`) | (18, 2) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 43 |
| 43 | Di chuyển hướng 0 (`0`) | (18, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 41 |
| 44-45 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 40 |
| 46-47 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 39 |
| 48-49 | Di chuyển hướng 4 (`4`) | (17, 2) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 38 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 16) (ô=359)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 5)
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, 3, 2, 3, 0, 1, 0, 1, 1, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 2 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 51 |
| 3-4 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 5 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 51 |
| 6 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 51 |
| 7-8 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 51 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 51 |
| 11 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 51 |
| 12 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 51 |
| 13 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 14-15 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 51 |
| 16-18 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 51 |
| 19 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 51 |
| 20 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 51 |
| 21-22 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 51 |
| 23 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 51 |
| 24-25 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 51 |
| 26 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 51 |
| 27 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 51 |
| 28-29 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 51 |
| 30 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 51 |
| 31 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 32-33 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 51 |
| 34-35 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 51 |
| 36-49 | Chờ 14 bước (`-14`) | (21, 5) | (21, 5) | Dự kiến đứng yên tại (21, 5); hướng tới tọa độ (21, 5) | 51 |

