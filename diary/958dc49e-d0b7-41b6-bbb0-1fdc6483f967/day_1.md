# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 48
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #3 | (9, 6) | 66 | 67 |
| 3 | #1 | #3 | (10, 6) | 65 | 67 |
| 4 | #1 | #3 | (11, 6) | 65 | 67 |
| 14 | #0 | #3 | (12, 7) | 49 | 67 |
| 22 | #0 | #3 | (12, 7) | 62 | 67 |
| 31 | #2 | #3 | (12, 7) | 42 | 67 |
| 33 | #0 | #3 | (11, 8) | 60 | 67 |
| 33 | #1 | #3 | (11, 8) | 48 | 67 |
| 33 | #2 | #3 | (11, 8) | 65 | 67 |
| 40 | #2 | #3 | (9, 10) | 63 | 67 |
| 41 | #2 | #3 | (8, 10) | 65 | 67 |
| 43 | #2 | #3 | (7, 10) | 66 | 67 |
| 45 | #2 | #3 | (6, 10) | 66 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 11) (ô=205)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 1, 1, 1, 1, 2, 5, 4, 4, 5, 4, 1, 2, 1, 0, 5, 5, 5, 5, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 57 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 56 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 55 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 53 |
| 7-8 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 52 |
| 9-10 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 51 |
| 11-13 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 67 |
| 14-15 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 65 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 64 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 63 |
| 20-21 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 67 |
| 22-23 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 65 |
| 24-26 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 63 |
| 27-28 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 62 |
| 29-30 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 61 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 67 |
| 33-35 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 65 |
| 36-37 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 63 |
| 38-39 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 62 |
| 40 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 60 |
| 41 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 58 |
| 42-43 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 57 |
| 44-45 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 56 |
| 46-47 | Chờ 2 bước (`-2`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 56 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 6) (ô=116)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 5)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 4, 5, 4, 4, 5, 4, 5, 0, 2, 2, 2, 1, 2, 1, 1, 1, 2, -1, 0, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 67 |
| 2 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 67 |
| 3 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 67 |
| 4-5 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 66 |
| 6-7 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 64 |
| 8-10 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 62 |
| 11-12 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 61 |
| 13-14 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 60 |
| 15 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 58 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 57 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 56 |
| 20-21 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 55 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 54 |
| 24-25 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 53 |
| 26-27 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 52 |
| 28 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 50 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 49 |
| 31-32 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 67 |
| 33-35 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 65 |
| 36-37 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 63 |
| 38-39 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 62 |
| 40 | Chờ 1 bước (`-1`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 62 |
| 41-42 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 61 |
| 43-47 | Chờ 5 bước (`-5`) | (13, 5) | (13, 5) | Dự kiến đứng yên tại (13, 5); hướng tới tọa độ (13, 5) | 61 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 6) (ô=114)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 9)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 4, 4, 4, 3, 4, 2, 5, 4, 4, 5, 4, 4, 5, 5, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 64 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 63 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 62 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 60 |
| 7 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 58 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 57 |
| 10-11 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 56 |
| 12-13 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 55 |
| 14-15 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 54 |
| 16 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 1)) | 52 |
| 17-18 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 51 |
| 19 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 49 |
| 20-21 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 48 |
| 22-23 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 47 |
| 24 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 45 |
| 25-26 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 44 |
| 27-28 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 43 |
| 29-30 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 67 |
| 31-32 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 67 |
| 33-35 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 65 |
| 36-37 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 64 |
| 38-39 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 67 |
| 40 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 67 |
| 41-42 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 67 |
| 43-44 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 67 |
| 45-46 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 66 |
| 47 | Chờ 1 bước (`-1`) | (6, 9) | (6, 9) | Dự kiến đứng yên tại (6, 9); hướng tới tọa độ (6, 9) | 66 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (8, 6) (ô=116)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(6, 10))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(6, 10))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 5, 4, -19, 4, 4, 4, 5, 5, 5, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 67 |
| 2 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 67 |
| 3 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 67 |
| 4-5 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 6-7 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 67 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 67 |
| 10-11 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 67 |
| 12-30 | Chờ 19 bước (`-19`) | (12, 7) | (12, 7) | Dự kiến đứng yên tại (12, 7); hướng tới tọa độ (12, 7) | 67 |
| 31-32 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 67 |
| 33-35 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 67 |
| 36-37 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 67 |
| 38-39 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 67 |
| 40 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 67 |
| 41-42 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 67 |
| 43-44 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 67 |
| 45-47 | Chờ 3 bước (`-3`) | (6, 10) | (6, 10) | Dự kiến đứng yên tại (6, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 67 |

