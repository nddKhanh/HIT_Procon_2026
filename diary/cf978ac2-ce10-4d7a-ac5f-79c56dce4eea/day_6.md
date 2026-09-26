# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 55
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 32 | #3 | #6 | (12, 5) | 0 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 4) (ô=116)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(19, 8))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(19, 8))
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 2, 2, 2, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới tọa độ (19, 8) (Spot #6 (thương hiệu=6, tọa độ=(19, 8))) | 9 |
| 2-4 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến di chuyển đến (15, 6); hướng tới tọa độ (19, 8) (Spot #6 (thương hiệu=6, tọa độ=(19, 8))) | 7 |
| 5 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (19, 8) (Spot #6 (thương hiệu=6, tọa độ=(19, 8))) | 5 |
| 6-7 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (19, 8) (Spot #6 (thương hiệu=6, tọa độ=(19, 8))) | 4 |
| 8-9 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (19, 8) (Spot #6 (thương hiệu=6, tọa độ=(19, 8))) | 3 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới tọa độ (19, 8) (Spot #6 (thương hiệu=6, tọa độ=(19, 8))) | 2 |
| 12-13 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 1 |
| 14-54 | Chờ 41 bước (`-41`) | (19, 8) | (19, 8) | Dự kiến đứng yên tại (19, 8); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 17) (ô=435)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(8, 12))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(8, 12))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 0, 0, 0, 0, 5, 3, 3, 4, 3, 3, 4, 1, 2, 2, 1, 1, 1, 1, 2, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (6, 15) (Spot #1 (thương hiệu=1, tọa độ=(6, 15))) | 45 |
| 2-4 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (6, 15) (Spot #1 (thương hiệu=1, tọa độ=(6, 15))) | 43 |
| 5-6 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (6, 15) (Spot #1 (thương hiệu=1, tọa độ=(6, 15))) | 42 |
| 7-8 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (6, 15) (Spot #1 (thương hiệu=1, tọa độ=(6, 15))) | 41 |
| 9-10 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 39 |
| 11-12 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới tọa độ (4, 12) (Spot #16 (thương hiệu=16, tọa độ=(4, 12))) | 38 |
| 13-16 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (4, 12) (Spot #16 (thương hiệu=16, tọa độ=(4, 12))) | 36 |
| 17-18 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 34 |
| 19-20 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 12)) | 33 |
| 21-22 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (4, 14) (Spot #10 (thương hiệu=10, tọa độ=(4, 14))) | 32 |
| 23-25 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 30 |
| 26-27 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 29 |
| 28-29 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (5, 17) (Spot #7 (thương hiệu=7, tọa độ=(5, 17))) | 28 |
| 30-32 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 26 |
| 33-34 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 25 |
| 35-36 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 24 |
| 37-38 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 23 |
| 39-40 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 22 |
| 41-42 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 21 |
| 43 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 19 |
| 44-45 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 18 |
| 46-47 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 16 |
| 48-49 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 15 |
| 50-51 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (8, 12) (Spot #19 (thương hiệu=19, tọa độ=(8, 12))) | 14 |
| 52-53 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 13 |
| 54 | Chờ 1 bước (`-1`) | (8, 12) | (8, 12) | Dự kiến đứng yên tại (8, 12); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 13 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 13) (ô=333)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(4, 18))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(4, 18))
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 5, 5, 2, 1, 1, 0, 3, 2, 3, 2, 2, 1, 2, 1, 4, 5, 4, 4, 4, 4, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (4, 15) (Spot #0 (thương hiệu=0, tọa độ=(4, 15))) | 49 |
| 4 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (4, 15) (Spot #0 (thương hiệu=0, tọa độ=(4, 15))) | 47 |
| 5-6 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (4, 15) (Spot #0 (thương hiệu=0, tọa độ=(4, 15))) | 45 |
| 7-8 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (4, 15) (Spot #0 (thương hiệu=0, tọa độ=(4, 15))) | 44 |
| 9-12 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 42 |
| 13-14 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 41 |
| 15-16 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (4, 14) (Spot #10 (thương hiệu=10, tọa độ=(4, 14))) | 40 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 39 |
| 19-20 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (4, 12) (Spot #16 (thương hiệu=16, tọa độ=(4, 12))) | 38 |
| 21-22 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 36 |
| 23-24 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 35 |
| 25-26 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 33 |
| 27 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 31 |
| 28-29 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 29 |
| 30 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 27 |
| 31-32 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 25 |
| 33-34 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 24 |
| 35-36 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 23 |
| 37-38 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến di chuyển đến (10, 13); hướng tới tọa độ (7, 17) (Spot #5 (thương hiệu=5, tọa độ=(7, 17))) | 22 |
| 39-40 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (7, 17) (Spot #5 (thương hiệu=5, tọa độ=(7, 17))) | 21 |
| 41-42 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (7, 17) (Spot #5 (thương hiệu=5, tọa độ=(7, 17))) | 20 |
| 43-44 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (7, 17) (Spot #5 (thương hiệu=5, tọa độ=(7, 17))) | 18 |
| 45-46 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (7, 17) (Spot #5 (thương hiệu=5, tọa độ=(7, 17))) | 17 |
| 47 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 15 |
| 48-49 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (5, 17) (Spot #7 (thương hiệu=7, tọa độ=(5, 17))) | 14 |
| 50-51 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 13 |
| 52-53 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 12 |
| 54 | Chờ 1 bước (`-1`) | (4, 18) | (4, 18) | Dự kiến đứng yên tại (4, 18); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 12 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 5) (ô=137)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(19, 8))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(19, 8))
- Mảng hành động đã gửi server: `[-33, 3, 4, 3, 2, 2, 3, 3, 4, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-32 | Chờ 33 bước (`-33`) | (12, 5) | (12, 5) | Dự kiến đứng yên tại (12, 5); hướng tới tọa độ (12, 5) | 51 |
| 33-34 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (12, 7) (Spot #21 (thương hiệu=21, tọa độ=(12, 7))) | 50 |
| 35-38 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 48 |
| 39-40 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 47 |
| 41-42 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 46 |
| 43-45 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 44 |
| 46 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 42 |
| 47 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 40 |
| 48-49 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 39 |
| 50-51 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (19, 8) (Spot #6 (thương hiệu=6, tọa độ=(19, 8))) | 38 |
| 52-53 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (19, 8) (Spot #6 (thương hiệu=6, tọa độ=(19, 8))) | 37 |
| 54 | Chờ 1 bước (`-1`) | (16, 10) | (16, 10) | Dự kiến đứng yên tại (16, 10); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 37 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 16) (ô=410)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(8, 12))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(8, 12))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 0, 5, 3, 3, 2, 2, 2, 2, 2, 2, 1, 0, 0, 0, 2, 1, 5, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (3, 15) (Spot #2 (thương hiệu=2, tọa độ=(3, 15))) | 36 |
| 2-4 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (3, 15) (Spot #2 (thương hiệu=2, tọa độ=(3, 15))) | 34 |
| 5 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (3, 15) (Spot #2 (thương hiệu=2, tọa độ=(3, 15))) | 32 |
| 6 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (3, 15) (Spot #2 (thương hiệu=2, tọa độ=(3, 15))) | 30 |
| 7-8 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (3, 15) (Spot #2 (thương hiệu=2, tọa độ=(3, 15))) | 28 |
| 9-10 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (3, 15) (Spot #2 (thương hiệu=2, tọa độ=(3, 15))) | 27 |
| 11-13 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (3, 15) (Spot #2 (thương hiệu=2, tọa độ=(3, 15))) | 25 |
| 14-15 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 24 |
| 16-17 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới tọa độ (8, 17) (Spot #20 (thương hiệu=20, tọa độ=(8, 17))) | 23 |
| 18-20 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới tọa độ (8, 17) (Spot #20 (thương hiệu=20, tọa độ=(8, 17))) | 21 |
| 21 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (8, 17) (Spot #20 (thương hiệu=20, tọa độ=(8, 17))) | 19 |
| 22-23 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (8, 17) (Spot #20 (thương hiệu=20, tọa độ=(8, 17))) | 18 |
| 24-25 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (8, 17) (Spot #20 (thương hiệu=20, tọa độ=(8, 17))) | 17 |
| 26-27 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 16 |
| 28-29 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (10, 17) (Spot #11 (thương hiệu=11, tọa độ=(10, 17))) | 15 |
| 30-32 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 13 |
| 33-34 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (10, 15) (Spot #14 (thương hiệu=14, tọa độ=(10, 15))) | 12 |
| 35-36 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 11 |
| 37-38 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (9, 13) (Spot #3 (thương hiệu=3, tọa độ=(9, 13))) | 10 |
| 39-42 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 8 |
| 43-44 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 7 |
| 45-46 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 6 |
| 47-48 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (8, 12) (Spot #19 (thương hiệu=19, tọa độ=(8, 12))) | 5 |
| 49-51 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 3 |
| 52-54 | Chờ 3 bước (`-3`) | (8, 12) | (8, 12) | Dự kiến đứng yên tại (8, 12); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 3 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (8, 12) (ô=308)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(12, 7))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(12, 7))
- Mảng hành động đã gửi server: `[3, 2, 3, 2, 2, 2, 1, 1, 1, 1, 2, 1, 1, 1, 4, 5, 5, 5, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 46 |
| 2-3 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến di chuyển đến (10, 13); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 45 |
| 4-5 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 44 |
| 6-9 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 42 |
| 10-13 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến di chuyển đến (12, 14); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 40 |
| 14-17 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 38 |
| 18-21 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 36 |
| 22-25 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (15, 11) (Spot #13 (thương hiệu=13, tọa độ=(15, 11))) | 34 |
| 26-29 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 32 |
| 30-31 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (16, 10) (Spot #24 (thương hiệu=24, tọa độ=(16, 10))) | 31 |
| 32-33 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 30 |
| 34-35 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (18, 7) (Spot #15 (thương hiệu=15, tọa độ=(18, 7))) | 29 |
| 36-37 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (18, 7) (Spot #15 (thương hiệu=15, tọa độ=(18, 7))) | 27 |
| 38-39 | Di chuyển hướng 1 (`1`) | (17, 8) | (18, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 7)) | 26 |
| 40-41 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (12, 8) (Spot #9 (thương hiệu=9, tọa độ=(12, 8))) | 25 |
| 42-43 | Di chuyển hướng 5 (`5`) | (17, 8) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (12, 8) (Spot #9 (thương hiệu=9, tọa độ=(12, 8))) | 24 |
| 44-45 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới tọa độ (12, 8) (Spot #9 (thương hiệu=9, tọa độ=(12, 8))) | 23 |
| 46-48 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (12, 8) (Spot #9 (thương hiệu=9, tọa độ=(12, 8))) | 21 |
| 49 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (12, 8) (Spot #9 (thương hiệu=9, tọa độ=(12, 8))) | 19 |
| 50-52 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 17 |
| 53-54 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 16 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (8, 13) (ô=333)
- Nhiên liệu đầu ngày: 51
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #22 (thương hiệu=22, tọa độ=(12, 5))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 0, 0, 1, 2, 2, 2, 2, 1, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 4-7 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 8-9 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 12-15 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 16-17 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 18-19 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 20-21 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 22-23 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 24-25 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 26-27 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 5) (Spot #22 (thương hiệu=22, tọa độ=(12, 5))) | 51 |
| 28-31 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (12, 5) | 51 |
| 32-54 | Chờ 23 bước (`-23`) | (12, 5) | (12, 5) | Dự kiến đứng yên tại (12, 5); điểm hẹn của xe tuần tra #3 tại (12, 5) | 51 |

