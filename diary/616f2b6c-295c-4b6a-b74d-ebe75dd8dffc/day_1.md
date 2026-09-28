# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 41
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 31 | #4 | #6 | (7, 13) | 3 | 58 |
| 39 | #1 | #6 | (7, 13) | 7 | 58 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 17) (ô=322)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(9, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(9, 8))
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 0, 1, 0, 5, 5, 5, 0, 5, 0, 0, 0, 0, 4, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (16, 17) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới tọa độ (17, 11) (Spot #4 (thương hiệu=4, tọa độ=(17, 11))) | 28 |
| 2-3 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến di chuyển đến (16, 15); hướng tới tọa độ (17, 11) (Spot #4 (thương hiệu=4, tọa độ=(17, 11))) | 27 |
| 4-6 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (17, 11) (Spot #4 (thương hiệu=4, tọa độ=(17, 11))) | 25 |
| 7-9 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến di chuyển đến (17, 13); hướng tới tọa độ (17, 11) (Spot #4 (thương hiệu=4, tọa độ=(17, 11))) | 23 |
| 10-12 | Di chuyển hướng 0 (`0`) | (17, 13) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (17, 11) (Spot #4 (thương hiệu=4, tọa độ=(17, 11))) | 21 |
| 13-14 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 20 |
| 15-16 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 19 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 17 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 16 |
| 20 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 14 |
| 21 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 12 |
| 22 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 10 |
| 23-25 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 8 |
| 26-27 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 7 |
| 28-29 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (10, 5) (Spot #8 (thương hiệu=8, tọa độ=(10, 5))) | 6 |
| 30-32 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 4 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (9, 8) (Spot #12 (thương hiệu=12, tọa độ=(9, 8))) | 3 |
| 35-36 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (9, 8) (Spot #12 (thương hiệu=12, tọa độ=(9, 8))) | 2 |
| 37-39 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 0 |
| 40 | Chờ 1 bước (`-1`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 5) (ô=97)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(7, 13))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(7, 13))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 5, 4, 5, 5, 5, 5, 4, 3, 3, 4, 3, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 32 |
| 2-4 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 30 |
| 5-6 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 29 |
| 7-8 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 28 |
| 9-11 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 26 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (9, 8) (Spot #12 (thương hiệu=12, tọa độ=(9, 8))) | 25 |
| 14-16 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 23 |
| 17-18 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (5, 8) (Spot #11 (thương hiệu=11, tọa độ=(5, 8))) | 22 |
| 19-21 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (5, 8) (Spot #11 (thương hiệu=11, tọa độ=(5, 8))) | 20 |
| 22-24 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (5, 8) (Spot #11 (thương hiệu=11, tọa độ=(5, 8))) | 18 |
| 25-27 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 16 |
| 28-29 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 15 |
| 30-31 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 14 |
| 32-34 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 12 |
| 35 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 10 |
| 36-37 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (7, 13) (Spot #7 (thương hiệu=7, tọa độ=(7, 13))) | 9 |
| 38 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 58 |
| 39-40 | Chờ 2 bước (`-2`) | (7, 13) | (7, 13) | Dự kiến đứng yên tại (7, 13); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 58 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 2) (ô=45)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(10, 5))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(10, 5))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 3, 2, 3, 3, 3, 3, 2, 2, 4, 0, 5, 5, 5, 0, 5, 0, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 47 |
| 3-4 | Di chuyển hướng 3 (`3`) | (10, 2) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 46 |
| 5 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 44 |
| 6 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 42 |
| 7 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 40 |
| 8-9 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 39 |
| 10 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 37 |
| 11-13 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 35 |
| 14 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 33 |
| 15-16 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 32 |
| 17-18 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (17, 10) (Spot #2 (thương hiệu=2, tọa độ=(17, 10))) | 31 |
| 19 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(17, 10)) | 29 |
| 20-21 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 28 |
| 22-23 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 27 |
| 24 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 25 |
| 25-26 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 24 |
| 27 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 22 |
| 28 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 20 |
| 29 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 18 |
| 30-32 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 16 |
| 33-34 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 15 |
| 35-36 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (10, 5) (Spot #8 (thương hiệu=8, tọa độ=(10, 5))) | 14 |
| 37-39 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 12 |
| 40 | Chờ 1 bước (`-1`) | (10, 5) | (10, 5) | Dự kiến đứng yên tại (10, 5); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 12 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 3) (ô=61)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 8))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 8))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 4, 4, 4, 4, 0, 0, 4, 3, 3, 4, 3, 3, 3, 4, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (1, 6) (Spot #1 (thương hiệu=1, tọa độ=(1, 6))) | 47 |
| 2-3 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (1, 6) (Spot #1 (thương hiệu=1, tọa độ=(1, 6))) | 46 |
| 4-6 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (1, 6) (Spot #1 (thương hiệu=1, tọa độ=(1, 6))) | 44 |
| 7-9 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (1, 6) (Spot #1 (thương hiệu=1, tọa độ=(1, 6))) | 42 |
| 10 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (1, 6) (Spot #1 (thương hiệu=1, tọa độ=(1, 6))) | 40 |
| 11-12 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới tọa độ (1, 6) (Spot #1 (thương hiệu=1, tọa độ=(1, 6))) | 39 |
| 13-15 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (1, 6) (Spot #1 (thương hiệu=1, tọa độ=(1, 6))) | 37 |
| 16-17 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 36 |
| 18-19 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới tọa độ (0, 4) (Spot #10 (thương hiệu=10, tọa độ=(0, 4))) | 35 |
| 20-22 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 4)) | 33 |
| 23-24 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (0, 8) (Spot #3 (thương hiệu=3, tọa độ=(0, 8))) | 32 |
| 25-27 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (0, 8) (Spot #3 (thương hiệu=3, tọa độ=(0, 8))) | 30 |
| 28 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 8) (Spot #3 (thương hiệu=3, tọa độ=(0, 8))) | 28 |
| 29 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 26 |
| 30-31 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (1, 12) (Spot #14 (thương hiệu=14, tọa độ=(1, 12))) | 25 |
| 32-34 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (1, 12) (Spot #14 (thương hiệu=14, tọa độ=(1, 12))) | 23 |
| 35 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (1, 12) (Spot #14 (thương hiệu=14, tọa độ=(1, 12))) | 21 |
| 36 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 12)) | 19 |
| 37-38 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (5, 8) (Spot #11 (thương hiệu=11, tọa độ=(5, 8))) | 18 |
| 39 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (5, 8) (Spot #11 (thương hiệu=11, tọa độ=(5, 8))) | 16 |
| 40 | Chờ 1 bước (`-1`) | (2, 10) | (2, 10) | Dự kiến đứng yên tại (2, 10); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 16 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 10) (ô=184)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 8))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 8))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 0, 1, 1, 3, 3, 3, 3, 3, 2, 3, 3, 2, -1, 0, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (0, 8) (Spot #3 (thương hiệu=3, tọa độ=(0, 8))) | 26 |
| 3-4 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (0, 8) (Spot #3 (thương hiệu=3, tọa độ=(0, 8))) | 25 |
| 5-6 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (0, 8) (Spot #3 (thương hiệu=3, tọa độ=(0, 8))) | 24 |
| 7 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 8) (Spot #3 (thương hiệu=3, tọa độ=(0, 8))) | 22 |
| 8-10 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 20 |
| 11-12 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (1, 6) (Spot #1 (thương hiệu=1, tọa độ=(1, 6))) | 19 |
| 13 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 17 |
| 14-15 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 16 |
| 16 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 14 |
| 17-18 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 13 |
| 19-21 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 11 |
| 22-23 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 10 |
| 24 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (5, 12) (Spot #13 (thương hiệu=13, tọa độ=(5, 12))) | 8 |
| 25-27 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 6 |
| 28-29 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (7, 13) (Spot #7 (thương hiệu=7, tọa độ=(7, 13))) | 5 |
| 30 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 58 |
| 31 | Chờ 1 bước (`-1`) | (7, 13) | (7, 13) | Dự kiến đứng yên tại (7, 13); hướng tới tọa độ (7, 13) | 58 |
| 32-33 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (5, 8) (Spot #11 (thương hiệu=11, tọa độ=(5, 8))) | 57 |
| 34-36 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (5, 8) (Spot #11 (thương hiệu=11, tọa độ=(5, 8))) | 55 |
| 37 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (5, 8) (Spot #11 (thương hiệu=11, tọa độ=(5, 8))) | 53 |
| 38-40 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (5, 8) (Spot #11 (thương hiệu=11, tọa độ=(5, 8))) | 51 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (9, 8) (ô=153)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 8))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 8))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 3, 2, 2, 5, 5, 0, 5, 0, 0, 0, 0, 5, 5, 5, 0, 1, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 55 |
| 2 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 53 |
| 3-5 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 51 |
| 6-8 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 49 |
| 9 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 47 |
| 10 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới tọa độ (15, 10) (Spot #5 (thương hiệu=5, tọa độ=(15, 10))) | 45 |
| 11 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 43 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 42 |
| 14 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 40 |
| 15 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 38 |
| 16 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 36 |
| 17-19 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (11, 7) (Spot #0 (thương hiệu=0, tọa độ=(11, 7))) | 34 |
| 20-21 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 33 |
| 22-23 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (10, 5) (Spot #8 (thương hiệu=8, tọa độ=(10, 5))) | 32 |
| 24-26 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 30 |
| 27-28 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (7, 5) (Spot #16 (thương hiệu=16, tọa độ=(7, 5))) | 29 |
| 29-30 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (7, 5) (Spot #16 (thương hiệu=16, tọa độ=(7, 5))) | 28 |
| 31-33 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 26 |
| 34-35 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (7, 3) (Spot #17 (thương hiệu=17, tọa độ=(7, 3))) | 25 |
| 36-38 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 3)) | 23 |
| 39-40 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (5, 8) (Spot #11 (thương hiệu=11, tọa độ=(5, 8))) | 22 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (10, 7) (ô=136)
- Nhiên liệu đầu ngày: 58
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #7 (thương hiệu=7, tọa độ=(7, 13))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 4, 4, 5, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới điểm hẹn của xe tuần tra #4 tại (7, 13) (Spot #7 (thương hiệu=7, tọa độ=(7, 13))) | 58 |
| 3-4 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới điểm hẹn của xe tuần tra #4 tại (7, 13) (Spot #7 (thương hiệu=7, tọa độ=(7, 13))) | 58 |
| 5 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới điểm hẹn của xe tuần tra #4 tại (7, 13) (Spot #7 (thương hiệu=7, tọa độ=(7, 13))) | 58 |
| 6-8 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới điểm hẹn của xe tuần tra #4 tại (7, 13) (Spot #7 (thương hiệu=7, tọa độ=(7, 13))) | 58 |
| 9-11 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới điểm hẹn của xe tuần tra #4 tại (7, 13) (Spot #7 (thương hiệu=7, tọa độ=(7, 13))) | 58 |
| 12-14 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (7, 13) (Spot #7 (thương hiệu=7, tọa độ=(7, 13))) | 58 |
| 15 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (7, 13) | 58 |
| 16-40 | Chờ 25 bước (`-25`) | (7, 13) | (7, 13) | Dự kiến đứng yên tại (7, 13); điểm hẹn của xe tuần tra #4 tại (7, 13) | 58 |

