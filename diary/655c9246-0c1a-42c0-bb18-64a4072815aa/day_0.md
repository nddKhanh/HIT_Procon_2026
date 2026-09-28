# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 37
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 36 | #0 | #4 | (11, 9) | 30 | 59 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 3) (ô=67)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(11, 9))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(11, 9))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 58 |
| 2-3 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 57 |
| 4-6 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 55 |
| 7-8 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 54 |
| 9 | Di chuyển hướng 5 (`5`) | (3, 3) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 52 |
| 10-11 | Di chuyển hướng 5 (`5`) | (2, 3) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 51 |
| 12-13 | Di chuyển hướng 5 (`5`) | (1, 3) | (0, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(0, 3)) | 50 |
| 14-15 | Di chuyển hướng 2 (`2`) | (0, 3) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (6, 7) (Spot #5 (thương hiệu=5, tọa độ=(6, 7))) | 49 |
| 16-17 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (6, 7) (Spot #5 (thương hiệu=5, tọa độ=(6, 7))) | 48 |
| 18-19 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (6, 7) (Spot #5 (thương hiệu=5, tọa độ=(6, 7))) | 47 |
| 20-21 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (6, 7) (Spot #5 (thương hiệu=5, tọa độ=(6, 7))) | 46 |
| 22 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (6, 7) (Spot #5 (thương hiệu=5, tọa độ=(6, 7))) | 44 |
| 23-24 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (6, 7) (Spot #5 (thương hiệu=5, tọa độ=(6, 7))) | 43 |
| 25-26 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới tọa độ (6, 7) (Spot #5 (thương hiệu=5, tọa độ=(6, 7))) | 42 |
| 27 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 7)) | 40 |
| 28-29 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 39 |
| 30-31 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 38 |
| 32 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 36 |
| 33 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 34 |
| 34 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 32 |
| 35 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 59 |
| 36 | Chờ 1 bước (`-1`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 59 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 3) (ô=75)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(13, 13))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(13, 13))
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 2, 3, 4, 4, 4, 5, 5, 4, 5, 5, 0, 0, 5, 0, 5, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới tọa độ (18, 1) (Spot #15 (thương hiệu=2, tọa độ=(18, 1))) | 58 |
| 2 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (18, 1) (Spot #15 (thương hiệu=2, tọa độ=(18, 1))) | 56 |
| 3 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (18, 1) (Spot #15 (thương hiệu=2, tọa độ=(18, 1))) | 54 |
| 4-5 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(18, 1)) | 53 |
| 6-7 | Di chuyển hướng 2 (`2`) | (18, 1) | (19, 1) | Dự kiến di chuyển đến (19, 1); hướng tới tọa độ (19, 2) (Spot #0 (thương hiệu=0, tọa độ=(19, 2))) | 52 |
| 8-9 | Di chuyển hướng 3 (`3`) | (19, 1) | (19, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(19, 2)) | 51 |
| 10-11 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến di chuyển đến (19, 3); hướng tới tọa độ (17, 5) (Spot #4 (thương hiệu=4, tọa độ=(17, 5))) | 50 |
| 12 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (17, 5) (Spot #4 (thương hiệu=4, tọa độ=(17, 5))) | 48 |
| 13 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (17, 5) (Spot #4 (thương hiệu=4, tọa độ=(17, 5))) | 46 |
| 14 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 5)) | 44 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 5) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 43 |
| 17 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 6)) | 41 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 40 |
| 20 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 38 |
| 21-22 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 37 |
| 23-24 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến di chuyển đến (12, 4); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 36 |
| 25-26 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 35 |
| 27-28 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 34 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 33 |
| 31 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 31 |
| 32-33 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 30 |
| 34-36 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 28 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 9) (ô=185)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(19, 12))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(19, 12))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 4, 4, 4, 2, 3, 2, 2, 2, 2, 2, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 58 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 57 |
| 4 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 55 |
| 5 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 53 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 51 |
| 7 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 49 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 48 |
| 10-11 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 47 |
| 12 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 45 |
| 13-14 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 11)) | 44 |
| 15-16 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 43 |
| 17-18 | Di chuyển hướng 4 (`4`) | (13, 12) | (13, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 13)) | 42 |
| 19-20 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 14)) | 41 |
| 21-22 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (15, 15) (Spot #6 (thương hiệu=6, tọa độ=(15, 15))) | 40 |
| 23-24 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến di chuyển đến (14, 15); hướng tới tọa độ (15, 15) (Spot #6 (thương hiệu=6, tọa độ=(15, 15))) | 39 |
| 25-26 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 15)) | 38 |
| 27-28 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến di chuyển đến (16, 15); hướng tới tọa độ (19, 15) (Spot #1 (thương hiệu=1, tọa độ=(19, 15))) | 37 |
| 29-30 | Di chuyển hướng 2 (`2`) | (16, 15) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới tọa độ (19, 15) (Spot #1 (thương hiệu=1, tọa độ=(19, 15))) | 36 |
| 31 | Di chuyển hướng 2 (`2`) | (17, 15) | (18, 15) | Dự kiến di chuyển đến (18, 15); hướng tới tọa độ (19, 15) (Spot #1 (thương hiệu=1, tọa độ=(19, 15))) | 34 |
| 32-33 | Di chuyển hướng 2 (`2`) | (18, 15) | (19, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 15)) | 33 |
| 34-35 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến di chuyển đến (18, 14); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 32 |
| 36 | Chờ 1 bước (`-1`) | (18, 14) | (18, 14) | Dự kiến đứng yên tại (18, 14); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 12)) | 32 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 11) (ô=228)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(13, 13))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(13, 13))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 5, 5, 0, 0, 0, 5, 1, 1, 2, 2, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (6, 14) (Spot #16 (thương hiệu=3, tọa độ=(6, 14))) | 58 |
| 2-3 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới tọa độ (6, 14) (Spot #16 (thương hiệu=3, tọa độ=(6, 14))) | 57 |
| 4 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(6, 14)) | 55 |
| 5-6 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới tọa độ (3, 14) (Spot #12 (thương hiệu=12, tọa độ=(3, 14))) | 54 |
| 7-9 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (3, 14) (Spot #12 (thương hiệu=12, tọa độ=(3, 14))) | 52 |
| 10-11 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 14)) | 51 |
| 12-13 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (0, 11) (Spot #7 (thương hiệu=7, tọa độ=(0, 11))) | 50 |
| 14-15 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (0, 11) (Spot #7 (thương hiệu=7, tọa độ=(0, 11))) | 49 |
| 16-17 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (0, 11) (Spot #7 (thương hiệu=7, tọa độ=(0, 11))) | 48 |
| 18 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (0, 11) (Spot #7 (thương hiệu=7, tọa độ=(0, 11))) | 46 |
| 19-20 | Di chuyển hướng 5 (`5`) | (1, 11) | (0, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 11)) | 45 |
| 21-22 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 44 |
| 23-24 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 9)) | 43 |
| 25-26 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 42 |
| 27 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 40 |
| 28-29 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 39 |
| 30-32 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 37 |
| 33-34 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 36 |
| 35-36 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 35 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (11, 5) (ô=111)
- Nhiên liệu đầu ngày: 59
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #10 (thương hiệu=10, tọa độ=(11, 9))
- Mảng hành động đã gửi server: `[1, 0, 5, 4, 4, 4, 4, 3, 3, 2, 2, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 59 |
| 2-3 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 59 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 59 |
| 6 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 59 |
| 7-8 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 59 |
| 9-11 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 59 |
| 12-13 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 59 |
| 14 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 59 |
| 15 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 59 |
| 16 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 59 |
| 17 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (11, 9) | 59 |
| 18-36 | Chờ 19 bước (`-19`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); điểm hẹn của xe tuần tra #0 tại (11, 9) | 59 |

