# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 36
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 25 | #1 | #5 | (4, 12) | 24 | 41 |
| 27 | #1 | #5 | (4, 13) | 40 | 41 |
| 27 | #4 | #5 | (4, 13) | 21 | 41 |
| 29 | #1 | #5 | (3, 13) | 40 | 41 |
| 30 | #1 | #5 | (2, 13) | 39 | 41 |
| 33 | #1 | #5 | (1, 13) | 39 | 41 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 14) (ô=268)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 15)
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 1, 0, 1, 4, 4, 4, 3, 3, 2, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 40 |
| 2-3 | Di chuyển hướng 0 (`0`) | (17, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 39 |
| 4-6 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 37 |
| 7-8 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 36 |
| 9-11 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 34 |
| 12-14 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 32 |
| 15 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 7)) | 30 |
| 16-17 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 29 |
| 18 | Di chuyển hướng 4 (`4`) | (16, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 27 |
| 19-21 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 25 |
| 22-24 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 23 |
| 25-26 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 22 |
| 27-29 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 12)) | 20 |
| 30-31 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 19 |
| 32-33 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 18 |
| 34-35 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 17 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(0, 13))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(0, 13))
- Mảng hành động đã gửi server: `[3, 4, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 4, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 40 |
| 2-3 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 39 |
| 4-6 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 37 |
| 7-9 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 35 |
| 10-11 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 34 |
| 12-13 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 33 |
| 14-15 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 7)) | 32 |
| 16-17 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 31 |
| 18 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 29 |
| 19-21 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 27 |
| 22-23 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 26 |
| 24 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 41 |
| 25-26 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 41 |
| 27-28 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 41 |
| 29 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 41 |
| 30-32 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 41 |
| 33-35 | Di chuyển hướng 5 (`5`) | (1, 13) | (0, 13) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 13)) | 39 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 0) (ô=2)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(15, 2))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(15, 2))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 2, 3, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 40 |
| 2 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 38 |
| 3-4 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 37 |
| 5-7 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 3)) | 35 |
| 8-9 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 34 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 33 |
| 12-14 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 31 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 30 |
| 17-19 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 4)) | 28 |
| 20-21 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 27 |
| 22-24 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 2)) | 25 |
| 25-26 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 24 |
| 27 | Di chuyển hướng 3 (`3`) | (11, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 22 |
| 28-30 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 20 |
| 31 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 18 |
| 32-33 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 17 |
| 34-35 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 2)) | 16 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 7) (ô=137)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 15)
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 3, 3, 2, 2, 3, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 40 |
| 2-3 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 39 |
| 4 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 37 |
| 5-7 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 35 |
| 8 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 33 |
| 9-11 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 31 |
| 12-13 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 30 |
| 14-15 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 29 |
| 16-17 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 14)) | 28 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 27 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 26 |
| 22 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 24 |
| 23-25 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(11, 16)) | 22 |
| 26-27 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 21 |
| 28-29 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 20 |
| 30-31 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 17)) | 19 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 18 |
| 34-35 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 17 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 16) (ô=303)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 17))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 0, 5, 0, 5, 5, 5, 5, 5, 4, 5, 4, 4, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 40 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 39 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 38 |
| 6-8 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 36 |
| 9 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 34 |
| 10 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 32 |
| 11-12 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 12)) | 31 |
| 13-14 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 30 |
| 15-17 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 28 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 27 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 26 |
| 22 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 24 |
| 23 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 13)) | 22 |
| 24-25 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 21 |
| 26-27 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 40 |
| 28 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 38 |
| 29-30 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 37 |
| 31-32 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 36 |
| 33-34 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 35 |
| 35 | Chờ 1 bước (`-1`) | (1, 17) | (1, 17) | Dự kiến đứng yên tại (1, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 35 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (3, 17) (ô=309)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 13)
- Mảng hành động đã gửi server: `[1, 0, 1, 1, 1, -16, 4, 5, 5, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 41 |
| 2-3 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 41 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 41 |
| 6 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 41 |
| 7-8 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 41 |
| 9-24 | Chờ 16 bước (`-16`) | (4, 12) | (4, 12) | Dự kiến đứng yên tại (4, 12); hướng tới tọa độ (4, 12) | 41 |
| 25-26 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 41 |
| 27-28 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 41 |
| 29 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 41 |
| 30-32 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 41 |
| 33-35 | Chờ 3 bước (`-3`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); hướng tới tọa độ (1, 13) | 41 |

