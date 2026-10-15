# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 47
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #7 | (7, 16) | 48 | 49 |
| 7 | #1 | #7 | (5, 16) | 45 | 49 |
| 16 | #2 | #7 | (0, 18) | 4 | 49 |
| 19 | #4 | #6 | (11, 10) | 1 | 49 |
| 33 | #2 | #6 | (7, 17) | 36 | 49 |
| 40 | #5 | #6 | (7, 17) | 3 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 12) (ô=278)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(12, 18))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(12, 18))
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 3, 3, 3, 2, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 0, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 28 |
| 2-4 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 26 |
| 5-6 | Di chuyển hướng 2 (`2`) | (16, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 25 |
| 7 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 23 |
| 8-10 | Di chuyển hướng 3 (`3`) | (17, 14) | (18, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(18, 15)) | 21 |
| 11-12 | Di chuyển hướng 3 (`3`) | (18, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 20 |
| 13-15 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 18 |
| 16-17 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 17 |
| 18 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 17)) | 15 |
| 19-20 | Di chuyển hướng 3 (`3`) | (21, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 14 |
| 21-22 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 19)) | 13 |
| 23-24 | Di chuyển hướng 5 (`5`) | (21, 19) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 12 |
| 25-27 | Di chuyển hướng 5 (`5`) | (20, 19) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 10 |
| 28 | Di chuyển hướng 5 (`5`) | (19, 19) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 8 |
| 29-31 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 6 |
| 32-33 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 5 |
| 34-35 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 4 |
| 36-37 | Di chuyển hướng 5 (`5`) | (15, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 3 |
| 38-40 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 1 |
| 41-42 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 0 |
| 43-46 | Chờ 4 bước (`-4`) | (12, 18) | (12, 18) | Dự kiến đứng yên tại (12, 18); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=338)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 17)
- Mảng hành động đã gửi server: `[4, 4, 5, 0, 5, 0, 0, 1, 1, 2, 2, 3, 3, 2, 3, 3, 3, 3, 2, 2, 3, 4, 1, 0, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 49 |
| 2-3 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 48 |
| 4 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 46 |
| 5-6 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 49 |
| 7-8 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 48 |
| 9 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 46 |
| 10-11 | Di chuyển hướng 0 (`0`) | (4, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 45 |
| 12-13 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 44 |
| 14 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 42 |
| 15-16 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 41 |
| 17-18 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 40 |
| 19-20 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 39 |
| 21 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 37 |
| 22 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 35 |
| 23 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 33 |
| 24 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 31 |
| 25-26 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 30 |
| 27-28 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 29 |
| 29-31 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 27 |
| 32-34 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 25 |
| 35-36 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 24 |
| 37-38 | Di chuyển hướng 4 (`4`) | (13, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 23 |
| 39-40 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 22 |
| 41-42 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 21 |
| 43-44 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 20 |
| 45-46 | Chờ 2 bước (`-2`) | (13, 17) | (13, 17) | Dự kiến đứng yên tại (13, 17); hướng tới tọa độ (13, 17) | 20 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 18) (ô=396)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 10)
- Mảng hành động đã gửi server: `[-17, 1, 2, 1, 1, 2, 3, 2, 3, 2, 1, 1, 0, 0, 0, 5, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-16 | Chờ 17 bước (`-17`) | (0, 18) | (0, 18) | Dự kiến đứng yên tại (0, 18); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(0, 18)) | 49 |
| 17-18 | Di chuyển hướng 1 (`1`) | (0, 18) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 48 |
| 19-21 | Di chuyển hướng 2 (`2`) | (1, 17) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 46 |
| 22 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 44 |
| 23 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 42 |
| 24-25 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 41 |
| 26-27 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 40 |
| 28 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 38 |
| 29-30 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 37 |
| 31-32 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 49 |
| 33 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 47 |
| 34-35 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 46 |
| 36-37 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 45 |
| 38 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 43 |
| 39 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 41 |
| 40-41 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 40 |
| 42-43 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 39 |
| 44-46 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 37 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 3) (ô=72)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 11)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 2, 3, 2, 3, 3, 2, 3, 4, 4, 3, 5, 5, 3, 4, 4, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 36 |
| 3 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 34 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 33 |
| 6-8 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 31 |
| 9 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 29 |
| 10-12 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 27 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 2)) | 26 |
| 15-16 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 25 |
| 17-19 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 23 |
| 20 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 21 |
| 21 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 19 |
| 22-23 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 18 |
| 24 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 16 |
| 25-26 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 15 |
| 27-29 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 13 |
| 30-31 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(16, 9)) | 12 |
| 32-33 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 11 |
| 34-36 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 9 |
| 37-38 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 8 |
| 39-40 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 7 |
| 41-43 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 12)) | 5 |
| 44-45 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 4 |
| 46 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 2 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 11) (ô=254)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 11)
- Mảng hành động đã gửi server: `[0, -17, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 1 |
| 3-19 | Chờ 17 bước (`-17`) | (11, 10) | (11, 10) | Dự kiến đứng yên tại (11, 10); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 49 |
| 20-21 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 48 |
| 22-24 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 46 |
| 25-27 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 44 |
| 28-29 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 43 |
| 30-32 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(16, 9)) | 41 |
| 33-34 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 40 |
| 35-37 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 38 |
| 38 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 36 |
| 39-41 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 34 |
| 42-43 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 33 |
| 44 | Di chuyển hướng 3 (`3`) | (21, 9) | (21, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(21, 10)) | 31 |
| 45-46 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 30 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (1, 8) (ô=177)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(8, 15))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(8, 15))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 3, 2, 4, 4, 3, 4, 3, 4, 3, 3, 3, 3, 2, 3, 2, 3, 2, 1, 1, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 29 |
| 2 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 6)) | 27 |
| 3-4 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 26 |
| 5-6 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 4)) | 25 |
| 7-8 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 24 |
| 9-10 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(2, 5)) | 23 |
| 11-12 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 6)) | 22 |
| 13-14 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 21 |
| 15 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 19 |
| 16-17 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 18 |
| 18-19 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 17 |
| 20-21 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 16 |
| 22-23 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 14 |
| 24-25 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 13 |
| 26-27 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 11 |
| 28-30 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 9 |
| 31-32 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 8 |
| 33-34 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 7 |
| 35 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 5 |
| 36-37 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 4 |
| 38-39 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 49 |
| 40 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 47 |
| 41-42 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 46 |
| 43-46 | Chờ 4 bước (`-4`) | (8, 15) | (8, 15) | Dự kiến đứng yên tại (8, 15); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 46 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 2) (ô=56)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 17)
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 3, 3, 4, 4, 5, 4, 4, 4, 4, 4, 4, 4, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 49 |
| 2-4 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 49 |
| 5-7 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 49 |
| 8 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 49 |
| 9-11 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 49 |
| 12-14 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 49 |
| 15 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 49 |
| 16-18 | Di chuyển hướng 4 (`4`) | (12, 9) | (11, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 49 |
| 19-20 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 49 |
| 21-22 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 49 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 49 |
| 25-26 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 49 |
| 27 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 49 |
| 28 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 49 |
| 29-30 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 49 |
| 31-32 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 49 |
| 33-46 | Chờ 14 bước (`-14`) | (7, 17) | (7, 17) | Dự kiến đứng yên tại (7, 17); hướng tới tọa độ (7, 17) | 49 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (8, 15) (ô=338)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(0, 18))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(0, 18))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 4, 5, 4, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 49 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 49 |
| 4-5 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 49 |
| 6-7 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 49 |
| 8 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 49 |
| 9-10 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 49 |
| 11 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 49 |
| 12 | Di chuyển hướng 5 (`5`) | (2, 17) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 49 |
| 13-15 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(0, 18)) | 49 |
| 16-46 | Chờ 31 bước (`-31`) | (0, 18) | (0, 18) | Dự kiến đứng yên tại (0, 18); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(0, 18)) | 49 |

