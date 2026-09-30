# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 44
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 35 | #0 | #1 | (2, 4) | 24 | 51 |
| 43 | #0 | #1 | (2, 4) | 47 | 51 |
| 43 | #5 | #2 | (9, 12) | 13 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 0) (ô=4)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[3, 2, 2, 3, 3, 2, 5, 3, 3, 3, 5, 0, 5, 5, 0, 5, 5, 5, 0, 0, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 50 |
| 2 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 48 |
| 3-5 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 46 |
| 6 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 44 |
| 7-9 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 42 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 3)) | 41 |
| 12-13 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 40 |
| 14-15 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 39 |
| 16-17 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 38 |
| 18-19 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 6)) | 37 |
| 20-21 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 36 |
| 22 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 34 |
| 23-25 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 32 |
| 26 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 30 |
| 27-28 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 29 |
| 29-30 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 28 |
| 31 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 26 |
| 32-34 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 51 |
| 35-36 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 50 |
| 37-38 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 2)) | 49 |
| 39-40 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 48 |
| 41-42 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 51 |
| 43 | Chờ 1 bước (`-1`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 51 |

### Xe #1 - Tiếp tế

- Vị trí đầu ngày: (11, 2) (ô=55)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 5, 4, 5, 5, 5, 5, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 51 |
| 2 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 51 |
| 3-4 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 3)) | 51 |
| 5-6 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 51 |
| 7-8 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 51 |
| 9-11 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 51 |
| 12-14 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 51 |
| 15-16 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 51 |
| 17 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 51 |
| 18-20 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 51 |
| 21-43 | Chờ 23 bước (`-23`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 51 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (19, 7) (ô=173)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 12)
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 4, 4, 5, 4, 4, 5, 4, 5, 4, 4, 4, 1, 1, 1, 0, 0, 0, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 51 |
| 2-3 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 51 |
| 4-6 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 51 |
| 7-8 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 51 |
| 9-10 | Di chuyển hướng 4 (`4`) | (16, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 51 |
| 11-12 | Di chuyển hướng 4 (`4`) | (16, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 51 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 15-17 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 51 |
| 18 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 51 |
| 19 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 51 |
| 20-21 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 51 |
| 22-23 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 51 |
| 24 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 51 |
| 25 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 51 |
| 26 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 51 |
| 27 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 51 |
| 28 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 51 |
| 29 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 51 |
| 30 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 51 |
| 31 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 51 |
| 32-33 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 51 |
| 34-43 | Chờ 10 bước (`-10`) | (9, 12) | (9, 12) | Dự kiến đứng yên tại (9, 12); hướng tới tọa độ (9, 12) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 4) (ô=105)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(18, 1))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(18, 1))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 4, 4, 3, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 50 |
| 2-4 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 48 |
| 5-6 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 47 |
| 7-8 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 46 |
| 9-10 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 45 |
| 11-13 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 43 |
| 14-15 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 42 |
| 16-17 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 41 |
| 18-19 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 40 |
| 20-22 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 38 |
| 23-24 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 37 |
| 25-26 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 36 |
| 27-28 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 35 |
| 29-31 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 33 |
| 32-33 | Di chuyển hướng 1 (`1`) | (17, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 3)) | 32 |
| 34-35 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 31 |
| 36-38 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 1)) | 29 |
| 39-40 | Di chuyển hướng 0 (`0`) | (18, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 0)) | 28 |
| 41-42 | Di chuyển hướng 3 (`3`) | (17, 0) | (18, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 1)) | 27 |
| 43 | Chờ 1 bước (`-1`) | (18, 1) | (18, 1) | Dự kiến đứng yên tại (18, 1); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 1)) | 27 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=338)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 21)
- Mảng hành động đã gửi server: `[0, 5, 5, 0, 1, 0, 0, 5, 4, 5, 4, 3, 3, 4, 4, 4, 4, 4, 3, 4, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 50 |
| 2-4 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 48 |
| 5-6 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 47 |
| 7-9 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 13)) | 45 |
| 10-11 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 44 |
| 12-13 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 43 |
| 14-15 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 42 |
| 16-17 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 41 |
| 18 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 39 |
| 19-21 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 37 |
| 22 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(1, 12)) | 35 |
| 23-24 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 34 |
| 25-27 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 32 |
| 28 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 30 |
| 29-31 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 28 |
| 32-33 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 27 |
| 34-36 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 25 |
| 37 | Di chuyển hướng 4 (`4`) | (0, 18) | (0, 19) | Dự kiến đến điểm hẹn tọa độ (0, 19) | 23 |
| 38-39 | Di chuyển hướng 3 (`3`) | (0, 19) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 22 |
| 40-41 | Di chuyển hướng 4 (`4`) | (0, 20) | (0, 21) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 21)) | 21 |
| 42-43 | Di chuyển hướng 2 (`2`) | (0, 21) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 20 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (16, 11) (ô=258)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(10, 11))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(10, 11))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 0, 5, 5, 5, 5, 0, 5, 2, 1, 1, 2, 0, 0, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 50 |
| 2-3 | Di chuyển hướng 3 (`3`) | (16, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 49 |
| 4-6 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 47 |
| 7-8 | Di chuyển hướng 3 (`3`) | (17, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 46 |
| 9-10 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 45 |
| 11 | Di chuyển hướng 4 (`4`) | (17, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 43 |
| 12-14 | Di chuyển hướng 4 (`4`) | (17, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 41 |
| 15 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 39 |
| 16-18 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 20)) | 37 |
| 19-20 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 36 |
| 21-22 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 35 |
| 23-24 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 34 |
| 25-26 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 33 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 32 |
| 29 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 30 |
| 30 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 28 |
| 31 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 18)) | 26 |
| 32-33 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 25 |
| 34 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 23 |
| 35 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 21 |
| 36 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 19 |
| 37-38 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 18 |
| 39 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 16 |
| 40 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 14 |
| 41-42 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 51 |
| 43 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 11)) | 49 |

