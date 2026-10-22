# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 42
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 41 | #3 | #5 | (11, 8) | 34 | 67 |
| 42 | #2 | #5 | (11, 8) | 33 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 16) (ô=348)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(1, 8))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(1, 8))
- Mảng hành động đã gửi server: `[2, 2, 3, 0, 5, 5, 0, 5, 5, 5, 5, 5, 5, 4, 0, 0, 0, 5, 0, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 66 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (15, 17) (Spot #15 (thương hiệu=0, tọa độ=(15, 17))) | 65 |
| 4 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 63 |
| 5-6 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 62 |
| 7 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 60 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 59 |
| 10-11 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 58 |
| 12 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến di chuyển đến (11, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 56 |
| 13-14 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 55 |
| 15-16 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 54 |
| 17-18 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 53 |
| 19-20 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 52 |
| 21-23 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 50 |
| 24-25 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 49 |
| 26-27 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 48 |
| 28-30 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 46 |
| 31-32 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 45 |
| 33-35 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 43 |
| 36-37 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 42 |
| 38 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 40 |
| 39-40 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 39 |
| 41 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến di chuyển đến (1, 9); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 37 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 0) (ô=8)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 5, 5, 3, 3, 3, 4, 4, 3, 4, 2, 2, 2, 3, 2, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 0) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 66 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến di chuyển đến (7, 1); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 64 |
| 3-4 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến di chuyển đến (6, 1); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 63 |
| 5 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến di chuyển đến (5, 1); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 61 |
| 6 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 59 |
| 7-8 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 58 |
| 9-10 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến di chuyển đến (2, 1); hướng tới tọa độ (1, 1) (Spot #3 (thương hiệu=3, tọa độ=(1, 1))) | 57 |
| 11 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 1)) | 55 |
| 12-13 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới tọa độ (2, 5) (Spot #14 (thương hiệu=14, tọa độ=(2, 5))) | 54 |
| 14-16 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới tọa độ (2, 5) (Spot #14 (thương hiệu=14, tọa độ=(2, 5))) | 52 |
| 17-18 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến di chuyển đến (2, 4); hướng tới tọa độ (2, 5) (Spot #14 (thương hiệu=14, tọa độ=(2, 5))) | 51 |
| 19 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 5)) | 49 |
| 20-21 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến di chuyển đến (1, 6); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 48 |
| 22-24 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến di chuyển đến (2, 7); hướng tới tọa độ (1, 8) (Spot #10 (thương hiệu=10, tọa độ=(1, 8))) | 46 |
| 25-27 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 44 |
| 28-29 | Di chuyển hướng 2 (`2`) | (1, 8) | (2, 8) | Dự kiến di chuyển đến (2, 8); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 43 |
| 30-32 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 41 |
| 33-34 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 40 |
| 35 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 38 |
| 36-37 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 9)) | 37 |
| 38-39 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 36 |
| 40-41 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 35 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 20) (ô=421)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 2, 0, 0, 0, 5, 0, 1, 1, 1, 2, 2, 1, 2, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 20) | (2, 19) | Dự kiến di chuyển đến (2, 19); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 66 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến di chuyển đến (2, 18); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 64 |
| 3 | Di chuyển hướng 1 (`1`) | (2, 18) | (3, 17) | Dự kiến di chuyển đến (3, 17); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 62 |
| 4 | Di chuyển hướng 1 (`1`) | (3, 17) | (3, 16) | Dự kiến di chuyển đến (3, 16); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 60 |
| 5-7 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến di chuyển đến (4, 16); hướng tới tọa độ (5, 16) (Spot #11 (thương hiệu=11, tọa độ=(5, 16))) | 58 |
| 8 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 56 |
| 9-10 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 55 |
| 11-13 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 53 |
| 14-15 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (3, 13) (Spot #13 (thương hiệu=13, tọa độ=(3, 13))) | 52 |
| 16-18 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 50 |
| 19-20 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 49 |
| 21 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 47 |
| 22-23 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 46 |
| 24-26 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 44 |
| 27-28 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (6, 9) (Spot #2 (thương hiệu=2, tọa độ=(6, 9))) | 43 |
| 29-30 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 9)) | 42 |
| 31-32 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 41 |
| 33-34 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 40 |
| 35 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 38 |
| 36-38 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 36 |
| 39 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 34 |
| 40-41 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 67 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 13) (ô=283)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 3, 2, 3, 3, 0, 0, 1, 0, 1, 1, 2, 1, 4, 5, 5, 0, 0, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến di chuyển đến (10, 14); hướng tới tọa độ (11, 15) (Spot #4 (thương hiệu=4, tọa độ=(11, 15))) | 66 |
| 2-4 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 64 |
| 5-6 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến di chuyển đến (12, 15); hướng tới tọa độ (15, 18) (Spot #7 (thương hiệu=7, tọa độ=(15, 18))) | 63 |
| 7 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến di chuyển đến (13, 15); hướng tới tọa độ (15, 18) (Spot #7 (thương hiệu=7, tọa độ=(15, 18))) | 61 |
| 8-9 | Di chuyển hướng 3 (`3`) | (13, 15) | (13, 16) | Dự kiến di chuyển đến (13, 16); hướng tới tọa độ (15, 18) (Spot #7 (thương hiệu=7, tọa độ=(15, 18))) | 60 |
| 10-11 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (15, 18) (Spot #7 (thương hiệu=7, tọa độ=(15, 18))) | 59 |
| 12 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến di chuyển đến (15, 17); hướng tới tọa độ (15, 18) (Spot #7 (thương hiệu=7, tọa độ=(15, 18))) | 57 |
| 13-14 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 56 |
| 15-16 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến di chuyển đến (15, 17); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 55 |
| 17-18 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 54 |
| 19 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 52 |
| 20 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 50 |
| 21-22 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến di chuyển đến (15, 13); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 49 |
| 23-24 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 48 |
| 25-26 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 47 |
| 27 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 45 |
| 28-29 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 44 |
| 30 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 42 |
| 31-32 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến di chuyển đến (14, 12); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 41 |
| 33-34 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (13, 10) (Spot #18 (thương hiệu=3, tọa độ=(13, 10))) | 40 |
| 35-36 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 39 |
| 37-38 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 38 |
| 39 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 36 |
| 40 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 67 |
| 41 | Chờ 1 bước (`-1`) | (11, 8) | (11, 8) | Dự kiến đứng yên tại (11, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 67 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 17) (ô=371)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Mảng hành động đã gửi server: `[4, 2, 2, 0, 0, 1, 0, 1, 1, 2, 1, 0, 1, 1, 0, 1, 1, 2, 0, 0, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 18)) | 66 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến di chuyển đến (14, 18); hướng tới tọa độ (15, 18) (Spot #7 (thương hiệu=7, tọa độ=(15, 18))) | 65 |
| 4-5 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 64 |
| 6-7 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến di chuyển đến (15, 17); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 63 |
| 8-9 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 62 |
| 10 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến di chuyển đến (15, 15); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 60 |
| 11 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (15, 13) (Spot #8 (thương hiệu=8, tọa độ=(15, 13))) | 58 |
| 12-13 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 57 |
| 14-15 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 56 |
| 16-17 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (17, 11) (Spot #5 (thương hiệu=5, tọa độ=(17, 11))) | 55 |
| 18 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 53 |
| 19-20 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến di chuyển đến (16, 10); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 52 |
| 21-23 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 50 |
| 24-26 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 48 |
| 27-28 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 47 |
| 29-31 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 45 |
| 32-33 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến di chuyển đến (18, 5); hướng tới tọa độ (19, 5) (Spot #6 (thương hiệu=6, tọa độ=(19, 5))) | 44 |
| 34 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 5)) | 42 |
| 35-36 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (18, 3) (Spot #9 (thương hiệu=9, tọa độ=(18, 3))) | 41 |
| 37-38 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 3)) | 40 |
| 39-40 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 39 |
| 41 | Chờ 1 bước (`-1`) | (17, 4) | (17, 4) | Dự kiến đứng yên tại (17, 4); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 39 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (19, 0) (ô=19)
- Nhiên liệu đầu ngày: 67
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 4, 4, 4, 4, 4, 4, 4, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (19, 0) | (18, 0) | Dự kiến di chuyển đến (18, 0); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 2 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến di chuyển đến (17, 0); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 3 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến di chuyển đến (16, 0); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 4-5 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến di chuyển đến (16, 1); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 6-7 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến di chuyển đến (15, 1); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 8-9 | Di chuyển hướng 4 (`4`) | (15, 1) | (14, 2) | Dự kiến di chuyển đến (14, 2); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 10-12 | Di chuyển hướng 4 (`4`) | (14, 2) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 13-14 | Di chuyển hướng 4 (`4`) | (14, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 15 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 16-18 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 19-20 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (11, 8) (Spot #12 (thương hiệu=12, tọa độ=(11, 8))) | 67 |
| 21 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (11, 8) | 67 |
| 22-41 | Chờ 20 bước (`-20`) | (11, 8) | (11, 8) | Dự kiến đứng yên tại (11, 8); điểm hẹn của xe tuần tra #3 tại (11, 8) | 67 |

