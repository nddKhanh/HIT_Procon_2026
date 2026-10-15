# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 41
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 11 | #0 | #5 | (11, 16) | 2 | 41 |
| 31 | #1 | #5 | (11, 16) | 4 | 41 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 16) (ô=299)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(10, 12))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(10, 12))
- Mảng hành động đã gửi server: `[-12, 2, 2, 3, 2, 1, 1, 1, 1, 1, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-11 | Chờ 12 bước (`-12`) | (11, 16) | (11, 16) | Dự kiến đứng yên tại (11, 16); hướng tới tọa độ (11, 16) | 41 |
| 12-13 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (14, 17) (Spot #6 (thương hiệu=6, tọa độ=(14, 17))) | 40 |
| 14-15 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (14, 17) (Spot #6 (thương hiệu=6, tọa độ=(14, 17))) | 39 |
| 16-17 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 17)) | 38 |
| 18-19 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến di chuyển đến (15, 17); hướng tới tọa độ (17, 12) (Spot #7 (thương hiệu=7, tọa độ=(17, 12))) | 37 |
| 20 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới tọa độ (17, 12) (Spot #7 (thương hiệu=7, tọa độ=(17, 12))) | 35 |
| 21-22 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến di chuyển đến (16, 15); hướng tới tọa độ (17, 12) (Spot #7 (thương hiệu=7, tọa độ=(17, 12))) | 34 |
| 23-25 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (17, 12) (Spot #7 (thương hiệu=7, tọa độ=(17, 12))) | 32 |
| 26-27 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến di chuyển đến (17, 13); hướng tới tọa độ (17, 12) (Spot #7 (thương hiệu=7, tọa độ=(17, 12))) | 31 |
| 28-29 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 12)) | 30 |
| 30-31 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (10, 12) (Spot #17 (thương hiệu=17, tọa độ=(10, 12))) | 29 |
| 32-34 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (10, 12) (Spot #17 (thương hiệu=17, tọa độ=(10, 12))) | 27 |
| 35-37 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (10, 12) (Spot #17 (thương hiệu=17, tọa độ=(10, 12))) | 25 |
| 38-40 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (10, 12) (Spot #17 (thương hiệu=17, tọa độ=(10, 12))) | 23 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 3) (ô=64)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(14, 17))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(14, 17))
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 4, 4, 4, 4, 3, 3, 3, 2, 2, 3, 3, 2, 2, 3, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (7, 11) (Spot #2 (thương hiệu=2, tọa độ=(7, 11))) | 24 |
| 3-4 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (7, 11) (Spot #2 (thương hiệu=2, tọa độ=(7, 11))) | 23 |
| 5-6 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (7, 11) (Spot #2 (thương hiệu=2, tọa độ=(7, 11))) | 22 |
| 7-8 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (7, 11) (Spot #2 (thương hiệu=2, tọa độ=(7, 11))) | 21 |
| 9 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (7, 11) (Spot #2 (thương hiệu=2, tọa độ=(7, 11))) | 19 |
| 10-12 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (7, 11) (Spot #2 (thương hiệu=2, tọa độ=(7, 11))) | 17 |
| 13 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (7, 11) (Spot #2 (thương hiệu=2, tọa độ=(7, 11))) | 15 |
| 14-16 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 13 |
| 17-18 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (8, 14) (Spot #8 (thương hiệu=8, tọa độ=(8, 14))) | 12 |
| 19-20 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (8, 14) (Spot #8 (thương hiệu=8, tọa độ=(8, 14))) | 11 |
| 21-22 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 14)) | 10 |
| 23-24 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (11, 16) (Spot #14 (thương hiệu=14, tọa độ=(11, 16))) | 9 |
| 25-26 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (11, 16) (Spot #14 (thương hiệu=14, tọa độ=(11, 16))) | 8 |
| 27 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (11, 16) (Spot #14 (thương hiệu=14, tọa độ=(11, 16))) | 6 |
| 28-30 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(11, 16)) | 41 |
| 31-32 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (14, 17) (Spot #6 (thương hiệu=6, tọa độ=(14, 17))) | 40 |
| 33-34 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (14, 17) (Spot #6 (thương hiệu=6, tọa độ=(14, 17))) | 39 |
| 35-36 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 17)) | 38 |
| 37-40 | Chờ 4 bước (`-4`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 17)) | 38 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 7) (ô=143)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 7)
- Mảng hành động đã gửi server: `[-41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-40 | Chờ 41 bước (`-41`) | (17, 7) | (17, 7) | Dự kiến đứng yên tại (17, 7); hướng tới tọa độ (17, 7) | 4 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 3) (ô=59)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(15, 2))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(15, 2))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (4, 7) (Spot #0 (thương hiệu=0, tọa độ=(4, 7))) | 27 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (4, 7) (Spot #0 (thương hiệu=0, tọa độ=(4, 7))) | 26 |
| 4-5 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (4, 7) (Spot #0 (thương hiệu=0, tọa độ=(4, 7))) | 25 |
| 6-8 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 7)) | 23 |
| 9-10 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (10, 2) (Spot #11 (thương hiệu=11, tọa độ=(10, 2))) | 22 |
| 11-13 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (10, 2) (Spot #11 (thương hiệu=11, tọa độ=(10, 2))) | 20 |
| 14-15 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (10, 2) (Spot #11 (thương hiệu=11, tọa độ=(10, 2))) | 19 |
| 16-17 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (10, 2) (Spot #11 (thương hiệu=11, tọa độ=(10, 2))) | 18 |
| 18-20 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (10, 2) (Spot #11 (thương hiệu=11, tọa độ=(10, 2))) | 16 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (10, 2) (Spot #11 (thương hiệu=11, tọa độ=(10, 2))) | 15 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (10, 2) (Spot #11 (thương hiệu=11, tọa độ=(10, 2))) | 14 |
| 25-26 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (10, 2) (Spot #11 (thương hiệu=11, tọa độ=(10, 2))) | 13 |
| 27-29 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 2)) | 11 |
| 30-31 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (14, 3) (Spot #13 (thương hiệu=13, tọa độ=(14, 3))) | 10 |
| 32 | Di chuyển hướng 3 (`3`) | (11, 2) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (14, 3) (Spot #13 (thương hiệu=13, tọa độ=(14, 3))) | 8 |
| 33-35 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (14, 3) (Spot #13 (thương hiệu=13, tọa độ=(14, 3))) | 6 |
| 36 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 4 |
| 37-38 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến di chuyển đến (15, 3); hướng tới tọa độ (15, 2) (Spot #15 (thương hiệu=15, tọa độ=(15, 2))) | 3 |
| 39-40 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 2)) | 2 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 12) (ô=226)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(4, 7))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(4, 7))
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 5, 4, 4, 5, 4, 4, 5, 4, 4, 1, 0, 0, 0, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (8, 12) (Spot #1 (thương hiệu=1, tọa độ=(8, 12))) | 34 |
| 2-4 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 32 |
| 5-6 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (7, 11) (Spot #2 (thương hiệu=2, tọa độ=(7, 11))) | 31 |
| 7 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 29 |
| 8-9 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (5, 13) (Spot #12 (thương hiệu=12, tọa độ=(5, 13))) | 28 |
| 10-11 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (5, 13) (Spot #12 (thương hiệu=12, tọa độ=(5, 13))) | 27 |
| 12-13 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 13)) | 25 |
| 14-15 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (3, 15) (Spot #16 (thương hiệu=16, tọa độ=(3, 15))) | 24 |
| 16-17 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (3, 15) (Spot #16 (thương hiệu=16, tọa độ=(3, 15))) | 23 |
| 18 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 21 |
| 19-20 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến di chuyển đến (2, 15); hướng tới tọa độ (1, 17) (Spot #9 (thương hiệu=9, tọa độ=(1, 17))) | 20 |
| 21-22 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến di chuyển đến (1, 16); hướng tới tọa độ (1, 17) (Spot #9 (thương hiệu=9, tọa độ=(1, 17))) | 19 |
| 23-24 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 18 |
| 25-26 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến di chuyển đến (1, 16); hướng tới tọa độ (0, 13) (Spot #4 (thương hiệu=4, tọa độ=(0, 13))) | 17 |
| 27-28 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến di chuyển đến (1, 15); hướng tới tọa độ (0, 13) (Spot #4 (thương hiệu=4, tọa độ=(0, 13))) | 16 |
| 29-31 | Di chuyển hướng 0 (`0`) | (1, 15) | (0, 14) | Dự kiến di chuyển đến (0, 14); hướng tới tọa độ (0, 13) (Spot #4 (thương hiệu=4, tọa độ=(0, 13))) | 14 |
| 32 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 13)) | 12 |
| 33-34 | Di chuyển hướng 2 (`2`) | (0, 13) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới tọa độ (4, 7) (Spot #0 (thương hiệu=0, tọa độ=(4, 7))) | 11 |
| 35-37 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (4, 7) (Spot #0 (thương hiệu=0, tọa độ=(4, 7))) | 9 |
| 38-40 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (4, 7) (Spot #0 (thương hiệu=0, tọa độ=(4, 7))) | 7 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (8, 12) (ô=224)
- Nhiên liệu đầu ngày: 41
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #14 (thương hiệu=14, tọa độ=(11, 16))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 3, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 16) (Spot #14 (thương hiệu=14, tọa độ=(11, 16))) | 41 |
| 2-4 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 16) (Spot #14 (thương hiệu=14, tọa độ=(11, 16))) | 41 |
| 5-6 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 16) (Spot #14 (thương hiệu=14, tọa độ=(11, 16))) | 41 |
| 7 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (11, 16) (Spot #14 (thương hiệu=14, tọa độ=(11, 16))) | 41 |
| 8-10 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (11, 16) | 41 |
| 11-40 | Chờ 30 bước (`-30`) | (11, 16) | (11, 16) | Dự kiến đứng yên tại (11, 16); điểm hẹn của xe tuần tra #0 tại (11, 16) | 41 |

