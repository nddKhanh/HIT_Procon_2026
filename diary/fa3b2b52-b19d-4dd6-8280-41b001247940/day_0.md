# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 63 | #0 | #3 | (12, 11) | 40 | 120 |
| 63 | #4 | #6 | (11, 31) | 59 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 6) (ô=213)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Mảng hành động đã gửi server: `[4, 5, 0, 5, 5, 0, 0, 5, 5, 5, 0, 0, 1, 1, 5, 5, 5, 5, 4, 5, 0, 5, 5, 5, 5, 4, 5, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 6) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 119 |
| 2-3 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 118 |
| 4 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 116 |
| 5 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 114 |
| 6 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 112 |
| 7-8 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 111 |
| 9-10 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 110 |
| 11-12 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 109 |
| 13 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 107 |
| 14-15 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 106 |
| 16 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 104 |
| 17 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 102 |
| 18 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 100 |
| 19 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 98 |
| 20-21 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến di chuyển đến (12, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 97 |
| 22 | Di chuyển hướng 5 (`5`) | (12, 0) | (11, 0) | Dự kiến di chuyển đến (11, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 95 |
| 23 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến di chuyển đến (10, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 93 |
| 24 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến di chuyển đến (9, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 91 |
| 25 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến di chuyển đến (9, 1); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 89 |
| 26 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 87 |
| 27 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến di chuyển đến (7, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 85 |
| 28 | Di chuyển hướng 5 (`5`) | (7, 0) | (6, 0) | Dự kiến di chuyển đến (6, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 83 |
| 29 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến di chuyển đến (5, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 81 |
| 30 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến di chuyển đến (4, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 79 |
| 31 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến di chuyển đến (3, 0); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 77 |
| 32 | Di chuyển hướng 4 (`4`) | (3, 0) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 75 |
| 33 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 73 |
| 34 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 71 |
| 35-36 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 70 |
| 37-38 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 69 |
| 39 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 67 |
| 40 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 65 |
| 41 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 63 |
| 42 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 61 |
| 43 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 59 |
| 44 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 57 |
| 45 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 55 |
| 46 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 53 |
| 47 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 51 |
| 48 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 49 |
| 49-50 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 48 |
| 51-52 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến di chuyển đến (7, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 47 |
| 53 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 45 |
| 54-56 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 43 |
| 57-58 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 42 |
| 59-60 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 41 |
| 61-62 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 120 |
| 63 | Chờ 1 bước (`-1`) | (12, 11) | (12, 11) | Dự kiến đứng yên tại (12, 11); mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 120 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (29, 7) (ô=253)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=15, tọa độ=(31, 21))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=15, tọa độ=(31, 21))
- Mảng hành động đã gửi server: `[1, 2, 2, 5, 5, 5, 0, 0, 0, 1, 1, 1, 2, 2, 2, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 3, 4, 3, 3, 3, 2, 2, 3, 3, 3, 2, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (29, 7) | (29, 6) | Dự kiến di chuyển đến (29, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 119 |
| 2 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 117 |
| 3 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 115 |
| 4-5 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 114 |
| 6 | Di chuyển hướng 5 (`5`) | (30, 6) | (29, 6) | Dự kiến di chuyển đến (29, 6); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 112 |
| 7 | Di chuyển hướng 5 (`5`) | (29, 6) | (28, 6) | Dự kiến di chuyển đến (28, 6); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 110 |
| 8 | Di chuyển hướng 0 (`0`) | (28, 6) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 108 |
| 9-10 | Di chuyển hướng 0 (`0`) | (28, 5) | (27, 4) | Dự kiến di chuyển đến (27, 4); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 107 |
| 11-12 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 106 |
| 13-14 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 105 |
| 15-17 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 103 |
| 18-20 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 101 |
| 21 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 99 |
| 22 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 97 |
| 23 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 95 |
| 24-25 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 94 |
| 26 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 92 |
| 27 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 90 |
| 28 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 88 |
| 29-31 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 86 |
| 32-34 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 84 |
| 35-36 | Di chuyển hướng 4 (`4`) | (27, 3) | (26, 4) | Dự kiến di chuyển đến (26, 4); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 83 |
| 37-38 | Di chuyển hướng 4 (`4`) | (26, 4) | (26, 5) | Dự kiến di chuyển đến (26, 5); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 82 |
| 39 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến di chuyển đến (25, 6); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 80 |
| 40 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến di chuyển đến (25, 7); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 78 |
| 41 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến di chuyển đến (24, 8); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 76 |
| 42 | Di chuyển hướng 3 (`3`) | (24, 8) | (25, 9) | Dự kiến di chuyển đến (25, 9); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 74 |
| 43 | Di chuyển hướng 3 (`3`) | (25, 9) | (25, 10) | Dự kiến di chuyển đến (25, 10); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 72 |
| 44 | Di chuyển hướng 4 (`4`) | (25, 10) | (25, 11) | Dự kiến di chuyển đến (25, 11); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 70 |
| 45-47 | Di chuyển hướng 3 (`3`) | (25, 11) | (25, 12) | Dự kiến di chuyển đến (25, 12); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 68 |
| 48-49 | Di chuyển hướng 4 (`4`) | (25, 12) | (25, 13) | Dự kiến di chuyển đến (25, 13); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 67 |
| 50-51 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến di chuyển đến (25, 14); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 66 |
| 52 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến di chuyển đến (26, 15); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 64 |
| 53 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 62 |
| 54-55 | Di chuyển hướng 2 (`2`) | (26, 16) | (27, 16) | Dự kiến di chuyển đến (27, 16); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 61 |
| 56-57 | Di chuyển hướng 2 (`2`) | (27, 16) | (28, 16) | Dự kiến di chuyển đến (28, 16); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 60 |
| 58 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến di chuyển đến (29, 17); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 58 |
| 59 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến di chuyển đến (29, 18); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 56 |
| 60 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến di chuyển đến (30, 19); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 54 |
| 61 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến di chuyển đến (31, 19); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 52 |
| 62 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến di chuyển đến (31, 20); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 50 |
| 63 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 48 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=295)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=16, tọa độ=(14, 28))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=16, tọa độ=(14, 28))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 0, 5, 5, 4, 4, 4, 4, 3, 4, 3, 3, 4, 3, 3, 4, 4, 4, 3, 3, 4, 3, 4, 1, 2, 2, 2, 3, 3, 5, 5, 2, 1, 1, 0, 1, 1, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 119 |
| 2 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 117 |
| 3-4 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 116 |
| 5-6 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 115 |
| 7 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 113 |
| 8 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 111 |
| 9-11 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 109 |
| 12 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 107 |
| 13 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 105 |
| 14 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến di chuyển đến (0, 14); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 103 |
| 15 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến di chuyển đến (0, 15); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 101 |
| 16 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến di chuyển đến (0, 16); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 99 |
| 17 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến di chuyển đến (0, 17); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 97 |
| 18-19 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến di chuyển đến (0, 18); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 96 |
| 20-21 | Di chuyển hướng 3 (`3`) | (0, 18) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 95 |
| 22 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến di chuyển đến (0, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 93 |
| 23 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến di chuyển đến (1, 21); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 91 |
| 24 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến di chuyển đến (1, 22); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 89 |
| 25 | Di chuyển hướng 4 (`4`) | (1, 22) | (1, 23) | Dự kiến di chuyển đến (1, 23); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 87 |
| 26 | Di chuyển hướng 4 (`4`) | (1, 23) | (0, 24) | Dự kiến di chuyển đến (0, 24); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 85 |
| 27 | Di chuyển hướng 4 (`4`) | (0, 24) | (0, 25) | Dự kiến di chuyển đến (0, 25); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 83 |
| 28 | Di chuyển hướng 3 (`3`) | (0, 25) | (0, 26) | Dự kiến di chuyển đến (0, 26); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 81 |
| 29 | Di chuyển hướng 3 (`3`) | (0, 26) | (1, 27) | Dự kiến di chuyển đến (1, 27); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 79 |
| 30 | Di chuyển hướng 4 (`4`) | (1, 27) | (0, 28) | Dự kiến di chuyển đến (0, 28); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 77 |
| 31 | Di chuyển hướng 3 (`3`) | (0, 28) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 75 |
| 32 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 73 |
| 33-34 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 72 |
| 35 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến di chuyển đến (2, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 70 |
| 36-38 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến di chuyển đến (3, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 68 |
| 39-41 | Di chuyển hướng 2 (`2`) | (3, 29) | (4, 29) | Dự kiến di chuyển đến (4, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 66 |
| 42-44 | Di chuyển hướng 3 (`3`) | (4, 29) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 64 |
| 45 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 62 |
| 46-47 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến di chuyển đến (4, 31); hướng tới tọa độ (3, 31) (Spot #18 (thương hiệu=11, tọa độ=(3, 31))) | 61 |
| 48 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 59 |
| 49-50 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến di chuyển đến (4, 31); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 58 |
| 51 | Di chuyển hướng 1 (`1`) | (4, 31) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 56 |
| 52 | Di chuyển hướng 1 (`1`) | (4, 30) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 54 |
| 53 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 52 |
| 54 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến di chuyển đến (5, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 50 |
| 55-57 | Di chuyển hướng 1 (`1`) | (5, 27) | (5, 26) | Dự kiến di chuyển đến (5, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 48 |
| 58-60 | Di chuyển hướng 2 (`2`) | (5, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 46 |
| 61-62 | Di chuyển hướng 2 (`2`) | (6, 26) | (7, 26) | Dự kiến di chuyển đến (7, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 45 |
| 63 | Di chuyển hướng 2 (`2`) | (7, 26) | (8, 26) | Dự kiến di chuyển đến (8, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 43 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (30, 10) (ô=350)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 0, 5, 0, 0, 5, 4, 5, 4, 4, 5, 5, 4, 5, 5, 5, 0, 5, 5, 5, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (30, 10) | (30, 11) | Dự kiến di chuyển đến (30, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 2-4 | Di chuyển hướng 5 (`5`) | (30, 11) | (29, 11) | Dự kiến di chuyển đến (29, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 5-7 | Di chuyển hướng 5 (`5`) | (29, 11) | (28, 11) | Dự kiến di chuyển đến (28, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 8-9 | Di chuyển hướng 5 (`5`) | (28, 11) | (27, 11) | Dự kiến di chuyển đến (27, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 10 | Di chuyển hướng 0 (`0`) | (27, 11) | (26, 10) | Dự kiến di chuyển đến (26, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 11 | Di chuyển hướng 5 (`5`) | (26, 10) | (25, 10) | Dự kiến di chuyển đến (25, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 12 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến di chuyển đến (25, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 13 | Di chuyển hướng 0 (`0`) | (25, 9) | (24, 8) | Dự kiến di chuyển đến (24, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 14 | Di chuyển hướng 5 (`5`) | (24, 8) | (23, 8) | Dự kiến di chuyển đến (23, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 15 | Di chuyển hướng 4 (`4`) | (23, 8) | (23, 9) | Dự kiến di chuyển đến (23, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 16 | Di chuyển hướng 5 (`5`) | (23, 9) | (22, 9) | Dự kiến di chuyển đến (22, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 17-18 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến di chuyển đến (21, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 19-21 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến di chuyển đến (21, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 22-23 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến di chuyển đến (20, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 24 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến di chuyển đến (19, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 25 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 26-27 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 28-30 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 31-33 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 34 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 35 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 36 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 120 |
| 37 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (12, 11) | 120 |
| 38-63 | Chờ 26 bước (`-26`) | (12, 11) | (12, 11) | Dự kiến đứng yên tại (12, 11); điểm hẹn của xe tuần tra #0 tại (12, 11) | 120 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 17) (ô=562)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Địa điểm đích kế hoạch: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 1, 0, 3, 4, 5, 5, 5, 5, 5, 5, 3, 4, 4, 4, 4, 3, 3, 3, 5, 5, 0, 5, 5, 0, 5, 5, 5, 3, 3, 2, 3, 3, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến di chuyển đến (18, 18); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 119 |
| 2 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến di chuyển đến (19, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 117 |
| 3 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 115 |
| 4 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 113 |
| 5 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 111 |
| 6 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 109 |
| 7-8 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 108 |
| 9 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 106 |
| 10 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 104 |
| 11 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 102 |
| 12-14 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 100 |
| 15-17 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 98 |
| 18-19 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 97 |
| 20-21 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 96 |
| 22-23 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến di chuyển đến (15, 21); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 95 |
| 24-25 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến di chuyển đến (14, 22); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 94 |
| 26-27 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến di chuyển đến (14, 23); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 93 |
| 28-29 | Di chuyển hướng 4 (`4`) | (14, 23) | (13, 24) | Dự kiến di chuyển đến (13, 24); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 92 |
| 30-32 | Di chuyển hướng 4 (`4`) | (13, 24) | (13, 25) | Dự kiến di chuyển đến (13, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 90 |
| 33-34 | Di chuyển hướng 3 (`3`) | (13, 25) | (13, 26) | Dự kiến di chuyển đến (13, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 89 |
| 35-36 | Di chuyển hướng 3 (`3`) | (13, 26) | (14, 27) | Dự kiến di chuyển đến (14, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 88 |
| 37-39 | Di chuyển hướng 3 (`3`) | (14, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 86 |
| 40-41 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 85 |
| 42 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 83 |
| 43 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 81 |
| 44 | Di chuyển hướng 5 (`5`) | (12, 27) | (11, 27) | Dự kiến di chuyển đến (11, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 79 |
| 45-46 | Di chuyển hướng 5 (`5`) | (11, 27) | (10, 27) | Dự kiến di chuyển đến (10, 27); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 78 |
| 47-48 | Di chuyển hướng 0 (`0`) | (10, 27) | (9, 26) | Dự kiến di chuyển đến (9, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 77 |
| 49-50 | Di chuyển hướng 5 (`5`) | (9, 26) | (8, 26) | Dự kiến di chuyển đến (8, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 76 |
| 51-53 | Di chuyển hướng 5 (`5`) | (8, 26) | (7, 26) | Dự kiến di chuyển đến (7, 26); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 74 |
| 54 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 72 |
| 55-56 | Di chuyển hướng 3 (`3`) | (6, 26) | (7, 27) | Dự kiến di chuyển đến (7, 27); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 71 |
| 57 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến di chuyển đến (7, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 69 |
| 58 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến di chuyển đến (8, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 67 |
| 59 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến di chuyển đến (9, 29); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 65 |
| 60 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến di chuyển đến (9, 30); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 63 |
| 61 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến di chuyển đến (10, 31); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 61 |
| 62 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 120 |
| 63 | Chờ 1 bước (`-1`) | (11, 31) | (11, 31) | Dự kiến đứng yên tại (11, 31); mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 120 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (26, 22) (ô=730)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=14, tọa độ=(14, 20))
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 4, 3, 3, 4, 3, 3, 3, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 0, 5, 5, 5, 4, 4, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (26, 22) | (27, 21) | Dự kiến di chuyển đến (27, 21); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 119 |
| 2-4 | Di chuyển hướng 0 (`0`) | (27, 21) | (26, 20) | Dự kiến di chuyển đến (26, 20); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 117 |
| 5-6 | Di chuyển hướng 0 (`0`) | (26, 20) | (26, 19) | Dự kiến di chuyển đến (26, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 116 |
| 7 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 114 |
| 8-9 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến di chuyển đến (26, 19); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 113 |
| 10 | Di chuyển hướng 3 (`3`) | (26, 19) | (26, 20) | Dự kiến di chuyển đến (26, 20); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 111 |
| 11-12 | Di chuyển hướng 3 (`3`) | (26, 20) | (27, 21) | Dự kiến di chuyển đến (27, 21); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 110 |
| 13-15 | Di chuyển hướng 4 (`4`) | (27, 21) | (26, 22) | Dự kiến di chuyển đến (26, 22); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 108 |
| 16-17 | Di chuyển hướng 3 (`3`) | (26, 22) | (27, 23) | Dự kiến di chuyển đến (27, 23); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 107 |
| 18 | Di chuyển hướng 3 (`3`) | (27, 23) | (27, 24) | Dự kiến di chuyển đến (27, 24); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 105 |
| 19 | Di chuyển hướng 3 (`3`) | (27, 24) | (28, 25) | Dự kiến di chuyển đến (28, 25); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 103 |
| 20 | Di chuyển hướng 2 (`2`) | (28, 25) | (29, 25) | Dự kiến di chuyển đến (29, 25); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 101 |
| 21 | Di chuyển hướng 2 (`2`) | (29, 25) | (30, 25) | Dự kiến di chuyển đến (30, 25); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 99 |
| 22 | Di chuyển hướng 3 (`3`) | (30, 25) | (30, 26) | Dự kiến di chuyển đến (30, 26); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 97 |
| 23 | Di chuyển hướng 3 (`3`) | (30, 26) | (31, 27) | Dự kiến di chuyển đến (31, 27); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 95 |
| 24 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến di chuyển đến (30, 28); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 93 |
| 25 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 91 |
| 26-27 | Di chuyển hướng 4 (`4`) | (30, 29) | (29, 30) | Dự kiến di chuyển đến (29, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 90 |
| 28-30 | Di chuyển hướng 5 (`5`) | (29, 30) | (28, 30) | Dự kiến di chuyển đến (28, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 88 |
| 31-32 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 87 |
| 33-34 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 86 |
| 35 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 84 |
| 36 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 82 |
| 37-38 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến di chuyển đến (24, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 81 |
| 39-40 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 80 |
| 41-42 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 79 |
| 43 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 77 |
| 44-45 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 76 |
| 46 | Di chuyển hướng 0 (`0`) | (22, 30) | (22, 29) | Dự kiến di chuyển đến (22, 29); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 74 |
| 47 | Di chuyển hướng 0 (`0`) | (22, 29) | (21, 28) | Dự kiến di chuyển đến (21, 28); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 72 |
| 48 | Di chuyển hướng 0 (`0`) | (21, 28) | (21, 27) | Dự kiến di chuyển đến (21, 27); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 70 |
| 49 | Di chuyển hướng 0 (`0`) | (21, 27) | (20, 26) | Dự kiến di chuyển đến (20, 26); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 68 |
| 50 | Di chuyển hướng 0 (`0`) | (20, 26) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 66 |
| 51 | Di chuyển hướng 1 (`1`) | (20, 25) | (20, 24) | Dự kiến di chuyển đến (20, 24); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 64 |
| 52 | Di chuyển hướng 1 (`1`) | (20, 24) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 62 |
| 53 | Di chuyển hướng 1 (`1`) | (21, 23) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 60 |
| 54 | Di chuyển hướng 1 (`1`) | (21, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 58 |
| 55-56 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến di chuyển đến (21, 20); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 57 |
| 57-59 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 55 |
| 60 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 53 |
| 61-62 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 52 |
| 63 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 50 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (29, 24) (ô=797)
- Nhiên liệu đầu ngày: 120
- Vai trò: Hỗ trợ xe tuần tra #4
- Điểm hẹn của xe tuần tra: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Mảng hành động đã gửi server: `[4, 5, 0, 0, 5, 5, 0, 5, 5, 5, 4, 4, 4, 5, 5, 5, 4, 5, 4, 4, 5, 5, 0, 0, 0, 5, 5, 5, 4, 4, 3, 2, 3, 3, 3, 2, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (29, 24) | (29, 25) | Dự kiến di chuyển đến (29, 25); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 2 | Di chuyển hướng 5 (`5`) | (29, 25) | (28, 25) | Dự kiến di chuyển đến (28, 25); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 3 | Di chuyển hướng 0 (`0`) | (28, 25) | (27, 24) | Dự kiến di chuyển đến (27, 24); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (27, 24) | (27, 23) | Dự kiến di chuyển đến (27, 23); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 5 | Di chuyển hướng 5 (`5`) | (27, 23) | (26, 23) | Dự kiến di chuyển đến (26, 23); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 6 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến di chuyển đến (25, 23); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 7 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến di chuyển đến (24, 22); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 8 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến di chuyển đến (23, 22); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 9-10 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến di chuyển đến (22, 22); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 11-12 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 13 | Di chuyển hướng 4 (`4`) | (21, 22) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 14 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến di chuyển đến (20, 24); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 15 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 16 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến di chuyển đến (19, 25); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 17 | Di chuyển hướng 5 (`5`) | (19, 25) | (18, 25) | Dự kiến di chuyển đến (18, 25); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 18-20 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến di chuyển đến (17, 25); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 21-22 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến di chuyển đến (16, 26); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 23-24 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến di chuyển đến (15, 26); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 25-27 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến di chuyển đến (15, 27); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 28-30 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến di chuyển đến (14, 28); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 31-32 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 33 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 34 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 35 | Di chuyển hướng 0 (`0`) | (12, 27) | (11, 26) | Dự kiến di chuyển đến (11, 26); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 36 | Di chuyển hướng 0 (`0`) | (11, 26) | (11, 25) | Dự kiến di chuyển đến (11, 25); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 37 | Di chuyển hướng 5 (`5`) | (11, 25) | (10, 25) | Dự kiến di chuyển đến (10, 25); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 38 | Di chuyển hướng 5 (`5`) | (10, 25) | (9, 25) | Dự kiến di chuyển đến (9, 25); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 39 | Di chuyển hướng 5 (`5`) | (9, 25) | (8, 25) | Dự kiến di chuyển đến (8, 25); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 40-41 | Di chuyển hướng 4 (`4`) | (8, 25) | (7, 26) | Dự kiến di chuyển đến (7, 26); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 42 | Di chuyển hướng 4 (`4`) | (7, 26) | (7, 27) | Dự kiến di chuyển đến (7, 27); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 43 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến di chuyển đến (7, 28); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 44 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến di chuyển đến (8, 28); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 45 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến di chuyển đến (9, 29); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 46 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến di chuyển đến (9, 30); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 47 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến di chuyển đến (10, 31); hướng tới điểm hẹn của xe tuần tra #4 tại (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 120 |
| 48 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đến điểm hẹn của xe tuần tra #4 tại (11, 31) | 120 |
| 49-63 | Chờ 15 bước (`-15`) | (11, 31) | (11, 31) | Dự kiến đứng yên tại (11, 31); điểm hẹn của xe tuần tra #4 tại (11, 31) | 120 |

