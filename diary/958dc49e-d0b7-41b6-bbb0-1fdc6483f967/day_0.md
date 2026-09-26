# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 9 | #1 | #3 | (8, 11) | 61 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 10) (ô=188)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(7, 11))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(7, 11))
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 1, 1, 2, 5, 4, 4, 4, 5, 4, 5, 5, 5, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 66 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 64 |
| 3-4 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 63 |
| 5-6 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 62 |
| 7-9 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 60 |
| 10 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 58 |
| 11-12 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 57 |
| 13-14 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 56 |
| 15-16 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 55 |
| 17 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 53 |
| 18-20 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 51 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 50 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 49 |
| 25 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 47 |
| 26-27 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 46 |
| 28-29 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 45 |
| 30-31 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 44 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 8) (ô=152)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[5, 4, 4, 3, 2, 1, 2, 1, 1, 2, 1, 1, 2, 5, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (7, 11) (Spot #0 (thương hiệu=0, tọa độ=(7, 11))) | 66 |
| 2-3 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (7, 11) (Spot #0 (thương hiệu=0, tọa độ=(7, 11))) | 65 |
| 4 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (7, 11) (Spot #0 (thương hiệu=0, tọa độ=(7, 11))) | 63 |
| 5-6 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 62 |
| 7-8 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (10, 9) (Spot #7 (thương hiệu=1, tọa độ=(10, 9))) | 67 |
| 9-10 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (10, 9) (Spot #7 (thương hiệu=1, tọa độ=(10, 9))) | 66 |
| 11-12 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (10, 9) (Spot #7 (thương hiệu=1, tọa độ=(10, 9))) | 65 |
| 13 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 63 |
| 14-15 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 62 |
| 16-17 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 61 |
| 18-20 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 59 |
| 21 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 57 |
| 22-23 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 56 |
| 24-25 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (6, 6) (Spot #6 (thương hiệu=0, tọa độ=(6, 6))) | 55 |
| 26-27 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (6, 6) (Spot #6 (thương hiệu=0, tọa độ=(6, 6))) | 54 |
| 28-29 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (6, 6) (Spot #6 (thương hiệu=0, tọa độ=(6, 6))) | 53 |
| 30 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (6, 6) (Spot #6 (thương hiệu=0, tọa độ=(6, 6))) | 51 |
| 31 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (6, 6) (Spot #6 (thương hiệu=0, tọa độ=(6, 6))) | 49 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 10) (ô=192)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=0, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[0, 1, 0, 1, 1, 0, 1, 1, 1, 4, 4, 4, 5, 4, 4, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 66 |
| 2-3 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 65 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 64 |
| 6 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 62 |
| 7-8 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 61 |
| 9 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 59 |
| 10-11 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 58 |
| 12-13 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 57 |
| 14 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 1)) | 55 |
| 15-16 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 54 |
| 17 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 52 |
| 18-19 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 51 |
| 20-21 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 50 |
| 22-23 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 49 |
| 24-25 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 48 |
| 26 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 46 |
| 27 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 44 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 43 |
| 30-31 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 42 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (8, 11) (ô=206)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 11)
- Mảng hành động đã gửi server: `[-32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-31 | Chờ 32 bước (`-32`) | (8, 11) | (8, 11) | Dự kiến đứng yên tại (8, 11); hướng tới tọa độ (8, 11) | 67 |

