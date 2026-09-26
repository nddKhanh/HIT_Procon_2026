# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 54
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #0 | #6 | (12, 0) | 3 | 61 |
| 21 | #1 | #6 | (15, 1) | 0 | 61 |
| 23 | #1 | #6 | (14, 1) | 60 | 61 |
| 26 | #1 | #6 | (13, 1) | 59 | 61 |
| 39 | #1 | #6 | (8, 4) | 53 | 61 |
| 42 | #1 | #6 | (7, 4) | 59 | 61 |
| 44 | #2 | #6 | (7, 4) | 2 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 0) (ô=12)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 6)
- Mảng hành động đã gửi server: `[-15, 4, 5, 4, 5, 4, 4, 5, 5, 0, 5, 5, 4, 4, 5, 0, 5, 0, 3, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-14 | Chờ 15 bước (`-15`) | (12, 0) | (12, 0) | Dự kiến đứng yên tại (12, 0); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 61 |
| 15-16 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 60 |
| 17-18 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 59 |
| 19 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 57 |
| 20-21 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 56 |
| 22-23 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 55 |
| 24-25 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 54 |
| 26-28 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 52 |
| 29-30 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 51 |
| 31 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 49 |
| 32-33 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 48 |
| 34-36 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 46 |
| 37-38 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 45 |
| 39 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 43 |
| 40-41 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 42 |
| 42-43 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 41 |
| 44-46 | Di chuyển hướng 5 (`5`) | (1, 4) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 39 |
| 47 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 37 |
| 48-49 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 36 |
| 50 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 34 |
| 51-53 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 32 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 1) (ô=32)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(3, 5))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(3, 5))
- Mảng hành động đã gửi server: `[-21, 5, 5, 0, 4, 5, 4, 5, 4, 4, 5, 5, 0, 5, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-20 | Chờ 21 bước (`-21`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #18 (thương hiệu=0, tọa độ=(15, 1)) | 61 |
| 21-22 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 61 |
| 23-25 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 61 |
| 26-27 | Di chuyển hướng 0 (`0`) | (13, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 60 |
| 28-29 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 59 |
| 30-31 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 58 |
| 32 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 56 |
| 33-34 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 55 |
| 35-36 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 54 |
| 37-38 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 61 |
| 39-41 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 61 |
| 42-43 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 60 |
| 44 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 58 |
| 45-46 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 57 |
| 47-49 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 55 |
| 50-51 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 54 |
| 52 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 52 |
| 53 | Chờ 1 bước (`-1`) | (3, 5) | (3, 5) | Dự kiến đứng yên tại (3, 5); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 52 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 2) (ô=43)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 9)
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 5, 5, 4, 5, 5, 5, 0, 3, 2, 3, 2, 2, 2, 3, 2, 2, 1, 0, 3, 3, 4, 4, 4, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 35 |
| 2-4 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 33 |
| 5 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 31 |
| 6-7 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 30 |
| 8-9 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 29 |
| 10-12 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 27 |
| 13-14 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 26 |
| 15 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 24 |
| 16-18 | Di chuyển hướng 5 (`5`) | (2, 4) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 22 |
| 19-21 | Di chuyển hướng 5 (`5`) | (1, 4) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 20 |
| 22 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 18 |
| 23-24 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 17 |
| 25 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 15 |
| 26-28 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 13 |
| 29-30 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 12 |
| 31-32 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 11 |
| 33-35 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 9 |
| 36-37 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 8 |
| 38 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 6 |
| 39-40 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 5 |
| 41-42 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 4 |
| 43 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 61 |
| 44-45 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 60 |
| 46 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 58 |
| 47-48 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 57 |
| 49-50 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 56 |
| 51 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 54 |
| 52-53 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 53 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 10) (ô=175)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(14, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(14, 17))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 2, 2, 3, 0, 1, 2, 3, 5, 4, 4, 4, 2, 2, 3, 3, 2, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 27 |
| 2-4 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 25 |
| 5-7 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 23 |
| 8-9 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 22 |
| 10 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 20 |
| 11-13 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 18 |
| 14-15 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 17 |
| 16-17 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 16 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 15 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 14 |
| 22-23 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 13 |
| 24-25 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 12 |
| 26-28 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 10 |
| 29-30 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 9 |
| 31-33 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=1, tọa độ=(10, 15)) | 7 |
| 34-35 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 6 |
| 36-37 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 5 |
| 38-39 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 4 |
| 40 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 2 |
| 41 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 0 |
| 42-53 | Chờ 12 bước (`-12`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (7, 4) (ô=75)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 14)
- Mảng hành động đã gửi server: `[4, 4, 5, 0, 5, 5, 5, 2, 2, 2, 3, 2, 2, 3, 4, 4, 5, 4, 4, 5, 4, 4, 4, 0, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 60 |
| 2-4 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 58 |
| 5-6 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 57 |
| 7 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 55 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 54 |
| 10-12 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 52 |
| 13-14 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 51 |
| 15-16 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 50 |
| 17-18 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 49 |
| 19-21 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 47 |
| 22-23 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 46 |
| 24 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 44 |
| 25-26 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 43 |
| 27-28 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 42 |
| 29-30 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 41 |
| 31 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 39 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 38 |
| 34-36 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 37-38 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(5, 11)) | 35 |
| 39-40 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 34 |
| 41-42 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 33 |
| 43-44 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 32 |
| 45-47 | Di chuyển hướng 4 (`4`) | (3, 13) | (2, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 14)) | 30 |
| 48-49 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 29 |
| 50-51 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 28 |
| 52-53 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 27 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (12, 0) (ô=12)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 16)
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 4, 3, 4, 4, 3, 4, 4, 5, 4, 3, 4, 4, 4, 5, 5, 4, 4, 5, 5, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 45 |
| 2-3 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 44 |
| 4-5 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 43 |
| 6-7 | Di chuyển hướng 4 (`4`) | (14, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 42 |
| 8 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 40 |
| 9-10 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 39 |
| 11-13 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 37 |
| 14-15 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 36 |
| 16 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 34 |
| 17-18 | Di chuyển hướng 4 (`4`) | (13, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 33 |
| 19-21 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 31 |
| 22-23 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 30 |
| 24-25 | Di chuyển hướng 4 (`4`) | (11, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 29 |
| 26-27 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 28 |
| 28-29 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 27 |
| 30-32 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=1, tọa độ=(10, 15)) | 25 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 24 |
| 35-36 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 23 |
| 37-38 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 22 |
| 39 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 20 |
| 40-41 | Di chuyển hướng 4 (`4`) | (7, 17) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 19 |
| 42-43 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 18 |
| 44-46 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 16 |
| 47 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 14 |
| 48-50 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 17)) | 12 |
| 51-52 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 11 |
| 53 | Chờ 1 bước (`-1`) | (2, 16) | (2, 16) | Dự kiến đứng yên tại (2, 16); hướng tới tọa độ (2, 16) | 11 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 4) (ô=75)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 4))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 4))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 2, 2, 1, 3, 2, 2, 5, 5, 5, 5, 5, 4, 4, 4, 5, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 61 |
| 2-4 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 61 |
| 5-6 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 61 |
| 7-8 | Di chuyển hướng 1 (`1`) | (9, 2) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 61 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 61 |
| 11 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 61 |
| 12-13 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 61 |
| 14-15 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 61 |
| 16-17 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 61 |
| 18-20 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=0, tọa độ=(15, 1)) | 61 |
| 21-22 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 61 |
| 23-25 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 61 |
| 26-27 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 61 |
| 28-29 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 61 |
| 30 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 61 |
| 31-32 | Di chuyển hướng 4 (`4`) | (10, 1) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 61 |
| 33-34 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 61 |
| 35-36 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 61 |
| 37-39 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 61 |
| 40-53 | Chờ 14 bước (`-14`) | (7, 4) | (7, 4) | Dự kiến đứng yên tại (7, 4); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 61 |

