# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 46
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 36 | #1 | #3 | (16, 16) | 25 | 53 |
| 39 | #0 | #5 | (14, 19) | 25 | 53 |
| 42 | #0 | #5 | (14, 19) | 50 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 23) (ô=507)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 16)
- Mảng hành động đã gửi server: `[2, 2, 1, 0, 3, 2, 1, 1, 1, 0, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 0, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 23) | (2, 23) | Dự kiến đến điểm hẹn tọa độ (2, 23) | 52 |
| 2-4 | Di chuyển hướng 2 (`2`) | (2, 23) | (3, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 23)) | 50 |
| 5-6 | Di chuyển hướng 1 (`1`) | (3, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 49 |
| 7-8 | Di chuyển hướng 0 (`0`) | (3, 22) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 48 |
| 9-10 | Di chuyển hướng 3 (`3`) | (3, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 47 |
| 11-12 | Di chuyển hướng 2 (`2`) | (3, 22) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 46 |
| 13 | Di chuyển hướng 1 (`1`) | (4, 22) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 44 |
| 14 | Di chuyển hướng 1 (`1`) | (5, 21) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 42 |
| 15-17 | Di chuyển hướng 1 (`1`) | (5, 20) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 40 |
| 18-19 | Di chuyển hướng 0 (`0`) | (6, 19) | (5, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 18)) | 39 |
| 20-21 | Di chuyển hướng 2 (`2`) | (5, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 38 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 37 |
| 24-26 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 35 |
| 27 | Di chuyển hướng 3 (`3`) | (8, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 33 |
| 28 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 31 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 30 |
| 31-33 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 28 |
| 34-36 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 26 |
| 37-38 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 53 |
| 39 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 20)) | 51 |
| 40-41 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 53 |
| 42 | Di chuyển hướng 1 (`1`) | (14, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 51 |
| 43-44 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 50 |
| 45 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 48 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 23) (ô=527)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 12)
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 5, 3, 3, 1, 2, 2, 5, 5, 0, 0, 1, 0, 5, 0, 0, 0, 5, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 52 |
| 2-3 | Di chuyển hướng 0 (`0`) | (20, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 51 |
| 4-6 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 49 |
| 7 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 47 |
| 8-9 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 46 |
| 10-11 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 45 |
| 12-14 | Di chuyển hướng 3 (`3`) | (18, 21) | (18, 22) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 22)) | 43 |
| 15-16 | Di chuyển hướng 1 (`1`) | (18, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 42 |
| 17 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 40 |
| 18-20 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 21)) | 38 |
| 21-22 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 37 |
| 23-25 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 35 |
| 26 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 33 |
| 27-28 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 32 |
| 29 | Di chuyển hướng 1 (`1`) | (18, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 30 |
| 30 | Di chuyển hướng 0 (`0`) | (18, 18) | (18, 17) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 17)) | 28 |
| 31-32 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 27 |
| 33-35 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 53 |
| 36-38 | Di chuyển hướng 0 (`0`) | (16, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 51 |
| 39-40 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 50 |
| 41 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 48 |
| 42-43 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 47 |
| 44-45 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 46 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 5) (ô=130)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(13, 11))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(13, 11))
- Mảng hành động đã gửi server: `[4, 5, 5, 1, 1, 1, 0, 1, 5, 4, 4, 5, 5, 4, 4, 4, 3, 3, 3, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 52 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 51 |
| 4-6 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 49 |
| 7-9 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 47 |
| 10-12 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 45 |
| 13 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 43 |
| 14-15 | Di chuyển hướng 0 (`0`) | (19, 3) | (18, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(18, 2)) | 42 |
| 16-17 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(19, 1)) | 41 |
| 18-19 | Di chuyển hướng 5 (`5`) | (19, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 40 |
| 20-21 | Di chuyển hướng 4 (`4`) | (18, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 39 |
| 22-23 | Di chuyển hướng 4 (`4`) | (17, 2) | (17, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 3)) | 38 |
| 24-25 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 37 |
| 26-27 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 36 |
| 28-29 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 35 |
| 30-32 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 33 |
| 33-34 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 6)) | 32 |
| 35-36 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 31 |
| 37-38 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 30 |
| 39 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 9)) | 28 |
| 40-41 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 27 |
| 42-43 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 26 |
| 44-45 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 25 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (19, 8) (ô=195)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 16)
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 3, 4, 4, 4, 4, 3, 5, 0, 0, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (19, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 53 |
| 2-3 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 53 |
| 4-5 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 53 |
| 6-7 | Di chuyển hướng 4 (`4`) | (20, 11) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 53 |
| 8 | Di chuyển hướng 3 (`3`) | (19, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 53 |
| 9 | Di chuyển hướng 4 (`4`) | (20, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 53 |
| 10-11 | Di chuyển hướng 4 (`4`) | (19, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 53 |
| 12-14 | Di chuyển hướng 4 (`4`) | (19, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 53 |
| 15-16 | Di chuyển hướng 4 (`4`) | (18, 16) | (18, 17) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 17)) | 53 |
| 17-18 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 53 |
| 19 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 53 |
| 20 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 53 |
| 21-23 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 53 |
| 24-45 | Chờ 22 bước (`-22`) | (16, 16) | (16, 16) | Dự kiến đứng yên tại (16, 16); hướng tới tọa độ (16, 16) | 53 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (13, 10) (ô=233)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 5)
- Mảng hành động đã gửi server: `[4, 0, 0, 0, 5, 0, 0, 0, 0, 5, 5, 5, 0, 5, 4, 5, 0, 1, 1, 1, 4, 4, 3, 3, 3, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 52 |
| 2-3 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 51 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 50 |
| 6 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 48 |
| 7-8 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 47 |
| 9-10 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 46 |
| 11 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 44 |
| 12-13 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 43 |
| 14-15 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 42 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 41 |
| 18 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 39 |
| 19-20 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 38 |
| 21 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 36 |
| 22-23 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 35 |
| 24-25 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 34 |
| 26 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(2, 4)) | 32 |
| 27-28 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 31 |
| 29-30 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 30 |
| 31 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 28 |
| 32-34 | Di chuyển hướng 1 (`1`) | (3, 1) | (3, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(3, 0)) | 26 |
| 35-36 | Di chuyển hướng 4 (`4`) | (3, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 25 |
| 37-39 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 23 |
| 40 | Di chuyển hướng 3 (`3`) | (2, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 21 |
| 41-42 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 20 |
| 43 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 18 |
| 44 | Chờ 1 bước (`-1`) | (4, 5) | (4, 5) | Dự kiến đứng yên tại (4, 5); hướng tới tọa độ (4, 5) | 18 |
| 45 | Chờ 1 bước (`-1`) | (4, 5) | (4, 5) | Dự kiến đứng yên tại (4, 5); hướng tới tọa độ (4, 5) | 18 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (12, 3) (ô=78)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 19)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 3, 4, 4, 4, 4, 4, 2, 2, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 53 |
| 2-3 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 53 |
| 4-6 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 6)) | 53 |
| 7-8 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 53 |
| 9-10 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 53 |
| 11 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 53 |
| 12-13 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 53 |
| 14-15 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 53 |
| 16 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 53 |
| 17 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 53 |
| 18-19 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 53 |
| 20-21 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 53 |
| 22-23 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 53 |
| 24-25 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 53 |
| 26-28 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 53 |
| 29-30 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 53 |
| 31-33 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 53 |
| 34-35 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 53 |
| 36-45 | Chờ 10 bước (`-10`) | (14, 19) | (14, 19) | Dự kiến đứng yên tại (14, 19); hướng tới tọa độ (14, 19) | 53 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (2, 11) (ô=244)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 16)
- Mảng hành động đã gửi server: `[2, 3, 4, 3, 4, 1, 0, 1, 1, 2, 1, 0, 3, 3, 3, 3, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 52 |
| 2-4 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 50 |
| 5-6 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 49 |
| 7-9 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 47 |
| 10-12 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 45 |
| 13-14 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 44 |
| 15-17 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 42 |
| 18-20 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 40 |
| 21-22 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 39 |
| 23-25 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 37 |
| 26-27 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 28-29 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 35 |
| 30-31 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 34 |
| 32-33 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 33 |
| 34-36 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 31 |
| 37-38 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 30 |
| 39-40 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 29 |
| 41-42 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 28 |
| 43-44 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 27 |
| 45 | Chờ 1 bước (`-1`) | (8, 16) | (8, 16) | Dự kiến đứng yên tại (8, 16); hướng tới tọa độ (8, 16) | 27 |

