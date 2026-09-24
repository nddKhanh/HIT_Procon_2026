# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 46
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #3 | #4 | (13, 16) | 18 | 49 |
| 22 | #0 | #4 | (20, 9) | 7 | 49 |
| 25 | #0 | #4 | (20, 8) | 47 | 49 |
| 32 | #3 | #5 | (7, 21) | 31 | 49 |
| 45 | #3 | #5 | (1, 18) | 39 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 19) (ô=414)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(18, 0))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(18, 0))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -2, 0, 1, 0, 0, 5, 0, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 20 |
| 2-3 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 19 |
| 4 | Di chuyển hướng 1 (`1`) | (16, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 17 |
| 5-7 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 15 |
| 8-10 | Di chuyển hướng 1 (`1`) | (17, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 13 |
| 11-12 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 12 |
| 13-14 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 11 |
| 15-16 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 10 |
| 17-18 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 9 |
| 19 | Di chuyển hướng 1 (`1`) | (19, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 7 |
| 20-22 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 47 |
| 23-24 | Chờ 2 bước (`-2`) | (20, 8) | (20, 8) | Dự kiến đứng yên tại (20, 8); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 49 |
| 25-26 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 48 |
| 27-29 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 46 |
| 30 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 44 |
| 31-32 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 43 |
| 33-34 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 42 |
| 35-37 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 40 |
| 38-40 | Di chuyển hướng 1 (`1`) | (18, 3) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 38 |
| 41-42 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 37 |
| 43-45 | Di chuyển hướng 0 (`0`) | (19, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 0)) | 35 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 16) (ô=348)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(20, 15))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(20, 15))
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 1, 5, 0, 2, 2, 2, 3, 2, 3, 2, 3, 2, 0, 1, 4, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 47 |
| 3-5 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 45 |
| 6-7 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 44 |
| 8 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 42 |
| 9-11 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 40 |
| 12-13 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 39 |
| 14-15 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 38 |
| 16-17 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 37 |
| 18 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 35 |
| 19-20 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 34 |
| 21 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 32 |
| 22-23 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 31 |
| 24-26 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 29 |
| 27-28 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 28 |
| 29-30 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 27 |
| 31-32 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 26 |
| 33-34 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 25 |
| 35-36 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 24 |
| 37-38 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 23 |
| 39-40 | Di chuyển hướng 3 (`3`) | (18, 12) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 22 |
| 41-42 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 21 |
| 43-45 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 15)) | 19 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 10) (ô=212)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(4, 2))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(4, 2))
- Mảng hành động đã gửi server: `[1, 5, 4, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2, 1, 5, 5, 5, 0, 0, 0, 5, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 47 |
| 3 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 45 |
| 4-5 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 44 |
| 6-7 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 43 |
| 8-9 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 42 |
| 10 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 40 |
| 11-12 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 39 |
| 13 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 37 |
| 14-16 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 35 |
| 17 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 33 |
| 18-19 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 32 |
| 20 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 30 |
| 21 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 28 |
| 22 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 26 |
| 23-24 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 25 |
| 25-27 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 23 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 22 |
| 30-32 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 20 |
| 33-35 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 18 |
| 36-38 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(5, 2)) | 16 |
| 39-40 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 2)) | 15 |
| 41-45 | Chờ 5 bước (`-5`) | (4, 2) | (4, 2) | Dự kiến đứng yên tại (4, 2); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 2)) | 15 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 15) (ô=329)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(1, 18))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(1, 18))
- Mảng hành động đã gửi server: `[4, 3, 2, 3, 3, 5, 5, 5, 5, 4, 5, 5, 5, 4, 5, 5, 5, 0, 0, 5, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 18 |
| 2-4 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 47 |
| 5-6 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 46 |
| 7 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 44 |
| 8-9 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 43 |
| 10-11 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 42 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 41 |
| 14-15 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 40 |
| 16-18 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 38 |
| 19-21 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 20)) | 36 |
| 22-23 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 35 |
| 24-25 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 34 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 33 |
| 28-29 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 21)) | 32 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 49 |
| 32-34 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 47 |
| 35-36 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(5, 21)) | 46 |
| 37-38 | Di chuyển hướng 0 (`0`) | (5, 21) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 45 |
| 39-40 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 44 |
| 41 | Di chuyển hướng 5 (`5`) | (4, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 42 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 41 |
| 44 | Di chuyển hướng 0 (`0`) | (2, 19) | (1, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 18)) | 49 |
| 45 | Chờ 1 bước (`-1`) | (1, 18) | (1, 18) | Dự kiến đứng yên tại (1, 18); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 18)) | 49 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (12, 16) (ô=348)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(20, 8))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(20, 8))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 49 |
| 3-5 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 49 |
| 6-7 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 49 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 49 |
| 10 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 49 |
| 11-12 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 49 |
| 13-14 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 49 |
| 15-16 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 49 |
| 17-18 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 49 |
| 19-20 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 49 |
| 21 | Di chuyển hướng 1 (`1`) | (19, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 49 |
| 22-24 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 49 |
| 25-45 | Chờ 21 bước (`-21`) | (20, 8) | (20, 8) | Dự kiến đứng yên tại (20, 8); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 49 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (2, 10) (ô=212)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(1, 18))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(1, 18))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 2, 3, 3, 3, 4, 3, 3, 3, 4, 5, 5, 5, 0, 5, 0, 5, 0, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 49 |
| 3-5 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 49 |
| 6-8 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 49 |
| 9-10 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 49 |
| 11-12 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 49 |
| 13-14 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 49 |
| 15-16 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 49 |
| 17-18 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 49 |
| 19 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 49 |
| 20 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 49 |
| 21-23 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 49 |
| 24-25 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 49 |
| 26-27 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 21)) | 49 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 49 |
| 30-32 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 49 |
| 33-34 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(5, 21)) | 49 |
| 35-36 | Di chuyển hướng 0 (`0`) | (5, 21) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 49 |
| 37-38 | Di chuyển hướng 5 (`5`) | (4, 20) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 49 |
| 39 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 49 |
| 40-41 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 49 |
| 42 | Di chuyển hướng 0 (`0`) | (2, 19) | (1, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 18)) | 49 |
| 43-45 | Chờ 3 bước (`-3`) | (1, 18) | (1, 18) | Dự kiến đứng yên tại (1, 18); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 18)) | 49 |

