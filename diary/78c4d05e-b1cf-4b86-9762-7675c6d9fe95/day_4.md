# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 140
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (0, 11) (ô=187)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(8, 4))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(8, 4))
- Mảng hành động đã gửi server: `[1, 0, 1, 3, 2, 2, 1, 3, 3, 2, 2, 2, 2, 3, 3, 4, 4, 4, 4, 3, 5, 5, 5, 5, -1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 5, -67]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 34 |
| 2-3 | Di chuyển hướng 0 (`0`) | (0, 10) | (0, 9) | Dự kiến di chuyển đến (0, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 32 |
| 4-5 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 31 |
| 6-7 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 30 |
| 8-10 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 28 |
| 11-12 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 26 |
| 13-14 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 25 |
| 15-16 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 24 |
| 17-18 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 23 |
| 19 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 21 |
| 20 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 19 |
| 21 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 17 |
| 22 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 15 |
| 23 | Di chuyển hướng 3 (`3`) | (8, 10) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 13 |
| 24-25 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 12 |
| 26-27 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 11 |
| 28-29 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 10 |
| 30 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 8 |
| 31-33 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 6 |
| 34-35 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 17)) | 5 |
| 36-37 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 4 |
| 38-39 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 3 |
| 40 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 1 |
| 41-42 | Di chuyển hướng 5 (`5`) | (5, 17) | (4, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 17)) | 0 |
| 43 | Chờ 1 bước (`-1`) | (4, 17) | (4, 17) | Dự kiến đứng yên tại (4, 17); hướng tới tọa độ (4, 17) | 35 |
| 44-45 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 34 |
| 46-47 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=2, tọa độ=(5, 16)) | 33 |
| 48-49 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 32 |
| 50 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 30 |
| 51 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 28 |
| 52 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 26 |
| 53 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 24 |
| 54 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 22 |
| 55 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 20 |
| 56 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=3, tọa độ=(12, 13)) | 18 |
| 57-58 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 17 |
| 59-61 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 15 |
| 62-64 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 13 |
| 65 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 11 |
| 66 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 9 |
| 67 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 7 |
| 68 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 5 |
| 69 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 3 |
| 70 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 4)) | 1 |
| 71-72 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 4)) | 0 |
| 73-139 | Chờ 67 bước (`-67`) | (8, 4) | (8, 4) | Dự kiến đứng yên tại (8, 4); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 4)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(9, 12))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(9, 12))
- Mảng hành động đã gửi server: `[4, 4, 4, -11, 3, 2, 3, 3, 3, 3, 4, 5, 5, 0, 4, 3, 4, 3, 2, 2, 2, 2, 2, 1, 2, 2, 2, 3, -74]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 1)) | 3 |
| 2-3 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến di chuyển đến (0, 2); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 2 |
| 4-5 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 3)) | 0 |
| 6-16 | Chờ 11 bước (`-11`) | (0, 3) | (0, 3) | Dự kiến đứng yên tại (0, 3); hướng tới tọa độ (0, 3) | 35 |
| 17-18 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 34 |
| 19-21 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 32 |
| 22-23 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 31 |
| 24 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 29 |
| 25 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 27 |
| 26-27 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 26 |
| 28-29 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 25 |
| 30-31 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 24 |
| 32-33 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 22 |
| 34-36 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 20 |
| 37-38 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến di chuyển đến (0, 9); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 19 |
| 39-40 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 18 |
| 41-42 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 11)) | 16 |
| 43-44 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến di chuyển đến (0, 12); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 15 |
| 45-46 | Di chuyển hướng 2 (`2`) | (0, 12) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 14 |
| 47-48 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 13 |
| 49 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 11 |
| 50-51 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 10 |
| 52-54 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 8 |
| 55-57 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 6 |
| 58 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 4 |
| 59-60 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến di chuyển đến (8, 11); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 3 |
| 61-63 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 1 |
| 64-65 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 0 |
| 66-139 | Chờ 74 bước (`-74`) | (9, 12) | (9, 12) | Dự kiến đứng yên tại (9, 12); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 0) (ô=13)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 0)
- Mảng hành động đã gửi server: `[-140]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-139 | Chờ 140 bước (`-140`) | (13, 0) | (13, 0) | Dự kiến đứng yên tại (13, 0); hướng tới tọa độ (13, 0) | 5 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 3) (ô=51)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(9, 12))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(9, 12))
- Mảng hành động đã gửi server: `[-21, 3, 2, 3, 3, 3, 3, 4, 5, 5, 0, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, -84]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-20 | Chờ 21 bước (`-21`) | (0, 3) | (0, 3) | Dự kiến đứng yên tại (0, 3); hướng tới tọa độ (0, 3) | 35 |
| 21-22 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 34 |
| 23-25 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 32 |
| 26-27 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 31 |
| 28 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 29 |
| 29 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 27 |
| 30-31 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 26 |
| 32-33 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 25 |
| 34-35 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 24 |
| 36-37 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 22 |
| 38-40 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 20 |
| 41-42 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 19 |
| 43-45 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 17 |
| 46 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 15 |
| 47 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 13 |
| 48 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 11 |
| 49 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 9 |
| 50 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 7 |
| 51 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 5 |
| 52 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 3 |
| 53 | Di chuyển hướng 3 (`3`) | (8, 10) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 1 |
| 54-55 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 0 |
| 56-139 | Chờ 84 bước (`-84`) | (9, 12) | (9, 12) | Dự kiến đứng yên tại (9, 12); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 0 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (8, 4) (ô=76)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #3 (thương hiệu=3, tọa độ=(4, 17))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 3, 4, 3, 4, 4, 3, 4, 4, 5, -121]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 2-3 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 4 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến di chuyển đến (7, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 5-6 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 7 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 8 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 9 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 10 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 11 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 12 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 13 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 14 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 15-16 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới điểm hẹn của xe tuần tra #0 tại (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 35 |
| 17-18 | Di chuyển hướng 5 (`5`) | (5, 17) | (4, 17) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (4, 17) | 35 |
| 19-139 | Chờ 121 bước (`-121`) | (4, 17) | (4, 17) | Dự kiến đứng yên tại (4, 17); điểm hẹn của xe tuần tra #0 tại (4, 17) | 35 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (0, 11) (ô=187)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #11 (thương hiệu=11, tọa độ=(0, 3))
- Mảng hành động đã gửi server: `[1, 2, 1, 1, 0, 0, 0, 0, 0, -124]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 2-3 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 4 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 5-6 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 7 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 8 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 9 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 10-12 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 13-15 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (0, 3) | 35 |
| 16-139 | Chờ 124 bước (`-124`) | (0, 3) | (0, 3) | Dự kiến đứng yên tại (0, 3); điểm hẹn của xe tuần tra #1 tại (0, 3) | 35 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (9, 12) (ô=213)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #11 (thương hiệu=11, tọa độ=(0, 3))
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 0, 1, 0, 0, 5, 5, 5, 0, 0, 5, 0, -120]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 5 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 6 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 7 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 8 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 9 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 10 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 11 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 12 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 13 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 14 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 15-16 | Di chuyển hướng 5 (`5`) | (1, 4) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 17-19 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (0, 3) | 35 |
| 20-139 | Chờ 120 bước (`-120`) | (0, 3) | (0, 3) | Dự kiến đứng yên tại (0, 3); điểm hẹn của xe tuần tra #3 tại (0, 3) | 35 |

