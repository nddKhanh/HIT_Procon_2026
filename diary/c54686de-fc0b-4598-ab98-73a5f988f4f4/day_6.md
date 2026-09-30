# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 58
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 25 | #6 | #3 | (13, 11) | 2 | 53 |
| 30 | #1 | #3 | (13, 11) | 28 | 53 |
| 34 | #4 | #5 | (10, 19) | 2 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 21) (ô=483)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(21, 21))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(21, 21))
- Mảng hành động đã gửi server: `[-58]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-57 | Chờ 58 bước (`-58`) | (21, 21) | (21, 21) | Dự kiến đứng yên tại (21, 21); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 21)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 3) (ô=68)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(18, 22))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(18, 22))
- Mảng hành động đã gửi server: `[3, 1, 2, 2, 3, 2, 2, 2, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 2, 3, 4, 4, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(2, 4)) | 47 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 46 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 45 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 44 |
| 8-9 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 43 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 41 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 40 |
| 14 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 38 |
| 15-16 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 37 |
| 17-18 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 36 |
| 19-20 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 35 |
| 21 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 33 |
| 22-23 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 32 |
| 24-25 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 31 |
| 26-27 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 29 |
| 28-29 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 53 |
| 30-31 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 52 |
| 32-34 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 50 |
| 35-36 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 49 |
| 37-38 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 48 |
| 39 | Di chuyển hướng 3 (`3`) | (15, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 46 |
| 40-41 | Di chuyển hướng 3 (`3`) | (16, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 45 |
| 42-44 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 43 |
| 45-47 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 17)) | 41 |
| 48-49 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 40 |
| 50 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 38 |
| 51 | Di chuyển hướng 4 (`4`) | (18, 19) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 36 |
| 52-53 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 35 |
| 54-56 | Di chuyển hướng 3 (`3`) | (18, 21) | (18, 22) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 22)) | 33 |
| 57 | Chờ 1 bước (`-1`) | (18, 22) | (18, 22) | Dự kiến đứng yên tại (18, 22); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 22)) | 33 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 7) (ô=159)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(3, 15))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(3, 15))
- Mảng hành động đã gửi server: `[3, 4, 3, 3, 3, 3, 4, 4, 4, 3, 4, 3, 4, 4, 5, 5, 3, 4, 1, 0, 1, 0, 1, 0, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 44 |
| 3 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 42 |
| 4-5 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 41 |
| 6-7 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 40 |
| 8-10 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 38 |
| 11-12 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 37 |
| 13-14 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 36 |
| 15-17 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 34 |
| 18-20 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 32 |
| 21-22 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 31 |
| 23 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 18)) | 29 |
| 24-25 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 28 |
| 26-27 | Di chuyển hướng 4 (`4`) | (6, 19) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 27 |
| 28-30 | Di chuyển hướng 4 (`4`) | (5, 20) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 25 |
| 31 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 23 |
| 32-34 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 21 |
| 35-36 | Di chuyển hướng 3 (`3`) | (3, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 20 |
| 37-38 | Di chuyển hướng 4 (`4`) | (3, 22) | (3, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 23)) | 19 |
| 39-40 | Di chuyển hướng 1 (`1`) | (3, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 18 |
| 41-42 | Di chuyển hướng 0 (`0`) | (3, 22) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 17 |
| 43-44 | Di chuyển hướng 1 (`1`) | (3, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 16 |
| 45-47 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 14 |
| 48-49 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 13 |
| 50-51 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 12 |
| 52-53 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 11 |
| 54-56 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 9 |
| 57 | Chờ 1 bước (`-1`) | (3, 15) | (3, 15) | Dự kiến đứng yên tại (3, 15); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 9 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (4, 11) (ô=246)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(13, 11))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(13, 11))
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, 2, 2, 2, 2, 1, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 53 |
| 3-4 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 53 |
| 5-7 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 53 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 53 |
| 10-12 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 53 |
| 13-14 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 53 |
| 15 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 53 |
| 16-18 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 53 |
| 19-21 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 53 |
| 22-24 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 53 |
| 25-57 | Chờ 33 bước (`-33`) | (13, 11) | (13, 11) | Dự kiến đứng yên tại (13, 11); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 53 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (16, 16) (ô=368)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 10)
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 5, 5, 5, 0, 5, 5, 5, 5, -9, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 20 |
| 3-5 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 18 |
| 6 | Di chuyển hướng 3 (`3`) | (17, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 16 |
| 7 | Di chuyển hướng 4 (`4`) | (18, 19) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 14 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 13 |
| 10-12 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 11 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 20)) | 10 |
| 15-16 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 9 |
| 17 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 7 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 6 |
| 20-22 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 4 |
| 23-25 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 2 |
| 26-34 | Chờ 9 bước (`-9`) | (10, 19) | (10, 19) | Dự kiến đứng yên tại (10, 19); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 53 |
| 35-36 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 52 |
| 37-39 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 50 |
| 40-41 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 49 |
| 42-43 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 48 |
| 44-45 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 47 |
| 46-47 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 46 |
| 48-49 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 45 |
| 50-51 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 44 |
| 52-54 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 42 |
| 55-56 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 41 |
| 57 | Chờ 1 bước (`-1`) | (4, 10) | (4, 10) | Dự kiến đứng yên tại (4, 10); hướng tới tọa độ (4, 10) | 41 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (5, 3) (ô=71)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(10, 19))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(10, 19))
- Mảng hành động đã gửi server: `[3, 4, 4, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 4, 3, 2, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 53 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 53 |
| 4-6 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 53 |
| 7-9 | Di chuyển hướng 3 (`3`) | (4, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 53 |
| 10-12 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 53 |
| 13 | Di chuyển hướng 3 (`3`) | (5, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 53 |
| 14 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 53 |
| 15-16 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 53 |
| 17-19 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 53 |
| 20-21 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 53 |
| 22-23 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 53 |
| 24-25 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 53 |
| 26-27 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 53 |
| 28-29 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 53 |
| 30-31 | Di chuyển hướng 4 (`4`) | (9, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 53 |
| 32 | Di chuyển hướng 3 (`3`) | (8, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 53 |
| 33 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 53 |
| 34-57 | Chờ 24 bước (`-24`) | (10, 19) | (10, 19) | Dự kiến đứng yên tại (10, 19); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 53 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (18, 3) (ô=84)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 1)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 4, 5, 4, 4, -4, 1, 1, 1, 0, 0, 1, 1, 1, 2, 2, 1, 2, 1, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 13 |
| 3-4 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 12 |
| 5-7 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 10 |
| 8-10 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 8 |
| 11-12 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 7 |
| 13-15 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 9)) | 5 |
| 16-17 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 4 |
| 18-19 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 3 |
| 20-21 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 2 |
| 22-25 | Chờ 4 bước (`-4`) | (13, 11) | (13, 11) | Dự kiến đứng yên tại (13, 11); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 53 |
| 26-27 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 52 |
| 28-29 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 51 |
| 30-31 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 50 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 48 |
| 34-35 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 6)) | 47 |
| 36-37 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 46 |
| 38-39 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 45 |
| 40-42 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 43 |
| 43-44 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 42 |
| 45-46 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 3)) | 41 |
| 47-48 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 40 |
| 49-50 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(18, 2)) | 39 |
| 51-52 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(19, 1)) | 38 |
| 53-54 | Di chuyển hướng 5 (`5`) | (19, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 37 |
| 55-56 | Di chuyển hướng 5 (`5`) | (18, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 36 |
| 57 | Di chuyển hướng 5 (`5`) | (17, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 34 |

