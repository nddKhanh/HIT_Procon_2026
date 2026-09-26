# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 58
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 20 | #1 | #4 | (2, 20) | 2 | 55 |
| 37 | #3 | #5 | (4, 11) | 7 | 55 |
| 57 | #3 | #4 | (2, 20) | 42 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 1) (ô=27)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(22, 11))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(22, 11))
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 2, 3, 3, 3, 3, 2, 2, 3, 2, 2, 3, 3, 2, 2, 2, 1, 1, 0, 3, 3, 3, 2, 3, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 54 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 53 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 51 |
| 5-6 | Di chuyển hướng 3 (`3`) | (5, 2) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 50 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 49 |
| 9-10 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 48 |
| 11-12 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 47 |
| 13 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 45 |
| 14-15 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 44 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 43 |
| 18-19 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (14, 10) (Spot #22 (thương hiệu=22, tọa độ=(14, 10))) | 42 |
| 20-22 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (14, 10) (Spot #22 (thương hiệu=22, tọa độ=(14, 10))) | 40 |
| 23-24 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (14, 10) (Spot #22 (thương hiệu=22, tọa độ=(14, 10))) | 39 |
| 25 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (14, 10) (Spot #22 (thương hiệu=22, tọa độ=(14, 10))) | 37 |
| 26 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (14, 10) (Spot #22 (thương hiệu=22, tọa độ=(14, 10))) | 35 |
| 27-28 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(14, 10)) | 34 |
| 29-30 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (17, 10) (Spot #19 (thương hiệu=19, tọa độ=(17, 10))) | 33 |
| 31-32 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (17, 10) (Spot #19 (thương hiệu=19, tọa độ=(17, 10))) | 32 |
| 33-34 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 10)) | 31 |
| 35-36 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới tọa độ (18, 8) (Spot #23 (thương hiệu=23, tọa độ=(18, 8))) | 30 |
| 37-38 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(18, 8)) | 29 |
| 39-40 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 7)) | 28 |
| 41-42 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới tọa độ (22, 11) (Spot #1 (thương hiệu=1, tọa độ=(22, 11))) | 27 |
| 43-44 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (22, 11) (Spot #1 (thương hiệu=1, tọa độ=(22, 11))) | 26 |
| 45-46 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (22, 11) (Spot #1 (thương hiệu=1, tọa độ=(22, 11))) | 25 |
| 47 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến di chuyển đến (20, 10); hướng tới tọa độ (22, 11) (Spot #1 (thương hiệu=1, tọa độ=(22, 11))) | 23 |
| 48-49 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến di chuyển đến (21, 11); hướng tới tọa độ (22, 11) (Spot #1 (thương hiệu=1, tọa độ=(22, 11))) | 22 |
| 50-51 | Di chuyển hướng 2 (`2`) | (21, 11) | (22, 11) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(22, 11)) | 21 |
| 52-57 | Chờ 6 bước (`-6`) | (22, 11) | (22, 11) | Dự kiến đứng yên tại (22, 11); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(22, 11)) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (6, 18) (ô=438)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(21, 21))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(21, 21))
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 5, 3, -10, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 3, 3, 3, 3, 3, 1, 2, 1, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 8 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 18) | (5, 19) | Dự kiến di chuyển đến (5, 19); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 7 |
| 4 | Di chuyển hướng 5 (`5`) | (5, 19) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 5 |
| 5-6 | Di chuyển hướng 5 (`5`) | (4, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 4 |
| 7-8 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 19)) | 3 |
| 9-10 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 20)) | 2 |
| 11-20 | Chờ 10 bước (`-10`) | (2, 20) | (2, 20) | Dự kiến đứng yên tại (2, 20); hướng tới tọa độ (2, 20) | 55 |
| 21-22 | Di chuyển hướng 2 (`2`) | (2, 20) | (3, 20) | Dự kiến di chuyển đến (3, 20); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 54 |
| 23-25 | Di chuyển hướng 2 (`2`) | (3, 20) | (4, 20) | Dự kiến di chuyển đến (4, 20); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 52 |
| 26 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến di chuyển đến (5, 20); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 50 |
| 27 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến di chuyển đến (6, 20); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 48 |
| 28-29 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 47 |
| 30-31 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 46 |
| 32 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 44 |
| 33 | Di chuyển hướng 1 (`1`) | (9, 20) | (10, 19) | Dự kiến di chuyển đến (10, 19); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 42 |
| 34-35 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 41 |
| 36 | Di chuyển hướng 1 (`1`) | (11, 19) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 39 |
| 37 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 37 |
| 38 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 35 |
| 39 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 33 |
| 40-41 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến di chuyển đến (14, 21); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 32 |
| 42-44 | Di chuyển hướng 3 (`3`) | (14, 21) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 30 |
| 45-46 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 23)) | 29 |
| 47-48 | Di chuyển hướng 1 (`1`) | (15, 23) | (15, 22) | Dự kiến di chuyển đến (15, 22); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 28 |
| 49-50 | Di chuyển hướng 2 (`2`) | (15, 22) | (16, 22) | Dự kiến di chuyển đến (16, 22); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 27 |
| 51-52 | Di chuyển hướng 1 (`1`) | (16, 22) | (17, 21) | Dự kiến di chuyển đến (17, 21); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 26 |
| 53-54 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 21)) | 25 |
| 55-56 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến di chuyển đến (19, 21); hướng tới tọa độ (21, 21) (Spot #2 (thương hiệu=2, tọa độ=(21, 21))) | 24 |
| 57 | Chờ 1 bước (`-1`) | (19, 21) | (19, 21) | Dự kiến đứng yên tại (19, 21); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 21)) | 24 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 17) (ô=418)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(18, 21))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(18, 21))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 3, 3, 3, 4, 3, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 4, 4, 3, 3, 3, 3, 3, 3, 2, 3, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (10, 13) (Spot #14 (thương hiệu=14, tọa độ=(10, 13))) | 50 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (10, 13) (Spot #14 (thương hiệu=14, tọa độ=(10, 13))) | 49 |
| 4-5 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (10, 13) (Spot #14 (thương hiệu=14, tọa độ=(10, 13))) | 48 |
| 6-7 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 13)) | 47 |
| 8-9 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (11, 16) (Spot #17 (thương hiệu=17, tọa độ=(11, 16))) | 46 |
| 10-12 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (11, 16) (Spot #17 (thương hiệu=17, tọa độ=(11, 16))) | 44 |
| 13-14 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 43 |
| 15-16 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (17, 13) (Spot #3 (thương hiệu=3, tọa độ=(17, 13))) | 42 |
| 17-18 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (17, 13) (Spot #3 (thương hiệu=3, tọa độ=(17, 13))) | 41 |
| 19 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (17, 13) (Spot #3 (thương hiệu=3, tọa độ=(17, 13))) | 39 |
| 20 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (17, 13) (Spot #3 (thương hiệu=3, tọa độ=(17, 13))) | 37 |
| 21-22 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (17, 13) (Spot #3 (thương hiệu=3, tọa độ=(17, 13))) | 36 |
| 23-24 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến di chuyển đến (14, 15); hướng tới tọa độ (17, 13) (Spot #3 (thương hiệu=3, tọa độ=(17, 13))) | 35 |
| 25-26 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (17, 13) (Spot #3 (thương hiệu=3, tọa độ=(17, 13))) | 34 |
| 27 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến di chuyển đến (16, 15); hướng tới tọa độ (17, 13) (Spot #3 (thương hiệu=3, tọa độ=(17, 13))) | 32 |
| 28-29 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (17, 13) (Spot #3 (thương hiệu=3, tọa độ=(17, 13))) | 31 |
| 30 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 13)) | 29 |
| 31-32 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến di chuyển đến (18, 13); hướng tới tọa độ (19, 13) (Spot #18 (thương hiệu=18, tọa độ=(19, 13))) | 28 |
| 33-35 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(19, 13)) | 26 |
| 36-37 | Di chuyển hướng 4 (`4`) | (19, 13) | (18, 14) | Dự kiến di chuyển đến (18, 14); hướng tới tọa độ (21, 21) (Spot #2 (thương hiệu=2, tọa độ=(21, 21))) | 25 |
| 38-39 | Di chuyển hướng 4 (`4`) | (18, 14) | (18, 15) | Dự kiến di chuyển đến (18, 15); hướng tới tọa độ (21, 21) (Spot #2 (thương hiệu=2, tọa độ=(21, 21))) | 24 |
| 40-41 | Di chuyển hướng 3 (`3`) | (18, 15) | (18, 16) | Dự kiến di chuyển đến (18, 16); hướng tới tọa độ (21, 21) (Spot #2 (thương hiệu=2, tọa độ=(21, 21))) | 23 |
| 42 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến di chuyển đến (19, 17); hướng tới tọa độ (21, 21) (Spot #2 (thương hiệu=2, tọa độ=(21, 21))) | 21 |
| 43-44 | Di chuyển hướng 3 (`3`) | (19, 17) | (19, 18) | Dự kiến di chuyển đến (19, 18); hướng tới tọa độ (21, 21) (Spot #2 (thương hiệu=2, tọa độ=(21, 21))) | 20 |
| 45-46 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến di chuyển đến (20, 19); hướng tới tọa độ (21, 21) (Spot #2 (thương hiệu=2, tọa độ=(21, 21))) | 19 |
| 47-48 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (21, 21) (Spot #2 (thương hiệu=2, tọa độ=(21, 21))) | 18 |
| 49 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 21)) | 16 |
| 50-51 | Di chuyển hướng 2 (`2`) | (21, 21) | (22, 21) | Dự kiến di chuyển đến (22, 21); hướng tới tọa độ (23, 22) (Spot #12 (thương hiệu=12, tọa độ=(23, 22))) | 15 |
| 52-53 | Di chuyển hướng 3 (`3`) | (22, 21) | (22, 22) | Dự kiến di chuyển đến (22, 22); hướng tới tọa độ (23, 22) (Spot #12 (thương hiệu=12, tọa độ=(23, 22))) | 14 |
| 54-55 | Di chuyển hướng 2 (`2`) | (22, 22) | (23, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(23, 22)) | 13 |
| 56-57 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến di chuyển đến (22, 22); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 12 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 22) (ô=537)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(2, 20))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(2, 20))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 3, 3, 3, -1, 5, 4, 4, 3, 4, 3, 4, 3, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (9, 22) | (9, 21) | Dự kiến di chuyển đến (9, 21); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 28 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 27 |
| 4 | Di chuyển hướng 0 (`0`) | (8, 20) | (8, 19) | Dự kiến di chuyển đến (8, 19); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 25 |
| 5-6 | Di chuyển hướng 0 (`0`) | (8, 19) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 24 |
| 7-8 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến di chuyển đến (6, 18); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 23 |
| 9-10 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến di chuyển đến (5, 18); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 22 |
| 11-12 | Di chuyển hướng 0 (`0`) | (5, 18) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 21 |
| 13-15 | Di chuyển hướng 0 (`0`) | (5, 17) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 19 |
| 16-17 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 18 |
| 18-19 | Di chuyển hướng 0 (`0`) | (4, 15) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 17 |
| 20-21 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 16 |
| 22-23 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 15 |
| 24 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 13 |
| 25-26 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 12 |
| 27-28 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 11 |
| 29-30 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(2, 8)) | 10 |
| 31-32 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 9 |
| 33-34 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 8 |
| 35-36 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 11)) | 55 |
| 37 | Chờ 1 bước (`-1`) | (4, 11) | (4, 11) | Dự kiến đứng yên tại (4, 11); hướng tới tọa độ (4, 11) | 55 |
| 38-39 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 54 |
| 40-41 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 53 |
| 42 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 51 |
| 43-44 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 50 |
| 45-46 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến di chuyển đến (2, 15); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 49 |
| 47-48 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 48 |
| 49 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 46 |
| 50-52 | Di chuyển hướng 3 (`3`) | (2, 17) | (2, 18) | Dự kiến di chuyển đến (2, 18); hướng tới tọa độ (2, 19) (Spot #4 (thương hiệu=4, tọa độ=(2, 19))) | 44 |
| 53-54 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 19)) | 43 |
| 55-56 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 20)) | 55 |
| 57 | Chờ 1 bước (`-1`) | (2, 20) | (2, 20) | Dự kiến đứng yên tại (2, 20); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 20)) | 55 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (10, 13) (ô=322)
- Nhiên liệu đầu ngày: 55
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #5 (thương hiệu=5, tọa độ=(2, 20))
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 5, 5, 4, 4, 4, 4, 4, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 20) (Spot #5 (thương hiệu=5, tọa độ=(2, 20))) | 55 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 20) (Spot #5 (thương hiệu=5, tọa độ=(2, 20))) | 55 |
| 4-5 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 20) (Spot #5 (thương hiệu=5, tọa độ=(2, 20))) | 55 |
| 6-7 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 20) (Spot #5 (thương hiệu=5, tọa độ=(2, 20))) | 55 |
| 8 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 20) (Spot #5 (thương hiệu=5, tọa độ=(2, 20))) | 55 |
| 9-10 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 20) (Spot #5 (thương hiệu=5, tọa độ=(2, 20))) | 55 |
| 11 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 20) (Spot #5 (thương hiệu=5, tọa độ=(2, 20))) | 55 |
| 12-13 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 20) (Spot #5 (thương hiệu=5, tọa độ=(2, 20))) | 55 |
| 14-15 | Di chuyển hướng 4 (`4`) | (4, 17) | (3, 18) | Dự kiến di chuyển đến (3, 18); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 20) (Spot #5 (thương hiệu=5, tọa độ=(2, 20))) | 55 |
| 16-17 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 20) (Spot #5 (thương hiệu=5, tọa độ=(2, 20))) | 55 |
| 18-19 | Di chuyển hướng 4 (`4`) | (3, 19) | (2, 20) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (2, 20) | 55 |
| 20-57 | Chờ 38 bước (`-38`) | (2, 20) | (2, 20) | Dự kiến đứng yên tại (2, 20); điểm hẹn của xe tuần tra #1 tại (2, 20) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (3, 1) (ô=27)
- Nhiên liệu đầu ngày: 55
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #7 (thương hiệu=7, tọa độ=(4, 11))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 4, 4, 4, 3, 3, 3, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 55 |
| 2-3 | Di chuyển hướng 3 (`3`) | (2, 2) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 55 |
| 4 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 55 |
| 5-6 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến di chuyển đến (4, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 55 |
| 7 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 55 |
| 8-9 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 55 |
| 10-11 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 55 |
| 12-13 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 55 |
| 14-15 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 55 |
| 16-17 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (4, 11) | 55 |
| 18-57 | Chờ 40 bước (`-40`) | (4, 11) | (4, 11) | Dự kiến đứng yên tại (4, 11); điểm hẹn của xe tuần tra #3 tại (4, 11) | 55 |

