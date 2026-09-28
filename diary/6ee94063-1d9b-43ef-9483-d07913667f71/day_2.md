# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 141
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 49 | #0 | #3 | (12, 20) | 6 | 64 |
| 76 | #0 | #3 | (12, 20) | 48 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 0) (ô=2)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=0, tọa độ=(28, 22))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=0, tọa độ=(28, 22))
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 5, 4, -1, 5, 5, 5, 5, 5, 4, 5, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, 3, 2, 2, 2, 2, 2, 2, 1, 2, 2, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến di chuyển đến (3, 0); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 40 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 39 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 37 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 36 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 35 |
| 9 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 33 |
| 10-11 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 32 |
| 12-13 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 31 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 30 |
| 16 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 28 |
| 17 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 26 |
| 18 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến di chuyển đến (11, 7); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 24 |
| 19-20 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 23 |
| 21-22 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 22 |
| 23-24 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 21 |
| 25-27 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 19 |
| 28-29 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 18 |
| 30-31 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 17 |
| 32-33 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 16 |
| 34-35 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 15 |
| 36-38 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 13 |
| 39 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến di chuyển đến (15, 17); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 11 |
| 40-41 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến di chuyển đến (14, 18); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 10 |
| 42-44 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến di chuyển đến (14, 19); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 8 |
| 45-46 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 7 |
| 47-48 | Di chuyển hướng 4 (`4`) | (13, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(12, 20)) | 64 |
| 49 | Chờ 1 bước (`-1`) | (12, 20) | (12, 20) | Dự kiến đứng yên tại (12, 20); hướng tới tọa độ (12, 20) | 64 |
| 50-51 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến di chuyển đến (11, 20); hướng tới tọa độ (6, 21) (Spot #6 (thương hiệu=6, tọa độ=(6, 21))) | 63 |
| 52-53 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (6, 21) (Spot #6 (thương hiệu=6, tọa độ=(6, 21))) | 62 |
| 54-55 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (6, 21) (Spot #6 (thương hiệu=6, tọa độ=(6, 21))) | 61 |
| 56-57 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (6, 21) (Spot #6 (thương hiệu=6, tọa độ=(6, 21))) | 60 |
| 58 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (6, 21) (Spot #6 (thương hiệu=6, tọa độ=(6, 21))) | 58 |
| 59-60 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (6, 21) (Spot #6 (thương hiệu=6, tọa độ=(6, 21))) | 57 |
| 61-62 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 21)) | 56 |
| 63-64 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến di chuyển đến (7, 21); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 55 |
| 65-66 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến di chuyển đến (8, 21); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 54 |
| 67-68 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến di chuyển đến (8, 20); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 53 |
| 69 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến di chuyển đến (9, 20); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 51 |
| 70-71 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 50 |
| 72-73 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến di chuyển đến (11, 20); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 49 |
| 74-75 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến di chuyển đến (12, 20); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 64 |
| 76-77 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 63 |
| 78-79 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 62 |
| 80-82 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 60 |
| 83-85 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 58 |
| 86-87 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 56 |
| 88-89 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến di chuyển đến (18, 21); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 55 |
| 90-91 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến di chuyển đến (19, 21); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 54 |
| 92-93 | Di chuyển hướng 3 (`3`) | (19, 21) | (19, 22) | Dự kiến di chuyển đến (19, 22); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 53 |
| 94-95 | Di chuyển hướng 3 (`3`) | (19, 22) | (20, 23) | Dự kiến di chuyển đến (20, 23); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 52 |
| 96-97 | Di chuyển hướng 2 (`2`) | (20, 23) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 51 |
| 98-99 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến di chuyển đến (22, 23); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 50 |
| 100-101 | Di chuyển hướng 2 (`2`) | (22, 23) | (23, 23) | Dự kiến di chuyển đến (23, 23); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 49 |
| 102 | Di chuyển hướng 2 (`2`) | (23, 23) | (24, 23) | Dự kiến di chuyển đến (24, 23); hướng tới tọa độ (25, 23) (Spot #7 (thương hiệu=7, tọa độ=(25, 23))) | 47 |
| 103-104 | Di chuyển hướng 2 (`2`) | (24, 23) | (25, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(25, 23)) | 46 |
| 105-106 | Di chuyển hướng 2 (`2`) | (25, 23) | (26, 23) | Dự kiến di chuyển đến (26, 23); hướng tới tọa độ (28, 22) (Spot #8 (thương hiệu=0, tọa độ=(28, 22))) | 45 |
| 107-108 | Di chuyển hướng 1 (`1`) | (26, 23) | (26, 22) | Dự kiến di chuyển đến (26, 22); hướng tới tọa độ (28, 22) (Spot #8 (thương hiệu=0, tọa độ=(28, 22))) | 44 |
| 109 | Di chuyển hướng 2 (`2`) | (26, 22) | (27, 22) | Dự kiến di chuyển đến (27, 22); hướng tới tọa độ (28, 22) (Spot #8 (thương hiệu=0, tọa độ=(28, 22))) | 42 |
| 110-111 | Di chuyển hướng 2 (`2`) | (27, 22) | (28, 22) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(28, 22)) | 41 |
| 112-140 | Chờ 29 bước (`-29`) | (28, 22) | (28, 22) | Dự kiến đứng yên tại (28, 22); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(28, 22)) | 41 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (25, 23) (ô=761)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(25, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(25, 23)
- Mảng hành động đã gửi server: `[-141]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-140 | Chờ 141 bước (`-141`) | (25, 23) | (25, 23) | Dự kiến đứng yên tại (25, 23); hướng tới tọa độ (25, 23) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 10) (ô=338)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(29, 9))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(29, 9))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 4, 4, 4, 4, 5, 4, 4, 5, 5, 4, 3, 3, 3, 2, 1, 1, 2, 1, 2, 2, 2, 1, 1, 1, -80]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (18, 10) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (26, 5) (Spot #0 (thương hiệu=0, tọa độ=(26, 5))) | 61 |
| 2 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến di chuyển đến (20, 10); hướng tới tọa độ (26, 5) (Spot #0 (thương hiệu=0, tọa độ=(26, 5))) | 59 |
| 3-4 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến di chuyển đến (21, 10); hướng tới tọa độ (26, 5) (Spot #0 (thương hiệu=0, tọa độ=(26, 5))) | 58 |
| 5-6 | Di chuyển hướng 2 (`2`) | (21, 10) | (22, 10) | Dự kiến di chuyển đến (22, 10); hướng tới tọa độ (26, 5) (Spot #0 (thương hiệu=0, tọa độ=(26, 5))) | 57 |
| 7-8 | Di chuyển hướng 1 (`1`) | (22, 10) | (23, 9) | Dự kiến di chuyển đến (23, 9); hướng tới tọa độ (26, 5) (Spot #0 (thương hiệu=0, tọa độ=(26, 5))) | 56 |
| 9 | Di chuyển hướng 2 (`2`) | (23, 9) | (24, 9) | Dự kiến di chuyển đến (24, 9); hướng tới tọa độ (26, 5) (Spot #0 (thương hiệu=0, tọa độ=(26, 5))) | 54 |
| 10 | Di chuyển hướng 1 (`1`) | (24, 9) | (24, 8) | Dự kiến di chuyển đến (24, 8); hướng tới tọa độ (26, 5) (Spot #0 (thương hiệu=0, tọa độ=(26, 5))) | 52 |
| 11-12 | Di chuyển hướng 1 (`1`) | (24, 8) | (25, 7) | Dự kiến di chuyển đến (25, 7); hướng tới tọa độ (26, 5) (Spot #0 (thương hiệu=0, tọa độ=(26, 5))) | 51 |
| 13 | Di chuyển hướng 1 (`1`) | (25, 7) | (25, 6) | Dự kiến di chuyển đến (25, 6); hướng tới tọa độ (26, 5) (Spot #0 (thương hiệu=0, tọa độ=(26, 5))) | 49 |
| 14-15 | Di chuyển hướng 1 (`1`) | (25, 6) | (26, 5) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(26, 5)) | 48 |
| 16-17 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến di chuyển đến (25, 6); hướng tới tọa độ (19, 12) (Spot #3 (thương hiệu=3, tọa độ=(19, 12))) | 47 |
| 18-19 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến di chuyển đến (25, 7); hướng tới tọa độ (19, 12) (Spot #3 (thương hiệu=3, tọa độ=(19, 12))) | 46 |
| 20 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến di chuyển đến (24, 8); hướng tới tọa độ (19, 12) (Spot #3 (thương hiệu=3, tọa độ=(19, 12))) | 44 |
| 21-22 | Di chuyển hướng 4 (`4`) | (24, 8) | (24, 9) | Dự kiến di chuyển đến (24, 9); hướng tới tọa độ (19, 12) (Spot #3 (thương hiệu=3, tọa độ=(19, 12))) | 43 |
| 23 | Di chuyển hướng 5 (`5`) | (24, 9) | (23, 9) | Dự kiến di chuyển đến (23, 9); hướng tới tọa độ (19, 12) (Spot #3 (thương hiệu=3, tọa độ=(19, 12))) | 41 |
| 24 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến di chuyển đến (22, 10); hướng tới tọa độ (19, 12) (Spot #3 (thương hiệu=3, tọa độ=(19, 12))) | 39 |
| 25-26 | Di chuyển hướng 4 (`4`) | (22, 10) | (22, 11) | Dự kiến di chuyển đến (22, 11); hướng tới tọa độ (19, 12) (Spot #3 (thương hiệu=3, tọa độ=(19, 12))) | 38 |
| 27 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến di chuyển đến (21, 11); hướng tới tọa độ (19, 12) (Spot #3 (thương hiệu=3, tọa độ=(19, 12))) | 36 |
| 28-29 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến di chuyển đến (20, 11); hướng tới tọa độ (19, 12) (Spot #3 (thương hiệu=3, tọa độ=(19, 12))) | 35 |
| 30-31 | Di chuyển hướng 4 (`4`) | (20, 11) | (19, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 12)) | 34 |
| 32-33 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến di chuyển đến (20, 13); hướng tới tọa độ (21, 15) (Spot #5 (thương hiệu=5, tọa độ=(21, 15))) | 33 |
| 34-36 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến di chuyển đến (20, 14); hướng tới tọa độ (21, 15) (Spot #5 (thương hiệu=5, tọa độ=(21, 15))) | 31 |
| 37-39 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(21, 15)) | 29 |
| 40-41 | Di chuyển hướng 2 (`2`) | (21, 15) | (22, 15) | Dự kiến di chuyển đến (22, 15); hướng tới tọa độ (29, 9) (Spot #4 (thương hiệu=4, tọa độ=(29, 9))) | 28 |
| 42-43 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến di chuyển đến (22, 14); hướng tới tọa độ (29, 9) (Spot #4 (thương hiệu=4, tọa độ=(29, 9))) | 27 |
| 44-45 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến di chuyển đến (23, 13); hướng tới tọa độ (29, 9) (Spot #4 (thương hiệu=4, tọa độ=(29, 9))) | 26 |
| 46 | Di chuyển hướng 2 (`2`) | (23, 13) | (24, 13) | Dự kiến di chuyển đến (24, 13); hướng tới tọa độ (29, 9) (Spot #4 (thương hiệu=4, tọa độ=(29, 9))) | 24 |
| 47 | Di chuyển hướng 1 (`1`) | (24, 13) | (24, 12) | Dự kiến di chuyển đến (24, 12); hướng tới tọa độ (29, 9) (Spot #4 (thương hiệu=4, tọa độ=(29, 9))) | 22 |
| 48-49 | Di chuyển hướng 2 (`2`) | (24, 12) | (25, 12) | Dự kiến di chuyển đến (25, 12); hướng tới tọa độ (29, 9) (Spot #4 (thương hiệu=4, tọa độ=(29, 9))) | 21 |
| 50-51 | Di chuyển hướng 2 (`2`) | (25, 12) | (26, 12) | Dự kiến di chuyển đến (26, 12); hướng tới tọa độ (29, 9) (Spot #4 (thương hiệu=4, tọa độ=(29, 9))) | 20 |
| 52-53 | Di chuyển hướng 2 (`2`) | (26, 12) | (27, 12) | Dự kiến di chuyển đến (27, 12); hướng tới tọa độ (29, 9) (Spot #4 (thương hiệu=4, tọa độ=(29, 9))) | 19 |
| 54-55 | Di chuyển hướng 1 (`1`) | (27, 12) | (28, 11) | Dự kiến di chuyển đến (28, 11); hướng tới tọa độ (29, 9) (Spot #4 (thương hiệu=4, tọa độ=(29, 9))) | 18 |
| 56-57 | Di chuyển hướng 1 (`1`) | (28, 11) | (28, 10) | Dự kiến di chuyển đến (28, 10); hướng tới tọa độ (29, 9) (Spot #4 (thương hiệu=4, tọa độ=(29, 9))) | 17 |
| 58-60 | Di chuyển hướng 1 (`1`) | (28, 10) | (29, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 15 |
| 61-140 | Chờ 80 bước (`-80`) | (29, 9) | (29, 9) | Dự kiến đứng yên tại (29, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(29, 9)) | 15 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (19, 12) (ô=403)
- Nhiên liệu đầu ngày: 64
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #9 (thương hiệu=1, tọa độ=(12, 20))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 4, 4, 4, 4, 5, -102]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 12) | (19, 11) | Dự kiến di chuyển đến (19, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 2-3 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến di chuyển đến (18, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 4-5 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 6-8 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 9-10 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 11-12 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến di chuyển đến (16, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 13 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 14-15 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 16 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến di chuyển đến (14, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 17-18 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 19 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 22-23 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 24-25 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 26-28 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 29 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến di chuyển đến (15, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến di chuyển đến (14, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 32-34 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến di chuyển đến (14, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 35-36 | Di chuyển hướng 4 (`4`) | (14, 19) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 20) (Spot #9 (thương hiệu=1, tọa độ=(12, 20))) | 64 |
| 37-38 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (12, 20) | 64 |
| 39-140 | Chờ 102 bước (`-102`) | (12, 20) | (12, 20) | Dự kiến đứng yên tại (12, 20); điểm hẹn của xe tuần tra #0 tại (12, 20) | 64 |

