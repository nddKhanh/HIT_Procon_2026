# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 96
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 16 | #0 | #3 | (12, 6) | 51 | 67 |
| 23 | #2 | #3 | (12, 6) | 54 | 67 |
| 35 | #1 | #3 | (12, 6) | 43 | 67 |
| 39 | #1 | #3 | (12, 6) | 65 | 67 |
| 41 | #0 | #3 | (12, 6) | 54 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (6, 6) (ô=114)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(7, 11))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(7, 11))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 1, 0, 4, 4, 4, 4, 3, 4, 4, 4, 5, 4, 5, 5, 5, 3, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 58 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 57 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 56 |
| 6-9 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 54 |
| 10-13 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 52 |
| 14-15 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 66 |
| 18-19 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 65 |
| 20-21 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 64 |
| 22-23 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 63 |
| 24-25 | Di chuyển hướng 1 (`1`) | (14, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 62 |
| 26-28 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 1)) | 60 |
| 29-30 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 59 |
| 31-34 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 57 |
| 35-36 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 56 |
| 37-38 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 55 |
| 39-40 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 41-42 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 66 |
| 43-46 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 64 |
| 47-49 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 62 |
| 50-51 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 61 |
| 52-53 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 60 |
| 54-57 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 58 |
| 58-59 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 57 |
| 60-61 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 56 |
| 62-63 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 55 |
| 64-95 | Chờ 32 bước (`-32`) | (7, 11) | (7, 11) | Dự kiến đứng yên tại (7, 11); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 55 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 8) (ô=154)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 5, 0, 2, 2, 2, 1, 1, 2, 1, 1, 2, 5, 5, 5, 5, 5, 5, 5, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 60 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 59 |
| 4-7 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 57 |
| 8-9 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 56 |
| 10-11 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 55 |
| 12-13 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 54 |
| 14-15 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 53 |
| 16-17 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 52 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 51 |
| 20-23 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 49 |
| 24-25 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 48 |
| 26-27 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 47 |
| 28-30 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 45 |
| 31-34 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 35-36 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 66 |
| 37-38 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 39-40 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 66 |
| 41-42 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 65 |
| 43-46 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 63 |
| 47-50 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 61 |
| 51-52 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 60 |
| 53-54 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 59 |
| 55-95 | Chờ 41 bước (`-41`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 59 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 6) (ô=121)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 8)
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 0, 4, 4, 4, 4, 3, 4, 4, 5, 4, -1, 1, -59]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 65 |
| 2-3 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 64 |
| 4-5 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 63 |
| 6-7 | Di chuyển hướng 1 (`1`) | (14, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 62 |
| 8-10 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 1)) | 60 |
| 11-12 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 59 |
| 13-16 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 57 |
| 17-18 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 56 |
| 19-20 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 55 |
| 21-22 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 66 |
| 25-28 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 64 |
| 29-31 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 62 |
| 32-33 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 61 |
| 34 | Chờ 1 bước (`-1`) | (10, 9) | (10, 9) | Dự kiến đứng yên tại (10, 9); mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 61 |
| 35-36 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 60 |
| 37-95 | Chờ 59 bước (`-59`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); hướng tới tọa độ (10, 8) | 60 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (12, 6) (ô=120)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(12, 6))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(12, 6))
- Mảng hành động đã gửi server: `[-96]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-95 | Chờ 96 bước (`-96`) | (12, 6) | (12, 6) | Dự kiến đứng yên tại (12, 6); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |

