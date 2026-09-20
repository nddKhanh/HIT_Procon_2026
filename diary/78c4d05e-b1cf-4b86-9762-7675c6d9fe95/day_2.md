# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (0, 3) (ô=51)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[1, 1, 1, -83]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến di chuyển đến (0, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 5 |
| 2 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến di chuyển đến (1, 1); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 3 |
| 3-4 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 0)) | 2 |
| 5-87 | Chờ 83 bước (`-83`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 0)) | 35 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 3) (ô=51)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=3, tọa độ=(12, 13))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=3, tọa độ=(12, 13))
- Mảng hành động đã gửi server: `[-18, 3, 3, 3, 3, 3, 3, 1, 3, 3, 2, 2, 2, 2, 3, 3, 2, 3, 2, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-17 | Chờ 18 bước (`-18`) | (0, 3) | (0, 3) | Dự kiến đứng yên tại (0, 3); hướng tới tọa độ (0, 3) | 35 |
| 18-19 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 34 |
| 20-22 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 32 |
| 23-25 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 30 |
| 26 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 28 |
| 27 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 26 |
| 28 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 24 |
| 29-30 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 23 |
| 31-32 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 22 |
| 33-34 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 21 |
| 35 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 19 |
| 36 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 17 |
| 37 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 15 |
| 38 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 13 |
| 39 | Di chuyển hướng 3 (`3`) | (8, 10) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 11 |
| 40-41 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 10 |
| 42-43 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến di chuyển đến (10, 12); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 9 |
| 44 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến di chuyển đến (11, 13); hướng tới tọa độ (12, 13) (Spot #17 (thương hiệu=3, tọa độ=(12, 13))) | 7 |
| 45-47 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=3, tọa độ=(12, 13)) | 5 |
| 48-87 | Chờ 40 bước (`-40`) | (12, 13) | (12, 13) | Dự kiến đứng yên tại (12, 13); mục tiêu Spot #17 (thương hiệu=3, tọa độ=(12, 13)) | 5 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 8) (ô=139)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(13, 0))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(13, 0))
- Mảng hành động đã gửi server: `[5, 0, 5, 4, 1, 0, 1, 0, 0, 1, 1, 1, -1, 3, 3, 2, 2, 2, 3, 3, 2, 2, 2, 1, 1, 2, 2, 2, 1, 0, -42]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 20 |
| 2 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 18 |
| 3 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 16 |
| 4-6 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 14 |
| 7-8 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 13 |
| 9-11 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 11 |
| 12 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến di chuyển đến (1, 5); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 9 |
| 13-15 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 7 |
| 16-18 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 3)) | 5 |
| 19-20 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến di chuyển đến (0, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 4 |
| 21 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 1)) | 2 |
| 22-23 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 0)) | 1 |
| 24 | Chờ 1 bước (`-1`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); hướng tới tọa độ (1, 0) | 35 |
| 25-26 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 34 |
| 27 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 32 |
| 28 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 30 |
| 29 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 28 |
| 30 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 26 |
| 31 | Di chuyển hướng 3 (`3`) | (5, 2) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 24 |
| 32 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 22 |
| 33 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 20 |
| 34-35 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 4)) | 19 |
| 36-37 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 4)) | 18 |
| 38-39 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 17 |
| 40 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 15 |
| 41 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 13 |
| 42 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 11 |
| 43 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 9 |
| 44 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 7 |
| 45 | Di chuyển hướng 0 (`0`) | (14, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 0)) | 5 |
| 46-87 | Chờ 42 bước (`-42`) | (13, 0) | (13, 0) | Dự kiến đứng yên tại (13, 0); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 0)) | 5 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 8) (ô=139)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(0, 11))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(0, 11))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 3, 4, 3, 3, 3, 3, 0, 1, 1, 1, 1, 0, -1, 0, 1, 0, 0, 1, 0, 1, 2, 5, 4, 4, 5, 5, 5, 4, 4, 4, 5, 5, 0, 4, 3, 4, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 24 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 23 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 21 |
| 5 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 19 |
| 6 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 17 |
| 7 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 15 |
| 8 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 13 |
| 9 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 11 |
| 10-11 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 10 |
| 12-13 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 17)) | 9 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 8 |
| 16-17 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 7 |
| 18-20 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 5 |
| 21 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 3 |
| 22-23 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 2 |
| 24-25 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 1 |
| 26 | Chờ 1 bước (`-1`) | (9, 11) | (9, 11) | Dự kiến đứng yên tại (9, 11); hướng tới tọa độ (9, 11) | 35 |
| 27-28 | Di chuyển hướng 0 (`0`) | (9, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 34 |
| 29 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 32 |
| 30-32 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 30 |
| 33-34 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 29 |
| 35-36 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 28 |
| 37 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 26 |
| 38-39 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 4)) | 25 |
| 40-41 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 4)) | 24 |
| 42-43 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 23 |
| 44-45 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 22 |
| 46-47 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 21 |
| 48 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 19 |
| 49 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 17 |
| 50 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 15 |
| 51 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 13 |
| 52-54 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 11 |
| 55-56 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 10 |
| 57-58 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 9 |
| 59-60 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 7 |
| 61-63 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 5 |
| 64-65 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến di chuyển đến (0, 9); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 4 |
| 66-67 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 3 |
| 68 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 11)) | 1 |
| 69-87 | Chờ 19 bước (`-19`) | (0, 11) | (0, 11) | Dự kiến đứng yên tại (0, 11); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 11)) | 1 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (9, 11) (ô=196)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #12 (thương hiệu=12, tọa độ=(9, 11))
- Mảng hành động đã gửi server: `[-88]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-87 | Chờ 88 bước (`-88`) | (9, 11) | (9, 11) | Dự kiến đứng yên tại (9, 11); điểm hẹn của xe tuần tra #3 tại (9, 11) | 35 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (13, 0) (ô=13)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #11 (thương hiệu=11, tọa độ=(0, 3))
- Mảng hành động đã gửi server: `[3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, -71]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 2 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 3 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 4 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 5 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 6 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 7 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 8 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 9 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 10 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 11 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 12 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 13 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 14 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 15 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến di chuyển đến (0, 2); hướng tới điểm hẹn của xe tuần tra #1 tại (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 35 |
| 16 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (0, 3) | 35 |
| 17-87 | Chờ 71 bước (`-71`) | (0, 3) | (0, 3) | Dự kiến đứng yên tại (0, 3); điểm hẹn của xe tuần tra #1 tại (0, 3) | 35 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (0, 11) (ô=187)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #2 (thương hiệu=2, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[1, 2, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, -74]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 2 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 3 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 4-5 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 6 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 7 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 8 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 9 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 10 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 11 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 12 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 35 |
| 13 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (1, 0) | 35 |
| 14-87 | Chờ 74 bước (`-74`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); điểm hẹn của xe tuần tra #2 tại (1, 0) | 35 |

