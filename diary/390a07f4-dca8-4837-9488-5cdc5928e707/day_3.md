# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 55
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 6 | #3 | #6 | (7, 6) | 26 | 53 |
| 8 | #1 | #5 | (4, 11) | 31 | 53 |
| 33 | #4 | #6 | (17, 1) | 0 | 53 |
| 43 | #2 | #5 | (15, 1) | 0 | 53 |
| 51 | #2 | #6 | (17, 1) | 49 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 6) (ô=163)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(5, 13))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(5, 13))
- Mảng hành động đã gửi server: `[5, 4, 1, 1, 1, 0, 1, 4, 3, 2, 2, 2, 4, 4, 4, 3, 4, 4, 5, 5, 5, 4, 3, 4, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 33 |
| 2 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 31 |
| 3-4 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (7, 2) (Spot #15 (thương hiệu=15, tọa độ=(7, 2))) | 30 |
| 5 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (7, 2) (Spot #15 (thương hiệu=15, tọa độ=(7, 2))) | 28 |
| 6-7 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (7, 2) (Spot #15 (thương hiệu=15, tọa độ=(7, 2))) | 27 |
| 8-9 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (7, 2) (Spot #15 (thương hiệu=15, tọa độ=(7, 2))) | 25 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 24 |
| 12-13 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (10, 4) (Spot #4 (thương hiệu=4, tọa độ=(10, 4))) | 23 |
| 14-15 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (10, 4) (Spot #4 (thương hiệu=4, tọa độ=(10, 4))) | 22 |
| 16-17 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (10, 4) (Spot #4 (thương hiệu=4, tọa độ=(10, 4))) | 20 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (10, 4) (Spot #4 (thương hiệu=4, tọa độ=(10, 4))) | 18 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 16 |
| 22-23 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 15 |
| 24-25 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 14 |
| 26-27 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (9, 8) (Spot #11 (thương hiệu=11, tọa độ=(9, 8))) | 13 |
| 28-29 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 11 |
| 30-31 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 10 |
| 32-33 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 9 |
| 34-35 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 8 |
| 36-37 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 7 |
| 38-39 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 6 |
| 40-41 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 4 |
| 42 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 2 |
| 43 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 0 |
| 44-54 | Chờ 11 bước (`-11`) | (5, 13) | (5, 13) | Dự kiến đứng yên tại (5, 13); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 10) (ô=267)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(9, 6))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(9, 6))
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 4, 4, 2, 2, 3, 5, 5, 0, 5, 5, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 1, 0, 1, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 36 |
| 2-3 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 35 |
| 4-5 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 33 |
| 6 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 31 |
| 7-8 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 52 |
| 9-10 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 13)) | 50 |
| 11-12 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 49 |
| 13-15 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 47 |
| 16-17 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 46 |
| 18-19 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (1, 13) (Spot #9 (thương hiệu=9, tọa độ=(1, 13))) | 45 |
| 20 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (1, 13) (Spot #9 (thương hiệu=9, tọa độ=(1, 13))) | 43 |
| 21-22 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới tọa độ (1, 13) (Spot #9 (thương hiệu=9, tọa độ=(1, 13))) | 41 |
| 23-24 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (1, 13) (Spot #9 (thương hiệu=9, tọa độ=(1, 13))) | 40 |
| 25-26 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 13)) | 39 |
| 27-28 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (2, 10) (Spot #19 (thương hiệu=19, tọa độ=(2, 10))) | 38 |
| 29-30 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (2, 10) (Spot #19 (thương hiệu=19, tọa độ=(2, 10))) | 37 |
| 31-32 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 10)) | 35 |
| 33-34 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (9, 9) (Spot #22 (thương hiệu=22, tọa độ=(9, 9))) | 34 |
| 35-36 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (9, 9) (Spot #22 (thương hiệu=22, tọa độ=(9, 9))) | 33 |
| 37-38 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (9, 9) (Spot #22 (thương hiệu=22, tọa độ=(9, 9))) | 32 |
| 39-40 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (9, 9) (Spot #22 (thương hiệu=22, tọa độ=(9, 9))) | 30 |
| 41-42 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (9, 9) (Spot #22 (thương hiệu=22, tọa độ=(9, 9))) | 29 |
| 43-44 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (9, 9) (Spot #22 (thương hiệu=22, tọa độ=(9, 9))) | 28 |
| 45 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 26 |
| 46-47 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 25 |
| 48-49 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (9, 6) (Spot #21 (thương hiệu=21, tọa độ=(9, 6))) | 24 |
| 50-51 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 22 |
| 52-54 | Chờ 3 bước (`-3`) | (9, 6) | (9, 6) | Dự kiến đứng yên tại (9, 6); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 22 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 1) (ô=41)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(18, 2))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(18, 2))
- Mảng hành động đã gửi server: `[-44, 2, 1, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-43 | Chờ 44 bước (`-44`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); hướng tới tọa độ (15, 1) | 53 |
| 44-45 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến di chuyển đến (16, 1); hướng tới tọa độ (16, 0) (Spot #24 (thương hiệu=24, tọa độ=(16, 0))) | 52 |
| 46-48 | Di chuyển hướng 1 (`1`) | (16, 1) | (16, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 0)) | 50 |
| 49-50 | Di chuyển hướng 3 (`3`) | (16, 0) | (17, 1) | Dự kiến di chuyển đến (17, 1); hướng tới tọa độ (17, 2) (Spot #16 (thương hiệu=16, tọa độ=(17, 2))) | 53 |
| 51-52 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 2)) | 52 |
| 53-54 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 2)) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 5) (ô=140)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(9, 8))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(9, 8))
- Mảng hành động đã gửi server: `[4, 5, 5, 0, 5, 0, 0, 0, 3, 4, 4, 5, 2, 2, 3, 3, 2, 3, 3, 2, 1, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (7, 6) (Spot #1 (thương hiệu=1, tọa độ=(7, 6))) | 29 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (7, 6) (Spot #1 (thương hiệu=1, tọa độ=(7, 6))) | 28 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 26 |
| 5-6 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 52 |
| 7-8 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (5, 3) (Spot #5 (thương hiệu=5, tọa độ=(5, 3))) | 51 |
| 9-11 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (5, 3) (Spot #5 (thương hiệu=5, tọa độ=(5, 3))) | 49 |
| 12 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 3)) | 47 |
| 13-14 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 2)) | 46 |
| 15-16 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (3, 5) (Spot #23 (thương hiệu=23, tọa độ=(3, 5))) | 45 |
| 17-18 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (3, 5) (Spot #23 (thương hiệu=23, tọa độ=(3, 5))) | 44 |
| 19 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (3, 5) (Spot #23 (thương hiệu=23, tọa độ=(3, 5))) | 42 |
| 20-21 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 5)) | 41 |
| 22-23 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 40 |
| 24-25 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 39 |
| 26 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 37 |
| 27 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 35 |
| 28-29 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (9, 9) (Spot #22 (thương hiệu=22, tọa độ=(9, 9))) | 34 |
| 30-31 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (9, 9) (Spot #22 (thương hiệu=22, tọa độ=(9, 9))) | 32 |
| 32-33 | Di chuyển hướng 3 (`3`) | (7, 8) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (9, 9) (Spot #22 (thương hiệu=22, tọa độ=(9, 9))) | 31 |
| 34 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 29 |
| 35-36 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 28 |
| 37-54 | Chờ 18 bước (`-18`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 28 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 1) (ô=41)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(18, 2))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(18, 2))
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 0, 1, 0, -23, 4, 4, 4, 4, 2, 2, 2, 0, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến di chuyển đến (15, 2); hướng tới tọa độ (17, 4) (Spot #3 (thương hiệu=3, tọa độ=(17, 4))) | 9 |
| 2 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (17, 4) (Spot #3 (thương hiệu=3, tọa độ=(17, 4))) | 7 |
| 3 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (17, 4) (Spot #3 (thương hiệu=3, tọa độ=(17, 4))) | 5 |
| 4 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 4)) | 3 |
| 5-6 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (17, 2) (Spot #16 (thương hiệu=16, tọa độ=(17, 2))) | 2 |
| 7-8 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 2)) | 1 |
| 9-10 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 1)) | 0 |
| 11-33 | Chờ 23 bước (`-23`) | (17, 1) | (17, 1) | Dự kiến đứng yên tại (17, 1); hướng tới tọa độ (17, 1) | 53 |
| 34-35 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến di chuyển đến (16, 2); hướng tới tọa độ (15, 5) (Spot #25 (thương hiệu=25, tọa độ=(15, 5))) | 52 |
| 36 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (15, 5) (Spot #25 (thương hiệu=25, tọa độ=(15, 5))) | 50 |
| 37 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (15, 5) (Spot #25 (thương hiệu=25, tọa độ=(15, 5))) | 48 |
| 38-39 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(15, 5)) | 47 |
| 40-41 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới tọa độ (18, 5) (Spot #14 (thương hiệu=14, tọa độ=(18, 5))) | 46 |
| 42-43 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (18, 5) (Spot #14 (thương hiệu=14, tọa độ=(18, 5))) | 44 |
| 44-46 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(18, 5)) | 42 |
| 47-48 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (18, 2) (Spot #20 (thương hiệu=20, tọa độ=(18, 2))) | 41 |
| 49-50 | Di chuyển hướng 1 (`1`) | (17, 4) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới tọa độ (18, 2) (Spot #20 (thương hiệu=20, tọa độ=(18, 2))) | 40 |
| 51-53 | Di chuyển hướng 1 (`1`) | (18, 3) | (18, 2) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 2)) | 38 |
| 54 | Chờ 1 bước (`-1`) | (18, 2) | (18, 2) | Dự kiến đứng yên tại (18, 2); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 2)) | 38 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (1, 13) (ô=339)
- Nhiên liệu đầu ngày: 53
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #13 (thương hiệu=13, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 0, 1, 0, 0, 0, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 4-5 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 6-7 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 8-9 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 10 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 11-12 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 15-16 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 17 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 18-19 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 22-23 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 24-25 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 26-27 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 28-29 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 30-31 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 32-33 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 34-35 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 36-37 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 38-39 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 40 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 41 | Di chuyển hướng 0 (`0`) | (16, 3) | (15, 2) | Dự kiến di chuyển đến (15, 2); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 53 |
| 42 | Di chuyển hướng 0 (`0`) | (15, 2) | (15, 1) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (15, 1) | 53 |
| 43-54 | Chờ 12 bước (`-12`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); điểm hẹn của xe tuần tra #2 tại (15, 1) | 53 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (6, 4) (ô=110)
- Nhiên liệu đầu ngày: 53
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #7 (thương hiệu=7, tọa độ=(17, 1))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 2, 3, 2, 2, 2, 2, 1, 0, 1, 0, 1, 1, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 4-5 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 6-7 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 8 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 9-10 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 11-13 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 14-15 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 18-19 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 20-21 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 22-23 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 24-25 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 26-27 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 28-29 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 30 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 31 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến di chuyển đến (16, 2); hướng tới điểm hẹn của xe tuần tra #4 tại (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 53 |
| 32 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (17, 1) | 53 |
| 33-54 | Chờ 22 bước (`-22`) | (17, 1) | (17, 1) | Dự kiến đứng yên tại (17, 1); điểm hẹn của xe tuần tra #4 tại (17, 1) | 53 |

