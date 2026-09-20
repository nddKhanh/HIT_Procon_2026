# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 114
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(0, 11))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(0, 11))
- Mảng hành động đã gửi server: `[3, 4, 3, 3, 4, 4, 4, 4, 3, 2, 2, 1, 3, 3, 2, 2, 2, 2, 3, 3, -1, 2, 3, 2, 3, 3, 3, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, 0, 0, 5, 0, 0, 5, 0, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 34 |
| 2 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 32 |
| 3 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 30 |
| 4 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 28 |
| 5 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 26 |
| 6 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 24 |
| 7 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 22 |
| 8-10 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 20 |
| 11-12 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 19 |
| 13-15 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 17 |
| 16-17 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 15 |
| 18-19 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 14 |
| 20-21 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 13 |
| 22-23 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 12 |
| 24 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 10 |
| 25 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 8 |
| 26 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 6 |
| 27 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 4 |
| 28 | Di chuyển hướng 3 (`3`) | (8, 10) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 2 |
| 29-30 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 1 |
| 31 | Chờ 1 bước (`-1`) | (9, 12) | (9, 12) | Dự kiến đứng yên tại (9, 12); hướng tới tọa độ (9, 12) | 35 |
| 32-33 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 34 |
| 34 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 32 |
| 35-37 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=3, tọa độ=(12, 13)) | 30 |
| 38-39 | Di chuyển hướng 3 (`3`) | (12, 13) | (12, 14) | Dự kiến di chuyển đến (12, 14); hướng tới tọa độ (13, 17) (Spot #14 (thương hiệu=0, tọa độ=(13, 17))) | 29 |
| 40 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (13, 17) (Spot #14 (thương hiệu=0, tọa độ=(13, 17))) | 27 |
| 41-43 | Di chuyển hướng 3 (`3`) | (13, 15) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (13, 17) (Spot #14 (thương hiệu=0, tọa độ=(13, 17))) | 25 |
| 44-45 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=0, tọa độ=(13, 17)) | 24 |
| 46-47 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 23 |
| 48-50 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến di chuyển đến (11, 17); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 21 |
| 51-52 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến di chuyển đến (10, 17); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 20 |
| 53 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến di chuyển đến (9, 17); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 18 |
| 54-56 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến di chuyển đến (8, 17); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 16 |
| 57-58 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến di chuyển đến (7, 17); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 15 |
| 59-60 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 14 |
| 61 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=2, tọa độ=(5, 16)) | 12 |
| 62-63 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 11 |
| 64-66 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 9 |
| 67-68 | Di chuyển hướng 0 (`0`) | (4, 15) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 8 |
| 69 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 6 |
| 70 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 4 |
| 71 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 2 |
| 72-73 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến di chuyển đến (0, 12); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 1 |
| 74-75 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 11)) | 0 |
| 76-113 | Chờ 38 bước (`-38`) | (0, 11) | (0, 11) | Dự kiến đứng yên tại (0, 11); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 11)) | 35 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 13) (ô=233)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 5, 4, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, -1, 2, 5, 5, 5, 4, 4, 5, 4, 4, 4, 5, 5, 0, 1, 0, 1, 0, 0, 1, 1, 1, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến di chuyển đến (11, 14); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 28 |
| 2 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 26 |
| 3 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 24 |
| 4 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến di chuyển đến (9, 16); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 22 |
| 5-7 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến di chuyển đến (8, 16); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 20 |
| 8-10 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 17)) | 18 |
| 11-12 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 17 |
| 13-14 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 16 |
| 15-17 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 14 |
| 18 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 12 |
| 19-20 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 11 |
| 21-22 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 10 |
| 23-24 | Di chuyển hướng 0 (`0`) | (9, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 9 |
| 25 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 7 |
| 26-28 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 5 |
| 29-30 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 4 |
| 31-32 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 3 |
| 33 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 1 |
| 34-35 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 4)) | 0 |
| 36 | Chờ 1 bước (`-1`) | (8, 4) | (8, 4) | Dự kiến đứng yên tại (8, 4); hướng tới tọa độ (8, 4) | 35 |
| 37-38 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 4)) | 34 |
| 39-40 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 33 |
| 41-42 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 32 |
| 43-44 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 31 |
| 45 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 29 |
| 46 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 27 |
| 47 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 25 |
| 48 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 23 |
| 49-51 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 21 |
| 52-53 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 20 |
| 54-55 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 19 |
| 56-57 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 17 |
| 58-60 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 15 |
| 61-62 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 14 |
| 63-65 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 12 |
| 66 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 10 |
| 67-69 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 8 |
| 70-72 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 3)) | 6 |
| 73-74 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến di chuyển đến (0, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 5 |
| 75-76 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 1)) | 3 |
| 77-78 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 0)) | 2 |
| 79-113 | Chờ 35 bước (`-35`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 0)) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 0) (ô=13)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 0)
- Mảng hành động đã gửi server: `[-114]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-113 | Chờ 114 bước (`-114`) | (13, 0) | (13, 0) | Dự kiến đứng yên tại (13, 0); hướng tới tọa độ (13, 0) | 5 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 11) (ô=187)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(0, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(0, 3))
- Mảng hành động đã gửi server: `[-17, 1, 2, 2, 1, 1, 5, 0, 5, 4, 1, 1, 1, 1, 0, 0, 0, 1, 4, 4, 4, -64]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-16 | Chờ 17 bước (`-17`) | (0, 11) | (0, 11) | Dự kiến đứng yên tại (0, 11); hướng tới tọa độ (0, 11) | 35 |
| 17-18 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 34 |
| 19-20 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 32 |
| 21 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 30 |
| 22 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 28 |
| 23-24 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 27 |
| 25-26 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 26 |
| 27 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 24 |
| 28 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 22 |
| 29-31 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 20 |
| 32-33 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 19 |
| 34-36 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 17 |
| 37 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 15 |
| 38 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 13 |
| 39 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 11 |
| 40 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 9 |
| 41 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 1)) | 7 |
| 42-43 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 0)) | 6 |
| 44-45 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến di chuyển đến (1, 1); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 5 |
| 46-47 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến di chuyển đến (0, 2); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 4 |
| 48-49 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 3)) | 2 |
| 50-113 | Chờ 64 bước (`-64`) | (0, 3) | (0, 3) | Dự kiến đứng yên tại (0, 3); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 3)) | 2 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (9, 11) (ô=196)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #8 (thương hiệu=8, tọa độ=(8, 4))
- Mảng hành động đã gửi server: `[1, 1, 1, 0, 0, 0, 0, -104]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 35 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 35 |
| 3 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 35 |
| 4 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 35 |
| 5 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 35 |
| 6 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 35 |
| 7-9 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (8, 4) | 35 |
| 10-113 | Chờ 104 bước (`-104`) | (8, 4) | (8, 4) | Dự kiến đứng yên tại (8, 4); điểm hẹn của xe tuần tra #1 tại (8, 4) | 35 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (0, 3) (ô=51)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #6 (thương hiệu=6, tọa độ=(0, 11))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 4, 4, 5, 4, -98]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 2-4 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 5-7 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 8 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 9 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 10 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 11-12 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 13 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 14-15 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (0, 11) | 35 |
| 16-113 | Chờ 98 bước (`-98`) | (0, 11) | (0, 11) | Dự kiến đứng yên tại (0, 11); điểm hẹn của xe tuần tra #3 tại (0, 11) | 35 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #13 (thương hiệu=13, tọa độ=(9, 12))
- Mảng hành động đã gửi server: `[3, 4, 3, 3, 4, 3, 2, 2, 2, 3, 3, 4, 3, 2, 2, 3, 3, -95]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 2 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 3 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 4 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 5 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 6 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 7 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 8 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 9 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 10 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 11 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 12 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến di chuyển đến (6, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 13 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 14 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 15 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 16 | Di chuyển hướng 3 (`3`) | (8, 10) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 35 |
| 17-18 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (9, 12) | 35 |
| 19-113 | Chờ 95 bước (`-95`) | (9, 12) | (9, 12) | Dự kiến đứng yên tại (9, 12); điểm hẹn của xe tuần tra #0 tại (9, 12) | 35 |

