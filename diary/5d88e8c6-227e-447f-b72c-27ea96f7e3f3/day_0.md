# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #0 | #4 | (10, 8) | 51 | 67 |
| 19 | #1 | #4 | (10, 8) | 56 | 67 |
| 26 | #2 | #4 | (13, 13) | 48 | 67 |
| 30 | #2 | #4 | (13, 13) | 65 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 1) (ô=21)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(5, 0))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(5, 0))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 2, 3, 3, 3, 3, 2, 0, 0, 0, 0, 0, 0, 0, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 66 |
| 2 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 64 |
| 3 | Di chuyển hướng 3 (`3`) | (5, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 62 |
| 4 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 60 |
| 5 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 58 |
| 6 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 56 |
| 7-8 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 55 |
| 9 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 53 |
| 10-11 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 52 |
| 12-13 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 67 |
| 14-15 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 66 |
| 16-17 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 65 |
| 18-19 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 64 |
| 20-21 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 63 |
| 22-23 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 62 |
| 24-25 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 61 |
| 26 | Di chuyển hướng 0 (`0`) | (7, 2) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 59 |
| 27-28 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 58 |
| 29-30 | Di chuyển hướng 0 (`0`) | (6, 1) | (5, 0) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 0)) | 57 |
| 31 | Chờ 1 bước (`-1`) | (5, 0) | (5, 0) | Dự kiến đứng yên tại (5, 0); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 0)) | 57 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 2) (ô=49)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 11)
- Mảng hành động đã gửi server: `[5, 0, 4, 4, 4, 4, 3, 4, 4, 5, 5, 5, 4, 4, 4, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 66 |
| 2-3 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 65 |
| 4-5 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 64 |
| 6-7 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 63 |
| 8-9 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 62 |
| 10-11 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 61 |
| 12-13 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 60 |
| 14-15 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 59 |
| 16-17 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 58 |
| 18 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 67 |
| 19-20 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 66 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 65 |
| 23-24 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 64 |
| 25-26 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 63 |
| 27-28 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 62 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 61 |
| 31 | Chờ 1 bước (`-1`) | (8, 11) | (8, 11) | Dự kiến đứng yên tại (8, 11); hướng tới tọa độ (8, 11) | 61 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 4) (ô=76)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 13)
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 2, 3, 3, 3, 2, 3, 4, 5, 5, 4, 3, 3, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 66 |
| 2 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 64 |
| 3 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 62 |
| 4-5 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 61 |
| 6-7 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 60 |
| 8-9 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 59 |
| 10 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 57 |
| 11-12 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 56 |
| 13-14 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 55 |
| 15-16 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 10)) | 54 |
| 17-18 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 53 |
| 19-20 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 52 |
| 21 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 50 |
| 22-23 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 12)) | 49 |
| 24-25 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 67 |
| 26-27 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 14)) | 66 |
| 28-29 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 67 |
| 30-31 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 66 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 12) (ô=204)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(12, 6))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(12, 6))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 0, 1, 1, 1, 2, 2, 2, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 66 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 65 |
| 4-6 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 63 |
| 7-8 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 62 |
| 9-10 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 61 |
| 11 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 59 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 58 |
| 14-15 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 57 |
| 16-17 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 56 |
| 18-19 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 55 |
| 20-21 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 54 |
| 22-23 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 53 |
| 24-25 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 52 |
| 26-27 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 51 |
| 28 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 49 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 48 |
| 31 | Chờ 1 bước (`-1`) | (12, 6) | (12, 6) | Dự kiến đứng yên tại (12, 6); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 48 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (6, 14) (ô=244)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 13)
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 1, 1, 1, -7, 3, 4, 3, 3, 3, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 67 |
| 2 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 67 |
| 3-4 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 67 |
| 5 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 67 |
| 6-7 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 67 |
| 8-9 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 67 |
| 10-11 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 67 |
| 12-18 | Chờ 7 bước (`-7`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 67 |
| 19-20 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 67 |
| 21 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 67 |
| 22 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 67 |
| 23 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 67 |
| 24 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 67 |
| 25 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 67 |
| 26-31 | Chờ 6 bước (`-6`) | (13, 13) | (13, 13) | Dự kiến đứng yên tại (13, 13); hướng tới tọa độ (13, 13) | 67 |

