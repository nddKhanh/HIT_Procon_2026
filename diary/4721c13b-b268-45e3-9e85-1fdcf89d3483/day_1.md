# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 48
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #5 | (12, 9) | 66 | 67 |
| 2 | #3 | #5 | (12, 9) | 66 | 67 |
| 3 | #2 | #5 | (12, 10) | 65 | 67 |
| 3 | #3 | #5 | (12, 10) | 65 | 67 |
| 33 | #0 | #5 | (11, 15) | 16 | 67 |
| 45 | #2 | #5 | (11, 15) | 36 | 67 |
| 47 | #3 | #5 | (11, 15) | 35 | 67 |
| 47 | #4 | #5 | (11, 15) | 6 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 9) (ô=190)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(17, 11))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(17, 11))
- Mảng hành động đã gửi server: `[1, 4, 3, 3, 3, 3, 2, 3, 3, 3, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 1, 0, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 36 |
| 2-3 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 35 |
| 4-5 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 34 |
| 6 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 32 |
| 7-8 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 31 |
| 9 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 29 |
| 10-11 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 28 |
| 12-14 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 26 |
| 15-16 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 25 |
| 17-19 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 23 |
| 20-21 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (8, 15) (Spot #19 (thương hiệu=4, tọa độ=(8, 15))) | 22 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (8, 15) (Spot #19 (thương hiệu=4, tọa độ=(8, 15))) | 21 |
| 24-26 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(8, 15)) | 19 |
| 27-28 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 18 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 17 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 67 |
| 33-34 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 66 |
| 35-37 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 64 |
| 38 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 62 |
| 39-40 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 61 |
| 41-42 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 60 |
| 43-44 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 59 |
| 45-46 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 58 |
| 47 | Chờ 1 bước (`-1`) | (14, 11) | (14, 11) | Dự kiến đứng yên tại (14, 11); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 58 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 8) (ô=175)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 16))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 16))
- Mảng hành động đã gửi server: `[5, 4, 5, 0, 5, 5, 5, 0, 1, 1, 4, 3, 4, 4, 3, 3, 3, 3, 2, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 33 |
| 1-2 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 9)) | 32 |
| 3-4 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 31 |
| 5-6 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 30 |
| 7 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 28 |
| 8-9 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 27 |
| 10-12 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 25 |
| 13-14 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (2, 5) (Spot #14 (thương hiệu=14, tọa độ=(2, 5))) | 24 |
| 15-17 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (2, 5) (Spot #14 (thương hiệu=14, tọa độ=(2, 5))) | 22 |
| 18-20 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 5)) | 20 |
| 21-22 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 19 |
| 23-25 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 17 |
| 26-28 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 15 |
| 29-30 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 14 |
| 31-32 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 13 |
| 33 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 11 |
| 34-35 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 10 |
| 36 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 8 |
| 37-38 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 7 |
| 39-41 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 5 |
| 42-43 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 4 |
| 44-46 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 2 |
| 47 | Chờ 1 bước (`-1`) | (5, 16) | (5, 16) | Dự kiến đứng yên tại (5, 16); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 8) (ô=179)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(3, 13))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(3, 13))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 3, 2, 2, 1, 4, 5, 4, 4, 3, 4, 3, 3, 5, 5, 4, 4, 0, 0, 1, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 67 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 67 |
| 3 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 65 |
| 4-5 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 64 |
| 6-7 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 63 |
| 8-9 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 62 |
| 10-11 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 61 |
| 12 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 59 |
| 13-14 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 58 |
| 15 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 56 |
| 16-17 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 55 |
| 18-19 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 54 |
| 20-21 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 53 |
| 22 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 51 |
| 23 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 49 |
| 24-25 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 48 |
| 26-27 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến di chuyển đến (14, 18); hướng tới tọa độ (12, 20) (Spot #0 (thương hiệu=0, tọa độ=(12, 20))) | 47 |
| 28-29 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (12, 20) (Spot #0 (thương hiệu=0, tọa độ=(12, 20))) | 46 |
| 30-31 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (12, 20) (Spot #0 (thương hiệu=0, tọa độ=(12, 20))) | 45 |
| 32-34 | Di chuyển hướng 4 (`4`) | (13, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 20)) | 43 |
| 35-36 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 42 |
| 37-39 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 40 |
| 40-41 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 39 |
| 42 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 37 |
| 43-44 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 67 |
| 45-46 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 66 |
| 47 | Chờ 1 bước (`-1`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 66 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 8) (ô=179)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(11, 15))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(11, 15))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 3, 3, 1, 2, 1, 4, 5, 4, 4, 3, 4, 3, 3, 5, 5, 4, 4, 0, 0, 1, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 67 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 67 |
| 3 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 65 |
| 4-5 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 64 |
| 6-7 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 63 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 62 |
| 10-11 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 61 |
| 12-13 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 60 |
| 14 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 58 |
| 15-16 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 57 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 55 |
| 18-19 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 54 |
| 20-21 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 53 |
| 22-23 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 52 |
| 24 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 50 |
| 25 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 48 |
| 26-27 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 47 |
| 28-29 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến di chuyển đến (14, 18); hướng tới tọa độ (12, 20) (Spot #0 (thương hiệu=0, tọa độ=(12, 20))) | 46 |
| 30-31 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (12, 20) (Spot #0 (thương hiệu=0, tọa độ=(12, 20))) | 45 |
| 32-33 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (12, 20) (Spot #0 (thương hiệu=0, tọa độ=(12, 20))) | 44 |
| 34-36 | Di chuyển hướng 4 (`4`) | (13, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 20)) | 42 |
| 37-38 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 41 |
| 39-41 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 39 |
| 42-43 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 38 |
| 44 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 36 |
| 45-46 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 67 |
| 47 | Chờ 1 bước (`-1`) | (11, 15) | (11, 15) | Dự kiến đứng yên tại (11, 15); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 67 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (17, 4) (ô=101)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(11, 15))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(11, 15))
- Mảng hành động đã gửi server: `[1, 3, 3, 5, 4, 4, 4, 4, 3, 3, 4, 5, 4, 4, 3, 4, 3, 3, 5, 5, 0, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (17, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 3)) | 38 |
| 2-3 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 37 |
| 4-5 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 5)) | 36 |
| 6-7 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 35 |
| 8 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 33 |
| 9-10 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 32 |
| 11-13 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 30 |
| 14-15 | Di chuyển hướng 4 (`4`) | (16, 8) | (16, 9) | Dự kiến di chuyển đến (16, 9); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 29 |
| 16-18 | Di chuyển hướng 3 (`3`) | (16, 9) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 27 |
| 19-21 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 25 |
| 22-23 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 24 |
| 24 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 22 |
| 25-26 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 21 |
| 27-28 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 20 |
| 29-30 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 19 |
| 31 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 17 |
| 32 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 15 |
| 33-34 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 14 |
| 35-36 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến di chuyển đến (14, 18); hướng tới tọa độ (13, 18) (Spot #1 (thương hiệu=1, tọa độ=(13, 18))) | 13 |
| 37-38 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 18)) | 12 |
| 39-40 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 11 |
| 41-43 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 9 |
| 44 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 7 |
| 45-46 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 67 |
| 47 | Chờ 1 bước (`-1`) | (11, 15) | (11, 15) | Dự kiến đứng yên tại (11, 15); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 67 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (11, 8) (ô=179)
- Nhiên liệu đầu ngày: 67
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #4 (thương hiệu=4, tọa độ=(11, 15))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 4, 4, 4, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 67 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 67 |
| 3 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 67 |
| 4-6 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 67 |
| 7-8 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 67 |
| 9 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 67 |
| 10-12 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (11, 15) | 67 |
| 13-47 | Chờ 35 bước (`-35`) | (11, 15) | (11, 15) | Dự kiến đứng yên tại (11, 15); điểm hẹn của xe tuần tra #4 tại (11, 15) | 67 |

