# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 41
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 4 | #1 | #0 | (9, 3) | 56 | 59 |
| 5 | #1 | #0 | (10, 3) | 57 | 59 |
| 6 | #1 | #0 | (11, 3) | 57 | 59 |
| 8 | #1 | #0 | (12, 3) | 58 | 59 |
| 10 | #1 | #0 | (13, 3) | 58 | 59 |
| 40 | #4 | #0 | (16, 7) | 1 | 59 |

### Xe #0 - Tiếp tế

- Vị trí đầu ngày: (7, 3) (ô=64)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 7)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 3, 0, 5, 5, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 59 |
| 2-3 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 59 |
| 4 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 59 |
| 5 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 59 |
| 6-7 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 59 |
| 8-9 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 59 |
| 10-11 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 59 |
| 12 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 59 |
| 13 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 59 |
| 14-15 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 59 |
| 16 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 59 |
| 17 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 59 |
| 18-19 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 59 |
| 20 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 59 |
| 21-22 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 59 |
| 23 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 59 |
| 24-25 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 59 |
| 26-40 | Chờ 15 bước (`-15`) | (16, 7) | (16, 7) | Dự kiến đứng yên tại (16, 7); hướng tới tọa độ (16, 7) | 59 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 4) (ô=83)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 6)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 2, 2, 5, 5, 5, 5, 0, 0, 5, 4, 3, 3, 3, 3, 4, 3, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 57 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 59 |
| 4 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 59 |
| 5 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 59 |
| 6-7 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 59 |
| 8-9 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 59 |
| 10-11 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 58 |
| 12-13 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 57 |
| 14-15 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 56 |
| 16 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 54 |
| 17 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 52 |
| 18-19 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 1)) | 51 |
| 20-21 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 1)) | 50 |
| 22-23 | Di chuyển hướng 4 (`4`) | (7, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 49 |
| 24-25 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 48 |
| 26-27 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 47 |
| 28-29 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 46 |
| 30-31 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 45 |
| 32-33 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 44 |
| 34-35 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(8, 8)) | 43 |
| 36-37 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 42 |
| 38-39 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 41 |
| 40 | Chờ 1 bước (`-1`) | (8, 6) | (8, 6) | Dự kiến đứng yên tại (8, 6); hướng tới tọa độ (8, 6) | 41 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 16) (ô=317)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(1, 11))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(1, 11))
- Mảng hành động đã gửi server: `[4, 5, 0, 0, 5, 5, 5, 0, 5, 0, 0, 5, 5, 0, 5, 5, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 30 |
| 1-2 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 17)) | 29 |
| 3-4 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 28 |
| 5-6 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 27 |
| 7-8 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 26 |
| 9-11 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 24 |
| 12 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 22 |
| 13-15 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 20 |
| 16 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(6, 14)) | 18 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 17 |
| 19-20 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 16 |
| 21 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 14 |
| 22-23 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 13 |
| 24-25 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 12 |
| 26 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 10 |
| 27-28 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(1, 11)) | 9 |
| 29-40 | Chờ 12 bước (`-12`) | (1, 11) | (1, 11) | Dự kiến đứng yên tại (1, 11); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(1, 11)) | 9 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 6) (ô=122)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 6)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 5, 0, 0, 2, 2, 2, 2, 2, 2, 2, 3, 4, 3, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 34 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 33 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 32 |
| 6-7 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 31 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 30 |
| 10-11 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 29 |
| 12 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 7)) | 27 |
| 13-14 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 26 |
| 15-16 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 25 |
| 17-18 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 24 |
| 19 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 22 |
| 20-22 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 20 |
| 23 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 18 |
| 24-25 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 17 |
| 26-28 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 15 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 14 |
| 31-32 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 13 |
| 33-34 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 12 |
| 35-36 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(8, 8)) | 11 |
| 37-38 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 10 |
| 39-40 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 9 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (16, 14) (ô=282)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 6)
- Mảng hành động đã gửi server: `[0, 5, 5, 3, 3, 3, 2, 1, 0, 0, 0, 0, 1, 1, 1, 2, 2, -1, 0, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 27 |
| 2 | Di chuyển hướng 5 (`5`) | (16, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 25 |
| 3-5 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(14, 13)) | 23 |
| 6-7 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 22 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 21 |
| 10-12 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 19 |
| 13-14 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(16, 16)) | 18 |
| 15-16 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 17 |
| 17-18 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(16, 14)) | 16 |
| 19-20 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 15 |
| 21 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 13 |
| 22-23 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 12 |
| 24-25 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 11 |
| 26-27 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 10 |
| 28 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 8 |
| 29-31 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 6 |
| 32-33 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 5 |
| 34 | Chờ 1 bước (`-1`) | (18, 8) | (18, 8) | Dự kiến đứng yên tại (18, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 5 |
| 35-36 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 4 |
| 37 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 2 |
| 38-39 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 59 |
| 40 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 57 |

