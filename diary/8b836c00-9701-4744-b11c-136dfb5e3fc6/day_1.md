# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 43
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #0 | #6 | (4, 3) | 38 | 61 |
| 38 | #3 | #6 | (4, 3) | 1 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 4) (ô=76)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 0, 5, 5, 5, 2, 1, 1, 2, 2, 3, 2, 2, 1, 1, 2, 1, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (5, 5) (Spot #2 (thương hiệu=2, tọa độ=(5, 5))) | 52 |
| 3 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (5, 5) (Spot #2 (thương hiệu=2, tọa độ=(5, 5))) | 50 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (5, 5) (Spot #2 (thương hiệu=2, tọa độ=(5, 5))) | 49 |
| 6-7 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (5, 5) (Spot #2 (thương hiệu=2, tọa độ=(5, 5))) | 48 |
| 8 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 46 |
| 9-10 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 45 |
| 11-13 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 43 |
| 14-15 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 42 |
| 16-17 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 41 |
| 18-19 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 40 |
| 20 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 61 |
| 21-22 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 60 |
| 23-25 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 58 |
| 26-27 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 57 |
| 28 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 55 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 54 |
| 31-33 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 52 |
| 34-35 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 51 |
| 36-37 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (12, 0) (Spot #16 (thương hiệu=16, tọa độ=(12, 0))) | 50 |
| 38-39 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (12, 0) (Spot #16 (thương hiệu=16, tọa độ=(12, 0))) | 49 |
| 40 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (12, 0) (Spot #16 (thương hiệu=16, tọa độ=(12, 0))) | 47 |
| 41-42 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 46 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 12) (ô=216)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[5, 4, 0, 1, 2, 5, 5, 0, 0, 5, 5, 1, 1, 0, 1, 0, 2, 1, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 35 |
| 2-4 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 33 |
| 5-6 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 32 |
| 7-8 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 31 |
| 9-10 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 30 |
| 11-12 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 29 |
| 13-14 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 28 |
| 15-17 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 26 |
| 18-20 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 24 |
| 21-23 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 22 |
| 24 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 20 |
| 25-26 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (7, 6) (Spot #12 (thương hiệu=12, tọa độ=(7, 6))) | 19 |
| 27 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (7, 6) (Spot #12 (thương hiệu=12, tọa độ=(7, 6))) | 17 |
| 28-29 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 16 |
| 30-31 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 15 |
| 32 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 13 |
| 33-34 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 12 |
| 35-37 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 10 |
| 38-39 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 9 |
| 40-41 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (12, 0) (Spot #16 (thương hiệu=16, tọa độ=(12, 0))) | 8 |
| 42 | Chờ 1 bước (`-1`) | (10, 2) | (10, 2) | Dự kiến đứng yên tại (10, 2); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 8 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 5) (ô=90)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(7, 6))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(7, 6))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 3, 2, 3, 2, 2, 4, 4, 4, 4, 2, 2, 3, 3, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 58 |
| 2 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 56 |
| 3-5 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 54 |
| 6-8 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 52 |
| 9-10 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 51 |
| 11 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 49 |
| 12-14 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 47 |
| 15-17 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 45 |
| 18-20 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 43 |
| 21-22 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 42 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 41 |
| 25-27 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 39 |
| 28-29 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (10, 15) (Spot #19 (thương hiệu=1, tọa độ=(10, 15))) | 38 |
| 30-32 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=1, tọa độ=(10, 15)) | 36 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 35 |
| 35-36 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 34 |
| 37-38 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 33 |
| 39 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 31 |
| 40 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 29 |
| 41-42 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (7, 6) (Spot #12 (thương hiệu=12, tọa độ=(7, 6))) | 28 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 17) (ô=292)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(5, 5))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(5, 5))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 3, 2, 3, 2, 1, 1, -1, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 32 |
| 2-4 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 30 |
| 5-7 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 28 |
| 8-9 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 27 |
| 10-11 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 26 |
| 12 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 24 |
| 13 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 22 |
| 14-15 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 21 |
| 16-17 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 20 |
| 18-20 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 18 |
| 21 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 16 |
| 22 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 14 |
| 23-25 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 12 |
| 26 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 10 |
| 27-28 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (2, 5) (Spot #17 (thương hiệu=17, tọa độ=(2, 5))) | 9 |
| 29 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (2, 5) (Spot #17 (thương hiệu=17, tọa độ=(2, 5))) | 7 |
| 30-32 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 5 |
| 33-34 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 4 |
| 35-36 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (4, 3) (Spot #20 (thương hiệu=2, tọa độ=(4, 3))) | 3 |
| 37 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 61 |
| 38 | Chờ 1 bước (`-1`) | (4, 3) | (4, 3) | Dự kiến đứng yên tại (4, 3); hướng tới tọa độ (4, 3) | 61 |
| 39-40 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (5, 5) (Spot #2 (thương hiệu=2, tọa độ=(5, 5))) | 60 |
| 41-42 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 58 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 14) (ô=252)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(3, 5))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(3, 5))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 0, 5, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 35 |
| 1-3 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến di chuyển đến (13, 13); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 33 |
| 4 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 31 |
| 5-6 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 30 |
| 7-8 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 29 |
| 9-10 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 28 |
| 11-13 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 26 |
| 14-16 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 24 |
| 17-18 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 23 |
| 19-21 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 21 |
| 22-24 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(5, 11)) | 19 |
| 25-26 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (2, 14) (Spot #11 (thương hiệu=11, tọa độ=(2, 14))) | 18 |
| 27-28 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (2, 14) (Spot #11 (thương hiệu=11, tọa độ=(2, 14))) | 17 |
| 29-30 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới tọa độ (2, 14) (Spot #11 (thương hiệu=11, tọa độ=(2, 14))) | 16 |
| 31-33 | Di chuyển hướng 4 (`4`) | (3, 13) | (2, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 14)) | 14 |
| 34-35 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (1, 13) (Spot #13 (thương hiệu=13, tọa độ=(1, 13))) | 13 |
| 36-37 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 12 |
| 38-39 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 11 |
| 40-41 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 10 |
| 42 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 8 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (12, 0) (ô=12)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=1, tọa độ=(10, 15))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=1, tọa độ=(10, 15))
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 4, 4, 5, 3, 4, 3, 4, 4, 2, 3, 2, 3, 2, 2, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 35 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 34 |
| 4 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 32 |
| 5-6 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 31 |
| 7-8 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 30 |
| 9-10 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 29 |
| 11-13 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 27 |
| 14-15 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (7, 6) (Spot #12 (thương hiệu=12, tọa độ=(7, 6))) | 26 |
| 16 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 24 |
| 17-18 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 23 |
| 19-20 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 22 |
| 21 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 20 |
| 22-23 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 19 |
| 24 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 17 |
| 25-27 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 15 |
| 28-30 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 13 |
| 31-33 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 11 |
| 34-35 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 10 |
| 36-37 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 9 |
| 38-40 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 7 |
| 41-42 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (10, 15) (Spot #19 (thương hiệu=1, tọa độ=(10, 15))) | 6 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (4, 4) (ô=72)
- Nhiên liệu đầu ngày: 61
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #20 (thương hiệu=2, tọa độ=(4, 3))
- Mảng hành động đã gửi server: `[0, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (4, 3) | 61 |
| 2-42 | Chờ 41 bước (`-41`) | (4, 3) | (4, 3) | Dự kiến đứng yên tại (4, 3); điểm hẹn của xe tuần tra #3 tại (4, 3) | 61 |

