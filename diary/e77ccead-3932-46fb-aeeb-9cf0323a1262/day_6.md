# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 56
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 19) (ô=420)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(1, 16))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(1, 16))
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 2, 2, 2, 1, 1, 4, 3, 3, -1, 1, 1, 1, 2, 5, 4, 5, 4, 5, 5, 5, 5, 5, 5, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 12 |
| 2 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến di chuyển đến (3, 20); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 10 |
| 3-4 | Di chuyển hướng 2 (`2`) | (3, 20) | (4, 20) | Dự kiến di chuyển đến (4, 20); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 9 |
| 5-6 | Di chuyển hướng 3 (`3`) | (4, 20) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 8 |
| 7-8 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 7 |
| 9-10 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 6 |
| 11-12 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 5 |
| 13-14 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (9, 19) (Spot #10 (thương hiệu=10, tọa độ=(9, 19))) | 4 |
| 15-16 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 19)) | 3 |
| 17-18 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 2 |
| 19-20 | Di chuyển hướng 3 (`3`) | (8, 20) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 1 |
| 21-22 | Di chuyển hướng 3 (`3`) | (9, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 0 |
| 23 | Chờ 1 bước (`-1`) | (9, 22) | (9, 22) | Dự kiến đứng yên tại (9, 22); hướng tới tọa độ (9, 22) | 52 |
| 24-25 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 51 |
| 26-27 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 50 |
| 28 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 48 |
| 29-30 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 19)) | 46 |
| 31-32 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 45 |
| 33-34 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 43 |
| 35 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 41 |
| 36 | Di chuyển hướng 4 (`4`) | (9, 20) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 39 |
| 37-38 | Di chuyển hướng 5 (`5`) | (9, 21) | (8, 21) | Dự kiến di chuyển đến (8, 21); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 38 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 37 |
| 41-42 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 36 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 35 |
| 45-46 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến di chuyển đến (4, 21); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 34 |
| 47-48 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 21)) | 33 |
| 49-50 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến di chuyển đến (2, 20); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 32 |
| 51-52 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 31 |
| 53-54 | Di chuyển hướng 0 (`0`) | (2, 19) | (1, 18) | Dự kiến di chuyển đến (1, 18); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 30 |
| 55 | Chờ 1 bước (`-1`) | (1, 18) | (1, 18) | Dự kiến đứng yên tại (1, 18); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 16)) | 30 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 12) (ô=279)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(3, 21))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(3, 21))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 4, 3, 4, 4, 5, 4, 4, 4, 5, 5, 0, 5, 5, 5, 0, 0, 1, 1, 1, 0, 1, 4, 5, 4, 5, 3, 4, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 51 |
| 2 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 49 |
| 3-4 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 48 |
| 5-6 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 47 |
| 7-8 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 46 |
| 9-10 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 45 |
| 11 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 43 |
| 12-13 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 42 |
| 14-15 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 41 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 39 |
| 18 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 37 |
| 19-20 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 36 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 35 |
| 23 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến di chuyển đến (7, 22); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 33 |
| 24-25 | Di chuyển hướng 0 (`0`) | (7, 22) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 32 |
| 26-27 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 31 |
| 28-29 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 30 |
| 30-31 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 21)) | 29 |
| 32-33 | Di chuyển hướng 0 (`0`) | (4, 21) | (3, 20) | Dự kiến di chuyển đến (3, 20); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 28 |
| 34-35 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 27 |
| 36 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến di chuyển đến (3, 18); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 25 |
| 37-38 | Di chuyển hướng 1 (`1`) | (3, 18) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 24 |
| 39 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 22 |
| 40 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 20 |
| 41 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 18 |
| 42-43 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 17 |
| 44 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 15 |
| 45 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 13 |
| 46 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 16)) | 11 |
| 47-48 | Di chuyển hướng 3 (`3`) | (1, 16) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 10 |
| 49-50 | Di chuyển hướng 4 (`4`) | (2, 17) | (1, 18) | Dự kiến di chuyển đến (1, 18); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 9 |
| 51-52 | Di chuyển hướng 3 (`3`) | (1, 18) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 8 |
| 53-54 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến di chuyển đến (2, 20); hướng tới tọa độ (3, 21) (Spot #4 (thương hiệu=4, tọa độ=(3, 21))) | 7 |
| 55 | Chờ 1 bước (`-1`) | (2, 20) | (2, 20) | Dự kiến đứng yên tại (2, 20); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 21)) | 7 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 8) (ô=183)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(17, 4))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(17, 4))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 3, 3, 2, 2, 3, 4, 3, 2, 2, 2, 2, 2, 1, 1, 5, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 35 |
| 2 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 33 |
| 3-4 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 32 |
| 5-6 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 31 |
| 7-8 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 30 |
| 9-10 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 29 |
| 11 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 1)) | 27 |
| 12-13 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 26 |
| 14-15 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 24 |
| 16-17 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 1)) | 22 |
| 18-19 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 21 |
| 20-21 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến di chuyển đến (9, 1); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 20 |
| 22-23 | Di chuyển hướng 3 (`3`) | (9, 1) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 19 |
| 24-25 | Di chuyển hướng 3 (`3`) | (9, 2) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 18 |
| 26 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 16 |
| 27-28 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 14 |
| 29-30 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 13 |
| 31-33 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 5)) | 11 |
| 34-35 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 10 |
| 36-37 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 9 |
| 38-39 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 8 |
| 40-41 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 7 |
| 42-43 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 6 |
| 44-45 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 5 |
| 46-47 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 4 |
| 48-49 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 4)) | 3 |
| 50-51 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(17, 4)) | 2 |
| 52-55 | Chờ 4 bước (`-4`) | (17, 4) | (17, 4) | Dự kiến đứng yên tại (17, 4); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(17, 4)) | 2 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 1) (ô=34)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(20, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(20, 3))
- Mảng hành động đã gửi server: `[3, 4, 3, 4, -13, 1, 0, 1, 1, 3, 3, 2, 2, 2, 2, 3, 2, 3, 1, 2, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 5 |
| 2-3 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 4 |
| 4-5 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 3 |
| 6-8 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 5)) | 1 |
| 9-21 | Chờ 13 bước (`-13`) | (12, 5) | (12, 5) | Dự kiến đứng yên tại (12, 5); hướng tới tọa độ (12, 5) | 52 |
| 22-23 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 51 |
| 24-26 | Di chuyển hướng 0 (`0`) | (12, 4) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 49 |
| 27-28 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 48 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(13, 1)) | 47 |
| 31-32 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 46 |
| 33 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 44 |
| 34-35 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 43 |
| 36 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 41 |
| 37-38 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 40 |
| 39-41 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 38 |
| 42-43 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 4)) | 37 |
| 44-45 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 36 |
| 46-47 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(20, 5)) | 35 |
| 48-49 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (21, 4) (Spot #6 (thương hiệu=6, tọa độ=(21, 4))) | 34 |
| 50-51 | Di chuyển hướng 2 (`2`) | (20, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 4)) | 33 |
| 52-53 | Di chuyển hướng 5 (`5`) | (21, 4) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 32 |
| 54-55 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 3)) | 31 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (15, 12) (ô=279)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #3 (thương hiệu=3, tọa độ=(9, 22))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 4, 3, 4, 4, 5, 4, 4, 4, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 2 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 3-4 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 5-6 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 7-8 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 9-10 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 11 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 12-13 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 14-15 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 18 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 19-20 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (9, 22) | 52 |
| 21-55 | Chờ 35 bước (`-35`) | (9, 22) | (9, 22) | Dự kiến đứng yên tại (9, 22); điểm hẹn của xe tuần tra #0 tại (9, 22) | 52 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 1) (ô=26)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #16 (thương hiệu=16, tọa độ=(12, 5))
- Mảng hành động đã gửi server: `[3, 2, 2, 3, 2, 2, 2, 2, 2, 3, 4, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 52 |
| 2 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 52 |
| 3-4 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 52 |
| 5-6 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 52 |
| 7 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 52 |
| 8-10 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 52 |
| 11-12 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 52 |
| 13 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 52 |
| 14-15 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 52 |
| 16-17 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 52 |
| 18-20 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (12, 5) | 52 |
| 21-55 | Chờ 35 bước (`-35`) | (12, 5) | (12, 5) | Dự kiến đứng yên tại (12, 5); điểm hẹn của xe tuần tra #3 tại (12, 5) | 52 |

