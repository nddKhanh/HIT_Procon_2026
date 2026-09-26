# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 59
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 7 | #1 | #6 | (5, 6) | 48 | 61 |
| 23 | #5 | #6 | (1, 13) | 2 | 61 |
| 26 | #5 | #6 | (2, 13) | 60 | 61 |
| 29 | #5 | #6 | (3, 12) | 58 | 61 |
| 49 | #4 | #6 | (12, 12) | 3 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (0, 6) (ô=102)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[0, 1, 0, 3, 2, 3, 2, 2, 2, 3, 2, 2, 1, 0, 2, 1, 1, 2, 1, 2, 1, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 30 |
| 1-3 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 28 |
| 4 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 26 |
| 5-6 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 25 |
| 7 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 23 |
| 8-10 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 21 |
| 11-12 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 20 |
| 13-14 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 19 |
| 15-17 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 17 |
| 18-19 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 16 |
| 20 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 14 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 13 |
| 23-24 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 12 |
| 25 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 10 |
| 26-27 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 9 |
| 28-30 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 7 |
| 31-32 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 6 |
| 33-34 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 5 |
| 35-36 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 4 |
| 37 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 2 |
| 38-39 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 1 |
| 40-58 | Chờ 19 bước (`-19`) | (12, 0) | (12, 0) | Dự kiến đứng yên tại (12, 0); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 5) (ô=88)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 15)
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 2, 1, 0, 2, 1, 1, 4, 4, 4, 4, 3, 4, 4, 2, 3, 2, 3, 2, 2, 4, 4, 4, 4, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 51 |
| 2-4 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 49 |
| 5-6 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 61 |
| 7 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 59 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 58 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 57 |
| 12 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 55 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 54 |
| 15-17 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 52 |
| 18-19 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 51 |
| 20-21 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 50 |
| 22-23 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 49 |
| 24-26 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 47 |
| 27 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 45 |
| 28-29 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 44 |
| 30-31 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 43 |
| 32 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 41 |
| 33-34 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 40 |
| 35 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 38 |
| 36-38 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 36 |
| 39-41 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 34 |
| 42-44 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 32 |
| 45-46 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 31 |
| 47-48 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 30 |
| 49-51 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 28 |
| 52-53 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 27 |
| 54-56 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=1, tọa độ=(10, 15)) | 25 |
| 57-58 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 24 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 9) (ô=161)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 18)
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 2, 5, 5, 0, 0, 5, 5, 5, 4, 4, 5, 4, 4, 4, 0, 5, 4, 3, 3, 3, 2, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 51 |
| 1-3 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 49 |
| 4-6 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 47 |
| 7-9 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 45 |
| 10-11 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 44 |
| 12-13 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 43 |
| 14-15 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 42 |
| 16-18 | Di chuyển hướng 0 (`0`) | (10, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 40 |
| 19-21 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 38 |
| 22-24 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 36 |
| 25 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 34 |
| 26-27 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 33 |
| 28-30 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 31 |
| 31-32 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(5, 11)) | 30 |
| 33-34 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 29 |
| 35-36 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 28 |
| 37-38 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 27 |
| 39-41 | Di chuyển hướng 4 (`4`) | (3, 13) | (2, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 14)) | 25 |
| 42-43 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 24 |
| 44-45 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 23 |
| 46-47 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 22 |
| 48 | Di chuyển hướng 3 (`3`) | (0, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 20 |
| 49-51 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 18 |
| 52-53 | Di chuyển hướng 3 (`3`) | (1, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 17 |
| 54 | Di chuyển hướng 2 (`2`) | (2, 17) | (3, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 17)) | 15 |
| 55-56 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 14 |
| 57-58 | Chờ 2 bước (`-2`) | (3, 18) | (3, 18) | Dự kiến đứng yên tại (3, 18); hướng tới tọa độ (3, 18) | 14 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 17) (ô=303)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(14, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(14, 17))
- Mảng hành động đã gửi server: `[-59]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-58 | Chờ 59 bước (`-59`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (0, 14) (ô=238)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(14, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(14, 17))
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 1, 2, 3, -17, 3, 4, 4, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (0, 14) | (1, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 25 |
| 1-2 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 24 |
| 3-4 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 23 |
| 5 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 21 |
| 6-7 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 20 |
| 8-10 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 18 |
| 11 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 16 |
| 12-14 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 14 |
| 15-17 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 12 |
| 18 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 10 |
| 19-21 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 8 |
| 22-23 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 7 |
| 24-25 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 6 |
| 26-27 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 5 |
| 28-29 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 4 |
| 30-31 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 3 |
| 32-48 | Chờ 17 bước (`-17`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 61 |
| 49-50 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 60 |
| 51 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 58 |
| 52-54 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 56 |
| 55-56 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 55 |
| 57 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 53 |
| 58 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 51 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (2, 16) (ô=274)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 6)
- Mảng hành động đã gửi server: `[3, 0, 1, 0, 0, 5, -9, 2, 1, 2, 1, 2, 1, 0, 5, 0, 0, 1, 0, 5, 2, 1, 1, 3, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 17)) | 9 |
| 3-4 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 8 |
| 5-7 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 6 |
| 8-10 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 14)) | 4 |
| 11-12 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 3 |
| 13-14 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 2 |
| 15-23 | Chờ 9 bước (`-9`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 61 |
| 24-25 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 61 |
| 26-27 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 60 |
| 28 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 61 |
| 29-30 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 60 |
| 31-32 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(5, 11)) | 59 |
| 33-34 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 58 |
| 35-36 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 57 |
| 37 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 55 |
| 38-39 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 54 |
| 40-41 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 53 |
| 42-43 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 52 |
| 44-45 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 51 |
| 46-47 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 50 |
| 48-49 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 49 |
| 50-51 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 48 |
| 52 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 46 |
| 53-54 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 45 |
| 55 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 43 |
| 56-57 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 42 |
| 58 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 40 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 4) (ô=75)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(12, 12))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(12, 12))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 5, 4, 4, 4, 4, 4, 4, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 61 |
| 2-4 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 61 |
| 5-6 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 61 |
| 7 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 61 |
| 8-10 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 61 |
| 11-13 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 61 |
| 14-15 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 61 |
| 16 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 61 |
| 17-19 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 61 |
| 20 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 61 |
| 21-22 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 61 |
| 23-24 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 61 |
| 25-26 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 61 |
| 27 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 61 |
| 28-29 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 61 |
| 30-32 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 61 |
| 33 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 61 |
| 34-36 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 61 |
| 37-39 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 61 |
| 40 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 61 |
| 41-43 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 61 |
| 44-45 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 61 |
| 46-48 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 61 |
| 49-58 | Chờ 10 bước (`-10`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 61 |

