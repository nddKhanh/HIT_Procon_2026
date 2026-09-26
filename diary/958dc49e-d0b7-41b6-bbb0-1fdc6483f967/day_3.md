# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 80
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #3 | (9, 10) | 66 | 67 |
| 10 | #1 | #3 | (11, 8) | 63 | 67 |
| 13 | #1 | #3 | (12, 7) | 65 | 67 |
| 17 | #1 | #3 | (12, 6) | 65 | 67 |
| 19 | #1 | #3 | (13, 6) | 66 | 67 |
| 67 | #0 | #3 | (13, 6) | 26 | 67 |
| 76 | #2 | #3 | (13, 6) | 10 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (6, 10) (ô=186)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(13, 6))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(13, 6))
- Mảng hành động đã gửi server: `[3, 2, 1, 2, 1, 2, 1, 1, 1, 0, 1, 1, 1, 1, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2, 2, 2, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 65 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 64 |
| 4-5 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 63 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 62 |
| 8-11 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 60 |
| 12-13 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 59 |
| 14-15 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 58 |
| 16-18 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 56 |
| 19-22 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 54 |
| 23-24 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 53 |
| 25-26 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 52 |
| 27-28 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 51 |
| 29-30 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 50 |
| 31-32 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 1)) | 48 |
| 33-34 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 47 |
| 35-36 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 45 |
| 37-38 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 44 |
| 39-40 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 43 |
| 41-42 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 42 |
| 43-44 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 41 |
| 45-46 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 39 |
| 47-48 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (7, 6) (Spot #4 (thương hiệu=4, tọa độ=(7, 6))) | 37 |
| 49-50 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 6)) | 36 |
| 51-52 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(6, 6)) | 35 |
| 53-54 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 34 |
| 55-56 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 33 |
| 57-58 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 32 |
| 59-60 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 30 |
| 61-62 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 28 |
| 63-64 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 27 |
| 65-66 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 67 |
| 67-79 | Chờ 13 bước (`-13`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 67 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 10) (ô=188)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 6)
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 1, 1, 2, -1, 0, -58]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 67 |
| 2-5 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 65 |
| 6-7 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 64 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 67 |
| 10-12 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 67 |
| 13-16 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 67 |
| 17-18 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 67 |
| 19 | Chờ 1 bước (`-1`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); hướng tới tọa độ (13, 6) | 67 |
| 20-21 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (13, 6) | 66 |
| 22-79 | Chờ 58 bước (`-58`) | (13, 5) | (13, 5) | Dự kiến đứng yên tại (13, 5); hướng tới tọa độ (13, 6) | 66 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 6) (ô=114)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(13, 6))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(13, 6))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 4, 4, 4, 4, 3, 4, 4, 5, 4, 4, 5, 5, 5, 3, 2, 1, 2, 1, 2, 1, 1, 1, 2, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 52 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 51 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 50 |
| 6-7 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 48 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 46 |
| 10-11 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 45 |
| 12-13 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 44 |
| 14-15 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 43 |
| 16-17 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (14, 1) (Spot #2 (thương hiệu=2, tọa độ=(14, 1))) | 42 |
| 18-19 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 1)) | 40 |
| 20-21 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 39 |
| 22-23 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 37 |
| 24-25 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 36 |
| 26-27 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (12, 6) (Spot #3 (thương hiệu=3, tọa độ=(12, 6))) | 35 |
| 28-29 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 6)) | 34 |
| 30-31 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (10, 9) (Spot #7 (thương hiệu=1, tọa độ=(10, 9))) | 33 |
| 32-35 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (10, 9) (Spot #7 (thương hiệu=1, tọa độ=(10, 9))) | 31 |
| 36-38 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (10, 9) (Spot #7 (thương hiệu=1, tọa độ=(10, 9))) | 29 |
| 39-40 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(10, 9)) | 28 |
| 41-42 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 27 |
| 43-46 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 25 |
| 47-48 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (6, 10) (Spot #5 (thương hiệu=5, tọa độ=(6, 10))) | 24 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 10)) | 23 |
| 51-52 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(7, 11)) | 22 |
| 53-54 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 21 |
| 55-56 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 20 |
| 57-58 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 19 |
| 59-62 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 17 |
| 63-64 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 16 |
| 65-66 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 15 |
| 67-69 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 13 |
| 70-73 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 11 |
| 74-75 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 67 |
| 76-79 | Chờ 4 bước (`-4`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 6)) | 67 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (8, 10) (ô=188)
- Nhiên liệu đầu ngày: 67
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #1 (thương hiệu=1, tọa độ=(13, 6))
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 1, 1, 2, -61]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 67 |
| 2-5 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 67 |
| 6-7 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 67 |
| 8-9 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 67 |
| 10-12 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 67 |
| 13-16 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (13, 6) (Spot #1 (thương hiệu=1, tọa độ=(13, 6))) | 67 |
| 17-18 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (13, 6) | 67 |
| 19-79 | Chờ 61 bước (`-61`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); điểm hẹn của xe tuần tra #1 tại (13, 6) | 67 |

