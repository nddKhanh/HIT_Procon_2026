# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 53
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 29 | #5 | #1 | (18, 11) | 3 | 51 |
| 33 | #4 | #2 | (3, 10) | 4 | 51 |
| 39 | #0 | #1 | (18, 11) | 19 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=269)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(21, 8))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(21, 8))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 3, 2, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 3, 2, 2, 1, 2, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 13)) | 50 |
| 2-3 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 49 |
| 4-6 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 47 |
| 7-9 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 45 |
| 10-12 | Di chuyển hướng 3 (`3`) | (6, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 43 |
| 13 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 41 |
| 14 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 18)) | 39 |
| 15-16 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 38 |
| 17 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 36 |
| 18 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 34 |
| 19 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 32 |
| 20-21 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 31 |
| 22-23 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 30 |
| 24-25 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 29 |
| 26 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 27 |
| 27 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 25 |
| 28-30 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 23 |
| 31-32 | Di chuyển hướng 1 (`1`) | (15, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 22 |
| 33-34 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 21 |
| 35-36 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 20 |
| 37-38 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 51 |
| 39-40 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 50 |
| 41-42 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 49 |
| 43-44 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 47 |
| 45-47 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 10)) | 45 |
| 48-49 | Di chuyển hướng 0 (`0`) | (21, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 44 |
| 50-51 | Di chuyển hướng 1 (`1`) | (21, 9) | (21, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 8)) | 42 |
| 52 | Chờ 1 bước (`-1`) | (21, 8) | (21, 8) | Dự kiến đứng yên tại (21, 8); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 8)) | 42 |

### Xe #1 - Tiếp tế

- Vị trí đầu ngày: (5, 12) (ô=269)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(18, 11))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(18, 11))
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 51 |
| 2-4 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 51 |
| 5-6 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 7 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 8 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 51 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 51 |
| 11-12 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 51 |
| 13-15 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 51 |
| 18 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 19-21 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 51 |
| 22-23 | Di chuyển hướng 1 (`1`) | (15, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 51 |
| 24-25 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 51 |
| 26-28 | Di chuyển hướng 2 (`2`) | (17, 11) | (18, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 51 |
| 29-52 | Chờ 24 bước (`-24`) | (18, 11) | (18, 11) | Dự kiến đứng yên tại (18, 11); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 51 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (1, 2) (ô=45)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 10)
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 3, 3, 3, 3, 2, 5, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 51 |
| 2-3 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 51 |
| 4-5 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 51 |
| 6 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 51 |
| 7 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 51 |
| 8-10 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 51 |
| 11-13 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 51 |
| 14-16 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 17 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 51 |
| 18-19 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 20-52 | Chờ 33 bước (`-33`) | (3, 10) | (3, 10) | Dự kiến đứng yên tại (3, 10); hướng tới tọa độ (3, 10) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 2) (ô=45)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 9)
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 3, 2, 2, 2, 3, 0, 0, 1, 2, 3, 3, 3, 3, 4, 4, 4, 4, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 50 |
| 2-3 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 49 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 48 |
| 6-8 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 46 |
| 9 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 44 |
| 10-11 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 43 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 42 |
| 14 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 40 |
| 15-17 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 38 |
| 18-19 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 6)) | 37 |
| 20-21 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 36 |
| 22-23 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 35 |
| 24-25 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 3)) | 34 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 33 |
| 28-29 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 32 |
| 30 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 30 |
| 31-32 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 29 |
| 33-35 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 27 |
| 36-38 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 25 |
| 39-41 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 23 |
| 42-43 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 22 |
| 44-46 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 11)) | 20 |
| 47-48 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 19 |
| 49-51 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 17 |
| 52 | Chờ 1 bước (`-1`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); hướng tới tọa độ (11, 9) | 17 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 21) (ô=464)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[5, 5, 1, 0, 1, 1, 1, 1, 1, 2, 2, 1, 1, 0, 0, -1, 5, 4, 5, 4, 1, 0, 0, 0, 1, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (2, 21) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 25 |
| 2-3 | Di chuyển hướng 5 (`5`) | (1, 21) | (0, 21) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 21)) | 24 |
| 4-5 | Di chuyển hướng 1 (`1`) | (0, 21) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 23 |
| 6-7 | Di chuyển hướng 0 (`0`) | (0, 20) | (0, 19) | Dự kiến đến điểm hẹn tọa độ (0, 19) | 22 |
| 8-9 | Di chuyển hướng 1 (`1`) | (0, 19) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 21 |
| 10 | Di chuyển hướng 1 (`1`) | (0, 18) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 19 |
| 11-13 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 17 |
| 14-15 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 16 |
| 16-18 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 14 |
| 19 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 12 |
| 20 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 10 |
| 21-23 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 13)) | 8 |
| 24-25 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 7 |
| 26-27 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 6 |
| 28-29 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 5 |
| 30 | Chờ 1 bước (`-1`) | (4, 10) | (4, 10) | Dự kiến đứng yên tại (4, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 5 |
| 31-32 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 33 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 49 |
| 34-36 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 47 |
| 37-38 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(1, 12)) | 45 |
| 39-40 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 44 |
| 41-42 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 42 |
| 43-44 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 41 |
| 45 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 39 |
| 46-48 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 37 |
| 49 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 35 |
| 50 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 33 |
| 51-52 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 32 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 19)
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 3, 3, 3, 4, 4, 4, 3, -5, 4, 3, 3, 3, 3, 3, 3, 4, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 0) | (18, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 1)) | 16 |
| 2-3 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 15 |
| 4-6 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 3)) | 13 |
| 7-8 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 12 |
| 9-10 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 11 |
| 11-13 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 9 |
| 14-15 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 8 |
| 16-17 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 7 |
| 18-19 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 6 |
| 20-22 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 4 |
| 23-24 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 3 |
| 25-29 | Chờ 5 bước (`-5`) | (18, 11) | (18, 11) | Dự kiến đứng yên tại (18, 11); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 51 |
| 30-31 | Di chuyển hướng 4 (`4`) | (18, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 50 |
| 32-34 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 48 |
| 35-36 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 47 |
| 37-38 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 46 |
| 39-40 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 45 |
| 41-43 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 43 |
| 44-46 | Di chuyển hướng 3 (`3`) | (20, 17) | (20, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(20, 18)) | 41 |
| 47-48 | Di chuyển hướng 4 (`4`) | (20, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 40 |
| 49-50 | Di chuyển hướng 5 (`5`) | (20, 19) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 39 |
| 51-52 | Chờ 2 bước (`-2`) | (19, 19) | (19, 19) | Dự kiến đứng yên tại (19, 19); hướng tới tọa độ (19, 19) | 39 |

