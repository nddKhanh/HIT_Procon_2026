# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 80
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 8 | #0 | #3 | (9, 10) | 62 | 67 |
| 16 | #0 | #3 | (11, 8) | 63 | 67 |
| 17 | #1 | #3 | (12, 7) | 58 | 67 |
| 19 | #0 | #3 | (12, 7) | 65 | 67 |
| 27 | #0 | #3 | (12, 6) | 63 | 67 |
| 30 | #2 | #3 | (12, 6) | 32 | 67 |
| 74 | #2 | #3 | (12, 6) | 44 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (6, 10) (ô=186)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[3, 2, 1, 2, 1, 1, 2, 1, 1, 2, 5, 5, 5, 5, 5, 5, 5, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 65 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 64 |
| 4-5 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 63 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 67 |
| 8-11 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 65 |
| 12-13 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 64 |
| 14-15 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 67 |
| 16-18 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 67 |
| 19-22 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 65 |
| 23-24 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 64 |
| 25-26 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 66 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 65 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 63 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 61 |
| 35-36 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 60 |
| 37-38 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 59 |
| 39-79 | Chờ 41 bước (`-41`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 59 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 8) (ô=154)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 8)
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 5, 4, 4, 5, 4, -1, 1, -53]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 65 |
| 2-4 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 63 |
| 5-8 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 61 |
| 9-10 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 60 |
| 11-12 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 59 |
| 13-14 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 58 |
| 15-18 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 65 |
| 19-21 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 63 |
| 22-23 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 62 |
| 24 | Chờ 1 bước (`-1`) | (10, 9) | (10, 9) | Dự kiến đứng yên tại (10, 9); mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 62 |
| 25-26 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 61 |
| 27-79 | Chờ 53 bước (`-53`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); hướng tới tọa độ (10, 8) | 61 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 6) (ô=114)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(13, 6))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(13, 6))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 4, 4, 4, 4, 3, 4, 4, 5, 4, 4, 5, 5, 5, 3, 2, 1, 2, 1, 2, 1, 1, 1, 2, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 50 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 49 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 48 |
| 6-7 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 46 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 44 |
| 10-11 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 43 |
| 12-13 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 42 |
| 14-15 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 41 |
| 16-17 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 40 |
| 18-19 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 1)) | 38 |
| 20-21 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 37 |
| 22-23 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 35 |
| 24-25 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 34 |
| 26-27 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 33 |
| 28-29 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 30-31 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 66 |
| 32-35 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 64 |
| 36-38 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 62 |
| 39-40 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 61 |
| 41-42 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 60 |
| 43-46 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 58 |
| 47-48 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 57 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 56 |
| 51-52 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 55 |
| 53-54 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 54 |
| 55-56 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 53 |
| 57-58 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 52 |
| 59-62 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 50 |
| 63-64 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 49 |
| 65-66 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 48 |
| 67-69 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 46 |
| 70-73 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 74-75 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 66 |
| 76-79 | Chờ 4 bước (`-4`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 66 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (7, 11) (ô=205)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(12, 6))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(12, 6))
- Mảng hành động đã gửi server: `[2, 1, 2, 1, 1, 2, 1, 1, 2, 5, -55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 67 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 67 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 67 |
| 6-9 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 67 |
| 10-11 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 67 |
| 12-13 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 67 |
| 14-16 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 67 |
| 17-20 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 21-22 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 67 |
| 23-24 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 25-79 | Chờ 55 bước (`-55`) | (12, 6) | (12, 6) | Dự kiến đứng yên tại (12, 6); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |

