# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 49
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 5) (ô=100)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(2, 9))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(2, 9))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 4, 5, 5, 5, 4, 5, 5, 5, 0, 3, 4, 5, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 37 |
| 1-4 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 35 |
| 5-7 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 33 |
| 8-9 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 32 |
| 10-13 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (10, 4) (Spot #3 (thương hiệu=3, tọa độ=(10, 4))) | 30 |
| 14-15 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 4)) | 29 |
| 16-17 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 28 |
| 18-19 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 27 |
| 20-23 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 25 |
| 24-25 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 24 |
| 26-28 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 22 |
| 29-30 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 21 |
| 31-33 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 19 |
| 34-35 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 18 |
| 36-37 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 5)) | 17 |
| 38-39 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (3, 7) (Spot #17 (thương hiệu=17, tọa độ=(3, 7))) | 16 |
| 40-41 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 7)) | 15 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 7)) | 14 |
| 44-45 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 13 |
| 46-47 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 12 |
| 48 | Chờ 1 bước (`-1`) | (2, 9) | (2, 9) | Dự kiến đứng yên tại (2, 9); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 45 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 14) (ô=281)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(18, 12))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(18, 12))
- Mảng hành động đã gửi server: `[4, 5, 5, 4, 4, 5, 1, 1, 0, 0, 2, 2, 2, 2, 2, 1, 2, 2, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 29 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 15) | (14, 15) | Dự kiến di chuyển đến (14, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 28 |
| 4 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 26 |
| 5-6 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 25 |
| 7-8 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (11, 17) (Spot #2 (thương hiệu=2, tọa độ=(11, 17))) | 24 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 17)) | 23 |
| 11-12 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 22 |
| 13-14 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 15)) | 21 |
| 15-16 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 20 |
| 17-19 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(11, 13)) | 18 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 17 |
| 22-24 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến di chuyển đến (13, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 15 |
| 25-26 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 14 |
| 27-28 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 13 |
| 29-30 | Di chuyển hướng 2 (`2`) | (15, 13) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (16, 12) (Spot #9 (thương hiệu=9, tọa độ=(16, 12))) | 11 |
| 31-32 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 12)) | 10 |
| 33-34 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (18, 12) (Spot #15 (thương hiệu=15, tọa độ=(18, 12))) | 9 |
| 35-36 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 12)) | 8 |
| 37-48 | Chờ 12 bước (`-12`) | (18, 12) | (18, 12) | Dự kiến đứng yên tại (18, 12); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 12)) | 8 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 7) (ô=135)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(7, 16))
- Mảng hành động đã gửi server: `[4, 3, 1, 1, 1, 2, 2, 2, 5, 0, 0, 1, 1, 1, 1, -1, 5, 5, 5, 5, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 22 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 9)) | 21 |
| 4-5 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 20 |
| 6-7 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 19 |
| 8-9 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 18 |
| 10-11 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 17 |
| 12-13 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 16 |
| 14-16 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 14 |
| 17-18 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 13 |
| 19-21 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 11 |
| 22 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 9 |
| 23-24 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 8 |
| 25-26 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 7 |
| 27-29 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 5 |
| 30-31 | Di chuyển hướng 1 (`1`) | (6, 1) | (6, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 0)) | 4 |
| 32 | Chờ 1 bước (`-1`) | (6, 0) | (6, 0) | Dự kiến đứng yên tại (6, 0); hướng tới tọa độ (6, 0) | 45 |
| 33-34 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến di chuyển đến (5, 0); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 44 |
| 35-37 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến di chuyển đến (4, 0); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 42 |
| 38-39 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến di chuyển đến (3, 0); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 41 |
| 40-41 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(2, 0)) | 40 |
| 42-43 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 39 |
| 44-45 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 38 |
| 46-47 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 37 |
| 48 | Chờ 1 bước (`-1`) | (4, 3) | (4, 3) | Dự kiến đứng yên tại (4, 3); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 16)) | 37 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 18) (ô=354)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(11, 13))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(11, 13))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 0, 0, 0, 4, 3, 2, 3, 2, 2, 1, 1, 4, 3, 3, 4, -1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 30 |
| 3-4 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 29 |
| 5-6 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 28 |
| 7-9 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 26 |
| 10-13 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 24 |
| 14 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (7, 14) (Spot #4 (thương hiệu=4, tọa độ=(7, 14))) | 22 |
| 15-17 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 14)) | 20 |
| 18-19 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (7, 16) (Spot #10 (thương hiệu=10, tọa độ=(7, 16))) | 19 |
| 20-21 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 16)) | 18 |
| 22-23 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 17 |
| 24 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 15 |
| 25-28 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 13 |
| 29-31 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 11 |
| 32-33 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (12, 15) (Spot #19 (thương hiệu=19, tọa độ=(12, 15))) | 10 |
| 34-35 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 15)) | 9 |
| 36-37 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 8 |
| 38-39 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 7 |
| 40-41 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 6 |
| 42-44 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 19)) | 4 |
| 45 | Chờ 1 bước (`-1`) | (12, 19) | (12, 19) | Dự kiến đứng yên tại (12, 19); hướng tới tọa độ (12, 19) | 45 |
| 46-47 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (11, 13) (Spot #18 (thương hiệu=18, tọa độ=(11, 13))) | 44 |
| 48 | Chờ 1 bước (`-1`) | (12, 18) | (12, 18) | Dự kiến đứng yên tại (12, 18); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(11, 13)) | 44 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 5) (ô=98)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 7))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 7))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 1, 4, 4, 4, 4, 4, 4, 2, 2, 2, 5, 0, 0, 0, 0, 0, 0, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 44 |
| 2 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 42 |
| 3-4 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 41 |
| 5-6 | Di chuyển hướng 1 (`1`) | (4, 2) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 40 |
| 7-9 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 38 |
| 10-11 | Di chuyển hướng 1 (`1`) | (6, 1) | (6, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 0)) | 37 |
| 12-13 | Di chuyển hướng 4 (`4`) | (6, 0) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 36 |
| 14-15 | Di chuyển hướng 4 (`4`) | (6, 1) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (5, 3) (Spot #6 (thương hiệu=6, tọa độ=(5, 3))) | 35 |
| 16-18 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 3)) | 33 |
| 19-20 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 32 |
| 21-22 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (3, 6) (Spot #7 (thương hiệu=7, tọa độ=(3, 6))) | 31 |
| 23-25 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 6)) | 29 |
| 26-27 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 28 |
| 28-29 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (6, 6) (Spot #11 (thương hiệu=11, tọa độ=(6, 6))) | 27 |
| 30-32 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 6)) | 25 |
| 33-34 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 24 |
| 35-37 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 22 |
| 38 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 20 |
| 39-40 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 19 |
| 41-42 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 18 |
| 43-44 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (2, 0) (Spot #16 (thương hiệu=16, tọa độ=(2, 0))) | 17 |
| 45-46 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(2, 0)) | 16 |
| 47-48 | Di chuyển hướng 4 (`4`) | (2, 0) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (2, 7) (Spot #14 (thương hiệu=14, tọa độ=(2, 7))) | 15 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 14) (ô=273)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #1 (thương hiệu=1, tọa độ=(6, 0))
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 2-3 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 4-5 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 6-8 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 9-12 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 13-14 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 15 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 16-17 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 18-20 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 21-22 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 23-24 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 25-26 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 27-28 | Di chuyển hướng 0 (`0`) | (7, 2) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới điểm hẹn của xe tuần tra #2 tại (6, 0) (Spot #1 (thương hiệu=1, tọa độ=(6, 0))) | 45 |
| 29-30 | Di chuyển hướng 0 (`0`) | (7, 1) | (6, 0) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (6, 0) | 45 |
| 31-48 | Chờ 18 bước (`-18`) | (6, 0) | (6, 0) | Dự kiến đứng yên tại (6, 0); điểm hẹn của xe tuần tra #2 tại (6, 0) | 45 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (11, 13) (ô=258)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=8, tọa độ=(12, 19))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 4, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 2-4 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 5-6 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 7-8 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 9-10 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 19) (Spot #8 (thương hiệu=8, tọa độ=(12, 19))) | 45 |
| 11-13 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (12, 19) | 45 |
| 14-48 | Chờ 35 bước (`-35`) | (12, 19) | (12, 19) | Dự kiến đứng yên tại (12, 19); điểm hẹn của xe tuần tra #3 tại (12, 19) | 45 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (3, 5) (ô=98)
- Nhiên liệu đầu ngày: 45
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #0 (thương hiệu=0, tọa độ=(2, 9))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 4-5 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 9) (Spot #0 (thương hiệu=0, tọa độ=(2, 9))) | 45 |
| 6-7 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (2, 9) | 45 |
| 8-48 | Chờ 41 bước (`-41`) | (2, 9) | (2, 9) | Dự kiến đứng yên tại (2, 9); điểm hẹn của xe tuần tra #0 tại (2, 9) | 45 |

