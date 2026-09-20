# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 35
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 0) (ô=9)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 9))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 9))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 5, 5, 5, 5, 0, 0, 4, 4, 4, 3, 2, 3, 3, 3, 3, 4, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến di chuyển đến (9, 1); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 34 |
| 2-4 | Di chuyển hướng 4 (`4`) | (9, 1) | (8, 2) | Dự kiến di chuyển đến (8, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 32 |
| 5 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 30 |
| 6 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 28 |
| 7 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 26 |
| 8 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến di chuyển đến (4, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 24 |
| 9 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến di chuyển đến (3, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 22 |
| 10 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến di chuyển đến (2, 2); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 20 |
| 11 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (1, 0) (Spot #2 (thương hiệu=2, tọa độ=(1, 0))) | 18 |
| 12 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 0)) | 16 |
| 13-14 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 1)) | 15 |
| 15-16 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến di chuyển đến (0, 2); hướng tới tọa độ (0, 3) (Spot #11 (thương hiệu=11, tọa độ=(0, 3))) | 14 |
| 17 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 3)) | 12 |
| 18-19 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến di chuyển đến (0, 4); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 11 |
| 20-22 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 9 |
| 23-24 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 8 |
| 25 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 6 |
| 26 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 4 |
| 27-28 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 3 |
| 29-30 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 2 |
| 31-34 | Chờ 4 bước (`-4`) | (3, 9) | (3, 9) | Dự kiến đứng yên tại (3, 9); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 5) (ô=98)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=2, tọa độ=(5, 16))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=2, tọa độ=(5, 16))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 4, 3, 2, 2, 1, -1, 5, 4, 4, 5, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 34 |
| 2 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 32 |
| 3 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 30 |
| 4 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 28 |
| 5 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 26 |
| 6 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 24 |
| 7 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 22 |
| 8 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 20 |
| 9 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến di chuyển đến (4, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 18 |
| 10 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến di chuyển đến (3, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 16 |
| 11 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 14 |
| 12 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 12 |
| 13 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến di chuyển đến (1, 7); hướng tới tọa độ (0, 8) (Spot #0 (thương hiệu=0, tọa độ=(0, 8))) | 10 |
| 14-16 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 8)) | 8 |
| 17-18 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 7 |
| 19-21 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (3, 9) (Spot #7 (thương hiệu=7, tọa độ=(3, 9))) | 5 |
| 22 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 9)) | 3 |
| 23-24 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 8)) | 2 |
| 25 | Chờ 1 bước (`-1`) | (3, 8) | (3, 8) | Dự kiến đứng yên tại (3, 8); hướng tới tọa độ (3, 8) | 35 |
| 26-27 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 34 |
| 28 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 32 |
| 29 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 30 |
| 30 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (0, 11) (Spot #6 (thương hiệu=6, tọa độ=(0, 11))) | 28 |
| 31 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 11)) | 26 |
| 32-33 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến di chuyển đến (0, 12); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 25 |
| 34 | Chờ 1 bước (`-1`) | (0, 12) | (0, 12) | Dự kiến đứng yên tại (0, 12); mục tiêu Spot #16 (thương hiệu=2, tọa độ=(5, 16)) | 25 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 12) (ô=205)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(8, 4))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(8, 4))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 2, 1, 1, 1, 2, 2, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, -1, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 34 |
| 2 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 32 |
| 3 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 30 |
| 4-6 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới tọa độ (4, 17) (Spot #3 (thương hiệu=3, tọa độ=(4, 17))) | 28 |
| 7-9 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 17)) | 26 |
| 10-11 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 25 |
| 12-13 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=2, tọa độ=(5, 16)) | 24 |
| 14-15 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 23 |
| 16 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 21 |
| 17 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 19 |
| 18 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 17 |
| 19 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (9, 12) (Spot #13 (thương hiệu=13, tọa độ=(9, 12))) | 15 |
| 20-21 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 12)) | 14 |
| 22-23 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 13 |
| 24-25 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 12 |
| 26 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 10 |
| 27 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 8 |
| 28 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 6 |
| 29 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 4 |
| 30 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 2 |
| 31 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 4)) | 0 |
| 32 | Chờ 1 bước (`-1`) | (9, 4) | (9, 4) | Dự kiến đứng yên tại (9, 4); hướng tới tọa độ (9, 4) | 35 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 4)) | 34 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 5) (ô=96)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 11)
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 4, 3, 4, 4, 4, 4, 4, 3, 0, 5, 5, 1, 1, 2, 1, 1, 1, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 34 |
| 2 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 32 |
| 3 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 30 |
| 4 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 28 |
| 5 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 26 |
| 6 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến di chuyển đến (10, 11); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 24 |
| 7 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến di chuyển đến (9, 12); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 22 |
| 8-9 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến di chuyển đến (9, 13); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 21 |
| 10-11 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 20 |
| 12 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 18 |
| 13-15 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (8, 17) (Spot #1 (thương hiệu=1, tọa độ=(8, 17))) | 16 |
| 16-17 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 17)) | 15 |
| 18-19 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến di chuyển đến (7, 16); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 14 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến di chuyển đến (6, 16); hướng tới tọa độ (5, 16) (Spot #16 (thương hiệu=2, tọa độ=(5, 16))) | 13 |
| 22 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=2, tọa độ=(5, 16)) | 11 |
| 23-24 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 10 |
| 25 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 8 |
| 26 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 6 |
| 27 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 4 |
| 28-29 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 3 |
| 30-32 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 11)) | 1 |
| 33 | Chờ 1 bước (`-1`) | (9, 11) | (9, 11) | Dự kiến đứng yên tại (9, 11); hướng tới tọa độ (9, 11) | 35 |
| 34 | Chờ 1 bước (`-1`) | (9, 11) | (9, 11) | Dự kiến đứng yên tại (9, 11); hướng tới tọa độ (9, 11) | 35 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (7, 11) (ô=194)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #10 (thương hiệu=10, tọa độ=(9, 4))
- Mảng hành động đã gửi server: `[1, 2, 2, 1, 1, 0, 1, 0, 0, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 35 |
| 2 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 35 |
| 3 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 35 |
| 4 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 35 |
| 5 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 35 |
| 6 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến di chuyển đến (10, 7); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 35 |
| 7 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 35 |
| 8 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới điểm hẹn của xe tuần tra #2 tại (9, 4) (Spot #10 (thương hiệu=10, tọa độ=(9, 4))) | 35 |
| 9 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (9, 4) | 35 |
| 10-34 | Chờ 25 bước (`-25`) | (9, 4) | (9, 4) | Dự kiến đứng yên tại (9, 4); điểm hẹn của xe tuần tra #2 tại (9, 4) | 35 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (15, 5) (ô=100)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #12 (thương hiệu=12, tọa độ=(9, 11))
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 4, 5, 5, 5, 5, 4, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 2 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 3 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 4 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến di chuyển đến (14, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 5 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 6 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 7 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến di chuyển đến (11, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 8 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 9 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (9, 11) (Spot #12 (thương hiệu=12, tọa độ=(9, 11))) | 35 |
| 10 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (9, 11) | 35 |
| 11-34 | Chờ 24 bước (`-24`) | (9, 11) | (9, 11) | Dự kiến đứng yên tại (9, 11); điểm hẹn của xe tuần tra #3 tại (9, 11) | 35 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (11, 17) (ô=300)
- Nhiên liệu đầu ngày: 35
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #5 (thương hiệu=5, tọa độ=(3, 8))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 5, 0, 0, 0, 0, 5, 0, 0, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 2 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 3 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến di chuyển đến (9, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 4 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến di chuyển đến (8, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 5 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến di chuyển đến (7, 14); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 6 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 7-8 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 9 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến di chuyển đến (6, 11); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 10 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 11 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 12 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới điểm hẹn của xe tuần tra #1 tại (3, 8) (Spot #5 (thương hiệu=5, tọa độ=(3, 8))) | 35 |
| 13-14 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (3, 8) | 35 |
| 15-34 | Chờ 20 bước (`-20`) | (3, 8) | (3, 8) | Dự kiến đứng yên tại (3, 8); điểm hẹn của xe tuần tra #1 tại (3, 8) | 35 |

