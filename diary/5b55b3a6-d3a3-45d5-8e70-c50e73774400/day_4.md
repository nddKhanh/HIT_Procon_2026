# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 49
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 9) (ô=208)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 5, 5, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 1, 1, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 38 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 36 |
| 3 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 47 |
| 4-5 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 45 |
| 6-9 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 45 |
| 10-13 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 45 |
| 14-17 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 45 |
| 18-21 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 45 |
| 22-25 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 45 |
| 26-29 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 6)) | 45 |
| 30-31 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 44 |
| 32-33 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 43 |
| 34 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 41 |
| 35-36 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 40 |
| 37-38 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 39 |
| 39-40 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 38 |
| 41 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 36 |
| 42-43 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 35 |
| 44-45 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 34 |
| 46-47 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 47 |
| 48 | Chờ 1 bước (`-1`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 47 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 5) (ô=118)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 7)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 5, 5, 5, 0, 1, 1, 3, -7, 2, 4, 4, 4, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 17 |
| 4-7 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 15 |
| 8-11 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 13 |
| 12-15 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 6)) | 11 |
| 16-17 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 10 |
| 18-20 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 8 |
| 21 | Di chuyển hướng 5 (`5`) | (2, 6) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 6 |
| 22-23 | Di chuyển hướng 5 (`5`) | (1, 6) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 5 |
| 24-25 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 4 |
| 26 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 2 |
| 27-28 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 1 |
| 29-30 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 0 |
| 31-37 | Chờ 7 bước (`-7`) | (1, 4) | (1, 4) | Dự kiến đứng yên tại (1, 4); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 47 |
| 38-39 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 47 |
| 40-41 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 46 |
| 42 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 44 |
| 43-44 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 43 |
| 45-46 | Di chuyển hướng 2 (`2`) | (1, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 42 |
| 47-48 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 41 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 16) (ô=356)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(9, 13))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(9, 13))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 1, 1, -1, 1, 0, 0, 4, 4, 3, 5, 5, 5, 5, 4, 4, 4, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 22 |
| 2 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 20 |
| 3 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 18 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 16 |
| 5 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 14 |
| 6 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 12 |
| 7-8 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 11 |
| 9 | Di chuyển hướng 2 (`2`) | (9, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 9 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 8 |
| 12-13 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 7 |
| 14-15 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 6 |
| 16 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(13, 10)) | 4 |
| 17-18 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 10)) | 3 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 2 |
| 21 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 47 |
| 22 | Chờ 1 bước (`-1`) | (15, 8) | (15, 8) | Dự kiến đứng yên tại (15, 8); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 47 |
| 23-24 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 7)) | 46 |
| 25-26 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 6)) | 45 |
| 27-28 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 44 |
| 29-30 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 43 |
| 31-32 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 42 |
| 33 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 40 |
| 34-35 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 39 |
| 36 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 37 |
| 37 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 35 |
| 38 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 33 |
| 39-40 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(10, 9)) | 31 |
| 41-42 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 30 |
| 43-44 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 29 |
| 45 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(9, 12)) | 27 |
| 46-47 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 26 |
| 48 | Chờ 1 bước (`-1`) | (9, 13) | (9, 13) | Dự kiến đứng yên tại (9, 13); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 26 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 7) (ô=168)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 15)
- Mảng hành động đã gửi server: `[3, 2, 2, 0, 0, 5, 4, 3, 3, 4, 5, 4, 5, 5, 5, 4, 4, 5, 4, 4, 3, 4, 4, 0, 0, 5, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 44 |
| 1-2 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 43 |
| 3-4 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(16, 8)) | 42 |
| 5-6 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 7)) | 41 |
| 7-8 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 6)) | 40 |
| 9-10 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 6)) | 39 |
| 11-12 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 38 |
| 13 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 36 |
| 14-15 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 35 |
| 16 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 10)) | 33 |
| 17-18 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(13, 10)) | 32 |
| 19-20 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 31 |
| 21 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 29 |
| 22-23 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 28 |
| 24-25 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 27 |
| 26-27 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(9, 12)) | 26 |
| 28-29 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 25 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 24 |
| 32-34 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 22 |
| 35-36 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 20 |
| 37-38 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 18 |
| 39 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(7, 17)) | 16 |
| 40-41 | Di chuyển hướng 4 (`4`) | (7, 17) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 15 |
| 42-43 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 14 |
| 44 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 12 |
| 45 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(4, 16)) | 47 |
| 46-47 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 46 |
| 48 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 44 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 5) (ô=120)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 5)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 0, 5, 5, 5, 4, 2, 4, 4, 3, 1, 1, 1, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 45 |
| 4-7 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 43 |
| 8-11 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 41 |
| 12-15 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 39 |
| 16-19 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 37 |
| 20-23 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 35 |
| 24-25 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 34 |
| 26-27 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 33 |
| 28 | Di chuyển hướng 5 (`5`) | (3, 3) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 31 |
| 29-30 | Di chuyển hướng 5 (`5`) | (2, 3) | (1, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 3)) | 30 |
| 31-32 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 4)) | 29 |
| 33-34 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 28 |
| 35-36 | Di chuyển hướng 4 (`4`) | (1, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 27 |
| 37-38 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 6)) | 25 |
| 39-40 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(1, 7)) | 24 |
| 41-42 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 23 |
| 43-44 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 22 |
| 45 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 47 |
| 46-47 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 46 |
| 48 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 44 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (10, 5) (ô=120)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(4, 16))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(4, 16))
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 2, 2, 2, -10, 5, 5, 5, 4, 4, 4, 5, 5, 5, 4, 4, 4, 4, 4, 5, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 47 |
| 4-5 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 47 |
| 6 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 47 |
| 7 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 47 |
| 8 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 47 |
| 9 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 47 |
| 10-11 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 47 |
| 12-21 | Chờ 10 bước (`-10`) | (15, 8) | (15, 8) | Dự kiến đứng yên tại (15, 8); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 8)) | 47 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 8)) | 47 |
| 24-25 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 47 |
| 26 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 47 |
| 27 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 47 |
| 28-29 | Di chuyển hướng 4 (`4`) | (12, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 47 |
| 30 | Di chuyển hướng 4 (`4`) | (11, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 47 |
| 31-32 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 47 |
| 33-34 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 47 |
| 35 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 47 |
| 36-37 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 47 |
| 38 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 47 |
| 39 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 47 |
| 40 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 47 |
| 41 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 47 |
| 42 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(4, 16)) | 47 |
| 43-48 | Chờ 6 bước (`-6`) | (4, 16) | (4, 16) | Dự kiến đứng yên tại (4, 16); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(4, 16)) | 47 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (14, 6) (ô=146)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 2, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 47 |
| 2 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 47 |
| 3-4 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 47 |
| 5-6 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 47 |
| 7-8 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 47 |
| 9-12 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 47 |
| 13-16 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 47 |
| 17-20 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 47 |
| 21-24 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 47 |
| 25-28 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 47 |
| 29-32 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 47 |
| 33-34 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 47 |
| 35 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 47 |
| 36 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 4)) | 47 |
| 37-38 | Di chuyển hướng 2 (`2`) | (1, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 47 |
| 39-48 | Chờ 10 bước (`-10`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(2, 4)) | 47 |

