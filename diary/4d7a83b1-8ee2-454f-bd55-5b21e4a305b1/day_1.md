# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 50
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #0 | #7 | (22, 9) | 54 | 55 |
| 2 | #5 | #7 | (22, 9) | 54 | 55 |
| 5 | #5 | #7 | (21, 10) | 53 | 55 |
| 7 | #5 | #7 | (21, 11) | 54 | 55 |
| 8 | #5 | #7 | (20, 11) | 53 | 55 |
| 9 | #5 | #7 | (19, 11) | 53 | 55 |
| 10 | #5 | #7 | (18, 12) | 53 | 55 |
| 12 | #5 | #7 | (18, 13) | 54 | 55 |
| 15 | #5 | #7 | (17, 13) | 53 | 55 |
| 17 | #5 | #7 | (16, 13) | 54 | 55 |
| 21 | #5 | #7 | (14, 14) | 53 | 55 |
| 22 | #5 | #7 | (14, 15) | 53 | 55 |
| 28 | #4 | #6 | (20, 0) | 1 | 55 |
| 29 | #5 | #7 | (10, 16) | 48 | 55 |
| 31 | #4 | #6 | (21, 0) | 54 | 55 |
| 32 | #5 | #7 | (9, 16) | 53 | 55 |
| 34 | #4 | #6 | (23, 1) | 52 | 55 |
| 36 | #4 | #6 | (23, 2) | 54 | 55 |
| 38 | #4 | #6 | (24, 3) | 54 | 55 |
| 40 | #4 | #6 | (23, 4) | 54 | 55 |
| 43 | #4 | #6 | (23, 6) | 52 | 55 |
| 46 | #4 | #6 | (22, 8) | 52 | 55 |
| 49 | #0 | #7 | (8, 17) | 15 | 55 |
| 49 | #4 | #6 | (22, 10) | 52 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (22, 8) (ô=222)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[4, 5, 5, 0, 5, 4, 4, 5, 5, 4, 3, 3, 4, 5, 4, 4, 3, 4, 4, 0, 5, 0, 0, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 55 |
| 2-4 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 53 |
| 5-6 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 52 |
| 7 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 50 |
| 8-10 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 48 |
| 11 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 46 |
| 12-13 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 45 |
| 14-16 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 43 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 41 |
| 18-19 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 40 |
| 20-21 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 39 |
| 22-24 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 37 |
| 25-26 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 36 |
| 27-28 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 35 |
| 29 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 33 |
| 30 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 31 |
| 31-32 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 30 |
| 33 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 28 |
| 34 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 26 |
| 35-36 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 25 |
| 37 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 23 |
| 38 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 21 |
| 39-41 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 19 |
| 42-44 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 17 |
| 45-46 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 16 |
| 47-48 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |
| 49 | Chờ 1 bước (`-1`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 3) (ô=84)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 5, 0, 0, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 16 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 15 |
| 4-6 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 13 |
| 7-8 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 12 |
| 9-10 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 11 |
| 11 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 9 |
| 12-13 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 8 |
| 14-15 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 7 |
| 16-18 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 5 |
| 19-20 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 4 |
| 21-49 | Chờ 29 bước (`-29`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (24, 2) (ô=74)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 20)
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 4, 4, 3, 4, 3, 3, 4, 3, 4, 4, 4, 4, 4, 4, 3, 5, 5, 5, 5, 5, 5, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (24, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 54 |
| 2-3 | Di chuyển hướng 3 (`3`) | (24, 3) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 53 |
| 4-5 | Di chuyển hướng 4 (`4`) | (24, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 52 |
| 6 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 50 |
| 7-8 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 49 |
| 9 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 47 |
| 10-11 | Di chuyển hướng 3 (`3`) | (22, 8) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 46 |
| 12 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 44 |
| 13-15 | Di chuyển hướng 3 (`3`) | (22, 10) | (23, 11) | Dự kiến đến điểm hẹn tọa độ (23, 11) | 42 |
| 16 | Di chuyển hướng 3 (`3`) | (23, 11) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 40 |
| 17-18 | Di chuyển hướng 4 (`4`) | (23, 12) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 39 |
| 19 | Di chuyển hướng 3 (`3`) | (23, 13) | (23, 14) | Dự kiến đến điểm hẹn tọa độ (23, 14) | 37 |
| 20-21 | Di chuyển hướng 4 (`4`) | (23, 14) | (23, 15) | Dự kiến đến điểm hẹn tọa độ (23, 15) | 36 |
| 22-23 | Di chuyển hướng 4 (`4`) | (23, 15) | (22, 16) | Dự kiến đến điểm hẹn tọa độ (22, 16) | 35 |
| 24-26 | Di chuyển hướng 4 (`4`) | (22, 16) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 33 |
| 27-28 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 32 |
| 29 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 30 |
| 30 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 28 |
| 31-32 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(21, 21)) | 27 |
| 33-34 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 26 |
| 35 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 24 |
| 36-38 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 22 |
| 39-40 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 21 |
| 41-42 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 20 |
| 43-45 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 21)) | 18 |
| 46-47 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 17 |
| 48-49 | Chờ 2 bước (`-2`) | (14, 20) | (14, 20) | Dự kiến đứng yên tại (14, 20); hướng tới tọa độ (14, 20) | 17 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 16) (ô=409)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(0, 17))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(0, 17))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 5, 4, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 17 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 16 |
| 4 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 14 |
| 5 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 12 |
| 6-8 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 10 |
| 9-10 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 9 |
| 11 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 7 |
| 12-13 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 6 |
| 14-15 | Di chuyển hướng 5 (`5`) | (1, 16) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 5 |
| 16-18 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 3 |
| 19-49 | Chờ 31 bước (`-31`) | (0, 17) | (0, 17) | Dự kiến đứng yên tại (0, 17); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 3 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 1) (ô=39)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 10)
- Mảng hành động đã gửi server: `[4, 0, 5, 4, 2, 2, 3, 2, 2, 2, 3, 2, 1, 1, 1, 1, -1, 2, 2, 3, 3, 3, 4, 3, 4, 4, 4, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 23 |
| 3-4 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 22 |
| 5-6 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 21 |
| 7 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 19 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 18 |
| 10 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 16 |
| 11-12 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 15 |
| 13-14 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 14 |
| 15-17 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 12 |
| 18 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 10 |
| 19-20 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 9 |
| 21-22 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 8 |
| 23 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 6 |
| 24 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 4 |
| 25-26 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 3 |
| 27 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 55 |
| 28 | Chờ 1 bước (`-1`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 55 |
| 29-30 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 55 |
| 31-32 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 54 |
| 33 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 55 |
| 34-35 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 55 |
| 36-37 | Di chuyển hướng 3 (`3`) | (23, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 55 |
| 38-39 | Di chuyển hướng 4 (`4`) | (24, 3) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 55 |
| 40-41 | Di chuyển hướng 3 (`3`) | (23, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 54 |
| 42 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 55 |
| 43-44 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 54 |
| 45 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 55 |
| 46-47 | Di chuyển hướng 3 (`3`) | (22, 8) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 54 |
| 48 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 55 |
| 49 | Chờ 1 bước (`-1`) | (22, 10) | (22, 10) | Dự kiến đứng yên tại (22, 10); hướng tới tọa độ (22, 10) | 55 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (22, 8) (ô=222)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(5, 8))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(5, 8))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 4, 4, 5, 5, 4, 5, 4, 4, 5, 5, 5, 5, 1, 0, 0, 0, 0, 5, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 55 |
| 2-4 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 55 |
| 5-6 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 55 |
| 7 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 55 |
| 8 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 55 |
| 9 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 55 |
| 10-11 | Di chuyển hướng 4 (`4`) | (18, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 55 |
| 12-14 | Di chuyển hướng 5 (`5`) | (18, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 55 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 13) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 55 |
| 17-18 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 54 |
| 19-20 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 55 |
| 22 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 53 |
| 23-24 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 52 |
| 25-27 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 50 |
| 28 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 29-31 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 55 |
| 32-33 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 54 |
| 34 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 52 |
| 35-36 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 37-38 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 50 |
| 39-41 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 48 |
| 42-43 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 47 |
| 44 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 45 |
| 45-47 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 43 |
| 48-49 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 8)) | 42 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (24, 2) (ô=74)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 10)
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 5, -19, 2, 2, 3, 3, 3, 4, 3, 4, 4, 4, 3, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (24, 2) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 55 |
| 2-3 | Di chuyển hướng 0 (`0`) | (24, 1) | (23, 0) | Dự kiến đến điểm hẹn tọa độ (23, 0) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (23, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 55 |
| 6 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 55 |
| 7-8 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 55 |
| 9-27 | Chờ 19 bước (`-19`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 55 |
| 28-29 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 55 |
| 30-31 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 55 |
| 32 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 55 |
| 33-34 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 55 |
| 35-36 | Di chuyển hướng 3 (`3`) | (23, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 55 |
| 37-38 | Di chuyển hướng 4 (`4`) | (24, 3) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 55 |
| 39-40 | Di chuyển hướng 3 (`3`) | (23, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 55 |
| 41 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 55 |
| 42-43 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 55 |
| 44 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 55 |
| 45-46 | Di chuyển hướng 3 (`3`) | (22, 8) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 55 |
| 47 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 55 |
| 48-49 | Chờ 2 bước (`-2`) | (22, 10) | (22, 10) | Dự kiến đứng yên tại (22, 10); hướng tới tọa độ (22, 10) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (22, 8) (ô=222)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 4, 4, 5, 5, 5, 4, 4, 5, 5, 4, 5, 5, 5, 4, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 55 |
| 2-4 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 55 |
| 5-6 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 55 |
| 7 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 55 |
| 8 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 55 |
| 9 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 55 |
| 10-11 | Di chuyển hướng 4 (`4`) | (18, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 55 |
| 12-14 | Di chuyển hướng 5 (`5`) | (18, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 55 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 13) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 55 |
| 17-18 | Di chuyển hướng 5 (`5`) | (16, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 55 |
| 19-20 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 55 |
| 22 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 55 |
| 23-25 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 55 |
| 26 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 55 |
| 27 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 28-30 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 55 |
| 31-32 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 33-34 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |
| 35-49 | Chờ 15 bước (`-15`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |

