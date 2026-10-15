# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 48
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 25 | #0 | #1 | (9, 5) | 0 | 51 |
| 33 | #0 | #1 | (9, 5) | 47 | 51 |
| 33 | #5 | #2 | (9, 18) | 2 | 51 |
| 36 | #5 | #2 | (9, 18) | 48 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (18, 1) (ô=40)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[5, 4, 4, 5, 4, 4, 5, 5, 5, 5, 4, 0, 0, 1, 4, 3, -1, 5, 5, 5, 0, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 18 |
| 2-4 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 16 |
| 5-6 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 15 |
| 7 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 13 |
| 8 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 11 |
| 9 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 9 |
| 10-12 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 7 |
| 13-15 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 5 |
| 16-17 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 4 |
| 18-19 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 3 |
| 20-22 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 6)) | 1 |
| 23-24 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 51 |
| 25-26 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 50 |
| 27-28 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 3)) | 49 |
| 29-30 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 48 |
| 31-32 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 51 |
| 33 | Chờ 1 bước (`-1`) | (9, 5) | (9, 5) | Dự kiến đứng yên tại (9, 5); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 51 |
| 34-35 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 50 |
| 36-38 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 48 |
| 39 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 46 |
| 40-41 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 45 |
| 42-43 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 44 |
| 44 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 42 |
| 45-47 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 40 |

### Xe #1 - Tiếp tế

- Vị trí đầu ngày: (2, 11) (ô=244)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(9, 5))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(9, 5))
- Mảng hành động đã gửi server: `[2, 1, 2, 1, 1, 1, 2, 1, 2, 1, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 51 |
| 2-4 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 5 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 51 |
| 6-7 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 51 |
| 8-10 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 51 |
| 11 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 51 |
| 12-14 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 51 |
| 15-16 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 51 |
| 17-19 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 51 |
| 20 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 51 |
| 21-47 | Chờ 27 bước (`-27`) | (9, 5) | (9, 5) | Dự kiến đứng yên tại (9, 5); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 51 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (18, 7) (ô=172)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 18)
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 4, 4, 5, 4, 4, 4, 4, 3, 4, 4, 5, 4, 2, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 51 |
| 3-4 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 51 |
| 5 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 51 |
| 6-7 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 8 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 51 |
| 9 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 51 |
| 10-12 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 51 |
| 13-14 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 51 |
| 15-16 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 51 |
| 17-18 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 51 |
| 19-20 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 51 |
| 21 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 51 |
| 22 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 51 |
| 23 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 51 |
| 24 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 51 |
| 25 | Di chuyển hướng 4 (`4`) | (9, 17) | (8, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 18)) | 51 |
| 26-27 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 51 |
| 28-47 | Chờ 20 bước (`-20`) | (9, 18) | (9, 18) | Dự kiến đứng yên tại (9, 18); hướng tới tọa độ (9, 18) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 7) (ô=172)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 1)
- Mảng hành động đã gửi server: `[3, 4, 4, 3, 2, 2, 1, 2, 0, 1, 0, 5, 0, 0, 0, 0, 0, 1, 0, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 49 |
| 3-4 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 48 |
| 5-7 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 46 |
| 8-9 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 45 |
| 10-11 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 44 |
| 12-13 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 43 |
| 14 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 41 |
| 15-17 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 10)) | 39 |
| 18-19 | Di chuyển hướng 0 (`0`) | (21, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 38 |
| 20 | Di chuyển hướng 1 (`1`) | (21, 9) | (21, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 8)) | 36 |
| 21-22 | Di chuyển hướng 0 (`0`) | (21, 8) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 35 |
| 23-25 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 33 |
| 26-28 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 31 |
| 29-30 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 30 |
| 31-33 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 28 |
| 34-36 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 3)) | 26 |
| 37-38 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 25 |
| 39-41 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 1)) | 23 |
| 42-43 | Di chuyển hướng 0 (`0`) | (18, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 0)) | 22 |
| 44-45 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 21 |
| 46-47 | Chờ 2 bước (`-2`) | (17, 1) | (17, 1) | Dự kiến đứng yên tại (17, 1); hướng tới tọa độ (17, 1) | 21 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 11) (ô=244)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(4, 10))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(4, 10))
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 4, 4, 4, 4, 3, 4, 1, 0, 1, 1, 1, 1, 1, 2, 2, 1, 1, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(1, 12)) | 49 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 48 |
| 4-6 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 46 |
| 7 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 44 |
| 8-10 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 42 |
| 11-12 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 41 |
| 13-15 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 39 |
| 16 | Di chuyển hướng 4 (`4`) | (0, 18) | (0, 19) | Dự kiến đến điểm hẹn tọa độ (0, 19) | 37 |
| 17-18 | Di chuyển hướng 3 (`3`) | (0, 19) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 36 |
| 19-20 | Di chuyển hướng 4 (`4`) | (0, 20) | (0, 21) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 21)) | 35 |
| 21-22 | Di chuyển hướng 1 (`1`) | (0, 21) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 34 |
| 23-24 | Di chuyển hướng 0 (`0`) | (0, 20) | (0, 19) | Dự kiến đến điểm hẹn tọa độ (0, 19) | 33 |
| 25-26 | Di chuyển hướng 1 (`1`) | (0, 19) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 32 |
| 27 | Di chuyển hướng 1 (`1`) | (0, 18) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 30 |
| 28-30 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 28 |
| 31-32 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 27 |
| 33-35 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 25 |
| 36 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 23 |
| 37 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 21 |
| 38-40 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 13)) | 19 |
| 41-42 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 18 |
| 43-44 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 17 |
| 45-46 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 16 |
| 47 | Chờ 1 bước (`-1`) | (4, 10) | (4, 10) | Dự kiến đứng yên tại (4, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 16 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (19, 16) (ô=371)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 11)
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 4, 4, 5, 0, 5, 0, 0, 0, 4, 4, 5, 5, 2, 1, 1, 1, 0, 1, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (19, 16) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 22 |
| 3-4 | Di chuyển hướng 5 (`5`) | (18, 16) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 21 |
| 5 | Di chuyển hướng 4 (`4`) | (17, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 19 |
| 6-8 | Di chuyển hướng 4 (`4`) | (17, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 17 |
| 9 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 15 |
| 10-12 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 20)) | 13 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 12 |
| 15-16 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 11 |
| 17-18 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 10 |
| 19-20 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 9 |
| 21-23 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 7 |
| 24-26 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 5 |
| 27-28 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 4 |
| 29-30 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 3 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 51 |
| 33 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 18)) | 49 |
| 34-35 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 51 |
| 36 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 49 |
| 37 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 47 |
| 38 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 45 |
| 39 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 43 |
| 40 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 41 |
| 41-42 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 40 |
| 43-44 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 11)) | 39 |
| 45-46 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 38 |
| 47 | Chờ 1 bước (`-1`) | (9, 11) | (9, 11) | Dự kiến đứng yên tại (9, 11); hướng tới tọa độ (9, 11) | 38 |

