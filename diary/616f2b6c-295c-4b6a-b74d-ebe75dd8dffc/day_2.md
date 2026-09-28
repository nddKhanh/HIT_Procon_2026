# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 46
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #6 | (8, 13) | 57 | 58 |
| 3 | #1 | #6 | (8, 12) | 56 | 58 |
| 13 | #0 | #6 | (9, 8) | 0 | 58 |
| 16 | #0 | #6 | (9, 7) | 57 | 58 |
| 26 | #2 | #6 | (10, 2) | 0 | 58 |
| 43 | #5 | #6 | (17, 11) | 0 | 58 |
| 45 | #5 | #6 | (16, 10) | 57 | 58 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 8) (ô=153)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 8)
- Mảng hành động đã gửi server: `[-14, 0, 5, 0, 0, 0, 1, 2, 2, 3, 3, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-13 | Chờ 14 bước (`-14`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 58 |
| 14-15 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 58 |
| 16-18 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 56 |
| 19-21 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 54 |
| 22-23 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 53 |
| 24-25 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 52 |
| 26-28 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 3)) | 50 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 49 |
| 31-33 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 47 |
| 34-35 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 46 |
| 36-38 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 44 |
| 39-40 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 43 |
| 41-43 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 41 |
| 44-45 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 40 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 13) (ô=241)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 14)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 4, 4, 3, 3, 4, 4, 4, 0, 5, 5, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 58 |
| 2 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 58 |
| 3-5 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 56 |
| 6-8 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 54 |
| 9 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 52 |
| 10-12 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 50 |
| 13-14 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 49 |
| 15-16 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 48 |
| 17 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 46 |
| 18 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 44 |
| 19-20 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 43 |
| 21 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(17, 10)) | 41 |
| 22-23 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 40 |
| 24-25 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 39 |
| 26-27 | Di chuyển hướng 3 (`3`) | (16, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 38 |
| 28-30 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 36 |
| 31-32 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 35 |
| 33-35 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 33 |
| 36-38 | Di chuyển hướng 4 (`4`) | (16, 16) | (16, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 17)) | 31 |
| 39-40 | Di chuyển hướng 0 (`0`) | (16, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 30 |
| 41-42 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 29 |
| 43 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 27 |
| 44 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 25 |
| 45 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 23 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 5) (ô=100)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 7)
- Mảng hành động đã gửi server: `[3, 3, 2, 1, 0, 0, 0, 0, -12, 5, 5, 5, 4, 4, 3, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 11 |
| 2-4 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 9 |
| 5-6 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 8 |
| 7-8 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 7 |
| 9-10 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 6 |
| 11 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 4 |
| 12 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 2 |
| 13 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 2)) | 0 |
| 14-25 | Chờ 12 bước (`-12`) | (10, 2) | (10, 2) | Dự kiến đứng yên tại (10, 2); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 2)) | 58 |
| 26-27 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 57 |
| 28-30 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 55 |
| 31-32 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 54 |
| 33-35 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 3)) | 52 |
| 36-37 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 51 |
| 38-40 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 49 |
| 41-42 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 48 |
| 43-44 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 47 |
| 45 | Chờ 1 bước (`-1`) | (6, 7) | (6, 7) | Dự kiến đứng yên tại (6, 7); hướng tới tọa độ (6, 7) | 47 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 10) (ô=182)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(0, 4))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(0, 4))
- Mảng hành động đã gửi server: `[5, 0, 0, 1, 1, 0, 0, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 15 |
| 2 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 13 |
| 3-5 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 11 |
| 6-7 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 10 |
| 8 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 8 |
| 9-10 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 7 |
| 11-13 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 4)) | 5 |
| 14-45 | Chờ 32 bước (`-32`) | (0, 4) | (0, 4) | Dự kiến đứng yên tại (0, 4); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 4)) | 5 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 9) (ô=167)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 4)
- Mảng hành động đã gửi server: `[5, 0, 5, 0, 0, 4, 4, 3, 3, 3, 4, 1, 1, 2, 3, 2, 3, 1, 0, 0, 1, 1, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 50 |
| 2-4 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 48 |
| 5 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 46 |
| 6-7 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 45 |
| 8 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 43 |
| 9-10 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 42 |
| 11 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 40 |
| 12-13 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 39 |
| 14-16 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 37 |
| 17 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 35 |
| 18 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 12)) | 33 |
| 19-20 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 32 |
| 21 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 30 |
| 22-23 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 10)) | 29 |
| 24-25 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 28 |
| 26 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 26 |
| 27-29 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 24 |
| 30-31 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 23 |
| 32 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 21 |
| 33-35 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 19 |
| 36-37 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 18 |
| 38-39 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 17 |
| 40-41 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 16 |
| 42-43 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 15 |
| 44-45 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 14 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 4) (ô=78)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(15, 10))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(15, 10))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 3, 3, 3, 3, 2, 3, 2, 2, 2, 3, -15, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 20 |
| 3-4 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 19 |
| 5-7 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 17 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 16 |
| 10-11 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 15 |
| 12-14 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 13 |
| 15-16 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 12 |
| 17-18 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 11 |
| 19-21 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 9 |
| 22 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 7 |
| 23 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 5 |
| 24 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 3 |
| 25-26 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 2 |
| 27 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 0 |
| 28-42 | Chờ 15 bước (`-15`) | (17, 11) | (17, 11) | Dự kiến đứng yên tại (17, 11); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 58 |
| 43-44 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 58 |
| 45 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 56 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 13) (ô=241)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 10)
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 3, 3, 3, 3, 2, 3, 3, 3, 3, 2, 3, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 58 |
| 2 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 58 |
| 3-5 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 58 |
| 6-8 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 58 |
| 9-11 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 58 |
| 12 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 58 |
| 13-14 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 58 |
| 15-17 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 58 |
| 18-19 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 58 |
| 20-21 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 58 |
| 22-24 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 58 |
| 25 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 2)) | 58 |
| 26-27 | Di chuyển hướng 3 (`3`) | (10, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 58 |
| 28 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 58 |
| 29 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 58 |
| 30 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 58 |
| 31-32 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 58 |
| 33 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 58 |
| 34-36 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 58 |
| 37 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 58 |
| 38-39 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 58 |
| 40-41 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 58 |
| 42 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 58 |
| 43-44 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 58 |
| 45 | Chờ 1 bước (`-1`) | (16, 10) | (16, 10) | Dự kiến đứng yên tại (16, 10); hướng tới tọa độ (16, 10) | 58 |

