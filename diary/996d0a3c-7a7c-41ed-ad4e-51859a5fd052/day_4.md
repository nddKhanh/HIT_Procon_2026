# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 80
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 18 | #3 | #6 | (29, 8) | 0 | 74 |
| 37 | #5 | #7 | (22, 31) | 3 | 74 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 8) (ô=277)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(8, 7))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(8, 7))
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 5, 5, 5, 5, 4, 5, 4, 4, 4, 4, 5, 0, 0, 5, 5, 5, 0, 5, 5, 4, 1, 1, 1, 1, 1, 2, 2, 2, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 8) | (20, 8) | Dự kiến di chuyển đến (20, 8); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 46 |
| 2-3 | Di chuyển hướng 4 (`4`) | (20, 8) | (20, 9) | Dự kiến di chuyển đến (20, 9); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 45 |
| 4-5 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 44 |
| 6-7 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 43 |
| 8 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 41 |
| 9-11 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến di chuyển đến (16, 9); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 39 |
| 12 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 37 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 36 |
| 15-16 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 35 |
| 17 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (12, 11) (Spot #3 (thương hiệu=3, tọa độ=(12, 11))) | 33 |
| 18-19 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 32 |
| 20-21 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (10, 14) (Spot #23 (thương hiệu=23, tọa độ=(10, 14))) | 31 |
| 22-23 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (10, 14) (Spot #23 (thương hiệu=23, tọa độ=(10, 14))) | 30 |
| 24 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 14)) | 28 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 14) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (4, 11) (Spot #9 (thương hiệu=9, tọa độ=(4, 11))) | 27 |
| 27-28 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (4, 11) (Spot #9 (thương hiệu=9, tọa độ=(4, 11))) | 26 |
| 29 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (4, 11) (Spot #9 (thương hiệu=9, tọa độ=(4, 11))) | 24 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (4, 11) (Spot #9 (thương hiệu=9, tọa độ=(4, 11))) | 23 |
| 32 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (4, 11) (Spot #9 (thương hiệu=9, tọa độ=(4, 11))) | 21 |
| 33 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (4, 11) (Spot #9 (thương hiệu=9, tọa độ=(4, 11))) | 19 |
| 34 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (4, 11) (Spot #9 (thương hiệu=9, tọa độ=(4, 11))) | 17 |
| 35-36 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 11)) | 16 |
| 37-38 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (2, 12) (Spot #24 (thương hiệu=24, tọa độ=(2, 12))) | 15 |
| 39 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(2, 12)) | 13 |
| 40-41 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (4, 8) (Spot #1 (thương hiệu=1, tọa độ=(4, 8))) | 12 |
| 42 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (4, 8) (Spot #1 (thương hiệu=1, tọa độ=(4, 8))) | 10 |
| 43-45 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (4, 8) (Spot #1 (thương hiệu=1, tọa độ=(4, 8))) | 8 |
| 46 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 8)) | 6 |
| 47-48 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới tọa độ (8, 7) (Spot #4 (thương hiệu=4, tọa độ=(8, 7))) | 5 |
| 49 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (8, 7) (Spot #4 (thương hiệu=4, tọa độ=(8, 7))) | 3 |
| 50-51 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới tọa độ (8, 7) (Spot #4 (thương hiệu=4, tọa độ=(8, 7))) | 2 |
| 52 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 0 |
| 53-79 | Chờ 27 bước (`-27`) | (8, 7) | (8, 7) | Dự kiến đứng yên tại (8, 7); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 7) (ô=232)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 7)
- Mảng hành động đã gửi server: `[-80]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-79 | Chờ 80 bước (`-80`) | (8, 7) | (8, 7) | Dự kiến đứng yên tại (8, 7); hướng tới tọa độ (8, 7) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 9) (ô=297)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(4, 8))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(4, 8))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, -70]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (4, 8) (Spot #1 (thương hiệu=1, tọa độ=(4, 8))) | 4 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (4, 8) (Spot #1 (thương hiệu=1, tọa độ=(4, 8))) | 3 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (4, 8) (Spot #1 (thương hiệu=1, tọa độ=(4, 8))) | 2 |
| 6-7 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (4, 8) (Spot #1 (thương hiệu=1, tọa độ=(4, 8))) | 1 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 8)) | 0 |
| 10-79 | Chờ 70 bước (`-70`) | (4, 8) | (4, 8) | Dự kiến đứng yên tại (4, 8); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 8)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 10) (ô=341)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(26, 0))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(26, 0))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 2, 2, 1, -1, 5, 5, 5, 4, 4, 4, 4, 5, 5, 0, 1, 0, 0, 0, 0, 0, 0, 5, 5, 4, 1, 0, 1, 1, 1, 3, 2, 2, 2, 2, 2, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến di chuyển đến (22, 9); hướng tới tọa độ (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 9 |
| 3-4 | Di chuyển hướng 2 (`2`) | (22, 9) | (23, 9) | Dự kiến di chuyển đến (23, 9); hướng tới tọa độ (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 8 |
| 5-6 | Di chuyển hướng 2 (`2`) | (23, 9) | (24, 9) | Dự kiến di chuyển đến (24, 9); hướng tới tọa độ (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 7 |
| 7 | Di chuyển hướng 2 (`2`) | (24, 9) | (25, 9) | Dự kiến di chuyển đến (25, 9); hướng tới tọa độ (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 5 |
| 8-9 | Di chuyển hướng 2 (`2`) | (25, 9) | (26, 9) | Dự kiến di chuyển đến (26, 9); hướng tới tọa độ (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 4 |
| 10-11 | Di chuyển hướng 2 (`2`) | (26, 9) | (27, 9) | Dự kiến di chuyển đến (27, 9); hướng tới tọa độ (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 3 |
| 12-13 | Di chuyển hướng 2 (`2`) | (27, 9) | (28, 9) | Dự kiến di chuyển đến (28, 9); hướng tới tọa độ (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 2 |
| 14-15 | Di chuyển hướng 2 (`2`) | (28, 9) | (29, 9) | Dự kiến di chuyển đến (29, 9); hướng tới tọa độ (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 1 |
| 16-17 | Di chuyển hướng 1 (`1`) | (29, 9) | (29, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(29, 8)) | 74 |
| 18 | Chờ 1 bước (`-1`) | (29, 8) | (29, 8) | Dự kiến đứng yên tại (29, 8); hướng tới tọa độ (29, 8) | 74 |
| 19-20 | Di chuyển hướng 5 (`5`) | (29, 8) | (28, 8) | Dự kiến di chuyển đến (28, 8); hướng tới tọa độ (22, 12) (Spot #7 (thương hiệu=7, tọa độ=(22, 12))) | 73 |
| 21-22 | Di chuyển hướng 5 (`5`) | (28, 8) | (27, 8) | Dự kiến di chuyển đến (27, 8); hướng tới tọa độ (22, 12) (Spot #7 (thương hiệu=7, tọa độ=(22, 12))) | 72 |
| 23 | Di chuyển hướng 5 (`5`) | (27, 8) | (26, 8) | Dự kiến di chuyển đến (26, 8); hướng tới tọa độ (22, 12) (Spot #7 (thương hiệu=7, tọa độ=(22, 12))) | 70 |
| 24 | Di chuyển hướng 4 (`4`) | (26, 8) | (26, 9) | Dự kiến di chuyển đến (26, 9); hướng tới tọa độ (22, 12) (Spot #7 (thương hiệu=7, tọa độ=(22, 12))) | 68 |
| 25-26 | Di chuyển hướng 4 (`4`) | (26, 9) | (25, 10) | Dự kiến di chuyển đến (25, 10); hướng tới tọa độ (22, 12) (Spot #7 (thương hiệu=7, tọa độ=(22, 12))) | 67 |
| 27-28 | Di chuyển hướng 4 (`4`) | (25, 10) | (25, 11) | Dự kiến di chuyển đến (25, 11); hướng tới tọa độ (22, 12) (Spot #7 (thương hiệu=7, tọa độ=(22, 12))) | 66 |
| 29-30 | Di chuyển hướng 4 (`4`) | (25, 11) | (24, 12) | Dự kiến di chuyển đến (24, 12); hướng tới tọa độ (22, 12) (Spot #7 (thương hiệu=7, tọa độ=(22, 12))) | 65 |
| 31-32 | Di chuyển hướng 5 (`5`) | (24, 12) | (23, 12) | Dự kiến di chuyển đến (23, 12); hướng tới tọa độ (22, 12) (Spot #7 (thương hiệu=7, tọa độ=(22, 12))) | 64 |
| 33 | Di chuyển hướng 5 (`5`) | (23, 12) | (22, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 12)) | 62 |
| 34-35 | Di chuyển hướng 0 (`0`) | (22, 12) | (22, 11) | Dự kiến di chuyển đến (22, 11); hướng tới tọa độ (18, 4) (Spot #28 (thương hiệu=28, tọa độ=(18, 4))) | 61 |
| 36-37 | Di chuyển hướng 1 (`1`) | (22, 11) | (22, 10) | Dự kiến di chuyển đến (22, 10); hướng tới tọa độ (18, 4) (Spot #28 (thương hiệu=28, tọa độ=(18, 4))) | 60 |
| 38 | Di chuyển hướng 0 (`0`) | (22, 10) | (22, 9) | Dự kiến di chuyển đến (22, 9); hướng tới tọa độ (18, 4) (Spot #28 (thương hiệu=28, tọa độ=(18, 4))) | 58 |
| 39-40 | Di chuyển hướng 0 (`0`) | (22, 9) | (21, 8) | Dự kiến di chuyển đến (21, 8); hướng tới tọa độ (18, 4) (Spot #28 (thương hiệu=28, tọa độ=(18, 4))) | 57 |
| 41-42 | Di chuyển hướng 0 (`0`) | (21, 8) | (21, 7) | Dự kiến di chuyển đến (21, 7); hướng tới tọa độ (18, 4) (Spot #28 (thương hiệu=28, tọa độ=(18, 4))) | 56 |
| 43-44 | Di chuyển hướng 0 (`0`) | (21, 7) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (18, 4) (Spot #28 (thương hiệu=28, tọa độ=(18, 4))) | 55 |
| 45-46 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến di chuyển đến (20, 5); hướng tới tọa độ (18, 4) (Spot #28 (thương hiệu=28, tọa độ=(18, 4))) | 54 |
| 47-48 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (18, 4) (Spot #28 (thương hiệu=28, tọa độ=(18, 4))) | 53 |
| 49 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=28, tọa độ=(18, 4)) | 51 |
| 50-51 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (17, 5) (Spot #13 (thương hiệu=13, tọa độ=(17, 5))) | 50 |
| 52 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 5)) | 48 |
| 53-54 | Di chuyển hướng 1 (`1`) | (17, 5) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (18, 0) (Spot #21 (thương hiệu=21, tọa độ=(18, 0))) | 47 |
| 55 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (18, 0) (Spot #21 (thương hiệu=21, tọa độ=(18, 0))) | 45 |
| 56-57 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (18, 0) (Spot #21 (thương hiệu=21, tọa độ=(18, 0))) | 44 |
| 58-59 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến di chuyển đến (18, 1); hướng tới tọa độ (18, 0) (Spot #21 (thương hiệu=21, tọa độ=(18, 0))) | 43 |
| 60-61 | Di chuyển hướng 1 (`1`) | (18, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 0)) | 42 |
| 62-63 | Di chuyển hướng 3 (`3`) | (18, 0) | (19, 1) | Dự kiến di chuyển đến (19, 1); hướng tới tọa độ (26, 0) (Spot #18 (thương hiệu=18, tọa độ=(26, 0))) | 41 |
| 64-65 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến di chuyển đến (20, 1); hướng tới tọa độ (26, 0) (Spot #18 (thương hiệu=18, tọa độ=(26, 0))) | 40 |
| 66-67 | Di chuyển hướng 2 (`2`) | (20, 1) | (21, 1) | Dự kiến di chuyển đến (21, 1); hướng tới tọa độ (26, 0) (Spot #18 (thương hiệu=18, tọa độ=(26, 0))) | 39 |
| 68-69 | Di chuyển hướng 2 (`2`) | (21, 1) | (22, 1) | Dự kiến di chuyển đến (22, 1); hướng tới tọa độ (26, 0) (Spot #18 (thương hiệu=18, tọa độ=(26, 0))) | 38 |
| 70-71 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến di chuyển đến (23, 1); hướng tới tọa độ (26, 0) (Spot #18 (thương hiệu=18, tọa độ=(26, 0))) | 37 |
| 72-73 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến di chuyển đến (24, 1); hướng tới tọa độ (26, 0) (Spot #18 (thương hiệu=18, tọa độ=(26, 0))) | 36 |
| 74 | Di chuyển hướng 2 (`2`) | (24, 1) | (25, 1) | Dự kiến di chuyển đến (25, 1); hướng tới tọa độ (26, 0) (Spot #18 (thương hiệu=18, tọa độ=(26, 0))) | 34 |
| 75-76 | Di chuyển hướng 2 (`2`) | (25, 1) | (26, 1) | Dự kiến di chuyển đến (26, 1); hướng tới tọa độ (26, 0) (Spot #18 (thương hiệu=18, tọa độ=(26, 0))) | 33 |
| 77-78 | Di chuyển hướng 1 (`1`) | (26, 1) | (26, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(26, 0)) | 32 |
| 79 | Chờ 1 bước (`-1`) | (26, 0) | (26, 0) | Dự kiến đứng yên tại (26, 0); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(26, 0)) | 32 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 22) (ô=718)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #31 (thương hiệu=31, tọa độ=(15, 28))
- Địa điểm đích kế hoạch: Spot #31 (thương hiệu=31, tọa độ=(15, 28))
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 0, 5, 5, 0, 5, 3, 3, 4, 4, 4, 4, 4, 4, 5, 4, 3, 2, 3, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 3, 3, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 22) | (14, 21) | Dự kiến di chuyển đến (14, 21); hướng tới tọa độ (7, 18) (Spot #8 (thương hiệu=8, tọa độ=(7, 18))) | 50 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 21) | (13, 21) | Dự kiến di chuyển đến (13, 21); hướng tới tọa độ (7, 18) (Spot #8 (thương hiệu=8, tọa độ=(7, 18))) | 49 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 21) | (12, 20) | Dự kiến di chuyển đến (12, 20); hướng tới tọa độ (7, 18) (Spot #8 (thương hiệu=8, tọa độ=(7, 18))) | 48 |
| 6 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến di chuyển đến (11, 20); hướng tới tọa độ (7, 18) (Spot #8 (thương hiệu=8, tọa độ=(7, 18))) | 46 |
| 7-8 | Di chuyển hướng 0 (`0`) | (11, 20) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (7, 18) (Spot #8 (thương hiệu=8, tọa độ=(7, 18))) | 45 |
| 9 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến di chuyển đến (10, 19); hướng tới tọa độ (7, 18) (Spot #8 (thương hiệu=8, tọa độ=(7, 18))) | 43 |
| 10 | Di chuyển hướng 5 (`5`) | (10, 19) | (9, 19) | Dự kiến di chuyển đến (9, 19); hướng tới tọa độ (7, 18) (Spot #8 (thương hiệu=8, tọa độ=(7, 18))) | 41 |
| 11 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến di chuyển đến (8, 18); hướng tới tọa độ (7, 18) (Spot #8 (thương hiệu=8, tọa độ=(7, 18))) | 39 |
| 12-13 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(7, 18)) | 38 |
| 14-15 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến di chuyển đến (8, 19); hướng tới tọa độ (8, 21) (Spot #29 (thương hiệu=29, tọa độ=(8, 21))) | 37 |
| 16-18 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (8, 21) (Spot #29 (thương hiệu=29, tọa độ=(8, 21))) | 35 |
| 19-20 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=29, tọa độ=(8, 21)) | 34 |
| 21-22 | Di chuyển hướng 4 (`4`) | (8, 21) | (7, 22) | Dự kiến di chuyển đến (7, 22); hướng tới tọa độ (4, 27) (Spot #16 (thương hiệu=16, tọa độ=(4, 27))) | 33 |
| 23-24 | Di chuyển hướng 4 (`4`) | (7, 22) | (7, 23) | Dự kiến di chuyển đến (7, 23); hướng tới tọa độ (4, 27) (Spot #16 (thương hiệu=16, tọa độ=(4, 27))) | 32 |
| 25-26 | Di chuyển hướng 4 (`4`) | (7, 23) | (6, 24) | Dự kiến di chuyển đến (6, 24); hướng tới tọa độ (4, 27) (Spot #16 (thương hiệu=16, tọa độ=(4, 27))) | 31 |
| 27 | Di chuyển hướng 4 (`4`) | (6, 24) | (6, 25) | Dự kiến di chuyển đến (6, 25); hướng tới tọa độ (4, 27) (Spot #16 (thương hiệu=16, tọa độ=(4, 27))) | 29 |
| 28-29 | Di chuyển hướng 4 (`4`) | (6, 25) | (5, 26) | Dự kiến di chuyển đến (5, 26); hướng tới tọa độ (4, 27) (Spot #16 (thương hiệu=16, tọa độ=(4, 27))) | 28 |
| 30-32 | Di chuyển hướng 5 (`5`) | (5, 26) | (4, 26) | Dự kiến di chuyển đến (4, 26); hướng tới tọa độ (4, 27) (Spot #16 (thương hiệu=16, tọa độ=(4, 27))) | 26 |
| 33-34 | Di chuyển hướng 4 (`4`) | (4, 26) | (4, 27) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 27)) | 25 |
| 35-36 | Di chuyển hướng 3 (`3`) | (4, 27) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (6, 29) (Spot #22 (thương hiệu=22, tọa độ=(6, 29))) | 24 |
| 37 | Di chuyển hướng 2 (`2`) | (4, 28) | (5, 28) | Dự kiến di chuyển đến (5, 28); hướng tới tọa độ (6, 29) (Spot #22 (thương hiệu=22, tọa độ=(6, 29))) | 22 |
| 38-39 | Di chuyển hướng 3 (`3`) | (5, 28) | (6, 29) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(6, 29)) | 21 |
| 40-41 | Di chuyển hướng 2 (`2`) | (6, 29) | (7, 29) | Dự kiến di chuyển đến (7, 29); hướng tới tọa độ (14, 26) (Spot #11 (thương hiệu=11, tọa độ=(14, 26))) | 20 |
| 42-43 | Di chuyển hướng 2 (`2`) | (7, 29) | (8, 29) | Dự kiến di chuyển đến (8, 29); hướng tới tọa độ (14, 26) (Spot #11 (thương hiệu=11, tọa độ=(14, 26))) | 19 |
| 44-45 | Di chuyển hướng 1 (`1`) | (8, 29) | (8, 28) | Dự kiến di chuyển đến (8, 28); hướng tới tọa độ (14, 26) (Spot #11 (thương hiệu=11, tọa độ=(14, 26))) | 18 |
| 46-47 | Di chuyển hướng 1 (`1`) | (8, 28) | (9, 27) | Dự kiến di chuyển đến (9, 27); hướng tới tọa độ (14, 26) (Spot #11 (thương hiệu=11, tọa độ=(14, 26))) | 17 |
| 48-49 | Di chuyển hướng 2 (`2`) | (9, 27) | (10, 27) | Dự kiến di chuyển đến (10, 27); hướng tới tọa độ (14, 26) (Spot #11 (thương hiệu=11, tọa độ=(14, 26))) | 16 |
| 50-51 | Di chuyển hướng 2 (`2`) | (10, 27) | (11, 27) | Dự kiến di chuyển đến (11, 27); hướng tới tọa độ (14, 26) (Spot #11 (thương hiệu=11, tọa độ=(14, 26))) | 15 |
| 52-53 | Di chuyển hướng 2 (`2`) | (11, 27) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (14, 26) (Spot #11 (thương hiệu=11, tọa độ=(14, 26))) | 14 |
| 54-56 | Di chuyển hướng 2 (`2`) | (12, 27) | (13, 27) | Dự kiến di chuyển đến (13, 27); hướng tới tọa độ (14, 26) (Spot #11 (thương hiệu=11, tọa độ=(14, 26))) | 12 |
| 57 | Di chuyển hướng 2 (`2`) | (13, 27) | (14, 27) | Dự kiến di chuyển đến (14, 27); hướng tới tọa độ (14, 26) (Spot #11 (thương hiệu=11, tọa độ=(14, 26))) | 10 |
| 58-59 | Di chuyển hướng 1 (`1`) | (14, 27) | (14, 26) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 26)) | 9 |
| 60-61 | Di chuyển hướng 3 (`3`) | (14, 26) | (15, 27) | Dự kiến di chuyển đến (15, 27); hướng tới tọa độ (15, 28) (Spot #31 (thương hiệu=31, tọa độ=(15, 28))) | 8 |
| 62-64 | Di chuyển hướng 3 (`3`) | (15, 27) | (15, 28) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=31, tọa độ=(15, 28)) | 6 |
| 65-79 | Chờ 15 bước (`-15`) | (15, 28) | (15, 28) | Dự kiến đứng yên tại (15, 28); mục tiêu Spot #31 (thương hiệu=31, tọa độ=(15, 28)) | 6 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (20, 24) (ô=788)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(23, 17))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(23, 17))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 4, 4, -24, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 0, 1, 2, 3, 3, 0, 0, 5, 5, 0, 0, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (20, 24) | (21, 25) | Dự kiến di chuyển đến (21, 25); hướng tới tọa độ (22, 27) (Spot #5 (thương hiệu=5, tọa độ=(22, 27))) | 9 |
| 2-3 | Di chuyển hướng 3 (`3`) | (21, 25) | (21, 26) | Dự kiến di chuyển đến (21, 26); hướng tới tọa độ (22, 27) (Spot #5 (thương hiệu=5, tọa độ=(22, 27))) | 8 |
| 4-5 | Di chuyển hướng 3 (`3`) | (21, 26) | (22, 27) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(22, 27)) | 7 |
| 6-7 | Di chuyển hướng 3 (`3`) | (22, 27) | (22, 28) | Dự kiến di chuyển đến (22, 28); hướng tới tọa độ (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 6 |
| 8-9 | Di chuyển hướng 3 (`3`) | (22, 28) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 5 |
| 10-11 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 4 |
| 12-13 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(22, 31)) | 3 |
| 14-37 | Chờ 24 bước (`-24`) | (22, 31) | (22, 31) | Dự kiến đứng yên tại (22, 31); hướng tới tọa độ (22, 31) | 74 |
| 38-39 | Di chuyển hướng 2 (`2`) | (22, 31) | (23, 31) | Dự kiến di chuyển đến (23, 31); hướng tới tọa độ (26, 31) (Spot #14 (thương hiệu=14, tọa độ=(26, 31))) | 73 |
| 40 | Di chuyển hướng 2 (`2`) | (23, 31) | (24, 31) | Dự kiến di chuyển đến (24, 31); hướng tới tọa độ (26, 31) (Spot #14 (thương hiệu=14, tọa độ=(26, 31))) | 71 |
| 41-42 | Di chuyển hướng 2 (`2`) | (24, 31) | (25, 31) | Dự kiến di chuyển đến (25, 31); hướng tới tọa độ (26, 31) (Spot #14 (thương hiệu=14, tọa độ=(26, 31))) | 70 |
| 43-45 | Di chuyển hướng 2 (`2`) | (25, 31) | (26, 31) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(26, 31)) | 68 |
| 46-47 | Di chuyển hướng 1 (`1`) | (26, 31) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (29, 26) (Spot #25 (thương hiệu=25, tọa độ=(29, 26))) | 67 |
| 48 | Di chuyển hướng 1 (`1`) | (26, 30) | (27, 29) | Dự kiến di chuyển đến (27, 29); hướng tới tọa độ (29, 26) (Spot #25 (thương hiệu=25, tọa độ=(29, 26))) | 65 |
| 49-50 | Di chuyển hướng 1 (`1`) | (27, 29) | (27, 28) | Dự kiến di chuyển đến (27, 28); hướng tới tọa độ (29, 26) (Spot #25 (thương hiệu=25, tọa độ=(29, 26))) | 64 |
| 51-52 | Di chuyển hướng 2 (`2`) | (27, 28) | (28, 28) | Dự kiến di chuyển đến (28, 28); hướng tới tọa độ (29, 26) (Spot #25 (thương hiệu=25, tọa độ=(29, 26))) | 63 |
| 53-54 | Di chuyển hướng 1 (`1`) | (28, 28) | (29, 27) | Dự kiến di chuyển đến (29, 27); hướng tới tọa độ (29, 26) (Spot #25 (thương hiệu=25, tọa độ=(29, 26))) | 62 |
| 55-56 | Di chuyển hướng 1 (`1`) | (29, 27) | (29, 26) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(29, 26)) | 61 |
| 57-58 | Di chuyển hướng 0 (`0`) | (29, 26) | (29, 25) | Dự kiến di chuyển đến (29, 25); hướng tới tọa độ (29, 24) (Spot #2 (thương hiệu=2, tọa độ=(29, 24))) | 60 |
| 59-60 | Di chuyển hướng 1 (`1`) | (29, 25) | (29, 24) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(29, 24)) | 59 |
| 61-62 | Di chuyển hướng 2 (`2`) | (29, 24) | (30, 24) | Dự kiến di chuyển đến (30, 24); hướng tới tọa độ (31, 26) (Spot #20 (thương hiệu=20, tọa độ=(31, 26))) | 58 |
| 63 | Di chuyển hướng 3 (`3`) | (30, 24) | (31, 25) | Dự kiến di chuyển đến (31, 25); hướng tới tọa độ (31, 26) (Spot #20 (thương hiệu=20, tọa độ=(31, 26))) | 56 |
| 64-65 | Di chuyển hướng 3 (`3`) | (31, 25) | (31, 26) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(31, 26)) | 55 |
| 66-67 | Di chuyển hướng 0 (`0`) | (31, 26) | (31, 25) | Dự kiến di chuyển đến (31, 25); hướng tới tọa độ (23, 17) (Spot #17 (thương hiệu=17, tọa độ=(23, 17))) | 54 |
| 68-69 | Di chuyển hướng 0 (`0`) | (31, 25) | (30, 24) | Dự kiến di chuyển đến (30, 24); hướng tới tọa độ (23, 17) (Spot #17 (thương hiệu=17, tọa độ=(23, 17))) | 53 |
| 70 | Di chuyển hướng 5 (`5`) | (30, 24) | (29, 24) | Dự kiến di chuyển đến (29, 24); hướng tới tọa độ (23, 17) (Spot #17 (thương hiệu=17, tọa độ=(23, 17))) | 51 |
| 71-72 | Di chuyển hướng 5 (`5`) | (29, 24) | (28, 24) | Dự kiến di chuyển đến (28, 24); hướng tới tọa độ (23, 17) (Spot #17 (thương hiệu=17, tọa độ=(23, 17))) | 50 |
| 73-74 | Di chuyển hướng 0 (`0`) | (28, 24) | (28, 23) | Dự kiến di chuyển đến (28, 23); hướng tới tọa độ (23, 17) (Spot #17 (thương hiệu=17, tọa độ=(23, 17))) | 49 |
| 75 | Di chuyển hướng 0 (`0`) | (28, 23) | (27, 22) | Dự kiến di chuyển đến (27, 22); hướng tới tọa độ (23, 17) (Spot #17 (thương hiệu=17, tọa độ=(23, 17))) | 47 |
| 76-77 | Di chuyển hướng 0 (`0`) | (27, 22) | (27, 21) | Dự kiến di chuyển đến (27, 21); hướng tới tọa độ (23, 17) (Spot #17 (thương hiệu=17, tọa độ=(23, 17))) | 46 |
| 78-79 | Di chuyển hướng 5 (`5`) | (27, 21) | (26, 21) | Dự kiến di chuyển đến (26, 21); hướng tới tọa độ (23, 17) (Spot #17 (thương hiệu=17, tọa độ=(23, 17))) | 45 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (27, 2) (ô=91)
- Nhiên liệu đầu ngày: 74
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #0 (thương hiệu=0, tọa độ=(29, 8))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 3, 3, -68]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (27, 2) | (28, 3) | Dự kiến di chuyển đến (28, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 74 |
| 2 | Di chuyển hướng 3 (`3`) | (28, 3) | (28, 4) | Dự kiến di chuyển đến (28, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 74 |
| 3-4 | Di chuyển hướng 4 (`4`) | (28, 4) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 74 |
| 5-6 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến di chuyển đến (28, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 74 |
| 7-9 | Di chuyển hướng 3 (`3`) | (28, 6) | (29, 7) | Dự kiến di chuyển đến (29, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (29, 8) (Spot #0 (thương hiệu=0, tọa độ=(29, 8))) | 74 |
| 10-11 | Di chuyển hướng 3 (`3`) | (29, 7) | (29, 8) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (29, 8) | 74 |
| 12-79 | Chờ 68 bước (`-68`) | (29, 8) | (29, 8) | Dự kiến đứng yên tại (29, 8); điểm hẹn của xe tuần tra #3 tại (29, 8) | 74 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (5, 26) (ô=837)
- Nhiên liệu đầu ngày: 74
- Vai trò: Hỗ trợ xe tuần tra #5
- Điểm hẹn của xe tuần tra: Spot #15 (thương hiệu=15, tọa độ=(22, 31))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 3, 2, 2, 3, 2, 3, 2, 2, 2, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (5, 26) | (6, 26) | Dự kiến di chuyển đến (6, 26); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 3-4 | Di chuyển hướng 2 (`2`) | (6, 26) | (7, 26) | Dự kiến di chuyển đến (7, 26); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 5 | Di chuyển hướng 2 (`2`) | (7, 26) | (8, 26) | Dự kiến di chuyển đến (8, 26); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 26) | (9, 26) | Dự kiến di chuyển đến (9, 26); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 26) | (10, 26) | Dự kiến di chuyển đến (10, 26); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 26) | (11, 26) | Dự kiến di chuyển đến (11, 26); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 12-14 | Di chuyển hướng 2 (`2`) | (11, 26) | (12, 26) | Dự kiến di chuyển đến (12, 26); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 15 | Di chuyển hướng 3 (`3`) | (12, 26) | (13, 27) | Dự kiến di chuyển đến (13, 27); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 16 | Di chuyển hướng 3 (`3`) | (13, 27) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 17-18 | Di chuyển hướng 2 (`2`) | (13, 28) | (14, 28) | Dự kiến di chuyển đến (14, 28); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 19-20 | Di chuyển hướng 3 (`3`) | (14, 28) | (15, 29) | Dự kiến di chuyển đến (15, 29); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 21-22 | Di chuyển hướng 2 (`2`) | (15, 29) | (16, 29) | Dự kiến di chuyển đến (16, 29); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 23 | Di chuyển hướng 2 (`2`) | (16, 29) | (17, 29) | Dự kiến di chuyển đến (17, 29); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 24-25 | Di chuyển hướng 3 (`3`) | (17, 29) | (17, 30) | Dự kiến di chuyển đến (17, 30); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 26-27 | Di chuyển hướng 2 (`2`) | (17, 30) | (18, 30) | Dự kiến di chuyển đến (18, 30); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 28-30 | Di chuyển hướng 3 (`3`) | (18, 30) | (19, 31) | Dự kiến di chuyển đến (19, 31); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 31-32 | Di chuyển hướng 2 (`2`) | (19, 31) | (20, 31) | Dự kiến di chuyển đến (20, 31); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 33-34 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến di chuyển đến (21, 31); hướng tới điểm hẹn của xe tuần tra #5 tại (22, 31) (Spot #15 (thương hiệu=15, tọa độ=(22, 31))) | 74 |
| 35-36 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đến điểm hẹn của xe tuần tra #5 tại (22, 31) | 74 |
| 37-79 | Chờ 43 bước (`-43`) | (22, 31) | (22, 31) | Dự kiến đứng yên tại (22, 31); điểm hẹn của xe tuần tra #5 tại (22, 31) | 74 |

