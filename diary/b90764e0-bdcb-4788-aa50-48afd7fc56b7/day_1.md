# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 46
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #4 | #1 | (4, 10) | 0 | 51 |
| 30 | #4 | #1 | (4, 9) | 50 | 51 |
| 33 | #4 | #1 | (3, 8) | 49 | 51 |
| 34 | #3 | #2 | (21, 8) | 5 | 51 |
| 36 | #4 | #1 | (3, 9) | 49 | 51 |
| 37 | #3 | #2 | (21, 7) | 50 | 51 |
| 39 | #4 | #1 | (3, 10) | 49 | 51 |
| 40 | #3 | #2 | (20, 7) | 49 | 51 |
| 40 | #4 | #1 | (3, 11) | 49 | 51 |
| 43 | #3 | #2 | (19, 7) | 49 | 51 |
| 43 | #4 | #1 | (2, 11) | 49 | 51 |
| 45 | #3 | #2 | (18, 7) | 50 | 51 |
| 46 | #4 | #1 | (2, 11) | 48 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=90)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(18, 1))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(18, 1))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 2, 2, 3, 0, 0, 1, 2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 50 |
| 2-4 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 48 |
| 5 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 46 |
| 6-7 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 45 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 44 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 42 |
| 11-13 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 40 |
| 14-15 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 6)) | 39 |
| 16-17 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 38 |
| 18-19 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 37 |
| 20-21 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 3)) | 36 |
| 22-23 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 35 |
| 24-25 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 34 |
| 26 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 32 |
| 27-28 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 31 |
| 29 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 29 |
| 30-32 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 27 |
| 33-35 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 25 |
| 36-37 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 24 |
| 38-40 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 22 |
| 41-43 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 0)) | 20 |
| 44-45 | Di chuyển hướng 3 (`3`) | (17, 0) | (18, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 1)) | 19 |

### Xe #1 - Tiếp tế

- Vị trí đầu ngày: (2, 4) (ô=90)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 11)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 4, -13, 0, 0, 4, 3, 4, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 51 |
| 2-4 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 51 |
| 5 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 51 |
| 6-8 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 51 |
| 9-11 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 51 |
| 12-14 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 51 |
| 15-27 | Chờ 13 bước (`-13`) | (4, 10) | (4, 10) | Dự kiến đứng yên tại (4, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 51 |
| 28-29 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 51 |
| 30-32 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 51 |
| 33-35 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 51 |
| 36-38 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 39 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 51 |
| 40-42 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 51 |
| 43-45 | Chờ 3 bước (`-3`) | (2, 11) | (2, 11) | Dự kiến đứng yên tại (2, 11); hướng tới tọa độ (2, 11) | 51 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (9, 12) (ô=273)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 7)
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, -2, 0, 5, 5, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 51 |
| 4-5 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 51 |
| 6-7 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 51 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 51 |
| 10-11 | Di chuyển hướng 1 (`1`) | (12, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 51 |
| 12-14 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 51 |
| 15 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 51 |
| 18-20 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 51 |
| 21-22 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 51 |
| 23-25 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 51 |
| 26-28 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 51 |
| 29-30 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 51 |
| 31 | Di chuyển hướng 1 (`1`) | (21, 9) | (21, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 8)) | 51 |
| 32-33 | Chờ 2 bước (`-2`) | (21, 8) | (21, 8) | Dự kiến đứng yên tại (21, 8); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 8)) | 51 |
| 34-35 | Di chuyển hướng 0 (`0`) | (21, 8) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 51 |
| 36-38 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 39-41 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 51 |
| 42-43 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 51 |
| 44-45 | Chờ 2 bước (`-2`) | (18, 7) | (18, 7) | Dự kiến đứng yên tại (18, 7); hướng tới tọa độ (18, 7) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 1) (ô=40)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 7)
- Mảng hành động đã gửi server: `[3, 4, 4, 3, 3, 3, 4, 4, 4, 3, 2, 2, 1, 2, 0, 1, -1, 0, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 26 |
| 2-4 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 3)) | 24 |
| 5-6 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 23 |
| 7-8 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 22 |
| 9-11 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 20 |
| 12-13 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 19 |
| 14-15 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 18 |
| 16-17 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 17 |
| 18-20 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 15 |
| 21-22 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 14 |
| 23-24 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 13 |
| 25-26 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 12 |
| 27 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 10 |
| 28-30 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 10)) | 8 |
| 31-32 | Di chuyển hướng 0 (`0`) | (21, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 7 |
| 33 | Di chuyển hướng 1 (`1`) | (21, 9) | (21, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 8)) | 51 |
| 34 | Chờ 1 bước (`-1`) | (21, 8) | (21, 8) | Dự kiến đứng yên tại (21, 8); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 8)) | 51 |
| 35-36 | Di chuyển hướng 0 (`0`) | (21, 8) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 51 |
| 37-39 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 40-42 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 51 |
| 43-44 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 51 |
| 45 | Chờ 1 bước (`-1`) | (18, 7) | (18, 7) | Dự kiến đứng yên tại (18, 7); hướng tới tọa độ (18, 7) | 51 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 21) (ô=463)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 11)
- Mảng hành động đã gửi server: `[5, 1, 0, 1, 1, 1, 1, 1, 2, 2, 1, 1, 0, 0, 0, 0, 4, 3, 4, 5, 4, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (1, 21) | (0, 21) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 21)) | 19 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 21) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 18 |
| 4-5 | Di chuyển hướng 0 (`0`) | (0, 20) | (0, 19) | Dự kiến đến điểm hẹn tọa độ (0, 19) | 17 |
| 6-7 | Di chuyển hướng 1 (`1`) | (0, 19) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 16 |
| 8 | Di chuyển hướng 1 (`1`) | (0, 18) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 14 |
| 9-11 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 12 |
| 12-13 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 11 |
| 14-16 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 9 |
| 17 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 7 |
| 18 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 5 |
| 19-21 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 13)) | 3 |
| 22-23 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 2 |
| 24-25 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 1 |
| 26-27 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 51 |
| 28-29 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 51 |
| 30-32 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 51 |
| 33-35 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 51 |
| 36-38 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 39 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 51 |
| 40-42 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 51 |
| 43 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(1, 12)) | 49 |
| 44-45 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 51 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (10, 11) (ô=252)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 16)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 5, 2, 3, 3, 3, 3, 2, 2, 1, 2, 2, 2, 1, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 48 |
| 2-3 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 47 |
| 4-5 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 46 |
| 6-8 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 44 |
| 9-10 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 43 |
| 11-12 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 42 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 41 |
| 15-16 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 40 |
| 17-19 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 38 |
| 20-22 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 36 |
| 23-24 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 35 |
| 25-26 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 20)) | 34 |
| 27-28 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 33 |
| 29-30 | Di chuyển hướng 1 (`1`) | (16, 20) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 32 |
| 31-32 | Di chuyển hướng 2 (`2`) | (17, 19) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 31 |
| 33-34 | Di chuyển hướng 2 (`2`) | (18, 19) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 30 |
| 35-37 | Di chuyển hướng 2 (`2`) | (19, 19) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 28 |
| 38-39 | Di chuyển hướng 1 (`1`) | (20, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(20, 18)) | 27 |
| 40-41 | Di chuyển hướng 0 (`0`) | (20, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 26 |
| 42-44 | Di chuyển hướng 0 (`0`) | (20, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 24 |
| 45 | Chờ 1 bước (`-1`) | (19, 16) | (19, 16) | Dự kiến đứng yên tại (19, 16); hướng tới tọa độ (19, 16) | 24 |

