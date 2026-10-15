# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 38
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #5 | (1, 13) | 38 | 41 |
| 5 | #1 | #5 | (2, 13) | 39 | 41 |
| 15 | #1 | #5 | (7, 11) | 31 | 41 |
| 15 | #3 | #5 | (7, 11) | 4 | 41 |
| 27 | #4 | #5 | (8, 12) | 13 | 41 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 15) (ô=286)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(11, 16))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(11, 16))
- Mảng hành động đã gửi server: `[1, 1, 1, 4, 4, 4, 4, 4, 5, 0, 5, 5, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 15 |
| 3-4 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 14 |
| 5-6 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 12)) | 13 |
| 7-8 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 12 |
| 9-10 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 11 |
| 11-12 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 10 |
| 13-15 | Di chuyển hướng 4 (`4`) | (16, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 8 |
| 16-17 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 7 |
| 18 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 17)) | 5 |
| 19-20 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 4 |
| 21-22 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 3 |
| 23-24 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(11, 16)) | 2 |
| 25-37 | Chờ 13 bước (`-13`) | (11, 16) | (11, 16) | Dự kiến đứng yên tại (11, 16); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(11, 16)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 13) (ô=234)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 3)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 41 |
| 2-4 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 41 |
| 5-7 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 39 |
| 8 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 37 |
| 9-10 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 13)) | 36 |
| 11-12 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 35 |
| 13 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 33 |
| 14 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 41 |
| 15-16 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 40 |
| 17-19 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 38 |
| 20 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 36 |
| 21-23 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 34 |
| 24 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 32 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 31 |
| 27-28 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 4)) | 30 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 29 |
| 31-33 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 2)) | 27 |
| 34-35 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 26 |
| 36-37 | Chờ 2 bước (`-2`) | (10, 3) | (10, 3) | Dự kiến đứng yên tại (10, 3); hướng tới tọa độ (10, 3) | 26 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 2) (ô=51)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(17, 7))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(17, 7))
- Mảng hành động đã gửi server: `[5, 4, 2, 3, 3, 4, 3, 2, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 15 |
| 2-3 | Di chuyển hướng 4 (`4`) | (14, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 14 |
| 4-5 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 13 |
| 6-7 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 12 |
| 8 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 10 |
| 9-11 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 8 |
| 12-14 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 6 |
| 15 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 7)) | 4 |
| 16-37 | Chờ 22 bước (`-22`) | (17, 7) | (17, 7) | Dự kiến đứng yên tại (17, 7); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 7)) | 4 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 15) (ô=283)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(5, 3))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(5, 3))
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 5, 5, 0, 5, 5, 0, 0, 0, 0, 0, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 15 |
| 3 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 13 |
| 4 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 11 |
| 5-6 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 12)) | 10 |
| 7-8 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 9 |
| 9-11 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 7 |
| 12-13 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 6 |
| 14 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 41 |
| 15-16 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 40 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 39 |
| 19-21 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 37 |
| 22-24 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 35 |
| 25-27 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 7)) | 33 |
| 28-29 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 32 |
| 30-31 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 31 |
| 32-33 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 30 |
| 34-36 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 3)) | 28 |
| 37 | Chờ 1 bước (`-1`) | (5, 3) | (5, 3) | Dự kiến đứng yên tại (5, 3); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 3)) | 28 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 17) (ô=307)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(10, 12))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(10, 12))
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 3, 2, 3, 2, 1, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 34 |
| 2-3 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 33 |
| 4-6 | Di chuyển hướng 0 (`0`) | (1, 15) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 31 |
| 7 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 13)) | 29 |
| 8-9 | Di chuyển hướng 3 (`3`) | (0, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 28 |
| 10 | Di chuyển hướng 2 (`2`) | (0, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 26 |
| 11-13 | Di chuyển hướng 3 (`3`) | (1, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 24 |
| 14-15 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 23 |
| 16-17 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 22 |
| 18 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 20 |
| 19-20 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 13)) | 19 |
| 21-22 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 18 |
| 23 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 16 |
| 24 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 14 |
| 25-26 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 41 |
| 27-28 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 40 |
| 29-30 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 14)) | 39 |
| 31-32 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 38 |
| 33-34 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 37 |
| 35-37 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 12)) | 35 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (1, 13) (ô=235)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(8, 12))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(8, 12))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 2, 2, 1, -2, 4, 2, 2, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 41 |
| 3-5 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 41 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 41 |
| 7-8 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 41 |
| 9-10 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 41 |
| 11 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 41 |
| 12 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 41 |
| 13-14 | Chờ 2 bước (`-2`) | (7, 11) | (7, 11) | Dự kiến đứng yên tại (7, 11); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 41 |
| 15-16 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 41 |
| 17 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 41 |
| 18-19 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 41 |
| 20-37 | Chờ 18 bước (`-18`) | (8, 12) | (8, 12) | Dự kiến đứng yên tại (8, 12); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 41 |

