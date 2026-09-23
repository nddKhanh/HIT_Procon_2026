# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 53
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (24, 0) (ô=24)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(15, 7))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(15, 7))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 4, 4, 4, 4, 5, 4, 0, 5, 5, 5, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (24, 0) | (24, 1) | Dự kiến di chuyển đến (24, 1); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 20 |
| 2-3 | Di chuyển hướng 5 (`5`) | (24, 1) | (23, 1) | Dự kiến di chuyển đến (23, 1); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 19 |
| 4-5 | Di chuyển hướng 4 (`4`) | (23, 1) | (22, 2) | Dự kiến di chuyển đến (22, 2); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 18 |
| 6-7 | Di chuyển hướng 4 (`4`) | (22, 2) | (22, 3) | Dự kiến di chuyển đến (22, 3); hướng tới tọa độ (21, 4) (Spot #7 (thương hiệu=7, tọa độ=(21, 4))) | 17 |
| 8-9 | Di chuyển hướng 4 (`4`) | (22, 3) | (21, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(21, 4)) | 16 |
| 10-11 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến di chuyển đến (21, 5); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 15 |
| 12-14 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 13 |
| 15 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 11 |
| 16 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến di chuyển đến (19, 7); hướng tới tọa độ (18, 8) (Spot #0 (thương hiệu=0, tọa độ=(18, 8))) | 9 |
| 17 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(18, 8)) | 7 |
| 18-19 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới tọa độ (15, 7) (Spot #19 (thương hiệu=19, tọa độ=(15, 7))) | 6 |
| 20-21 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (15, 7) (Spot #19 (thương hiệu=19, tọa độ=(15, 7))) | 5 |
| 22 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (15, 7) (Spot #19 (thương hiệu=19, tọa độ=(15, 7))) | 3 |
| 23-24 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 7)) | 2 |
| 25-52 | Chờ 28 bước (`-28`) | (15, 7) | (15, 7) | Dự kiến đứng yên tại (15, 7); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 7)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (4, 19) (ô=479)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(10, 25))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(10, 25))
- Mảng hành động đã gửi server: `[5, 5, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 4, 4, 4, 4, 3, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 22 |
| 2-3 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 19)) | 21 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 20 |
| 6-7 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 19 |
| 8-9 | Di chuyển hướng 2 (`2`) | (4, 19) | (5, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 19)) | 18 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 19) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 17 |
| 12 | Di chuyển hướng 3 (`3`) | (6, 19) | (6, 20) | Dự kiến di chuyển đến (6, 20); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 15 |
| 13 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 13 |
| 14-15 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 12 |
| 16-17 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 11 |
| 18-20 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (11, 20) (Spot #4 (thương hiệu=4, tọa độ=(11, 20))) | 9 |
| 21 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 20)) | 7 |
| 22-23 | Di chuyển hướng 4 (`4`) | (11, 20) | (11, 21) | Dự kiến di chuyển đến (11, 21); hướng tới tọa độ (10, 25) (Spot #23 (thương hiệu=23, tọa độ=(10, 25))) | 6 |
| 24-25 | Di chuyển hướng 4 (`4`) | (11, 21) | (10, 22) | Dự kiến di chuyển đến (10, 22); hướng tới tọa độ (10, 25) (Spot #23 (thương hiệu=23, tọa độ=(10, 25))) | 5 |
| 26-27 | Di chuyển hướng 4 (`4`) | (10, 22) | (10, 23) | Dự kiến di chuyển đến (10, 23); hướng tới tọa độ (10, 25) (Spot #23 (thương hiệu=23, tọa độ=(10, 25))) | 4 |
| 28 | Di chuyển hướng 4 (`4`) | (10, 23) | (9, 24) | Dự kiến di chuyển đến (9, 24); hướng tới tọa độ (10, 25) (Spot #23 (thương hiệu=23, tọa độ=(10, 25))) | 2 |
| 29 | Di chuyển hướng 3 (`3`) | (9, 24) | (10, 25) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 25)) | 0 |
| 30-52 | Chờ 23 bước (`-23`) | (10, 25) | (10, 25) | Dự kiến đứng yên tại (10, 25); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 25)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 9) (ô=243)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(10, 6))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(10, 6))
- Mảng hành động đã gửi server: `[1, 4, 5, 5, 5, 5, 5, 5, 0, 5, 5, 5, 0, 2, 2, 1, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(18, 8)) | 23 |
| 2-3 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 22 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 21 |
| 6-7 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến di chuyển đến (16, 9); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 20 |
| 8-9 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 19 |
| 10-11 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 18 |
| 12-13 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 17 |
| 14 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 15 |
| 15 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 13 |
| 16-17 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 12 |
| 18 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(9, 8)) | 10 |
| 19-20 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 9 |
| 21 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 7)) | 7 |
| 22-23 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (10, 6) (Spot #11 (thương hiệu=11, tọa độ=(10, 6))) | 6 |
| 24-25 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (10, 6) (Spot #11 (thương hiệu=11, tọa độ=(10, 6))) | 5 |
| 26 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 6)) | 3 |
| 27-52 | Chờ 26 bước (`-26`) | (10, 6) | (10, 6) | Dự kiến đứng yên tại (10, 6); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 6)) | 3 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 2) (ô=55)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(7, 10))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(7, 10))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 4, 4, 4, 4, 5, 2, 1, 2, 2, 2, 2, 3, 3, 2, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 22 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 21 |
| 4-5 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 20 |
| 6-7 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 19 |
| 8-9 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 18 |
| 10-11 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 17 |
| 12-13 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 16 |
| 14 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 9) (Spot #5 (thương hiệu=5, tọa độ=(0, 9))) | 14 |
| 15 | Di chuyển hướng 5 (`5`) | (1, 9) | (0, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 9)) | 12 |
| 16-17 | Di chuyển hướng 2 (`2`) | (0, 9) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 11 |
| 18 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 9 |
| 19 | Di chuyển hướng 2 (`2`) | (1, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 7 |
| 20-21 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (4, 8) (Spot #18 (thương hiệu=18, tọa độ=(4, 8))) | 6 |
| 22-23 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(4, 8)) | 5 |
| 24-25 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (7, 10) (Spot #21 (thương hiệu=21, tọa độ=(7, 10))) | 4 |
| 26-27 | Di chuyển hướng 3 (`3`) | (5, 8) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (7, 10) (Spot #21 (thương hiệu=21, tọa độ=(7, 10))) | 3 |
| 28-29 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (7, 10) (Spot #21 (thương hiệu=21, tọa độ=(7, 10))) | 2 |
| 30-31 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(7, 10)) | 1 |
| 32-52 | Chờ 21 bước (`-21`) | (7, 10) | (7, 10) | Dự kiến đứng yên tại (7, 10); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(7, 10)) | 1 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (6, 0) (ô=6)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(4, 0))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(4, 0))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 3, 3, 4, 3, 2, 4, 4, 5, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 0) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 24 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 23 |
| 4-5 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 22 |
| 6-7 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 21 |
| 8-9 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 20 |
| 10-11 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (8, 7) (Spot #6 (thương hiệu=6, tọa độ=(8, 7))) | 19 |
| 12-13 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 7)) | 18 |
| 14-15 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (9, 8) (Spot #16 (thương hiệu=16, tọa độ=(9, 8))) | 17 |
| 16 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(9, 8)) | 15 |
| 17-18 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (7, 10) (Spot #21 (thương hiệu=21, tọa độ=(7, 10))) | 14 |
| 19 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (7, 10) (Spot #21 (thương hiệu=21, tọa độ=(7, 10))) | 12 |
| 20-21 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(7, 10)) | 11 |
| 22-23 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (4, 0) (Spot #22 (thương hiệu=22, tọa độ=(4, 0))) | 10 |
| 24-25 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (4, 0) (Spot #22 (thương hiệu=22, tọa độ=(4, 0))) | 9 |
| 26-27 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (4, 0) (Spot #22 (thương hiệu=22, tọa độ=(4, 0))) | 8 |
| 28-29 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (4, 0) (Spot #22 (thương hiệu=22, tọa độ=(4, 0))) | 7 |
| 30-31 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (4, 0) (Spot #22 (thương hiệu=22, tọa độ=(4, 0))) | 6 |
| 32-33 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (4, 0) (Spot #22 (thương hiệu=22, tọa độ=(4, 0))) | 5 |
| 34-36 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (4, 0) (Spot #22 (thương hiệu=22, tọa độ=(4, 0))) | 3 |
| 37-38 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (4, 0) (Spot #22 (thương hiệu=22, tọa độ=(4, 0))) | 2 |
| 39-40 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (4, 0) (Spot #22 (thương hiệu=22, tọa độ=(4, 0))) | 1 |
| 41-42 | Di chuyển hướng 1 (`1`) | (4, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(4, 0)) | 0 |
| 43-52 | Chờ 10 bước (`-10`) | (4, 0) | (4, 0) | Dự kiến đứng yên tại (4, 0); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(4, 0)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (20, 16) (ô=420)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=25, tọa độ=(24, 18))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=25, tọa độ=(24, 18))
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 4, 4, 2, 3, 1, 1, 1, 1, 1, 0, 1, 1, 1, 4, 3, 3, 3, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 16) | (20, 17) | Dự kiến di chuyển đến (20, 17); hướng tới tọa độ (18, 22) (Spot #8 (thương hiệu=8, tọa độ=(18, 22))) | 30 |
| 2 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến di chuyển đến (19, 18); hướng tới tọa độ (18, 22) (Spot #8 (thương hiệu=8, tọa độ=(18, 22))) | 28 |
| 3-4 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến di chuyển đến (20, 19); hướng tới tọa độ (18, 22) (Spot #8 (thương hiệu=8, tọa độ=(18, 22))) | 27 |
| 5-6 | Di chuyển hướng 4 (`4`) | (20, 19) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới tọa độ (18, 22) (Spot #8 (thương hiệu=8, tọa độ=(18, 22))) | 26 |
| 7-9 | Di chuyển hướng 4 (`4`) | (19, 20) | (19, 21) | Dự kiến di chuyển đến (19, 21); hướng tới tọa độ (18, 22) (Spot #8 (thương hiệu=8, tọa độ=(18, 22))) | 24 |
| 10-11 | Di chuyển hướng 4 (`4`) | (19, 21) | (18, 22) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(18, 22)) | 23 |
| 12-13 | Di chuyển hướng 2 (`2`) | (18, 22) | (19, 22) | Dự kiến di chuyển đến (19, 22); hướng tới tọa độ (20, 23) (Spot #9 (thương hiệu=9, tọa độ=(20, 23))) | 22 |
| 14-15 | Di chuyển hướng 3 (`3`) | (19, 22) | (20, 23) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(20, 23)) | 21 |
| 16-17 | Di chuyển hướng 1 (`1`) | (20, 23) | (20, 22) | Dự kiến di chuyển đến (20, 22); hướng tới tọa độ (21, 20) (Spot #15 (thương hiệu=15, tọa độ=(21, 20))) | 20 |
| 18-19 | Di chuyển hướng 1 (`1`) | (20, 22) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (21, 20) (Spot #15 (thương hiệu=15, tọa độ=(21, 20))) | 19 |
| 20 | Di chuyển hướng 1 (`1`) | (21, 21) | (21, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(21, 20)) | 17 |
| 21-22 | Di chuyển hướng 1 (`1`) | (21, 20) | (22, 19) | Dự kiến di chuyển đến (22, 19); hướng tới tọa độ (22, 16) (Spot #14 (thương hiệu=14, tọa độ=(22, 16))) | 16 |
| 23-24 | Di chuyển hướng 1 (`1`) | (22, 19) | (22, 18) | Dự kiến di chuyển đến (22, 18); hướng tới tọa độ (22, 16) (Spot #14 (thương hiệu=14, tọa độ=(22, 16))) | 15 |
| 25-26 | Di chuyển hướng 0 (`0`) | (22, 18) | (22, 17) | Dự kiến di chuyển đến (22, 17); hướng tới tọa độ (22, 16) (Spot #14 (thương hiệu=14, tọa độ=(22, 16))) | 14 |
| 27-28 | Di chuyển hướng 1 (`1`) | (22, 17) | (22, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(22, 16)) | 13 |
| 29-30 | Di chuyển hướng 1 (`1`) | (22, 16) | (23, 15) | Dự kiến di chuyển đến (23, 15); hướng tới tọa độ (23, 14) (Spot #13 (thương hiệu=13, tọa độ=(23, 14))) | 12 |
| 31-32 | Di chuyển hướng 1 (`1`) | (23, 15) | (23, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(23, 14)) | 11 |
| 33-34 | Di chuyển hướng 4 (`4`) | (23, 14) | (23, 15) | Dự kiến di chuyển đến (23, 15); hướng tới tọa độ (24, 18) (Spot #25 (thương hiệu=25, tọa độ=(24, 18))) | 10 |
| 35-36 | Di chuyển hướng 3 (`3`) | (23, 15) | (23, 16) | Dự kiến di chuyển đến (23, 16); hướng tới tọa độ (24, 18) (Spot #25 (thương hiệu=25, tọa độ=(24, 18))) | 9 |
| 37-38 | Di chuyển hướng 3 (`3`) | (23, 16) | (24, 17) | Dự kiến di chuyển đến (24, 17); hướng tới tọa độ (24, 18) (Spot #25 (thương hiệu=25, tọa độ=(24, 18))) | 8 |
| 39-40 | Di chuyển hướng 3 (`3`) | (24, 17) | (24, 18) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(24, 18)) | 7 |
| 41-52 | Chờ 12 bước (`-12`) | (24, 18) | (24, 18) | Dự kiến đứng yên tại (24, 18); mục tiêu Spot #25 (thương hiệu=25, tọa độ=(24, 18)) | 7 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (10, 25) (ô=635)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(2, 19))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(2, 19))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 5, 0, 5, 5, 5, 5, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 25) | (9, 24) | Dự kiến di chuyển đến (9, 24); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 17 |
| 2 | Di chuyển hướng 0 (`0`) | (9, 24) | (9, 23) | Dự kiến di chuyển đến (9, 23); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 15 |
| 3 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 13 |
| 4-5 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến di chuyển đến (8, 21); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 12 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 21) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 11 |
| 8-9 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến di chuyển đến (6, 20); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 10 |
| 10 | Di chuyển hướng 0 (`0`) | (6, 20) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (5, 19) (Spot #2 (thương hiệu=2, tọa độ=(5, 19))) | 8 |
| 11 | Di chuyển hướng 5 (`5`) | (6, 19) | (5, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 19)) | 6 |
| 12-13 | Di chuyển hướng 5 (`5`) | (5, 19) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 5 |
| 14-15 | Di chuyển hướng 5 (`5`) | (4, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (2, 19) (Spot #1 (thương hiệu=1, tọa độ=(2, 19))) | 4 |
| 16-17 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 19)) | 3 |
| 18-52 | Chờ 35 bước (`-35`) | (2, 19) | (2, 19) | Dự kiến đứng yên tại (2, 19); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 19)) | 3 |

### Xe #7 - Tuần tra

- Vị trí đầu ngày: (13, 3) (ô=88)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=24, tọa độ=(18, 0))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=24, tọa độ=(18, 0))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 5, 5, 5, 5, 5, 5, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 25 |
| 2 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 23 |
| 3-4 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 22 |
| 5-6 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 21 |
| 7-8 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 20 |
| 9 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến di chuyển đến (18, 2); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 18 |
| 10 | Di chuyển hướng 2 (`2`) | (18, 2) | (19, 2) | Dự kiến di chuyển đến (19, 2); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 16 |
| 11-12 | Di chuyển hướng 2 (`2`) | (19, 2) | (20, 2) | Dự kiến di chuyển đến (20, 2); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 15 |
| 13-14 | Di chuyển hướng 2 (`2`) | (20, 2) | (21, 2) | Dự kiến di chuyển đến (21, 2); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 14 |
| 15 | Di chuyển hướng 1 (`1`) | (21, 2) | (22, 1) | Dự kiến di chuyển đến (22, 1); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 12 |
| 16 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến di chuyển đến (23, 1); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 10 |
| 17-18 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến di chuyển đến (24, 1); hướng tới tọa độ (24, 0) (Spot #3 (thương hiệu=3, tọa độ=(24, 0))) | 9 |
| 19-20 | Di chuyển hướng 1 (`1`) | (24, 1) | (24, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(24, 0)) | 8 |
| 21-22 | Di chuyển hướng 5 (`5`) | (24, 0) | (23, 0) | Dự kiến di chuyển đến (23, 0); hướng tới tọa độ (18, 0) (Spot #24 (thương hiệu=24, tọa độ=(18, 0))) | 7 |
| 23-24 | Di chuyển hướng 5 (`5`) | (23, 0) | (22, 0) | Dự kiến di chuyển đến (22, 0); hướng tới tọa độ (18, 0) (Spot #24 (thương hiệu=24, tọa độ=(18, 0))) | 6 |
| 25-26 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến di chuyển đến (21, 0); hướng tới tọa độ (18, 0) (Spot #24 (thương hiệu=24, tọa độ=(18, 0))) | 5 |
| 27-28 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến di chuyển đến (20, 0); hướng tới tọa độ (18, 0) (Spot #24 (thương hiệu=24, tọa độ=(18, 0))) | 4 |
| 29-31 | Di chuyển hướng 5 (`5`) | (20, 0) | (19, 0) | Dự kiến di chuyển đến (19, 0); hướng tới tọa độ (18, 0) (Spot #24 (thương hiệu=24, tọa độ=(18, 0))) | 2 |
| 32-33 | Di chuyển hướng 5 (`5`) | (19, 0) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 1 |
| 34-52 | Chờ 19 bước (`-19`) | (18, 0) | (18, 0) | Dự kiến đứng yên tại (18, 0); mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 1 |

