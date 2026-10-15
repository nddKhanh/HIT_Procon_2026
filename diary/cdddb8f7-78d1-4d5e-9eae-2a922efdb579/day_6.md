# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 54
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 18 | #1 | #6 | (8, 3) | 0 | 49 |
| 18 | #2 | #7 | (12, 18) | 6 | 49 |
| 28 | #0 | #7 | (14, 14) | 16 | 49 |
| 29 | #0 | #7 | (14, 13) | 47 | 49 |
| 36 | #4 | #7 | (14, 9) | 1 | 49 |
| 44 | #0 | #7 | (14, 9) | 37 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 17) (ô=394)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 9)
- Mảng hành động đã gửi server: `[2, 3, 4, 5, 0, 0, 0, 0, 5, 5, 0, 5, 0, 0, 5, 0, 0, 1, 2, 2, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 17)) | 31 |
| 2-3 | Di chuyển hướng 3 (`3`) | (21, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 30 |
| 4-5 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 19)) | 29 |
| 6-7 | Di chuyển hướng 5 (`5`) | (21, 19) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 28 |
| 8-10 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 26 |
| 11-13 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 24 |
| 14-15 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 23 |
| 16-18 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(18, 15)) | 21 |
| 19-20 | Di chuyển hướng 5 (`5`) | (18, 15) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 20 |
| 21-23 | Di chuyển hướng 5 (`5`) | (17, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 18 |
| 24-25 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 17 |
| 26-27 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 49 |
| 28 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 49 |
| 29 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 12)) | 47 |
| 30-31 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 46 |
| 32 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 44 |
| 33-35 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 42 |
| 36-37 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 41 |
| 38-40 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 39 |
| 41-43 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 49 |
| 44-45 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 48 |
| 46-48 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(16, 9)) | 46 |
| 49-50 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 45 |
| 51-53 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 43 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 4) (ô=88)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 16)
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 1, 2, 2, 1, 2, -1, 3, 4, 4, 4, 3, 4, 4, 4, 4, 2, 3, 3, 3, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 10 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(2, 5)) | 9 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 8 |
| 6-7 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 7 |
| 8-9 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 6 |
| 10-11 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 5 |
| 12-13 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 4 |
| 14-16 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 2 |
| 17 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 49 |
| 18 | Chờ 1 bước (`-1`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 49 |
| 19-20 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 48 |
| 21-23 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 46 |
| 24-25 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 45 |
| 26-28 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 43 |
| 29-31 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 41 |
| 32-34 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 39 |
| 35-37 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 37 |
| 38-40 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 35 |
| 41-43 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 33 |
| 44-45 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 32 |
| 46-47 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 31 |
| 48 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 29 |
| 49 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 27 |
| 50-51 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 26 |
| 52-53 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 25 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 17) (ô=393)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 17)
- Mảng hành động đã gửi server: `[4, 5, 5, 4, 5, 5, 5, 0, 4, 3, -1, 0, 5, 0, 0, 5, 5, 5, 5, 0, 5, 5, 0, 4, 4, 5, 4, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 15 |
| 2-3 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 14 |
| 4-6 | Di chuyển hướng 5 (`5`) | (17, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 12 |
| 7-8 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 11 |
| 9-10 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 10 |
| 11-12 | Di chuyển hướng 5 (`5`) | (15, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 9 |
| 13-15 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 7 |
| 16-17 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 49 |
| 18-19 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 48 |
| 20 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 46 |
| 21 | Chờ 1 bước (`-1`) | (12, 20) | (12, 20) | Dự kiến đứng yên tại (12, 20); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 46 |
| 22-23 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 45 |
| 24 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 43 |
| 25-26 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 42 |
| 27-29 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 40 |
| 30-31 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 39 |
| 32-34 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 37 |
| 35 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 35 |
| 36-37 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 33 |
| 38-39 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 32 |
| 40-41 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 31 |
| 42 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 29 |
| 43-44 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 28 |
| 45-46 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 27 |
| 47 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 25 |
| 48 | Di chuyển hướng 5 (`5`) | (2, 17) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 23 |
| 49-51 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(0, 18)) | 21 |
| 52-53 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 20 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 6) (ô=133)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(0, 4))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(0, 4))
- Mảng hành động đã gửi server: `[0, 0, -50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 1 |
| 2-3 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 4)) | 0 |
| 4-53 | Chờ 50 bước (`-50`) | (0, 4) | (0, 4) | Dự kiến đứng yên tại (0, 4); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 4)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (16, 7) (ô=170)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(21, 10))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(21, 10))
- Mảng hành động đã gửi server: `[1, 0, 5, 0, 0, 5, 0, 3, 2, 3, 3, 2, 3, 4, 4, 3, 5, 5, -1, 2, 2, 2, 2, 2, 2, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 28 |
| 3-4 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 27 |
| 5 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 25 |
| 6-7 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 24 |
| 8 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 22 |
| 9 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 20 |
| 10-12 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 2)) | 18 |
| 13-14 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 17 |
| 15-17 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 15 |
| 18 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 13 |
| 19 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 11 |
| 20-21 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 10 |
| 22 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 8 |
| 23-24 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 7 |
| 25-27 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 5 |
| 28-29 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(16, 9)) | 4 |
| 30-31 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 3 |
| 32-34 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 1 |
| 35 | Chờ 1 bước (`-1`) | (14, 9) | (14, 9) | Dự kiến đứng yên tại (14, 9); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 49 |
| 36-37 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 48 |
| 38-40 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(16, 9)) | 46 |
| 41-42 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 45 |
| 43-45 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 43 |
| 46 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 41 |
| 47-49 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 39 |
| 50-51 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 38 |
| 52 | Di chuyển hướng 3 (`3`) | (21, 9) | (21, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(21, 10)) | 36 |
| 53 | Chờ 1 bước (`-1`) | (21, 10) | (21, 10) | Dự kiến đứng yên tại (21, 10); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(21, 10)) | 36 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (2, 17) (ô=376)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(1, 12))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(1, 12))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 0, 5, 5, 0, 0, 0, 0, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (2, 17) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 17 |
| 1-3 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 15 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 13 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 12 |
| 7-8 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 11 |
| 9-10 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 10 |
| 11 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 8 |
| 12-13 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 7 |
| 14-15 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 6 |
| 16-18 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 4 |
| 19 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 2 |
| 20-53 | Chờ 34 bước (`-34`) | (1, 12) | (1, 12) | Dự kiến đứng yên tại (1, 12); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 2 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (8, 3) (ô=74)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(8, 3))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(8, 3))
- Mảng hành động đã gửi server: `[-54]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-53 | Chờ 54 bước (`-54`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 49 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (13, 13) (ô=299)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(14, 9))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(14, 9))
- Mảng hành động đã gửi server: `[3, 4, 4, 3, 4, 4, 3, 0, 1, 1, 0, 1, 1, 2, 0, 1, 1, 0, 0, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 49 |
| 4-5 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 49 |
| 6-7 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 49 |
| 8 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 49 |
| 9-11 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 49 |
| 12-13 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 49 |
| 14 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 49 |
| 15-16 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 49 |
| 17 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 49 |
| 18-19 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 49 |
| 20-22 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 49 |
| 23 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 49 |
| 24-25 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 49 |
| 26-27 | Di chuyển hướng 2 (`2`) | (13, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 49 |
| 28 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 49 |
| 29 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 49 |
| 30-31 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 49 |
| 32-33 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 49 |
| 34-35 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 49 |
| 36-53 | Chờ 18 bước (`-18`) | (14, 9) | (14, 9) | Dự kiến đứng yên tại (14, 9); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 49 |

