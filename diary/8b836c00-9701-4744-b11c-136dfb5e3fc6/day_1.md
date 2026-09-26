# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 43
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 41 | #2 | #6 | (14, 17) | 5 | 61 |
| 41 | #3 | #6 | (14, 17) | 3 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 4) (ô=76)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 0, 5, 5, 5, 2, 1, 1, 2, 2, 3, 2, 2, 1, 1, 2, 1, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (5, 5) (Spot #2 (thương hiệu=2, tọa độ=(5, 5))) | 32 |
| 3 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (5, 5) (Spot #2 (thương hiệu=2, tọa độ=(5, 5))) | 30 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (5, 5) (Spot #2 (thương hiệu=2, tọa độ=(5, 5))) | 29 |
| 6-7 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (5, 5) (Spot #2 (thương hiệu=2, tọa độ=(5, 5))) | 28 |
| 8 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 26 |
| 9-10 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 25 |
| 11-13 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 23 |
| 14-15 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 22 |
| 16-17 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 21 |
| 18-19 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 20 |
| 20 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 18 |
| 21-22 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 17 |
| 23-25 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 15 |
| 26-27 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 14 |
| 28 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 12 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 11 |
| 31-33 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 9 |
| 34-35 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 8 |
| 36-37 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (12, 0) (Spot #16 (thương hiệu=16, tọa độ=(12, 0))) | 7 |
| 38-39 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (12, 0) (Spot #16 (thương hiệu=16, tọa độ=(12, 0))) | 6 |
| 40 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (12, 0) (Spot #16 (thương hiệu=16, tọa độ=(12, 0))) | 4 |
| 41-42 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 5) (ô=87)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=0, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=0, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[0, 5, 0, 3, 2, 3, 2, 1, 1, 2, 2, 3, 2, 2, 1, 1, 2, 1, 2, 1, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 32 |
| 2-4 | Di chuyển hướng 5 (`5`) | (1, 4) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (0, 3) (Spot #1 (thương hiệu=1, tọa độ=(0, 3))) | 30 |
| 5 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 28 |
| 6-7 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 27 |
| 8 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 25 |
| 9-11 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 23 |
| 12-13 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 22 |
| 14-15 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 21 |
| 16 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 19 |
| 17-18 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 18 |
| 19-21 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 16 |
| 22-23 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 15 |
| 24 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 13 |
| 25-26 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 12 |
| 27-29 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 10 |
| 30-31 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 9 |
| 32-33 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (12, 0) (Spot #16 (thương hiệu=16, tọa độ=(12, 0))) | 8 |
| 34-35 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (12, 0) (Spot #16 (thương hiệu=16, tọa độ=(12, 0))) | 7 |
| 36 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (12, 0) (Spot #16 (thương hiệu=16, tọa độ=(12, 0))) | 5 |
| 37-38 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 4 |
| 39-40 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (15, 1) (Spot #18 (thương hiệu=0, tọa độ=(15, 1))) | 3 |
| 41-42 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (15, 1) (Spot #18 (thương hiệu=0, tọa độ=(15, 1))) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 5) (ô=90)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(14, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(14, 17))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 3, 2, 3, 2, 2, 4, 4, 4, 4, 2, 2, 3, 3, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 34 |
| 2 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 32 |
| 3-5 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 30 |
| 6-8 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 28 |
| 9-10 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 27 |
| 11 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 25 |
| 12-14 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 23 |
| 15-17 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 21 |
| 18-20 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 19 |
| 21-22 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 18 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 17 |
| 25-27 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 15 |
| 28-29 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (10, 15) (Spot #19 (thương hiệu=1, tọa độ=(10, 15))) | 14 |
| 30-32 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=1, tọa độ=(10, 15)) | 12 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 11 |
| 35-36 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 10 |
| 37-38 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 9 |
| 39 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 7 |
| 40 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 61 |
| 41-42 | Chờ 2 bước (`-2`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 61 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 17) (ô=292)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 17)
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 0, 1, 2, 3, 3, 4, 4, 3, 3, 2, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến di chuyển đến (3, 18); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 32 |
| 2-4 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 30 |
| 5 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 28 |
| 6-8 | Di chuyển hướng 2 (`2`) | (5, 18) | (6, 18) | Dự kiến di chuyển đến (6, 18); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 26 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 18) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 25 |
| 11-12 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 24 |
| 13 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 22 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 21 |
| 16-17 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 20 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (11, 13) (Spot #0 (thương hiệu=0, tọa độ=(11, 13))) | 19 |
| 20-22 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 17 |
| 23-24 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (11, 11) (Spot #6 (thương hiệu=6, tọa độ=(11, 11))) | 16 |
| 25-26 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 15 |
| 27-28 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 14 |
| 29-30 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 13 |
| 31-32 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến di chuyển đến (13, 13); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 12 |
| 33 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến di chuyển đến (12, 14); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 10 |
| 34-36 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 8 |
| 37-38 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 7 |
| 39 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 5 |
| 40 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 61 |
| 41 | Chờ 1 bước (`-1`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); hướng tới tọa độ (14, 17) | 61 |
| 42 | Chờ 1 bước (`-1`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); hướng tới tọa độ (14, 17) | 61 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 14) (ô=252)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(2, 5))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(2, 5))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 5, 5, 0, 0, 5, 5, 1, 1, 0, 1, 0, 5, 0, 5, 5, 4, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 35 |
| 1-3 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến di chuyển đến (13, 13); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 33 |
| 4 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 31 |
| 5-6 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 30 |
| 7-8 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 29 |
| 9-10 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 28 |
| 11-13 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 26 |
| 14-16 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 24 |
| 17-19 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (7, 9) (Spot #4 (thương hiệu=4, tọa độ=(7, 9))) | 22 |
| 20 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 20 |
| 21-22 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (7, 6) (Spot #12 (thương hiệu=12, tọa độ=(7, 6))) | 19 |
| 23 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (7, 6) (Spot #12 (thương hiệu=12, tọa độ=(7, 6))) | 17 |
| 24-25 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 16 |
| 26-27 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (7, 4) (Spot #15 (thương hiệu=15, tọa độ=(7, 4))) | 15 |
| 28 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 13 |
| 29-30 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 12 |
| 31 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 10 |
| 32-33 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 9 |
| 34-36 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 7 |
| 37-38 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 6 |
| 39 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 4 |
| 40-41 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 3 |
| 42 | Chờ 1 bước (`-1`) | (2, 5) | (2, 5) | Dự kiến đứng yên tại (2, 5); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 3 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (12, 0) (ô=12)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(3, 5))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(3, 5))
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 4, 4, 4, 4, 3, 4, 4, 5, 4, 4, 5, 4, 4, 4, 0, 5, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 60 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 59 |
| 4 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (9, 2) (Spot #5 (thương hiệu=5, tọa độ=(9, 2))) | 57 |
| 5-6 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 56 |
| 7-8 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 55 |
| 9-10 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 54 |
| 11-13 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 52 |
| 14 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 50 |
| 15-16 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 49 |
| 17-18 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 48 |
| 19 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 46 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 45 |
| 22-24 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (5, 11) (Spot #14 (thương hiệu=14, tọa độ=(5, 11))) | 43 |
| 25-26 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(5, 11)) | 42 |
| 27-28 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (2, 14) (Spot #11 (thương hiệu=11, tọa độ=(2, 14))) | 41 |
| 29-30 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (2, 14) (Spot #11 (thương hiệu=11, tọa độ=(2, 14))) | 40 |
| 31-32 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới tọa độ (2, 14) (Spot #11 (thương hiệu=11, tọa độ=(2, 14))) | 39 |
| 33-35 | Di chuyển hướng 4 (`4`) | (3, 13) | (2, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 14)) | 37 |
| 36-37 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (1, 13) (Spot #13 (thương hiệu=13, tọa độ=(1, 13))) | 36 |
| 38-39 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 35 |
| 40-41 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (3, 5) (Spot #10 (thương hiệu=10, tọa độ=(3, 5))) | 34 |
| 42 | Chờ 1 bước (`-1`) | (1, 12) | (1, 12) | Dự kiến đứng yên tại (1, 12); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 34 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 0) (ô=12)
- Nhiên liệu đầu ngày: 61
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #9 (thương hiệu=9, tọa độ=(14, 17))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 4, 3, 3, 4, 3, 3, 4, 3, 3, 4, 3, 4, 4, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 2-3 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 4-5 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 6-7 | Di chuyển hướng 4 (`4`) | (14, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 8 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 9-10 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 11-13 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 14 | Di chuyển hướng 4 (`4`) | (14, 7) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 15-16 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 17-18 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 19-20 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 21 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 22-23 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 24-26 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 27 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 28-29 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới điểm hẹn của xe tuần tra #3 tại (14, 17) (Spot #9 (thương hiệu=9, tọa độ=(14, 17))) | 61 |
| 30-31 | Di chuyển hướng 4 (`4`) | (14, 16) | (14, 17) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (14, 17) | 61 |
| 32-42 | Chờ 11 bước (`-11`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); điểm hẹn của xe tuần tra #3 tại (14, 17) | 61 |

