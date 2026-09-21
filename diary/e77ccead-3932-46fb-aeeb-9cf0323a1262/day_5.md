# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 54
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 10) (ô=224)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(1, 16))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(1, 16))
- Mảng hành động đã gửi server: `[5, 5, 4, 3, 4, 3, 3, 3, 3, 3, 3, 2, 3, 3, 2, 1, 1, 3, 3, 4, 5, 5, 0, 5, 5, 5, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 46 |
| 2-3 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 45 |
| 4-5 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 44 |
| 6 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 42 |
| 7-8 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 41 |
| 9-10 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 40 |
| 11-12 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 39 |
| 13 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 37 |
| 14-15 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 36 |
| 16 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 34 |
| 17-18 | Di chuyển hướng 3 (`3`) | (4, 18) | (5, 19) | Dự kiến di chuyển đến (5, 19); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 33 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 19) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 32 |
| 21-22 | Di chuyển hướng 3 (`3`) | (6, 19) | (6, 20) | Dự kiến di chuyển đến (6, 20); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 31 |
| 23-24 | Di chuyển hướng 3 (`3`) | (6, 20) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (8, 21) (Spot #1 (thương hiệu=1, tọa độ=(8, 21))) | 30 |
| 25-26 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 21)) | 29 |
| 27-28 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (9, 19) (Spot #10 (thương hiệu=10, tọa độ=(9, 19))) | 28 |
| 29-30 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 19)) | 27 |
| 31-32 | Di chuyển hướng 3 (`3`) | (9, 19) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 26 |
| 33 | Di chuyển hướng 3 (`3`) | (9, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (9, 22) (Spot #3 (thương hiệu=3, tọa độ=(9, 22))) | 24 |
| 34-35 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 22)) | 23 |
| 36-37 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 22 |
| 38 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến di chuyển đến (7, 22); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 20 |
| 39-40 | Di chuyển hướng 0 (`0`) | (7, 22) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 19 |
| 41-42 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 18 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (4, 21) (Spot #12 (thương hiệu=12, tọa độ=(4, 21))) | 17 |
| 45-46 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 21)) | 16 |
| 47-48 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 21)) | 15 |
| 49-50 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến di chuyển đến (2, 20); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 14 |
| 51-52 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (1, 16) (Spot #21 (thương hiệu=21, tọa độ=(1, 16))) | 13 |
| 53 | Chờ 1 bước (`-1`) | (2, 19) | (2, 19) | Dự kiến đứng yên tại (2, 19); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 16)) | 13 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 12) (ô=279)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 12)
- Mảng hành động đã gửi server: `[-54]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-53 | Chờ 54 bước (`-54`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); hướng tới tọa độ (15, 12) | 52 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (21, 4) (ô=109)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 8))
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 0, -1, 2, 2, 2, 4, 3, 3, 4, 4, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 4) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 32 |
| 2-3 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến di chuyển đến (20, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 31 |
| 4-5 | Di chuyển hướng 5 (`5`) | (20, 3) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 30 |
| 6 | Di chuyển hướng 5 (`5`) | (19, 3) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 28 |
| 7-8 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 27 |
| 9-11 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 25 |
| 12-13 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 24 |
| 14 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 22 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 21 |
| 17 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 19 |
| 18-19 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 18 |
| 20-21 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 16 |
| 22 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 14 |
| 23-24 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 13 |
| 25-27 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 11 |
| 28 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 9 |
| 29-30 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 8 |
| 31-32 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 7 |
| 33 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 1)) | 5 |
| 34 | Chờ 1 bước (`-1`) | (4, 1) | (4, 1) | Dự kiến đứng yên tại (4, 1); hướng tới tọa độ (4, 1) | 52 |
| 35-36 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 51 |
| 37-38 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (7, 1) (Spot #20 (thương hiệu=20, tọa độ=(7, 1))) | 49 |
| 39-40 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 1)) | 47 |
| 41-42 | Di chuyển hướng 4 (`4`) | (7, 1) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 46 |
| 43-44 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 45 |
| 45 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 43 |
| 46-48 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 41 |
| 49 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 39 |
| 50-51 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (7, 8) (Spot #15 (thương hiệu=15, tọa độ=(7, 8))) | 38 |
| 52 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 8)) | 36 |
| 53 | Chờ 1 bước (`-1`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 8)) | 36 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 4) (ô=109)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(12, 1))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(12, 1))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 2, 3, 2, 4, 5, 5, 5, 5, 5, 5, 5, 0, 1, 1, 1, 0, 5, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 4) | (20, 4) | Dự kiến di chuyển đến (20, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 31 |
| 2-3 | Di chuyển hướng 5 (`5`) | (20, 4) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (18, 4) (Spot #2 (thương hiệu=2, tọa độ=(18, 4))) | 30 |
| 4-5 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 4)) | 29 |
| 6-7 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(17, 4)) | 28 |
| 8-9 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 27 |
| 10-11 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến di chuyển đến (19, 5); hướng tới tọa độ (20, 5) (Spot #17 (thương hiệu=17, tọa độ=(20, 5))) | 26 |
| 12-13 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(20, 5)) | 25 |
| 14-15 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 24 |
| 16 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 22 |
| 17 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 20 |
| 18-19 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 19 |
| 20-21 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 18 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 17 |
| 24-25 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 16 |
| 26-27 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (12, 5) (Spot #16 (thương hiệu=16, tọa độ=(12, 5))) | 15 |
| 28-29 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 5)) | 14 |
| 30-31 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 13 |
| 32-34 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 11 |
| 35 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (13, 1) (Spot #18 (thương hiệu=18, tọa độ=(13, 1))) | 9 |
| 36 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(13, 1)) | 7 |
| 37-38 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(12, 1)) | 6 |
| 39-53 | Chờ 15 bước (`-15`) | (12, 1) | (12, 1) | Dự kiến đứng yên tại (12, 1); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(12, 1)) | 6 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (7, 8) (ô=183)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #7 (thương hiệu=7, tọa độ=(15, 12))
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 5, 5, 4, 3, 3, 3, 3, 3, 2, 3, 2, 3, 2, 2, 2, 3, 2, 1, 1, 0, 1, 1, 1, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 4-5 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 6 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 7-8 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 9-10 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 11-12 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 13 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 14-15 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 16-18 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 19-20 | Di chuyển hướng 3 (`3`) | (3, 14) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 21 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 22 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 23 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 24-25 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 26-27 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 28-29 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến di chuyển đến (8, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 30-31 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 32-33 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 34-36 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 37-38 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 39-40 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 41-42 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 43 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 44-45 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 46-47 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 48-49 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 50-51 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (15, 12) (Spot #7 (thương hiệu=7, tọa độ=(15, 12))) | 52 |
| 52 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (15, 12) | 52 |
| 53 | Chờ 1 bước (`-1`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); điểm hẹn của xe tuần tra #1 tại (15, 12) | 52 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (12, 1) (ô=34)
- Nhiên liệu đầu ngày: 52
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #0 (thương hiệu=0, tọa độ=(4, 1))
- Mảng hành động đã gửi server: `[3, 4, 5, 5, 5, 5, 5, 0, 5, 5, 0, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới điểm hẹn của xe tuần tra #2 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 2-3 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 6-7 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 8 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 9-10 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 11-13 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 14 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới điểm hẹn của xe tuần tra #2 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 15-16 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới điểm hẹn của xe tuần tra #2 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 17-18 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới điểm hẹn của xe tuần tra #2 tại (4, 1) (Spot #0 (thương hiệu=0, tọa độ=(4, 1))) | 52 |
| 19 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (4, 1) | 52 |
| 20-53 | Chờ 34 bước (`-34`) | (4, 1) | (4, 1) | Dự kiến đứng yên tại (4, 1); điểm hẹn của xe tuần tra #2 tại (4, 1) | 52 |

