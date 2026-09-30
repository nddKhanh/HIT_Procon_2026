# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 54
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #0 | #4 | (18, 12) | 35 | 36 |
| 19 | #3 | #4 | (3, 9) | 0 | 36 |
| 34 | #2 | #4 | (15, 13) | 0 | 36 |
| 36 | #2 | #4 | (14, 12) | 35 | 36 |
| 37 | #2 | #4 | (14, 11) | 34 | 36 |
| 39 | #2 | #4 | (14, 9) | 32 | 36 |
| 40 | #2 | #4 | (14, 8) | 34 | 36 |
| 52 | #2 | #4 | (10, 8) | 26 | 36 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (19, 12) (ô=271)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(20, 4))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(20, 4))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 4, 3, 0, 0, 0, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 36 |
| 2 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 34 |
| 3-4 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 33 |
| 5-6 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 32 |
| 7-8 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 31 |
| 9-10 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 30 |
| 11 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 28 |
| 12-13 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 27 |
| 14 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 25 |
| 15 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 23 |
| 16 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 21 |
| 17 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 19 |
| 18 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 17 |
| 19-20 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 16 |
| 21-23 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 14 |
| 24-26 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 12 |
| 27 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 10 |
| 28-29 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 9 |
| 30 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 7 |
| 31-33 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 5 |
| 34-53 | Chờ 20 bước (`-20`) | (20, 4) | (20, 4) | Dự kiến đứng yên tại (20, 4); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 5 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[-54]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-53 | Chờ 54 bước (`-54`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 12) (ô=272)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(9, 8))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(9, 8))
- Mảng hành động đã gửi server: `[5, 5, 0, 1, 0, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 5, 5, 4, 3, 4, -2, 0, 0, 0, 1, 1, 2, 5, 5, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 34 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 33 |
| 4 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 31 |
| 5 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 29 |
| 6 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 27 |
| 7 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 25 |
| 8 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 23 |
| 9-10 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 22 |
| 11 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 20 |
| 12-14 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 18 |
| 15-16 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 17 |
| 17-19 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 15 |
| 20 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 13 |
| 21-22 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 12 |
| 23 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 10 |
| 24 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 8 |
| 25 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 6 |
| 26 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 4 |
| 27 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 2 |
| 28-29 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 1 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 0 |
| 32-33 | Chờ 2 bước (`-2`) | (15, 13) | (15, 13) | Dự kiến đứng yên tại (15, 13); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 36 |
| 34-35 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 36 |
| 36 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 36 |
| 37 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 34 |
| 38 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 36 |
| 39 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 36 |
| 40 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 34 |
| 41-42 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 33 |
| 43 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 31 |
| 44-46 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 29 |
| 47-48 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 28 |
| 49-51 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 36 |
| 52 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 34 |
| 53 | Chờ 1 bước (`-1`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 34 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 9) (ô=192)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(3, 0))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(3, 0))
- Mảng hành động đã gửi server: `[-20, 4, 4, 4, 4, 2, 2, 2, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-19 | Chờ 20 bước (`-20`) | (3, 9) | (3, 9) | Dự kiến đứng yên tại (3, 9); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 36 |
| 20-21 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 35 |
| 22 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 33 |
| 23 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 31 |
| 24-26 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(1, 13)) | 29 |
| 27-28 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 28 |
| 29 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 26 |
| 30-32 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 24 |
| 33-34 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 23 |
| 35-36 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 22 |
| 37-39 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 20 |
| 40 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 18 |
| 41 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 16 |
| 42 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 14 |
| 43 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 12 |
| 44 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 10 |
| 45 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 8 |
| 46 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 6 |
| 47 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 4 |
| 48 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 2 |
| 49-51 | Di chuyển hướng 1 (`1`) | (3, 1) | (3, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 0 |
| 52-53 | Chờ 2 bước (`-2`) | (3, 0) | (3, 0) | Dự kiến đứng yên tại (3, 0); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 0 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (19, 12) (ô=271)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 8)
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 0, 0, 1, 0, 1, 5, 5, 5, 5, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 36 |
| 2 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 36 |
| 3 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 36 |
| 4 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 36 |
| 5 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 36 |
| 6 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 36 |
| 7 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 36 |
| 8 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 36 |
| 9 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 36 |
| 10 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 36 |
| 11 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 36 |
| 12 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 36 |
| 13 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 36 |
| 14 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 36 |
| 15 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 16 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 36 |
| 17 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 36 |
| 18 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 36 |
| 19-20 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 36 |
| 21 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 36 |
| 22 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 23 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 36 |
| 24 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 36 |
| 25 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 36 |
| 26 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 36 |
| 27 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 36 |
| 28 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 36 |
| 29 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 36 |
| 30 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 36 |
| 31 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 36 |
| 32 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 36 |
| 33 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 36 |
| 34-35 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 36 |
| 36 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 36 |
| 37 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 36 |
| 38 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 36 |
| 39 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 36 |
| 40 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 36 |
| 41-43 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 36 |
| 44-45 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 36 |
| 46-48 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 36 |
| 49-53 | Chờ 5 bước (`-5`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); hướng tới tọa độ (10, 8) | 36 |

