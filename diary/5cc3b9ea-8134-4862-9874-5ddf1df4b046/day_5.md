# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 47
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 0) (ô=2)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 14))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 14))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 4, 5, 1, 1, 1, 1, 2, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến di chuyển đến (3, 0); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 44 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến di chuyển đến (4, 0); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 43 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến di chuyển đến (5, 0); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 42 |
| 6-8 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 0)) | 40 |
| 9-10 | Di chuyển hướng 3 (`3`) | (6, 0) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 39 |
| 11-12 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 38 |
| 13-14 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 37 |
| 15-16 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 36 |
| 17-18 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 35 |
| 19-21 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 33 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 32 |
| 24-26 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 30 |
| 27-28 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 29 |
| 29-30 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 28 |
| 31-32 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 7)) | 27 |
| 33-34 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 26 |
| 35-37 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 24 |
| 38-39 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 44 |
| 40 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 42 |
| 41-42 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 41 |
| 43-44 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 40 |
| 45-46 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 39 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 14) (ô=281)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 4, 5, 1, 1, 0, 0, -1, 2, 1, 2, 2, 2, 2, 2, 2, 5, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 10 |
| 2-3 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 9 |
| 4-5 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 8 |
| 6-7 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 7 |
| 8-9 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 6 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 5 |
| 12-13 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 4 |
| 14-15 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 15)) | 3 |
| 16-17 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 2 |
| 18-20 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(11, 13)) | 0 |
| 21 | Chờ 1 bước (`-1`) | (11, 13) | (11, 13) | Dự kiến đứng yên tại (11, 13); hướng tới tọa độ (11, 13) | 45 |
| 22-23 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 44 |
| 24-26 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 42 |
| 27-28 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 41 |
| 29 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 39 |
| 30-31 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 37 |
| 32-33 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 12)) | 36 |
| 34-35 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 35 |
| 36-37 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 12)) | 34 |
| 38-39 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 33 |
| 40-41 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 32 |
| 42-43 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 31 |
| 44-45 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến di chuyển đến (15, 14); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 30 |
| 46 | Chờ 1 bước (`-1`) | (15, 14) | (15, 14) | Dự kiến đứng yên tại (15, 14); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 16)) | 30 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 9) (ô=173)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 7))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 7))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 4, 5, 5, 5, 4, 5, 5, 5, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 44 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 43 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 42 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 41 |
| 8 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 39 |
| 9-10 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 38 |
| 11 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 36 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 35 |
| 14-16 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 33 |
| 17-20 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 31 |
| 21-22 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 4)) | 30 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 29 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 28 |
| 27-30 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 26 |
| 31-32 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 25 |
| 33-35 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 23 |
| 36-37 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 22 |
| 38-40 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 20 |
| 41-42 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 19 |
| 43-44 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 18 |
| 45-46 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 7)) | 17 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 19) (ô=362)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(12, 15))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(12, 15))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 2, 1, 1, 2, -9, 4, 3, 3, 2, 2, 2, 4, 3, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 19) | (1, 18) | Dự kiến di chuyển đến (1, 18); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 10 |
| 2-3 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 9 |
| 4-5 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 8 |
| 6-7 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 7 |
| 8-9 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 6 |
| 10-11 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 5 |
| 12-13 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 4 |
| 14 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 2 |
| 15 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 14)) | 0 |
| 16-24 | Chờ 9 bước (`-9`) | (7, 14) | (7, 14) | Dự kiến đứng yên tại (7, 14); hướng tới tọa độ (7, 14) | 45 |
| 25-26 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 44 |
| 27-28 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 16)) | 43 |
| 29-30 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 42 |
| 31-32 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 41 |
| 33-36 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 39 |
| 37-39 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 37 |
| 40-41 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 36 |
| 42 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 34 |
| 43-44 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 19)) | 33 |
| 45-46 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 32 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 17) (ô=334)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(3, 5))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(3, 5))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 0, 1, 0, 1, 1, 0, 5, 5, 5, 5, 5, 5, 1, 1, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 41 |
| 2-4 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 39 |
| 5-8 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 37 |
| 9-10 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 35 |
| 11-13 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 33 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 32 |
| 16-17 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 31 |
| 18-19 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 30 |
| 20-22 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 28 |
| 23-26 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 26 |
| 27-28 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 25 |
| 29-30 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 24 |
| 31 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 22 |
| 32-33 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 21 |
| 34-35 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 20 |
| 36-37 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 19 |
| 38-39 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 18 |
| 40-41 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 17 |
| 42-43 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 16 |
| 44-45 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 15 |
| 46 | Chờ 1 bước (`-1`) | (3, 5) | (3, 5) | Dự kiến đứng yên tại (3, 5); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 45 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (2, 9) (ô=173)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #4 (thương hiệu=4, tọa độ=(7, 14))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 3, 4, 4, 4, 3, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 45 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 45 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 45 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 45 |
| 8 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 45 |
| 9-10 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 45 |
| 11-12 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 45 |
| 13-16 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 45 |
| 17-19 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 45 |
| 20-21 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 45 |
| 22-23 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (7, 14) | 45 |
| 24-46 | Chờ 23 bước (`-23`) | (7, 14) | (7, 14) | Dự kiến đứng yên tại (7, 14); điểm hẹn của xe tuần tra #3 tại (7, 14) | 45 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 19) (ô=373)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #18 (thương hiệu=18, tọa độ=(11, 13))
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 1, 0, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 45 |
| 2-4 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 45 |
| 5-6 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 45 |
| 7-8 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 45 |
| 9-10 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 45 |
| 11-13 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (11, 13) | 45 |
| 14-46 | Chờ 33 bước (`-33`) | (11, 13) | (11, 13) | Dự kiến đứng yên tại (11, 13); điểm hẹn của xe tuần tra #1 tại (11, 13) | 45 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (2, 0) (ô=2)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #12 (thương hiệu=12, tọa độ=(3, 5))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 4, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới điểm hẹn của xe tuần tra #4 tại (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 45 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới điểm hẹn của xe tuần tra #4 tại (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 45 |
| 4-5 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới điểm hẹn của xe tuần tra #4 tại (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 45 |
| 6 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới điểm hẹn của xe tuần tra #4 tại (3, 5) (Spot #12 (thương hiệu=12, tọa độ=(3, 5))) | 45 |
| 7 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (3, 5) | 45 |
| 8-46 | Chờ 39 bước (`-39`) | (3, 5) | (3, 5) | Dự kiến đứng yên tại (3, 5); điểm hẹn của xe tuần tra #4 tại (3, 5) | 45 |

