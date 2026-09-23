# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 51
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 9) (ô=212)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(17, 17))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(17, 17))
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 5, 4, 0, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 2, 2, 2, -1, 3, 2, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến di chuyển đến (4, 9); hướng tới tọa độ (0, 12) (Spot #0 (thương hiệu=0, tọa độ=(0, 12))) | 22 |
| 2-3 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (0, 12) (Spot #0 (thương hiệu=0, tọa độ=(0, 12))) | 21 |
| 4-5 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (0, 12) (Spot #0 (thương hiệu=0, tọa độ=(0, 12))) | 20 |
| 6-7 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến di chuyển đến (2, 11); hướng tới tọa độ (0, 12) (Spot #0 (thương hiệu=0, tọa độ=(0, 12))) | 19 |
| 8-9 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (0, 12) (Spot #0 (thương hiệu=0, tọa độ=(0, 12))) | 18 |
| 10-11 | Di chuyển hướng 4 (`4`) | (1, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 12)) | 17 |
| 12-13 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến di chuyển đến (0, 11); hướng tới tọa độ (0, 10) (Spot #8 (thương hiệu=8, tọa độ=(0, 10))) | 16 |
| 14-15 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(0, 10)) | 15 |
| 16-17 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 14 |
| 18-19 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 13 |
| 20-21 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 12 |
| 22-23 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 11 |
| 24-25 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến di chuyển đến (5, 11); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 10 |
| 26-27 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến di chuyển đến (5, 12); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 9 |
| 28-30 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 7 |
| 31 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 5 |
| 32-33 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (10, 15) (Spot #22 (thương hiệu=22, tọa độ=(10, 15))) | 4 |
| 34-35 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (10, 15) (Spot #22 (thương hiệu=22, tọa độ=(10, 15))) | 3 |
| 36-37 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (10, 15) (Spot #22 (thương hiệu=22, tọa độ=(10, 15))) | 2 |
| 38-39 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 56 |
| 40 | Chờ 1 bước (`-1`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); hướng tới tọa độ (10, 15) | 56 |
| 41-42 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (13, 16) (Spot #5 (thương hiệu=5, tọa độ=(13, 16))) | 55 |
| 43-44 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (13, 16) (Spot #5 (thương hiệu=5, tọa độ=(13, 16))) | 54 |
| 45 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (13, 16) (Spot #5 (thương hiệu=5, tọa độ=(13, 16))) | 52 |
| 46-47 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 51 |
| 48-49 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (17, 17) (Spot #7 (thương hiệu=7, tọa độ=(17, 17))) | 50 |
| 50 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới tọa độ (17, 17) (Spot #7 (thương hiệu=7, tọa độ=(17, 17))) | 48 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 8) (ô=200)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(8, 4))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(8, 4))
- Mảng hành động đã gửi server: `[1, 1, 1, 5, 4, 5, 5, 4, 5, 2, 3, 2, 2, 3, 2, 2, 2, 3, 3, 0, 0, 0, 1, 1, 0, 0, 1, 4, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến di chuyển đến (17, 7); hướng tới tọa độ (18, 5) (Spot #4 (thương hiệu=4, tọa độ=(18, 5))) | 55 |
| 2 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến di chuyển đến (17, 6); hướng tới tọa độ (18, 5) (Spot #4 (thương hiệu=4, tọa độ=(18, 5))) | 53 |
| 3-4 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(18, 5)) | 52 |
| 5-6 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến di chuyển đến (17, 5); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=9, tọa độ=(15, 6))) | 51 |
| 7-8 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến di chuyển đến (16, 6); hướng tới tọa độ (15, 6) (Spot #9 (thương hiệu=9, tọa độ=(15, 6))) | 50 |
| 9-10 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 6)) | 49 |
| 11-12 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (13, 7) (Spot #25 (thương hiệu=25, tọa độ=(13, 7))) | 48 |
| 13-14 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (13, 7) (Spot #25 (thương hiệu=25, tọa độ=(13, 7))) | 47 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(13, 7)) | 46 |
| 17-18 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (21, 11) (Spot #23 (thương hiệu=23, tọa độ=(21, 11))) | 45 |
| 19-20 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (21, 11) (Spot #23 (thương hiệu=23, tọa độ=(21, 11))) | 44 |
| 21-22 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới tọa độ (21, 11) (Spot #23 (thương hiệu=23, tọa độ=(21, 11))) | 43 |
| 23 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (21, 11) (Spot #23 (thương hiệu=23, tọa độ=(21, 11))) | 41 |
| 24-25 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến di chuyển đến (17, 9); hướng tới tọa độ (21, 11) (Spot #23 (thương hiệu=23, tọa độ=(21, 11))) | 40 |
| 26 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới tọa độ (21, 11) (Spot #23 (thương hiệu=23, tọa độ=(21, 11))) | 38 |
| 27 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (21, 11) (Spot #23 (thương hiệu=23, tọa độ=(21, 11))) | 36 |
| 28 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến di chuyển đến (20, 9); hướng tới tọa độ (21, 11) (Spot #23 (thương hiệu=23, tọa độ=(21, 11))) | 34 |
| 29 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến di chuyển đến (20, 10); hướng tới tọa độ (21, 11) (Spot #23 (thương hiệu=23, tọa độ=(21, 11))) | 32 |
| 30-31 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 11)) | 31 |
| 32-33 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến di chuyển đến (20, 10); hướng tới tọa độ (20, 3) (Spot #14 (thương hiệu=14, tọa độ=(20, 3))) | 30 |
| 34-35 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến di chuyển đến (20, 9); hướng tới tọa độ (20, 3) (Spot #14 (thương hiệu=14, tọa độ=(20, 3))) | 29 |
| 36 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến di chuyển đến (19, 8); hướng tới tọa độ (20, 3) (Spot #14 (thương hiệu=14, tọa độ=(20, 3))) | 27 |
| 37 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến di chuyển đến (20, 7); hướng tới tọa độ (20, 3) (Spot #14 (thương hiệu=14, tọa độ=(20, 3))) | 25 |
| 38 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến di chuyển đến (20, 6); hướng tới tọa độ (20, 3) (Spot #14 (thương hiệu=14, tọa độ=(20, 3))) | 23 |
| 39-40 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến di chuyển đến (20, 5); hướng tới tọa độ (20, 3) (Spot #14 (thương hiệu=14, tọa độ=(20, 3))) | 22 |
| 41-42 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (20, 3) (Spot #14 (thương hiệu=14, tọa độ=(20, 3))) | 21 |
| 43-44 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 3)) | 20 |
| 45-46 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến di chuyển đến (19, 4); hướng tới tọa độ (8, 4) (Spot #6 (thương hiệu=6, tọa độ=(8, 4))) | 19 |
| 47-48 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến di chuyển đến (18, 4); hướng tới tọa độ (8, 4) (Spot #6 (thương hiệu=6, tọa độ=(8, 4))) | 18 |
| 49-50 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến di chuyển đến (17, 4); hướng tới tọa độ (8, 4) (Spot #6 (thương hiệu=6, tọa độ=(8, 4))) | 17 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 24) (ô=560)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(14, 0))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(14, 0))
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 24) | (9, 23) | Dự kiến di chuyển đến (9, 23); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 34 |
| 2 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 32 |
| 3-4 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến di chuyển đến (8, 21); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 31 |
| 5-6 | Di chuyển hướng 0 (`0`) | (8, 21) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 30 |
| 7-8 | Di chuyển hướng 0 (`0`) | (7, 20) | (7, 19) | Dự kiến di chuyển đến (7, 19); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 29 |
| 9-10 | Di chuyển hướng 0 (`0`) | (7, 19) | (6, 18) | Dự kiến di chuyển đến (6, 18); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 28 |
| 11-12 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 27 |
| 13-14 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 26 |
| 15-16 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 25 |
| 17 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 23 |
| 18-19 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 22 |
| 20 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 20 |
| 21 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 18 |
| 22-23 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 56 |
| 24 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 54 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 53 |
| 27-28 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 52 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 51 |
| 31-32 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 50 |
| 33-34 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 49 |
| 35-36 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 48 |
| 37 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến di chuyển đến (12, 3); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 46 |
| 38 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến di chuyển đến (12, 2); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 44 |
| 39-41 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 42 |
| 42 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến di chuyển đến (13, 0); hướng tới tọa độ (14, 0) (Spot #2 (thương hiệu=2, tọa độ=(14, 0))) | 40 |
| 43-44 | Di chuyển hướng 2 (`2`) | (13, 0) | (14, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 0)) | 39 |
| 45-50 | Chờ 6 bước (`-6`) | (14, 0) | (14, 0) | Dự kiến đứng yên tại (14, 0); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 0)) | 39 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(7, 25))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(7, 25))
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 2, 2, 2, 2, 2, 3, 4, 4, 5, 2, 3, 3, 4, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, 4, -1, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến di chuyển đến (1, 1); hướng tới tọa độ (7, 3) (Spot #1 (thương hiệu=1, tọa độ=(7, 3))) | 41 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến di chuyển đến (1, 2); hướng tới tọa độ (7, 3) (Spot #1 (thương hiệu=1, tọa độ=(7, 3))) | 40 |
| 4-5 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới tọa độ (7, 3) (Spot #1 (thương hiệu=1, tọa độ=(7, 3))) | 39 |
| 6-7 | Di chuyển hướng 2 (`2`) | (2, 3) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (7, 3) (Spot #1 (thương hiệu=1, tọa độ=(7, 3))) | 38 |
| 8 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (7, 3) (Spot #1 (thương hiệu=1, tọa độ=(7, 3))) | 36 |
| 9-10 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (7, 3) (Spot #1 (thương hiệu=1, tọa độ=(7, 3))) | 35 |
| 11-12 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (7, 3) (Spot #1 (thương hiệu=1, tọa độ=(7, 3))) | 34 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 3)) | 33 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (8, 4) (Spot #6 (thương hiệu=6, tọa độ=(8, 4))) | 32 |
| 17 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(8, 4)) | 30 |
| 18-19 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến di chuyển đến (8, 5); hướng tới tọa độ (6, 6) (Spot #12 (thương hiệu=12, tọa độ=(6, 6))) | 29 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (6, 6) (Spot #12 (thương hiệu=12, tọa độ=(6, 6))) | 28 |
| 22 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 6)) | 26 |
| 23-24 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến di chuyển đến (7, 6); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 25 |
| 25 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 23 |
| 26-27 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 22 |
| 28-29 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 21 |
| 30-31 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 20 |
| 32 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 18 |
| 33-34 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 17 |
| 35 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 15 |
| 36 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 13 |
| 37-38 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (5, 16) (Spot #19 (thương hiệu=19, tọa độ=(5, 16))) | 12 |
| 39 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 16)) | 10 |
| 40-41 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới tọa độ (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 9 |
| 42-43 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới tọa độ (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 8 |
| 44-45 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới tọa độ (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 7 |
| 46-47 | Di chuyển hướng 4 (`4`) | (4, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 20)) | 56 |
| 48 | Chờ 1 bước (`-1`) | (3, 20) | (3, 20) | Dự kiến đứng yên tại (3, 20); hướng tới tọa độ (3, 20) | 56 |
| 49-50 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến di chuyển đến (4, 21); hướng tới tọa độ (7, 25) (Spot #17 (thương hiệu=17, tọa độ=(7, 25))) | 55 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 16) (ô=378)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(7, 25))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(7, 25))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 0, 0, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 5, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến di chuyển đến (10, 15); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 56 |
| 2-3 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 54 |
| 6-7 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 53 |
| 8-9 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 52 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 51 |
| 12 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 49 |
| 13 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 47 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 46 |
| 16 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (8, 8) (Spot #3 (thương hiệu=3, tọa độ=(8, 8))) | 44 |
| 17-18 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 8)) | 43 |
| 19-20 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 55 |
| 21-22 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 55 |
| 23 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 53 |
| 24-25 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 55 |
| 26 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 53 |
| 27 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến di chuyển đến (6, 14); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 51 |
| 28-29 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 50 |
| 30 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 48 |
| 31-32 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến di chuyển đến (6, 17); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 55 |
| 33-34 | Di chuyển hướng 3 (`3`) | (6, 17) | (6, 18) | Dự kiến di chuyển đến (6, 18); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 54 |
| 35-36 | Di chuyển hướng 3 (`3`) | (6, 18) | (7, 19) | Dự kiến di chuyển đến (7, 19); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 53 |
| 37-38 | Di chuyển hướng 3 (`3`) | (7, 19) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 52 |
| 39-40 | Di chuyển hướng 3 (`3`) | (7, 20) | (8, 21) | Dự kiến di chuyển đến (8, 21); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 51 |
| 41-42 | Di chuyển hướng 3 (`3`) | (8, 21) | (8, 22) | Dự kiến di chuyển đến (8, 22); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 50 |
| 43-44 | Di chuyển hướng 3 (`3`) | (8, 22) | (9, 23) | Dự kiến di chuyển đến (9, 23); hướng tới tọa độ (9, 24) (Spot #21 (thương hiệu=21, tọa độ=(9, 24))) | 49 |
| 45 | Di chuyển hướng 3 (`3`) | (9, 23) | (9, 24) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 24)) | 47 |
| 46-47 | Di chuyển hướng 5 (`5`) | (9, 24) | (8, 24) | Dự kiến di chuyển đến (8, 24); hướng tới tọa độ (7, 25) (Spot #17 (thương hiệu=17, tọa độ=(7, 25))) | 46 |
| 48-49 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến di chuyển đến (7, 24); hướng tới tọa độ (7, 25) (Spot #17 (thương hiệu=17, tọa độ=(7, 25))) | 45 |
| 50 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 25)) | 43 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (10, 16) (ô=378)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(6, 14))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(6, 14))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 3, 2, 3, 2, 3, 5, 5, 5, 5, 4, 5, 0, 0, 0, 5, 0, 5, 0, 5, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (13, 16) (Spot #5 (thương hiệu=5, tọa độ=(13, 16))) | 55 |
| 2 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến di chuyển đến (12, 16); hướng tới tọa độ (13, 16) (Spot #5 (thương hiệu=5, tọa độ=(13, 16))) | 53 |
| 3-4 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(13, 16)) | 52 |
| 5-6 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến di chuyển đến (14, 16); hướng tới tọa độ (17, 17) (Spot #7 (thương hiệu=7, tọa độ=(17, 17))) | 51 |
| 7 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến di chuyển đến (15, 16); hướng tới tọa độ (17, 17) (Spot #7 (thương hiệu=7, tọa độ=(17, 17))) | 49 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến di chuyển đến (16, 16); hướng tới tọa độ (17, 17) (Spot #7 (thương hiệu=7, tọa độ=(17, 17))) | 48 |
| 10-11 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 17)) | 47 |
| 12-13 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến di chuyển đến (18, 17); hướng tới tọa độ (19, 18) (Spot #16 (thương hiệu=16, tọa độ=(19, 18))) | 46 |
| 14 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến di chuyển đến (18, 18); hướng tới tọa độ (19, 18) (Spot #16 (thương hiệu=16, tọa độ=(19, 18))) | 44 |
| 15-16 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 18)) | 43 |
| 17-18 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 19)) | 42 |
| 19-20 | Di chuyển hướng 5 (`5`) | (20, 19) | (19, 19) | Dự kiến di chuyển đến (19, 19); hướng tới tọa độ (15, 20) (Spot #24 (thương hiệu=24, tọa độ=(15, 20))) | 41 |
| 21-22 | Di chuyển hướng 5 (`5`) | (19, 19) | (18, 19) | Dự kiến di chuyển đến (18, 19); hướng tới tọa độ (15, 20) (Spot #24 (thương hiệu=24, tọa độ=(15, 20))) | 40 |
| 23 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến di chuyển đến (17, 19); hướng tới tọa độ (15, 20) (Spot #24 (thương hiệu=24, tọa độ=(15, 20))) | 38 |
| 24-25 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến di chuyển đến (16, 19); hướng tới tọa độ (15, 20) (Spot #24 (thương hiệu=24, tọa độ=(15, 20))) | 37 |
| 26-27 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(15, 20)) | 36 |
| 28-29 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến di chuyển đến (14, 20); hướng tới tọa độ (10, 15) (Spot #22 (thương hiệu=22, tọa độ=(10, 15))) | 35 |
| 30-31 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến di chuyển đến (14, 19); hướng tới tọa độ (10, 15) (Spot #22 (thương hiệu=22, tọa độ=(10, 15))) | 34 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến di chuyển đến (13, 18); hướng tới tọa độ (10, 15) (Spot #22 (thương hiệu=22, tọa độ=(10, 15))) | 33 |
| 34-35 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến di chuyển đến (13, 17); hướng tới tọa độ (10, 15) (Spot #22 (thương hiệu=22, tọa độ=(10, 15))) | 32 |
| 36-37 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến di chuyển đến (12, 17); hướng tới tọa độ (10, 15) (Spot #22 (thương hiệu=22, tọa độ=(10, 15))) | 31 |
| 38-39 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến di chuyển đến (11, 16); hướng tới tọa độ (10, 15) (Spot #22 (thương hiệu=22, tọa độ=(10, 15))) | 30 |
| 40 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến di chuyển đến (10, 16); hướng tới tọa độ (10, 15) (Spot #22 (thương hiệu=22, tọa độ=(10, 15))) | 28 |
| 41-42 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 15)) | 56 |
| 43-44 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 55 |
| 45-46 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 54 |
| 47-48 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (6, 14) (Spot #10 (thương hiệu=10, tọa độ=(6, 14))) | 53 |
| 49-50 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 14)) | 52 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (10, 16) (ô=378)
- Nhiên liệu đầu ngày: 56
- Vai trò: Hỗ trợ xe tuần tra #0
- Điểm hẹn của xe tuần tra: Spot #22 (thương hiệu=22, tọa độ=(10, 15))
- Mảng hành động đã gửi server: `[0, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn của xe tuần tra #0 tại (10, 15) | 56 |
| 2-50 | Chờ 49 bước (`-49`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); điểm hẹn của xe tuần tra #0 tại (10, 15) | 56 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (16, 8) (ô=200)
- Nhiên liệu đầu ngày: 56
- Vai trò: Hỗ trợ xe tuần tra #3
- Điểm hẹn của xe tuần tra: Spot #13 (thương hiệu=13, tọa độ=(3, 20))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 5, 5, 0, 5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, 4, 4, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 2 | Di chuyển hướng 0 (`0`) | (15, 8) | (15, 7) | Dự kiến di chuyển đến (15, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 3-4 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 5-6 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 7-8 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 9 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 10 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 11 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 12-13 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 14-15 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến di chuyển đến (9, 6); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 16-17 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến di chuyển đến (9, 7); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 18-19 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến di chuyển đến (8, 9); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 22-23 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 24 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến di chuyển đến (7, 11); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 25-26 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến di chuyển đến (6, 12); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 27 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 28 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 29-30 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 31 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến di chuyển đến (5, 16); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 32-33 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến di chuyển đến (5, 17); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 34-35 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến di chuyển đến (4, 18); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 36-37 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến di chuyển đến (4, 19); hướng tới điểm hẹn của xe tuần tra #3 tại (3, 20) (Spot #13 (thương hiệu=13, tọa độ=(3, 20))) | 56 |
| 38-39 | Di chuyển hướng 4 (`4`) | (4, 19) | (3, 20) | Dự kiến đến điểm hẹn của xe tuần tra #3 tại (3, 20) | 56 |
| 40-50 | Chờ 11 bước (`-11`) | (3, 20) | (3, 20) | Dự kiến đứng yên tại (3, 20); điểm hẹn của xe tuần tra #3 tại (3, 20) | 56 |

