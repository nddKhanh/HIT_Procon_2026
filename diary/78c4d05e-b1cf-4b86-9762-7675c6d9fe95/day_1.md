# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 61
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 9) (ô=156)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(0, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(0, 3))
- Mảng hành động đã gửi server: `[5, 5, 0, 3, 2, 1, 2, 1, 1, 1, 2, 1, 2, 2, 2, 1, 1, 1, 1, 2, 2, -1, 5, 5, 5, 4, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 33 |
| 2 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 31 |
| 3-5 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 29 |
| 6-7 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 28 |
| 8-10 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 26 |
| 11 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 24 |
| 12 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 22 |
| 13-14 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 21 |
| 15-17 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 19 |
| 18 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến di chuyển đến (5, 5); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 17 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến di chuyển đến (6, 5); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 16 |
| 21 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 14 |
| 22 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 12 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 11 |
| 25-26 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến di chuyển đến (9, 4); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 10 |
| 27-28 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 9 |
| 29 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 7 |
| 30 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 5 |
| 31-33 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến di chuyển đến (11, 0); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 3 |
| 34-35 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến di chuyển đến (12, 0); hướng tới tọa độ (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 2 |
| 36-38 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 0)) | 0 |
| 39 | Chờ 1 bước (`-1`) | (13, 0) | (13, 0) | Dự kiến đứng yên tại (13, 0); hướng tới tọa độ (13, 0) | 35 |
| 40-41 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến di chuyển đến (12, 0); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 34 |
| 42-44 | Di chuyển hướng 5 (`5`) | (12, 0) | (11, 0) | Dự kiến di chuyển đến (11, 0); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 32 |
| 45-46 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến di chuyển đến (10, 0); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 31 |
| 47 | Di chuyển hướng 4 (`4`) | (10, 0) | (10, 1) | Dự kiến di chuyển đến (10, 1); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 29 |
| 48 | Di chuyển hướng 4 (`4`) | (10, 1) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 27 |
| 49 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 25 |
| 50 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 23 |
| 51 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 21 |
| 52 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 19 |
| 53 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 17 |
| 54 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 15 |
| 55 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 13 |
| 56 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 11 |
| 57 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 1)) | 9 |
| 58-59 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến di chuyển đến (0, 2); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 8 |
| 60 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 3)) | 6 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 12) (ô=204)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(0, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(0, 3))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 2, 2, 1, 2, 2, 3, 0, 1, 1, 1, 1, 0, -1, 1, 1, 1, 0, 0, 0, 0, 2, 5, 5, 5, 0, 0, 5, 5, 5, 0, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 12) | (1, 13) | Dự kiến di chuyển đến (1, 13); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 24 |
| 2-4 | Di chuyển hướng 3 (`3`) | (1, 13) | (1, 14) | Dự kiến di chuyển đến (1, 14); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 22 |
| 5 | Di chuyển hướng 3 (`3`) | (1, 14) | (2, 15) | Dự kiến di chuyển đến (2, 15); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 20 |
| 6 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến di chuyển đến (2, 16); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 18 |
| 7 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến di chuyển đến (3, 17); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 16 |
| 8-10 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 17)) | 14 |
| 11-12 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 13 |
| 13-14 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=2, tọa độ=(5, 16)) | 12 |
| 15-16 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 11 |
| 17 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 9 |
| 18-19 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 17)) | 8 |
| 20-21 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 7 |
| 22-23 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 6 |
| 24-26 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 4 |
| 27 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 2 |
| 28-29 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 1 |
| 30-31 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 0 |
| 32 | Chờ 1 bước (`-1`) | (9, 11) | (9, 11) | Dự kiến đứng yên tại (9, 11); hướng tới tọa độ (9, 11) | 35 |
| 33-34 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 34 |
| 35 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 32 |
| 36 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 30 |
| 37 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 28 |
| 38 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 26 |
| 39 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (8, 4) (Spot #8 (thương hiệu=8, tọa độ=(8, 4))) | 24 |
| 40-42 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 4)) | 22 |
| 43-44 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 4)) | 21 |
| 45-46 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 20 |
| 47-48 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 19 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 18 |
| 51 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 16 |
| 52 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 14 |
| 53 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 12 |
| 54 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 10 |
| 55 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 8 |
| 56 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (1, 1) (Spot #4 (thương hiệu=4, tọa độ=(1, 1))) | 6 |
| 57 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 1)) | 4 |
| 58-59 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến di chuyển đến (0, 2); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 3 |
| 60 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 3)) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 4) (ô=76)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(3, 8))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(3, 8))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 5, 5, 5, 0, 0, 4, 4, 4, 3, 4, 3, 3, 4, 4, 3, 4, -1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 0, 0, 5, 5, 5, 5, 5, 0, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 33 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 32 |
| 4 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 30 |
| 5 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 28 |
| 6 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 26 |
| 7 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 24 |
| 8 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 22 |
| 9 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 20 |
| 10 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 0)) | 18 |
| 11-12 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 1)) | 17 |
| 13-14 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến di chuyển đến (0, 2); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 16 |
| 15 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 3)) | 14 |
| 16-17 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 13 |
| 18-20 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến di chuyển đến (0, 5); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 11 |
| 21-23 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến di chuyển đến (0, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 9 |
| 24 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 7 |
| 25-27 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 5 |
| 28-29 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến di chuyển đến (0, 9); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 4 |
| 30-31 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 3 |
| 32 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 11)) | 1 |
| 33 | Chờ 1 bước (`-1`) | (0, 11) | (0, 11) | Dự kiến đứng yên tại (0, 11); hướng tới tọa độ (0, 11) | 35 |
| 34-35 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 34 |
| 36 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 32 |
| 37 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 30 |
| 38 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 28 |
| 39 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 26 |
| 40 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 24 |
| 41 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 22 |
| 42 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 20 |
| 43 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 18 |
| 44 | Di chuyển hướng 3 (`3`) | (8, 10) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 16 |
| 45-46 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 15 |
| 47-48 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 14 |
| 49-50 | Di chuyển hướng 0 (`0`) | (9, 11) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 13 |
| 51 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 11 |
| 52 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 9 |
| 53 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 7 |
| 54 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 5 |
| 55 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 3 |
| 56 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 1 |
| 57-58 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 0 |
| 59-60 | Chờ 2 bước (`-2`) | (3, 8) | (3, 8) | Dự kiến đứng yên tại (3, 8); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 11) (ô=196)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(3, 8))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(3, 8))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 4, 3, 0, 5, 5, 5, 0, 0, 5, 0, 0, 5, 0, 1, 0, 1, 3, 2, 2, 1, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 34 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 33 |
| 4-5 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 32 |
| 6 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 30 |
| 7-9 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 28 |
| 10-11 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 17)) | 27 |
| 12-13 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 26 |
| 14-15 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 25 |
| 16 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=2, tọa độ=(5, 16)) | 23 |
| 17-18 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 22 |
| 19-21 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 20 |
| 22-23 | Di chuyển hướng 0 (`0`) | (4, 15) | (3, 14) | Dự kiến di chuyển đến (3, 14); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 19 |
| 24 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 17 |
| 25 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 15 |
| 26 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 13 |
| 27-28 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến di chuyển đến (0, 12); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 12 |
| 29-30 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 11)) | 11 |
| 31-32 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 10 |
| 33 | Di chuyển hướng 0 (`0`) | (0, 10) | (0, 9) | Dự kiến di chuyển đến (0, 9); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 8 |
| 34-35 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 7 |
| 36-37 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 6 |
| 38-40 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 4 |
| 41 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 2 |
| 42-43 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 1 |
| 44-60 | Chờ 17 bước (`-17`) | (3, 8) | (3, 8) | Dự kiến đứng yên tại (3, 8); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 1 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (9, 4) (ô=77)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #12 (thương hiệu=12, tọa độ=(9, 11))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 4, 4, 4, -53]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 2 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 3 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 4 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 5 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 6 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 7 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (9, 11) | 35 |
| 8-60 | Chờ 53 bước (`-53`) | (9, 11) | (9, 11) | Dự kiến đứng yên tại (9, 11); điểm hẹn của xe tuần tra #1 tại (9, 11) | 35 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (9, 11) (ô=196)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #9 (thương hiệu=9, tọa độ=(13, 0))
- Mảng hành động đã gửi server: `[1, 1, 1, 0, 1, 0, 1, 1, 1, 2, 2, 1, 0, -46]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 3 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 4 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 5 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 6 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 7 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 8 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 9-10 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 11 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 12 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 13 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới điểm hẹn của xe tuần tra #0 tại (13, 0) (Spot #9 (thương hiệu=9, tọa độ=(13, 0))) | 35 |
| 14 | Di chuyển hướng 0 (`0`) | (14, 1) | (13, 0) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (13, 0) | 35 |
| 15-60 | Chờ 46 bước (`-46`) | (13, 0) | (13, 0) | Dự kiến đứng yên tại (13, 0); điểm hẹn của xe tuần tra #0 tại (13, 0) | 35 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (3, 8) (ô=139)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #6 (thương hiệu=6, tọa độ=(0, 11))
- Mảng hành động đã gửi server: `[5, 4, 4, 5, 4, -55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 2 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 3 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 4 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 35 |
| 5 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (0, 11) | 35 |
| 6-60 | Chờ 55 bước (`-55`) | (0, 11) | (0, 11) | Dự kiến đứng yên tại (0, 11); điểm hẹn của xe tuần tra #2 tại (0, 11) | 35 |

