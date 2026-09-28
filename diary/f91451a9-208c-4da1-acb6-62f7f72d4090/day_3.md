# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 58
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 18 | #3 | #5 | (16, 10) | 33 | 61 |
| 55 | #1 | #5 | (4, 7) | 0 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (18, 16) (ô=338)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 4))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 4))
- Mảng hành động đã gửi server: `[3, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 5, 0, 5, 5, 5, 0, 0, 5, 5, 5, 5, 5, 5, 0, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(19, 17)) | 47 |
| 2-3 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến di chuyển đến (18, 16); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 46 |
| 4-5 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến di chuyển đến (18, 15); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 45 |
| 6-7 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến di chuyển đến (17, 14); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 44 |
| 8-9 | Di chuyển hướng 0 (`0`) | (17, 14) | (17, 13) | Dự kiến di chuyển đến (17, 13); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 43 |
| 10-11 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 42 |
| 12 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến di chuyển đến (17, 11); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 40 |
| 13-14 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến di chuyển đến (17, 10); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 39 |
| 15-16 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 38 |
| 17 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 36 |
| 18-19 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 35 |
| 20-22 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 33 |
| 23-24 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 32 |
| 25-26 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 31 |
| 27 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 29 |
| 28-29 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 28 |
| 30-31 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 27 |
| 32-33 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 26 |
| 34-36 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 24 |
| 37 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (9, 1) (Spot #7 (thương hiệu=7, tọa độ=(9, 1))) | 22 |
| 38 | Di chuyển hướng 0 (`0`) | (9, 2) | (9, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 1)) | 20 |
| 39-40 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (6, 1) (Spot #6 (thương hiệu=6, tọa độ=(6, 1))) | 19 |
| 41-43 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (6, 1) (Spot #6 (thương hiệu=6, tọa độ=(6, 1))) | 17 |
| 44-45 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 1)) | 16 |
| 46-47 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (3, 1) (Spot #8 (thương hiệu=8, tọa độ=(3, 1))) | 15 |
| 48-50 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (3, 1) (Spot #8 (thương hiệu=8, tọa độ=(3, 1))) | 13 |
| 51-52 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 1)) | 12 |
| 53-54 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 11 |
| 55-56 | Di chuyển hướng 4 (`4`) | (2, 0) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (1, 4) (Spot #9 (thương hiệu=9, tọa độ=(1, 4))) | 10 |
| 57 | Chờ 1 bước (`-1`) | (2, 1) | (2, 1) | Dự kiến đứng yên tại (2, 1); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 4)) | 10 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 8) (ô=161)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 4))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 4))
- Mảng hành động đã gửi server: `[2, 1, 2, -50, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 2 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 1 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 7)) | 0 |
| 6-55 | Chờ 50 bước (`-50`) | (4, 7) | (4, 7) | Dự kiến đứng yên tại (4, 7); hướng tới tọa độ (4, 7) | 61 |
| 56-57 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (1, 4) (Spot #9 (thương hiệu=9, tọa độ=(1, 4))) | 60 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 15) (ô=306)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(11, 5))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(11, 5))
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 4, 1, 1, 1, 1, 1, 2, 0, 1, 2, 3, 2, 2, 3, 3, 2, 2, 2, 2, 1, 1, 2, 2, 1, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (2, 17) (Spot #1 (thương hiệu=1, tọa độ=(2, 17))) | 57 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (2, 17) (Spot #1 (thương hiệu=1, tọa độ=(2, 17))) | 56 |
| 4 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới tọa độ (2, 17) (Spot #1 (thương hiệu=1, tọa độ=(2, 17))) | 54 |
| 5-6 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (2, 17) (Spot #1 (thương hiệu=1, tọa độ=(2, 17))) | 53 |
| 7-8 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 17)) | 52 |
| 9-10 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (3, 14) (Spot #3 (thương hiệu=3, tọa độ=(3, 14))) | 51 |
| 11-12 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (3, 14) (Spot #3 (thương hiệu=3, tọa độ=(3, 14))) | 50 |
| 13-14 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 14)) | 49 |
| 15-16 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 48 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 47 |
| 19 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 45 |
| 20-21 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (5, 10) (Spot #17 (thương hiệu=2, tọa độ=(5, 10))) | 44 |
| 22-23 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=2, tọa độ=(5, 10)) | 43 |
| 24-25 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 42 |
| 26-27 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 41 |
| 28-29 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 40 |
| 30-31 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 39 |
| 32 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 37 |
| 33-34 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến di chuyển đến (10, 13); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 36 |
| 35-36 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 34 |
| 37-38 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 33 |
| 39-40 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến di chuyển đến (13, 13); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 32 |
| 41-42 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 31 |
| 43-44 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 30 |
| 45-46 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 29 |
| 47-48 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến di chuyển đến (16, 11); hướng tới tọa độ (17, 10) (Spot #4 (thương hiệu=4, tọa độ=(17, 10))) | 28 |
| 49 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến di chuyển đến (17, 11); hướng tới tọa độ (17, 10) (Spot #4 (thương hiệu=4, tọa độ=(17, 10))) | 26 |
| 50-51 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 10)) | 25 |
| 52-53 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (11, 5) (Spot #11 (thương hiệu=11, tọa độ=(11, 5))) | 24 |
| 54 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (11, 5) (Spot #11 (thương hiệu=11, tọa độ=(11, 5))) | 22 |
| 55-56 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (11, 5) (Spot #11 (thương hiệu=11, tọa độ=(11, 5))) | 21 |
| 57 | Chờ 1 bước (`-1`) | (16, 7) | (16, 7) | Dự kiến đứng yên tại (16, 7); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 5)) | 21 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 5) (ô=111)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(3, 14))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(3, 14))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5, 4, 4, 5, 5, 5, 0, 5, 5, 4, 3, 3, 2, 3, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 44 |
| 2-3 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 43 |
| 4-5 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 42 |
| 6 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 40 |
| 7-8 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 39 |
| 9-10 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 38 |
| 11-13 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 36 |
| 14-15 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 35 |
| 16 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 33 |
| 17-19 | Di chuyển hướng 4 (`4`) | (16, 10) | (16, 11) | Dự kiến di chuyển đến (16, 11); hướng tới tọa độ (15, 11) (Spot #2 (thương hiệu=2, tọa độ=(15, 11))) | 59 |
| 20 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 57 |
| 21-22 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (12, 11) (Spot #12 (thương hiệu=12, tọa độ=(12, 11))) | 56 |
| 23-24 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (12, 11) (Spot #12 (thương hiệu=12, tọa độ=(12, 11))) | 55 |
| 25-26 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 11)) | 54 |
| 27-28 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (9, 13) (Spot #5 (thương hiệu=5, tọa độ=(9, 13))) | 53 |
| 29-30 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (9, 13) (Spot #5 (thương hiệu=5, tọa độ=(9, 13))) | 52 |
| 31-32 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến di chuyển đến (10, 13); hướng tới tọa độ (9, 13) (Spot #5 (thương hiệu=5, tọa độ=(9, 13))) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 49 |
| 35-36 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 48 |
| 37-38 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 46 |
| 39-40 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 45 |
| 41-42 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 44 |
| 43-44 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (6, 15) (Spot #16 (thương hiệu=1, tọa độ=(6, 15))) | 43 |
| 45-46 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới tọa độ (6, 15) (Spot #16 (thương hiệu=1, tọa độ=(6, 15))) | 42 |
| 47-48 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(6, 15)) | 41 |
| 49-50 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (7, 16) (Spot #18 (thương hiệu=3, tọa độ=(7, 16))) | 40 |
| 51-52 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(7, 16)) | 39 |
| 53-54 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (3, 14) (Spot #3 (thương hiệu=3, tọa độ=(3, 14))) | 38 |
| 55-56 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (3, 14) (Spot #3 (thương hiệu=3, tọa độ=(3, 14))) | 37 |
| 57 | Chờ 1 bước (`-1`) | (5, 16) | (5, 16) | Dự kiến đứng yên tại (5, 16); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 14)) | 37 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 4) (ô=81)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 4)
- Mảng hành động đã gửi server: `[-58]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-57 | Chờ 58 bước (`-58`) | (1, 4) | (1, 4) | Dự kiến đứng yên tại (1, 4); hướng tới tọa độ (1, 4) | 1 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (8, 15) (ô=308)
- Nhiên liệu đầu ngày: 61
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #14 (thương hiệu=14, tọa độ=(4, 7))
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 5, 5, 0, 0, 5, 5, 4, 5, 4, 4, 4, 5, 5, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 2 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 3 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến di chuyển đến (10, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 4-5 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 6-7 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 8-9 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến di chuyển đến (13, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 10-11 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 12-13 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 14 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 15-16 | Di chuyển hướng 1 (`1`) | (15, 12) | (16, 11) | Dự kiến di chuyển đến (16, 11); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 17 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 18-20 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 21 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 22-23 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 24-26 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 27-28 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 29-30 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 31 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 32-33 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 34-35 | Di chuyển hướng 0 (`0`) | (12, 4) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 36-37 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 38-40 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 41 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 42-43 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 44-45 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 46 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 47-48 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 51-52 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (4, 7) (Spot #14 (thương hiệu=14, tọa độ=(4, 7))) | 61 |
| 53-54 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (4, 7) | 61 |
| 55-57 | Chờ 3 bước (`-3`) | (4, 7) | (4, 7) | Dự kiến đứng yên tại (4, 7); điểm hẹn của xe tuần tra #1 tại (4, 7) | 61 |

