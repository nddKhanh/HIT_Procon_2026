# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 64
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #2 | #3 | (11, 8) | 46 | 67 |
| 35 | #0 | #3 | (7, 11) | 37 | 67 |
| 53 | #1 | #3 | (8, 10) | 31 | 67 |
| 63 | #1 | #3 | (8, 10) | 62 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (6, 6) (ô=114)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(6, 10))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(6, 10))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 5, 4, 4, 5, 4, 4, 5, 5, 4, -1, 0, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 57 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 56 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 55 |
| 6-7 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 53 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 51 |
| 10-11 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 50 |
| 12-13 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 49 |
| 14-15 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 48 |
| 16-17 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 47 |
| 18-21 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 45 |
| 22-24 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 43 |
| 25-26 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 42 |
| 27-28 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 41 |
| 29-30 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 39 |
| 31-32 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 38 |
| 33-34 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 67 |
| 35 | Chờ 1 bước (`-1`) | (7, 11) | (7, 11) | Dự kiến đứng yên tại (7, 11); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 67 |
| 36-37 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 66 |
| 38-63 | Chờ 26 bước (`-26`) | (6, 10) | (6, 10) | Dự kiến đứng yên tại (6, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 66 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 3) (ô=66)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 10)
- Mảng hành động đã gửi server: `[1, 2, 1, 4, 4, 4, 4, 3, 2, 5, 5, 5, 5, 5, 5, 2, 2, 2, 2, 3, 4, 5, 4, 4, 5, 5, 5, 3, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 65 |
| 3 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 63 |
| 4-5 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 1)) | 61 |
| 6-7 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 60 |
| 8-9 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 58 |
| 10-11 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 57 |
| 12-13 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 56 |
| 14-15 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 55 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 54 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 53 |
| 20-21 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 52 |
| 22-23 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 51 |
| 24-25 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 49 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 47 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 46 |
| 30-31 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 45 |
| 32-33 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 44 |
| 34-35 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 42 |
| 36-37 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 40 |
| 38-39 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 39 |
| 40-43 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 37 |
| 44-46 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 35 |
| 47-48 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 34 |
| 49-50 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 33 |
| 51-52 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 67 |
| 53-54 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 66 |
| 55-56 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 65 |
| 57-58 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 64 |
| 59-60 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 63 |
| 61-62 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 67 |
| 63 | Chờ 1 bước (`-1`) | (8, 10) | (8, 10) | Dự kiến đứng yên tại (8, 10); hướng tới tọa độ (8, 10) | 67 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 10) (ô=186)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[3, 2, 1, 2, 1, 1, 2, 1, 1, 2, 5, 5, 5, 5, 5, 5, 5, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 53 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 52 |
| 4-5 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 51 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 50 |
| 8-9 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 48 |
| 10-11 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 47 |
| 12-13 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 67 |
| 14-16 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 65 |
| 17-20 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 63 |
| 21-22 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 62 |
| 23-24 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 61 |
| 25-26 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 60 |
| 27-28 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 59 |
| 29-30 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 57 |
| 31-32 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 55 |
| 33-34 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 54 |
| 35-36 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 53 |
| 37-63 | Chờ 27 bước (`-27`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 53 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (12, 3) (ô=66)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 10)
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 4, 4, 4, 5, 5, 4, 5, -9, 2, 1, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 67 |
| 3-4 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 67 |
| 5-6 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 7-8 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 67 |
| 9-12 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 67 |
| 13-15 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 67 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 67 |
| 18-19 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 67 |
| 20-21 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 67 |
| 22-23 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 67 |
| 24-25 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 67 |
| 26-34 | Chờ 9 bước (`-9`) | (7, 11) | (7, 11) | Dự kiến đứng yên tại (7, 11); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 67 |
| 35-36 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 67 |
| 37-38 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 67 |
| 39-63 | Chờ 25 bước (`-25`) | (8, 10) | (8, 10) | Dự kiến đứng yên tại (8, 10); hướng tới tọa độ (8, 10) | 67 |

