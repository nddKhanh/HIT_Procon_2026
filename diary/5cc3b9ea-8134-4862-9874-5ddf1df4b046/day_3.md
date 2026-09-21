# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 44
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 5) (ô=98)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(5, 3))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(5, 3))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 1, 4, 4, 4, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 14 |
| 2-3 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 12 |
| 4-5 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 11 |
| 6-7 | Di chuyển hướng 1 (`1`) | (4, 2) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 10 |
| 8-10 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 8 |
| 11-12 | Di chuyển hướng 1 (`1`) | (6, 1) | (6, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 0)) | 7 |
| 13-14 | Di chuyển hướng 4 (`4`) | (6, 0) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 6 |
| 15-16 | Di chuyển hướng 4 (`4`) | (6, 1) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 5 |
| 17-19 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 3 |
| 20-43 | Chờ 24 bước (`-24`) | (5, 3) | (5, 3) | Dự kiến đứng yên tại (5, 3); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 45 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 15) (ô=300)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 4, 2, 3, 4, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, -1, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 15) | (14, 15) | Dự kiến di chuyển đến (14, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 25 |
| 2 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 23 |
| 3-4 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 22 |
| 5-6 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 21 |
| 7-8 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 20 |
| 9-10 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 17)) | 19 |
| 11-12 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 18 |
| 13-15 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 19)) | 16 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 15 |
| 18-19 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 14 |
| 20-21 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến di chuyển đến (14, 17); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 13 |
| 22-23 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 12 |
| 24-25 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 11 |
| 26-27 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến di chuyển đến (15, 14); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 10 |
| 28-29 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 9 |
| 30-31 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 12)) | 8 |
| 32-33 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 7 |
| 34-35 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 12)) | 6 |
| 36 | Chờ 1 bước (`-1`) | (18, 12) | (18, 12) | Dự kiến đứng yên tại (18, 12); hướng tới tọa độ (18, 12) | 45 |
| 37-38 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 44 |
| 39-40 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 43 |
| 41-42 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 42 |
| 43 | Chờ 1 bước (`-1`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 16)) | 42 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 7) (ô=135)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(0, 19))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(0, 19))
- Mảng hành động đã gửi server: `[4, 3, 1, 1, 1, 0, -1, 3, 2, 2, 2, 0, 0, 0, 0, 0, 5, 0, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 5 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 4 |
| 4-5 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 3 |
| 6-7 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 2 |
| 8-9 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 1 |
| 10-11 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 0 |
| 12 | Chờ 1 bước (`-1`) | (3, 5) | (3, 5) | Dự kiến đứng yên tại (3, 5); hướng tới tọa độ (3, 5) | 45 |
| 13-14 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 44 |
| 15-16 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 43 |
| 17-18 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 42 |
| 19-21 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 40 |
| 22-23 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 39 |
| 24-27 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 37 |
| 28-30 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 35 |
| 31-32 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 34 |
| 33-34 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 33 |
| 35 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 31 |
| 36-37 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(2, 0)) | 30 |
| 38-39 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 29 |
| 40-41 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 28 |
| 42-43 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (0, 19) (Spot #5 (thương hiệu=5, tọa độ=(0, 19))) | 27 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (4, 5) (ô=99)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 7))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 7))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 1, 4, 5, 5, 5, 4, 5, 5, 5, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 43 |
| 3-4 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 41 |
| 5-8 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 39 |
| 9-11 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 37 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 36 |
| 14-17 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 34 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 4)) | 33 |
| 20-21 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 32 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 31 |
| 24-27 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 29 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 28 |
| 30-32 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 26 |
| 33-34 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 25 |
| 35-37 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 23 |
| 38-39 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 22 |
| 40-41 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 21 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 7)) | 20 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 18) (ô=354)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(11, 13))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(11, 13))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 0, 0, 1, 4, 3, 3, 2, 2, 1, 1, 2, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 42 |
| 3-4 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 41 |
| 5-6 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 40 |
| 7-9 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 38 |
| 10-13 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 36 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 35 |
| 16-17 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 34 |
| 18-19 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 14)) | 33 |
| 20-21 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 32 |
| 22-23 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 31 |
| 24-25 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 30 |
| 26-27 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 29 |
| 28-31 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 27 |
| 32-34 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 25 |
| 35-36 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 24 |
| 37-38 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 15)) | 23 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 22 |
| 41-43 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(11, 13)) | 20 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 5) (ô=99)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #12 (thương hiệu=12, tọa độ=(3, 5))
- Mảng hành động đã gửi server: `[5, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (3, 5) | 45 |
| 3-43 | Chờ 41 bước (`-41`) | (3, 5) | (3, 5) | Dự kiến đứng yên tại (3, 5); điểm hẹn của xe tuần tra #2 tại (3, 5) | 45 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 19) (ô=373)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #15 (thương hiệu=15, tọa độ=(18, 12))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 1, 1, 1, 2, 2, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 45 |
| 2-3 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 45 |
| 4-5 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến di chuyển đến (14, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 45 |
| 6-7 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 45 |
| 8-9 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 45 |
| 10-11 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến di chuyển đến (15, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 45 |
| 12-13 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 45 |
| 14-15 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 45 |
| 16-17 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới điểm hẹn của xe tuần tra #1 tại (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 45 |
| 18-19 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (18, 12) | 45 |
| 20-43 | Chờ 24 bước (`-24`) | (18, 12) | (18, 12) | Dự kiến đứng yên tại (18, 12); điểm hẹn của xe tuần tra #1 tại (18, 12) | 45 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (11, 15) (ô=296)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #6 (thương hiệu=6, tọa độ=(5, 3))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 0, 0, 0, 1, 1, 1, 1, 0, 0, 5, 0, 0, 0, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 4-6 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 7-10 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 11-12 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 13-14 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 15-16 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 17 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 18-19 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 20-21 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 22-24 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 25-28 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 29-30 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 31 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 32-33 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 34-35 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 36-38 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 39-40 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 45 |
| 41-42 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (5, 3) | 45 |
| 43 | Chờ 1 bước (`-1`) | (5, 3) | (5, 3) | Dự kiến đứng yên tại (5, 3); điểm hẹn của xe tuần tra #0 tại (5, 3) | 45 |

