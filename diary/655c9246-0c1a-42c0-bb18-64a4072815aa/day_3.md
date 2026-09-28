# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 56
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 4 | #1 | #4 | (10, 9) | 57 | 59 |
| 6 | #1 | #4 | (11, 9) | 57 | 59 |
| 14 | #0 | #4 | (13, 13) | 48 | 59 |
| 41 | #1 | #4 | (13, 13) | 34 | 59 |
| 41 | #2 | #4 | (13, 13) | 0 | 59 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 9) (ô=190)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(3, 14))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(3, 14))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 4, 4, 4, 0, 0, 0, 1, 0, 5, 4, 5, 5, 5, 5, 5, 5, 0, 5, 5, 4, 4, 2, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 54 |
| 4-5 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 53 |
| 6 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 51 |
| 7-8 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 11)) | 50 |
| 9-10 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 49 |
| 11-12 | Di chuyển hướng 4 (`4`) | (13, 12) | (13, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 13)) | 48 |
| 13-14 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 14)) | 58 |
| 15-16 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến di chuyển đến (12, 13); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 57 |
| 17-19 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến di chuyển đến (11, 12); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 55 |
| 20 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến di chuyển đến (11, 11); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 53 |
| 21-22 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến di chuyển đến (11, 10); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 52 |
| 23 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 50 |
| 24-25 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 49 |
| 26-27 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 47 |
| 28-29 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến di chuyển đến (8, 10); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 46 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến di chuyển đến (7, 10); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 45 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến di chuyển đến (6, 10); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 44 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến di chuyển đến (5, 10); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 43 |
| 36-37 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến di chuyển đến (4, 10); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 42 |
| 38 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến di chuyển đến (3, 10); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 40 |
| 39-40 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến di chuyển đến (3, 9); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 39 |
| 41-42 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (1, 9) (Spot #9 (thương hiệu=9, tọa độ=(1, 9))) | 38 |
| 43 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 9)) | 36 |
| 44-45 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (0, 11) (Spot #7 (thương hiệu=7, tọa độ=(0, 11))) | 35 |
| 46-47 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 11)) | 34 |
| 48-49 | Di chuyển hướng 2 (`2`) | (0, 11) | (1, 11) | Dự kiến di chuyển đến (1, 11); hướng tới tọa độ (3, 14) (Spot #12 (thương hiệu=12, tọa độ=(3, 14))) | 33 |
| 50-51 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (3, 14) (Spot #12 (thương hiệu=12, tọa độ=(3, 14))) | 32 |
| 52 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến di chuyển đến (2, 13); hướng tới tọa độ (3, 14) (Spot #12 (thương hiệu=12, tọa độ=(3, 14))) | 30 |
| 53-54 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến di chuyển đến (2, 14); hướng tới tọa độ (3, 14) (Spot #12 (thương hiệu=12, tọa độ=(3, 14))) | 29 |
| 55 | Chờ 1 bước (`-1`) | (2, 14) | (2, 14) | Dự kiến đứng yên tại (2, 14); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 14)) | 29 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 9) (ô=189)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(6, 7))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(6, 7))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 3, 2, 3, 2, 2, 2, 2, 4, 4, 5, 4, 5, 5, 0, 5, 5, 1, 2, 3, 2, 2, 3, 2, 2, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 59 |
| 4-5 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 59 |
| 6-7 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến di chuyển đến (12, 9); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 58 |
| 8-9 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến di chuyển đến (13, 9); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 57 |
| 10 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến di chuyển đến (13, 10); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 55 |
| 11-12 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến di chuyển đến (14, 11); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 54 |
| 13-14 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến di chuyển đến (15, 11); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 53 |
| 15 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến di chuyển đến (15, 12); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 51 |
| 16 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến di chuyển đến (16, 12); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 49 |
| 17 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến di chuyển đến (17, 12); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 47 |
| 18-19 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến di chuyển đến (18, 12); hướng tới tọa độ (19, 12) (Spot #2 (thương hiệu=2, tọa độ=(19, 12))) | 46 |
| 20-21 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 12)) | 45 |
| 22-23 | Di chuyển hướng 4 (`4`) | (19, 12) | (19, 13) | Dự kiến di chuyển đến (19, 13); hướng tới tọa độ (15, 15) (Spot #6 (thương hiệu=6, tọa độ=(15, 15))) | 44 |
| 24-25 | Di chuyển hướng 4 (`4`) | (19, 13) | (18, 14) | Dự kiến di chuyển đến (18, 14); hướng tới tọa độ (15, 15) (Spot #6 (thương hiệu=6, tọa độ=(15, 15))) | 43 |
| 26-27 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến di chuyển đến (17, 14); hướng tới tọa độ (15, 15) (Spot #6 (thương hiệu=6, tọa độ=(15, 15))) | 42 |
| 28-29 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới tọa độ (15, 15) (Spot #6 (thương hiệu=6, tọa độ=(15, 15))) | 41 |
| 30 | Di chuyển hướng 5 (`5`) | (17, 15) | (16, 15) | Dự kiến di chuyển đến (16, 15); hướng tới tọa độ (15, 15) (Spot #6 (thương hiệu=6, tọa độ=(15, 15))) | 39 |
| 31-32 | Di chuyển hướng 5 (`5`) | (16, 15) | (15, 15) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 15)) | 38 |
| 33-34 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (12, 14) (Spot #8 (thương hiệu=8, tọa độ=(12, 14))) | 37 |
| 35-36 | Di chuyển hướng 5 (`5`) | (14, 14) | (13, 14) | Dự kiến di chuyển đến (13, 14); hướng tới tọa độ (12, 14) (Spot #8 (thương hiệu=8, tọa độ=(12, 14))) | 36 |
| 37-38 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 14)) | 35 |
| 39-40 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 13)) | 59 |
| 41-42 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (19, 15) (Spot #1 (thương hiệu=1, tọa độ=(19, 15))) | 58 |
| 43-44 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (19, 15) (Spot #1 (thương hiệu=1, tọa độ=(19, 15))) | 57 |
| 45-46 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến di chuyển đến (15, 14); hướng tới tọa độ (19, 15) (Spot #1 (thương hiệu=1, tọa độ=(19, 15))) | 56 |
| 47-48 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến di chuyển đến (16, 14); hướng tới tọa độ (19, 15) (Spot #1 (thương hiệu=1, tọa độ=(19, 15))) | 55 |
| 49-50 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến di chuyển đến (17, 15); hướng tới tọa độ (19, 15) (Spot #1 (thương hiệu=1, tọa độ=(19, 15))) | 54 |
| 51 | Di chuyển hướng 2 (`2`) | (17, 15) | (18, 15) | Dự kiến di chuyển đến (18, 15); hướng tới tọa độ (19, 15) (Spot #1 (thương hiệu=1, tọa độ=(19, 15))) | 52 |
| 52-53 | Di chuyển hướng 2 (`2`) | (18, 15) | (19, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 15)) | 51 |
| 54-55 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến di chuyển đến (18, 14); hướng tới tọa độ (6, 7) (Spot #5 (thương hiệu=5, tọa độ=(6, 7))) | 50 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 11) (ô=221)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(6, 7))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(6, 7))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 3, 2, 3, 5, 5, 5, 1, 2, 2, 2, 2, 1, 1, 1, 1, 2, 3, 3, 3, 3, -1, 1, 1, 4, 3, 3, 3, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến di chuyển đến (1, 12); hướng tới tọa độ (6, 14) (Spot #16 (thương hiệu=3, tọa độ=(6, 14))) | 35 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến di chuyển đến (2, 12); hướng tới tọa độ (6, 14) (Spot #16 (thương hiệu=3, tọa độ=(6, 14))) | 33 |
| 3-4 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (6, 14) (Spot #16 (thương hiệu=3, tọa độ=(6, 14))) | 32 |
| 5-6 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến di chuyển đến (4, 12); hướng tới tọa độ (6, 14) (Spot #16 (thương hiệu=3, tọa độ=(6, 14))) | 31 |
| 7 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (6, 14) (Spot #16 (thương hiệu=3, tọa độ=(6, 14))) | 29 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (6, 14) (Spot #16 (thương hiệu=3, tọa độ=(6, 14))) | 27 |
| 9-10 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(6, 14)) | 26 |
| 11-12 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến di chuyển đến (5, 14); hướng tới tọa độ (3, 14) (Spot #12 (thương hiệu=12, tọa độ=(3, 14))) | 25 |
| 13-15 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (3, 14) (Spot #12 (thương hiệu=12, tọa độ=(3, 14))) | 23 |
| 16-17 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(3, 14)) | 22 |
| 18-19 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 21 |
| 20 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến di chuyển đến (5, 13); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 19 |
| 21 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến di chuyển đến (6, 13); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 17 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến di chuyển đến (7, 13); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 16 |
| 24 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến di chuyển đến (8, 13); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 14 |
| 25 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến di chuyển đến (8, 12); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 12 |
| 26 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến di chuyển đến (9, 11); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 10 |
| 27-28 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến di chuyển đến (9, 10); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 9 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới tọa độ (11, 9) (Spot #10 (thương hiệu=10, tọa độ=(11, 9))) | 8 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 9)) | 6 |
| 33-34 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến di chuyển đến (11, 10); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 5 |
| 35 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 3 |
| 36-38 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới tọa độ (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 1 |
| 39-40 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 13)) | 59 |
| 41 | Chờ 1 bước (`-1`) | (13, 13) | (13, 13) | Dự kiến đứng yên tại (13, 13); hướng tới tọa độ (13, 13) | 59 |
| 42-43 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (14, 11) (Spot #14 (thương hiệu=1, tọa độ=(14, 11))) | 58 |
| 44-45 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(14, 11)) | 57 |
| 46-47 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến di chuyển đến (13, 12); hướng tới tọa độ (15, 15) (Spot #6 (thương hiệu=6, tọa độ=(15, 15))) | 56 |
| 48-49 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến di chuyển đến (14, 13); hướng tới tọa độ (15, 15) (Spot #6 (thương hiệu=6, tọa độ=(15, 15))) | 55 |
| 50-51 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (15, 15) (Spot #6 (thương hiệu=6, tọa độ=(15, 15))) | 54 |
| 52-53 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 15)) | 53 |
| 54-55 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến di chuyển đến (14, 14); hướng tới tọa độ (6, 7) (Spot #5 (thương hiệu=5, tọa độ=(6, 7))) | 52 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 7) (ô=146)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=2, tọa độ=(18, 1))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=2, tọa độ=(18, 1))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 0, 0, 0, 5, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 3, 2, 2, 1, 2, 0, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến di chuyển đến (5, 7); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 51 |
| 2 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến di chuyển đến (4, 7); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 49 |
| 3-4 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến di chuyển đến (3, 7); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 48 |
| 5-6 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến di chuyển đến (2, 6); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 47 |
| 7 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến di chuyển đến (2, 5); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 45 |
| 8-9 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến di chuyển đến (1, 4); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 44 |
| 10-11 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (0, 3) (Spot #13 (thương hiệu=0, tọa độ=(0, 3))) | 43 |
| 12-13 | Di chuyển hướng 5 (`5`) | (1, 3) | (0, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(0, 3)) | 42 |
| 14-15 | Di chuyển hướng 2 (`2`) | (0, 3) | (1, 3) | Dự kiến di chuyển đến (1, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 41 |
| 16-17 | Di chuyển hướng 2 (`2`) | (1, 3) | (2, 3) | Dự kiến di chuyển đến (2, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 40 |
| 18-19 | Di chuyển hướng 2 (`2`) | (2, 3) | (3, 3) | Dự kiến di chuyển đến (3, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 39 |
| 20 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến di chuyển đến (4, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 37 |
| 21-22 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến di chuyển đến (5, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 36 |
| 23-25 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến di chuyển đến (6, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 34 |
| 26-27 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến di chuyển đến (7, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 33 |
| 28-29 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 32 |
| 30 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến di chuyển đến (9, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 30 |
| 31-32 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 29 |
| 33 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến di chuyển đến (11, 3); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 27 |
| 34-35 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến di chuyển đến (11, 4); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 26 |
| 36-37 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến di chuyển đến (12, 5); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 25 |
| 38-39 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 24 |
| 40-41 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 23 |
| 42-43 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến di chuyển đến (14, 6); hướng tới tọa độ (15, 6) (Spot #3 (thương hiệu=3, tọa độ=(15, 6))) | 22 |
| 44 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(15, 6)) | 20 |
| 45-46 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến di chuyển đến (16, 5); hướng tới tọa độ (17, 5) (Spot #4 (thương hiệu=4, tọa độ=(17, 5))) | 19 |
| 47 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 5)) | 17 |
| 48-49 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến di chuyển đến (16, 4); hướng tới tọa độ (18, 1) (Spot #15 (thương hiệu=2, tọa độ=(18, 1))) | 16 |
| 50-51 | Di chuyển hướng 1 (`1`) | (16, 4) | (17, 3) | Dự kiến di chuyển đến (17, 3); hướng tới tọa độ (18, 1) (Spot #15 (thương hiệu=2, tọa độ=(18, 1))) | 15 |
| 52 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến di chuyển đến (17, 2); hướng tới tọa độ (18, 1) (Spot #15 (thương hiệu=2, tọa độ=(18, 1))) | 13 |
| 53-54 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(18, 1)) | 12 |
| 55 | Chờ 1 bước (`-1`) | (18, 1) | (18, 1) | Dự kiến đứng yên tại (18, 1); mục tiêu Spot #15 (thương hiệu=2, tọa độ=(18, 1)) | 12 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (9, 9) (ô=189)
- Nhiên liệu đầu ngày: 59
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #11 (thương hiệu=11, tọa độ=(13, 13))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 3, 3, -42]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến di chuyển đến (10, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 59 |
| 4-5 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến di chuyển đến (11, 9); hướng tới điểm hẹn của xe tuần tra #2 tại (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 59 |
| 6-7 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến di chuyển đến (11, 10); hướng tới điểm hẹn của xe tuần tra #2 tại (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 59 |
| 8 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến di chuyển đến (12, 11); hướng tới điểm hẹn của xe tuần tra #2 tại (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 59 |
| 9-11 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến di chuyển đến (12, 12); hướng tới điểm hẹn của xe tuần tra #2 tại (13, 13) (Spot #11 (thương hiệu=11, tọa độ=(13, 13))) | 59 |
| 12-13 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (13, 13) | 59 |
| 14-55 | Chờ 42 bước (`-42`) | (13, 13) | (13, 13) | Dự kiến đứng yên tại (13, 13); điểm hẹn của xe tuần tra #2 tại (13, 13) | 59 |

