# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 57
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 8 | #1 | #6 | (16, 20) | 25 | 55 |
| 38 | #4 | #6 | (4, 14) | 0 | 55 |
| 54 | #3 | #6 | (2, 4) | 1 | 55 |
| 56 | #3 | #6 | (3, 3) | 54 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 6) (ô=160)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Mảng hành động đã gửi server: `[-57]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-56 | Chờ 57 bước (`-57`) | (16, 6) | (16, 6) | Dự kiến đứng yên tại (16, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 4 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 20) (ô=492)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(19, 23))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(19, 23))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 1, 0, 2, 2, 3, 3, 0, 1, 2, 2, 3, 4, 3, 4, 4, 4, 5, 5, 0, 0, 4, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 31 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 29 |
| 4-5 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 27 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 55 |
| 8-9 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 53 |
| 10-11 | Di chuyển hướng 1 (`1`) | (17, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 51 |
| 12 | Di chuyển hướng 1 (`1`) | (18, 19) | (18, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 18)) | 49 |
| 13-14 | Di chuyển hướng 0 (`0`) | (18, 18) | (18, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(18, 17)) | 48 |
| 15-16 | Di chuyển hướng 2 (`2`) | (18, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 47 |
| 17 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 45 |
| 18-19 | Di chuyển hướng 3 (`3`) | (20, 17) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 44 |
| 20-21 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 19)) | 43 |
| 22-23 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 42 |
| 24-25 | Di chuyển hướng 1 (`1`) | (20, 18) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 41 |
| 26-27 | Di chuyển hướng 2 (`2`) | (21, 17) | (22, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(22, 17)) | 40 |
| 28-29 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(23, 17)) | 39 |
| 30-31 | Di chuyển hướng 3 (`3`) | (23, 17) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 38 |
| 32-34 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 19)) | 36 |
| 35-36 | Di chuyển hướng 3 (`3`) | (23, 19) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 35 |
| 37 | Di chuyển hướng 4 (`4`) | (23, 20) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 33 |
| 38-40 | Di chuyển hướng 4 (`4`) | (23, 21) | (22, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(22, 22)) | 31 |
| 41-42 | Di chuyển hướng 4 (`4`) | (22, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 30 |
| 43-44 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 29 |
| 45-46 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 28 |
| 47-48 | Di chuyển hướng 0 (`0`) | (20, 23) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 27 |
| 49-50 | Di chuyển hướng 0 (`0`) | (19, 22) | (19, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(19, 21)) | 26 |
| 51-52 | Di chuyển hướng 4 (`4`) | (19, 21) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 25 |
| 53-54 | Di chuyển hướng 3 (`3`) | (18, 22) | (19, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 23)) | 24 |
| 55-56 | Chờ 2 bước (`-2`) | (19, 23) | (19, 23) | Dự kiến đứng yên tại (19, 23); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 23)) | 24 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=98)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(4, 3))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(4, 3))
- Mảng hành động đã gửi server: `[1, 1, 3, -51]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 4 |
| 2-3 | Di chuyển hướng 1 (`1`) | (3, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 2 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 1 |
| 6-56 | Chờ 51 bước (`-51`) | (4, 3) | (4, 3) | Dự kiến đứng yên tại (4, 3); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 1 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=98)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 3)
- Mảng hành động đã gửi server: `[-54, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-53 | Chờ 54 bước (`-54`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 55 |
| 54-55 | Di chuyển hướng 1 (`1`) | (2, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 55 |
| 56 | Chờ 1 bước (`-1`) | (3, 3) | (3, 3) | Dự kiến đứng yên tại (3, 3); hướng tới tọa độ (3, 3) | 55 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=98)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 15)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 4, 3, 3, 4, 4, 2, -17, 5, 5, 5, 5, 0, 2, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 15 |
| 2 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 13 |
| 3-4 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 12 |
| 5-8 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 10 |
| 9 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 8 |
| 10-11 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 6 |
| 12-13 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 5 |
| 14-15 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 3 |
| 16-17 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 2 |
| 18-19 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 1 |
| 20-21 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 0 |
| 22-38 | Chờ 17 bước (`-17`) | (4, 14) | (4, 14) | Dự kiến đứng yên tại (4, 14); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 55 |
| 39-40 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 54 |
| 41-42 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 53 |
| 43-46 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 51 |
| 47-48 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 50 |
| 49-50 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 49 |
| 51-52 | Di chuyển hướng 2 (`2`) | (0, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 48 |
| 53-54 | Di chuyển hướng 3 (`3`) | (1, 13) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 47 |
| 55-56 | Di chuyển hướng 3 (`3`) | (1, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 46 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (20, 6) (ô=164)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(16, 3))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(16, 3))
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 0, 0, -48]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 8 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 7 |
| 4-5 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 6 |
| 6 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 4 |
| 7 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 2 |
| 8 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 3)) | 0 |
| 9-56 | Chờ 48 bước (`-48`) | (16, 3) | (16, 3) | Dự kiến đứng yên tại (16, 3); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 3)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (19, 23) (ô=571)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 3)
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 1, 0, 1, 0, 1, 2, 2, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 23) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 55 |
| 2-3 | Di chuyển hướng 0 (`0`) | (18, 22) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 55 |
| 4 | Di chuyển hướng 0 (`0`) | (18, 21) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 55 |
| 5-6 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 55 |
| 7-8 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 55 |
| 9-10 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 55 |
| 11-12 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 55 |
| 13-14 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 55 |
| 15-16 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 55 |
| 17 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 55 |
| 18 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 55 |
| 19 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 55 |
| 20 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 55 |
| 21 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 55 |
| 22 | Di chuyển hướng 5 (`5`) | (6, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 55 |
| 23 | Di chuyển hướng 5 (`5`) | (5, 20) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 55 |
| 24 | Di chuyển hướng 5 (`5`) | (4, 20) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 55 |
| 25 | Di chuyển hướng 5 (`5`) | (3, 20) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 55 |
| 26 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 55 |
| 27 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 55 |
| 28 | Di chuyển hướng 0 (`0`) | (2, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 55 |
| 29 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 55 |
| 30 | Di chuyển hướng 0 (`0`) | (2, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 55 |
| 31 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 32-35 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 55 |
| 36-37 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 55 |
| 38-39 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 55 |
| 40 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 55 |
| 41-42 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 55 |
| 43 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 55 |
| 44 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 55 |
| 45 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 55 |
| 46 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 55 |
| 47-50 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 55 |
| 51-52 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 55 |
| 53 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 55 |
| 54-55 | Di chuyển hướng 1 (`1`) | (2, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 55 |
| 56 | Chờ 1 bước (`-1`) | (3, 3) | (3, 3) | Dự kiến đứng yên tại (3, 3); hướng tới tọa độ (3, 3) | 55 |

