# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 40
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 16) (ô=308)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(14, 19))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(14, 19))
- Mảng hành động đã gửi server: `[1, 0, 0, 3, 3, 4, 4, 4, 4, 3, 0, 5, 5, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 16) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (4, 13) (Spot #3 (thương hiệu=3, tọa độ=(4, 13))) | 45 |
| 2 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (4, 13) (Spot #3 (thương hiệu=3, tọa độ=(4, 13))) | 43 |
| 3 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 41 |
| 4-5 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (3, 18) (Spot #13 (thương hiệu=13, tọa độ=(3, 18))) | 40 |
| 6 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (3, 18) (Spot #13 (thương hiệu=13, tọa độ=(3, 18))) | 38 |
| 7 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (3, 18) (Spot #13 (thương hiệu=13, tọa độ=(3, 18))) | 36 |
| 8-9 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới tọa độ (3, 18) (Spot #13 (thương hiệu=13, tọa độ=(3, 18))) | 35 |
| 10 | Di chuyển hướng 4 (`4`) | (4, 17) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 33 |
| 11-12 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (3, 20) (Spot #2 (thương hiệu=2, tọa độ=(3, 20))) | 32 |
| 13-14 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 31 |
| 15-16 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (1, 19) (Spot #17 (thương hiệu=17, tọa độ=(1, 19))) | 30 |
| 17-18 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (1, 19) (Spot #17 (thương hiệu=17, tọa độ=(1, 19))) | 29 |
| 19-20 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 28 |
| 21-22 | Di chuyển hướng 2 (`2`) | (1, 19) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 27 |
| 23-24 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến di chuyển đến (2, 18); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 26 |
| 25 | Di chuyển hướng 1 (`1`) | (2, 18) | (3, 17) | Dự kiến di chuyển đến (3, 17); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 24 |
| 26-27 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 23 |
| 28 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 21 |
| 29-30 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 20 |
| 31 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 18 |
| 32-33 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 17 |
| 34-35 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 16 |
| 36 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 14 |
| 37 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 12 |
| 38-39 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 11 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 19) (ô=376)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(17, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(17, 6))
- Mảng hành động đã gửi server: `[1, 5, 4, 5, 5, 4, 0, 1, 0, 0, 1, 1, 0, 0, 1, 2, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 45 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến di chuyển đến (14, 18); hướng tới tọa độ (14, 19) (Spot #14 (thương hiệu=14, tọa độ=(14, 19))) | 44 |
| 4-5 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(14, 19)) | 43 |
| 6-7 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (11, 20) (Spot #0 (thương hiệu=0, tọa độ=(11, 20))) | 42 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (11, 20) (Spot #0 (thương hiệu=0, tọa độ=(11, 20))) | 41 |
| 10-11 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 20)) | 40 |
| 12-13 | Di chuyển hướng 0 (`0`) | (11, 20) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 39 |
| 14-15 | Di chuyển hướng 1 (`1`) | (11, 19) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 38 |
| 16-17 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 37 |
| 18-19 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 36 |
| 20-21 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 35 |
| 22-23 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 34 |
| 24-25 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 33 |
| 26-28 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(10, 12)) | 31 |
| 29-30 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (17, 6) (Spot #6 (thương hiệu=6, tọa độ=(17, 6))) | 30 |
| 31-32 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới tọa độ (17, 6) (Spot #6 (thương hiệu=6, tọa độ=(17, 6))) | 29 |
| 33-34 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (17, 6) (Spot #6 (thương hiệu=6, tọa độ=(17, 6))) | 28 |
| 35-36 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (17, 6) (Spot #6 (thương hiệu=6, tọa độ=(17, 6))) | 27 |
| 37 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (17, 6) (Spot #6 (thương hiệu=6, tọa độ=(17, 6))) | 25 |
| 38 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến di chuyển đến (16, 11); hướng tới tọa độ (17, 6) (Spot #6 (thương hiệu=6, tọa độ=(17, 6))) | 46 |
| 39 | Chờ 1 bước (`-1`) | (16, 11) | (16, 11) | Dự kiến đứng yên tại (16, 11); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 46 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 11) (ô=221)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 3))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 1, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 1, 2, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 45 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 44 |
| 4 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 42 |
| 5 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến di chuyển đến (16, 11); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 40 |
| 6-7 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 39 |
| 8 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 37 |
| 9 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 35 |
| 10-11 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 34 |
| 12-13 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 33 |
| 14-15 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 32 |
| 16-17 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 31 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 45 |
| 20-21 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 44 |
| 22-23 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 43 |
| 24-25 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 42 |
| 26 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 40 |
| 27-28 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (6, 6) (Spot #18 (thương hiệu=18, tọa độ=(6, 6))) | 39 |
| 29-30 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(6, 6)) | 38 |
| 31-32 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (6, 4) (Spot #5 (thương hiệu=5, tọa độ=(6, 4))) | 37 |
| 33-34 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 36 |
| 35-36 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 35 |
| 37-38 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (5, 3) (Spot #11 (thương hiệu=11, tọa độ=(5, 3))) | 34 |
| 39 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (5, 3) (Spot #11 (thương hiệu=11, tọa độ=(5, 3))) | 32 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 2) (ô=45)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(7, 0))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(7, 0))
- Mảng hành động đã gửi server: `[4, 4, 0, 5, 4, 4, 4, 4, 4, 5, 1, 1, 1, 1, 0, 0, 2, 2, 2, 1, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (6, 4) (Spot #5 (thương hiệu=5, tọa độ=(6, 4))) | 45 |
| 2 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 43 |
| 3-4 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (5, 3) (Spot #11 (thương hiệu=11, tọa độ=(5, 3))) | 42 |
| 5 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 40 |
| 6-7 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (3, 6) (Spot #15 (thương hiệu=15, tọa độ=(3, 6))) | 39 |
| 8-9 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (3, 6) (Spot #15 (thương hiệu=15, tọa độ=(3, 6))) | 38 |
| 10-11 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 37 |
| 12-13 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (1, 8) (Spot #16 (thương hiệu=16, tọa độ=(1, 8))) | 36 |
| 14-15 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (1, 8) (Spot #16 (thương hiệu=16, tọa độ=(1, 8))) | 35 |
| 16-17 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 8)) | 34 |
| 18-19 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (2, 2) (Spot #10 (thương hiệu=10, tọa độ=(2, 2))) | 33 |
| 20-21 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (2, 2) (Spot #10 (thương hiệu=10, tọa độ=(2, 2))) | 32 |
| 22-23 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (2, 2) (Spot #10 (thương hiệu=10, tọa độ=(2, 2))) | 31 |
| 24-25 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (2, 2) (Spot #10 (thương hiệu=10, tọa độ=(2, 2))) | 30 |
| 26 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (2, 2) (Spot #10 (thương hiệu=10, tọa độ=(2, 2))) | 28 |
| 27-28 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 27 |
| 29-30 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 26 |
| 31 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 24 |
| 32-33 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 23 |
| 34-35 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 22 |
| 36 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 20 |
| 37-38 | Di chuyển hướng 1 (`1`) | (7, 1) | (7, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 0)) | 46 |
| 39 | Chờ 1 bước (`-1`) | (7, 0) | (7, 0) | Dự kiến đứng yên tại (7, 0); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 0)) | 46 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 17) (ô=326)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(17, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(17, 6))
- Mảng hành động đã gửi server: `[3, 4, 3, 0, 5, 5, 1, 1, 1, 1, 1, 1, 3, 2, 2, 2, 2, 3, 2, 1, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến di chuyển đến (3, 18); hướng tới tọa độ (3, 20) (Spot #2 (thương hiệu=2, tọa độ=(3, 20))) | 45 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (3, 20) (Spot #2 (thương hiệu=2, tọa độ=(3, 20))) | 44 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 43 |
| 6-7 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (1, 19) (Spot #17 (thương hiệu=17, tọa độ=(1, 19))) | 42 |
| 8-9 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (1, 19) (Spot #17 (thương hiệu=17, tọa độ=(1, 19))) | 41 |
| 10-11 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 40 |
| 12-13 | Di chuyển hướng 1 (`1`) | (1, 19) | (1, 18) | Dự kiến di chuyển đến (1, 18); hướng tới tọa độ (4, 13) (Spot #3 (thương hiệu=3, tọa độ=(4, 13))) | 39 |
| 14-15 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới tọa độ (4, 13) (Spot #3 (thương hiệu=3, tọa độ=(4, 13))) | 38 |
| 16-17 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (4, 13) (Spot #3 (thương hiệu=3, tọa độ=(4, 13))) | 37 |
| 18 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (4, 13) (Spot #3 (thương hiệu=3, tọa độ=(4, 13))) | 35 |
| 19 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (4, 13) (Spot #3 (thương hiệu=3, tọa độ=(4, 13))) | 33 |
| 20 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 31 |
| 21-22 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 30 |
| 23 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 28 |
| 24 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 26 |
| 25 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 24 |
| 26-27 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 23 |
| 28-29 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 22 |
| 30 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 20 |
| 31-32 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 19 |
| 33-35 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến di chuyển đến (10, 13); hướng tới tọa độ (10, 12) (Spot #12 (thương hiệu=12, tọa độ=(10, 12))) | 17 |
| 36-37 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(10, 12)) | 16 |
| 38-39 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (17, 6) (Spot #6 (thương hiệu=6, tọa độ=(17, 6))) | 15 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (12, 2) (ô=50)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(7, 4))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(7, 4))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 2, 4, 3, 0, 1, 1, 0, 0, 1, 4, 4, 5, 5, 5, 5, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (17, 4) (Spot #1 (thương hiệu=1, tọa độ=(17, 4))) | 45 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 2) | (14, 2) | Dự kiến di chuyển đến (14, 2); hướng tới tọa độ (17, 4) (Spot #1 (thương hiệu=1, tọa độ=(17, 4))) | 44 |
| 4 | Di chuyển hướng 2 (`2`) | (14, 2) | (15, 2) | Dự kiến di chuyển đến (15, 2); hướng tới tọa độ (17, 4) (Spot #1 (thương hiệu=1, tọa độ=(17, 4))) | 42 |
| 5-6 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (17, 4) (Spot #1 (thương hiệu=1, tọa độ=(17, 4))) | 41 |
| 7-8 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (17, 4) (Spot #1 (thương hiệu=1, tọa độ=(17, 4))) | 40 |
| 9-10 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 39 |
| 11-12 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (17, 6) (Spot #6 (thương hiệu=6, tọa độ=(17, 6))) | 38 |
| 13-14 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 37 |
| 15-16 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (17, 0) (Spot #19 (thương hiệu=19, tọa độ=(17, 0))) | 36 |
| 17-18 | Di chuyển hướng 1 (`1`) | (17, 5) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (17, 0) (Spot #19 (thương hiệu=19, tọa độ=(17, 0))) | 35 |
| 19-20 | Di chuyển hướng 1 (`1`) | (17, 4) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới tọa độ (17, 0) (Spot #19 (thương hiệu=19, tọa độ=(17, 0))) | 34 |
| 21-22 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (17, 0) (Spot #19 (thương hiệu=19, tọa độ=(17, 0))) | 33 |
| 23-24 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến di chuyển đến (17, 1); hướng tới tọa độ (17, 0) (Spot #19 (thương hiệu=19, tọa độ=(17, 0))) | 32 |
| 25 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 0)) | 30 |
| 26-27 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến di chuyển đến (17, 1); hướng tới tọa độ (7, 4) (Spot #7 (thương hiệu=7, tọa độ=(7, 4))) | 29 |
| 28 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến di chuyển đến (16, 2); hướng tới tọa độ (7, 4) (Spot #7 (thương hiệu=7, tọa độ=(7, 4))) | 27 |
| 29-30 | Di chuyển hướng 5 (`5`) | (16, 2) | (15, 2) | Dự kiến di chuyển đến (15, 2); hướng tới tọa độ (7, 4) (Spot #7 (thương hiệu=7, tọa độ=(7, 4))) | 26 |
| 31-32 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến di chuyển đến (14, 2); hướng tới tọa độ (7, 4) (Spot #7 (thương hiệu=7, tọa độ=(7, 4))) | 25 |
| 33 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (7, 4) (Spot #7 (thương hiệu=7, tọa độ=(7, 4))) | 23 |
| 34-35 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (7, 4) (Spot #7 (thương hiệu=7, tọa độ=(7, 4))) | 22 |
| 36-37 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (7, 4) (Spot #7 (thương hiệu=7, tọa độ=(7, 4))) | 21 |
| 38 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (7, 4) (Spot #7 (thương hiệu=7, tọa độ=(7, 4))) | 19 |
| 39 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (7, 4) (Spot #7 (thương hiệu=7, tọa độ=(7, 4))) | 17 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (2, 7) (ô=135)
- Nhiên liệu đầu ngày: 46
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #20 (thương hiệu=20, tọa độ=(7, 0))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 1, 1, 1, 2, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 46 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 46 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 46 |
| 6 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 46 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 46 |
| 9-10 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 46 |
| 11-12 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 46 |
| 13 | Di chuyển hướng 1 (`1`) | (6, 1) | (6, 0) | Dự kiến di chuyển đến (6, 0); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 0) (Spot #20 (thương hiệu=20, tọa độ=(7, 0))) | 46 |
| 14-15 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (7, 0) | 46 |
| 16-39 | Chờ 24 bước (`-24`) | (7, 0) | (7, 0) | Dự kiến đứng yên tại (7, 0); điểm hẹn của xe tuần tra #3 tại (7, 0) | 46 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (5, 0) (ô=5)
- Nhiên liệu đầu ngày: 46
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Điểm đích tọa độ=(16, 11)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 2 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 3-4 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 5 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 6-7 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 8-9 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 12 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 13-14 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 15-16 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 17-18 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 19-20 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 21-22 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 23-24 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 25-26 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 27-28 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 29 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 30 | Di chuyển hướng 4 (`4`) | (16, 10) | (16, 11) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |
| 31-39 | Chờ 9 bước (`-9`) | (16, 11) | (16, 11) | Dự kiến đứng yên tại (16, 11); điểm hẹn của xe tuần tra #1 tại (16, 11) | 46 |

