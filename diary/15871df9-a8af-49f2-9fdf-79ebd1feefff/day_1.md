# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 76
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 48 | #4 | #5 | (31, 0) | 3 | 120 |
| 75 | #2 | #6 | (17, 29) | 11 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 11) (ô=364)
- Nhiên liệu đầu ngày: 113
- Mục tiêu kế hoạch từ Solver: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Địa điểm đích kế hoạch: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 5, 5, 4, 4, 4, 4, 4, 5, 4, 1, 2, 3, 3, 4, 4, 5, 5, 4, 4, 4, 5, 0, 5, 5, 4, 4, 4, 4, 3, 3, 4, 3, 4, 3, 3, 4, 4, 4, 3, 3, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 112 |
| 2 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 110 |
| 3-4 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 109 |
| 5-7 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 107 |
| 8 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 105 |
| 9 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 103 |
| 10 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 101 |
| 11 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 99 |
| 12 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 97 |
| 13 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 95 |
| 14 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 93 |
| 15 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 91 |
| 16-17 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến di chuyển đến (12, 0); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 90 |
| 18 | Di chuyển hướng 5 (`5`) | (12, 0) | (11, 0) | Dự kiến di chuyển đến (11, 0); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 88 |
| 19 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 86 |
| 20 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 84 |
| 21 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 82 |
| 22 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 80 |
| 23 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 78 |
| 24 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 76 |
| 25 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=6, tọa độ=(7, 6)) | 74 |
| 26-27 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 73 |
| 28 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 71 |
| 29 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 69 |
| 30 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 67 |
| 31-33 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 65 |
| 34-36 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 63 |
| 37-39 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 61 |
| 40-42 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 59 |
| 43-44 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 58 |
| 45 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 56 |
| 46-47 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 55 |
| 48-49 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 54 |
| 50 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 52 |
| 51 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 50 |
| 52-54 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 48 |
| 55 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 46 |
| 56 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 44 |
| 57 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến di chuyển đến (0, 14); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 42 |
| 58 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến di chuyển đến (0, 15); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 40 |
| 59 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến di chuyển đến (0, 16); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 38 |
| 60 | Di chuyển hướng 3 (`3`) | (0, 16) | (1, 17) | Dự kiến di chuyển đến (1, 17); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 36 |
| 61-62 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 35 |
| 63-64 | Di chuyển hướng 3 (`3`) | (0, 18) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 34 |
| 65 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến di chuyển đến (0, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 32 |
| 66 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến di chuyển đến (1, 21); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 30 |
| 67 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến di chuyển đến (1, 22); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 28 |
| 68 | Di chuyển hướng 4 (`4`) | (1, 22) | (1, 23) | Dự kiến di chuyển đến (1, 23); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 26 |
| 69 | Di chuyển hướng 4 (`4`) | (1, 23) | (0, 24) | Dự kiến di chuyển đến (0, 24); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 24 |
| 70 | Di chuyển hướng 4 (`4`) | (0, 24) | (0, 25) | Dự kiến di chuyển đến (0, 25); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 22 |
| 71 | Di chuyển hướng 3 (`3`) | (0, 25) | (0, 26) | Dự kiến di chuyển đến (0, 26); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 20 |
| 72 | Di chuyển hướng 3 (`3`) | (0, 26) | (1, 27) | Dự kiến di chuyển đến (1, 27); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 18 |
| 73 | Di chuyển hướng 4 (`4`) | (1, 27) | (0, 28) | Dự kiến di chuyển đến (0, 28); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 16 |
| 74 | Di chuyển hướng 3 (`3`) | (0, 28) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 14 |
| 75 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 12 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 11) (ô=373)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Địa điểm đích kế hoạch: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 5, 0, 0, 5, 4, 5, 0, 5, 5, 5, 5, 4, 5, 4, 4, 4, 4, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 3, 3, 4, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 5, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến di chuyển đến (20, 11); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 119 |
| 2 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 117 |
| 3-4 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 116 |
| 5 | Di chuyển hướng 0 (`0`) | (19, 9) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 114 |
| 6 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 112 |
| 7 | Di chuyển hướng 0 (`0`) | (18, 7) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 110 |
| 8-9 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 109 |
| 10-11 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 108 |
| 12-13 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 107 |
| 14 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 105 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 104 |
| 17 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 102 |
| 18 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 100 |
| 19 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 98 |
| 20-21 | Di chuyển hướng 0 (`0`) | (11, 2) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 97 |
| 22 | Di chuyển hướng 0 (`0`) | (11, 1) | (10, 0) | Dự kiến di chuyển đến (10, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 95 |
| 23 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến di chuyển đến (9, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 93 |
| 24 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến di chuyển đến (9, 1); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 91 |
| 25 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 89 |
| 26 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến di chuyển đến (7, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 87 |
| 27 | Di chuyển hướng 5 (`5`) | (7, 0) | (6, 0) | Dự kiến di chuyển đến (6, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 85 |
| 28 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến di chuyển đến (5, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 83 |
| 29 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến di chuyển đến (4, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 81 |
| 30 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến di chuyển đến (3, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 79 |
| 31 | Di chuyển hướng 4 (`4`) | (3, 0) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 77 |
| 32 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 75 |
| 33 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 73 |
| 34-35 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 72 |
| 36-37 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 71 |
| 38 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 69 |
| 39 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 67 |
| 40 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 65 |
| 41 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 63 |
| 42 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 61 |
| 43 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 59 |
| 44 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 57 |
| 45 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 55 |
| 46 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 53 |
| 47 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến di chuyển đến (0, 14); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 51 |
| 48 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến di chuyển đến (0, 15); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 49 |
| 49 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến di chuyển đến (0, 16); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 47 |
| 50 | Di chuyển hướng 3 (`3`) | (0, 16) | (1, 17) | Dự kiến di chuyển đến (1, 17); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 45 |
| 51-52 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 44 |
| 53-54 | Di chuyển hướng 3 (`3`) | (0, 18) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 43 |
| 55 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến di chuyển đến (0, 20); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 41 |
| 56 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến di chuyển đến (1, 21); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 39 |
| 57 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến di chuyển đến (1, 22); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 37 |
| 58 | Di chuyển hướng 3 (`3`) | (1, 22) | (2, 23) | Dự kiến di chuyển đến (2, 23); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 35 |
| 59-61 | Di chuyển hướng 3 (`3`) | (2, 23) | (2, 24) | Dự kiến di chuyển đến (2, 24); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 33 |
| 62-63 | Di chuyển hướng 3 (`3`) | (2, 24) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 32 |
| 64 | Di chuyển hướng 3 (`3`) | (3, 25) | (3, 26) | Dự kiến di chuyển đến (3, 26); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 30 |
| 65-66 | Di chuyển hướng 3 (`3`) | (3, 26) | (4, 27) | Dự kiến di chuyển đến (4, 27); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 29 |
| 67 | Di chuyển hướng 3 (`3`) | (4, 27) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 27 |
| 68 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 25 |
| 69 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 23 |
| 70 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 21 |
| 71-72 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến di chuyển đến (4, 31); hướng tới tọa độ (3, 31) (Spot #18 (thương hiệu=11, tọa độ=(3, 31))) | 20 |
| 73 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 18 |
| 74-75 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến di chuyển đến (4, 31); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 17 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 20) (ô=660)
- Nhiên liệu đầu ngày: 84
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=17, tọa độ=(17, 29))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=17, tọa độ=(17, 29))
- Mảng hành động đã gửi server: `[3, 2, 0, 0, 0, 3, 4, 4, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, 4, 5, 5, 5, 0, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến di chuyển đến (21, 21); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 82 |
| 1-3 | Di chuyển hướng 2 (`2`) | (21, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 80 |
| 4-5 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến di chuyển đến (21, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 79 |
| 6-8 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 77 |
| 9 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 75 |
| 10-11 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 74 |
| 12 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 72 |
| 13 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 70 |
| 14 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến di chuyển đến (20, 22); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 68 |
| 15 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 66 |
| 16 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến di chuyển đến (20, 24); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 64 |
| 17 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 62 |
| 18 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến di chuyển đến (20, 26); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 60 |
| 19 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến di chuyển đến (21, 27); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 58 |
| 20 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến di chuyển đến (21, 28); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 56 |
| 21 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến di chuyển đến (22, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 54 |
| 22 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 52 |
| 23 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 50 |
| 24-25 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 49 |
| 26 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 47 |
| 27-28 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến di chuyển đến (24, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 46 |
| 29-30 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 45 |
| 31-32 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 44 |
| 33 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 42 |
| 34 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 40 |
| 35-36 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến di chuyển đến (28, 30); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 39 |
| 37-38 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến di chuyển đến (29, 30); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 38 |
| 39-41 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 36 |
| 42-43 | Di chuyển hướng 4 (`4`) | (30, 29) | (29, 30) | Dự kiến di chuyển đến (29, 30); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 35 |
| 44-46 | Di chuyển hướng 5 (`5`) | (29, 30) | (28, 30) | Dự kiến di chuyển đến (28, 30); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 33 |
| 47-48 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến di chuyển đến (27, 30); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 32 |
| 49-50 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 31 |
| 51 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 29 |
| 52 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 27 |
| 53-54 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến di chuyển đến (24, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 26 |
| 55-56 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 25 |
| 57-58 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 24 |
| 59 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến di chuyển đến (22, 31); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 22 |
| 60-61 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến di chuyển đến (21, 31); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 21 |
| 62-64 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến di chuyển đến (20, 31); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 19 |
| 65-67 | Di chuyển hướng 5 (`5`) | (20, 31) | (19, 31) | Dự kiến di chuyển đến (19, 31); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 17 |
| 68-70 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến di chuyển đến (18, 30); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 15 |
| 71-73 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 13 |
| 74 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 120 |
| 75 | Chờ 1 bước (`-1`) | (17, 29) | (17, 29) | Dự kiến đứng yên tại (17, 29); mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 120 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 7) (ô=245)
- Nhiên liệu đầu ngày: 111
- Mục tiêu kế hoạch từ Solver: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Địa điểm đích kế hoạch: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 0, 0, 5, 4, 4, 3, 4, 3, 3, 4, 3, 3, 3, 3, 4, 4, 4, 4, 4, 3, 4, 4, 4, 4, 3, 3, 3, 5, 5, 0, 5, 5, 0, 5, 5, 5, 3, 3, 2, 3, 3, 3, 2, 5, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 110 |
| 2 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 108 |
| 3 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 106 |
| 4 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 104 |
| 5-6 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 103 |
| 7-8 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 102 |
| 9-10 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 101 |
| 11 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 99 |
| 12 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 97 |
| 13 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 95 |
| 14 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 93 |
| 15 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 91 |
| 16 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 89 |
| 17 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 87 |
| 18 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 85 |
| 19 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 83 |
| 20 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 81 |
| 21 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 79 |
| 22 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến di chuyển đến (16, 16); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 77 |
| 23 | Di chuyển hướng 4 (`4`) | (16, 16) | (16, 17) | Dự kiến di chuyển đến (16, 17); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 75 |
| 24-26 | Di chuyển hướng 4 (`4`) | (16, 17) | (15, 18) | Dự kiến di chuyển đến (15, 18); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 73 |
| 27-28 | Di chuyển hướng 4 (`4`) | (15, 18) | (15, 19) | Dự kiến di chuyển đến (15, 19); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 72 |
| 29-30 | Di chuyển hướng 4 (`4`) | (15, 19) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 71 |
| 31-32 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến di chuyển đến (15, 21); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 70 |
| 33-34 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 69 |
| 35-36 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến di chuyển đến (14, 23); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 68 |
| 37-38 | Di chuyển hướng 4 (`4`) | (14, 23) | (13, 24) | Dự kiến di chuyển đến (13, 24); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 67 |
| 39-41 | Di chuyển hướng 4 (`4`) | (13, 24) | (13, 25) | Dự kiến di chuyển đến (13, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 65 |
| 42-43 | Di chuyển hướng 3 (`3`) | (13, 25) | (13, 26) | Dự kiến di chuyển đến (13, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 64 |
| 44-45 | Di chuyển hướng 3 (`3`) | (13, 26) | (14, 27) | Dự kiến di chuyển đến (14, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 63 |
| 46-48 | Di chuyển hướng 3 (`3`) | (14, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 61 |
| 49-50 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 60 |
| 51 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 58 |
| 52 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 56 |
| 53 | Di chuyển hướng 5 (`5`) | (12, 27) | (11, 27) | Dự kiến di chuyển đến (11, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 54 |
| 54-55 | Di chuyển hướng 5 (`5`) | (11, 27) | (10, 27) | Dự kiến di chuyển đến (10, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 53 |
| 56-57 | Di chuyển hướng 0 (`0`) | (10, 27) | (9, 26) | Dự kiến di chuyển đến (9, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 52 |
| 58-59 | Di chuyển hướng 5 (`5`) | (9, 26) | (8, 26) | Dự kiến di chuyển đến (8, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 51 |
| 60-62 | Di chuyển hướng 5 (`5`) | (8, 26) | (7, 26) | Dự kiến di chuyển đến (7, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 49 |
| 63 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 47 |
| 64-65 | Di chuyển hướng 3 (`3`) | (6, 26) | (7, 27) | Dự kiến di chuyển đến (7, 27); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 46 |
| 66 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến di chuyển đến (7, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 44 |
| 67 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến di chuyển đến (8, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 42 |
| 68 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến di chuyển đến (9, 29); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 40 |
| 69 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến di chuyển đến (9, 30); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 38 |
| 70 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến di chuyển đến (10, 31); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 36 |
| 71 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 34 |
| 72-73 | Di chuyển hướng 5 (`5`) | (11, 31) | (10, 31) | Dự kiến di chuyển đến (10, 31); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 33 |
| 74 | Di chuyển hướng 0 (`0`) | (10, 31) | (9, 30) | Dự kiến di chuyển đến (9, 30); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 31 |
| 75 | Di chuyển hướng 0 (`0`) | (9, 30) | (9, 29) | Dự kiến di chuyển đến (9, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 29 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (30, 22) (ô=734)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=11, tọa độ=(26, 16))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=11, tọa độ=(26, 16))
- Mảng hành động đã gửi server: `[1, 1, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, -13, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 5, 0, 1, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (30, 22) | (31, 21) | Dự kiến di chuyển đến (31, 21); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 52 |
| 3-4 | Di chuyển hướng 1 (`1`) | (31, 21) | (31, 20) | Dự kiến di chuyển đến (31, 20); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 51 |
| 5 | Di chuyển hướng 0 (`0`) | (31, 20) | (31, 19) | Dự kiến di chuyển đến (31, 19); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 49 |
| 6 | Di chuyển hướng 5 (`5`) | (31, 19) | (30, 19) | Dự kiến di chuyển đến (30, 19); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 47 |
| 7 | Di chuyển hướng 0 (`0`) | (30, 19) | (29, 18) | Dự kiến di chuyển đến (29, 18); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 45 |
| 8 | Di chuyển hướng 0 (`0`) | (29, 18) | (29, 17) | Dự kiến di chuyển đến (29, 17); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 43 |
| 9 | Di chuyển hướng 0 (`0`) | (29, 17) | (28, 16) | Dự kiến di chuyển đến (28, 16); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 41 |
| 10 | Di chuyển hướng 0 (`0`) | (28, 16) | (28, 15) | Dự kiến di chuyển đến (28, 15); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 39 |
| 11 | Di chuyển hướng 0 (`0`) | (28, 15) | (27, 14) | Dự kiến di chuyển đến (27, 14); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 37 |
| 12 | Di chuyển hướng 1 (`1`) | (27, 14) | (28, 13) | Dự kiến di chuyển đến (28, 13); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 35 |
| 13 | Di chuyển hướng 0 (`0`) | (28, 13) | (27, 12) | Dự kiến di chuyển đến (27, 12); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 33 |
| 14 | Di chuyển hướng 0 (`0`) | (27, 12) | (27, 11) | Dự kiến di chuyển đến (27, 11); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 31 |
| 15 | Di chuyển hướng 0 (`0`) | (27, 11) | (26, 10) | Dự kiến di chuyển đến (26, 10); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 29 |
| 16 | Di chuyển hướng 5 (`5`) | (26, 10) | (25, 10) | Dự kiến di chuyển đến (25, 10); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 27 |
| 17 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến di chuyển đến (25, 9); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 25 |
| 18 | Di chuyển hướng 0 (`0`) | (25, 9) | (24, 8) | Dự kiến di chuyển đến (24, 8); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 23 |
| 19 | Di chuyển hướng 1 (`1`) | (24, 8) | (25, 7) | Dự kiến di chuyển đến (25, 7); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 21 |
| 20 | Di chuyển hướng 1 (`1`) | (25, 7) | (25, 6) | Dự kiến di chuyển đến (25, 6); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 19 |
| 21 | Di chuyển hướng 1 (`1`) | (25, 6) | (26, 5) | Dự kiến di chuyển đến (26, 5); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 17 |
| 22 | Di chuyển hướng 1 (`1`) | (26, 5) | (26, 4) | Dự kiến di chuyển đến (26, 4); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 15 |
| 23-24 | Di chuyển hướng 1 (`1`) | (26, 4) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 14 |
| 25-26 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 13 |
| 27-29 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 11 |
| 30-32 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 9 |
| 33 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 7 |
| 34 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 5 |
| 35 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 3 |
| 36-48 | Chờ 13 bước (`-13`) | (31, 0) | (31, 0) | Dự kiến đứng yên tại (31, 0); hướng tới tọa độ (31, 0) | 120 |
| 49-50 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 119 |
| 51 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 117 |
| 52 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 115 |
| 53 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 113 |
| 54-56 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 111 |
| 57-59 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 109 |
| 60-61 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến di chuyển đến (27, 4); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 108 |
| 62-63 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 107 |
| 64-65 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến di chuyển đến (28, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 106 |
| 66 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến di chuyển đến (29, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 104 |
| 67 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 102 |
| 68 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 100 |
| 69-70 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 99 |
| 71 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến di chuyển đến (30, 5); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 97 |
| 72 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 95 |
| 73 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 93 |
| 74-75 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 92 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 12) (ô=391)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Mảng hành động đã gửi server: `[3, 2, 3, 2, 1, 2, 1, 1, 2, 2, 1, 0, 0, 1, 0, 1, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 4 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 5 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 7 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 8 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 9 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 10 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 11 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 12 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 13 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 14 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 15 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 16 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 17 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 18 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 19 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 20 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến di chuyển đến (16, 3); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 21-23 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến di chuyển đến (16, 2); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 24-25 | Di chuyển hướng 2 (`2`) | (16, 2) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 26-27 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến di chuyển đến (18, 2); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 28 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến di chuyển đến (19, 1); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 29 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến di chuyển đến (20, 1); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 30-31 | Di chuyển hướng 2 (`2`) | (20, 1) | (21, 1) | Dự kiến di chuyển đến (21, 1); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 32-33 | Di chuyển hướng 2 (`2`) | (21, 1) | (22, 1) | Dự kiến di chuyển đến (22, 1); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 34-36 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến di chuyển đến (23, 1); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 37-38 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến di chuyển đến (24, 1); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 39-40 | Di chuyển hướng 2 (`2`) | (24, 1) | (25, 1) | Dự kiến di chuyển đến (25, 1); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 41 | Di chuyển hướng 1 (`1`) | (25, 1) | (25, 0) | Dự kiến di chuyển đến (25, 0); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 42 | Di chuyển hướng 2 (`2`) | (25, 0) | (26, 0) | Dự kiến di chuyển đến (26, 0); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 43 | Di chuyển hướng 2 (`2`) | (26, 0) | (27, 0) | Dự kiến di chuyển đến (27, 0); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 44 | Di chuyển hướng 2 (`2`) | (27, 0) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 45 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 46 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới điểm hẹn của xe tuần tra #4 tại (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 120 |
| 47 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (31, 0) | 120 |
| 48-75 | Chờ 28 bước (`-28`) | (31, 0) | (31, 0) | Dự kiến đứng yên tại (31, 0); điểm hẹn của xe tuần tra #4 tại (31, 0) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (21, 11) (ô=373)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #25 (thương hiệu=17, tọa độ=(17, 29))
- Mảng hành động đã gửi server: `[4, 3, 4, 3, 3, 3, 4, 4, 4, 4, 3, 3, 4, 4, 5, 4, 3, 4, 4, 5, -48]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 2 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến di chuyển đến (21, 13); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 3 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến di chuyển đến (20, 14); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 4 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến di chuyển đến (21, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 5-6 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến di chuyển đến (21, 16); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 7-9 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến di chuyển đến (22, 17); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 10-12 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến di chuyển đến (21, 18); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 13-15 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 16 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 17 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 18 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến di chuyển đến (20, 22); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 19 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 20 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến di chuyển đến (20, 24); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 21 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 22 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến di chuyển đến (19, 25); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 23 | Di chuyển hướng 4 (`4`) | (19, 25) | (18, 26) | Dự kiến di chuyển đến (18, 26); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 24 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến di chuyển đến (19, 27); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 25 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến di chuyển đến (18, 28); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 26 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới điểm hẹn của xe tuần tra #2 tại (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 120 |
| 27 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (17, 29) | 120 |
| 28-75 | Chờ 48 bước (`-48`) | (17, 29) | (17, 29) | Dự kiến đứng yên tại (17, 29); điểm hẹn của xe tuần tra #2 tại (17, 29) | 120 |

