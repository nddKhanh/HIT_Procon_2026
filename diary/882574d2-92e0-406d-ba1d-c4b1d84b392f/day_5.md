# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 56
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 9 | #1 | #7 | (12, 17) | 21 | 53 |
| 12 | #0 | #6 | (4, 4) | 0 | 53 |
| 26 | #3 | #7 | (2, 14) | 0 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(9, 6))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(9, 6))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 2, 3, -1, 2, 1, 2, 3, 3, 4, 4, 4, 3, 4, 5, 5, 5, 5, 5, 5, 2, 2, 1, 2, 2, 2, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến di chuyển đến (1, 0); hướng tới tọa độ (4, 4) (Spot #0 (thương hiệu=0, tọa độ=(4, 4))) | 7 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (4, 4) (Spot #0 (thương hiệu=0, tọa độ=(4, 4))) | 6 |
| 4-6 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (4, 4) (Spot #0 (thương hiệu=0, tọa độ=(4, 4))) | 4 |
| 7-8 | Di chuyển hướng 3 (`3`) | (2, 2) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (4, 4) (Spot #0 (thương hiệu=0, tọa độ=(4, 4))) | 3 |
| 9 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (4, 4) (Spot #0 (thương hiệu=0, tọa độ=(4, 4))) | 1 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 4)) | 53 |
| 12 | Chờ 1 bước (`-1`) | (4, 4) | (4, 4) | Dự kiến đứng yên tại (4, 4); hướng tới tọa độ (4, 4) | 53 |
| 13-14 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (7, 3) (Spot #12 (thương hiệu=12, tọa độ=(7, 3))) | 52 |
| 15 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (7, 3) (Spot #12 (thương hiệu=12, tọa độ=(7, 3))) | 50 |
| 16-17 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 3)) | 49 |
| 18-19 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (6, 10) (Spot #6 (thương hiệu=6, tọa độ=(6, 10))) | 48 |
| 20-21 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (6, 10) (Spot #6 (thương hiệu=6, tọa độ=(6, 10))) | 47 |
| 22 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (6, 10) (Spot #6 (thương hiệu=6, tọa độ=(6, 10))) | 45 |
| 23-24 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (6, 10) (Spot #6 (thương hiệu=6, tọa độ=(6, 10))) | 44 |
| 25 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (6, 10) (Spot #6 (thương hiệu=6, tọa độ=(6, 10))) | 42 |
| 26-27 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (6, 10) (Spot #6 (thương hiệu=6, tọa độ=(6, 10))) | 41 |
| 28-29 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 10)) | 40 |
| 30-31 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (0, 10) (Spot #10 (thương hiệu=10, tọa độ=(0, 10))) | 39 |
| 32 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (0, 10) (Spot #10 (thương hiệu=10, tọa độ=(0, 10))) | 37 |
| 33-35 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (0, 10) (Spot #10 (thương hiệu=10, tọa độ=(0, 10))) | 35 |
| 36-37 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (0, 10) (Spot #10 (thương hiệu=10, tọa độ=(0, 10))) | 34 |
| 38 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (0, 10) (Spot #10 (thương hiệu=10, tọa độ=(0, 10))) | 32 |
| 39-40 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 10)) | 31 |
| 41-42 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (9, 6) (Spot #19 (thương hiệu=19, tọa độ=(9, 6))) | 30 |
| 43-44 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (9, 6) (Spot #19 (thương hiệu=19, tọa độ=(9, 6))) | 29 |
| 45 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (9, 6) (Spot #19 (thương hiệu=19, tọa độ=(9, 6))) | 27 |
| 46-47 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (9, 6) (Spot #19 (thương hiệu=19, tọa độ=(9, 6))) | 26 |
| 48 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (9, 6) (Spot #19 (thương hiệu=19, tọa độ=(9, 6))) | 24 |
| 49-50 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (9, 6) (Spot #19 (thương hiệu=19, tọa độ=(9, 6))) | 23 |
| 51-52 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (9, 6) (Spot #19 (thương hiệu=19, tọa độ=(9, 6))) | 22 |
| 53-54 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (9, 6) (Spot #19 (thương hiệu=19, tọa độ=(9, 6))) | 21 |
| 55 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (9, 6) (Spot #19 (thương hiệu=19, tọa độ=(9, 6))) | 19 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 15) (ô=337)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(18, 9))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(18, 9))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 2, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 5, 5, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 30 |
| 2-3 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 29 |
| 4 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 27 |
| 5 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 25 |
| 6 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 23 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 53 |
| 9-10 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 52 |
| 11 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến di chuyển đến (14, 17); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 50 |
| 12-13 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 49 |
| 14 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 47 |
| 15-16 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến di chuyển đến (16, 15); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 46 |
| 17-19 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 44 |
| 20 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến di chuyển đến (17, 13); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 42 |
| 21-22 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 41 |
| 23-24 | Di chuyển hướng 1 (`1`) | (17, 12) | (18, 11) | Dự kiến di chuyển đến (18, 11); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 39 |
| 25-26 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến di chuyển đến (19, 11); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 38 |
| 27 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 36 |
| 28-29 | Di chuyển hướng 1 (`1`) | (19, 10) | (20, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 9)) | 35 |
| 30-31 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (18, 9) (Spot #22 (thương hiệu=22, tọa độ=(18, 9))) | 34 |
| 32-33 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 33 |
| 34-55 | Chờ 22 bước (`-22`) | (18, 9) | (18, 9) | Dự kiến đứng yên tại (18, 9); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 33 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 6) (ô=134)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(20, 9))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(20, 9))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 3, 3, 3, 3, 3, 2, 2, 1, 2, 2, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 31 |
| 2 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 29 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 28 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 27 |
| 7-9 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 25 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 24 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 23 |
| 14-15 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 22 |
| 16-17 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 21 |
| 18 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 19 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 18 |
| 21 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 16 |
| 22-23 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 15 |
| 24-25 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 14 |
| 26-27 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 13 |
| 28-29 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 12 |
| 30-31 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (18, 9) (Spot #22 (thương hiệu=22, tọa độ=(18, 9))) | 11 |
| 32-33 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến di chuyển đến (17, 10); hướng tới tọa độ (18, 9) (Spot #22 (thương hiệu=22, tọa độ=(18, 9))) | 10 |
| 34-35 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 9 |
| 36-37 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (20, 9) (Spot #4 (thương hiệu=4, tọa độ=(20, 9))) | 8 |
| 38-39 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 9)) | 7 |
| 40-55 | Chờ 16 bước (`-16`) | (20, 9) | (20, 9) | Dự kiến đứng yên tại (20, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 9)) | 7 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 17) (ô=376)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(10, 18))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(10, 18))
- Mảng hành động đã gửi server: `[1, 1, 0, -22, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 2, 2, 2, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 3 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 1 |
| 3-4 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 14)) | 0 |
| 5-26 | Chờ 22 bước (`-22`) | (2, 14) | (2, 14) | Dự kiến đứng yên tại (2, 14); hướng tới tọa độ (2, 14) | 53 |
| 27-28 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (7, 19) (Spot #20 (thương hiệu=20, tọa độ=(7, 19))) | 52 |
| 29-30 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (7, 19) (Spot #20 (thương hiệu=20, tọa độ=(7, 19))) | 51 |
| 31-32 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (7, 19) (Spot #20 (thương hiệu=20, tọa độ=(7, 19))) | 50 |
| 33-34 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (7, 19) (Spot #20 (thương hiệu=20, tọa độ=(7, 19))) | 49 |
| 35-36 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (7, 19) (Spot #20 (thương hiệu=20, tọa độ=(7, 19))) | 48 |
| 37-38 | Di chuyển hướng 3 (`3`) | (6, 17) | (6, 18) | Dự kiến di chuyển đến (6, 18); hướng tới tọa độ (7, 19) (Spot #20 (thương hiệu=20, tọa độ=(7, 19))) | 47 |
| 39-40 | Di chuyển hướng 3 (`3`) | (6, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 46 |
| 41-42 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 45 |
| 43-44 | Di chuyển hướng 4 (`4`) | (6, 20) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (5, 22) (Spot #15 (thương hiệu=15, tọa độ=(5, 22))) | 44 |
| 45-46 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 43 |
| 47-48 | Di chuyển hướng 2 (`2`) | (5, 22) | (6, 22) | Dự kiến di chuyển đến (6, 22); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 42 |
| 49 | Di chuyển hướng 2 (`2`) | (6, 22) | (7, 22) | Dự kiến di chuyển đến (7, 22); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 40 |
| 50-51 | Di chuyển hướng 2 (`2`) | (7, 22) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 39 |
| 52 | Di chuyển hướng 1 (`1`) | (8, 22) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 37 |
| 53-54 | Di chuyển hướng 1 (`1`) | (9, 21) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 36 |
| 55 | Chờ 1 bước (`-1`) | (9, 20) | (9, 20) | Dự kiến đứng yên tại (9, 20); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 36 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 20) (ô=455)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 15))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 15))
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 2, 1, 3, 3, 3, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 4, 5, 5, 5, 4, 4, 4, 4, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (20, 17) (Spot #3 (thương hiệu=3, tọa độ=(20, 17))) | 52 |
| 2-3 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới tọa độ (20, 17) (Spot #3 (thương hiệu=3, tọa độ=(20, 17))) | 51 |
| 4-5 | Di chuyển hướng 1 (`1`) | (17, 20) | (18, 19) | Dự kiến di chuyển đến (18, 19); hướng tới tọa độ (20, 17) (Spot #3 (thương hiệu=3, tọa độ=(20, 17))) | 50 |
| 6-7 | Di chuyển hướng 1 (`1`) | (18, 19) | (18, 18) | Dự kiến di chuyển đến (18, 18); hướng tới tọa độ (20, 17) (Spot #3 (thương hiệu=3, tọa độ=(20, 17))) | 49 |
| 8-9 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến di chuyển đến (19, 18); hướng tới tọa độ (20, 17) (Spot #3 (thương hiệu=3, tọa độ=(20, 17))) | 48 |
| 10-11 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 47 |
| 12-13 | Di chuyển hướng 3 (`3`) | (20, 17) | (20, 18) | Dự kiến di chuyển đến (20, 18); hướng tới tọa độ (21, 20) (Spot #21 (thương hiệu=21, tọa độ=(21, 20))) | 46 |
| 14-15 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (21, 20) (Spot #21 (thương hiệu=21, tọa độ=(21, 20))) | 45 |
| 16-17 | Di chuyển hướng 3 (`3`) | (21, 19) | (21, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 20)) | 44 |
| 18-19 | Di chuyển hướng 5 (`5`) | (21, 20) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 43 |
| 20-21 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 42 |
| 22-23 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 41 |
| 24 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 39 |
| 25-26 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 38 |
| 27-28 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 37 |
| 29-30 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 36 |
| 31-32 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến di chuyển đến (14, 19); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 35 |
| 33 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 33 |
| 34-35 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 32 |
| 36 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 30 |
| 37-38 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 29 |
| 39-40 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 27 |
| 41-42 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới tọa độ (7, 19) (Spot #20 (thương hiệu=20, tọa độ=(7, 19))) | 26 |
| 43 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến di chuyển đến (8, 18); hướng tới tọa độ (7, 19) (Spot #20 (thương hiệu=20, tọa độ=(7, 19))) | 24 |
| 44-45 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới tọa độ (7, 19) (Spot #20 (thương hiệu=20, tọa độ=(7, 19))) | 23 |
| 46-47 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 22 |
| 48-49 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 21 |
| 50-51 | Di chuyển hướng 4 (`4`) | (6, 20) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (5, 22) (Spot #15 (thương hiệu=15, tọa độ=(5, 22))) | 20 |
| 52-53 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 19 |
| 54-55 | Di chuyển hướng 0 (`0`) | (5, 22) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (3, 15) (Spot #7 (thương hiệu=7, tọa độ=(3, 15))) | 18 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (4, 19) (ô=422)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(13, 23))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(13, 23))
- Mảng hành động đã gửi server: `[3, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 3, 3, 3, 4, 4, 4, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến di chuyển đến (4, 20); hướng tới tọa độ (6, 20) (Spot #2 (thương hiệu=2, tọa độ=(6, 20))) | 28 |
| 2-3 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến di chuyển đến (5, 20); hướng tới tọa độ (6, 20) (Spot #2 (thương hiệu=2, tọa độ=(6, 20))) | 27 |
| 4-5 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 26 |
| 6-7 | Di chuyển hướng 1 (`1`) | (6, 20) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 25 |
| 8-9 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 24 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến di chuyển đến (8, 18); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 23 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới tọa độ (10, 18) (Spot #8 (thương hiệu=8, tọa độ=(10, 18))) | 22 |
| 14 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 20 |
| 15-16 | Di chuyển hướng 1 (`1`) | (10, 18) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 19 |
| 17-18 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 17 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 16 |
| 21 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 14 |
| 22-23 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến di chuyển đến (14, 19); hướng tới tọa độ (14, 20) (Spot #9 (thương hiệu=9, tọa độ=(14, 20))) | 13 |
| 24 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 11 |
| 25-26 | Di chuyển hướng 4 (`4`) | (14, 20) | (14, 21) | Dự kiến di chuyển đến (14, 21); hướng tới tọa độ (13, 23) (Spot #14 (thương hiệu=14, tọa độ=(13, 23))) | 10 |
| 27-28 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến di chuyển đến (13, 22); hướng tới tọa độ (13, 23) (Spot #14 (thương hiệu=14, tọa độ=(13, 23))) | 9 |
| 29-31 | Di chuyển hướng 4 (`4`) | (13, 22) | (13, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 23)) | 7 |
| 32-55 | Chờ 24 bước (`-24`) | (13, 23) | (13, 23) | Dự kiến đứng yên tại (13, 23); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 23)) | 7 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (9, 6) (ô=141)
- Nhiên liệu đầu ngày: 53
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #0 (thương hiệu=0, tọa độ=(4, 4))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 0, -45]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 4) (Spot #0 (thương hiệu=0, tọa độ=(4, 4))) | 53 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 4) (Spot #0 (thương hiệu=0, tọa độ=(4, 4))) | 53 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 4) (Spot #0 (thương hiệu=0, tọa độ=(4, 4))) | 53 |
| 5-7 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 4) (Spot #0 (thương hiệu=0, tọa độ=(4, 4))) | 53 |
| 8-9 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 4) (Spot #0 (thương hiệu=0, tọa độ=(4, 4))) | 53 |
| 10 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (4, 4) | 53 |
| 11-55 | Chờ 45 bước (`-45`) | (4, 4) | (4, 4) | Dự kiến đứng yên tại (4, 4); điểm hẹn của xe tuần tra #0 tại (4, 4) | 53 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (15, 20) (ô=455)
- Nhiên liệu đầu ngày: 53
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #1 (thương hiệu=1, tọa độ=(2, 14))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 5, 5, 5, 0, 0, 5, 0, 5, 5, 5, 5, 5, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến di chuyển đến (15, 19); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 2-3 | Di chuyển hướng 0 (`0`) | (15, 19) | (14, 18) | Dự kiến di chuyển đến (14, 18); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 4 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến di chuyển đến (14, 17); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 5-6 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 7 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 8-9 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 10-11 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 12 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 13 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 14 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 15-16 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 20-21 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 22-23 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (2, 14) (Spot #1 (thương hiệu=1, tọa độ=(2, 14))) | 53 |
| 24-25 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (2, 14) | 53 |
| 26-55 | Chờ 30 bước (`-30`) | (2, 14) | (2, 14) | Dự kiến đứng yên tại (2, 14); điểm hẹn của xe tuần tra #3 tại (2, 14) | 53 |

