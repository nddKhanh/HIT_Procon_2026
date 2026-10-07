# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 100
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #3 | #6 | (12, 11) | 2 | 120 |
| 47 | #0 | #5 | (7, 6) | 0 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 20) (ô=654)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Địa điểm đích kế hoạch: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 0, 0, 5, 0, 0, 0, 0, 0, 1, 1, 1, 3, 2, 3, 2, 3, 3, 2, 2, -1, 5, 5, 0, 0, 5, 5, 5, 4, 4, 3, 3, 3, 3, 4, 4, 4, 4, 4, 3, 4, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 5, 5, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 58 |
| 2 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 56 |
| 3 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 54 |
| 4 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 52 |
| 5 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 50 |
| 6 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 48 |
| 7 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 46 |
| 8-11 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 44 |
| 12-13 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 43 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 42 |
| 16 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 40 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 38 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 37 |
| 20-21 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 36 |
| 22 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 34 |
| 23 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 32 |
| 24 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 30 |
| 25 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 28 |
| 26 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 26 |
| 27 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 24 |
| 28 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 22 |
| 29 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 20 |
| 30 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 18 |
| 31 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 16 |
| 32-33 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 15 |
| 34-35 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 14 |
| 36-38 | Di chuyển hướng 2 (`2`) | (2, 3) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 12 |
| 39 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 10 |
| 40 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 8 |
| 41 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 6 |
| 42 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 4 |
| 43 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 2 |
| 44-46 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=6, tọa độ=(7, 6)) | 120 |
| 47 | Chờ 1 bước (`-1`) | (7, 6) | (7, 6) | Dự kiến đứng yên tại (7, 6); hướng tới tọa độ (7, 6) | 120 |
| 48-49 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 119 |
| 50-52 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 117 |
| 53 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 115 |
| 54 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 113 |
| 55 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 111 |
| 56 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 109 |
| 57-58 | Di chuyển hướng 5 (`5`) | (2, 4) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 108 |
| 59-60 | Di chuyển hướng 4 (`4`) | (1, 4) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 107 |
| 61-62 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 106 |
| 63 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 104 |
| 64 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 102 |
| 65 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 100 |
| 66 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 98 |
| 67 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 96 |
| 68 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 94 |
| 69 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 92 |
| 70 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến di chuyển đến (0, 14); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 90 |
| 71 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến di chuyển đến (0, 15); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 88 |
| 72 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến di chuyển đến (0, 16); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 86 |
| 73 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến di chuyển đến (0, 17); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 84 |
| 74-75 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 83 |
| 76-77 | Di chuyển hướng 3 (`3`) | (0, 18) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 82 |
| 78 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến di chuyển đến (0, 20); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 80 |
| 79 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến di chuyển đến (1, 21); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 78 |
| 80 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến di chuyển đến (1, 22); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 76 |
| 81 | Di chuyển hướng 3 (`3`) | (1, 22) | (2, 23) | Dự kiến di chuyển đến (2, 23); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 74 |
| 82-84 | Di chuyển hướng 3 (`3`) | (2, 23) | (2, 24) | Dự kiến di chuyển đến (2, 24); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 72 |
| 85-86 | Di chuyển hướng 3 (`3`) | (2, 24) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 71 |
| 87 | Di chuyển hướng 3 (`3`) | (3, 25) | (3, 26) | Dự kiến di chuyển đến (3, 26); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 69 |
| 88-89 | Di chuyển hướng 3 (`3`) | (3, 26) | (4, 27) | Dự kiến di chuyển đến (4, 27); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 68 |
| 90 | Di chuyển hướng 3 (`3`) | (4, 27) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 66 |
| 91 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 64 |
| 92 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 62 |
| 93 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 60 |
| 94-95 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến di chuyển đến (4, 31); hướng tới tọa độ (3, 31) (Spot #18 (thương hiệu=11, tọa độ=(3, 31))) | 59 |
| 96 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 57 |
| 97-98 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến di chuyển đến (4, 31); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 56 |
| 99 | Di chuyển hướng 1 (`1`) | (4, 31) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 54 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (27, 30) (ô=987)
- Nhiên liệu đầu ngày: 89
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=15, tọa độ=(31, 21))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=15, tọa độ=(31, 21))
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 5, 5, 0, 0, 0, 0, 5, 5, 5, 4, 5, 4, 4, 1, 1, 2, 1, 2, 3, 3, 4, 4, 5, 2, 3, 3, 2, 2, 2, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, 1, 1, 0, 0, 1, 1, 1, 0, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 88 |
| 2 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 86 |
| 3 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 84 |
| 4-5 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến di chuyển đến (24, 29); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 83 |
| 6-7 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 82 |
| 8-9 | Di chuyển hướng 5 (`5`) | (23, 29) | (22, 29) | Dự kiến di chuyển đến (22, 29); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 81 |
| 10 | Di chuyển hướng 0 (`0`) | (22, 29) | (21, 28) | Dự kiến di chuyển đến (21, 28); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 79 |
| 11 | Di chuyển hướng 0 (`0`) | (21, 28) | (21, 27) | Dự kiến di chuyển đến (21, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 77 |
| 12 | Di chuyển hướng 0 (`0`) | (21, 27) | (20, 26) | Dự kiến di chuyển đến (20, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 75 |
| 13 | Di chuyển hướng 0 (`0`) | (20, 26) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 73 |
| 14 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến di chuyển đến (19, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 71 |
| 15 | Di chuyển hướng 5 (`5`) | (19, 25) | (18, 25) | Dự kiến di chuyển đến (18, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 69 |
| 16-18 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến di chuyển đến (17, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 67 |
| 19-20 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến di chuyển đến (16, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 66 |
| 21-22 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến di chuyển đến (15, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 65 |
| 23-25 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến di chuyển đến (15, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 63 |
| 26-28 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 61 |
| 29-30 | Di chuyển hướng 1 (`1`) | (14, 28) | (15, 27) | Dự kiến di chuyển đến (15, 27); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 60 |
| 31-33 | Di chuyển hướng 1 (`1`) | (15, 27) | (15, 26) | Dự kiến di chuyển đến (15, 26); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 58 |
| 34-36 | Di chuyển hướng 2 (`2`) | (15, 26) | (16, 26) | Dự kiến di chuyển đến (16, 26); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 56 |
| 37-38 | Di chuyển hướng 1 (`1`) | (16, 26) | (17, 25) | Dự kiến di chuyển đến (17, 25); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 55 |
| 39-40 | Di chuyển hướng 2 (`2`) | (17, 25) | (18, 25) | Dự kiến di chuyển đến (18, 25); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 54 |
| 41-43 | Di chuyển hướng 3 (`3`) | (18, 25) | (18, 26) | Dự kiến di chuyển đến (18, 26); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 52 |
| 44 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến di chuyển đến (19, 27); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 50 |
| 45 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến di chuyển đến (18, 28); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 48 |
| 46 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 46 |
| 47 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 44 |
| 48-49 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 43 |
| 50 | Di chuyển hướng 3 (`3`) | (18, 29) | (18, 30) | Dự kiến di chuyển đến (18, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 41 |
| 51-53 | Di chuyển hướng 3 (`3`) | (18, 30) | (19, 31) | Dự kiến di chuyển đến (19, 31); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 39 |
| 54-56 | Di chuyển hướng 2 (`2`) | (19, 31) | (20, 31) | Dự kiến di chuyển đến (20, 31); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 37 |
| 57-59 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến di chuyển đến (21, 31); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 35 |
| 60-62 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 33 |
| 63-64 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 32 |
| 65 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 30 |
| 66-67 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến di chuyển đến (24, 29); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 29 |
| 68-69 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 28 |
| 70-71 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 27 |
| 72 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 25 |
| 73 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến di chuyển đến (27, 30); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 23 |
| 74-75 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến di chuyển đến (28, 30); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 22 |
| 76-77 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến di chuyển đến (29, 30); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 21 |
| 78-80 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 19 |
| 81-82 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến di chuyển đến (30, 28); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 18 |
| 83 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến di chuyển đến (31, 27); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 16 |
| 84 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến di chuyển đến (30, 26); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 14 |
| 85 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến di chuyển đến (30, 25); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 12 |
| 86 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến di chuyển đến (30, 24); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 10 |
| 87-88 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến di chuyển đến (31, 23); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 9 |
| 89-91 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến di chuyển đến (31, 22); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 7 |
| 92-93 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 6 |
| 94-99 | Chờ 6 bước (`-6`) | (31, 21) | (31, 21) | Dự kiến đứng yên tại (31, 21); mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 6 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (27, 30) (ô=987)
- Nhiên liệu đầu ngày: 70
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(13, 0))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(13, 0))
- Mảng hành động đã gửi server: `[5, 0, 5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 2, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 2, 5, 0, 5, 5, 0, 0, 5, 5, 5, 0, 0, 1, 1, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 69 |
| 2 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 67 |
| 3 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 65 |
| 4-5 | Di chuyển hướng 0 (`0`) | (25, 29) | (24, 28) | Dự kiến di chuyển đến (24, 28); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 64 |
| 6-7 | Di chuyển hướng 0 (`0`) | (24, 28) | (24, 27) | Dự kiến di chuyển đến (24, 27); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 63 |
| 8-10 | Di chuyển hướng 0 (`0`) | (24, 27) | (23, 26) | Dự kiến di chuyển đến (23, 26); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 61 |
| 11-12 | Di chuyển hướng 0 (`0`) | (23, 26) | (23, 25) | Dự kiến di chuyển đến (23, 25); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 60 |
| 13-15 | Di chuyển hướng 0 (`0`) | (23, 25) | (22, 24) | Dự kiến di chuyển đến (22, 24); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 58 |
| 16-17 | Di chuyển hướng 0 (`0`) | (22, 24) | (22, 23) | Dự kiến di chuyển đến (22, 23); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 57 |
| 18-19 | Di chuyển hướng 0 (`0`) | (22, 23) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 56 |
| 20 | Di chuyển hướng 1 (`1`) | (21, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 54 |
| 21-22 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến di chuyển đến (21, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 53 |
| 23-25 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 51 |
| 26 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 49 |
| 27-28 | Di chuyển hướng 2 (`2`) | (20, 18) | (21, 18) | Dự kiến di chuyển đến (21, 18); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 48 |
| 29-31 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến di chuyển đến (22, 17); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 46 |
| 32-34 | Di chuyển hướng 0 (`0`) | (22, 17) | (21, 16) | Dự kiến di chuyển đến (21, 16); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 44 |
| 35-37 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến di chuyển đến (21, 15); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 42 |
| 38-39 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến di chuyển đến (20, 14); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 41 |
| 40 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến di chuyển đến (21, 13); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 39 |
| 41 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 37 |
| 42 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến di chuyển đến (20, 11); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 35 |
| 43 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 33 |
| 44-45 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 32 |
| 46 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 30 |
| 47-48 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (21, 7) (Spot #14 (thương hiệu=8, tọa độ=(21, 7))) | 29 |
| 49 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 27 |
| 50-51 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 26 |
| 52 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 24 |
| 53 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 22 |
| 54 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 20 |
| 55-56 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 19 |
| 57-58 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 18 |
| 59-60 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 17 |
| 61 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 15 |
| 62-63 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 14 |
| 64 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 12 |
| 65 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 10 |
| 66 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 8 |
| 67 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 6 |
| 68-99 | Chờ 32 bước (`-32`) | (13, 0) | (13, 0) | Dự kiến đứng yên tại (13, 0); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 6 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 11) (ô=364)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=16, tọa độ=(14, 28))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=16, tọa độ=(14, 28))
- Mảng hành động đã gửi server: `[-29, 4, 4, 4, 4, 3, 4, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 3, 2, 3, 3, 3, 2, 5, 0, 0, 0, 5, 0, 0, 5, 4, 4, 3, 4, 3, 0, 0, 5, 5, 5, 4, 1, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-28 | Chờ 29 bước (`-29`) | (12, 11) | (12, 11) | Dự kiến đứng yên tại (12, 11); hướng tới tọa độ (12, 11) | 120 |
| 29-30 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 119 |
| 31-32 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 118 |
| 33 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 116 |
| 34 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 114 |
| 35 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 112 |
| 36-38 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 110 |
| 39 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 108 |
| 40 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 106 |
| 41 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 104 |
| 42-44 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 102 |
| 45-46 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến di chuyển đến (9, 22); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 101 |
| 47-48 | Di chuyển hướng 4 (`4`) | (9, 22) | (9, 23) | Dự kiến di chuyển đến (9, 23); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 100 |
| 49-50 | Di chuyển hướng 4 (`4`) | (9, 23) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 99 |
| 51 | Di chuyển hướng 4 (`4`) | (8, 24) | (8, 25) | Dự kiến di chuyển đến (8, 25); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 97 |
| 52-53 | Di chuyển hướng 4 (`4`) | (8, 25) | (7, 26) | Dự kiến di chuyển đến (7, 26); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 96 |
| 54 | Di chuyển hướng 4 (`4`) | (7, 26) | (7, 27) | Dự kiến di chuyển đến (7, 27); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 94 |
| 55 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến di chuyển đến (7, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 92 |
| 56 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến di chuyển đến (8, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 90 |
| 57 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến di chuyển đến (9, 29); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 88 |
| 58 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến di chuyển đến (9, 30); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 86 |
| 59 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến di chuyển đến (10, 31); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 84 |
| 60 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 82 |
| 61-62 | Di chuyển hướng 5 (`5`) | (11, 31) | (10, 31) | Dự kiến di chuyển đến (10, 31); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 81 |
| 63 | Di chuyển hướng 0 (`0`) | (10, 31) | (9, 30) | Dự kiến di chuyển đến (9, 30); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 79 |
| 64 | Di chuyển hướng 0 (`0`) | (9, 30) | (9, 29) | Dự kiến di chuyển đến (9, 29); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 77 |
| 65 | Di chuyển hướng 0 (`0`) | (9, 29) | (8, 28) | Dự kiến di chuyển đến (8, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 75 |
| 66 | Di chuyển hướng 5 (`5`) | (8, 28) | (7, 28) | Dự kiến di chuyển đến (7, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 73 |
| 67 | Di chuyển hướng 0 (`0`) | (7, 28) | (7, 27) | Dự kiến di chuyển đến (7, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 71 |
| 68 | Di chuyển hướng 0 (`0`) | (7, 27) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 69 |
| 69-70 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến di chuyển đến (5, 26); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 68 |
| 71-73 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến di chuyển đến (5, 27); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 66 |
| 74-76 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 64 |
| 77 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 62 |
| 78 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 60 |
| 79 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 58 |
| 80-81 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 57 |
| 82 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến di chuyển đến (4, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 55 |
| 83-85 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến di chuyển đến (3, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 53 |
| 86-88 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến di chuyển đến (2, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 51 |
| 89-91 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 49 |
| 92 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 47 |
| 93-94 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 46 |
| 95 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến di chuyển đến (2, 29); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 44 |
| 96-98 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến di chuyển đến (3, 29); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 42 |
| 99 | Chờ 1 bước (`-1`) | (3, 29) | (3, 29) | Dự kiến đứng yên tại (3, 29); mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 42 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (26, 5) (ô=186)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 2, 2, 2, -86]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (26, 5) | (26, 4) | Dự kiến di chuyển đến (26, 4); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 22 |
| 1-2 | Di chuyển hướng 1 (`1`) | (26, 4) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 21 |
| 3-4 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 20 |
| 5-7 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 18 |
| 8-10 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 16 |
| 11 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 14 |
| 12 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 12 |
| 13 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 10 |
| 14-99 | Chờ 86 bước (`-86`) | (31, 0) | (31, 0) | Dự kiến đứng yên tại (31, 0); mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 10 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (5, 31) (ô=997)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #11 (thương hiệu=6, tọa độ=(7, 6))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 0, 0, 1, 1, 0, 5, 5, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2, 3, 3, 2, 2, -56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 2 | Di chuyển hướng 1 (`1`) | (4, 30) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 3 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (4, 28) | (4, 27) | Dự kiến di chuyển đến (4, 27); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 5 | Di chuyển hướng 0 (`0`) | (4, 27) | (3, 26) | Dự kiến di chuyển đến (3, 26); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 6-7 | Di chuyển hướng 0 (`0`) | (3, 26) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 8 | Di chuyển hướng 1 (`1`) | (3, 25) | (3, 24) | Dự kiến di chuyển đến (3, 24); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 9 | Di chuyển hướng 1 (`1`) | (3, 24) | (4, 23) | Dự kiến di chuyển đến (4, 23); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 10 | Di chuyển hướng 0 (`0`) | (4, 23) | (3, 22) | Dự kiến di chuyển đến (3, 22); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 11 | Di chuyển hướng 5 (`5`) | (3, 22) | (2, 22) | Dự kiến di chuyển đến (2, 22); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 12 | Di chuyển hướng 5 (`5`) | (2, 22) | (1, 22) | Dự kiến di chuyển đến (1, 22); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 13 | Di chuyển hướng 0 (`0`) | (1, 22) | (1, 21) | Dự kiến di chuyển đến (1, 21); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 14 | Di chuyển hướng 0 (`0`) | (1, 21) | (0, 20) | Dự kiến di chuyển đến (0, 20); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 15 | Di chuyển hướng 1 (`1`) | (0, 20) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 16 | Di chuyển hướng 1 (`1`) | (1, 19) | (1, 18) | Dự kiến di chuyển đến (1, 18); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 17 | Di chuyển hướng 0 (`0`) | (1, 18) | (1, 17) | Dự kiến di chuyển đến (1, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 18-19 | Di chuyển hướng 0 (`0`) | (1, 17) | (0, 16) | Dự kiến di chuyển đến (0, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 20 | Di chuyển hướng 0 (`0`) | (0, 16) | (0, 15) | Dự kiến di chuyển đến (0, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 21 | Di chuyển hướng 1 (`1`) | (0, 15) | (0, 14) | Dự kiến di chuyển đến (0, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 22 | Di chuyển hướng 1 (`1`) | (0, 14) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 23 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 24 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 25 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 26 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 27 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 28 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 29 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 30 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 31-32 | Di chuyển hướng 1 (`1`) | (1, 5) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 33-34 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 35-36 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến di chuyển đến (3, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 37 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến di chuyển đến (4, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 38 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 39 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 40 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (7, 6) (Spot #11 (thương hiệu=6, tọa độ=(7, 6))) | 120 |
| 41-43 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (7, 6) | 120 |
| 44-99 | Chờ 56 bước (`-56`) | (7, 6) | (7, 6) | Dự kiến đứng yên tại (7, 6); điểm hẹn của xe tuần tra #0 tại (7, 6) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (26, 16) (ô=538)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 0, 5, 4, 5, 0, 5, 5, 5, 5, 5, 0, 5, 5, 5, -72]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (26, 16) | (26, 15) | Dự kiến di chuyển đến (26, 15); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 2 | Di chuyển hướng 0 (`0`) | (26, 15) | (25, 14) | Dự kiến di chuyển đến (25, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 3 | Di chuyển hướng 5 (`5`) | (25, 14) | (24, 14) | Dự kiến di chuyển đến (24, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (24, 14) | (24, 13) | Dự kiến di chuyển đến (24, 13); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 5 | Di chuyển hướng 0 (`0`) | (24, 13) | (23, 12) | Dự kiến di chuyển đến (23, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 6 | Di chuyển hướng 5 (`5`) | (23, 12) | (22, 12) | Dự kiến di chuyển đến (22, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 7-8 | Di chuyển hướng 4 (`4`) | (22, 12) | (22, 13) | Dự kiến di chuyển đến (22, 13); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 9-11 | Di chuyển hướng 5 (`5`) | (22, 13) | (21, 13) | Dự kiến di chuyển đến (21, 13); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 12 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 13 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến di chuyển đến (19, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 14-15 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 16-17 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 18-20 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 21-23 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 24 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 25 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 26 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 27 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (12, 11) | 120 |
| 28-99 | Chờ 72 bước (`-72`) | (12, 11) | (12, 11) | Dự kiến đứng yên tại (12, 11); điểm hẹn của xe tuần tra #3 tại (12, 11) | 120 |

