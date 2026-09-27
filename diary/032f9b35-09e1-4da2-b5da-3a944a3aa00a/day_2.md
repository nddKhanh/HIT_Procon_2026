# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 54
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #4 | #6 | (3, 11) | 54 | 55 |
| 34 | #1 | #6 | (19, 23) | 4 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 3) (ô=88)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Mảng hành động đã gửi server: `[3, 3, 4, -50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 8 |
| 2 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 6 |
| 3 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 4 |
| 4-53 | Chờ 50 bước (`-50`) | (16, 6) | (16, 6) | Dự kiến đứng yên tại (16, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 4 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (19, 21) (ô=523)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(0, 14))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(0, 14))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 2, 2, 2, 2, 2, 3, 4, 3, 4, 4, 4, 5, 5, 5, -1, 1, 1, 1, 1, 5, 5, 5, 4, 5, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới tọa độ (18, 17) (Spot #1 (thương hiệu=1, tọa độ=(18, 17))) | 27 |
| 2 | Di chuyển hướng 1 (`1`) | (18, 20) | (19, 19) | Dự kiến di chuyển đến (19, 19); hướng tới tọa độ (18, 17) (Spot #1 (thương hiệu=1, tọa độ=(18, 17))) | 25 |
| 3 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến di chuyển đến (18, 18); hướng tới tọa độ (18, 17) (Spot #1 (thương hiệu=1, tọa độ=(18, 17))) | 23 |
| 4-5 | Di chuyển hướng 0 (`0`) | (18, 18) | (18, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(18, 17)) | 22 |
| 6-7 | Di chuyển hướng 2 (`2`) | (18, 17) | (19, 17) | Dự kiến di chuyển đến (19, 17); hướng tới tọa độ (20, 17) (Spot #12 (thương hiệu=12, tọa độ=(20, 17))) | 21 |
| 8 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 19 |
| 9-10 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến di chuyển đến (21, 17); hướng tới tọa độ (22, 17) (Spot #21 (thương hiệu=21, tọa độ=(22, 17))) | 18 |
| 11-12 | Di chuyển hướng 2 (`2`) | (21, 17) | (22, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(22, 17)) | 17 |
| 13-14 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(23, 17)) | 16 |
| 15-16 | Di chuyển hướng 3 (`3`) | (23, 17) | (23, 18) | Dự kiến di chuyển đến (23, 18); hướng tới tọa độ (23, 19) (Spot #17 (thương hiệu=17, tọa độ=(23, 19))) | 15 |
| 17-19 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 19)) | 13 |
| 20-21 | Di chuyển hướng 3 (`3`) | (23, 19) | (23, 20) | Dự kiến di chuyển đến (23, 20); hướng tới tọa độ (22, 22) (Spot #10 (thương hiệu=10, tọa độ=(22, 22))) | 12 |
| 22 | Di chuyển hướng 4 (`4`) | (23, 20) | (23, 21) | Dự kiến di chuyển đến (23, 21); hướng tới tọa độ (22, 22) (Spot #10 (thương hiệu=10, tọa độ=(22, 22))) | 10 |
| 23-25 | Di chuyển hướng 4 (`4`) | (23, 21) | (22, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(22, 22)) | 8 |
| 26-27 | Di chuyển hướng 4 (`4`) | (22, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 7 |
| 28-29 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 6 |
| 30-31 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến di chuyển đến (20, 23); hướng tới tọa độ (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 5 |
| 32-33 | Di chuyển hướng 5 (`5`) | (20, 23) | (19, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 23)) | 55 |
| 34 | Chờ 1 bước (`-1`) | (19, 23) | (19, 23) | Dự kiến đứng yên tại (19, 23); hướng tới tọa độ (19, 23) | 55 |
| 35-36 | Di chuyển hướng 1 (`1`) | (19, 23) | (19, 22) | Dự kiến di chuyển đến (19, 22); hướng tới tọa độ (21, 19) (Spot #11 (thương hiệu=11, tọa độ=(21, 19))) | 54 |
| 37-38 | Di chuyển hướng 1 (`1`) | (19, 22) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới tọa độ (21, 19) (Spot #11 (thương hiệu=11, tọa độ=(21, 19))) | 53 |
| 39-40 | Di chuyển hướng 1 (`1`) | (20, 21) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (21, 19) (Spot #11 (thương hiệu=11, tọa độ=(21, 19))) | 51 |
| 41-42 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 19)) | 49 |
| 43-44 | Di chuyển hướng 5 (`5`) | (21, 19) | (20, 19) | Dự kiến di chuyển đến (20, 19); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 48 |
| 45-46 | Di chuyển hướng 5 (`5`) | (20, 19) | (19, 19) | Dự kiến di chuyển đến (19, 19); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 47 |
| 47 | Di chuyển hướng 5 (`5`) | (19, 19) | (18, 19) | Dự kiến di chuyển đến (18, 19); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 45 |
| 48 | Di chuyển hướng 4 (`4`) | (18, 19) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 43 |
| 49 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 41 |
| 50 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 39 |
| 51 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 37 |
| 52 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 35 |
| 53 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến di chuyển đến (12, 20); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 33 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 12) (ô=288)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[1, 2, 2, 1, 2, 3, 4, 4, 4, 5, 5, 5, 0, 1, 1, 1, 1, 1, 2, 1, 1, 0, 0, 1, 0, 3, 4, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 12) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 44 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 43 |
| 4 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (3, 10) (Spot #2 (thương hiệu=2, tọa độ=(3, 10))) | 41 |
| 5-6 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 39 |
| 7-8 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (4, 12) (Spot #14 (thương hiệu=14, tọa độ=(4, 12))) | 38 |
| 9 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (4, 12) (Spot #14 (thương hiệu=14, tọa độ=(4, 12))) | 36 |
| 10 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 34 |
| 11-12 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (3, 14) (Spot #0 (thương hiệu=0, tọa độ=(3, 14))) | 33 |
| 13-14 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 32 |
| 15-16 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 31 |
| 17-18 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến di chuyển đến (1, 14); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 29 |
| 19-20 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 28 |
| 21-22 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 27 |
| 23-24 | Di chuyển hướng 1 (`1`) | (0, 13) | (0, 12) | Dự kiến di chuyển đến (0, 12); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 26 |
| 25-26 | Di chuyển hướng 1 (`1`) | (0, 12) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 25 |
| 27-28 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 24 |
| 29 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 22 |
| 30-31 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 21 |
| 32-34 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 19 |
| 35-36 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 18 |
| 37-40 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 16 |
| 41 | Di chuyển hướng 0 (`0`) | (4, 6) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 14 |
| 42 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 12 |
| 43 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 10 |
| 44-45 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 9 |
| 46-47 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (2, 4) (Spot #6 (thương hiệu=6, tọa độ=(2, 4))) | 8 |
| 48-49 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (2, 4) (Spot #6 (thương hiệu=6, tọa độ=(2, 4))) | 7 |
| 50 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 5 |
| 51-53 | Chờ 3 bước (`-3`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 5 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=98)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 4)
- Mảng hành động đã gửi server: `[-54]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-53 | Chờ 54 bước (`-54`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); hướng tới tọa độ (2, 4) | 1 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 10) (ô=243)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 2, 5, 5, 5, 5, 0, 2, 2, 1, 2, 2, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 3, 4, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (3, 14) (Spot #0 (thương hiệu=0, tọa độ=(3, 14))) | 55 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (3, 14) (Spot #0 (thương hiệu=0, tọa độ=(3, 14))) | 53 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (3, 14) (Spot #0 (thương hiệu=0, tọa độ=(3, 14))) | 52 |
| 6-7 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 51 |
| 8-9 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 50 |
| 10-11 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 49 |
| 12-13 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 48 |
| 14-15 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến di chuyển đến (1, 14); hướng tới tọa độ (0, 14) (Spot #7 (thương hiệu=7, tọa độ=(0, 14))) | 46 |
| 16-17 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 45 |
| 18-19 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 44 |
| 20-21 | Di chuyển hướng 2 (`2`) | (0, 13) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới tọa độ (4, 12) (Spot #14 (thương hiệu=14, tọa độ=(4, 12))) | 43 |
| 22-23 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (4, 12) (Spot #14 (thương hiệu=14, tọa độ=(4, 12))) | 42 |
| 24-25 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (4, 12) (Spot #14 (thương hiệu=14, tọa độ=(4, 12))) | 40 |
| 26-27 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (4, 12) (Spot #14 (thương hiệu=14, tọa độ=(4, 12))) | 38 |
| 28-29 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 37 |
| 30-31 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 36 |
| 32 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 34 |
| 33 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 32 |
| 34 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 30 |
| 35-36 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (3, 6) (Spot #8 (thương hiệu=8, tọa độ=(3, 6))) | 28 |
| 37-40 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 26 |
| 41-42 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 25 |
| 43 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (4, 3) (Spot #4 (thương hiệu=4, tọa độ=(4, 3))) | 23 |
| 44 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 21 |
| 45-46 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 20 |
| 47-48 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (2, 4) (Spot #6 (thương hiệu=6, tọa độ=(2, 4))) | 19 |
| 49-50 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (2, 4) (Spot #6 (thương hiệu=6, tọa độ=(2, 4))) | 18 |
| 51 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 16 |
| 52-53 | Chờ 2 bước (`-2`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 16 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (3, 8) (ô=195)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 1, 0, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (3, 2) (Spot #3 (thương hiệu=3, tọa độ=(3, 2))) | 51 |
| 2-5 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (3, 2) (Spot #3 (thương hiệu=3, tọa độ=(3, 2))) | 49 |
| 6 | Di chuyển hướng 0 (`0`) | (4, 6) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (3, 2) (Spot #3 (thương hiệu=3, tọa độ=(3, 2))) | 47 |
| 7 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (3, 2) (Spot #3 (thương hiệu=3, tọa độ=(3, 2))) | 45 |
| 8 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (3, 2) (Spot #3 (thương hiệu=3, tọa độ=(3, 2))) | 43 |
| 9-10 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 42 |
| 11-12 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 41 |
| 13 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 39 |
| 14-15 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 38 |
| 16-17 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 36 |
| 18-19 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 34 |
| 20-21 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 32 |
| 22-23 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 30 |
| 24-25 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 28 |
| 26-27 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 26 |
| 28-29 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 24 |
| 30-31 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 22 |
| 32-33 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 20 |
| 34-35 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 18 |
| 36-37 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới tọa độ (16, 6) (Spot #15 (thương hiệu=15, tọa độ=(16, 6))) | 16 |
| 38-39 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 14 |
| 40-41 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (20, 6) (Spot #20 (thương hiệu=20, tọa độ=(20, 6))) | 13 |
| 42-44 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (20, 6) (Spot #20 (thương hiệu=20, tọa độ=(20, 6))) | 11 |
| 45-46 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (20, 6) (Spot #20 (thương hiệu=20, tọa độ=(20, 6))) | 10 |
| 47-48 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 9 |
| 49-53 | Chờ 5 bước (`-5`) | (20, 6) | (20, 6) | Dự kiến đứng yên tại (20, 6); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 9 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (3, 10) (ô=243)
- Nhiên liệu đầu ngày: 55
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #16 (thương hiệu=16, tọa độ=(19, 23))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 3, 3, 4, 3, 4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 4-5 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 6-7 | Di chuyển hướng 4 (`4`) | (2, 13) | (1, 14) | Dự kiến di chuyển đến (1, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 8-9 | Di chuyển hướng 3 (`3`) | (1, 14) | (2, 15) | Dự kiến di chuyển đến (2, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 10 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 11 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 12 | Di chuyển hướng 3 (`3`) | (2, 17) | (2, 18) | Dự kiến di chuyển đến (2, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 13 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 14 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến di chuyển đến (2, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 15 | Di chuyển hướng 2 (`2`) | (2, 20) | (3, 20) | Dự kiến di chuyển đến (3, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 16 | Di chuyển hướng 2 (`2`) | (3, 20) | (4, 20) | Dự kiến di chuyển đến (4, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 17 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến di chuyển đến (5, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 18 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến di chuyển đến (6, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 19 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 20 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 21 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 22 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 23 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến di chuyển đến (11, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 24 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến di chuyển đến (12, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 25 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 26 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 27 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 28 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 29 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 30 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến di chuyển đến (18, 21); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 31 | Di chuyển hướng 3 (`3`) | (18, 21) | (18, 22) | Dự kiến di chuyển đến (18, 22); hướng tới điểm hẹn của xe tuần tra #1 tại (19, 23) (Spot #16 (thương hiệu=16, tọa độ=(19, 23))) | 55 |
| 32-33 | Di chuyển hướng 3 (`3`) | (18, 22) | (19, 23) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (19, 23) | 55 |
| 34-53 | Chờ 20 bước (`-20`) | (19, 23) | (19, 23) | Dự kiến đứng yên tại (19, 23); điểm hẹn của xe tuần tra #1 tại (19, 23) | 55 |

