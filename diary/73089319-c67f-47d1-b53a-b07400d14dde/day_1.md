# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 53
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 11) (ô=200)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 2, 1, 0, 1, 1, 0, 2, 2, 2, 2, 1, 0, 1, 3, 3, 2, 3, 3, 3, 2, 3, 0, 5, 5, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 66 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 65 |
| 4 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 63 |
| 5-6 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 62 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 61 |
| 9-10 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 60 |
| 11 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 58 |
| 12-13 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 5)) | 57 |
| 14-15 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 56 |
| 16-17 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 3)) | 55 |
| 18-19 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 54 |
| 20-21 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 53 |
| 22-23 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 52 |
| 24 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 50 |
| 25-26 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 2)) | 49 |
| 27-28 | Di chuyển hướng 0 (`0`) | (10, 2) | (10, 1) | Dự kiến di chuyển đến (10, 1); hướng tới tọa độ (10, 0) (Spot #5 (thương hiệu=5, tọa độ=(10, 0))) | 48 |
| 29-30 | Di chuyển hướng 1 (`1`) | (10, 1) | (10, 0) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(10, 0)) | 47 |
| 31-32 | Di chuyển hướng 3 (`3`) | (10, 0) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 46 |
| 33-34 | Di chuyển hướng 3 (`3`) | (11, 1) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 45 |
| 35 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 43 |
| 36-37 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 42 |
| 38-39 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 41 |
| 40-41 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 40 |
| 42 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 38 |
| 43-44 | Di chuyển hướng 3 (`3`) | (15, 5) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(15, 6)) | 37 |
| 45-46 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 36 |
| 47-48 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 35 |
| 49 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 33 |
| 50 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 31 |
| 51-52 | Chờ 2 bước (`-2`) | (12, 5) | (12, 5) | Dự kiến đứng yên tại (12, 5); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 12)) | 31 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 3) (ô=64)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(2, 11))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(2, 11))
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 4, 1, 0, 2, 2, 2, 2, 1, 0, 1, 3, 4, 4, 5, 5, 4, 4, 4, 4, 4, 5, 5, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 47 |
| 2 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 45 |
| 3-4 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 44 |
| 5-6 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 43 |
| 7-8 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 5)) | 42 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 41 |
| 11-12 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 3)) | 40 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 39 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 38 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 37 |
| 19 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 35 |
| 20-21 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 2)) | 34 |
| 22-23 | Di chuyển hướng 0 (`0`) | (10, 2) | (10, 1) | Dự kiến di chuyển đến (10, 1); hướng tới tọa độ (10, 0) (Spot #5 (thương hiệu=5, tọa độ=(10, 0))) | 33 |
| 24-25 | Di chuyển hướng 1 (`1`) | (10, 1) | (10, 0) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(10, 0)) | 32 |
| 26-27 | Di chuyển hướng 3 (`3`) | (10, 0) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 31 |
| 28-29 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến di chuyển đến (10, 2); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 30 |
| 30-31 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 29 |
| 32-33 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 28 |
| 34 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 26 |
| 35-36 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 25 |
| 37-38 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 24 |
| 39-40 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 23 |
| 41-42 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 22 |
| 43 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 20 |
| 44-45 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 19 |
| 46-47 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 18 |
| 48-49 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 17 |
| 50 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (2, 11) (Spot #7 (thương hiệu=7, tọa độ=(2, 11))) | 15 |
| 51-52 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(2, 11)) | 14 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 6) (ô=123)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 0, 0, 5, 5, 5, 4, 4, 1, 0, 3, 3, 4, 4, 3, 3, 2, 2, 2, 3, 3, 3, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 44 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 43 |
| 4 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 41 |
| 5 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 39 |
| 6-8 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 37 |
| 9 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 35 |
| 10-11 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 34 |
| 12-13 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 33 |
| 14 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 31 |
| 15-16 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 30 |
| 17-18 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 29 |
| 19-20 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 5)) | 28 |
| 21-22 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 27 |
| 23-24 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 3)) | 26 |
| 25-26 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 25 |
| 27-28 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 24 |
| 29-30 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 23 |
| 31-32 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 22 |
| 33 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 20 |
| 34-35 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 19 |
| 36-37 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 18 |
| 38-39 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 17 |
| 40 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 15 |
| 41-42 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến di chuyển đến (10, 10); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 14 |
| 43-45 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (11, 12) (Spot #8 (thương hiệu=0, tọa độ=(11, 12))) | 12 |
| 46-47 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(11, 12)) | 11 |
| 48-49 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 10 |
| 50-52 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 12)) | 8 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 10) (ô=190)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 0, 0, 0, 1, 1, 0, 2, 2, 2, 2, 1, 0, 1, 3, 3, 2, 3, 3, 3, 2, 3, -1, 0, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 44 |
| 3-4 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến di chuyển đến (9, 9); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 43 |
| 5 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 41 |
| 6-7 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến di chuyển đến (7, 9); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 40 |
| 8-9 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 39 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 38 |
| 12 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến di chuyển đến (5, 6); hướng tới tọa độ (6, 5) (Spot #2 (thương hiệu=2, tọa độ=(6, 5))) | 36 |
| 13-14 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 5)) | 35 |
| 15-16 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến di chuyển đến (6, 4); hướng tới tọa độ (6, 3) (Spot #4 (thương hiệu=4, tọa độ=(6, 3))) | 34 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 3)) | 33 |
| 19-20 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 32 |
| 21-22 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 31 |
| 23-24 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 30 |
| 25 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (10, 2) (Spot #3 (thương hiệu=3, tọa độ=(10, 2))) | 28 |
| 26-27 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 2)) | 27 |
| 28-29 | Di chuyển hướng 0 (`0`) | (10, 2) | (10, 1) | Dự kiến di chuyển đến (10, 1); hướng tới tọa độ (10, 0) (Spot #5 (thương hiệu=5, tọa độ=(10, 0))) | 26 |
| 30-31 | Di chuyển hướng 1 (`1`) | (10, 1) | (10, 0) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(10, 0)) | 25 |
| 32-33 | Di chuyển hướng 3 (`3`) | (10, 0) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 24 |
| 34-35 | Di chuyển hướng 3 (`3`) | (11, 1) | (11, 2) | Dự kiến di chuyển đến (11, 2); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 23 |
| 36 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 21 |
| 37-38 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến di chuyển đến (13, 3); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 20 |
| 39-40 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến di chuyển đến (13, 4); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 19 |
| 41-42 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 18 |
| 43 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 16 |
| 44-45 | Di chuyển hướng 3 (`3`) | (15, 5) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(15, 6)) | 15 |
| 46 | Chờ 1 bước (`-1`) | (15, 6) | (15, 6) | Dự kiến đứng yên tại (15, 6); hướng tới tọa độ (15, 6) | 67 |
| 47-48 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 66 |
| 49-50 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 65 |
| 51 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 63 |
| 52 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (13, 12) (Spot #6 (thương hiệu=6, tọa độ=(13, 12))) | 61 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (2, 11) (ô=200)
- Nhiên liệu đầu ngày: 67
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #9 (thương hiệu=1, tọa độ=(15, 6))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 2, 2, 2, 3, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 4 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 5-6 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 9-10 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến di chuyển đến (6, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 11 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến di chuyển đến (6, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 12-13 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến di chuyển đến (7, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến di chuyển đến (7, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 16-17 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 20 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 21-22 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 23-24 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 25 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 26-28 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 29 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 30 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến di chuyển đến (15, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (15, 6) (Spot #9 (thương hiệu=1, tọa độ=(15, 6))) | 67 |
| 31-32 | Di chuyển hướng 3 (`3`) | (15, 5) | (15, 6) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (15, 6) | 67 |
| 33-52 | Chờ 20 bước (`-20`) | (15, 6) | (15, 6) | Dự kiến đứng yên tại (15, 6); điểm hẹn của xe tuần tra #3 tại (15, 6) | 67 |

