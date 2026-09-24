# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 54
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 19 | #0 | #5 | (6, 17) | 16 | 49 |
| 22 | #1 | #4 | (11, 10) | 0 | 49 |
| 40 | #0 | #5 | (3, 16) | 33 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 11) (ô=244)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(1, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(1, 10))
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 4, 5, 4, 4, 4, 5, 4, 4, 4, 3, 0, 0, 5, 5, 0, 1, 1, 2, -1, 1, 0, 0, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 31 |
| 2-3 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 30 |
| 4-6 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 28 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến di chuyển đến (10, 13); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 27 |
| 9-10 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 26 |
| 11 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 24 |
| 12 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 22 |
| 13-15 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 20 |
| 16 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 18 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 16 |
| 18-19 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 48 |
| 20 | Di chuyển hướng 4 (`4`) | (5, 18) | (5, 19) | Dự kiến di chuyển đến (5, 19); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 46 |
| 21-23 | Di chuyển hướng 4 (`4`) | (5, 19) | (4, 20) | Dự kiến di chuyển đến (4, 20); hướng tới tọa độ (5, 21) (Spot #9 (thương hiệu=9, tọa độ=(5, 21))) | 44 |
| 24-25 | Di chuyển hướng 3 (`3`) | (4, 20) | (5, 21) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(5, 21)) | 43 |
| 26-27 | Di chuyển hướng 0 (`0`) | (5, 21) | (4, 20) | Dự kiến di chuyển đến (4, 20); hướng tới tọa độ (1, 18) (Spot #4 (thương hiệu=4, tọa độ=(1, 18))) | 42 |
| 28-29 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (1, 18) (Spot #4 (thương hiệu=4, tọa độ=(1, 18))) | 41 |
| 30 | Di chuyển hướng 5 (`5`) | (4, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (1, 18) (Spot #4 (thương hiệu=4, tọa độ=(1, 18))) | 39 |
| 31-32 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (1, 18) (Spot #4 (thương hiệu=4, tọa độ=(1, 18))) | 38 |
| 33 | Di chuyển hướng 0 (`0`) | (2, 19) | (1, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 18)) | 36 |
| 34-35 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới tọa độ (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 35 |
| 36-37 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 34 |
| 38-39 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(3, 16)) | 49 |
| 40 | Chờ 1 bước (`-1`) | (3, 16) | (3, 16) | Dự kiến đứng yên tại (3, 16); hướng tới tọa độ (3, 16) | 49 |
| 41-42 | Di chuyển hướng 1 (`1`) | (3, 16) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (1, 10) (Spot #8 (thương hiệu=8, tọa độ=(1, 10))) | 48 |
| 43 | Di chuyển hướng 0 (`0`) | (4, 15) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (1, 10) (Spot #8 (thương hiệu=8, tọa độ=(1, 10))) | 46 |
| 44-46 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới tọa độ (1, 10) (Spot #8 (thương hiệu=8, tọa độ=(1, 10))) | 44 |
| 47 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (1, 10) (Spot #8 (thương hiệu=8, tọa độ=(1, 10))) | 42 |
| 48-49 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (1, 10) (Spot #8 (thương hiệu=8, tọa độ=(1, 10))) | 41 |
| 50-52 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 39 |
| 53 | Chờ 1 bước (`-1`) | (1, 10) | (1, 10) | Dự kiến đứng yên tại (1, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 39 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=255)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(1, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(1, 10))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 1, 2, 2, 2, 2, -1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 13 |
| 3-4 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 12 |
| 5-7 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 10 |
| 8-10 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 8 |
| 11-12 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 7 |
| 13 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 5 |
| 14-16 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 3 |
| 17-18 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 2 |
| 19-21 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 49 |
| 22 | Chờ 1 bước (`-1`) | (11, 10) | (11, 10) | Dự kiến đứng yên tại (11, 10); hướng tới tọa độ (11, 10) | 49 |
| 23-24 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (5, 2) (Spot #21 (thương hiệu=21, tọa độ=(5, 2))) | 48 |
| 25-27 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (5, 2) (Spot #21 (thương hiệu=21, tọa độ=(5, 2))) | 46 |
| 28-29 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới tọa độ (5, 2) (Spot #21 (thương hiệu=21, tọa độ=(5, 2))) | 45 |
| 30-32 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (5, 2) (Spot #21 (thương hiệu=21, tọa độ=(5, 2))) | 43 |
| 33-34 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (5, 2) (Spot #21 (thương hiệu=21, tọa độ=(5, 2))) | 42 |
| 35 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (5, 2) (Spot #21 (thương hiệu=21, tọa độ=(5, 2))) | 40 |
| 36-37 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (5, 2) (Spot #21 (thương hiệu=21, tọa độ=(5, 2))) | 39 |
| 38-40 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (5, 2) (Spot #21 (thương hiệu=21, tọa độ=(5, 2))) | 37 |
| 41-43 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (5, 2) (Spot #21 (thương hiệu=21, tọa độ=(5, 2))) | 35 |
| 44-46 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(5, 2)) | 33 |
| 47-48 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 2)) | 32 |
| 49-50 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (1, 10) (Spot #8 (thương hiệu=8, tọa độ=(1, 10))) | 31 |
| 51-52 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (1, 10) (Spot #8 (thương hiệu=8, tọa độ=(1, 10))) | 30 |
| 53 | Chờ 1 bước (`-1`) | (3, 4) | (3, 4) | Dự kiến đứng yên tại (3, 4); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 30 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 17) (ô=371)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(19, 13))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(19, 13))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 5, 5, 5, 4, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 1, 2, 2, 1, 1, 1, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=12, tọa độ=(8, 21))) | 48 |
| 2-3 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=12, tọa độ=(8, 21))) | 47 |
| 4-6 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=12, tọa độ=(8, 21))) | 45 |
| 7-9 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến di chuyển đến (11, 20); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=12, tọa độ=(8, 21))) | 43 |
| 10-11 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=12, tọa độ=(8, 21))) | 42 |
| 12-13 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=12, tọa độ=(8, 21))) | 41 |
| 14-15 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=12, tọa độ=(8, 21))) | 40 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 21)) | 39 |
| 18-19 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (14, 15) (Spot #11 (thương hiệu=11, tọa độ=(14, 15))) | 38 |
| 20-21 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến di chuyển đến (9, 19); hướng tới tọa độ (14, 15) (Spot #11 (thương hiệu=11, tọa độ=(14, 15))) | 37 |
| 22-23 | Di chuyển hướng 1 (`1`) | (9, 19) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới tọa độ (14, 15) (Spot #11 (thương hiệu=11, tọa độ=(14, 15))) | 36 |
| 24 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (14, 15) (Spot #11 (thương hiệu=11, tọa độ=(14, 15))) | 34 |
| 25-27 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (14, 15) (Spot #11 (thương hiệu=11, tọa độ=(14, 15))) | 32 |
| 28-30 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (14, 15) (Spot #11 (thương hiệu=11, tọa độ=(14, 15))) | 30 |
| 31 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (14, 15) (Spot #11 (thương hiệu=11, tọa độ=(14, 15))) | 28 |
| 32-34 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (14, 15) (Spot #11 (thương hiệu=11, tọa độ=(14, 15))) | 26 |
| 35-37 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 24 |
| 38-39 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (18, 13) (Spot #13 (thương hiệu=13, tọa độ=(18, 13))) | 23 |
| 40-41 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến di chuyển đến (15, 14); hướng tới tọa độ (18, 13) (Spot #13 (thương hiệu=13, tọa độ=(18, 13))) | 22 |
| 42 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (18, 13) (Spot #13 (thương hiệu=13, tọa độ=(18, 13))) | 20 |
| 43-44 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến di chuyển đến (17, 14); hướng tới tọa độ (18, 13) (Spot #13 (thương hiệu=13, tọa độ=(18, 13))) | 19 |
| 45-46 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 18 |
| 47-48 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 17 |
| 49-50 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 16 |
| 51-52 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới tọa độ (19, 13) (Spot #19 (thương hiệu=19, tọa độ=(19, 13))) | 15 |
| 53 | Chờ 1 bước (`-1`) | (18, 12) | (18, 12) | Dự kiến đứng yên tại (18, 12); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 15 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 0) (ô=18)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(16, 19))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(16, 19))
- Mảng hành động đã gửi server: `[4, 3, 4, 3, 2, 3, 3, 4, 3, 4, 4, 4, 4, 3, 3, 3, 5, 5, 4, 4, 4, 4, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 0) | (18, 1) | Dự kiến di chuyển đến (18, 1); hướng tới tọa độ (19, 4) (Spot #3 (thương hiệu=3, tọa độ=(19, 4))) | 34 |
| 2-4 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến di chuyển đến (18, 2); hướng tới tọa độ (19, 4) (Spot #3 (thương hiệu=3, tọa độ=(19, 4))) | 32 |
| 5-6 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới tọa độ (19, 4) (Spot #3 (thương hiệu=3, tọa độ=(19, 4))) | 31 |
| 7-9 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (19, 4) (Spot #3 (thương hiệu=3, tọa độ=(19, 4))) | 29 |
| 10-12 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 27 |
| 13-14 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến di chuyển đến (20, 5); hướng tới tọa độ (20, 8) (Spot #0 (thương hiệu=0, tọa độ=(20, 8))) | 26 |
| 15-16 | Di chuyển hướng 3 (`3`) | (20, 5) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (20, 8) (Spot #0 (thương hiệu=0, tọa độ=(20, 8))) | 25 |
| 17 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (20, 8) (Spot #0 (thương hiệu=0, tọa độ=(20, 8))) | 23 |
| 18-20 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 21 |
| 21-22 | Di chuyển hướng 4 (`4`) | (20, 8) | (20, 9) | Dự kiến di chuyển đến (20, 9); hướng tới tọa độ (19, 13) (Spot #19 (thương hiệu=19, tọa độ=(19, 13))) | 20 |
| 23-25 | Di chuyển hướng 4 (`4`) | (20, 9) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (19, 13) (Spot #19 (thương hiệu=19, tọa độ=(19, 13))) | 18 |
| 26 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến di chuyển đến (19, 11); hướng tới tọa độ (19, 13) (Spot #19 (thương hiệu=19, tọa độ=(19, 13))) | 16 |
| 27-28 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới tọa độ (19, 13) (Spot #19 (thương hiệu=19, tọa độ=(19, 13))) | 15 |
| 29-30 | Di chuyển hướng 3 (`3`) | (18, 12) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 14 |
| 31-32 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến di chuyển đến (19, 14); hướng tới tọa độ (20, 15) (Spot #10 (thương hiệu=10, tọa độ=(20, 15))) | 13 |
| 33-35 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 15)) | 11 |
| 36-37 | Di chuyển hướng 5 (`5`) | (20, 15) | (19, 15) | Dự kiến di chuyển đến (19, 15); hướng tới tọa độ (16, 19) (Spot #7 (thương hiệu=7, tọa độ=(16, 19))) | 10 |
| 38-40 | Di chuyển hướng 5 (`5`) | (19, 15) | (18, 15) | Dự kiến di chuyển đến (18, 15); hướng tới tọa độ (16, 19) (Spot #7 (thương hiệu=7, tọa độ=(16, 19))) | 8 |
| 41 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến di chuyển đến (17, 16); hướng tới tọa độ (16, 19) (Spot #7 (thương hiệu=7, tọa độ=(16, 19))) | 6 |
| 42 | Di chuyển hướng 4 (`4`) | (17, 16) | (17, 17) | Dự kiến di chuyển đến (17, 17); hướng tới tọa độ (16, 19) (Spot #7 (thương hiệu=7, tọa độ=(16, 19))) | 4 |
| 43-45 | Di chuyển hướng 4 (`4`) | (17, 17) | (16, 18) | Dự kiến di chuyển đến (16, 18); hướng tới tọa độ (16, 19) (Spot #7 (thương hiệu=7, tọa độ=(16, 19))) | 2 |
| 46-47 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 1 |
| 48-53 | Chờ 6 bước (`-6`) | (16, 19) | (16, 19) | Dự kiến đứng yên tại (16, 19); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 1 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (20, 8) (ô=188)
- Nhiên liệu đầu ngày: 49
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #1 (thương hiệu=1, tọa độ=(11, 10))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 4, 5, 5, 5, 5, 5, -37]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 8) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 49 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 49 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 8) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 49 |
| 6 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 49 |
| 7 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 49 |
| 8-10 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 49 |
| 11-12 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 49 |
| 13 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 49 |
| 14-15 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (11, 10) (Spot #1 (thương hiệu=1, tọa độ=(11, 10))) | 49 |
| 16 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (11, 10) | 49 |
| 17-53 | Chờ 37 bước (`-37`) | (11, 10) | (11, 10) | Dự kiến đứng yên tại (11, 10); điểm hẹn của xe tuần tra #1 tại (11, 10) | 49 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (14, 17) (ô=371)
- Nhiên liệu đầu ngày: 49
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #18 (thương hiệu=18, tọa độ=(3, 16))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 49 |
| 2-4 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 49 |
| 5 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 49 |
| 6-8 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 49 |
| 9-11 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 49 |
| 12-14 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 49 |
| 15-17 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 49 |
| 18 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 49 |
| 19-20 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 49 |
| 21-22 | Di chuyển hướng 5 (`5`) | (5, 17) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (3, 16) (Spot #18 (thương hiệu=18, tọa độ=(3, 16))) | 49 |
| 23 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (3, 16) | 49 |
| 24-53 | Chờ 30 bước (`-30`) | (3, 16) | (3, 16) | Dự kiến đứng yên tại (3, 16); điểm hẹn của xe tuần tra #0 tại (3, 16) | 49 |

