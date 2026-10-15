# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 48
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 1) (ô=34)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=13, tọa độ=(22, 22))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=13, tọa độ=(22, 22))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 4, 4, 4, 3, 4, 4, 5, 5, 5, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 79 |
| 2 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến di chuyển đến (11, 0); hướng tới tọa độ (12, 0) (Spot #1 (thương hiệu=1, tọa độ=(12, 0))) | 77 |
| 3 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 75 |
| 4-5 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến di chuyển đến (13, 0); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 74 |
| 6 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 72 |
| 7 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến di chuyển đến (15, 1); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 70 |
| 8 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến di chuyển đến (16, 1); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 68 |
| 9-11 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến di chuyển đến (17, 1); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 66 |
| 12 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 64 |
| 13 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến di chuyển đến (18, 3); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 62 |
| 14 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 60 |
| 15-16 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến di chuyển đến (19, 5); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 59 |
| 17 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 57 |
| 18 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 55 |
| 19 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến di chuyển đến (20, 8); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 53 |
| 20 | Di chuyển hướng 3 (`3`) | (20, 8) | (21, 9) | Dự kiến di chuyển đến (21, 9); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 51 |
| 21 | Di chuyển hướng 3 (`3`) | (21, 9) | (21, 10) | Dự kiến di chuyển đến (21, 10); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 49 |
| 22 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến di chuyển đến (21, 11); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 47 |
| 23-25 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 45 |
| 26 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến di chuyển đến (21, 13); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 43 |
| 27 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến di chuyển đến (21, 14); hướng tới tọa độ (21, 15) (Spot #17 (thương hiệu=12, tọa độ=(21, 15))) | 41 |
| 28 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 39 |
| 29-30 | Di chuyển hướng 4 (`4`) | (21, 15) | (20, 16) | Dự kiến di chuyển đến (20, 16); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 38 |
| 31 | Di chuyển hướng 4 (`4`) | (20, 16) | (20, 17) | Dự kiến di chuyển đến (20, 17); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 36 |
| 32 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến di chuyển đến (19, 18); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 34 |
| 33 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến di chuyển đến (20, 19); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 32 |
| 34 | Di chuyển hướng 4 (`4`) | (20, 19) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 30 |
| 35 | Di chuyển hướng 4 (`4`) | (19, 20) | (19, 21) | Dự kiến di chuyển đến (19, 21); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 28 |
| 36-38 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến di chuyển đến (18, 21); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 26 |
| 39-40 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến di chuyển đến (17, 21); hướng tới tọa độ (16, 21) (Spot #20 (thương hiệu=14, tọa độ=(16, 21))) | 25 |
| 41 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 23 |
| 42-43 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến di chuyển đến (17, 21); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 22 |
| 44 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến di chuyển đến (18, 21); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 20 |
| 45-46 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến di chuyển đến (19, 21); hướng tới tọa độ (22, 22) (Spot #19 (thương hiệu=13, tọa độ=(22, 22))) | 19 |
| 47 | Chờ 1 bước (`-1`) | (19, 21) | (19, 21) | Dự kiến đứng yên tại (19, 21); mục tiêu Spot #19 (thương hiệu=13, tọa độ=(22, 22)) | 19 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 6) (ô=145)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 2, 1, 1, 3, 4, 3, 4, 3, 3, 3, 3, 3, 2, 3, 4, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 2, 3, 2, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 79 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 77 |
| 3 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 75 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 73 |
| 5 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 71 |
| 6 | Di chuyển hướng 1 (`1`) | (3, 2) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 69 |
| 7-9 | Di chuyển hướng 1 (`1`) | (4, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 67 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 66 |
| 12 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 64 |
| 13 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 62 |
| 14 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 60 |
| 15-16 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 59 |
| 17-18 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 58 |
| 19 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 56 |
| 20 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 54 |
| 21 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 52 |
| 22 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 50 |
| 23 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 48 |
| 24-25 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 47 |
| 26 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 45 |
| 27-28 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 44 |
| 29-30 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 43 |
| 31-32 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 42 |
| 33-34 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 41 |
| 35-36 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 40 |
| 37-38 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 39 |
| 39 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến di chuyển đến (10, 19); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 37 |
| 40 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 35 |
| 41 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến di chuyển đến (11, 21); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 33 |
| 42 | Di chuyển hướng 2 (`2`) | (11, 21) | (12, 21) | Dự kiến di chuyển đến (12, 21); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 31 |
| 43 | Di chuyển hướng 3 (`3`) | (12, 21) | (12, 22) | Dự kiến di chuyển đến (12, 22); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 29 |
| 44 | Di chuyển hướng 2 (`2`) | (12, 22) | (13, 22) | Dự kiến di chuyển đến (13, 22); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 27 |
| 45 | Di chuyển hướng 2 (`2`) | (13, 22) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới tọa độ (15, 23) (Spot #23 (thương hiệu=17, tọa độ=(15, 23))) | 25 |
| 46 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 23 |
| 47 | Chờ 1 bước (`-1`) | (15, 23) | (15, 23) | Dự kiến đứng yên tại (15, 23); mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 23 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 13) (ô=327)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=5, tọa độ=(14, 4))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=5, tọa độ=(14, 4))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 5, 5, 2, 2, 3, 3, 4, 3, 5, 5, 4, 4, 5, 0, 0, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 79 |
| 2-3 | Di chuyển hướng 1 (`1`) | (15, 12) | (16, 11) | Dự kiến di chuyển đến (16, 11); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 78 |
| 4-6 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 76 |
| 7 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến di chuyển đến (17, 10); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 74 |
| 8 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến di chuyển đến (18, 10); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 72 |
| 9 | Di chuyển hướng 1 (`1`) | (18, 10) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 70 |
| 10 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến di chuyển đến (20, 9); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 68 |
| 11 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến di chuyển đến (20, 8); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 66 |
| 12 | Di chuyển hướng 1 (`1`) | (20, 8) | (21, 7) | Dự kiến di chuyển đến (21, 7); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 64 |
| 13-14 | Di chuyển hướng 1 (`1`) | (21, 7) | (21, 6) | Dự kiến di chuyển đến (21, 6); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 63 |
| 15-16 | Di chuyển hướng 1 (`1`) | (21, 6) | (22, 5) | Dự kiến di chuyển đến (22, 5); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 62 |
| 17 | Di chuyển hướng 1 (`1`) | (22, 5) | (22, 4) | Dự kiến di chuyển đến (22, 4); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 60 |
| 18 | Di chuyển hướng 1 (`1`) | (22, 4) | (23, 3) | Dự kiến di chuyển đến (23, 3); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 58 |
| 19 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến di chuyển đến (23, 2); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 56 |
| 20 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến di chuyển đến (23, 1); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 54 |
| 21 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến di chuyển đến (22, 0); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 52 |
| 22 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến di chuyển đến (21, 0); hướng tới tọa độ (20, 0) (Spot #2 (thương hiệu=2, tọa độ=(20, 0))) | 50 |
| 23 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 48 |
| 24-25 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến di chuyển đến (21, 0); hướng tới tọa độ (23, 4) (Spot #12 (thương hiệu=8, tọa độ=(23, 4))) | 47 |
| 26 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến di chuyển đến (22, 0); hướng tới tọa độ (23, 4) (Spot #12 (thương hiệu=8, tọa độ=(23, 4))) | 45 |
| 27 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến di chuyển đến (23, 1); hướng tới tọa độ (23, 4) (Spot #12 (thương hiệu=8, tọa độ=(23, 4))) | 43 |
| 28 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến di chuyển đến (23, 2); hướng tới tọa độ (23, 4) (Spot #12 (thương hiệu=8, tọa độ=(23, 4))) | 41 |
| 29 | Di chuyển hướng 4 (`4`) | (23, 2) | (23, 3) | Dự kiến di chuyển đến (23, 3); hướng tới tọa độ (23, 4) (Spot #12 (thương hiệu=8, tọa độ=(23, 4))) | 39 |
| 30 | Di chuyển hướng 3 (`3`) | (23, 3) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 37 |
| 31-32 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến di chuyển đến (22, 4); hướng tới tọa độ (21, 4) (Spot #10 (thương hiệu=7, tọa độ=(21, 4))) | 36 |
| 33 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 34 |
| 34-35 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến di chuyển đến (21, 5); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 33 |
| 36 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 31 |
| 37 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 29 |
| 38 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến di chuyển đến (19, 5); hướng tới tọa độ (18, 4) (Spot #9 (thương hiệu=6, tọa độ=(18, 4))) | 27 |
| 39 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 25 |
| 40-41 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (14, 4) (Spot #7 (thương hiệu=5, tọa độ=(14, 4))) | 24 |
| 42-43 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (14, 4) (Spot #7 (thương hiệu=5, tọa độ=(14, 4))) | 23 |
| 44-46 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (14, 4) (Spot #7 (thương hiệu=5, tọa độ=(14, 4))) | 21 |
| 47 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 19 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 17) (ô=409)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=3, tọa độ=(8, 10))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=3, tọa độ=(8, 10))
- Mảng hành động đã gửi server: `[1, 2, 2, 5, 5, 0, 1, 4, 3, 3, 3, 3, 3, 3, 4, 3, 2, 2, 2, 2, 2, 0, 0, 1, 1, 2, 2, 5, 0, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến di chuyển đến (1, 16); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 79 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (3, 16) (Spot #6 (thương hiệu=4, tọa độ=(3, 16))) | 77 |
| 3 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 75 |
| 4-5 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (1, 14) (Spot #14 (thương hiệu=10, tọa độ=(1, 14))) | 74 |
| 6 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến di chuyển đến (1, 16); hướng tới tọa độ (1, 14) (Spot #14 (thương hiệu=10, tọa độ=(1, 14))) | 72 |
| 7 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến di chuyển đến (1, 15); hướng tới tọa độ (1, 14) (Spot #14 (thương hiệu=10, tọa độ=(1, 14))) | 70 |
| 8 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 68 |
| 9-10 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến di chuyển đến (1, 15); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 67 |
| 11 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến di chuyển đến (1, 16); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 65 |
| 12 | Di chuyển hướng 3 (`3`) | (1, 16) | (2, 17) | Dự kiến di chuyển đến (2, 17); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 63 |
| 13-15 | Di chuyển hướng 3 (`3`) | (2, 17) | (2, 18) | Dự kiến di chuyển đến (2, 18); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 61 |
| 16-18 | Di chuyển hướng 3 (`3`) | (2, 18) | (3, 19) | Dự kiến di chuyển đến (3, 19); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 59 |
| 19 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến di chuyển đến (3, 20); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 57 |
| 20 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến di chuyển đến (4, 21); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (4, 21) | (3, 22) | Dự kiến di chuyển đến (3, 22); hướng tới tọa độ (4, 23) (Spot #21 (thương hiệu=15, tọa độ=(4, 23))) | 53 |
| 22 | Di chuyển hướng 3 (`3`) | (3, 22) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 51 |
| 23-24 | Di chuyển hướng 2 (`2`) | (4, 23) | (5, 23) | Dự kiến di chuyển đến (5, 23); hướng tới tọa độ (9, 23) (Spot #22 (thương hiệu=16, tọa độ=(9, 23))) | 50 |
| 25 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến di chuyển đến (6, 23); hướng tới tọa độ (9, 23) (Spot #22 (thương hiệu=16, tọa độ=(9, 23))) | 48 |
| 26 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến di chuyển đến (7, 23); hướng tới tọa độ (9, 23) (Spot #22 (thương hiệu=16, tọa độ=(9, 23))) | 46 |
| 27 | Di chuyển hướng 2 (`2`) | (7, 23) | (8, 23) | Dự kiến di chuyển đến (8, 23); hướng tới tọa độ (9, 23) (Spot #22 (thương hiệu=16, tọa độ=(9, 23))) | 44 |
| 28-30 | Di chuyển hướng 2 (`2`) | (8, 23) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 42 |
| 31-32 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (8, 20) (Spot #8 (thương hiệu=5, tọa độ=(8, 20))) | 41 |
| 33 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến di chuyển đến (8, 21); hướng tới tọa độ (8, 20) (Spot #8 (thương hiệu=5, tọa độ=(8, 20))) | 39 |
| 34 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 37 |
| 35-36 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến di chuyển đến (9, 19); hướng tới tọa độ (11, 19) (Spot #18 (thương hiệu=13, tọa độ=(11, 19))) | 36 |
| 37 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến di chuyển đến (10, 19); hướng tới tọa độ (11, 19) (Spot #18 (thương hiệu=13, tọa độ=(11, 19))) | 34 |
| 38 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 32 |
| 39-40 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến di chuyển đến (10, 19); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 31 |
| 41 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến di chuyển đến (9, 18); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 29 |
| 42 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (8, 16) (Spot #16 (thương hiệu=11, tọa độ=(8, 16))) | 27 |
| 43-44 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 26 |
| 45-46 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 25 |
| 47 | Chờ 1 bước (`-1`) | (8, 15) | (8, 15) | Dự kiến đứng yên tại (8, 15); mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 25 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 19) (ô=468)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(4, 0))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(4, 0))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 5, 4, 5, 5, 5, 0, 5, 5, 0, 0, 1, 0, 1, 1, 1, 0, 3, 2, 2, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 79 |
| 2-3 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 78 |
| 4-6 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 76 |
| 7 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 74 |
| 8 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 72 |
| 9 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 70 |
| 10-11 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 69 |
| 12-13 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 68 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (8, 10) (Spot #4 (thương hiệu=3, tọa độ=(8, 10))) | 67 |
| 16 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 65 |
| 17-18 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 64 |
| 19 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 62 |
| 20 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 60 |
| 21 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 58 |
| 22 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 56 |
| 23 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 54 |
| 24 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 52 |
| 25 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (1, 9) (Spot #13 (thương hiệu=9, tọa độ=(1, 9))) | 50 |
| 26 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 48 |
| 27-28 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến di chuyển đến (0, 8); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 47 |
| 29 | Di chuyển hướng 0 (`0`) | (0, 8) | (0, 7) | Dự kiến di chuyển đến (0, 7); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 45 |
| 30 | Di chuyển hướng 1 (`1`) | (0, 7) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 43 |
| 31 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 41 |
| 32-33 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 40 |
| 34-35 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 39 |
| 36-37 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 38 |
| 38 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 1)) | 36 |
| 39-40 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 35 |
| 41 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 33 |
| 42 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 31 |
| 43 | Di chuyển hướng 1 (`1`) | (3, 2) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (4, 0) (Spot #0 (thương hiệu=0, tọa độ=(4, 0))) | 29 |
| 44-46 | Di chuyển hướng 1 (`1`) | (4, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 27 |
| 47 | Chờ 1 bước (`-1`) | (4, 0) | (4, 0) | Dự kiến đứng yên tại (4, 0); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 27 |

