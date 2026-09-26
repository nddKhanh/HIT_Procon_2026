# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 53
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 22 | #2 | #3 | (13, 10) | 51 | 67 |
| 43 | #0 | #3 | (13, 10) | 37 | 67 |
| 50 | #1 | #3 | (13, 10) | 2 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 12) (ô=216)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(0, 1))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(0, 1))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 0, 0, 0, 3, 3, 3, 2, 2, 0, 1, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới tọa độ (8, 5) (Spot #1 (thương hiệu=1, tọa độ=(8, 5))) | 65 |
| 3-4 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến di chuyển đến (11, 10); hướng tới tọa độ (8, 5) (Spot #1 (thương hiệu=1, tọa độ=(8, 5))) | 64 |
| 5-6 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (8, 5) (Spot #1 (thương hiệu=1, tọa độ=(8, 5))) | 63 |
| 7-8 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (8, 5) (Spot #1 (thương hiệu=1, tọa độ=(8, 5))) | 62 |
| 9-10 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới tọa độ (8, 5) (Spot #1 (thương hiệu=1, tọa độ=(8, 5))) | 61 |
| 11-12 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (8, 5) (Spot #1 (thương hiệu=1, tọa độ=(8, 5))) | 60 |
| 13 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (8, 5) (Spot #1 (thương hiệu=1, tọa độ=(8, 5))) | 58 |
| 14 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 5)) | 56 |
| 15-16 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (11, 8) (Spot #4 (thương hiệu=4, tọa độ=(11, 8))) | 55 |
| 17 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (11, 8) (Spot #4 (thương hiệu=4, tọa độ=(11, 8))) | 53 |
| 18 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới tọa độ (11, 8) (Spot #4 (thương hiệu=4, tọa độ=(11, 8))) | 51 |
| 19-20 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (11, 8) (Spot #4 (thương hiệu=4, tọa độ=(11, 8))) | 50 |
| 21-22 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 8)) | 49 |
| 23-24 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 48 |
| 25-26 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 47 |
| 27-28 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 46 |
| 29-30 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 45 |
| 31-32 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 44 |
| 33-34 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 43 |
| 35-36 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 42 |
| 37-39 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 40 |
| 40 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 38 |
| 41-42 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 43-44 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (14, 14) (Spot #5 (thương hiệu=5, tọa độ=(14, 14))) | 66 |
| 45-46 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (14, 14) (Spot #5 (thương hiệu=5, tọa độ=(14, 14))) | 65 |
| 47-48 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (14, 14) (Spot #5 (thương hiệu=5, tọa độ=(14, 14))) | 64 |
| 49-50 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 14)) | 63 |
| 51-52 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 62 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 3) (ô=54)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 10)
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 4, 3, 3, 4, 3, 3, 0, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 3, 3, 4, 3, 2, 3, 3, -1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới tọa độ (3, 13) (Spot #0 (thương hiệu=0, tọa độ=(3, 13))) | 40 |
| 1-2 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (3, 13) (Spot #0 (thương hiệu=0, tọa độ=(3, 13))) | 39 |
| 3 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (3, 13) (Spot #0 (thương hiệu=0, tọa độ=(3, 13))) | 37 |
| 4-5 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (3, 13) (Spot #0 (thương hiệu=0, tọa độ=(3, 13))) | 36 |
| 6 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (3, 13) (Spot #0 (thương hiệu=0, tọa độ=(3, 13))) | 34 |
| 7 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (3, 13) (Spot #0 (thương hiệu=0, tọa độ=(3, 13))) | 32 |
| 8 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (3, 13) (Spot #0 (thương hiệu=0, tọa độ=(3, 13))) | 30 |
| 9 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (3, 13) (Spot #0 (thương hiệu=0, tọa độ=(3, 13))) | 28 |
| 10-11 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (3, 13) (Spot #0 (thương hiệu=0, tọa độ=(3, 13))) | 27 |
| 12-13 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 13)) | 26 |
| 14-15 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 25 |
| 16-17 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 24 |
| 18-19 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 23 |
| 20-21 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 22 |
| 22 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 20 |
| 23 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 18 |
| 24 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 16 |
| 25-26 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 15 |
| 27-28 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 14 |
| 29-30 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 13 |
| 31-32 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 12 |
| 33-34 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 11 |
| 35-36 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 10 |
| 37-38 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (11, 8) (Spot #4 (thương hiệu=4, tọa độ=(11, 8))) | 9 |
| 39-40 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (11, 8) (Spot #4 (thương hiệu=4, tọa độ=(11, 8))) | 8 |
| 41-42 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (11, 8) (Spot #4 (thương hiệu=4, tọa độ=(11, 8))) | 7 |
| 43-44 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 8)) | 6 |
| 45-46 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 5 |
| 47 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 3 |
| 48-49 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 50 | Chờ 1 bước (`-1`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); hướng tới tọa độ (13, 10) | 67 |
| 51-52 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (13, 10) | 66 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 9) (ô=166)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(0, 1))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(0, 1))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 5, 5, 5, 0, 0, 0, 0, 0, 5, 5, 5, 5, 0, 5, 0, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 65 |
| 2 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 63 |
| 3-5 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 61 |
| 6-7 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (10, 4) (Spot #2 (thương hiệu=2, tọa độ=(10, 4))) | 60 |
| 8-9 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 59 |
| 10-11 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 58 |
| 12-13 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 57 |
| 14-15 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 56 |
| 16-18 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 54 |
| 19 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 52 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 66 |
| 24-25 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 65 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 63 |
| 27-28 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 62 |
| 29-30 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 61 |
| 31-32 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 60 |
| 33 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 58 |
| 34 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 56 |
| 35-36 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 55 |
| 37 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 53 |
| 38 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 51 |
| 39-40 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 50 |
| 41-42 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 49 |
| 43-44 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 48 |
| 45 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 46 |
| 46-47 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 45 |
| 48-49 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến di chuyển đến (1, 1); hướng tới tọa độ (0, 1) (Spot #3 (thương hiệu=3, tọa độ=(0, 1))) | 44 |
| 50 | Di chuyển hướng 5 (`5`) | (1, 1) | (0, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 1)) | 42 |
| 51-52 | Chờ 2 bước (`-2`) | (0, 1) | (0, 1) | Dự kiến đứng yên tại (0, 1); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 1)) | 42 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (12, 12) (ô=216)
- Nhiên liệu đầu ngày: 67
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #6 (thương hiệu=0, tọa độ=(13, 10))
- Mảng hành động đã gửi server: `[1, 1, -47]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới điểm hẹn của xe tuần tra #1 tại (13, 10) (Spot #6 (thương hiệu=0, tọa độ=(13, 10))) | 67 |
| 3-5 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (13, 10) | 67 |
| 6-52 | Chờ 47 bước (`-47`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); điểm hẹn của xe tuần tra #1 tại (13, 10) | 67 |

