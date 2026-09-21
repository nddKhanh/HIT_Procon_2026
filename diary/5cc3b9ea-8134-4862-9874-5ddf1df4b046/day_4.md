# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 46
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 3) (ô=62)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(2, 0))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(2, 0))
- Mảng hành động đã gửi server: `[1, 1, 1, 3, 3, 3, 4, 4, 4, 5, 5, 5, 4, 5, 1, 1, 0, 1, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 44 |
| 2-4 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 42 |
| 5-6 | Di chuyển hướng 1 (`1`) | (6, 1) | (6, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 0)) | 41 |
| 7-8 | Di chuyển hướng 3 (`3`) | (6, 0) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 40 |
| 9-10 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 39 |
| 11-12 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 38 |
| 13-14 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 37 |
| 15-16 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 36 |
| 17-19 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 34 |
| 20-21 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 33 |
| 22-24 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 31 |
| 25-26 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 30 |
| 27-28 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 29 |
| 29-30 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 7)) | 28 |
| 31-32 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 27 |
| 33-35 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 25 |
| 36-37 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 24 |
| 38-39 | Di chuyển hướng 1 (`1`) | (2, 4) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 23 |
| 40 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 21 |
| 41-42 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 20 |
| 43-44 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(2, 0)) | 19 |
| 45 | Chờ 1 bước (`-1`) | (2, 0) | (2, 0) | Dự kiến đứng yên tại (2, 0); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(2, 0)) | 45 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 12) (ô=243)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(12, 19))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(12, 19))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 4, 5, 4, 2, 0, 1, 0, 0, 2, 1, 2, 2, 2, 2, 2, 2, 5, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 41 |
| 2 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 39 |
| 3 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến di chuyển đến (14, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 37 |
| 4 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 35 |
| 5-6 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 34 |
| 7-8 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 33 |
| 9-10 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 32 |
| 11-12 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 17)) | 31 |
| 13-14 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 30 |
| 15-16 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 15)) | 29 |
| 17-18 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 28 |
| 19-21 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(11, 13)) | 26 |
| 22-23 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 25 |
| 24-26 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 23 |
| 27-28 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 22 |
| 29 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 20 |
| 30 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 18 |
| 31-32 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 12)) | 17 |
| 33-34 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 16 |
| 35-36 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 12)) | 15 |
| 37-38 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 14 |
| 39-40 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 13 |
| 41-42 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 12 |
| 43-44 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến di chuyển đến (15, 14); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 11 |
| 45 | Chờ 1 bước (`-1`) | (15, 14) | (15, 14) | Dự kiến đứng yên tại (15, 14); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 19)) | 11 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 3) (ô=61)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(2, 9))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(2, 9))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 3, 2, 1, 4, 5, 5, 5, 4, 5, 5, 5, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 26 |
| 2-3 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 25 |
| 4-5 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 24 |
| 6-8 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 22 |
| 9-10 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 21 |
| 11-12 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 20 |
| 13-16 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 18 |
| 17-18 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 4)) | 17 |
| 19-20 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 16 |
| 21-22 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 15 |
| 23-26 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 13 |
| 27-28 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 12 |
| 29-31 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 10 |
| 32-33 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 9 |
| 34-36 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 7 |
| 37-38 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 6 |
| 39-40 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 5 |
| 41-42 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 4 |
| 43-44 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 3 |
| 45 | Chờ 1 bước (`-1`) | (2, 9) | (2, 9) | Dự kiến đứng yên tại (2, 9); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 45 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 7) (ô=135)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Mảng hành động đã gửi server: `[4, 3, 2, 2, 2, 2, 2, 2, 3, 4, 5, 4, 5, 4, 4, 4, 5, 4, 4, 4, 4, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 39 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 38 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 37 |
| 6-7 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 36 |
| 8-9 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 35 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 34 |
| 12 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 32 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 31 |
| 15-16 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 30 |
| 17-20 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 28 |
| 21-23 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 26 |
| 24-25 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 25 |
| 26-27 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 24 |
| 28 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 22 |
| 29-30 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 21 |
| 31-32 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 20 |
| 33-34 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 19 |
| 35-36 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 18 |
| 37-38 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 17 |
| 39-40 | Di chuyển hướng 4 (`4`) | (2, 17) | (1, 18) | Dự kiến di chuyển đến (1, 18); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 16 |
| 41-42 | Di chuyển hướng 4 (`4`) | (1, 18) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 15 |
| 43 | Di chuyển hướng 5 (`5`) | (1, 19) | (0, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 19)) | 13 |
| 44-45 | Di chuyển hướng 2 (`2`) | (0, 19) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 12 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 13) (ô=258)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(12, 15))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(12, 15))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 5, 5, 0, 0, 1, 4, 3, 3, 2, 2, 2, 3, 3, -1, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 26 |
| 2-4 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 24 |
| 5-6 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 23 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 22 |
| 9-11 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 20 |
| 12-15 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 18 |
| 16-17 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 17 |
| 18-19 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 16 |
| 20-21 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 14)) | 15 |
| 22-23 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 14 |
| 24-25 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 13 |
| 26-27 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 12 |
| 28-29 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 11 |
| 30-33 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 9 |
| 34-36 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 7 |
| 37-38 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 6 |
| 39-40 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 19)) | 4 |
| 41 | Chờ 1 bước (`-1`) | (12, 19) | (12, 19) | Dự kiến đứng yên tại (12, 19); hướng tới tọa độ (12, 19) | 45 |
| 42-43 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 44 |
| 44-45 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 42 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (3, 5) (ô=98)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #0 (thương hiệu=0, tọa độ=(2, 9))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 4-5 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 6-7 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (2, 9) | 45 |
| 8-45 | Chờ 38 bước (`-38`) | (2, 9) | (2, 9) | Dự kiến đứng yên tại (2, 9); điểm hẹn của xe tuần tra #2 tại (2, 9) | 45 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (18, 12) (ô=246)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=8, tọa độ=(12, 19))
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 4, 4, 4, 4, 4, 4, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 2-3 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 4-5 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 6-7 | Di chuyển hướng 5 (`5`) | (16, 13) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 8 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 9 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến di chuyển đến (14, 15); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 10 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 11-12 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 13-14 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới điểm hẹn của xe tuần tra #4 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 15-17 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (12, 19) | 45 |
| 18-45 | Chờ 28 bước (`-28`) | (12, 19) | (12, 19) | Dự kiến đứng yên tại (12, 19); điểm hẹn của xe tuần tra #4 tại (12, 19) | 45 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (5, 3) (ô=62)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #16 (thương hiệu=16, tọa độ=(2, 0))
- Mảng hành động đã gửi server: `[0, 0, 5, 0, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 45 |
| 2-3 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 45 |
| 4 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 45 |
| 5-6 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (2, 0) | 45 |
| 7-45 | Chờ 39 bước (`-39`) | (2, 0) | (2, 0) | Dự kiến đứng yên tại (2, 0); điểm hẹn của xe tuần tra #0 tại (2, 0) | 45 |

