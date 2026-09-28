# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 25) (ô=820)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(12, 9))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(12, 9))
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 1, 2, 2, 1, 2, 2, 0, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 25) | (19, 24) | Dự kiến di chuyển đến (19, 24); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 63 |
| 2-3 | Di chuyển hướng 1 (`1`) | (19, 24) | (20, 23) | Dự kiến di chuyển đến (20, 23); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 62 |
| 4-5 | Di chuyển hướng 1 (`1`) | (20, 23) | (20, 22) | Dự kiến di chuyển đến (20, 22); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 61 |
| 6 | Di chuyển hướng 1 (`1`) | (20, 22) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 59 |
| 7 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 57 |
| 8 | Di chuyển hướng 0 (`0`) | (20, 20) | (20, 19) | Dự kiến di chuyển đến (20, 19); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 55 |
| 9-10 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến di chuyển đến (19, 18); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 54 |
| 11-12 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến di chuyển đến (19, 17); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 53 |
| 13 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến di chuyển đến (18, 16); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 51 |
| 14 | Di chuyển hướng 1 (`1`) | (18, 16) | (19, 15) | Dự kiến di chuyển đến (19, 15); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 49 |
| 15-16 | Di chuyển hướng 1 (`1`) | (19, 15) | (19, 14) | Dự kiến di chuyển đến (19, 14); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 48 |
| 17-18 | Di chuyển hướng 1 (`1`) | (19, 14) | (20, 13) | Dự kiến di chuyển đến (20, 13); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 47 |
| 19-20 | Di chuyển hướng 1 (`1`) | (20, 13) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 46 |
| 21-22 | Di chuyển hướng 2 (`2`) | (20, 12) | (21, 12) | Dự kiến di chuyển đến (21, 12); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 45 |
| 23 | Di chuyển hướng 1 (`1`) | (21, 12) | (22, 11) | Dự kiến di chuyển đến (22, 11); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 43 |
| 24-25 | Di chuyển hướng 2 (`2`) | (22, 11) | (23, 11) | Dự kiến di chuyển đến (23, 11); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 42 |
| 26-27 | Di chuyển hướng 2 (`2`) | (23, 11) | (24, 11) | Dự kiến di chuyển đến (24, 11); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 41 |
| 28-29 | Di chuyển hướng 1 (`1`) | (24, 11) | (24, 10) | Dự kiến di chuyển đến (24, 10); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 40 |
| 30-31 | Di chuyển hướng 2 (`2`) | (24, 10) | (25, 10) | Dự kiến di chuyển đến (25, 10); hướng tới tọa độ (26, 10) (Spot #10 (thương hiệu=0, tọa độ=(26, 10))) | 39 |
| 32-33 | Di chuyển hướng 2 (`2`) | (25, 10) | (26, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(26, 10)) | 38 |
| 34-35 | Di chuyển hướng 0 (`0`) | (26, 10) | (26, 9) | Dự kiến di chuyển đến (26, 9); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 37 |
| 36-37 | Di chuyển hướng 5 (`5`) | (26, 9) | (25, 9) | Dự kiến di chuyển đến (25, 9); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 36 |
| 38-39 | Di chuyển hướng 5 (`5`) | (25, 9) | (24, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(24, 9)) | 35 |
| 40-41 | Di chuyển hướng 0 (`0`) | (24, 9) | (23, 8) | Dự kiến di chuyển đến (23, 8); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 34 |
| 42-43 | Di chuyển hướng 5 (`5`) | (23, 8) | (22, 8) | Dự kiến di chuyển đến (22, 8); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 33 |
| 44-45 | Di chuyển hướng 5 (`5`) | (22, 8) | (21, 8) | Dự kiến di chuyển đến (21, 8); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 32 |
| 46 | Di chuyển hướng 5 (`5`) | (21, 8) | (20, 8) | Dự kiến di chuyển đến (20, 8); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 30 |
| 47-48 | Di chuyển hướng 5 (`5`) | (20, 8) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 29 |
| 49 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 27 |
| 50 | Di chuyển hướng 5 (`5`) | (18, 8) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 25 |
| 51-52 | Di chuyển hướng 5 (`5`) | (17, 8) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 24 |
| 53 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 22 |
| 54-55 | Di chuyển hướng 0 (`0`) | (15, 8) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 21 |
| 56-57 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(14, 6)) | 20 |
| 58-59 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 19 |
| 60-61 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 18 |
| 62-63 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 17 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 30) (ô=977)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(8, 19))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(8, 19))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 5, 0, 0, 0, 5, 5, 0, 5, 5, 5, 0, 4, 4, 4, 4, 4, 5, 5, 5, 5, 0, 0, 0, 2, 2, 1, 0, 1, 0, 2, 2, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (17, 30) | (17, 29) | Dự kiến di chuyển đến (17, 29); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 63 |
| 2 | Di chuyển hướng 1 (`1`) | (17, 29) | (17, 28) | Dự kiến di chuyển đến (17, 28); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 61 |
| 3 | Di chuyển hướng 0 (`0`) | (17, 28) | (17, 27) | Dự kiến di chuyển đến (17, 27); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 59 |
| 4 | Di chuyển hướng 0 (`0`) | (17, 27) | (16, 26) | Dự kiến di chuyển đến (16, 26); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 57 |
| 5 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến di chuyển đến (15, 26); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 55 |
| 6 | Di chuyển hướng 0 (`0`) | (15, 26) | (15, 25) | Dự kiến di chuyển đến (15, 25); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 53 |
| 7-8 | Di chuyển hướng 0 (`0`) | (15, 25) | (14, 24) | Dự kiến di chuyển đến (14, 24); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 52 |
| 9 | Di chuyển hướng 0 (`0`) | (14, 24) | (14, 23) | Dự kiến di chuyển đến (14, 23); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 50 |
| 10-11 | Di chuyển hướng 5 (`5`) | (14, 23) | (13, 23) | Dự kiến di chuyển đến (13, 23); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 49 |
| 12 | Di chuyển hướng 5 (`5`) | (13, 23) | (12, 23) | Dự kiến di chuyển đến (12, 23); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 47 |
| 13 | Di chuyển hướng 0 (`0`) | (12, 23) | (11, 22) | Dự kiến di chuyển đến (11, 22); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 45 |
| 14-15 | Di chuyển hướng 5 (`5`) | (11, 22) | (10, 22) | Dự kiến di chuyển đến (10, 22); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 44 |
| 16-17 | Di chuyển hướng 5 (`5`) | (10, 22) | (9, 22) | Dự kiến di chuyển đến (9, 22); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 43 |
| 18-19 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 42 |
| 20-21 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(8, 21)) | 41 |
| 22-23 | Di chuyển hướng 4 (`4`) | (8, 21) | (7, 22) | Dự kiến di chuyển đến (7, 22); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 40 |
| 24 | Di chuyển hướng 4 (`4`) | (7, 22) | (7, 23) | Dự kiến di chuyển đến (7, 23); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 38 |
| 25-26 | Di chuyển hướng 4 (`4`) | (7, 23) | (6, 24) | Dự kiến di chuyển đến (6, 24); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 37 |
| 27-28 | Di chuyển hướng 4 (`4`) | (6, 24) | (6, 25) | Dự kiến di chuyển đến (6, 25); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 36 |
| 29 | Di chuyển hướng 4 (`4`) | (6, 25) | (5, 26) | Dự kiến di chuyển đến (5, 26); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 34 |
| 30-31 | Di chuyển hướng 5 (`5`) | (5, 26) | (4, 26) | Dự kiến di chuyển đến (4, 26); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 33 |
| 32-33 | Di chuyển hướng 5 (`5`) | (4, 26) | (3, 26) | Dự kiến di chuyển đến (3, 26); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 32 |
| 34 | Di chuyển hướng 5 (`5`) | (3, 26) | (2, 26) | Dự kiến di chuyển đến (2, 26); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 30 |
| 35 | Di chuyển hướng 5 (`5`) | (2, 26) | (1, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(1, 26)) | 28 |
| 36-37 | Di chuyển hướng 0 (`0`) | (1, 26) | (1, 25) | Dự kiến di chuyển đến (1, 25); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 27 |
| 38-39 | Di chuyển hướng 0 (`0`) | (1, 25) | (0, 24) | Dự kiến di chuyển đến (0, 24); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 26 |
| 40-41 | Di chuyển hướng 0 (`0`) | (0, 24) | (0, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 23)) | 25 |
| 42-43 | Di chuyển hướng 2 (`2`) | (0, 23) | (1, 23) | Dự kiến di chuyển đến (1, 23); hướng tới tọa độ (2, 22) (Spot #4 (thương hiệu=4, tọa độ=(2, 22))) | 24 |
| 44 | Di chuyển hướng 2 (`2`) | (1, 23) | (2, 23) | Dự kiến di chuyển đến (2, 23); hướng tới tọa độ (2, 22) (Spot #4 (thương hiệu=4, tọa độ=(2, 22))) | 22 |
| 45-46 | Di chuyển hướng 1 (`1`) | (2, 23) | (2, 22) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 22)) | 21 |
| 47-48 | Di chuyển hướng 0 (`0`) | (2, 22) | (2, 21) | Dự kiến di chuyển đến (2, 21); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 20 |
| 49-50 | Di chuyển hướng 1 (`1`) | (2, 21) | (2, 20) | Dự kiến di chuyển đến (2, 20); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 19 |
| 51 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 19)) | 17 |
| 52-53 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (8, 19) (Spot #3 (thương hiệu=3, tọa độ=(8, 19))) | 16 |
| 54-55 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (8, 19) (Spot #3 (thương hiệu=3, tọa độ=(8, 19))) | 15 |
| 56-58 | Di chuyển hướng 2 (`2`) | (4, 19) | (5, 19) | Dự kiến di chuyển đến (5, 19); hướng tới tọa độ (8, 19) (Spot #3 (thương hiệu=3, tọa độ=(8, 19))) | 13 |
| 59-60 | Di chuyển hướng 2 (`2`) | (5, 19) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (8, 19) (Spot #3 (thương hiệu=3, tọa độ=(8, 19))) | 12 |
| 61-62 | Di chuyển hướng 2 (`2`) | (6, 19) | (7, 19) | Dự kiến di chuyển đến (7, 19); hướng tới tọa độ (8, 19) (Spot #3 (thương hiệu=3, tọa độ=(8, 19))) | 11 |
| 63 | Di chuyển hướng 2 (`2`) | (7, 19) | (8, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 19)) | 9 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (27, 30) (ô=987)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(8, 3))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(8, 3))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 5, 4, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 63 |
| 2-3 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 62 |
| 4 | Di chuyển hướng 0 (`0`) | (26, 29) | (25, 28) | Dự kiến di chuyển đến (25, 28); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 60 |
| 5-7 | Di chuyển hướng 0 (`0`) | (25, 28) | (25, 27) | Dự kiến di chuyển đến (25, 27); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 58 |
| 8-9 | Di chuyển hướng 0 (`0`) | (25, 27) | (24, 26) | Dự kiến di chuyển đến (24, 26); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 57 |
| 10-11 | Di chuyển hướng 0 (`0`) | (24, 26) | (24, 25) | Dự kiến di chuyển đến (24, 25); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 56 |
| 12 | Di chuyển hướng 5 (`5`) | (24, 25) | (23, 25) | Dự kiến di chuyển đến (23, 25); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 54 |
| 13-14 | Di chuyển hướng 0 (`0`) | (23, 25) | (22, 24) | Dự kiến di chuyển đến (22, 24); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 53 |
| 15-16 | Di chuyển hướng 0 (`0`) | (22, 24) | (22, 23) | Dự kiến di chuyển đến (22, 23); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 52 |
| 17-19 | Di chuyển hướng 0 (`0`) | (22, 23) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 50 |
| 20 | Di chuyển hướng 0 (`0`) | (21, 22) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 48 |
| 21 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (20, 19) (Spot #14 (thương hiệu=4, tọa độ=(20, 19))) | 46 |
| 22 | Di chuyển hướng 0 (`0`) | (20, 20) | (20, 19) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=4, tọa độ=(20, 19)) | 44 |
| 23-24 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến di chuyển đến (19, 18); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 43 |
| 25-26 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến di chuyển đến (19, 17); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 42 |
| 27 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến di chuyển đến (18, 16); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 40 |
| 28 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến di chuyển đến (18, 15); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 38 |
| 29-30 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến di chuyển đến (17, 14); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 37 |
| 31 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến di chuyển đến (18, 13); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 35 |
| 32-33 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 34 |
| 34-35 | Di chuyển hướng 1 (`1`) | (17, 12) | (18, 11) | Dự kiến di chuyển đến (18, 11); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 33 |
| 36-37 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến di chuyển đến (17, 10); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 32 |
| 38 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 30 |
| 39-41 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 28 |
| 42 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 26 |
| 43-44 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 25 |
| 45 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 23 |
| 46-47 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 22 |
| 48 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 9)) | 20 |
| 49-50 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 19 |
| 51-52 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 18 |
| 53-54 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 17 |
| 55-56 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 16 |
| 57-58 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 15 |
| 59-60 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 14 |
| 61-62 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 3)) | 13 |
| 63 | Chờ 1 bước (`-1`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 3)) | 13 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 29) (ô=933)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(2, 19))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(2, 19))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 5, 0, 0, 0, 2, 2, 1, 2, 2, 2, 1, 2, 2, 0, 1, 5, 5, 5, 5, 5, 5, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 63 |
| 2-3 | Di chuyển hướng 0 (`0`) | (4, 28) | (4, 27) | Dự kiến di chuyển đến (4, 27); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 62 |
| 4-5 | Di chuyển hướng 0 (`0`) | (4, 27) | (3, 26) | Dự kiến di chuyển đến (3, 26); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 61 |
| 6 | Di chuyển hướng 5 (`5`) | (3, 26) | (2, 26) | Dự kiến di chuyển đến (2, 26); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 59 |
| 7 | Di chuyển hướng 5 (`5`) | (2, 26) | (1, 26) | Dự kiến di chuyển đến (1, 26); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 57 |
| 8-9 | Di chuyển hướng 0 (`0`) | (1, 26) | (1, 25) | Dự kiến di chuyển đến (1, 25); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 56 |
| 10-11 | Di chuyển hướng 0 (`0`) | (1, 25) | (0, 24) | Dự kiến di chuyển đến (0, 24); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 55 |
| 12-13 | Di chuyển hướng 0 (`0`) | (0, 24) | (0, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 23)) | 54 |
| 14-15 | Di chuyển hướng 2 (`2`) | (0, 23) | (1, 23) | Dự kiến di chuyển đến (1, 23); hướng tới tọa độ (2, 22) (Spot #4 (thương hiệu=4, tọa độ=(2, 22))) | 53 |
| 16 | Di chuyển hướng 2 (`2`) | (1, 23) | (2, 23) | Dự kiến di chuyển đến (2, 23); hướng tới tọa độ (2, 22) (Spot #4 (thương hiệu=4, tọa độ=(2, 22))) | 51 |
| 17-18 | Di chuyển hướng 1 (`1`) | (2, 23) | (2, 22) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 22)) | 50 |
| 19-20 | Di chuyển hướng 2 (`2`) | (2, 22) | (3, 22) | Dự kiến di chuyển đến (3, 22); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 49 |
| 21-22 | Di chuyển hướng 2 (`2`) | (3, 22) | (4, 22) | Dự kiến di chuyển đến (4, 22); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 48 |
| 23-24 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến di chuyển đến (5, 22); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 47 |
| 25-26 | Di chuyển hướng 1 (`1`) | (5, 22) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 46 |
| 27 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 44 |
| 28-29 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(8, 21)) | 43 |
| 30-31 | Di chuyển hướng 0 (`0`) | (8, 21) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (8, 19) (Spot #3 (thương hiệu=3, tọa độ=(8, 19))) | 42 |
| 32-33 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 19)) | 41 |
| 34-35 | Di chuyển hướng 5 (`5`) | (8, 19) | (7, 19) | Dự kiến di chuyển đến (7, 19); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 40 |
| 36 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 38 |
| 37-38 | Di chuyển hướng 5 (`5`) | (6, 19) | (5, 19) | Dự kiến di chuyển đến (5, 19); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 37 |
| 39-40 | Di chuyển hướng 5 (`5`) | (5, 19) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 36 |
| 41-43 | Di chuyển hướng 5 (`5`) | (4, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 34 |
| 44-45 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 19)) | 33 |
| 46-63 | Chờ 18 bước (`-18`) | (2, 19) | (2, 19) | Dự kiến đứng yên tại (2, 19); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 19)) | 33 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (7, 2) (ô=71)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(24, 9))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(24, 9))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 2, 2, 2, 2, 3, 3, 3, 2, 3, 3, 3, 3, 1, 1, 1, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 3, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (3, 2) (Spot #1 (thương hiệu=1, tọa độ=(3, 2))) | 63 |
| 2-3 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (3, 2) (Spot #1 (thương hiệu=1, tọa độ=(3, 2))) | 62 |
| 4-5 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (3, 2) (Spot #1 (thương hiệu=1, tọa độ=(3, 2))) | 61 |
| 6 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(3, 2)) | 59 |
| 7-8 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 58 |
| 9 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 56 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 55 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 54 |
| 14-15 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 3)) | 53 |
| 16-17 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 52 |
| 18-19 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 51 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 50 |
| 22-23 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 49 |
| 24-25 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 48 |
| 26-27 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 47 |
| 28-29 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 9)) | 46 |
| 30-31 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 45 |
| 32-33 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 44 |
| 34-35 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 43 |
| 36-37 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(14, 6)) | 42 |
| 38-39 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 41 |
| 40-41 | Di chuyển hướng 3 (`3`) | (15, 7) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 40 |
| 42-43 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 39 |
| 44 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 37 |
| 45-46 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 36 |
| 47 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 34 |
| 48 | Di chuyển hướng 2 (`2`) | (19, 8) | (20, 8) | Dự kiến di chuyển đến (20, 8); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 32 |
| 49-50 | Di chuyển hướng 2 (`2`) | (20, 8) | (21, 8) | Dự kiến di chuyển đến (21, 8); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 31 |
| 51 | Di chuyển hướng 2 (`2`) | (21, 8) | (22, 8) | Dự kiến di chuyển đến (22, 8); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 29 |
| 52-53 | Di chuyển hướng 2 (`2`) | (22, 8) | (23, 8) | Dự kiến di chuyển đến (23, 8); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 28 |
| 54-55 | Di chuyển hướng 3 (`3`) | (23, 8) | (24, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(24, 9)) | 27 |
| 56-63 | Chờ 8 bước (`-8`) | (24, 9) | (24, 9) | Dự kiến đứng yên tại (24, 9); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(24, 9)) | 27 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (2, 29) (ô=930)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(2, 19))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(2, 19))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 0, 0, 2, 2, 1, 2, 2, 2, 1, 2, 2, 0, 1, 5, 5, 5, 5, 5, 5, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (2, 29) | (1, 28) | Dự kiến di chuyển đến (1, 28); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 63 |
| 2-3 | Di chuyển hướng 1 (`1`) | (1, 28) | (2, 27) | Dự kiến di chuyển đến (2, 27); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 62 |
| 4-5 | Di chuyển hướng 0 (`0`) | (2, 27) | (1, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(1, 26)) | 61 |
| 6-7 | Di chuyển hướng 0 (`0`) | (1, 26) | (1, 25) | Dự kiến di chuyển đến (1, 25); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 60 |
| 8-9 | Di chuyển hướng 0 (`0`) | (1, 25) | (0, 24) | Dự kiến di chuyển đến (0, 24); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 59 |
| 10-11 | Di chuyển hướng 0 (`0`) | (0, 24) | (0, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 23)) | 58 |
| 12-13 | Di chuyển hướng 2 (`2`) | (0, 23) | (1, 23) | Dự kiến di chuyển đến (1, 23); hướng tới tọa độ (2, 22) (Spot #4 (thương hiệu=4, tọa độ=(2, 22))) | 57 |
| 14 | Di chuyển hướng 2 (`2`) | (1, 23) | (2, 23) | Dự kiến di chuyển đến (2, 23); hướng tới tọa độ (2, 22) (Spot #4 (thương hiệu=4, tọa độ=(2, 22))) | 55 |
| 15-16 | Di chuyển hướng 1 (`1`) | (2, 23) | (2, 22) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 22)) | 54 |
| 17-18 | Di chuyển hướng 2 (`2`) | (2, 22) | (3, 22) | Dự kiến di chuyển đến (3, 22); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 53 |
| 19-20 | Di chuyển hướng 2 (`2`) | (3, 22) | (4, 22) | Dự kiến di chuyển đến (4, 22); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 52 |
| 21-22 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến di chuyển đến (5, 22); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 51 |
| 23-24 | Di chuyển hướng 1 (`1`) | (5, 22) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 50 |
| 25 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 48 |
| 26-27 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(8, 21)) | 47 |
| 28-29 | Di chuyển hướng 0 (`0`) | (8, 21) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (8, 19) (Spot #3 (thương hiệu=3, tọa độ=(8, 19))) | 46 |
| 30-31 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 19)) | 45 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 19) | (7, 19) | Dự kiến di chuyển đến (7, 19); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 44 |
| 34 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 42 |
| 35-36 | Di chuyển hướng 5 (`5`) | (6, 19) | (5, 19) | Dự kiến di chuyển đến (5, 19); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 41 |
| 37-38 | Di chuyển hướng 5 (`5`) | (5, 19) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 40 |
| 39-41 | Di chuyển hướng 5 (`5`) | (4, 19) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (2, 19) (Spot #5 (thương hiệu=5, tọa độ=(2, 19))) | 38 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 19)) | 37 |
| 44-63 | Chờ 20 bước (`-20`) | (2, 19) | (2, 19) | Dự kiến đứng yên tại (2, 19); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 19)) | 37 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (14, 1) (ô=46)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=1, tọa độ=(2, 1))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=1, tọa độ=(2, 1))
- Mảng hành động đã gửi server: `[4, 3, 4, 3, 3, 5, 4, 4, 4, 3, 4, 4, 4, 3, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 5, 5, 5, 5, 5, 0, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 63 |
| 2-3 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 62 |
| 4-5 | Di chuyển hướng 4 (`4`) | (14, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 61 |
| 6-7 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (14, 6) (Spot #15 (thương hiệu=5, tọa độ=(14, 6))) | 60 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(14, 6)) | 59 |
| 10-11 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 58 |
| 12-13 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 57 |
| 14-15 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 56 |
| 16-17 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 9)) | 55 |
| 18-19 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (11, 14) (Spot #2 (thương hiệu=2, tọa độ=(11, 14))) | 54 |
| 20-21 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới tọa độ (11, 14) (Spot #2 (thương hiệu=2, tọa độ=(11, 14))) | 53 |
| 22-23 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (11, 14) (Spot #2 (thương hiệu=2, tọa độ=(11, 14))) | 52 |
| 24-25 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (11, 14) (Spot #2 (thương hiệu=2, tọa độ=(11, 14))) | 51 |
| 26 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 14)) | 49 |
| 27-28 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 48 |
| 29 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 46 |
| 30-31 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 45 |
| 32-33 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 44 |
| 34-35 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 43 |
| 36-37 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 42 |
| 38-39 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 41 |
| 40-41 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 40 |
| 42 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 38 |
| 43-44 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 37 |
| 45-46 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 3)) | 36 |
| 47-48 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (3, 2) (Spot #1 (thương hiệu=1, tọa độ=(3, 2))) | 35 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (3, 2) (Spot #1 (thương hiệu=1, tọa độ=(3, 2))) | 34 |
| 51-52 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (3, 2) (Spot #1 (thương hiệu=1, tọa độ=(3, 2))) | 33 |
| 53-54 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (3, 2) (Spot #1 (thương hiệu=1, tọa độ=(3, 2))) | 32 |
| 55 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(3, 2)) | 30 |
| 56-57 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (2, 1) (Spot #11 (thương hiệu=1, tọa độ=(2, 1))) | 29 |
| 58 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(2, 1)) | 27 |
| 59-63 | Chờ 5 bước (`-5`) | (2, 1) | (2, 1) | Dự kiến đứng yên tại (2, 1); mục tiêu Spot #11 (thương hiệu=1, tọa độ=(2, 1)) | 27 |

### Xe #7 - Tuần tra

- Vị trí đầu ngày: (22, 21) (ô=694)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(3, 2))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(3, 2))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 1, 1, 2, 1, 0, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 63 |
| 2 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 61 |
| 3 | Di chuyển hướng 0 (`0`) | (20, 20) | (20, 19) | Dự kiến di chuyển đến (20, 19); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 59 |
| 4-5 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến di chuyển đến (19, 18); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 58 |
| 6-7 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến di chuyển đến (19, 17); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 57 |
| 8 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến di chuyển đến (18, 16); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 55 |
| 9 | Di chuyển hướng 1 (`1`) | (18, 16) | (19, 15) | Dự kiến di chuyển đến (19, 15); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 53 |
| 10-11 | Di chuyển hướng 1 (`1`) | (19, 15) | (19, 14) | Dự kiến di chuyển đến (19, 14); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 52 |
| 12-13 | Di chuyển hướng 1 (`1`) | (19, 14) | (20, 13) | Dự kiến di chuyển đến (20, 13); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 51 |
| 14-15 | Di chuyển hướng 1 (`1`) | (20, 13) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 50 |
| 16-17 | Di chuyển hướng 2 (`2`) | (20, 12) | (21, 12) | Dự kiến di chuyển đến (21, 12); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 49 |
| 18 | Di chuyển hướng 1 (`1`) | (21, 12) | (22, 11) | Dự kiến di chuyển đến (22, 11); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 47 |
| 19-20 | Di chuyển hướng 1 (`1`) | (22, 11) | (22, 10) | Dự kiến di chuyển đến (22, 10); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 46 |
| 21-22 | Di chuyển hướng 2 (`2`) | (22, 10) | (23, 10) | Dự kiến di chuyển đến (23, 10); hướng tới tọa độ (24, 9) (Spot #6 (thương hiệu=6, tọa độ=(24, 9))) | 45 |
| 23-24 | Di chuyển hướng 1 (`1`) | (23, 10) | (24, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(24, 9)) | 44 |
| 25-26 | Di chuyển hướng 0 (`0`) | (24, 9) | (23, 8) | Dự kiến di chuyển đến (23, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 43 |
| 27-28 | Di chuyển hướng 5 (`5`) | (23, 8) | (22, 8) | Dự kiến di chuyển đến (22, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 42 |
| 29-30 | Di chuyển hướng 5 (`5`) | (22, 8) | (21, 8) | Dự kiến di chuyển đến (21, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 41 |
| 31 | Di chuyển hướng 5 (`5`) | (21, 8) | (20, 8) | Dự kiến di chuyển đến (20, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 39 |
| 32-33 | Di chuyển hướng 5 (`5`) | (20, 8) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 38 |
| 34 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 36 |
| 35 | Di chuyển hướng 5 (`5`) | (18, 8) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 34 |
| 36-37 | Di chuyển hướng 5 (`5`) | (17, 8) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 33 |
| 38 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 31 |
| 39-40 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 30 |
| 41 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 28 |
| 42-43 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 27 |
| 44 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 9)) | 25 |
| 45-46 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 24 |
| 47-48 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 23 |
| 49-50 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 22 |
| 51-52 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 21 |
| 53-54 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 20 |
| 55-56 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 19 |
| 57-58 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 3)) | 18 |
| 59-60 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (3, 2) (Spot #1 (thương hiệu=1, tọa độ=(3, 2))) | 17 |
| 61-62 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (3, 2) (Spot #1 (thương hiệu=1, tọa độ=(3, 2))) | 16 |
| 63 | Chờ 1 bước (`-1`) | (6, 2) | (6, 2) | Dự kiến đứng yên tại (6, 2); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(3, 2)) | 16 |

