# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 0) (ô=11)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(2, 11))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(2, 11))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 5, 5, 3, 4, 4, 3, 4, 5, 5, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 66 |
| 2-3 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 2)) | 65 |
| 4-5 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 64 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 63 |
| 8 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 61 |
| 9-10 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 60 |
| 11-12 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 3)) | 59 |
| 13-14 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 58 |
| 15-16 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 5)) | 57 |
| 17-18 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 56 |
| 19-20 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 53 |
| 22-23 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 52 |
| 24-25 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 51 |
| 26-27 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 50 |
| 28 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 48 |
| 29-30 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(2, 11)) | 47 |
| 31 | Chờ 1 bước (`-1`) | (2, 11) | (2, 11) | Dự kiến đứng yên tại (2, 11); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(2, 11)) | 67 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (5, 10) (ô=185)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(2, 11))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(2, 11))
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 1, 1, 0, 2, 2, 2, 2, 1, 0, 1, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến di chuyển đến (5, 9); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 66 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 65 |
| 4-5 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 64 |
| 6 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 62 |
| 7-8 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 5)) | 61 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 60 |
| 11-12 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 3)) | 59 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 58 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 57 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 56 |
| 19 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 54 |
| 20-21 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 2)) | 53 |
| 22-23 | Di chuyển hướng 0 (`0`) | (10, 2) | (10, 1) | Dự kiến di chuyển đến (10, 1); hướng tới tọa độ (10, 0) (Spot #5 (thương hiệu=5, tọa độ=(10, 0))) | 52 |
| 24-25 | Di chuyển hướng 1 (`1`) | (10, 1) | (10, 0) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(10, 0)) | 51 |
| 26-27 | Di chuyển hướng 3 (`3`) | (10, 0) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 50 |
| 28-29 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 49 |
| 30-31 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 48 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 8) (ô=148)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=1, tọa độ=(15, 6))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=1, tọa độ=(15, 6))
- Mảng hành động đã gửi server: `[2, 1, 1, 0, 1, 0, 2, 2, 2, 2, 1, 2, 2, 3, 3, 3, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 66 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 65 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 63 |
| 5-6 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 5)) | 62 |
| 7-8 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 61 |
| 9-10 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 3)) | 60 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 59 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 58 |
| 15-16 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 57 |
| 17 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 55 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 2)) | 54 |
| 20-21 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 53 |
| 22 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 51 |
| 23-24 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 50 |
| 25-26 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 49 |
| 27-28 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 48 |
| 29 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 46 |
| 30-31 | Di chuyển hướng 3 (`3`) | (15, 5) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(15, 6)) | 45 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 6) (ô=114)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(6, 3))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(6, 3))
- Mảng hành động đã gửi server: `[0, 4, 3, 3, 3, 2, 2, 2, 2, 3, 2, 3, 3, 5, 5, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 5)) | 66 |
| 2-3 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 65 |
| 4-5 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 64 |
| 6 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 62 |
| 7-8 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 61 |
| 9-10 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 60 |
| 11-12 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 59 |
| 13 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 57 |
| 14-15 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 56 |
| 16-17 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến di chuyển đến (11, 10); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 55 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến di chuyển đến (12, 10); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 54 |
| 20-21 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến di chuyển đến (13, 11); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 53 |
| 22 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 12)) | 51 |
| 23-24 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 50 |
| 25-27 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(11, 12)) | 48 |
| 28-29 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 47 |
| 30-31 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 46 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (5, 11) (ô=203)
- Nhiên liệu đầu ngày: 67
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #7 (thương hiệu=7, tọa độ=(2, 11))
- Mảng hành động đã gửi server: `[5, 5, 5, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến di chuyển đến (4, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 67 |
| 2-4 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới điểm hẹn của xe tuần tra #0 tại (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 67 |
| 5-6 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (2, 11) | 67 |
| 7-31 | Chờ 25 bước (`-25`) | (2, 11) | (2, 11) | Dự kiến đứng yên tại (2, 11); điểm hẹn của xe tuần tra #0 tại (2, 11) | 67 |

