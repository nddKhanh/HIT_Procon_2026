# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 43
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 7) (ô=155)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(14, 10))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(14, 10))
- Mảng hành động đã gửi server: `[0, 1, 1, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 2, 3, 3, 5, 5, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 46 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới tọa độ (2, 4) (Spot #12 (thương hiệu=12, tọa độ=(2, 4))) | 45 |
| 4 | Di chuyển hướng 1 (`1`) | (1, 5) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (2, 4) (Spot #12 (thương hiệu=12, tọa độ=(2, 4))) | 43 |
| 5-6 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 42 |
| 7-8 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 41 |
| 9 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 39 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 38 |
| 12-13 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 36 |
| 14-15 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 34 |
| 16-17 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 32 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 30 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 28 |
| 22-23 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 26 |
| 24 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 24 |
| 25 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 22 |
| 26 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (15, 5) (Spot #14 (thương hiệu=14, tọa độ=(15, 5))) | 20 |
| 27 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 18 |
| 28-29 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 47 |
| 30-31 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 6)) | 46 |
| 32-33 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 7)) | 45 |
| 34-35 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 44 |
| 36-37 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới tọa độ (14, 8) (Spot #18 (thương hiệu=18, tọa độ=(14, 8))) | 43 |
| 38-39 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 42 |
| 40-41 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (14, 10) (Spot #6 (thương hiệu=6, tọa độ=(14, 10))) | 41 |
| 42 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 10)) | 39 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (6, 18) (ô=402)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(0, 4))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(0, 4))
- Mảng hành động đã gửi server: `[1, 0, 1, 0, 1, 1, 1, 1, 2, 1, 1, 1, 0, 0, 5, 5, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (6, 18) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 46 |
| 2-3 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 45 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 43 |
| 5 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 41 |
| 6 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 39 |
| 7 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 37 |
| 8 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 35 |
| 9-10 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 34 |
| 11 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 32 |
| 12-13 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 31 |
| 14-15 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 30 |
| 16 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 28 |
| 17 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 26 |
| 18 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 47 |
| 19-20 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 45 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 43 |
| 23-24 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 41 |
| 25-26 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 39 |
| 27-28 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 37 |
| 29-30 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 35 |
| 31-32 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 34 |
| 33-34 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 33 |
| 35 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (1, 7) (Spot #0 (thương hiệu=0, tọa độ=(1, 7))) | 31 |
| 36-37 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 30 |
| 38-39 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 29 |
| 40-41 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (0, 4) (Spot #7 (thương hiệu=7, tọa độ=(0, 4))) | 28 |
| 42 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 26 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 16) (ô=356)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(7, 17))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(7, 17))
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 4, 4, 5, 4, 5, 5, 5, 4, 4, -1, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 16) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 41 |
| 2 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 39 |
| 3 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 37 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 35 |
| 5 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 33 |
| 6 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 31 |
| 7-8 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 30 |
| 9 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 28 |
| 10-11 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 27 |
| 12-13 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 26 |
| 14 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 24 |
| 15 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 22 |
| 16 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 20 |
| 17 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (15, 8) (Spot #2 (thương hiệu=2, tọa độ=(15, 8))) | 18 |
| 18-19 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 17 |
| 20-21 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (14, 10) (Spot #6 (thương hiệu=6, tọa độ=(14, 10))) | 16 |
| 22 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 10)) | 14 |
| 23-24 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(13, 10)) | 13 |
| 25-26 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (9, 12) (Spot #17 (thương hiệu=17, tọa độ=(9, 12))) | 12 |
| 27 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới tọa độ (9, 12) (Spot #17 (thương hiệu=17, tọa độ=(9, 12))) | 10 |
| 28-29 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (9, 12) (Spot #17 (thương hiệu=17, tọa độ=(9, 12))) | 9 |
| 30-31 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (9, 12) (Spot #17 (thương hiệu=17, tọa độ=(9, 12))) | 8 |
| 32-33 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(9, 12)) | 7 |
| 34-35 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 47 |
| 36 | Chờ 1 bước (`-1`) | (9, 13) | (9, 13) | Dự kiến đứng yên tại (9, 13); hướng tới tọa độ (9, 13) | 47 |
| 37-38 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (7, 17) (Spot #19 (thương hiệu=19, tọa độ=(7, 17))) | 46 |
| 39-41 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (7, 17) (Spot #19 (thương hiệu=19, tọa độ=(7, 17))) | 44 |
| 42 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (7, 17) (Spot #19 (thương hiệu=19, tọa độ=(7, 17))) | 42 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=90)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(16, 8))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(16, 8))
- Mảng hành động đã gửi server: `[5, 0, 4, 4, 3, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, 4, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (2, 4) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (1, 3) (Spot #3 (thương hiệu=3, tọa độ=(1, 3))) | 42 |
| 2-3 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 41 |
| 4-5 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 40 |
| 6-7 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (0, 6) (Spot #1 (thương hiệu=1, tọa độ=(0, 6))) | 39 |
| 8 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 37 |
| 9-10 | Di chuyển hướng 2 (`2`) | (0, 6) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (4, 6) (Spot #9 (thương hiệu=9, tọa độ=(4, 6))) | 36 |
| 11-12 | Di chuyển hướng 2 (`2`) | (1, 6) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (4, 6) (Spot #9 (thương hiệu=9, tọa độ=(4, 6))) | 35 |
| 13 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (4, 6) (Spot #9 (thương hiệu=9, tọa độ=(4, 6))) | 33 |
| 14-16 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 6)) | 31 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 30 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 28 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 26 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 24 |
| 25-26 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 22 |
| 27-28 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 20 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 18 |
| 31 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 16 |
| 32 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 14 |
| 33 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 12 |
| 34 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 47 |
| 35-36 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 6)) | 46 |
| 37-38 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 7)) | 45 |
| 39-40 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 44 |
| 41-42 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 43 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 9) (ô=213)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(7, 17))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(7, 17))
- Mảng hành động đã gửi server: `[2, 1, 0, 0, 5, -17, 4, 3, 5, 5, 5, 5, 4, 4, 4, 3, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến di chuyển đến (16, 9); hướng tới tọa độ (16, 8) (Spot #4 (thương hiệu=4, tọa độ=(16, 8))) | 5 |
| 1 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 3 |
| 2-3 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 7)) | 2 |
| 4-5 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 6)) | 1 |
| 6-7 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 0 |
| 8-24 | Chờ 17 bước (`-17`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); hướng tới tọa độ (14, 6) | 47 |
| 25-26 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (14, 8) (Spot #18 (thương hiệu=18, tọa độ=(14, 8))) | 46 |
| 27 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 44 |
| 28-29 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (10, 9) (Spot #20 (thương hiệu=20, tọa độ=(10, 9))) | 43 |
| 30 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (10, 9) (Spot #20 (thương hiệu=20, tọa độ=(10, 9))) | 41 |
| 31 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (10, 9) (Spot #20 (thương hiệu=20, tọa độ=(10, 9))) | 39 |
| 32 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (10, 9) (Spot #20 (thương hiệu=20, tọa độ=(10, 9))) | 37 |
| 33 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 35 |
| 34-35 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (9, 12) (Spot #17 (thương hiệu=17, tọa độ=(9, 12))) | 34 |
| 36-37 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (9, 12) (Spot #17 (thương hiệu=17, tọa độ=(9, 12))) | 33 |
| 38 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(9, 12)) | 31 |
| 39-40 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 47 |
| 41-42 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (7, 17) (Spot #19 (thương hiệu=19, tọa độ=(7, 17))) | 46 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (1, 7) (ô=155)
- Nhiên liệu đầu ngày: 47
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=8, tọa độ=(14, 6))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 2-3 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 4 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 5 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 12-13 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 18-19 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 20 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 21 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 22 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (14, 6) (Spot #8 (thương hiệu=8, tọa độ=(14, 6))) | 47 |
| 23 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (14, 6) | 47 |
| 24-42 | Chờ 19 bước (`-19`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); điểm hẹn của xe tuần tra #4 tại (14, 6) | 47 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (6, 18) (ô=402)
- Nhiên liệu đầu ngày: 47
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #5 (thương hiệu=5, tọa độ=(9, 13))
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 2, 1, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 13) (Spot #5 (thương hiệu=5, tọa độ=(9, 13))) | 47 |
| 2 | Di chuyển hướng 1 (`1`) | (6, 17) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 13) (Spot #5 (thương hiệu=5, tọa độ=(9, 13))) | 47 |
| 3 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 13) (Spot #5 (thương hiệu=5, tọa độ=(9, 13))) | 47 |
| 4 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 13) (Spot #5 (thương hiệu=5, tọa độ=(9, 13))) | 47 |
| 5 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 13) (Spot #5 (thương hiệu=5, tọa độ=(9, 13))) | 47 |
| 6-8 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (9, 13) | 47 |
| 9-42 | Chờ 34 bước (`-34`) | (9, 13) | (9, 13) | Dự kiến đứng yên tại (9, 13); điểm hẹn của xe tuần tra #2 tại (9, 13) | 47 |

