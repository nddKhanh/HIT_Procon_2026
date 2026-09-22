# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 53
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 5) (ô=150)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 6)
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 5, 5, 5, 0, 0, 0, 0, 4, 4, 5, 4, 4, 4, 4, 5, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 49 |
| 3-5 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 47 |
| 6-7 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 46 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 45 |
| 10-12 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 43 |
| 13-15 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 51 |
| 16-17 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 51 |
| 18-19 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 51 |
| 20-21 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 50 |
| 22-23 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 48 |
| 24-25 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 47 |
| 26-27 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 46 |
| 28-30 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 44 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 43 |
| 33-34 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 35-36 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 50 |
| 37-38 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 49 |
| 39-41 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 47 |
| 42 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 45 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 44 |
| 45-47 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 42 |
| 48-49 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 41 |
| 50-51 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 40 |
| 52 | Chờ 1 bước (`-1`) | (2, 6) | (2, 6) | Dự kiến đứng yên tại (2, 6); hướng tới tọa độ (2, 6) | 40 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (19, 13) (ô=357)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(19, 13))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(19, 13))
- Mảng hành động đã gửi server: `[-53]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-52 | Chờ 53 bước (`-53`) | (19, 13) | (19, 13) | Dự kiến đứng yên tại (19, 13); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 1) (ô=27)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 17)
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 3, 3, 3, 4, 4, 4, 3, 3, 3, 4, 3, 2, 2, 2, 3, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 49 |
| 3 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 47 |
| 4 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 45 |
| 5-7 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 43 |
| 8-10 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 41 |
| 11-13 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 39 |
| 14-15 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 38 |
| 16-18 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 36 |
| 19-20 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 35 |
| 21-22 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 34 |
| 23-25 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 32 |
| 26-27 | Di chuyển hướng 3 (`3`) | (0, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 31 |
| 28-30 | Di chuyển hướng 3 (`3`) | (1, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 29 |
| 31-32 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 28 |
| 33 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 26 |
| 34-35 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 25 |
| 36-38 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 23 |
| 39-41 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 21 |
| 42 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 19 |
| 43-45 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 17 |
| 46-47 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 16 |
| 48-49 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 15 |
| 50-51 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 14 |
| 52 | Chờ 1 bước (`-1`) | (9, 17) | (9, 17) | Dự kiến đứng yên tại (9, 17); hướng tới tọa độ (9, 17) | 14 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 2) (ô=61)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 0)
- Mảng hành động đã gửi server: `[4, -24, 4, 4, 4, 5, 0, 0, 0, 1, 0, 5, 5, 5, 0, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 2 |
| 2-25 | Chờ 24 bước (`-24`) | (9, 3) | (9, 3) | Dự kiến đứng yên tại (9, 3); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 26-27 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 50 |
| 28-29 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 49 |
| 30-32 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 47 |
| 33 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 45 |
| 34-35 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 44 |
| 36 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 42 |
| 37-38 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 41 |
| 39-40 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 40 |
| 41 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 38 |
| 42-44 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 36 |
| 45-46 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 35 |
| 47-48 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 34 |
| 49-50 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 33 |
| 51-52 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 32 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (17, 6) (ô=173)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 2)
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 5, 4, 5, 5, 5, 4, 3, 2, 3, 3, 1, 1, 0, 0, 0, 0, 5, 0, 1, 0, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 44 |
| 1-2 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 43 |
| 3-5 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 41 |
| 6-8 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 39 |
| 9 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 37 |
| 10 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 35 |
| 11-12 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 34 |
| 13-15 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 32 |
| 16 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 30 |
| 17-18 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 28 |
| 19-20 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 27 |
| 21-22 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 26 |
| 23 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 24 |
| 24 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 22 |
| 25-26 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 21 |
| 27-28 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 20 |
| 29-31 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 18 |
| 32-33 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 17 |
| 34-36 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 15 |
| 37-39 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 13 |
| 40-41 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 12 |
| 42 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 10 |
| 43-45 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 4)) | 8 |
| 46-47 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 7 |
| 48-49 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 6 |
| 50-51 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 51 |
| 52 | Chờ 1 bước (`-1`) | (10, 2) | (10, 2) | Dự kiến đứng yên tại (10, 2); hướng tới tọa độ (10, 2) | 51 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (8, 17) (ô=450)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 5)
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 1, 2, 2, 1, 1, 0, 1, 1, 2, 2, 1, 2, 2, 2, 0, 1, -3, 3, 2, 1, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 27 |
| 2-3 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 26 |
| 4-5 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 25 |
| 6 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 23 |
| 7-8 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 22 |
| 9 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 20 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 19 |
| 12-13 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 18 |
| 14-15 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 17 |
| 16-18 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 15 |
| 19-20 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 14 |
| 21-22 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 13 |
| 23 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 11 |
| 24 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 9 |
| 25-27 | Di chuyển hướng 1 (`1`) | (15, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 7 |
| 28-30 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 5 |
| 31-32 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 4 |
| 33 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 2 |
| 34-35 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 1 |
| 36-37 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 0 |
| 38-40 | Chờ 3 bước (`-3`) | (18, 4) | (18, 4) | Dự kiến đứng yên tại (18, 4); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 51 |
| 41-42 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 51 |
| 43-45 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 46-48 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(20, 4)) | 49 |
| 49-50 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 51-52 | Chờ 2 bước (`-2`) | (20, 5) | (20, 5) | Dự kiến đứng yên tại (20, 5); hướng tới tọa độ (20, 5) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (20, 5) (ô=150)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 2)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 0, 5, 0, 5, 0, 5, 5, 5, 5, -10, 2, 1, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 51 |
| 3 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 51 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 51 |
| 6 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 51 |
| 7-8 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 51 |
| 9-11 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 51 |
| 12-14 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 51 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 51 |
| 17-18 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 51 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 51 |
| 21-22 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 23 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 51 |
| 24 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 25-34 | Chờ 10 bước (`-10`) | (9, 3) | (9, 3) | Dự kiến đứng yên tại (9, 3); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 35-36 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 51 |
| 37 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 51 |
| 38-52 | Chờ 15 bước (`-15`) | (10, 2) | (10, 2) | Dự kiến đứng yên tại (10, 2); hướng tới tọa độ (10, 2) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 1) (ô=27)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 5)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 2, 3, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 2, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (1, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 51 |
| 3-4 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 51 |
| 5-6 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 51 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 51 |
| 9-11 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 51 |
| 12 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 51 |
| 13-14 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 51 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 51 |
| 17-19 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 51 |
| 22 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 23 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 51 |
| 24-25 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 51 |
| 26-27 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 51 |
| 28-29 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 51 |
| 30-31 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 51 |
| 32-34 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 51 |
| 35-37 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 51 |
| 38-39 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 51 |
| 40-41 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 51 |
| 42-44 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 45-52 | Chờ 8 bước (`-8`) | (20, 5) | (20, 5) | Dự kiến đứng yên tại (20, 5); hướng tới tọa độ (20, 5) | 51 |

