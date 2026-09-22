# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 51
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 15) (ô=411)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 5, 0, 5, 0, 5, 0, 0, 5, 0, 1, 2, 1, 0, 5, 0, 1, 0, 1, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (21, 15) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 41 |
| 3 | Di chuyển hướng 5 (`5`) | (20, 15) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 39 |
| 4 | Di chuyển hướng 5 (`5`) | (19, 15) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 37 |
| 5-7 | Di chuyển hướng 5 (`5`) | (18, 15) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 35 |
| 8-10 | Di chuyển hướng 5 (`5`) | (17, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 33 |
| 11 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 31 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 30 |
| 14-16 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 28 |
| 17-19 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 26 |
| 20 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 24 |
| 21-22 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 23-24 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 50 |
| 25 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 48 |
| 26 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 46 |
| 27-28 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 45 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 44 |
| 31 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 42 |
| 32 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 40 |
| 33-35 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 38 |
| 36-37 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 37 |
| 38 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 35 |
| 39-41 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 4)) | 33 |
| 42-43 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 32 |
| 44-45 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 31 |
| 46-50 | Chờ 5 bước (`-5`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 31 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 17) (ô=450)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(1, 7))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(1, 7))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 0, 1, 1, 1, 0, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 26 |
| 2-3 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 25 |
| 4 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 23 |
| 5-7 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 21 |
| 8 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 19 |
| 9 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 17 |
| 10-11 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 16 |
| 12-14 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 14 |
| 15-16 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 13 |
| 17-19 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 11 |
| 20-21 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 10 |
| 22-24 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 8 |
| 25-26 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 7 |
| 27-28 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 6 |
| 29-31 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 4 |
| 32-50 | Chờ 19 bước (`-19`) | (1, 7) | (1, 7) | Dự kiến đứng yên tại (1, 7); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 5) (ô=150)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 13)
- Mảng hành động đã gửi server: `[4, 5, 5, 4, 4, 5, 5, 4, 4, 4, 5, 5, 5, 4, 4, 4, 4, 5, 5, 5, 4, 5, 5, 5, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 51 |
| 3 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 51 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 51 |
| 6 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 51 |
| 7-8 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 51 |
| 9-11 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 51 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 14 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 51 |
| 15-17 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 51 |
| 18 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 51 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 51 |
| 21-22 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 50 |
| 23 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 48 |
| 24-25 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 47 |
| 26 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 45 |
| 27-28 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 50 |
| 29 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 48 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 47 |
| 32 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 45 |
| 33-35 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 43 |
| 36-37 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 42 |
| 38 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 40 |
| 39-41 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 38 |
| 42-44 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 36 |
| 45-46 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 35 |
| 47 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 33 |
| 48-49 | Di chuyển hướng 0 (`0`) | (1, 14) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 51 |
| 50 | Chờ 1 bước (`-1`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); hướng tới tọa độ (1, 13) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 6) (ô=161)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(21, 16))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(21, 16))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 3, 1, 2, 3, 2, 3, 4, 4, -1, 2, 3, 2, 3, 2, 2, 2, 2, 3, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 19 |
| 3-4 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 18 |
| 5 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 16 |
| 6-7 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 15 |
| 8-10 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 13 |
| 11-12 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 12 |
| 13 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 10 |
| 14 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 8 |
| 15-16 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 7 |
| 17-18 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 6 |
| 19-21 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 51 |
| 22-23 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 24 | Chờ 1 bước (`-1`) | (11, 12) | (11, 12) | Dự kiến đứng yên tại (11, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 25-26 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 50 |
| 27-28 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 49 |
| 29 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 47 |
| 30-32 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 45 |
| 33-35 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 43 |
| 36-37 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 14)) | 42 |
| 38-39 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 41 |
| 40-42 | Di chuyển hướng 2 (`2`) | (17, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 39 |
| 43-45 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 37 |
| 46 | Di chuyển hướng 2 (`2`) | (19, 15) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 35 |
| 47 | Di chuyển hướng 2 (`2`) | (20, 15) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 33 |
| 48-50 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(21, 16)) | 31 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (19, 14) (ô=383)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(4, 6))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(4, 6))
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 0, 5, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, 4, 4, 5, 4, 4, 4, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (19, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 48 |
| 3-4 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 47 |
| 5 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 45 |
| 6 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 43 |
| 7-9 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 41 |
| 10-11 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 40 |
| 12-13 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 39 |
| 14-15 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 38 |
| 16 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 36 |
| 17 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 34 |
| 18-19 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 33 |
| 20-22 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 31 |
| 23-24 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 30 |
| 25-26 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 29 |
| 27 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 27 |
| 28-29 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 26 |
| 30-31 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 25 |
| 32-34 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 23 |
| 35-36 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 22 |
| 37 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 20 |
| 38-39 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 19 |
| 40-41 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 18 |
| 42-44 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 16 |
| 45 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 14 |
| 46-47 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 13 |
| 48-50 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 11 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 2)
- Mảng hành động đã gửi server: `[2, 3, 2, 5, 5, -32, 2, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 5 |
| 2-3 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 4 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 3 |
| 6-7 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 2 |
| 8-9 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 1 |
| 10-41 | Chờ 32 bước (`-32`) | (2, 1) | (2, 1) | Dự kiến đứng yên tại (2, 1); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 51 |
| 42-43 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 50 |
| 44-45 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 49 |
| 46-47 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 48 |
| 48-50 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 46 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (20, 5) (ô=150)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 13)
- Mảng hành động đã gửi server: `[4, 5, 5, 4, 4, 5, 5, 4, 4, 4, 5, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 51 |
| 3 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 51 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 51 |
| 6 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 51 |
| 7-8 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 51 |
| 9-11 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 51 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 14 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 51 |
| 15-17 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 51 |
| 18 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 51 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 51 |
| 21-22 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 23-24 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 51 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 51 |
| 27 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 28-29 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 51 |
| 32-34 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 35 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 51 |
| 36-37 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 51 |
| 38-40 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 51 |
| 41-42 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 51 |
| 43-45 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 51 |
| 46-50 | Chờ 5 bước (`-5`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); hướng tới tọa độ (1, 13) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (19, 13) (ô=357)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(2, 1))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(2, 1))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 5, 0, 0, 0, 5, 0, 0, 0, 0, 5, 5, 5, 5, 0, 5, 0, 5, 5, 5, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 51 |
| 2 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 51 |
| 3 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 51 |
| 4-6 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 51 |
| 7-8 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 9-10 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 51 |
| 11-12 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 13 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 51 |
| 14 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 51 |
| 15 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 51 |
| 16-17 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 51 |
| 18-19 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 20-21 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 22 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 51 |
| 23 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 24-25 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 51 |
| 26-28 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 51 |
| 29-30 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 51 |
| 31-32 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 51 |
| 33 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 51 |
| 34-36 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 51 |
| 37-38 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 51 |
| 39-40 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 51 |
| 41-50 | Chờ 10 bước (`-10`) | (2, 1) | (2, 1) | Dự kiến đứng yên tại (2, 1); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 51 |

