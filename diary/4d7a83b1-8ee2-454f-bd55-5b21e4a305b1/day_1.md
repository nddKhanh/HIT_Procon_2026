# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 50
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #4 | #7 | (13, 2) | 53 | 55 |
| 19 | #0 | #7 | (15, 10) | 3 | 55 |
| 27 | #5 | #6 | (13, 2) | 33 | 55 |
| 33 | #2 | #7 | (13, 16) | 12 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (22, 8) (ô=222)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 21)
- Mảng hành động đã gửi server: `[4, 5, 5, 0, 5, 4, 4, 5, 5, -1, 3, 3, 3, 2, 2, 3, 3, 3, 2, 3, 4, 4, 4, 3, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 17 |
| 2-4 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 15 |
| 5-6 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 14 |
| 7 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 12 |
| 8-10 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 10 |
| 11 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 8 |
| 12-13 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 7 |
| 14-16 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 5 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 3 |
| 18 | Chờ 1 bước (`-1`) | (15, 10) | (15, 10) | Dự kiến đứng yên tại (15, 10); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 55 |
| 19-20 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 54 |
| 21-23 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 52 |
| 24-25 | Di chuyển hướng 3 (`3`) | (16, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 51 |
| 26-27 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 50 |
| 28-30 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 48 |
| 31 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 46 |
| 32-33 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 45 |
| 34-36 | Di chuyển hướng 3 (`3`) | (20, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 43 |
| 37 | Di chuyển hướng 2 (`2`) | (20, 16) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 41 |
| 38-39 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 40 |
| 40-41 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 39 |
| 42 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 37 |
| 43 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 35 |
| 44-45 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(21, 21)) | 34 |
| 46-47 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 33 |
| 48 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 31 |
| 49 | Chờ 1 bước (`-1`) | (19, 21) | (19, 21) | Dự kiến đứng yên tại (19, 21); hướng tới tọa độ (19, 21) | 31 |

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
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 18)
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 4, 4, 4, 5, 5, 4, 4, 4, 4, 5, 5, 4, 5, 4, 4, 5, 5, 5, 5, 5, 4, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (24, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 39 |
| 2-3 | Di chuyển hướng 3 (`3`) | (24, 3) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 38 |
| 4-5 | Di chuyển hướng 4 (`4`) | (24, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 37 |
| 6 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 35 |
| 7-8 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 34 |
| 9 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 32 |
| 10-11 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 31 |
| 12-14 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 29 |
| 15-16 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 28 |
| 17 | Di chuyển hướng 4 (`4`) | (20, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 26 |
| 18 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 24 |
| 19 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 22 |
| 20-21 | Di chuyển hướng 4 (`4`) | (18, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 21 |
| 22-24 | Di chuyển hướng 5 (`5`) | (18, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 19 |
| 25-26 | Di chuyển hướng 5 (`5`) | (17, 13) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 18 |
| 27-28 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 17 |
| 29-30 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 16 |
| 31 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 14 |
| 32 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 55 |
| 33-34 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 54 |
| 35-37 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 52 |
| 38 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 50 |
| 39-41 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 48 |
| 42-43 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 47 |
| 44-45 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 46 |
| 46-47 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 45 |
| 48-49 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 44 |

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
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 21)
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 4, 4, 3, 4, 3, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2, 2, 2, 2, 3, 2, 3, 3, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 55 |
| 3-4 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 54 |
| 5 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 52 |
| 6-8 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 50 |
| 9 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 48 |
| 10 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 46 |
| 11 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 44 |
| 12-13 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 43 |
| 14 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 41 |
| 15-16 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 40 |
| 17-18 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 39 |
| 19-21 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 37 |
| 22 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 35 |
| 23-24 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 34 |
| 25 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 32 |
| 26-27 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 31 |
| 28 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 29 |
| 29-30 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 28 |
| 31-32 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 27 |
| 33-34 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 26 |
| 35-37 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 24 |
| 38 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 22 |
| 39 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 20 |
| 40-41 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 19 |
| 42 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 17 |
| 43-45 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 21)) | 15 |
| 46-47 | Di chuyển hướng 2 (`2`) | (15, 21) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 14 |
| 48-49 | Chờ 2 bước (`-2`) | (16, 21) | (16, 21) | Dự kiến đứng yên tại (16, 21); hướng tới tọa độ (16, 21) | 14 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (17, 3) (ô=92)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(6, 9))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(6, 9))
- Mảng hành động đã gửi server: `[3, 2, 1, 1, 1, 1, 5, 5, 5, 5, 4, 4, 4, 5, 0, 0, 5, 4, 4, 4, 5, 5, 4, 5, 4, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 54 |
| 2-3 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 53 |
| 4 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 51 |
| 5 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 49 |
| 6-7 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 48 |
| 8 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 46 |
| 9-10 | Di chuyển hướng 5 (`5`) | (20, 0) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 45 |
| 11-12 | Di chuyển hướng 5 (`5`) | (19, 0) | (18, 0) | Dự kiến đến điểm hẹn tọa độ (18, 0) | 44 |
| 13-14 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đến điểm hẹn tọa độ (17, 0) | 43 |
| 15 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 41 |
| 16-18 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 39 |
| 19-20 | Di chuyển hướng 4 (`4`) | (16, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 38 |
| 21 | Di chuyển hướng 4 (`4`) | (15, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 36 |
| 22-24 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 34 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 55 |
| 27-28 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 54 |
| 29-30 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 53 |
| 31 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 51 |
| 32-33 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 50 |
| 34 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 48 |
| 35 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 46 |
| 36-37 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 45 |
| 38-40 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 43 |
| 41 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 41 |
| 42-43 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 40 |
| 44-46 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 38 |
| 47 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 8)) | 36 |
| 48-49 | Di chuyển hướng 3 (`3`) | (5, 8) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 35 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (17, 3) (ô=92)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(13, 2))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(13, 2))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, -42]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 55 |
| 2 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 55 |
| 3-5 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 55 |
| 6-7 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 55 |
| 8-49 | Chờ 42 bước (`-42`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (14, 1) (ô=39)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(13, 16))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(13, 16))
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 3, 3, 4, 3, 3, 4, 4, 3, 4, 4, 4, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 55 |
| 3-4 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 55 |
| 5-6 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 55 |
| 7 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 55 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 55 |
| 10-12 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 55 |
| 13-15 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 55 |
| 16 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 55 |
| 17-18 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 55 |
| 19-20 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 55 |
| 21-22 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 55 |
| 23-24 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 55 |
| 25-26 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 55 |
| 27 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 55 |
| 28 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 55 |
| 29-49 | Chờ 21 bước (`-21`) | (13, 16) | (13, 16) | Dự kiến đứng yên tại (13, 16); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 55 |

