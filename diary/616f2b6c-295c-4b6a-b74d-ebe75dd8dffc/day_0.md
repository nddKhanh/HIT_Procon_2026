# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 36
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 19 | #3 | #6 | (11, 7) | 44 | 58 |
| 21 | #2 | #6 | (11, 7) | 41 | 58 |
| 32 | #5 | #6 | (10, 7) | 31 | 58 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 13) (ô=239)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(16, 17))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(16, 17))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 2, 4, 4, 3, 4, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 57 |
| 2 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 55 |
| 3-4 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 54 |
| 5 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 52 |
| 6-8 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 50 |
| 9-11 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 48 |
| 12 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 46 |
| 13-15 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 44 |
| 16-17 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 43 |
| 18-19 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 42 |
| 20 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 40 |
| 21 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 38 |
| 22-23 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 37 |
| 24-25 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 36 |
| 26-27 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 35 |
| 28-29 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 34 |
| 30-32 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 32 |
| 33 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 30 |
| 34-35 | Di chuyển hướng 3 (`3`) | (15, 16) | (16, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 17)) | 29 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 8) (ô=146)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(7, 5))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(7, 5))
- Mảng hành động đã gửi server: `[5, 5, 1, 1, 3, 3, 3, 3, 3, 2, 3, 1, 0, 0, 1, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 57 |
| 2-3 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 56 |
| 4-5 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 55 |
| 6 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 53 |
| 7-8 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 52 |
| 9 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 50 |
| 10-11 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 49 |
| 12-14 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 10)) | 47 |
| 15-16 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 46 |
| 17 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 44 |
| 18-20 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 42 |
| 21-22 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 41 |
| 23 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 39 |
| 24-26 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 37 |
| 27-28 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 36 |
| 29-30 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 35 |
| 31-32 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 34 |
| 33-34 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 33 |
| 35 | Chờ 1 bước (`-1`) | (7, 5) | (7, 5) | Dự kiến đứng yên tại (7, 5); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 33 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 12) (ô=230)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 2)
- Mảng hành động đã gửi server: `[1, 2, 2, 1, 5, 5, 5, 5, 0, 5, 0, 0, 0, 0, 1, 1, 0, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 57 |
| 2-3 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 56 |
| 4-5 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 55 |
| 6-7 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(17, 10)) | 54 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 53 |
| 10 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 51 |
| 11-12 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 50 |
| 13 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 48 |
| 14 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 46 |
| 15 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 44 |
| 16-18 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 42 |
| 19-20 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 58 |
| 21-22 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 57 |
| 23-25 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 55 |
| 26-27 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 54 |
| 28-30 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 52 |
| 31 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 2)) | 50 |
| 32-33 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 49 |
| 34-35 | Chờ 2 bước (`-2`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); hướng tới tọa độ (9, 2) | 49 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 0) (ô=5)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(7, 3))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(7, 3))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 3, 3, 3, 3, 3, 0, 0, 5, 5, 5, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 57 |
| 2 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 55 |
| 3-5 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 53 |
| 6 | Di chuyển hướng 3 (`3`) | (8, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 51 |
| 7-8 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 50 |
| 9-10 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 49 |
| 11-13 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 47 |
| 14-15 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 46 |
| 16-18 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 58 |
| 19-20 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 57 |
| 21-23 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 55 |
| 24-25 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 54 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 53 |
| 28-30 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 51 |
| 31-32 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 50 |
| 33-35 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 3)) | 48 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 1) (ô=21)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 10)
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 4, 0, 0, 4, 3, 3, 4, 3, 3, 3, 4, 1, 1, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 57 |
| 2 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 55 |
| 3 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 53 |
| 4-6 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 51 |
| 7-8 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 50 |
| 9-10 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 49 |
| 11-13 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 4)) | 47 |
| 14-15 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 46 |
| 16-18 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 44 |
| 19 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 42 |
| 20 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 40 |
| 21-22 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 39 |
| 23-25 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 37 |
| 26 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 35 |
| 27 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 12)) | 33 |
| 28-29 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 32 |
| 30 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 30 |
| 31-32 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 10)) | 29 |
| 33-34 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 28 |
| 35 | Chờ 1 bước (`-1`) | (4, 10) | (4, 10) | Dự kiến đứng yên tại (4, 10); hướng tới tọa độ (4, 10) | 28 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=278)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(9, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(9, 8))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 5, 5, 0, 5, 0, 0, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 57 |
| 2-4 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 55 |
| 5-7 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 53 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 52 |
| 10 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 50 |
| 11 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 48 |
| 12 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 46 |
| 13-15 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 44 |
| 16-17 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 43 |
| 18-19 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 42 |
| 20-21 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 41 |
| 22 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 39 |
| 23 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 37 |
| 24 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 35 |
| 25-27 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 33 |
| 28-29 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 32 |
| 30-31 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 58 |
| 32-34 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 56 |
| 35 | Chờ 1 bước (`-1`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 56 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (16, 4) (ô=88)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 7)
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 5, 4, 5, -9, 5, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 58 |
| 2 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 58 |
| 3-5 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 58 |
| 6 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 58 |
| 7 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 58 |
| 8-9 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 58 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 58 |
| 12-20 | Chờ 9 bước (`-9`) | (11, 7) | (11, 7) | Dự kiến đứng yên tại (11, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 58 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 58 |
| 23-35 | Chờ 13 bước (`-13`) | (10, 7) | (10, 7) | Dự kiến đứng yên tại (10, 7); hướng tới tọa độ (10, 7) | 58 |

