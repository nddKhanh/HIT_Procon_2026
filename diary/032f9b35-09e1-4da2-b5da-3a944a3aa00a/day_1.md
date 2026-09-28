# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 51
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 4 | #4 | #3 | (2, 13) | 41 | 55 |
| 30 | #1 | #3 | (20, 17) | 0 | 55 |
| 40 | #6 | #3 | (22, 23) | 0 | 55 |
| 42 | #1 | #3 | (21, 23) | 44 | 55 |
| 42 | #6 | #3 | (21, 23) | 54 | 55 |
| 44 | #6 | #3 | (20, 23) | 54 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 6) (ô=164)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, -42]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 15 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 14 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 13 |
| 6-8 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 11 |
| 9-50 | Chờ 42 bước (`-42`) | (16, 6) | (16, 6) | Dự kiến đứng yên tại (16, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 11 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 19) (ô=477)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(22, 23))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(22, 23))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 3, 1, 1, 1, 2, 2, 1, 0, 1, 5, 5, 5, -4, 4, 5, 3, 3, 3, 3, 3, 2, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 22 |
| 2 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 20 |
| 3 | Di chuyển hướng 4 (`4`) | (19, 20) | (19, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(19, 21)) | 18 |
| 4-5 | Di chuyển hướng 4 (`4`) | (19, 21) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 17 |
| 6-7 | Di chuyển hướng 3 (`3`) | (18, 22) | (19, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 23)) | 16 |
| 8-9 | Di chuyển hướng 1 (`1`) | (19, 23) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 15 |
| 10-11 | Di chuyển hướng 1 (`1`) | (19, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 14 |
| 12 | Di chuyển hướng 1 (`1`) | (20, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 12 |
| 13 | Di chuyển hướng 2 (`2`) | (20, 20) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 10 |
| 14 | Di chuyển hướng 2 (`2`) | (21, 20) | (22, 20) | Dự kiến đến điểm hẹn tọa độ (22, 20) | 8 |
| 15 | Di chuyển hướng 1 (`1`) | (22, 20) | (23, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 19)) | 6 |
| 16-17 | Di chuyển hướng 0 (`0`) | (23, 19) | (22, 18) | Dự kiến đến điểm hẹn tọa độ (22, 18) | 5 |
| 18-20 | Di chuyển hướng 1 (`1`) | (22, 18) | (23, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(23, 17)) | 3 |
| 21-22 | Di chuyển hướng 5 (`5`) | (23, 17) | (22, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(22, 17)) | 2 |
| 23-24 | Di chuyển hướng 5 (`5`) | (22, 17) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 1 |
| 25-26 | Di chuyển hướng 5 (`5`) | (21, 17) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 0 |
| 27-30 | Chờ 4 bước (`-4`) | (20, 17) | (20, 17) | Dự kiến đứng yên tại (20, 17); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 55 |
| 31-32 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 54 |
| 33 | Di chuyển hướng 5 (`5`) | (19, 18) | (18, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 18)) | 52 |
| 34-35 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 51 |
| 36 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 49 |
| 37 | Di chuyển hướng 3 (`3`) | (19, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 47 |
| 38 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 45 |
| 39-40 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 44 |
| 41-42 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 54 |
| 43-50 | Chờ 8 bước (`-8`) | (22, 23) | (22, 23) | Dự kiến đứng yên tại (22, 23); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 54 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 13) (ô=312)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 4, 4, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 13) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 45 |
| 2-3 | Di chuyển hướng 2 (`2`) | (0, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 44 |
| 4-5 | Di chuyển hướng 2 (`2`) | (1, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 43 |
| 6 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 41 |
| 7-8 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 40 |
| 9-10 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 39 |
| 11 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 37 |
| 12-13 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 36 |
| 14-15 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 34 |
| 16-17 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 33 |
| 18-19 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 31 |
| 20-21 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 30 |
| 22-23 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 28 |
| 24-25 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 27 |
| 26 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 25 |
| 27 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 23 |
| 28-29 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 22 |
| 30-31 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 21 |
| 32-33 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 19 |
| 34-50 | Chờ 17 bước (`-17`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 19 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (3, 10) (ô=243)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 23)
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 4, 3, 4, 3, 4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 4, 4, 3, 3, 3, 3, 2, 5, 5, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 55 |
| 2 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 3 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 55 |
| 4 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 5 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 55 |
| 6 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 55 |
| 7 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 55 |
| 8 | Di chuyển hướng 3 (`3`) | (2, 17) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 55 |
| 9 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 55 |
| 10 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 55 |
| 11 | Di chuyển hướng 2 (`2`) | (2, 20) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 55 |
| 12 | Di chuyển hướng 2 (`2`) | (3, 20) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 55 |
| 13 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 55 |
| 14 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 55 |
| 15 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 55 |
| 16 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 55 |
| 17 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 55 |
| 18 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 55 |
| 19 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 55 |
| 20 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 55 |
| 21 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 55 |
| 22 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 55 |
| 23 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 55 |
| 24 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 55 |
| 25 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 55 |
| 26 | Di chuyển hướng 1 (`1`) | (17, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 55 |
| 27 | Di chuyển hướng 2 (`2`) | (18, 19) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 55 |
| 28 | Di chuyển hướng 1 (`1`) | (19, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 55 |
| 29 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 55 |
| 30-31 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 55 |
| 32 | Di chuyển hướng 4 (`4`) | (19, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 55 |
| 33 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 55 |
| 34 | Di chuyển hướng 3 (`3`) | (19, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 55 |
| 35 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 55 |
| 36-37 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 55 |
| 38-39 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 55 |
| 40-41 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 55 |
| 42-43 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 55 |
| 44-50 | Chờ 7 bước (`-7`) | (20, 23) | (20, 23) | Dự kiến đứng yên tại (20, 23); hướng tới tọa độ (20, 23) | 55 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (0, 13) (ô=312)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 1, 1, 0, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 3, 4, 3, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 42 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 55 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 53 |
| 5 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 51 |
| 6 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 49 |
| 7-8 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 48 |
| 9-10 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 46 |
| 11-12 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 45 |
| 13-14 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 43 |
| 15 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 41 |
| 16-17 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 40 |
| 18-19 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 39 |
| 20-21 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 37 |
| 22-23 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 35 |
| 24-25 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 33 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 31 |
| 28-29 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 29 |
| 30-31 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 27 |
| 32-33 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 25 |
| 34-35 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 23 |
| 36-37 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 21 |
| 38-39 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 3)) | 19 |
| 40-41 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 18 |
| 42 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 16 |
| 43 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 14 |
| 44-50 | Chờ 7 bước (`-7`) | (16, 6) | (16, 6) | Dự kiến đứng yên tại (16, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 14 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 13) (ô=312)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(0, 14))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(0, 14))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 1, 1, 1, 0, 0, 1, 0, 4, 4, 3, 3, 3, 4, 3, 4, 3, 3, 3, 4, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 13) | (0, 12) | Dự kiến đến điểm hẹn tọa độ (0, 12) | 42 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 41 |
| 4-5 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 40 |
| 6 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 38 |
| 7-8 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 37 |
| 9-11 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 35 |
| 12-13 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 34 |
| 14-15 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 32 |
| 16 | Di chuyển hướng 0 (`0`) | (4, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 30 |
| 17 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 28 |
| 18 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 26 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 25 |
| 21-22 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 24 |
| 23-24 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 22 |
| 25-26 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 21 |
| 27-28 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 19 |
| 29-30 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 18 |
| 31-32 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 16 |
| 33-34 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 15 |
| 35-36 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 13 |
| 37-38 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 12 |
| 39-40 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 10 |
| 41-42 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 9 |
| 43 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 7 |
| 44-45 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 6 |
| 46-47 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 5 |
| 48 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 3 |
| 49-50 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 2 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (23, 17) (ô=431)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 20)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 3, 4, 3, 3, 2, 3, 2, 2, 4, -16, 5, 5, 5, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 17) | (22, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(22, 17)) | 17 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 17) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 16 |
| 4-5 | Di chuyển hướng 5 (`5`) | (21, 17) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 15 |
| 6-7 | Di chuyển hướng 5 (`5`) | (20, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 14 |
| 8 | Di chuyển hướng 5 (`5`) | (19, 17) | (18, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(18, 17)) | 12 |
| 9-10 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 18)) | 11 |
| 11-12 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 10 |
| 13 | Di chuyển hướng 3 (`3`) | (18, 19) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 8 |
| 14 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(19, 21)) | 6 |
| 15-16 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 5 |
| 17 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 3 |
| 18-19 | Di chuyển hướng 2 (`2`) | (20, 22) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 2 |
| 20-21 | Di chuyển hướng 2 (`2`) | (21, 22) | (22, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(22, 22)) | 1 |
| 22-23 | Di chuyển hướng 4 (`4`) | (22, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 0 |
| 24-39 | Chờ 16 bước (`-16`) | (22, 23) | (22, 23) | Dự kiến đứng yên tại (22, 23); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 55 |
| 40-41 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 55 |
| 42-43 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 55 |
| 44-45 | Di chuyển hướng 5 (`5`) | (20, 23) | (19, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 23)) | 54 |
| 46-47 | Di chuyển hướng 1 (`1`) | (19, 23) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 53 |
| 48-49 | Di chuyển hướng 1 (`1`) | (19, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 52 |
| 50 | Di chuyển hướng 1 (`1`) | (20, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 50 |

