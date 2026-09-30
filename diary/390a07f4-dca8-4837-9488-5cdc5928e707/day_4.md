# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 58
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 4 | #4 | #6 | (17, 3) | 36 | 53 |
| 7 | #2 | #5 | (17, 5) | 47 | 53 |
| 10 | #2 | #5 | (16, 6) | 51 | 53 |
| 12 | #2 | #5 | (16, 7) | 51 | 53 |
| 14 | #2 | #5 | (15, 7) | 51 | 53 |
| 16 | #2 | #5 | (14, 7) | 51 | 53 |
| 18 | #2 | #5 | (13, 7) | 51 | 53 |
| 20 | #2 | #5 | (12, 7) | 51 | 53 |
| 22 | #2 | #5 | (11, 7) | 51 | 53 |
| 25 | #2 | #5 | (9, 7) | 49 | 53 |
| 28 | #2 | #5 | (7, 7) | 49 | 53 |
| 29 | #1 | #5 | (6, 7) | 1 | 53 |
| 30 | #2 | #5 | (6, 7) | 51 | 53 |
| 39 | #0 | #6 | (5, 13) | 0 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 13) (ô=343)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(6, 7))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(6, 7))
- Mảng hành động đã gửi server: `[-40, 3, 5, 5, 0, 5, 5, 1, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-39 | Chờ 40 bước (`-40`) | (5, 13) | (5, 13) | Dự kiến đứng yên tại (5, 13); hướng tới tọa độ (5, 13) | 53 |
| 40-41 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 52 |
| 42-43 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 51 |
| 44 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 49 |
| 45 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 13)) | 47 |
| 46-47 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (1, 13) (Spot #9 (thương hiệu=9, tọa độ=(1, 13))) | 46 |
| 48-49 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 13)) | 45 |
| 50-51 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (2, 10) (Spot #19 (thương hiệu=19, tọa độ=(2, 10))) | 44 |
| 52-53 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (2, 10) (Spot #19 (thương hiệu=19, tọa độ=(2, 10))) | 43 |
| 54-55 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 10)) | 41 |
| 56-57 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 40 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 6) (ô=165)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 2))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 2))
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 0, 0, 0, 3, 4, 4, 5, 2, 2, 3, 3, -4, 2, 2, 2, 3, 4, 1, 1, 0, 1, 1, 5, 5, 5, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (7, 6) (Spot #1 (thương hiệu=1, tọa độ=(7, 6))) | 21 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 19 |
| 3-4 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 18 |
| 5-6 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (5, 3) (Spot #5 (thương hiệu=5, tọa độ=(5, 3))) | 17 |
| 7-9 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (5, 3) (Spot #5 (thương hiệu=5, tọa độ=(5, 3))) | 15 |
| 10 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 3)) | 13 |
| 11-12 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 2)) | 12 |
| 13-14 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (3, 5) (Spot #23 (thương hiệu=23, tọa độ=(3, 5))) | 11 |
| 15-16 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (3, 5) (Spot #23 (thương hiệu=23, tọa độ=(3, 5))) | 10 |
| 17 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (3, 5) (Spot #23 (thương hiệu=23, tọa độ=(3, 5))) | 8 |
| 18-19 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 5)) | 7 |
| 20-21 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 6 |
| 22-23 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 5 |
| 24 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 3 |
| 25 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 1 |
| 26-29 | Chờ 4 bước (`-4`) | (6, 7) | (6, 7) | Dự kiến đứng yên tại (6, 7); hướng tới tọa độ (6, 7) | 53 |
| 30-31 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (9, 8) (Spot #11 (thương hiệu=11, tọa độ=(9, 8))) | 52 |
| 32-33 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (9, 8) (Spot #11 (thương hiệu=11, tọa độ=(9, 8))) | 50 |
| 34 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (9, 8) (Spot #11 (thương hiệu=11, tọa độ=(9, 8))) | 48 |
| 35-36 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 46 |
| 37-38 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 45 |
| 39-40 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới tọa độ (10, 5) (Spot #10 (thương hiệu=10, tọa độ=(10, 5))) | 44 |
| 41-42 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (10, 5) (Spot #10 (thương hiệu=10, tọa độ=(10, 5))) | 43 |
| 43 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (10, 5) (Spot #10 (thương hiệu=10, tọa độ=(10, 5))) | 41 |
| 44-45 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 40 |
| 46-47 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 39 |
| 48-49 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (7, 2) (Spot #15 (thương hiệu=15, tọa độ=(7, 2))) | 38 |
| 50-51 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (7, 2) (Spot #15 (thương hiệu=15, tọa độ=(7, 2))) | 36 |
| 52-53 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (7, 2) (Spot #15 (thương hiệu=15, tọa độ=(7, 2))) | 34 |
| 54-55 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (7, 2) (Spot #15 (thương hiệu=15, tọa độ=(7, 2))) | 32 |
| 56-57 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 31 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 2) (ô=70)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(7, 5))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(7, 5))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 2, 2, 2, 1, 1, 4, 4, 3, 4, 4, 0, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 50 |
| 2-4 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 48 |
| 5-6 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 7-9 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 10-11 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 12-13 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 14-15 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 16-17 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 20-21 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 22-23 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 51 |
| 24 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 25-26 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 51 |
| 27 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 28-29 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 53 |
| 30-31 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (10, 5) (Spot #10 (thương hiệu=10, tọa độ=(10, 5))) | 52 |
| 32 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (10, 5) (Spot #10 (thương hiệu=10, tọa độ=(10, 5))) | 50 |
| 33-34 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (10, 5) (Spot #10 (thương hiệu=10, tọa độ=(10, 5))) | 49 |
| 35 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (10, 5) (Spot #10 (thương hiệu=10, tọa độ=(10, 5))) | 47 |
| 36-37 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 46 |
| 38-39 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 45 |
| 40-41 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (9, 8) (Spot #11 (thương hiệu=11, tọa độ=(9, 8))) | 44 |
| 42-43 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (9, 8) (Spot #11 (thương hiệu=11, tọa độ=(9, 8))) | 43 |
| 44-45 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (9, 8) (Spot #11 (thương hiệu=11, tọa độ=(9, 8))) | 42 |
| 46 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 40 |
| 47-48 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 39 |
| 49-50 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (7, 5) (Spot #18 (thương hiệu=18, tọa độ=(7, 5))) | 38 |
| 51-53 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (7, 5) (Spot #18 (thương hiệu=18, tọa độ=(7, 5))) | 36 |
| 54 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (7, 5) (Spot #18 (thương hiệu=18, tọa độ=(7, 5))) | 34 |
| 55-56 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 33 |
| 57 | Chờ 1 bước (`-1`) | (7, 5) | (7, 5) | Dự kiến đứng yên tại (7, 5); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 33 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 8) (ô=217)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(5, 14))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(5, 14))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 4, 4, 4, 4, 5, 5, 1, 1, 1, 2, 3, 3, 3, 3, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 27 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 26 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 24 |
| 5-7 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 22 |
| 8-9 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 21 |
| 10-11 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 19 |
| 12-13 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 18 |
| 14-15 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (3, 13) (Spot #2 (thương hiệu=2, tọa độ=(3, 13))) | 17 |
| 16-17 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 13)) | 15 |
| 18-19 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (1, 13) (Spot #9 (thương hiệu=9, tọa độ=(1, 13))) | 14 |
| 20-21 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 13)) | 13 |
| 22-23 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (2, 10) (Spot #19 (thương hiệu=19, tọa độ=(2, 10))) | 12 |
| 24-25 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (2, 10) (Spot #19 (thương hiệu=19, tọa độ=(2, 10))) | 11 |
| 26-27 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 10)) | 9 |
| 28-29 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 8 |
| 30-31 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 7 |
| 32-33 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 6 |
| 34 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 4 |
| 35-36 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 3 |
| 37-57 | Chờ 21 bước (`-21`) | (5, 14) | (5, 14) | Dự kiến đứng yên tại (5, 14); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 3 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 2) (ô=70)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(18, 5))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(18, 5))
- Mảng hành động đã gửi server: `[5, 4, 3, 0, 0, 1, 0, 4, 5, 4, 3, 3, 4, 1, 2, 2, 3, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (17, 4) (Spot #3 (thương hiệu=3, tọa độ=(17, 4))) | 37 |
| 2-3 | Di chuyển hướng 4 (`4`) | (17, 2) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (17, 4) (Spot #3 (thương hiệu=3, tọa độ=(17, 4))) | 53 |
| 4-5 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 4)) | 52 |
| 6-7 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 51 |
| 8-9 | Di chuyển hướng 0 (`0`) | (17, 3) | (16, 2) | Dự kiến di chuyển đến (16, 2); hướng tới tọa độ (17, 1) (Spot #7 (thương hiệu=7, tọa độ=(17, 1))) | 50 |
| 10 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 1)) | 48 |
| 11-12 | Di chuyển hướng 0 (`0`) | (17, 1) | (16, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 0)) | 47 |
| 13-14 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến di chuyển đến (16, 1); hướng tới tọa độ (15, 1) (Spot #13 (thương hiệu=13, tọa độ=(15, 1))) | 46 |
| 15-17 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 1)) | 44 |
| 18-19 | Di chuyển hướng 4 (`4`) | (15, 1) | (14, 2) | Dự kiến di chuyển đến (14, 2); hướng tới tọa độ (15, 5) (Spot #25 (thương hiệu=25, tọa độ=(15, 5))) | 43 |
| 20 | Di chuyển hướng 3 (`3`) | (14, 2) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (15, 5) (Spot #25 (thương hiệu=25, tọa độ=(15, 5))) | 41 |
| 21 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (15, 5) (Spot #25 (thương hiệu=25, tọa độ=(15, 5))) | 39 |
| 22-23 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(15, 5)) | 38 |
| 24-25 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (18, 5) (Spot #14 (thương hiệu=14, tọa độ=(18, 5))) | 37 |
| 26-27 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (18, 5) (Spot #14 (thương hiệu=14, tọa độ=(18, 5))) | 36 |
| 28 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (18, 5) (Spot #14 (thương hiệu=14, tọa độ=(18, 5))) | 34 |
| 29-30 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(18, 5)) | 33 |
| 31-57 | Chờ 27 bước (`-27`) | (18, 5) | (18, 5) | Dự kiến đứng yên tại (18, 5); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(18, 5)) | 33 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (15, 1) (ô=41)
- Nhiên liệu đầu ngày: 53
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #0 (thương hiệu=0, tọa độ=(6, 7))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến di chuyển đến (15, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 2 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 3-4 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 5 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 6-8 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 9-10 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 11-12 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 17-18 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 23 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 24-25 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 26 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (6, 7) (Spot #0 (thương hiệu=0, tọa độ=(6, 7))) | 53 |
| 27-28 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (6, 7) | 53 |
| 29-57 | Chờ 29 bước (`-29`) | (6, 7) | (6, 7) | Dự kiến đứng yên tại (6, 7); điểm hẹn của xe tuần tra #1 tại (6, 7) | 53 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (17, 1) (ô=43)
- Nhiên liệu đầu ngày: 53
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=8, tọa độ=(5, 13))
- Mảng hành động đã gửi server: `[4, 3, 4, 3, 4, 4, 5, 5, 5, 5, 5, 5, 4, 4, 5, 4, 5, 5, 4, 3, 4, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến di chuyển đến (16, 2); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 2 | Di chuyển hướng 3 (`3`) | (16, 2) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 3-4 | Di chuyển hướng 4 (`4`) | (17, 3) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 5 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 6-8 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 9-10 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 11-12 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 17-18 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 23 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 24-25 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 28 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 29-30 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 31-32 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 33-36 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 37 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (5, 13) (Spot #8 (thương hiệu=8, tọa độ=(5, 13))) | 53 |
| 38 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (5, 13) | 53 |
| 39-57 | Chờ 19 bước (`-19`) | (5, 13) | (5, 13) | Dự kiến đứng yên tại (5, 13); điểm hẹn của xe tuần tra #0 tại (5, 13) | 53 |

