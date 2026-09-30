# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 76
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 6) (ô=200)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(31, 15))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(31, 15))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 4, 3, 4, 4, 4, 5, 4, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (11, 9) (Spot #11 (thương hiệu=1, tọa độ=(11, 9))) | 73 |
| 2-4 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (11, 9) (Spot #11 (thương hiệu=1, tọa độ=(11, 9))) | 71 |
| 5-7 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (11, 9) (Spot #11 (thương hiệu=1, tọa độ=(11, 9))) | 69 |
| 8-9 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(11, 9)) | 68 |
| 10-11 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 67 |
| 12-14 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 65 |
| 15-16 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 64 |
| 17 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 62 |
| 18-20 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 60 |
| 21 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 58 |
| 22 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 56 |
| 23-25 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 54 |
| 26 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến di chuyển đến (19, 7); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 52 |
| 27-28 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 51 |
| 29-30 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến di chuyển đến (21, 7); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 50 |
| 31-32 | Di chuyển hướng 2 (`2`) | (21, 7) | (22, 7) | Dự kiến di chuyển đến (22, 7); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 49 |
| 33-35 | Di chuyển hướng 1 (`1`) | (22, 7) | (22, 6) | Dự kiến di chuyển đến (22, 6); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 47 |
| 36-37 | Di chuyển hướng 2 (`2`) | (22, 6) | (23, 6) | Dự kiến di chuyển đến (23, 6); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 46 |
| 38 | Di chuyển hướng 2 (`2`) | (23, 6) | (24, 6) | Dự kiến di chuyển đến (24, 6); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 44 |
| 39-41 | Di chuyển hướng 2 (`2`) | (24, 6) | (25, 6) | Dự kiến di chuyển đến (25, 6); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 42 |
| 42-44 | Di chuyển hướng 1 (`1`) | (25, 6) | (26, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(26, 5)) | 40 |
| 45-46 | Di chuyển hướng 2 (`2`) | (26, 5) | (27, 5) | Dự kiến di chuyển đến (27, 5); hướng tới tọa độ (30, 3) (Spot #9 (thương hiệu=9, tọa độ=(30, 3))) | 39 |
| 47-48 | Di chuyển hướng 2 (`2`) | (27, 5) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (30, 3) (Spot #9 (thương hiệu=9, tọa độ=(30, 3))) | 38 |
| 49 | Di chuyển hướng 2 (`2`) | (28, 5) | (29, 5) | Dự kiến di chuyển đến (29, 5); hướng tới tọa độ (30, 3) (Spot #9 (thương hiệu=9, tọa độ=(30, 3))) | 36 |
| 50-52 | Di chuyển hướng 1 (`1`) | (29, 5) | (29, 4) | Dự kiến di chuyển đến (29, 4); hướng tới tọa độ (30, 3) (Spot #9 (thương hiệu=9, tọa độ=(30, 3))) | 34 |
| 53-55 | Di chuyển hướng 1 (`1`) | (29, 4) | (30, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(30, 3)) | 32 |
| 56-57 | Di chuyển hướng 1 (`1`) | (30, 3) | (30, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(30, 2)) | 31 |
| 58-59 | Di chuyển hướng 4 (`4`) | (30, 2) | (30, 3) | Dự kiến di chuyển đến (30, 3); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 30 |
| 60-61 | Di chuyển hướng 3 (`3`) | (30, 3) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 29 |
| 62 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến di chuyển đến (30, 5); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 27 |
| 63-64 | Di chuyển hướng 4 (`4`) | (30, 5) | (29, 6) | Dự kiến di chuyển đến (29, 6); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 26 |
| 65-67 | Di chuyển hướng 4 (`4`) | (29, 6) | (29, 7) | Dự kiến di chuyển đến (29, 7); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 24 |
| 68-70 | Di chuyển hướng 5 (`5`) | (29, 7) | (28, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(28, 7)) | 22 |
| 71-72 | Di chuyển hướng 4 (`4`) | (28, 7) | (27, 8) | Dự kiến di chuyển đến (27, 8); hướng tới tọa độ (31, 15) (Spot #0 (thương hiệu=0, tọa độ=(31, 15))) | 21 |
| 73-74 | Di chuyển hướng 3 (`3`) | (27, 8) | (28, 9) | Dự kiến di chuyển đến (28, 9); hướng tới tọa độ (31, 15) (Spot #0 (thương hiệu=0, tọa độ=(31, 15))) | 20 |
| 75 | Di chuyển hướng 2 (`2`) | (28, 9) | (29, 9) | Dự kiến di chuyển đến (29, 9); hướng tới tọa độ (31, 15) (Spot #0 (thương hiệu=0, tọa độ=(31, 15))) | 18 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 4) (ô=131)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(19, 29))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(19, 29))
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 3, 4, 4, 4, 3, 3, 3, 3, 4, 3, 3, 3, 3, 4, 4, 4, 5, 2, 2, 2, 2, 2, 2, 3, 1, 1, 2, 2, 2, 2, 2, 1, 4, 3, 3, 4, 3, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến di chuyển đến (3, 5); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 73 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 72 |
| 4-6 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 70 |
| 7-8 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 69 |
| 9-10 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 68 |
| 11-12 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 67 |
| 13 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 65 |
| 14 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 63 |
| 15 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến di chuyển đến (3, 13); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 61 |
| 16-18 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 59 |
| 19 | Di chuyển hướng 3 (`3`) | (3, 14) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 57 |
| 20 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 53 |
| 22-23 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 52 |
| 24 | Di chuyển hướng 3 (`3`) | (4, 18) | (5, 19) | Dự kiến di chuyển đến (5, 19); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 50 |
| 25-26 | Di chuyển hướng 3 (`3`) | (5, 19) | (5, 20) | Dự kiến di chuyển đến (5, 20); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 49 |
| 27-28 | Di chuyển hướng 3 (`3`) | (5, 20) | (6, 21) | Dự kiến di chuyển đến (6, 21); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 48 |
| 29 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến di chuyển đến (5, 22); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 46 |
| 30 | Di chuyển hướng 4 (`4`) | (5, 22) | (5, 23) | Dự kiến di chuyển đến (5, 23); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 44 |
| 31-32 | Di chuyển hướng 4 (`4`) | (5, 23) | (4, 24) | Dự kiến di chuyển đến (4, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 43 |
| 33 | Di chuyển hướng 5 (`5`) | (4, 24) | (3, 24) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(3, 24)) | 41 |
| 34-35 | Di chuyển hướng 2 (`2`) | (3, 24) | (4, 24) | Dự kiến di chuyển đến (4, 24); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 40 |
| 36 | Di chuyển hướng 2 (`2`) | (4, 24) | (5, 24) | Dự kiến di chuyển đến (5, 24); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 38 |
| 37 | Di chuyển hướng 2 (`2`) | (5, 24) | (6, 24) | Dự kiến di chuyển đến (6, 24); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 36 |
| 38-39 | Di chuyển hướng 2 (`2`) | (6, 24) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 35 |
| 40 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 33 |
| 41 | Di chuyển hướng 2 (`2`) | (8, 24) | (9, 24) | Dự kiến di chuyển đến (9, 24); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 31 |
| 42-44 | Di chuyển hướng 3 (`3`) | (9, 24) | (10, 25) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 25)) | 29 |
| 45-46 | Di chuyển hướng 1 (`1`) | (10, 25) | (10, 24) | Dự kiến di chuyển đến (10, 24); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 28 |
| 47-49 | Di chuyển hướng 1 (`1`) | (10, 24) | (11, 23) | Dự kiến di chuyển đến (11, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 26 |
| 50 | Di chuyển hướng 2 (`2`) | (11, 23) | (12, 23) | Dự kiến di chuyển đến (12, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 24 |
| 51-52 | Di chuyển hướng 2 (`2`) | (12, 23) | (13, 23) | Dự kiến di chuyển đến (13, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 23 |
| 53-55 | Di chuyển hướng 2 (`2`) | (13, 23) | (14, 23) | Dự kiến di chuyển đến (14, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 21 |
| 56-57 | Di chuyển hướng 2 (`2`) | (14, 23) | (15, 23) | Dự kiến di chuyển đến (15, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 20 |
| 58-60 | Di chuyển hướng 2 (`2`) | (15, 23) | (16, 23) | Dự kiến di chuyển đến (16, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 18 |
| 61 | Di chuyển hướng 1 (`1`) | (16, 23) | (16, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(16, 22)) | 16 |
| 62-63 | Di chuyển hướng 4 (`4`) | (16, 22) | (16, 23) | Dự kiến di chuyển đến (16, 23); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 15 |
| 64 | Di chuyển hướng 3 (`3`) | (16, 23) | (16, 24) | Dự kiến di chuyển đến (16, 24); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 13 |
| 65 | Di chuyển hướng 3 (`3`) | (16, 24) | (17, 25) | Dự kiến di chuyển đến (17, 25); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 11 |
| 66 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến di chuyển đến (16, 26); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 9 |
| 67-68 | Di chuyển hướng 3 (`3`) | (16, 26) | (17, 27) | Dự kiến di chuyển đến (17, 27); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 8 |
| 69-71 | Di chuyển hướng 3 (`3`) | (17, 27) | (17, 28) | Dự kiến di chuyển đến (17, 28); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 6 |
| 72-73 | Di chuyển hướng 3 (`3`) | (17, 28) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 5 |
| 74-75 | Di chuyển hướng 2 (`2`) | (18, 29) | (19, 29) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 29)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 1) (ô=42)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(31, 15))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(31, 15))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 3, 2, 2, 3, 2, 2, 2, 3, 3, 4, 2, 2, 2, 1, 1, 1, 5, 0, 3, 3, 3, 4, 4, 4, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (18, 0) (Spot #4 (thương hiệu=4, tọa độ=(18, 0))) | 73 |
| 2-3 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (18, 0) (Spot #4 (thương hiệu=4, tọa độ=(18, 0))) | 72 |
| 4-6 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (18, 0) (Spot #4 (thương hiệu=4, tọa độ=(18, 0))) | 70 |
| 7 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (18, 0) (Spot #4 (thương hiệu=4, tọa độ=(18, 0))) | 68 |
| 8-10 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến di chuyển đến (15, 1); hướng tới tọa độ (18, 0) (Spot #4 (thương hiệu=4, tọa độ=(18, 0))) | 66 |
| 11-12 | Di chuyển hướng 1 (`1`) | (15, 1) | (15, 0) | Dự kiến di chuyển đến (15, 0); hướng tới tọa độ (18, 0) (Spot #4 (thương hiệu=4, tọa độ=(18, 0))) | 65 |
| 13 | Di chuyển hướng 2 (`2`) | (15, 0) | (16, 0) | Dự kiến di chuyển đến (16, 0); hướng tới tọa độ (18, 0) (Spot #4 (thương hiệu=4, tọa độ=(18, 0))) | 63 |
| 14-15 | Di chuyển hướng 2 (`2`) | (16, 0) | (17, 0) | Dự kiến di chuyển đến (17, 0); hướng tới tọa độ (18, 0) (Spot #4 (thương hiệu=4, tọa độ=(18, 0))) | 62 |
| 16-18 | Di chuyển hướng 2 (`2`) | (17, 0) | (18, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 0)) | 60 |
| 19-20 | Di chuyển hướng 2 (`2`) | (18, 0) | (19, 0) | Dự kiến di chuyển đến (19, 0); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 59 |
| 21 | Di chuyển hướng 3 (`3`) | (19, 0) | (20, 1) | Dự kiến di chuyển đến (20, 1); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 57 |
| 22-24 | Di chuyển hướng 2 (`2`) | (20, 1) | (21, 1) | Dự kiến di chuyển đến (21, 1); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 55 |
| 25-26 | Di chuyển hướng 2 (`2`) | (21, 1) | (22, 1) | Dự kiến di chuyển đến (22, 1); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 54 |
| 27-28 | Di chuyển hướng 3 (`3`) | (22, 1) | (22, 2) | Dự kiến di chuyển đến (22, 2); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 53 |
| 29 | Di chuyển hướng 2 (`2`) | (22, 2) | (23, 2) | Dự kiến di chuyển đến (23, 2); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 51 |
| 30-31 | Di chuyển hướng 2 (`2`) | (23, 2) | (24, 2) | Dự kiến di chuyển đến (24, 2); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 50 |
| 32-33 | Di chuyển hướng 2 (`2`) | (24, 2) | (25, 2) | Dự kiến di chuyển đến (25, 2); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 49 |
| 34-35 | Di chuyển hướng 3 (`3`) | (25, 2) | (26, 3) | Dự kiến di chuyển đến (26, 3); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 48 |
| 36-38 | Di chuyển hướng 3 (`3`) | (26, 3) | (26, 4) | Dự kiến di chuyển đến (26, 4); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 46 |
| 39-41 | Di chuyển hướng 4 (`4`) | (26, 4) | (26, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(26, 5)) | 44 |
| 42-43 | Di chuyển hướng 2 (`2`) | (26, 5) | (27, 5) | Dự kiến di chuyển đến (27, 5); hướng tới tọa độ (30, 3) (Spot #9 (thương hiệu=9, tọa độ=(30, 3))) | 43 |
| 44-45 | Di chuyển hướng 2 (`2`) | (27, 5) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (30, 3) (Spot #9 (thương hiệu=9, tọa độ=(30, 3))) | 42 |
| 46 | Di chuyển hướng 2 (`2`) | (28, 5) | (29, 5) | Dự kiến di chuyển đến (29, 5); hướng tới tọa độ (30, 3) (Spot #9 (thương hiệu=9, tọa độ=(30, 3))) | 40 |
| 47-49 | Di chuyển hướng 1 (`1`) | (29, 5) | (29, 4) | Dự kiến di chuyển đến (29, 4); hướng tới tọa độ (30, 3) (Spot #9 (thương hiệu=9, tọa độ=(30, 3))) | 38 |
| 50-52 | Di chuyển hướng 1 (`1`) | (29, 4) | (30, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(30, 3)) | 36 |
| 53-54 | Di chuyển hướng 1 (`1`) | (30, 3) | (30, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(30, 2)) | 35 |
| 55-56 | Di chuyển hướng 5 (`5`) | (30, 2) | (29, 2) | Dự kiến di chuyển đến (29, 2); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 34 |
| 57-58 | Di chuyển hướng 0 (`0`) | (29, 2) | (29, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(29, 1)) | 33 |
| 59-60 | Di chuyển hướng 3 (`3`) | (29, 1) | (29, 2) | Dự kiến di chuyển đến (29, 2); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 32 |
| 61-62 | Di chuyển hướng 3 (`3`) | (29, 2) | (30, 3) | Dự kiến di chuyển đến (30, 3); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 31 |
| 63-64 | Di chuyển hướng 3 (`3`) | (30, 3) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 30 |
| 65 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến di chuyển đến (30, 5); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 28 |
| 66-67 | Di chuyển hướng 4 (`4`) | (30, 5) | (29, 6) | Dự kiến di chuyển đến (29, 6); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 27 |
| 68-70 | Di chuyển hướng 4 (`4`) | (29, 6) | (29, 7) | Dự kiến di chuyển đến (29, 7); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 25 |
| 71-73 | Di chuyển hướng 5 (`5`) | (29, 7) | (28, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(28, 7)) | 23 |
| 74-75 | Di chuyển hướng 4 (`4`) | (28, 7) | (27, 8) | Dự kiến di chuyển đến (27, 8); hướng tới tọa độ (31, 15) (Spot #0 (thương hiệu=0, tọa độ=(31, 15))) | 22 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 22) (ô=710)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=0, tọa độ=(16, 22))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=0, tọa độ=(16, 22))
- Mảng hành động đã gửi server: `[2, 3, 3, 2, 3, 5, 5, 5, 4, 5, 4, 5, 0, 1, 0, 2, 2, 2, 2, 2, 3, 3, 2, 2, 3, 3, 2, 2, 2, 3, 2, 2, 2, 3, 4, 0, 0, 0, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 22) | (7, 22) | Dự kiến di chuyển đến (7, 22); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 73 |
| 2-4 | Di chuyển hướng 3 (`3`) | (7, 22) | (8, 23) | Dự kiến di chuyển đến (8, 23); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 71 |
| 5-6 | Di chuyển hướng 3 (`3`) | (8, 23) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 70 |
| 7 | Di chuyển hướng 2 (`2`) | (8, 24) | (9, 24) | Dự kiến di chuyển đến (9, 24); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 68 |
| 8-10 | Di chuyển hướng 3 (`3`) | (9, 24) | (10, 25) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 25)) | 66 |
| 11-12 | Di chuyển hướng 5 (`5`) | (10, 25) | (9, 25) | Dự kiến di chuyển đến (9, 25); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 65 |
| 13-15 | Di chuyển hướng 5 (`5`) | (9, 25) | (8, 25) | Dự kiến di chuyển đến (8, 25); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 63 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 25) | (7, 25) | Dự kiến di chuyển đến (7, 25); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 62 |
| 18-19 | Di chuyển hướng 4 (`4`) | (7, 25) | (6, 26) | Dự kiến di chuyển đến (6, 26); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 61 |
| 20-22 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến di chuyển đến (5, 26); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 59 |
| 23 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến di chuyển đến (5, 27); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 57 |
| 24-25 | Di chuyển hướng 5 (`5`) | (5, 27) | (4, 27) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 27)) | 56 |
| 26-27 | Di chuyển hướng 0 (`0`) | (4, 27) | (3, 26) | Dự kiến di chuyển đến (3, 26); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 55 |
| 28-29 | Di chuyển hướng 1 (`1`) | (3, 26) | (4, 25) | Dự kiến di chuyển đến (4, 25); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 54 |
| 30-32 | Di chuyển hướng 0 (`0`) | (4, 25) | (3, 24) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(3, 24)) | 52 |
| 33-34 | Di chuyển hướng 2 (`2`) | (3, 24) | (4, 24) | Dự kiến di chuyển đến (4, 24); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 51 |
| 35 | Di chuyển hướng 2 (`2`) | (4, 24) | (5, 24) | Dự kiến di chuyển đến (5, 24); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 49 |
| 36 | Di chuyển hướng 2 (`2`) | (5, 24) | (6, 24) | Dự kiến di chuyển đến (6, 24); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 47 |
| 37-38 | Di chuyển hướng 2 (`2`) | (6, 24) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 46 |
| 39 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 44 |
| 40 | Di chuyển hướng 3 (`3`) | (8, 24) | (9, 25) | Dự kiến di chuyển đến (9, 25); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 42 |
| 41-43 | Di chuyển hướng 3 (`3`) | (9, 25) | (9, 26) | Dự kiến di chuyển đến (9, 26); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 40 |
| 44 | Di chuyển hướng 2 (`2`) | (9, 26) | (10, 26) | Dự kiến di chuyển đến (10, 26); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 38 |
| 45 | Di chuyển hướng 2 (`2`) | (10, 26) | (11, 26) | Dự kiến di chuyển đến (11, 26); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 36 |
| 46 | Di chuyển hướng 3 (`3`) | (11, 26) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 34 |
| 47-48 | Di chuyển hướng 3 (`3`) | (12, 27) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 33 |
| 49 | Di chuyển hướng 2 (`2`) | (12, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 31 |
| 50-51 | Di chuyển hướng 2 (`2`) | (13, 28) | (14, 28) | Dự kiến di chuyển đến (14, 28); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 30 |
| 52-53 | Di chuyển hướng 2 (`2`) | (14, 28) | (15, 28) | Dự kiến di chuyển đến (15, 28); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 29 |
| 54-56 | Di chuyển hướng 3 (`3`) | (15, 28) | (16, 29) | Dự kiến di chuyển đến (16, 29); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 27 |
| 57 | Di chuyển hướng 2 (`2`) | (16, 29) | (17, 29) | Dự kiến di chuyển đến (17, 29); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 25 |
| 58 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 23 |
| 59-60 | Di chuyển hướng 2 (`2`) | (18, 29) | (19, 29) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 29)) | 22 |
| 61-62 | Di chuyển hướng 3 (`3`) | (19, 29) | (19, 30) | Dự kiến di chuyển đến (19, 30); hướng tới tọa độ (19, 31) (Spot #2 (thương hiệu=2, tọa độ=(19, 31))) | 21 |
| 63-64 | Di chuyển hướng 4 (`4`) | (19, 30) | (19, 31) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 31)) | 20 |
| 65-66 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến di chuyển đến (18, 30); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 19 |
| 67-69 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 17 |
| 70-71 | Di chuyển hướng 0 (`0`) | (18, 29) | (17, 28) | Dự kiến di chuyển đến (17, 28); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 16 |
| 72-73 | Di chuyển hướng 0 (`0`) | (17, 28) | (17, 27) | Dự kiến di chuyển đến (17, 27); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 15 |
| 74-75 | Chờ 2 bước (`-2`) | (17, 27) | (17, 27) | Dự kiến đứng yên tại (17, 27); mục tiêu Spot #10 (thương hiệu=0, tọa độ=(16, 22)) | 15 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 22) (ô=718)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=0, tọa độ=(16, 22))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=0, tọa độ=(16, 22))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 3, 2, 3, 4, 0, 5, 5, 0, 0, 5, 5, 5, 0, 0, 5, 0, 0, 5, 5, 5, 5, 5, 5, 4, 5, 3, 2, 3, 1, 1, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến di chuyển đến (15, 23); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 73 |
| 2-4 | Di chuyển hướng 3 (`3`) | (15, 23) | (15, 24) | Dự kiến di chuyển đến (15, 24); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 71 |
| 5-7 | Di chuyển hướng 3 (`3`) | (15, 24) | (16, 25) | Dự kiến di chuyển đến (16, 25); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 69 |
| 8-9 | Di chuyển hướng 3 (`3`) | (16, 25) | (16, 26) | Dự kiến di chuyển đến (16, 26); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 68 |
| 10-11 | Di chuyển hướng 3 (`3`) | (16, 26) | (17, 27) | Dự kiến di chuyển đến (17, 27); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 67 |
| 12-14 | Di chuyển hướng 3 (`3`) | (17, 27) | (17, 28) | Dự kiến di chuyển đến (17, 28); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 65 |
| 15-16 | Di chuyển hướng 3 (`3`) | (17, 28) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (19, 29) (Spot #7 (thương hiệu=7, tọa độ=(19, 29))) | 64 |
| 17-18 | Di chuyển hướng 2 (`2`) | (18, 29) | (19, 29) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 29)) | 63 |
| 19-20 | Di chuyển hướng 3 (`3`) | (19, 29) | (19, 30) | Dự kiến di chuyển đến (19, 30); hướng tới tọa độ (19, 31) (Spot #2 (thương hiệu=2, tọa độ=(19, 31))) | 62 |
| 21-22 | Di chuyển hướng 4 (`4`) | (19, 30) | (19, 31) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 31)) | 61 |
| 23-24 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến di chuyển đến (18, 30); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 60 |
| 25-27 | Di chuyển hướng 5 (`5`) | (18, 30) | (17, 30) | Dự kiến di chuyển đến (17, 30); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 58 |
| 28-29 | Di chuyển hướng 5 (`5`) | (17, 30) | (16, 30) | Dự kiến di chuyển đến (16, 30); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 57 |
| 30 | Di chuyển hướng 0 (`0`) | (16, 30) | (16, 29) | Dự kiến di chuyển đến (16, 29); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 55 |
| 31 | Di chuyển hướng 0 (`0`) | (16, 29) | (15, 28) | Dự kiến di chuyển đến (15, 28); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 53 |
| 32-34 | Di chuyển hướng 5 (`5`) | (15, 28) | (14, 28) | Dự kiến di chuyển đến (14, 28); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 51 |
| 35-36 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 50 |
| 37-38 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 49 |
| 39 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 47 |
| 40-41 | Di chuyển hướng 0 (`0`) | (12, 27) | (11, 26) | Dự kiến di chuyển đến (11, 26); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 46 |
| 42 | Di chuyển hướng 5 (`5`) | (11, 26) | (10, 26) | Dự kiến di chuyển đến (10, 26); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 44 |
| 43 | Di chuyển hướng 0 (`0`) | (10, 26) | (10, 25) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 25)) | 42 |
| 44-45 | Di chuyển hướng 0 (`0`) | (10, 25) | (9, 24) | Dự kiến di chuyển đến (9, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 41 |
| 46-48 | Di chuyển hướng 5 (`5`) | (9, 24) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 39 |
| 49 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 37 |
| 50 | Di chuyển hướng 5 (`5`) | (7, 24) | (6, 24) | Dự kiến di chuyển đến (6, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 35 |
| 51-52 | Di chuyển hướng 5 (`5`) | (6, 24) | (5, 24) | Dự kiến di chuyển đến (5, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 34 |
| 53 | Di chuyển hướng 5 (`5`) | (5, 24) | (4, 24) | Dự kiến di chuyển đến (4, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 32 |
| 54 | Di chuyển hướng 5 (`5`) | (4, 24) | (3, 24) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(3, 24)) | 30 |
| 55-56 | Di chuyển hướng 4 (`4`) | (3, 24) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 29 |
| 57-59 | Di chuyển hướng 5 (`5`) | (3, 25) | (2, 25) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 25)) | 27 |
| 60-61 | Di chuyển hướng 3 (`3`) | (2, 25) | (2, 26) | Dự kiến di chuyển đến (2, 26); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 26 |
| 62-64 | Di chuyển hướng 2 (`2`) | (2, 26) | (3, 26) | Dự kiến di chuyển đến (3, 26); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 24 |
| 65-66 | Di chuyển hướng 3 (`3`) | (3, 26) | (4, 27) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 27)) | 23 |
| 67-68 | Di chuyển hướng 1 (`1`) | (4, 27) | (4, 26) | Dự kiến di chuyển đến (4, 26); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 22 |
| 69-70 | Di chuyển hướng 1 (`1`) | (4, 26) | (5, 25) | Dự kiến di chuyển đến (5, 25); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 21 |
| 71 | Di chuyển hướng 2 (`2`) | (5, 25) | (6, 25) | Dự kiến di chuyển đến (6, 25); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 19 |
| 72-74 | Di chuyển hướng 2 (`2`) | (6, 25) | (7, 25) | Dự kiến di chuyển đến (7, 25); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 17 |
| 75 | Chờ 1 bước (`-1`) | (7, 25) | (7, 25) | Dự kiến đứng yên tại (7, 25); mục tiêu Spot #10 (thương hiệu=0, tọa độ=(16, 22)) | 17 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 7) (ô=237)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(31, 15))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(31, 15))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 3, 3, 1, 4, 4, 4, 5, 5, 5, 2, 3, 3, 4, 3, 2, 3, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 73 |
| 2-4 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 71 |
| 5 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 69 |
| 6 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 67 |
| 7-9 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 65 |
| 10 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến di chuyển đến (19, 7); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 63 |
| 11-12 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 62 |
| 13-14 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 61 |
| 15-16 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến di chuyển đến (21, 5); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 60 |
| 17-19 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến di chuyển đến (21, 4); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 58 |
| 20-21 | Di chuyển hướng 1 (`1`) | (21, 4) | (22, 3) | Dự kiến di chuyển đến (22, 3); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 57 |
| 22-23 | Di chuyển hướng 1 (`1`) | (22, 3) | (22, 2) | Dự kiến di chuyển đến (22, 2); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 56 |
| 24 | Di chuyển hướng 2 (`2`) | (22, 2) | (23, 2) | Dự kiến di chuyển đến (23, 2); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 54 |
| 25-26 | Di chuyển hướng 2 (`2`) | (23, 2) | (24, 2) | Dự kiến di chuyển đến (24, 2); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 53 |
| 27-28 | Di chuyển hướng 2 (`2`) | (24, 2) | (25, 2) | Dự kiến di chuyển đến (25, 2); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 52 |
| 29-30 | Di chuyển hướng 2 (`2`) | (25, 2) | (26, 2) | Dự kiến di chuyển đến (26, 2); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 51 |
| 31-33 | Di chuyển hướng 2 (`2`) | (26, 2) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 49 |
| 34-36 | Di chuyển hướng 2 (`2`) | (27, 2) | (28, 2) | Dự kiến di chuyển đến (28, 2); hướng tới tọa độ (29, 1) (Spot #3 (thương hiệu=3, tọa độ=(29, 1))) | 47 |
| 37-39 | Di chuyển hướng 1 (`1`) | (28, 2) | (29, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(29, 1)) | 45 |
| 40-41 | Di chuyển hướng 3 (`3`) | (29, 1) | (29, 2) | Dự kiến di chuyển đến (29, 2); hướng tới tọa độ (30, 3) (Spot #9 (thương hiệu=9, tọa độ=(30, 3))) | 44 |
| 42-43 | Di chuyển hướng 3 (`3`) | (29, 2) | (30, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(30, 3)) | 43 |
| 44-45 | Di chuyển hướng 1 (`1`) | (30, 3) | (30, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(30, 2)) | 42 |
| 46-47 | Di chuyển hướng 4 (`4`) | (30, 2) | (30, 3) | Dự kiến di chuyển đến (30, 3); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 41 |
| 48-49 | Di chuyển hướng 4 (`4`) | (30, 3) | (29, 4) | Dự kiến di chuyển đến (29, 4); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 40 |
| 50-52 | Di chuyển hướng 4 (`4`) | (29, 4) | (29, 5) | Dự kiến di chuyển đến (29, 5); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 38 |
| 53-55 | Di chuyển hướng 5 (`5`) | (29, 5) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 36 |
| 56 | Di chuyển hướng 5 (`5`) | (28, 5) | (27, 5) | Dự kiến di chuyển đến (27, 5); hướng tới tọa độ (26, 5) (Spot #8 (thương hiệu=8, tọa độ=(26, 5))) | 34 |
| 57-58 | Di chuyển hướng 5 (`5`) | (27, 5) | (26, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(26, 5)) | 33 |
| 59-60 | Di chuyển hướng 2 (`2`) | (26, 5) | (27, 5) | Dự kiến di chuyển đến (27, 5); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 32 |
| 61-62 | Di chuyển hướng 3 (`3`) | (27, 5) | (27, 6) | Dự kiến di chuyển đến (27, 6); hướng tới tọa độ (28, 7) (Spot #15 (thương hiệu=5, tọa độ=(28, 7))) | 31 |
| 63-65 | Di chuyển hướng 3 (`3`) | (27, 6) | (28, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=5, tọa độ=(28, 7)) | 29 |
| 66-67 | Di chuyển hướng 4 (`4`) | (28, 7) | (27, 8) | Dự kiến di chuyển đến (27, 8); hướng tới tọa độ (31, 15) (Spot #0 (thương hiệu=0, tọa độ=(31, 15))) | 28 |
| 68-69 | Di chuyển hướng 3 (`3`) | (27, 8) | (28, 9) | Dự kiến di chuyển đến (28, 9); hướng tới tọa độ (31, 15) (Spot #0 (thương hiệu=0, tọa độ=(31, 15))) | 27 |
| 70 | Di chuyển hướng 2 (`2`) | (28, 9) | (29, 9) | Dự kiến di chuyển đến (29, 9); hướng tới tọa độ (31, 15) (Spot #0 (thương hiệu=0, tọa độ=(31, 15))) | 25 |
| 71-72 | Di chuyển hướng 3 (`3`) | (29, 9) | (29, 10) | Dự kiến di chuyển đến (29, 10); hướng tới tọa độ (31, 15) (Spot #0 (thương hiệu=0, tọa độ=(31, 15))) | 24 |
| 73-74 | Di chuyển hướng 4 (`4`) | (29, 10) | (29, 11) | Dự kiến di chuyển đến (29, 11); hướng tới tọa độ (31, 15) (Spot #0 (thương hiệu=0, tọa độ=(31, 15))) | 23 |
| 75 | Di chuyển hướng 3 (`3`) | (29, 11) | (29, 12) | Dự kiến di chuyển đến (29, 12); hướng tới tọa độ (31, 15) (Spot #0 (thương hiệu=0, tọa độ=(31, 15))) | 21 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (5, 14) (ô=453)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=4, tọa độ=(18, 15))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=4, tọa độ=(18, 15))
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 4, 4, 4, 4, 4, 4, 3, 2, 1, 4, 3, 3, 1, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 0, 1, 1, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 73 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 72 |
| 4 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến di chuyển đến (4, 17); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 70 |
| 5-6 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 69 |
| 7 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 67 |
| 8-10 | Di chuyển hướng 4 (`4`) | (4, 19) | (3, 20) | Dự kiến di chuyển đến (3, 20); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 65 |
| 11 | Di chuyển hướng 4 (`4`) | (3, 20) | (3, 21) | Dự kiến di chuyển đến (3, 21); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 63 |
| 12-14 | Di chuyển hướng 4 (`4`) | (3, 21) | (2, 22) | Dự kiến di chuyển đến (2, 22); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 61 |
| 15-17 | Di chuyển hướng 4 (`4`) | (2, 22) | (2, 23) | Dự kiến di chuyển đến (2, 23); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 59 |
| 18-19 | Di chuyển hướng 4 (`4`) | (2, 23) | (1, 24) | Dự kiến di chuyển đến (1, 24); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 58 |
| 20 | Di chuyển hướng 3 (`3`) | (1, 24) | (2, 25) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 25)) | 56 |
| 21-22 | Di chuyển hướng 2 (`2`) | (2, 25) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 55 |
| 23-25 | Di chuyển hướng 1 (`1`) | (3, 25) | (3, 24) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(3, 24)) | 53 |
| 26-27 | Di chuyển hướng 4 (`4`) | (3, 24) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 52 |
| 28-30 | Di chuyển hướng 3 (`3`) | (3, 25) | (3, 26) | Dự kiến di chuyển đến (3, 26); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 50 |
| 31-32 | Di chuyển hướng 3 (`3`) | (3, 26) | (4, 27) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 27)) | 49 |
| 33-34 | Di chuyển hướng 1 (`1`) | (4, 27) | (4, 26) | Dự kiến di chuyển đến (4, 26); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 48 |
| 35-36 | Di chuyển hướng 1 (`1`) | (4, 26) | (5, 25) | Dự kiến di chuyển đến (5, 25); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 47 |
| 37 | Di chuyển hướng 2 (`2`) | (5, 25) | (6, 25) | Dự kiến di chuyển đến (6, 25); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 45 |
| 38-40 | Di chuyển hướng 2 (`2`) | (6, 25) | (7, 25) | Dự kiến di chuyển đến (7, 25); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 43 |
| 41-42 | Di chuyển hướng 2 (`2`) | (7, 25) | (8, 25) | Dự kiến di chuyển đến (8, 25); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 42 |
| 43-44 | Di chuyển hướng 2 (`2`) | (8, 25) | (9, 25) | Dự kiến di chuyển đến (9, 25); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 41 |
| 45-47 | Di chuyển hướng 2 (`2`) | (9, 25) | (10, 25) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 25)) | 39 |
| 48-49 | Di chuyển hướng 1 (`1`) | (10, 25) | (10, 24) | Dự kiến di chuyển đến (10, 24); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 38 |
| 50-52 | Di chuyển hướng 1 (`1`) | (10, 24) | (11, 23) | Dự kiến di chuyển đến (11, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 36 |
| 53 | Di chuyển hướng 2 (`2`) | (11, 23) | (12, 23) | Dự kiến di chuyển đến (12, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 34 |
| 54-55 | Di chuyển hướng 2 (`2`) | (12, 23) | (13, 23) | Dự kiến di chuyển đến (13, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 33 |
| 56-58 | Di chuyển hướng 2 (`2`) | (13, 23) | (14, 23) | Dự kiến di chuyển đến (14, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 31 |
| 59-60 | Di chuyển hướng 2 (`2`) | (14, 23) | (15, 23) | Dự kiến di chuyển đến (15, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 30 |
| 61-63 | Di chuyển hướng 2 (`2`) | (15, 23) | (16, 23) | Dự kiến di chuyển đến (16, 23); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 28 |
| 64 | Di chuyển hướng 1 (`1`) | (16, 23) | (16, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(16, 22)) | 26 |
| 65-66 | Di chuyển hướng 0 (`0`) | (16, 22) | (16, 21) | Dự kiến di chuyển đến (16, 21); hướng tới tọa độ (18, 15) (Spot #14 (thương hiệu=4, tọa độ=(18, 15))) | 25 |
| 67 | Di chuyển hướng 1 (`1`) | (16, 21) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (18, 15) (Spot #14 (thương hiệu=4, tọa độ=(18, 15))) | 23 |
| 68-69 | Di chuyển hướng 1 (`1`) | (16, 20) | (17, 19) | Dự kiến di chuyển đến (17, 19); hướng tới tọa độ (18, 15) (Spot #14 (thương hiệu=4, tọa độ=(18, 15))) | 22 |
| 70-72 | Di chuyển hướng 1 (`1`) | (17, 19) | (17, 18) | Dự kiến di chuyển đến (17, 18); hướng tới tọa độ (18, 15) (Spot #14 (thương hiệu=4, tọa độ=(18, 15))) | 20 |
| 73-74 | Di chuyển hướng 1 (`1`) | (17, 18) | (18, 17) | Dự kiến di chuyển đến (18, 17); hướng tới tọa độ (18, 15) (Spot #14 (thương hiệu=4, tọa độ=(18, 15))) | 19 |
| 75 | Di chuyển hướng 1 (`1`) | (18, 17) | (18, 16) | Dự kiến di chuyển đến (18, 16); hướng tới tọa độ (18, 15) (Spot #14 (thương hiệu=4, tọa độ=(18, 15))) | 17 |

### Xe #7 - Tuần tra

- Vị trí đầu ngày: (10, 10) (ô=330)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(4, 27))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(4, 27))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 4, 5, 5, 5, 5, 5, 4, 4, 0, 5, 5, 5, 5, 5, 5, 4, 5, 3, 2, 3, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 73 |
| 2-3 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 72 |
| 4-6 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 70 |
| 7-9 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 68 |
| 10-11 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 67 |
| 12-13 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 66 |
| 14-16 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 64 |
| 17 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 62 |
| 18-20 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến di chuyển đến (14, 19); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 60 |
| 21 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 58 |
| 22-23 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 57 |
| 24-26 | Di chuyển hướng 3 (`3`) | (15, 20) | (16, 21) | Dự kiến di chuyển đến (16, 21); hướng tới tọa độ (16, 22) (Spot #10 (thương hiệu=0, tọa độ=(16, 22))) | 55 |
| 27 | Di chuyển hướng 3 (`3`) | (16, 21) | (16, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(16, 22)) | 53 |
| 28-29 | Di chuyển hướng 4 (`4`) | (16, 22) | (16, 23) | Dự kiến di chuyển đến (16, 23); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 52 |
| 30 | Di chuyển hướng 5 (`5`) | (16, 23) | (15, 23) | Dự kiến di chuyển đến (15, 23); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 50 |
| 31-33 | Di chuyển hướng 5 (`5`) | (15, 23) | (14, 23) | Dự kiến di chuyển đến (14, 23); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 48 |
| 34-35 | Di chuyển hướng 5 (`5`) | (14, 23) | (13, 23) | Dự kiến di chuyển đến (13, 23); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 47 |
| 36-38 | Di chuyển hướng 5 (`5`) | (13, 23) | (12, 23) | Dự kiến di chuyển đến (12, 23); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 45 |
| 39-40 | Di chuyển hướng 5 (`5`) | (12, 23) | (11, 23) | Dự kiến di chuyển đến (11, 23); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 44 |
| 41 | Di chuyển hướng 4 (`4`) | (11, 23) | (10, 24) | Dự kiến di chuyển đến (10, 24); hướng tới tọa độ (10, 25) (Spot #6 (thương hiệu=6, tọa độ=(10, 25))) | 42 |
| 42-44 | Di chuyển hướng 4 (`4`) | (10, 24) | (10, 25) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 25)) | 40 |
| 45-46 | Di chuyển hướng 0 (`0`) | (10, 25) | (9, 24) | Dự kiến di chuyển đến (9, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 39 |
| 47-49 | Di chuyển hướng 5 (`5`) | (9, 24) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 37 |
| 50 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 35 |
| 51 | Di chuyển hướng 5 (`5`) | (7, 24) | (6, 24) | Dự kiến di chuyển đến (6, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 33 |
| 52-53 | Di chuyển hướng 5 (`5`) | (6, 24) | (5, 24) | Dự kiến di chuyển đến (5, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 32 |
| 54 | Di chuyển hướng 5 (`5`) | (5, 24) | (4, 24) | Dự kiến di chuyển đến (4, 24); hướng tới tọa độ (3, 24) (Spot #12 (thương hiệu=2, tọa độ=(3, 24))) | 30 |
| 55 | Di chuyển hướng 5 (`5`) | (4, 24) | (3, 24) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(3, 24)) | 28 |
| 56-57 | Di chuyển hướng 4 (`4`) | (3, 24) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (2, 25) (Spot #5 (thương hiệu=5, tọa độ=(2, 25))) | 27 |
| 58-60 | Di chuyển hướng 5 (`5`) | (3, 25) | (2, 25) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 25)) | 25 |
| 61-62 | Di chuyển hướng 3 (`3`) | (2, 25) | (2, 26) | Dự kiến di chuyển đến (2, 26); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 24 |
| 63-65 | Di chuyển hướng 2 (`2`) | (2, 26) | (3, 26) | Dự kiến di chuyển đến (3, 26); hướng tới tọa độ (4, 27) (Spot #1 (thương hiệu=1, tọa độ=(4, 27))) | 22 |
| 66-67 | Di chuyển hướng 3 (`3`) | (3, 26) | (4, 27) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 27)) | 21 |
| 68-75 | Chờ 8 bước (`-8`) | (4, 27) | (4, 27) | Dự kiến đứng yên tại (4, 27); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 27)) | 21 |

