# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 51
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 19) (ô=427)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Mảng hành động đã gửi server: `[3, 3, 4, -15, 0, 5, 5, 0, 0, 0, 1, 0, 0, 0, 4, 5, 4, 5, 0, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 19) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 4 |
| 2 | Di chuyển hướng 3 (`3`) | (9, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 2 |
| 3-4 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 1 |
| 5-19 | Chờ 15 bước (`-15`) | (9, 22) | (9, 22) | Dự kiến đứng yên tại (9, 22); hướng tới tọa độ (9, 22) | 52 |
| 20-21 | Di chuyển hướng 0 (`0`) | (9, 22) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 51 |
| 22-23 | Di chuyển hướng 5 (`5`) | (9, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 50 |
| 24-25 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 49 |
| 26-27 | Di chuyển hướng 0 (`0`) | (7, 21) | (6, 20) | Dự kiến di chuyển đến (6, 20); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 48 |
| 28-29 | Di chuyển hướng 0 (`0`) | (6, 20) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 47 |
| 30-31 | Di chuyển hướng 0 (`0`) | (6, 19) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 46 |
| 32-33 | Di chuyển hướng 1 (`1`) | (5, 18) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 45 |
| 34-35 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 44 |
| 36 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 42 |
| 37-38 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 41 |
| 39-40 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 40 |
| 41 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 38 |
| 42 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 36 |
| 43 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 16)) | 34 |
| 44-45 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến di chuyển đến (1, 15); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 33 |
| 46-47 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến di chuyển đến (1, 14); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 32 |
| 48 | Di chuyển hướng 1 (`1`) | (1, 14) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 30 |
| 49-50 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 29 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 14) (ô=309)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(4, 14))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(4, 14))
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 3, 2, 3, 3, 3, 2, 2, 3, 1, 1, 1, 2, 5, 4, 5, 4, 5, 5, 5, 5, 5, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (1, 14) | (2, 15) | Dự kiến di chuyển đến (2, 15); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 48 |
| 1-2 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 47 |
| 3 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến di chuyển đến (3, 17); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 45 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 44 |
| 6 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 42 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 41 |
| 9-10 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 40 |
| 11-12 | Di chuyển hướng 3 (`3`) | (6, 19) | (6, 20) | Dự kiến di chuyển đến (6, 20); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 39 |
| 13-14 | Di chuyển hướng 3 (`3`) | (6, 20) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 38 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 37 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 21) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 36 |
| 19-20 | Di chuyển hướng 3 (`3`) | (9, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 35 |
| 21-22 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 34 |
| 23-24 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 33 |
| 25-26 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (12, 19) (Spot #19 (thương hiệu=19, tọa độ=(12, 19))) | 31 |
| 27-28 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 19)) | 29 |
| 29-30 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 28 |
| 31-32 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 26 |
| 33-34 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 24 |
| 35 | Di chuyển hướng 4 (`4`) | (9, 20) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 22 |
| 36-37 | Di chuyển hướng 5 (`5`) | (9, 21) | (8, 21) | Dự kiến di chuyển đến (8, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 21 |
| 38-39 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 20 |
| 40-41 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 19 |
| 42-43 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 18 |
| 44-45 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 21)) | 17 |
| 46-47 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 21)) | 16 |
| 48-49 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến di chuyển đến (2, 20); hướng tới tọa độ (4, 14) (Spot #13 (thương hiệu=13, tọa độ=(4, 14))) | 15 |
| 50 | Chờ 1 bước (`-1`) | (2, 20) | (2, 20) | Dự kiến đứng yên tại (2, 20); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 15 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (21, 4) (ô=109)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Mảng hành động đã gửi server: `[5, 5, 5, 2, 3, 0, 1, -16, 5, 4, 5, 3, 3, 2, 2, 2, 5, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 4) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 7 |
| 2-3 | Di chuyển hướng 5 (`5`) | (20, 4) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 6 |
| 4-5 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 4)) | 5 |
| 6-7 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 4 |
| 8-9 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(20, 5)) | 3 |
| 10-11 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 2 |
| 12-13 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 3)) | 1 |
| 14-29 | Chờ 16 bước (`-16`) | (20, 3) | (20, 3) | Dự kiến đứng yên tại (20, 3); hướng tới tọa độ (20, 3) | 52 |
| 30-31 | Di chuyển hướng 5 (`5`) | (20, 3) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới tọa độ (17, 4) (Spot #8 (thương hiệu=8, tọa độ=(17, 4))) | 51 |
| 32 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (17, 4) (Spot #8 (thương hiệu=8, tọa độ=(17, 4))) | 49 |
| 33-34 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(17, 4)) | 48 |
| 35-36 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 47 |
| 37-38 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 46 |
| 39 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 44 |
| 40 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (21, 6) (Spot #22 (thương hiệu=22, tọa độ=(21, 6))) | 42 |
| 41-42 | Di chuyển hướng 2 (`2`) | (20, 6) | (21, 6) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(21, 6)) | 41 |
| 43-44 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 40 |
| 45-46 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 39 |
| 47 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 37 |
| 48 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 35 |
| 49-50 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 34 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 7) (ô=162)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(13, 1))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(13, 1))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 0, 2, 2, 2, 4, 3, 3, 4, 4, 3, 3, 1, 2, 2, 0, 1, 1, 1, 2, 1, 0, 2, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 40 |
| 1 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 38 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 37 |
| 4-5 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 36 |
| 6-7 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 35 |
| 8-9 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 34 |
| 10 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 1)) | 32 |
| 11-12 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 31 |
| 13 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 29 |
| 14 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 1)) | 27 |
| 15-16 | Di chuyển hướng 4 (`4`) | (7, 1) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 26 |
| 17-18 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 25 |
| 19 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 23 |
| 20-22 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 21 |
| 23 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 19 |
| 24-25 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 18 |
| 26 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 8)) | 16 |
| 27-28 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 15 |
| 29 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (10, 7) (Spot #9 (thương hiệu=9, tọa độ=(10, 7))) | 13 |
| 30-31 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 7)) | 12 |
| 32-33 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 11 |
| 34 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 9 |
| 35-37 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 7 |
| 38-39 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 6 |
| 40-41 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 4 |
| 42-43 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (12, 1) (Spot #14 (thương hiệu=14, tọa độ=(12, 1))) | 3 |
| 44-45 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(12, 1)) | 2 |
| 46-47 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(13, 1)) | 1 |
| 48-50 | Chờ 3 bước (`-3`) | (13, 1) | (13, 1) | Dự kiến đứng yên tại (13, 1); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(13, 1)) | 1 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (1, 16) (ô=353)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #3 (thương hiệu=3, tọa độ=(9, 22))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 2, 3, 3, 3, 3, 3, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 3-4 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 5 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 6 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 9-10 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 11-12 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến di chuyển đến (8, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 13-14 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 15-16 | Di chuyển hướng 3 (`3`) | (8, 20) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 52 |
| 17-18 | Di chuyển hướng 3 (`3`) | (9, 21) | (9, 22) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (9, 22) | 52 |
| 19-50 | Chờ 32 bước (`-32`) | (9, 22) | (9, 22) | Dự kiến đứng yên tại (9, 22); điểm hẹn của xe tuần tra #0 tại (9, 22) | 52 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 1) (ô=26)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #11 (thương hiệu=11, tọa độ=(20, 3))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 2 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 3 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 4-5 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 6-7 | Di chuyển hướng 3 (`3`) | (8, 1) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 8-9 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 10-11 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 12 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 15-16 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 17 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 18-19 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 20 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 21-22 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 23-25 | Di chuyển hướng 2 (`2`) | (17, 3) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 26-27 | Di chuyển hướng 2 (`2`) | (18, 3) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (20, 3) (Spot #11 (thương hiệu=11, tọa độ=(20, 3))) | 52 |
| 28 | Di chuyển hướng 2 (`2`) | (19, 3) | (20, 3) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (20, 3) | 52 |
| 29-50 | Chờ 22 bước (`-22`) | (20, 3) | (20, 3) | Dự kiến đứng yên tại (20, 3); điểm hẹn của xe tuần tra #2 tại (20, 3) | 52 |

