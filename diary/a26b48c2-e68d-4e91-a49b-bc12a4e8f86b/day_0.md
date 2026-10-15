# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 6) (ô=213)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=17, tọa độ=(17, 29))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=17, tọa độ=(17, 29))
- Mảng hành động đã gửi server: `[4, 5, 0, 5, 5, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 4, 5, 3, 4, 4, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, 1, 1, 2, 2, 2, 3, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 6) | (21, 7) | Dự kiến di chuyển đến (21, 7); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 119 |
| 2-3 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 118 |
| 4 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến di chuyển đến (19, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 116 |
| 5 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến di chuyển đến (18, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 114 |
| 6 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 112 |
| 7-8 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 111 |
| 9-10 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 110 |
| 11-12 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 109 |
| 13-14 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 108 |
| 15-16 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến di chuyển đến (18, 7); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 107 |
| 17 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến di chuyển đến (18, 8); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 105 |
| 18 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 103 |
| 19 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 101 |
| 20-21 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến di chuyển đến (20, 11); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 100 |
| 22 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến di chuyển đến (20, 12); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 98 |
| 23 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến di chuyển đến (21, 13); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 96 |
| 24 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến di chuyển đến (20, 14); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 94 |
| 25 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến di chuyển đến (21, 15); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 92 |
| 26-27 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến di chuyển đến (21, 16); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 91 |
| 28-30 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến di chuyển đến (22, 17); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 89 |
| 31-33 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến di chuyển đến (21, 18); hướng tới tọa độ (20, 18) (Spot #21 (thương hiệu=13, tọa độ=(20, 18))) | 87 |
| 34-36 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 85 |
| 37-38 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 84 |
| 39 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 82 |
| 40 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến di chuyển đến (20, 21); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 80 |
| 41 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến di chuyển đến (20, 22); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 78 |
| 42 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 76 |
| 43 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến di chuyển đến (20, 24); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 74 |
| 44 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 72 |
| 45 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến di chuyển đến (20, 26); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 70 |
| 46 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến di chuyển đến (21, 27); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 68 |
| 47 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến di chuyển đến (21, 28); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 66 |
| 48 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến di chuyển đến (22, 29); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 64 |
| 49 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 62 |
| 50 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 60 |
| 51-52 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến di chuyển đến (22, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 59 |
| 53 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến di chuyển đến (23, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 57 |
| 54-55 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến di chuyển đến (24, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 56 |
| 56-57 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến di chuyển đến (25, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 55 |
| 58-59 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến di chuyển đến (26, 29); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 54 |
| 60 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (27, 30) (Spot #28 (thương hiệu=20, tọa độ=(27, 30))) | 52 |
| 61 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 50 |
| 62-63 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến di chuyển đến (26, 30); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 49 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (29, 7) (ô=253)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=1, tọa độ=(22, 21))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=1, tọa độ=(22, 21))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 3, 4, 3, 3, 3, 4, 3, 4, 4, 5, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (29, 7) | (28, 6) | Dự kiến di chuyển đến (28, 6); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 119 |
| 2 | Di chuyển hướng 0 (`0`) | (28, 6) | (28, 5) | Dự kiến di chuyển đến (28, 5); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 117 |
| 3-4 | Di chuyển hướng 0 (`0`) | (28, 5) | (27, 4) | Dự kiến di chuyển đến (27, 4); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 116 |
| 5-6 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 115 |
| 7-8 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 114 |
| 9-11 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 112 |
| 12-14 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 110 |
| 15 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 108 |
| 16 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (31, 0) (Spot #6 (thương hiệu=2, tọa độ=(31, 0))) | 106 |
| 17 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 104 |
| 18-19 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến di chuyển đến (30, 0); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 103 |
| 20 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến di chuyển đến (29, 0); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 101 |
| 21 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến di chuyển đến (28, 0); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 99 |
| 22 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến di chuyển đến (28, 1); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 97 |
| 23-25 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến di chuyển đến (27, 2); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 95 |
| 26-28 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến di chuyển đến (27, 3); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 93 |
| 29-30 | Di chuyển hướng 4 (`4`) | (27, 3) | (26, 4) | Dự kiến di chuyển đến (26, 4); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 92 |
| 31-32 | Di chuyển hướng 4 (`4`) | (26, 4) | (26, 5) | Dự kiến di chuyển đến (26, 5); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 91 |
| 33 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến di chuyển đến (25, 6); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 89 |
| 34 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến di chuyển đến (25, 7); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 87 |
| 35 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến di chuyển đến (24, 8); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 85 |
| 36 | Di chuyển hướng 3 (`3`) | (24, 8) | (25, 9) | Dự kiến di chuyển đến (25, 9); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 83 |
| 37 | Di chuyển hướng 3 (`3`) | (25, 9) | (25, 10) | Dự kiến di chuyển đến (25, 10); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 81 |
| 38 | Di chuyển hướng 4 (`4`) | (25, 10) | (25, 11) | Dự kiến di chuyển đến (25, 11); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 79 |
| 39-41 | Di chuyển hướng 3 (`3`) | (25, 11) | (25, 12) | Dự kiến di chuyển đến (25, 12); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 77 |
| 42-43 | Di chuyển hướng 4 (`4`) | (25, 12) | (25, 13) | Dự kiến di chuyển đến (25, 13); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 76 |
| 44-45 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến di chuyển đến (25, 14); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 75 |
| 46 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến di chuyển đến (26, 15); hướng tới tọa độ (26, 16) (Spot #17 (thương hiệu=11, tọa độ=(26, 16))) | 73 |
| 47 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 71 |
| 48-49 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến di chuyển đến (26, 17); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 70 |
| 50-52 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 68 |
| 53-54 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến di chuyển đến (26, 19); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 67 |
| 55 | Di chuyển hướng 4 (`4`) | (26, 19) | (25, 20) | Dự kiến di chuyển đến (25, 20); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 65 |
| 56 | Di chuyển hướng 5 (`5`) | (25, 20) | (24, 20) | Dự kiến di chuyển đến (24, 20); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 63 |
| 57-58 | Di chuyển hướng 5 (`5`) | (24, 20) | (23, 20) | Dự kiến di chuyển đến (23, 20); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 62 |
| 59 | Di chuyển hướng 5 (`5`) | (23, 20) | (22, 20) | Dự kiến di chuyển đến (22, 20); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 60 |
| 60-62 | Di chuyển hướng 4 (`4`) | (22, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 58 |
| 63 | Chờ 1 bước (`-1`) | (22, 21) | (22, 21) | Dự kiến đứng yên tại (22, 21); mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 58 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=295)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Địa điểm đích kế hoạch: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 0, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 5, 0, 5, 5, 4, 4, 4, 4, 3, 4, 3, 3, 4, 3, 3, 4, 4, 4, 3, 3, 4, 3, 4, 1, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 119 |
| 2 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 117 |
| 3 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 115 |
| 4 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 113 |
| 5 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 111 |
| 6 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 109 |
| 7 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 107 |
| 8 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 105 |
| 9 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 103 |
| 10 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 101 |
| 11 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 99 |
| 12 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (1, 2) (Spot #7 (thương hiệu=3, tọa độ=(1, 2))) | 97 |
| 13-14 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 96 |
| 15-16 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 95 |
| 17-18 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 94 |
| 19 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 92 |
| 20 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 90 |
| 21 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 88 |
| 22 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến di chuyển đến (1, 8); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 86 |
| 23 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 84 |
| 24 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 82 |
| 25 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 80 |
| 26 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 78 |
| 27 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (5, 12) (Spot #16 (thương hiệu=10, tọa độ=(5, 12))) | 76 |
| 28 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 74 |
| 29-30 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 73 |
| 31 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 71 |
| 32 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 69 |
| 33-35 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 67 |
| 36 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 65 |
| 37 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 63 |
| 38 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến di chuyển đến (0, 14); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 61 |
| 39 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến di chuyển đến (0, 15); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 59 |
| 40 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến di chuyển đến (0, 16); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 57 |
| 41 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến di chuyển đến (0, 17); hướng tới tọa độ (0, 18) (Spot #19 (thương hiệu=12, tọa độ=(0, 18))) | 55 |
| 42-43 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 54 |
| 44-45 | Di chuyển hướng 3 (`3`) | (0, 18) | (1, 19) | Dự kiến di chuyển đến (1, 19); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 53 |
| 46 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến di chuyển đến (0, 20); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 51 |
| 47 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến di chuyển đến (1, 21); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 49 |
| 48 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến di chuyển đến (1, 22); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 47 |
| 49 | Di chuyển hướng 4 (`4`) | (1, 22) | (1, 23) | Dự kiến di chuyển đến (1, 23); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 45 |
| 50 | Di chuyển hướng 4 (`4`) | (1, 23) | (0, 24) | Dự kiến di chuyển đến (0, 24); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 43 |
| 51 | Di chuyển hướng 4 (`4`) | (0, 24) | (0, 25) | Dự kiến di chuyển đến (0, 25); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 41 |
| 52 | Di chuyển hướng 3 (`3`) | (0, 25) | (0, 26) | Dự kiến di chuyển đến (0, 26); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 39 |
| 53 | Di chuyển hướng 3 (`3`) | (0, 26) | (1, 27) | Dự kiến di chuyển đến (1, 27); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 37 |
| 54 | Di chuyển hướng 4 (`4`) | (1, 27) | (0, 28) | Dự kiến di chuyển đến (0, 28); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 35 |
| 55 | Di chuyển hướng 3 (`3`) | (0, 28) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (0, 30) (Spot #27 (thương hiệu=19, tọa độ=(0, 30))) | 33 |
| 56 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 31 |
| 57-58 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến di chuyển đến (1, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 30 |
| 59 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến di chuyển đến (2, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 28 |
| 60-62 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến di chuyển đến (3, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 26 |
| 63 | Chờ 1 bước (`-1`) | (3, 29) | (3, 29) | Dự kiến đứng yên tại (3, 29); mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 26 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (30, 10) (ô=350)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #26 (thương hiệu=18, tọa độ=(30, 29))
- Địa điểm đích kế hoạch: Spot #26 (thương hiệu=18, tọa độ=(30, 29))
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 0, 1, 2, 5, 4, 3, 2, 4, 4, 3, 3, 4, 4, 4, 4, 4, 4, 3, 3, 3, 2, 3, 4, 3, 4, 4, 4, 3, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (30, 10) | (31, 9) | Dự kiến di chuyển đến (31, 9); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 119 |
| 2-4 | Di chuyển hướng 0 (`0`) | (31, 9) | (30, 8) | Dự kiến di chuyển đến (30, 8); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 117 |
| 5-7 | Di chuyển hướng 0 (`0`) | (30, 8) | (30, 7) | Dự kiến di chuyển đến (30, 7); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 115 |
| 8-10 | Di chuyển hướng 1 (`1`) | (30, 7) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 113 |
| 11 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến di chuyển đến (30, 5); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 111 |
| 12 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (31, 4) (Spot #9 (thương hiệu=5, tọa độ=(31, 4))) | 109 |
| 13 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 107 |
| 14-15 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến di chuyển đến (30, 4); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 106 |
| 16 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến di chuyển đến (30, 5); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 104 |
| 17 | Di chuyển hướng 3 (`3`) | (30, 5) | (30, 6) | Dự kiến di chuyển đến (30, 6); hướng tới tọa độ (31, 6) (Spot #13 (thương hiệu=7, tọa độ=(31, 6))) | 102 |
| 18 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 100 |
| 19-20 | Di chuyển hướng 4 (`4`) | (31, 6) | (31, 7) | Dự kiến di chuyển đến (31, 7); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 99 |
| 21-23 | Di chuyển hướng 4 (`4`) | (31, 7) | (30, 8) | Dự kiến di chuyển đến (30, 8); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 97 |
| 24-26 | Di chuyển hướng 3 (`3`) | (30, 8) | (31, 9) | Dự kiến di chuyển đến (31, 9); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 95 |
| 27-29 | Di chuyển hướng 3 (`3`) | (31, 9) | (31, 10) | Dự kiến di chuyển đến (31, 10); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 93 |
| 30-31 | Di chuyển hướng 4 (`4`) | (31, 10) | (31, 11) | Dự kiến di chuyển đến (31, 11); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 92 |
| 32-33 | Di chuyển hướng 4 (`4`) | (31, 11) | (30, 12) | Dự kiến di chuyển đến (30, 12); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 91 |
| 34-36 | Di chuyển hướng 4 (`4`) | (30, 12) | (30, 13) | Dự kiến di chuyển đến (30, 13); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 89 |
| 37-39 | Di chuyển hướng 4 (`4`) | (30, 13) | (29, 14) | Dự kiến di chuyển đến (29, 14); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 87 |
| 40-41 | Di chuyển hướng 4 (`4`) | (29, 14) | (29, 15) | Dự kiến di chuyển đến (29, 15); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 86 |
| 42-44 | Di chuyển hướng 4 (`4`) | (29, 15) | (28, 16) | Dự kiến di chuyển đến (28, 16); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 84 |
| 45 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến di chuyển đến (29, 17); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 82 |
| 46 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến di chuyển đến (29, 18); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 80 |
| 47 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến di chuyển đến (30, 19); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 78 |
| 48 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến di chuyển đến (31, 19); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 76 |
| 49 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến di chuyển đến (31, 20); hướng tới tọa độ (31, 21) (Spot #23 (thương hiệu=15, tọa độ=(31, 21))) | 74 |
| 50 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 72 |
| 51-52 | Di chuyển hướng 3 (`3`) | (31, 21) | (31, 22) | Dự kiến di chuyển đến (31, 22); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 71 |
| 53-54 | Di chuyển hướng 4 (`4`) | (31, 22) | (31, 23) | Dự kiến di chuyển đến (31, 23); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 70 |
| 55-57 | Di chuyển hướng 4 (`4`) | (31, 23) | (30, 24) | Dự kiến di chuyển đến (30, 24); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 68 |
| 58-59 | Di chuyển hướng 4 (`4`) | (30, 24) | (30, 25) | Dự kiến di chuyển đến (30, 25); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 67 |
| 60 | Di chuyển hướng 3 (`3`) | (30, 25) | (30, 26) | Dự kiến di chuyển đến (30, 26); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 65 |
| 61 | Di chuyển hướng 3 (`3`) | (30, 26) | (31, 27) | Dự kiến di chuyển đến (31, 27); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 63 |
| 62 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến di chuyển đến (30, 28); hướng tới tọa độ (30, 29) (Spot #26 (thương hiệu=18, tọa độ=(30, 29))) | 61 |
| 63 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 59 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 17) (ô=562)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #31 (thương hiệu=23, tọa độ=(22, 31))
- Địa điểm đích kế hoạch: Spot #31 (thương hiệu=23, tọa độ=(22, 31))
- Mảng hành động đã gửi server: `[5, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 4, 4, 3, 3, 2, 2, 2, 5, 4, 4, 3, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 5, 2, 3, 3, 3, 2, 2, 3, 2, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến di chuyển đến (17, 17); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 119 |
| 2 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến di chuyển đến (16, 16); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 117 |
| 3 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 115 |
| 4 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 113 |
| 5 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến di chuyển đến (16, 13); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 111 |
| 6 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 109 |
| 7 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 107 |
| 8 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến di chuyển đến (15, 10); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 105 |
| 9 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến di chuyển đến (15, 9); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 103 |
| 10 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 101 |
| 11 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 99 |
| 12 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 97 |
| 13 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 95 |
| 14 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 93 |
| 15 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 91 |
| 16 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 89 |
| 17 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (13, 0) (Spot #0 (thương hiệu=0, tọa độ=(13, 0))) | 87 |
| 18 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 85 |
| 19-20 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 84 |
| 21 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 82 |
| 22 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 80 |
| 23 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 78 |
| 24 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 76 |
| 25-26 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (16, 4) (Spot #8 (thương hiệu=4, tọa độ=(16, 4))) | 75 |
| 27 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 73 |
| 28-29 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến di chuyển đến (15, 4); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 72 |
| 30 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 70 |
| 31 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 68 |
| 32 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 66 |
| 33 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 64 |
| 34 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 62 |
| 35-37 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 60 |
| 38-39 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (12, 11) (Spot #15 (thương hiệu=9, tọa độ=(12, 11))) | 59 |
| 40 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 57 |
| 41-42 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 56 |
| 43-44 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 55 |
| 45 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 53 |
| 46 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 51 |
| 47 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (8, 16) (Spot #4 (thương hiệu=1, tọa độ=(8, 16))) | 49 |
| 48 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 47 |
| 49-50 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 46 |
| 51 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 44 |
| 52 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến di chuyển đến (10, 18); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 42 |
| 53 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 40 |
| 54 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 38 |
| 55 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 36 |
| 56 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 34 |
| 57 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 32 |
| 58-59 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến di chuyển đến (15, 21); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 31 |
| 60-61 | Di chuyển hướng 3 (`3`) | (15, 21) | (15, 22) | Dự kiến di chuyển đến (15, 22); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 30 |
| 62-63 | Di chuyển hướng 2 (`2`) | (15, 22) | (16, 22) | Dự kiến di chuyển đến (16, 22); hướng tới tọa độ (22, 31) (Spot #31 (thương hiệu=23, tọa độ=(22, 31))) | 29 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (26, 22) (ô=730)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 4, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 4, 4, 4, 4, 4, 5, 4, 4, 5, 4, 4, 3, 4, 3, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (26, 22) | (27, 21) | Dự kiến di chuyển đến (27, 21); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 119 |
| 2-4 | Di chuyển hướng 0 (`0`) | (27, 21) | (26, 20) | Dự kiến di chuyển đến (26, 20); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 117 |
| 5-6 | Di chuyển hướng 0 (`0`) | (26, 20) | (26, 19) | Dự kiến di chuyển đến (26, 19); hướng tới tọa độ (26, 18) (Spot #12 (thương hiệu=6, tọa độ=(26, 18))) | 116 |
| 7 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 114 |
| 8-9 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến di chuyển đến (26, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 113 |
| 10 | Di chuyển hướng 5 (`5`) | (26, 19) | (25, 19) | Dự kiến di chuyển đến (25, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 111 |
| 11-13 | Di chuyển hướng 5 (`5`) | (25, 19) | (24, 19) | Dự kiến di chuyển đến (24, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 109 |
| 14 | Di chuyển hướng 5 (`5`) | (24, 19) | (23, 19) | Dự kiến di chuyển đến (23, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 107 |
| 15-16 | Di chuyển hướng 5 (`5`) | (23, 19) | (22, 19) | Dự kiến di chuyển đến (22, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 106 |
| 17-18 | Di chuyển hướng 5 (`5`) | (22, 19) | (21, 19) | Dự kiến di chuyển đến (21, 19); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 105 |
| 19 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến di chuyển đến (20, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 103 |
| 20 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến di chuyển đến (19, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 101 |
| 21 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến di chuyển đến (18, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 99 |
| 22-24 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến di chuyển đến (17, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 97 |
| 25-27 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến di chuyển đến (16, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 95 |
| 28-29 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến di chuyển đến (15, 20); hướng tới tọa độ (14, 20) (Spot #22 (thương hiệu=14, tọa độ=(14, 20))) | 94 |
| 30-31 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 93 |
| 32-33 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến di chuyển đến (13, 20); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 92 |
| 34 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến di chuyển đến (13, 19); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 90 |
| 35 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến di chuyển đến (12, 19); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 88 |
| 36 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến di chuyển đến (11, 19); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 86 |
| 37 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến di chuyển đến (10, 20); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 84 |
| 38-40 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến di chuyển đến (10, 21); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 82 |
| 41-42 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến di chuyển đến (9, 22); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 81 |
| 43-44 | Di chuyển hướng 4 (`4`) | (9, 22) | (9, 23) | Dự kiến di chuyển đến (9, 23); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 80 |
| 45-46 | Di chuyển hướng 4 (`4`) | (9, 23) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 79 |
| 47 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 77 |
| 48 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến di chuyển đến (7, 25); hướng tới tọa độ (6, 26) (Spot #10 (thương hiệu=5, tọa độ=(6, 26))) | 75 |
| 49 | Di chuyển hướng 4 (`4`) | (7, 25) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 73 |
| 50-51 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến di chuyển đến (5, 26); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 72 |
| 52-54 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến di chuyển đến (5, 27); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 70 |
| 55-57 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến di chuyển đến (4, 28); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 68 |
| 58 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến di chuyển đến (5, 29); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 66 |
| 59 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến di chuyển đến (4, 30); hướng tới tọa độ (5, 31) (Spot #29 (thương hiệu=21, tọa độ=(5, 31))) | 64 |
| 60 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 62 |
| 61-62 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến di chuyển đến (4, 31); hướng tới tọa độ (3, 31) (Spot #18 (thương hiệu=11, tọa độ=(3, 31))) | 61 |
| 63 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 59 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (29, 24) (ô=797)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Địa điểm đích kế hoạch: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Mảng hành động đã gửi server: `[4, 5, 0, 0, 5, 5, 0, 5, 5, 0, 4, 4, 4, 4, 5, 4, 3, 4, 4, 5, 2, 1, 1, 0, 0, 5, 4, 5, 4, 4, 5, 5, 0, 5, 5, 0, 5, 5, 4, 3, 2, 3, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (29, 24) | (29, 25) | Dự kiến di chuyển đến (29, 25); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 119 |
| 2 | Di chuyển hướng 5 (`5`) | (29, 25) | (28, 25) | Dự kiến di chuyển đến (28, 25); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 117 |
| 3 | Di chuyển hướng 0 (`0`) | (28, 25) | (27, 24) | Dự kiến di chuyển đến (27, 24); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 115 |
| 4 | Di chuyển hướng 0 (`0`) | (27, 24) | (27, 23) | Dự kiến di chuyển đến (27, 23); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 113 |
| 5 | Di chuyển hướng 5 (`5`) | (27, 23) | (26, 23) | Dự kiến di chuyển đến (26, 23); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 111 |
| 6 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến di chuyển đến (25, 23); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 109 |
| 7 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến di chuyển đến (24, 22); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 107 |
| 8 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến di chuyển đến (23, 22); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 105 |
| 9-10 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến di chuyển đến (22, 22); hướng tới tọa độ (22, 21) (Spot #5 (thương hiệu=1, tọa độ=(22, 21))) | 104 |
| 11-12 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 103 |
| 13-14 | Di chuyển hướng 4 (`4`) | (22, 21) | (21, 22) | Dự kiến di chuyển đến (21, 22); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 102 |
| 15 | Di chuyển hướng 4 (`4`) | (21, 22) | (21, 23) | Dự kiến di chuyển đến (21, 23); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 100 |
| 16 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến di chuyển đến (20, 24); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 98 |
| 17 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến di chuyển đến (20, 25); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 96 |
| 18 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến di chuyển đến (19, 25); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 94 |
| 19 | Di chuyển hướng 4 (`4`) | (19, 25) | (18, 26) | Dự kiến di chuyển đến (18, 26); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 92 |
| 20 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến di chuyển đến (19, 27); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 90 |
| 21 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến di chuyển đến (18, 28); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 88 |
| 22 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (17, 29) (Spot #25 (thương hiệu=17, tọa độ=(17, 29))) | 86 |
| 23 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 84 |
| 24-25 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến di chuyển đến (18, 29); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 83 |
| 26 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến di chuyển đến (18, 28); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 81 |
| 27 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến di chuyển đến (19, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 79 |
| 28 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến di chuyển đến (18, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 77 |
| 29 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến di chuyển đến (18, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 75 |
| 30-32 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến di chuyển đến (17, 25); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 73 |
| 33-34 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến di chuyển đến (16, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 72 |
| 35-36 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến di chuyển đến (15, 26); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 71 |
| 37-39 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến di chuyển đến (15, 27); hướng tới tọa độ (14, 28) (Spot #24 (thương hiệu=16, tọa độ=(14, 28))) | 69 |
| 40-42 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 67 |
| 43-44 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến di chuyển đến (13, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 66 |
| 45 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến di chuyển đến (12, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 64 |
| 46 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến di chuyển đến (12, 27); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 62 |
| 47 | Di chuyển hướng 5 (`5`) | (12, 27) | (11, 27) | Dự kiến di chuyển đến (11, 27); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 60 |
| 48-49 | Di chuyển hướng 5 (`5`) | (11, 27) | (10, 27) | Dự kiến di chuyển đến (10, 27); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 59 |
| 50-51 | Di chuyển hướng 0 (`0`) | (10, 27) | (9, 26) | Dự kiến di chuyển đến (9, 26); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 58 |
| 52-53 | Di chuyển hướng 5 (`5`) | (9, 26) | (8, 26) | Dự kiến di chuyển đến (8, 26); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 57 |
| 54-56 | Di chuyển hướng 5 (`5`) | (8, 26) | (7, 26) | Dự kiến di chuyển đến (7, 26); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 55 |
| 57 | Di chuyển hướng 4 (`4`) | (7, 26) | (7, 27) | Dự kiến di chuyển đến (7, 27); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 53 |
| 58 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến di chuyển đến (7, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 51 |
| 59 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến di chuyển đến (8, 28); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 49 |
| 60 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến di chuyển đến (9, 29); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 47 |
| 61 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến di chuyển đến (9, 30); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 45 |
| 62 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến di chuyển đến (10, 31); hướng tới tọa độ (11, 31) (Spot #30 (thương hiệu=22, tọa độ=(11, 31))) | 43 |
| 63 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 41 |

