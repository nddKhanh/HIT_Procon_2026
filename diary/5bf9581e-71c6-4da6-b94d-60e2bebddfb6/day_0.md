# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 31
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 25 | #1 | #4 | (5, 13) | 48 | 65 |
| 30 | #0 | #4 | (5, 13) | 41 | 65 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 3) (ô=60)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=0, tọa độ=(5, 13))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=0, tọa độ=(5, 13))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 0, 5, 5, 4, 5, 4, 5, 4, 4, 4, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (14, 8) (Spot #3 (thương hiệu=3, tọa độ=(14, 8))) | 64 |
| 2-3 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (14, 8) (Spot #3 (thương hiệu=3, tọa độ=(14, 8))) | 63 |
| 4-5 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (14, 8) (Spot #3 (thương hiệu=3, tọa độ=(14, 8))) | 62 |
| 6-7 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (14, 8) (Spot #3 (thương hiệu=3, tọa độ=(14, 8))) | 61 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 60 |
| 10-11 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 59 |
| 12-13 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 58 |
| 14 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 56 |
| 15 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 54 |
| 16 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 52 |
| 17-18 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 51 |
| 19-20 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 50 |
| 21-22 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 49 |
| 23 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 47 |
| 24-25 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 46 |
| 26 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 44 |
| 27-28 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 43 |
| 29 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 65 |
| 30 | Chờ 1 bước (`-1`) | (5, 13) | (5, 13) | Dự kiến đứng yên tại (5, 13); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 65 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 4) (ô=73)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(0, 9))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(0, 9))
- Mảng hành động đã gửi server: `[0, 3, 4, 3, 3, 3, 4, 5, 5, 4, 4, 4, 5, 4, 5, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(9, 3)) | 64 |
| 2-3 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 63 |
| 4-5 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 62 |
| 6 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 60 |
| 7 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 58 |
| 8-9 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 57 |
| 10-11 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 56 |
| 12-13 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (8, 9) (Spot #4 (thương hiệu=4, tọa độ=(8, 9))) | 55 |
| 14-15 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 54 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 53 |
| 18-19 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 52 |
| 20-21 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 51 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 50 |
| 24 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 65 |
| 25-26 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 64 |
| 27-28 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (0, 9) (Spot #6 (thương hiệu=6, tọa độ=(0, 9))) | 63 |
| 29-30 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (0, 9) (Spot #6 (thương hiệu=6, tọa độ=(0, 9))) | 62 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 9) (ô=150)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(1, 5))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(1, 5))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 2, 1, 2, 2, 3, 0, 1, 1, 1, 0, 0, 0, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 64 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 63 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 62 |
| 6-7 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 61 |
| 8-9 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (14, 8) (Spot #3 (thương hiệu=3, tọa độ=(14, 8))) | 60 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (14, 8) (Spot #3 (thương hiệu=3, tọa độ=(14, 8))) | 59 |
| 12 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (14, 8) (Spot #3 (thương hiệu=3, tọa độ=(14, 8))) | 57 |
| 13 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (14, 8) (Spot #3 (thương hiệu=3, tọa độ=(14, 8))) | 55 |
| 14 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (14, 8) (Spot #3 (thương hiệu=3, tọa độ=(14, 8))) | 53 |
| 15-16 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 52 |
| 17-18 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (14, 1) (Spot #5 (thương hiệu=5, tọa độ=(14, 1))) | 51 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (14, 1) (Spot #5 (thương hiệu=5, tọa độ=(14, 1))) | 50 |
| 21 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (14, 1) (Spot #5 (thương hiệu=5, tọa độ=(14, 1))) | 48 |
| 22-23 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (14, 1) (Spot #5 (thương hiệu=5, tọa độ=(14, 1))) | 47 |
| 24 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (14, 1) (Spot #5 (thương hiệu=5, tọa độ=(14, 1))) | 45 |
| 25-26 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến di chuyển đến (14, 2); hướng tới tọa độ (14, 1) (Spot #5 (thương hiệu=5, tọa độ=(14, 1))) | 44 |
| 27 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 1)) | 42 |
| 28-29 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (1, 5) (Spot #7 (thương hiệu=7, tọa độ=(1, 5))) | 41 |
| 30 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (1, 5) (Spot #7 (thương hiệu=7, tọa độ=(1, 5))) | 39 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 14) (ô=229)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(10, 9))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(10, 9))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, 0, 5, 5, 1, 1, 2, 0, 0, 2, 2, 2, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 64 |
| 2-3 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (0, 9) (Spot #6 (thương hiệu=6, tọa độ=(0, 9))) | 63 |
| 4-5 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (0, 9) (Spot #6 (thương hiệu=6, tọa độ=(0, 9))) | 62 |
| 6-7 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (0, 9) (Spot #6 (thương hiệu=6, tọa độ=(0, 9))) | 61 |
| 8-9 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (0, 9) (Spot #6 (thương hiệu=6, tọa độ=(0, 9))) | 60 |
| 10-11 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (0, 9) (Spot #6 (thương hiệu=6, tọa độ=(0, 9))) | 59 |
| 12 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 9) (Spot #6 (thương hiệu=6, tọa độ=(0, 9))) | 57 |
| 13 | Di chuyển hướng 5 (`5`) | (1, 9) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 55 |
| 14-15 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến di chuyển đến (0, 8); hướng tới tọa độ (2, 7) (Spot #9 (thương hiệu=1, tọa độ=(2, 7))) | 54 |
| 16 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (2, 7) (Spot #9 (thương hiệu=1, tọa độ=(2, 7))) | 52 |
| 17-18 | Di chuyển hướng 2 (`2`) | (1, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 7)) | 51 |
| 19-20 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (1, 5) (Spot #7 (thương hiệu=7, tọa độ=(1, 5))) | 50 |
| 21-22 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 49 |
| 23-24 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 48 |
| 25-26 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 47 |
| 27 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 45 |
| 28 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 43 |
| 29-30 | Di chuyển hướng 3 (`3`) | (4, 6) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới tọa độ (10, 9) (Spot #2 (thương hiệu=2, tọa độ=(10, 9))) | 42 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (8, 5) (ô=88)
- Nhiên liệu đầu ngày: 65
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=0, tọa độ=(5, 13))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 4, 4, 3, 3, 4, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 65 |
| 2-3 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 65 |
| 4-5 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 65 |
| 6-7 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 65 |
| 8-9 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 65 |
| 10-11 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 65 |
| 12 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 65 |
| 13-14 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=0, tọa độ=(5, 13))) | 65 |
| 15 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (5, 13) | 65 |
| 16-30 | Chờ 15 bước (`-15`) | (5, 13) | (5, 13) | Dự kiến đứng yên tại (5, 13); điểm hẹn của xe tuần tra #0 tại (5, 13) | 65 |

