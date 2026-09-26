# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 60
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 32 | #2 | #5 | (15, 23) | 3 | 55 |
| 33 | #0 | #4 | (10, 7) | 2 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (22, 11) (ô=286)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(18, 7))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(18, 7))
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 5, 5, 5, 5, 0, 0, 5, 5, 5, 0, -9, 0, 5, 0, 0, 0, 0, 5, 5, 5, 0, 2, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến di chuyển đến (21, 11); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 20 |
| 2-3 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến di chuyển đến (20, 10); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 19 |
| 4-5 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 18 |
| 6 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến di chuyển đến (18, 10); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 16 |
| 7 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến di chuyển đến (17, 10); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 14 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 13 |
| 10-11 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 12 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 11 |
| 14-15 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 10 |
| 16-17 | Di chuyển hướng 0 (`0`) | (14, 9) | (13, 8) | Dự kiến di chuyển đến (13, 8); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 9 |
| 18 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 7 |
| 19 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 5 |
| 20-21 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 4 |
| 22-24 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 2 |
| 25-33 | Chờ 9 bước (`-9`) | (10, 7) | (10, 7) | Dự kiến đứng yên tại (10, 7); hướng tới tọa độ (10, 7) | 55 |
| 34-35 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (7, 3) (Spot #20 (thương hiệu=20, tọa độ=(7, 3))) | 54 |
| 36-37 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (7, 3) (Spot #20 (thương hiệu=20, tọa độ=(7, 3))) | 53 |
| 38-39 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (7, 3) (Spot #20 (thương hiệu=20, tọa độ=(7, 3))) | 52 |
| 40 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (7, 3) (Spot #20 (thương hiệu=20, tọa độ=(7, 3))) | 50 |
| 41-42 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 3)) | 49 |
| 43-44 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (3, 1) (Spot #10 (thương hiệu=10, tọa độ=(3, 1))) | 48 |
| 45-46 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (3, 1) (Spot #10 (thương hiệu=10, tọa độ=(3, 1))) | 47 |
| 47-48 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (3, 1) (Spot #10 (thương hiệu=10, tọa độ=(3, 1))) | 46 |
| 49 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (3, 1) (Spot #10 (thương hiệu=10, tọa độ=(3, 1))) | 44 |
| 50-51 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 1)) | 43 |
| 52-53 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (18, 7) (Spot #9 (thương hiệu=9, tọa độ=(18, 7))) | 42 |
| 54-55 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (18, 7) (Spot #9 (thương hiệu=9, tọa độ=(18, 7))) | 41 |
| 56 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (18, 7) (Spot #9 (thương hiệu=9, tọa độ=(18, 7))) | 39 |
| 57-58 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến di chuyển đến (5, 4); hướng tới tọa độ (18, 7) (Spot #9 (thương hiệu=9, tọa độ=(18, 7))) | 38 |
| 59 | Chờ 1 bước (`-1`) | (5, 4) | (5, 4) | Dự kiến đứng yên tại (5, 4); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 7)) | 38 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (19, 21) (ô=523)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(17, 13))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(17, 13))
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 2, 5, 0, 5, 5, 5, 5, 1, 1, 1, 0, 0, 0, 1, 1, 5, 5, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới tọa độ (23, 22) (Spot #12 (thương hiệu=12, tọa độ=(23, 22))) | 23 |
| 2-3 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (23, 22) (Spot #12 (thương hiệu=12, tọa độ=(23, 22))) | 22 |
| 4-5 | Di chuyển hướng 3 (`3`) | (21, 21) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (23, 22) (Spot #12 (thương hiệu=12, tọa độ=(23, 22))) | 21 |
| 6-7 | Di chuyển hướng 2 (`2`) | (21, 22) | (22, 22) | Dự kiến di chuyển đến (22, 22); hướng tới tọa độ (23, 22) (Spot #12 (thương hiệu=12, tọa độ=(23, 22))) | 20 |
| 8-9 | Di chuyển hướng 2 (`2`) | (22, 22) | (23, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(23, 22)) | 19 |
| 10-11 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến di chuyển đến (22, 22); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 18 |
| 12-13 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến di chuyển đến (22, 21); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 17 |
| 14-15 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 16 |
| 16-17 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 15 |
| 18-19 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến di chuyển đến (19, 21); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 14 |
| 20-21 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 21)) | 13 |
| 22-23 | Di chuyển hướng 1 (`1`) | (18, 21) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới tọa độ (19, 13) (Spot #18 (thương hiệu=18, tọa độ=(19, 13))) | 12 |
| 24-25 | Di chuyển hướng 1 (`1`) | (18, 20) | (19, 19) | Dự kiến di chuyển đến (19, 19); hướng tới tọa độ (19, 13) (Spot #18 (thương hiệu=18, tọa độ=(19, 13))) | 11 |
| 26-27 | Di chuyển hướng 1 (`1`) | (19, 19) | (19, 18) | Dự kiến di chuyển đến (19, 18); hướng tới tọa độ (19, 13) (Spot #18 (thương hiệu=18, tọa độ=(19, 13))) | 10 |
| 28-29 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến di chuyển đến (19, 17); hướng tới tọa độ (19, 13) (Spot #18 (thương hiệu=18, tọa độ=(19, 13))) | 9 |
| 30-31 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến di chuyển đến (18, 16); hướng tới tọa độ (19, 13) (Spot #18 (thương hiệu=18, tọa độ=(19, 13))) | 8 |
| 32 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến di chuyển đến (18, 15); hướng tới tọa độ (19, 13) (Spot #18 (thương hiệu=18, tọa độ=(19, 13))) | 6 |
| 33-34 | Di chuyển hướng 1 (`1`) | (18, 15) | (18, 14) | Dự kiến di chuyển đến (18, 14); hướng tới tọa độ (19, 13) (Spot #18 (thương hiệu=18, tọa độ=(19, 13))) | 5 |
| 35-36 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(19, 13)) | 4 |
| 37-38 | Di chuyển hướng 5 (`5`) | (19, 13) | (18, 13) | Dự kiến di chuyển đến (18, 13); hướng tới tọa độ (17, 13) (Spot #3 (thương hiệu=3, tọa độ=(17, 13))) | 3 |
| 39-41 | Di chuyển hướng 5 (`5`) | (18, 13) | (17, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 13)) | 1 |
| 42-59 | Chờ 18 bước (`-18`) | (17, 13) | (17, 13) | Dự kiến đứng yên tại (17, 13); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 13)) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (22, 22) (ô=550)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(9, 22))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(9, 22))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 4, 5, 4, -15, 0, 0, 0, 0, 0, 5, 0, 5, 0, 4, 3, 3, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến di chuyển đến (22, 21); hướng tới tọa độ (21, 21) (Spot #2 (thương hiệu=2, tọa độ=(21, 21))) | 11 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 21)) | 10 |
| 4-5 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 9 |
| 6-7 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến di chuyển đến (19, 21); hướng tới tọa độ (18, 21) (Spot #16 (thương hiệu=16, tọa độ=(18, 21))) | 8 |
| 8-9 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 21)) | 7 |
| 10-11 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến di chuyển đến (17, 21); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 6 |
| 12-13 | Di chuyển hướng 4 (`4`) | (17, 21) | (16, 22) | Dự kiến di chuyển đến (16, 22); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 5 |
| 14-15 | Di chuyển hướng 5 (`5`) | (16, 22) | (15, 22) | Dự kiến di chuyển đến (15, 22); hướng tới tọa độ (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 4 |
| 16-17 | Di chuyển hướng 4 (`4`) | (15, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 23)) | 3 |
| 18-32 | Chờ 15 bước (`-15`) | (15, 23) | (15, 23) | Dự kiến đứng yên tại (15, 23); hướng tới tọa độ (15, 23) | 55 |
| 33-34 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới tọa độ (10, 17) (Spot #21 (thương hiệu=21, tọa độ=(10, 17))) | 54 |
| 35-36 | Di chuyển hướng 0 (`0`) | (14, 22) | (14, 21) | Dự kiến di chuyển đến (14, 21); hướng tới tọa độ (10, 17) (Spot #21 (thương hiệu=21, tọa độ=(10, 17))) | 53 |
| 37-39 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (10, 17) (Spot #21 (thương hiệu=21, tọa độ=(10, 17))) | 51 |
| 40-41 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (10, 17) (Spot #21 (thương hiệu=21, tọa độ=(10, 17))) | 50 |
| 42 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới tọa độ (10, 17) (Spot #21 (thương hiệu=21, tọa độ=(10, 17))) | 48 |
| 43 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới tọa độ (10, 17) (Spot #21 (thương hiệu=21, tọa độ=(10, 17))) | 46 |
| 44 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (10, 17) (Spot #21 (thương hiệu=21, tọa độ=(10, 17))) | 44 |
| 45-46 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 43 |
| 47-48 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 42 |
| 49-50 | Di chuyển hướng 4 (`4`) | (9, 16) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (9, 22) (Spot #6 (thương hiệu=6, tọa độ=(9, 22))) | 41 |
| 51-52 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới tọa độ (9, 22) (Spot #6 (thương hiệu=6, tọa độ=(9, 22))) | 40 |
| 53-54 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến di chuyển đến (10, 19); hướng tới tọa độ (9, 22) (Spot #6 (thương hiệu=6, tọa độ=(9, 22))) | 39 |
| 55-56 | Di chuyển hướng 4 (`4`) | (10, 19) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (9, 22) (Spot #6 (thương hiệu=6, tọa độ=(9, 22))) | 38 |
| 57 | Di chuyển hướng 3 (`3`) | (9, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (9, 22) (Spot #6 (thương hiệu=6, tọa độ=(9, 22))) | 36 |
| 58-59 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(9, 22)) | 35 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 20) (ô=482)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(3, 1))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(3, 1))
- Mảng hành động đã gửi server: `[0, 2, 2, 2, 2, 1, 2, 1, 1, 2, 3, 1, 2, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 0, 1, 2, 0, 0, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 19)) | 54 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (6, 18) (Spot #15 (thương hiệu=15, tọa độ=(6, 18))) | 53 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (6, 18) (Spot #15 (thương hiệu=15, tọa độ=(6, 18))) | 52 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 19) | (5, 19) | Dự kiến di chuyển đến (5, 19); hướng tới tọa độ (6, 18) (Spot #15 (thương hiệu=15, tọa độ=(6, 18))) | 51 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 19) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (6, 18) (Spot #15 (thương hiệu=15, tọa độ=(6, 18))) | 49 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 48 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến di chuyển đến (7, 18); hướng tới tọa độ (9, 16) (Spot #13 (thương hiệu=13, tọa độ=(9, 16))) | 47 |
| 13-14 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (9, 16) (Spot #13 (thương hiệu=13, tọa độ=(9, 16))) | 46 |
| 15-16 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (9, 16) (Spot #13 (thương hiệu=13, tọa độ=(9, 16))) | 45 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 44 |
| 19-20 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 43 |
| 21-22 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (11, 16) (Spot #17 (thương hiệu=17, tọa độ=(11, 16))) | 42 |
| 23 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 40 |
| 24-25 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (10, 13) (Spot #14 (thương hiệu=14, tọa độ=(10, 13))) | 39 |
| 26-27 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (10, 13) (Spot #14 (thương hiệu=14, tọa độ=(10, 13))) | 38 |
| 28-30 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 13)) | 36 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 35 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 34 |
| 35-36 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 33 |
| 37-38 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 32 |
| 39-40 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 31 |
| 41-42 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 30 |
| 43-44 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 29 |
| 45-46 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 28 |
| 47 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (4, 11) (Spot #7 (thương hiệu=7, tọa độ=(4, 11))) | 26 |
| 48-49 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 11)) | 25 |
| 50-51 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 24 |
| 52-53 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (2, 8) (Spot #8 (thương hiệu=8, tọa độ=(2, 8))) | 23 |
| 54-55 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(2, 8)) | 22 |
| 56-57 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (3, 1) (Spot #10 (thương hiệu=10, tọa độ=(3, 1))) | 21 |
| 58-59 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (3, 1) (Spot #10 (thương hiệu=10, tọa độ=(3, 1))) | 20 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (2, 20) (ô=482)
- Nhiên liệu đầu ngày: 55
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #0 (thương hiệu=0, tọa độ=(10, 7))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 0, 0, 0, 0, 1, 2, 2, 1, 1, 1, 2, 2, 1, 2, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 20) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 2-3 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến di chuyển đến (3, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 18) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 6-7 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 8-9 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 10-11 | Di chuyển hướng 0 (`0`) | (4, 15) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 12-13 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 14-15 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 16 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 17-18 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 19-20 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 21-22 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 23 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 24-25 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 26 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 27-28 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 29-30 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (10, 7) (Spot #0 (thương hiệu=0, tọa độ=(10, 7))) | 55 |
| 31-32 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (10, 7) | 55 |
| 33-59 | Chờ 27 bước (`-27`) | (10, 7) | (10, 7) | Dự kiến đứng yên tại (10, 7); điểm hẹn của xe tuần tra #0 tại (10, 7) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 11) (ô=268)
- Nhiên liệu đầu ngày: 55
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #11 (thương hiệu=11, tọa độ=(15, 23))
- Mảng hành động đã gửi server: `[5, 4, 3, 3, 2, 3, 2, 2, 3, 2, 2, 2, 3, 3, 2, 3, 3, 3, 3, 3, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 4 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 5-6 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 7-8 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 9 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 10 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 13 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 14 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 15-16 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 17-18 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 19 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 20-21 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến di chuyển đến (11, 18); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 22 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến di chuyển đến (12, 18); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 23 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 24 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 25-26 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến di chuyển đến (14, 21); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 27-29 | Di chuyển hướng 3 (`3`) | (14, 21) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới điểm hẹn của xe tuần tra #2 tại (15, 23) (Spot #11 (thương hiệu=11, tọa độ=(15, 23))) | 55 |
| 30-31 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (15, 23) | 55 |
| 32-59 | Chờ 28 bước (`-28`) | (15, 23) | (15, 23) | Dự kiến đứng yên tại (15, 23); điểm hẹn của xe tuần tra #2 tại (15, 23) | 55 |

