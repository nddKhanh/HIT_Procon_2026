# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 56
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (19, 21) (ô=523)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=13, tọa độ=(22, 22))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=13, tọa độ=(22, 22))
- Mảng hành động đã gửi server: `[0, 4, 5, 5, 2, 2, 2, 2, 2, 3, 2, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới tọa độ (19, 21) | 17 |
| 3-5 | Di chuyển hướng 4 (`4`) | (18, 20) | (18, 21) | Dự kiến di chuyển đến (18, 21); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 15 |
| 6-7 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến di chuyển đến (17, 21); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 14 |
| 8 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 12 |
| 9-10 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến di chuyển đến (17, 21); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 11 |
| 11 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến di chuyển đến (18, 21); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 9 |
| 12-13 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến di chuyển đến (19, 21); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 8 |
| 14-16 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 6 |
| 17 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 4 |
| 18 | Di chuyển hướng 3 (`3`) | (21, 21) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 2 |
| 19 | Di chuyển hướng 2 (`2`) | (21, 22) | (22, 22) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=13, tọa độ=(22, 22)) | 0 |
| 20-55 | Chờ 36 bước (`-36`) | (22, 22) | (22, 22) | Dự kiến đứng yên tại (22, 22); mục tiêu Spot #19 (thương hiệu=13, tọa độ=(22, 22)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 23) (ô=567)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=4, tọa độ=(3, 16))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=4, tọa độ=(3, 16))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 5, 5, 5, 0, 5, 5, 5, 0, 0, 5, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 22 |
| 2 | Di chuyển hướng 0 (`0`) | (14, 22) | (14, 21) | Dự kiến di chuyển đến (14, 21); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 20 |
| 3-4 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 19 |
| 5-6 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 18 |
| 7-8 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 17 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 16 |
| 11-12 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến di chuyển đến (10, 19); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 15 |
| 13 | Di chuyển hướng 5 (`5`) | (10, 19) | (9, 19) | Dự kiến di chuyển đến (9, 19); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 13 |
| 14 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến di chuyển đến (8, 18); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 11 |
| 15-16 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 10 |
| 17-18 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến di chuyển đến (6, 18); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 9 |
| 19-20 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 8 |
| 21-22 | Di chuyển hướng 0 (`0`) | (5, 18) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 7 |
| 23 | Di chuyển hướng 0 (`0`) | (5, 17) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 5 |
| 24 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 3 |
| 25-55 | Chờ 31 bước (`-31`) | (3, 16) | (3, 16) | Dự kiến đứng yên tại (3, 16); mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 4) (ô=110)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=8, tọa độ=(23, 4))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=8, tọa độ=(23, 4))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 3, 2, 1, 1, 2, 2, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 18 |
| 2 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 16 |
| 3-5 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 14 |
| 6-7 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 13 |
| 8-9 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến di chuyển đến (19, 5); hướng tới tọa độ (21, 4) (Spot #10 (thương hiệu=7, tọa độ=(21, 4))) | 12 |
| 10 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (21, 4) (Spot #10 (thương hiệu=7, tọa độ=(21, 4))) | 10 |
| 11 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (21, 4) (Spot #10 (thương hiệu=7, tọa độ=(21, 4))) | 8 |
| 12 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến di chuyển đến (21, 5); hướng tới tọa độ (21, 4) (Spot #10 (thương hiệu=7, tọa độ=(21, 4))) | 6 |
| 13 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 4 |
| 14-15 | Di chuyển hướng 2 (`2`) | (21, 4) | (22, 4) | Dự kiến di chuyển đến (22, 4); hướng tới tọa độ (23, 4) (Spot #12 (thương hiệu=8, tọa độ=(23, 4))) | 3 |
| 16 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 1 |
| 17-55 | Chờ 39 bước (`-39`) | (23, 4) | (23, 4) | Dự kiến đứng yên tại (23, 4); mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 1 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=368)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=15, tọa độ=(4, 23))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=15, tọa độ=(4, 23))
- Mảng hành động đã gửi server: `[0, 3, 3, 3, 3, 4, 4, 4, 3, 3, 5, 5, 5, 5, 5, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (8, 15) | 24 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 23 |
| 4-5 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 22 |
| 6-7 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (8, 20) (Spot #8 (thương hiệu=5, tọa độ=(8, 20))) | 21 |
| 8-9 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới tọa độ (8, 20) (Spot #8 (thương hiệu=5, tọa độ=(8, 20))) | 20 |
| 10 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến di chuyển đến (9, 19); hướng tới tọa độ (8, 20) (Spot #8 (thương hiệu=5, tọa độ=(8, 20))) | 18 |
| 11 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 16 |
| 12-13 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến di chuyển đến (8, 21); hướng tới tọa độ (9, 23) (Spot #22 (thương hiệu=16, tọa độ=(9, 23))) | 15 |
| 14 | Di chuyển hướng 3 (`3`) | (8, 21) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (9, 23) (Spot #22 (thương hiệu=16, tọa độ=(9, 23))) | 13 |
| 15 | Di chuyển hướng 3 (`3`) | (8, 22) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 11 |
| 16-17 | Di chuyển hướng 5 (`5`) | (9, 23) | (8, 23) | Dự kiến di chuyển đến (8, 23); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 10 |
| 18-20 | Di chuyển hướng 5 (`5`) | (8, 23) | (7, 23) | Dự kiến di chuyển đến (7, 23); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 8 |
| 21 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến di chuyển đến (6, 23); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 6 |
| 22 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến di chuyển đến (5, 23); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 4 |
| 23 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 2 |
| 24-55 | Chờ 32 bước (`-32`) | (4, 23) | (4, 23) | Dự kiến đứng yên tại (4, 23); mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 2 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 0) (ô=4)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 0, 3, 4, 4, 4, 3, 4, 3, 3, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 0) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 26 |
| 2-4 | Di chuyển hướng 4 (`4`) | (4, 1) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 24 |
| 5 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 22 |
| 6 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 20 |
| 7 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 1)) | 18 |
| 8-9 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 17 |
| 10 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 15 |
| 11-12 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 14 |
| 13-14 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 13 |
| 15-16 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 12 |
| 17 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến di chuyển đến (0, 7); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 10 |
| 18 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến di chuyển đến (0, 8); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 8 |
| 19 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 6 |
| 20-55 | Chờ 36 bước (`-36`) | (1, 9) | (1, 9) | Dự kiến đứng yên tại (1, 9); mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 6 |

