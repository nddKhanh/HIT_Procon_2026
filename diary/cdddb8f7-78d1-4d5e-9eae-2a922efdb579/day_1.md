# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 45
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 15 | #0 | #7 | (8, 15) | 25 | 49 |
| 19 | #5 | #7 | (8, 15) | 0 | 49 |
| 30 | #3 | #6 | (12, 2) | 3 | 49 |
| 45 | #1 | #7 | (8, 15) | 12 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (0, 16) (ô=352)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (0, 16) | (1, 16) | Dự kiến di chuyển đến (1, 16); hướng tới tọa độ (5, 16) (Spot #5 (thương hiệu=5, tọa độ=(5, 16))) | 36 |
| 3-5 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (5, 16) (Spot #5 (thương hiệu=5, tọa độ=(5, 16))) | 34 |
| 6 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới tọa độ (5, 16) (Spot #5 (thương hiệu=5, tọa độ=(5, 16))) | 32 |
| 7-8 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (5, 16) (Spot #5 (thương hiệu=5, tọa độ=(5, 16))) | 31 |
| 9 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 29 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (11, 10) (Spot #11 (thương hiệu=11, tọa độ=(11, 10))) | 28 |
| 12 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (11, 10) (Spot #11 (thương hiệu=11, tọa độ=(11, 10))) | 26 |
| 13-14 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (11, 10) (Spot #11 (thương hiệu=11, tọa độ=(11, 10))) | 49 |
| 15-16 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (11, 10) (Spot #11 (thương hiệu=11, tọa độ=(11, 10))) | 48 |
| 17 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (11, 10) (Spot #11 (thương hiệu=11, tọa độ=(11, 10))) | 46 |
| 18 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (11, 10) (Spot #11 (thương hiệu=11, tọa độ=(11, 10))) | 44 |
| 19-20 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (11, 10) (Spot #11 (thương hiệu=11, tọa độ=(11, 10))) | 43 |
| 21-22 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (11, 10) (Spot #11 (thương hiệu=11, tọa độ=(11, 10))) | 42 |
| 23-24 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 41 |
| 25-26 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (14, 9) (Spot #16 (thương hiệu=16, tọa độ=(14, 9))) | 40 |
| 27-29 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (14, 9) (Spot #16 (thương hiệu=16, tọa độ=(14, 9))) | 38 |
| 30-32 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 36 |
| 33-34 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (16, 9) (Spot #18 (thương hiệu=18, tọa độ=(16, 9))) | 35 |
| 35-37 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(16, 9)) | 33 |
| 38-39 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (13, 12) (Spot #17 (thương hiệu=17, tọa độ=(13, 12))) | 32 |
| 40-42 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (13, 12) (Spot #17 (thương hiệu=17, tọa độ=(13, 12))) | 30 |
| 43-44 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (13, 12) (Spot #17 (thương hiệu=17, tọa độ=(13, 12))) | 29 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 14) (ô=310)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(8, 15))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(8, 15))
- Mảng hành động đã gửi server: `[0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (0, 4) (Spot #3 (thương hiệu=3, tọa độ=(0, 4))) | 44 |
| 3 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (0, 4) (Spot #3 (thương hiệu=3, tọa độ=(0, 4))) | 42 |
| 4-5 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (0, 4) (Spot #3 (thương hiệu=3, tọa độ=(0, 4))) | 41 |
| 6 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (0, 4) (Spot #3 (thương hiệu=3, tọa độ=(0, 4))) | 39 |
| 7-8 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 4) (Spot #3 (thương hiệu=3, tọa độ=(0, 4))) | 38 |
| 9-10 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (0, 4) (Spot #3 (thương hiệu=3, tọa độ=(0, 4))) | 37 |
| 11-12 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 4) (Spot #3 (thương hiệu=3, tọa độ=(0, 4))) | 36 |
| 13 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (0, 4) (Spot #3 (thương hiệu=3, tọa độ=(0, 4))) | 34 |
| 14-15 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới tọa độ (0, 4) (Spot #3 (thương hiệu=3, tọa độ=(0, 4))) | 33 |
| 16-17 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 4)) | 32 |
| 18-19 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới tọa độ (2, 5) (Spot #15 (thương hiệu=15, tọa độ=(2, 5))) | 31 |
| 20-21 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(2, 5)) | 30 |
| 22-23 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 29 |
| 24-26 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 27 |
| 27 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 25 |
| 28-29 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 24 |
| 30-32 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 22 |
| 33-35 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (5, 12) (Spot #12 (thương hiệu=12, tọa độ=(5, 12))) | 20 |
| 36-38 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 18 |
| 39-40 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 17 |
| 41-42 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới tọa độ (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 16 |
| 43 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 14 |
| 44 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 49 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 10) (ô=230)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(0, 18))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(0, 18))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 4, 5, 4, 0, 5, 5, 0, 0, 0, 0, 4, 4, 4, 3, 4, 3, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (6, 17) (Spot #1 (thương hiệu=1, tọa độ=(6, 17))) | 33 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (6, 17) (Spot #1 (thương hiệu=1, tọa độ=(6, 17))) | 32 |
| 4-5 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (6, 17) (Spot #1 (thương hiệu=1, tọa độ=(6, 17))) | 31 |
| 6 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (6, 17) (Spot #1 (thương hiệu=1, tọa độ=(6, 17))) | 29 |
| 7 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (6, 17) (Spot #1 (thương hiệu=1, tọa độ=(6, 17))) | 27 |
| 8-9 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (6, 17) (Spot #1 (thương hiệu=1, tọa độ=(6, 17))) | 26 |
| 10-11 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (6, 17) (Spot #1 (thương hiệu=1, tọa độ=(6, 17))) | 25 |
| 12 | Di chuyển hướng 4 (`4`) | (6, 16) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 23 |
| 13-14 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 22 |
| 15-16 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (3, 15) (Spot #10 (thương hiệu=10, tọa độ=(3, 15))) | 21 |
| 17 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới tọa độ (3, 15) (Spot #10 (thương hiệu=10, tọa độ=(3, 15))) | 19 |
| 18-19 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 18 |
| 20-21 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (1, 12) (Spot #21 (thương hiệu=21, tọa độ=(1, 12))) | 17 |
| 22-24 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (1, 12) (Spot #21 (thương hiệu=21, tọa độ=(1, 12))) | 15 |
| 25 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 13 |
| 26-27 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới tọa độ (0, 18) (Spot #13 (thương hiệu=13, tọa độ=(0, 18))) | 12 |
| 28-29 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến di chuyển đến (0, 14); hướng tới tọa độ (0, 18) (Spot #13 (thương hiệu=13, tọa độ=(0, 18))) | 11 |
| 30 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến di chuyển đến (0, 15); hướng tới tọa độ (0, 18) (Spot #13 (thương hiệu=13, tọa độ=(0, 18))) | 9 |
| 31 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến di chuyển đến (0, 16); hướng tới tọa độ (0, 18) (Spot #13 (thương hiệu=13, tọa độ=(0, 18))) | 7 |
| 32-34 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến di chuyển đến (0, 17); hướng tới tọa độ (0, 18) (Spot #13 (thương hiệu=13, tọa độ=(0, 18))) | 5 |
| 35-36 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(0, 18)) | 4 |
| 37-44 | Chờ 8 bước (`-8`) | (0, 18) | (0, 18) | Dự kiến đứng yên tại (0, 18); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(0, 18)) | 4 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 10) (ô=234)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(2, 5))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(2, 5))
- Mảng hành động đã gửi server: `[0, 1, 0, 1, 0, 0, 0, 0, -10, 5, 4, 5, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 15 |
| 2-3 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 14 |
| 4-6 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 12 |
| 7-9 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 10 |
| 10-12 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 8 |
| 13-14 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 7 |
| 15-17 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 5 |
| 18-20 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 2)) | 3 |
| 21-30 | Chờ 10 bước (`-10`) | (12, 2) | (12, 2) | Dự kiến đứng yên tại (12, 2); hướng tới tọa độ (12, 2) | 49 |
| 31-32 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (8, 3) (Spot #7 (thương hiệu=7, tọa độ=(8, 3))) | 48 |
| 33-34 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (8, 3) (Spot #7 (thương hiệu=7, tọa độ=(8, 3))) | 47 |
| 35-37 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (8, 3) (Spot #7 (thương hiệu=7, tọa độ=(8, 3))) | 45 |
| 38 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (8, 3) (Spot #7 (thương hiệu=7, tọa độ=(8, 3))) | 43 |
| 39-41 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 41 |
| 42-43 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (2, 5) (Spot #15 (thương hiệu=15, tọa độ=(2, 5))) | 40 |
| 44 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (2, 5) (Spot #15 (thương hiệu=15, tọa độ=(2, 5))) | 38 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (21, 10) (ô=241)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(11, 10))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(11, 10))
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 3, 3, 4, 3, 4, 1, 0, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến di chuyển đến (21, 11); hướng tới tọa độ (21, 17) (Spot #2 (thương hiệu=2, tọa độ=(21, 17))) | 38 |
| 2 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới tọa độ (21, 17) (Spot #2 (thương hiệu=2, tọa độ=(21, 17))) | 36 |
| 3 | Di chuyển hướng 4 (`4`) | (20, 12) | (20, 13) | Dự kiến di chuyển đến (20, 13); hướng tới tọa độ (21, 17) (Spot #2 (thương hiệu=2, tọa độ=(21, 17))) | 34 |
| 4-6 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến di chuyển đến (20, 14); hướng tới tọa độ (21, 17) (Spot #2 (thương hiệu=2, tọa độ=(21, 17))) | 32 |
| 7-9 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến di chuyển đến (21, 15); hướng tới tọa độ (21, 17) (Spot #2 (thương hiệu=2, tọa độ=(21, 17))) | 30 |
| 10-12 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến di chuyển đến (21, 16); hướng tới tọa độ (21, 17) (Spot #2 (thương hiệu=2, tọa độ=(21, 17))) | 28 |
| 13-15 | Di chuyển hướng 4 (`4`) | (21, 16) | (21, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 17)) | 26 |
| 16-17 | Di chuyển hướng 3 (`3`) | (21, 17) | (21, 18) | Dự kiến di chuyển đến (21, 18); hướng tới tọa độ (21, 19) (Spot #20 (thương hiệu=20, tọa độ=(21, 19))) | 25 |
| 18-19 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 19)) | 24 |
| 20-21 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến di chuyển đến (21, 18); hướng tới tọa độ (18, 15) (Spot #19 (thương hiệu=19, tọa độ=(18, 15))) | 23 |
| 22-23 | Di chuyển hướng 0 (`0`) | (21, 18) | (21, 17) | Dự kiến di chuyển đến (21, 17); hướng tới tọa độ (18, 15) (Spot #19 (thương hiệu=19, tọa độ=(18, 15))) | 22 |
| 24-25 | Di chuyển hướng 5 (`5`) | (21, 17) | (20, 17) | Dự kiến di chuyển đến (20, 17); hướng tới tọa độ (18, 15) (Spot #19 (thương hiệu=19, tọa độ=(18, 15))) | 21 |
| 26 | Di chuyển hướng 5 (`5`) | (20, 17) | (19, 17) | Dự kiến di chuyển đến (19, 17); hướng tới tọa độ (18, 15) (Spot #19 (thương hiệu=19, tọa độ=(18, 15))) | 19 |
| 27-28 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến di chuyển đến (18, 16); hướng tới tọa độ (18, 15) (Spot #19 (thương hiệu=19, tọa độ=(18, 15))) | 18 |
| 29-31 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(18, 15)) | 16 |
| 32-33 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến di chuyển đến (17, 14); hướng tới tọa độ (13, 12) (Spot #17 (thương hiệu=17, tọa độ=(13, 12))) | 15 |
| 34-36 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (13, 12) (Spot #17 (thương hiệu=17, tọa độ=(13, 12))) | 13 |
| 37 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến di chuyển đến (15, 14); hướng tới tọa độ (13, 12) (Spot #17 (thương hiệu=17, tọa độ=(13, 12))) | 11 |
| 38-39 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (13, 12) (Spot #17 (thương hiệu=17, tọa độ=(13, 12))) | 10 |
| 40 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (13, 12) (Spot #17 (thương hiệu=17, tọa độ=(13, 12))) | 8 |
| 41 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 12)) | 6 |
| 42-43 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (11, 10) (Spot #11 (thương hiệu=11, tọa độ=(11, 10))) | 5 |
| 44 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới tọa độ (11, 10) (Spot #11 (thương hiệu=11, tọa độ=(11, 10))) | 3 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 17) (ô=387)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(1, 6))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(1, 6))
- Mảng hành động đã gửi server: `[4, 4, 3, 0, 5, 0, 0, 0, 0, 5, -1, 4, 5, 4, 0, 5, 5, 0, 0, 0, 0, 0, 1, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 13 |
| 3-4 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (12, 20) (Spot #6 (thương hiệu=6, tọa độ=(12, 20))) | 12 |
| 5 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 10 |
| 6-7 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 9 |
| 8 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 7 |
| 9-10 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 6 |
| 11-13 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 4 |
| 14-15 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 3 |
| 16-17 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 2 |
| 18 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 49 |
| 19 | Chờ 1 bước (`-1`) | (8, 15) | (8, 15) | Dự kiến đứng yên tại (8, 15); hướng tới tọa độ (8, 15) | 49 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (6, 17) (Spot #1 (thương hiệu=1, tọa độ=(6, 17))) | 48 |
| 22-23 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (6, 17) (Spot #1 (thương hiệu=1, tọa độ=(6, 17))) | 47 |
| 24 | Di chuyển hướng 4 (`4`) | (6, 16) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 45 |
| 25-26 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 44 |
| 27-28 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (3, 15) (Spot #10 (thương hiệu=10, tọa độ=(3, 15))) | 43 |
| 29 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới tọa độ (3, 15) (Spot #10 (thương hiệu=10, tọa độ=(3, 15))) | 41 |
| 30-31 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 40 |
| 32-33 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (1, 12) (Spot #21 (thương hiệu=21, tọa độ=(1, 12))) | 39 |
| 34-36 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (1, 12) (Spot #21 (thương hiệu=21, tọa độ=(1, 12))) | 37 |
| 37 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 35 |
| 38-39 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (1, 6) (Spot #8 (thương hiệu=8, tọa độ=(1, 6))) | 34 |
| 40 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (1, 6) (Spot #8 (thương hiệu=8, tọa độ=(1, 6))) | 32 |
| 41-42 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (1, 6) (Spot #8 (thương hiệu=8, tọa độ=(1, 6))) | 31 |
| 43-44 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (1, 6) (Spot #8 (thương hiệu=8, tọa độ=(1, 6))) | 30 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (18, 14) (ô=326)
- Nhiên liệu đầu ngày: 49
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #0 (thương hiệu=0, tọa độ=(12, 2))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 0, 0, 0, 0, 0, 5, 0, 0, 5, 0, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến di chuyển đến (18, 13); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 3-5 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 6-7 | Di chuyển hướng 1 (`1`) | (17, 12) | (18, 11) | Dự kiến di chuyển đến (18, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 8-10 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến di chuyển đến (18, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 11-12 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 13 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 14-16 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 17-19 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 20-21 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 22 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 23-24 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 25 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 26 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 2) (Spot #0 (thương hiệu=0, tọa độ=(12, 2))) | 49 |
| 27-29 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (12, 2) | 49 |
| 30-44 | Chờ 15 bước (`-15`) | (12, 2) | (12, 2) | Dự kiến đứng yên tại (12, 2); điểm hẹn của xe tuần tra #3 tại (12, 2) | 49 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 12) (ô=265)
- Nhiên liệu đầu ngày: 49
- Vai trò: Hỗ trợ xe tuần tra #5
- Điểm hẹn của xe tuần tra: Spot #9 (thương hiệu=9, tọa độ=(8, 15))
- Mảng hành động đã gửi server: `[3, 2, 2, 1, 2, 2, 3, 3, 3, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới điểm hẹn của xe tuần tra #5 tại (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 49 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới điểm hẹn của xe tuần tra #5 tại (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 49 |
| 3-4 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới điểm hẹn của xe tuần tra #5 tại (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 49 |
| 5 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới điểm hẹn của xe tuần tra #5 tại (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 49 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới điểm hẹn của xe tuần tra #5 tại (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 49 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới điểm hẹn của xe tuần tra #5 tại (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 49 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới điểm hẹn của xe tuần tra #5 tại (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 49 |
| 12 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới điểm hẹn của xe tuần tra #5 tại (8, 15) (Spot #9 (thương hiệu=9, tọa độ=(8, 15))) | 49 |
| 13 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn của xe tuần tra #5 tại (8, 15) | 49 |
| 14-44 | Chờ 31 bước (`-31`) | (8, 15) | (8, 15) | Dự kiến đứng yên tại (8, 15); điểm hẹn của xe tuần tra #5 tại (8, 15) | 49 |

