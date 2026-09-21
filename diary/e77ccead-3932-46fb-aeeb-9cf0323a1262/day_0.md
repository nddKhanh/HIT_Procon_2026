# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 45
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 16) (ô=367)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 4, 5, 4, 4, 4, 5, 0, 5, 5, 5, 5, 5, 0, 0, 0, 1, 0, 2, 1, 2, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 51 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 50 |
| 4-5 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 49 |
| 6 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 47 |
| 7-8 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 46 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 45 |
| 11 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 43 |
| 12 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 41 |
| 13-14 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 40 |
| 15-16 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 39 |
| 17 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 37 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 36 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 35 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 34 |
| 24-25 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 21)) | 33 |
| 26-27 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 21)) | 32 |
| 28-29 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến di chuyển đến (2, 20); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 31 |
| 30-31 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 30 |
| 32-33 | Di chuyển hướng 0 (`0`) | (2, 19) | (1, 18) | Dự kiến di chuyển đến (1, 18); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 29 |
| 34-35 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 28 |
| 36-37 | Di chuyển hướng 0 (`0`) | (2, 17) | (1, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 16)) | 27 |
| 38-39 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 26 |
| 40 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 24 |
| 41 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 22 |
| 42 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 20 |
| 43-44 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 19 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (4, 8) (ô=180)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(12, 19))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(12, 19))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 3, 4, 3, 3, 3, 3, 3, 2, 3, 3, 3, 2, 1, 1, 3, 4, 3, 1, 1, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 51 |
| 2-3 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 50 |
| 4-5 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 49 |
| 6-7 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 48 |
| 8 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 46 |
| 9-10 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 45 |
| 11-12 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 44 |
| 13-14 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 43 |
| 15 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 41 |
| 16-17 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 40 |
| 18 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 38 |
| 19-20 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 37 |
| 21-22 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 36 |
| 23-24 | Di chuyển hướng 3 (`3`) | (6, 19) | (6, 20) | Dự kiến di chuyển đến (6, 20); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 35 |
| 25-26 | Di chuyển hướng 3 (`3`) | (6, 20) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 34 |
| 27-28 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 33 |
| 29-30 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (9, 19) (Spot #10 (thương hiệu=10, tọa độ=(9, 19))) | 32 |
| 31-32 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 19)) | 31 |
| 33-34 | Di chuyển hướng 3 (`3`) | (9, 19) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 30 |
| 35 | Di chuyển hướng 4 (`4`) | (9, 20) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 28 |
| 36-37 | Di chuyển hướng 3 (`3`) | (9, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 27 |
| 38-39 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 26 |
| 40-41 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 25 |
| 42 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 23 |
| 43 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 19)) | 21 |
| 44 | Chờ 1 bước (`-1`) | (12, 19) | (12, 19) | Dự kiến đứng yên tại (12, 19); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 19)) | 52 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(21, 4))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(21, 4))
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 1, 1, 3, 3, 2, 3, 2, 2, 2, 2, 3, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến di chuyển đến (2, 0); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 51 |
| 2-3 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 50 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 1)) | 49 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 48 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 46 |
| 9 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 1)) | 44 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 43 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến di chuyển đến (9, 1); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 42 |
| 14-15 | Di chuyển hướng 3 (`3`) | (9, 1) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 41 |
| 16-17 | Di chuyển hướng 3 (`3`) | (9, 2) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 40 |
| 18 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 38 |
| 19 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 36 |
| 20-21 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 35 |
| 22-23 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(13, 1)) | 34 |
| 24-25 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 33 |
| 26 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 31 |
| 27-28 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 30 |
| 29 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 28 |
| 30-31 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 27 |
| 32-34 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 25 |
| 35-36 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 4)) | 24 |
| 37-38 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 23 |
| 39-40 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(20, 5)) | 22 |
| 41-42 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (21, 4) (Spot #6 (thương hiệu=6, tọa độ=(21, 4))) | 21 |
| 43-44 | Di chuyển hướng 2 (`2`) | (20, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 4)) | 20 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 4) (ô=101)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 5, 5, 5, 0, 0, 0, 5, 5, 3, 4, 5, 4, 4, 4, 3, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 51 |
| 2-3 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 50 |
| 4-5 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 49 |
| 6-8 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 47 |
| 9-10 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 4)) | 46 |
| 11-12 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 45 |
| 13-14 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 44 |
| 15-17 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 42 |
| 18-19 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 41 |
| 20 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến di chuyển đến (14, 2); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 39 |
| 21-22 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 38 |
| 23 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(13, 1)) | 36 |
| 24-25 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(12, 1)) | 35 |
| 26-27 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 34 |
| 28-29 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 33 |
| 30-31 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 32 |
| 32 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 30 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 29 |
| 35-37 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 27 |
| 38 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 7)) | 25 |
| 39-40 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 24 |
| 41-42 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 23 |
| 43 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 8)) | 21 |
| 44 | Chờ 1 bước (`-1`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 8)) | 52 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (13, 12) (ô=277)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #19 (thương hiệu=19, tọa độ=(12, 19))
- Mảng hành động đã gửi server: `[3, 4, 4, 3, 4, 4, 4, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 52 |
| 2-3 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 52 |
| 4-5 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 52 |
| 6-7 | Di chuyển hướng 3 (`3`) | (13, 15) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 52 |
| 8-9 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 52 |
| 10 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 52 |
| 11-12 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (12, 19) | 52 |
| 13-44 | Chờ 32 bước (`-32`) | (12, 19) | (12, 19) | Dự kiến đứng yên tại (12, 19); điểm hẹn của xe tuần tra #1 tại (12, 19) | 52 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (9, 4) (ô=97)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, -37]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 4-6 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 52 |
| 7 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (7, 8) | 52 |
| 8-44 | Chờ 37 bước (`-37`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); điểm hẹn của xe tuần tra #3 tại (7, 8) | 52 |

