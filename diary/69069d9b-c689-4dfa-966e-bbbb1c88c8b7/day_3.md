# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 54
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 8 | #2 | #7 | (7, 8) | 42 | 54 |
| 33 | #3 | #7 | (17, 0) | 5 | 54 |
| 36 | #3 | #7 | (18, 1) | 53 | 54 |
| 38 | #3 | #7 | (18, 2) | 53 | 54 |
| 41 | #3 | #7 | (19, 3) | 52 | 54 |
| 45 | #3 | #7 | (20, 5) | 50 | 54 |
| 47 | #3 | #7 | (21, 5) | 53 | 54 |
| 54 | #3 | #7 | (21, 5) | 49 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 20) (ô=531)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(11, 20))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(11, 20))
- Mảng hành động đã gửi server: `[-54]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-53 | Chờ 54 bước (`-54`) | (11, 20) | (11, 20) | Dự kiến đứng yên tại (11, 20); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 12) (ô=328)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(16, 12))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(16, 12))
- Mảng hành động đã gửi server: `[-54]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-53 | Chờ 54 bước (`-54`) | (16, 12) | (16, 12) | Dự kiến đứng yên tại (16, 12); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 5) (ô=139)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(11, 13))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(11, 13))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 4, 5, 5, 5, 4, 4, 2, 1, 3, 3, 3, 2, 3, 2, 3, 2, 1, 2, 1, 1, 0, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 45 |
| 2-4 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 43 |
| 5-6 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 42 |
| 7-8 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 53 |
| 9-10 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 52 |
| 11 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 50 |
| 12-14 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 48 |
| 15 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 46 |
| 16-17 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 45 |
| 18 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 43 |
| 19-20 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 42 |
| 21-22 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 41 |
| 23 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 39 |
| 24-25 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 38 |
| 26-27 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 37 |
| 28-29 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 36 |
| 30-31 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 35 |
| 32 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 33 |
| 33-34 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 32 |
| 35-36 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 31 |
| 37-38 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 30 |
| 39-40 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 29 |
| 41 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 27 |
| 42 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 25 |
| 43-44 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 24 |
| 45 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 22 |
| 46-53 | Chờ 8 bước (`-8`) | (11, 13) | (11, 13) | Dự kiến đứng yên tại (11, 13); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 22 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 0) (ô=18)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 5)
- Mảng hành động đã gửi server: `[5, -32, 3, 3, 3, 3, 3, 2, 2, 2, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 5 |
| 2-33 | Chờ 32 bước (`-32`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 54 |
| 34-35 | Di chuyển hướng 3 (`3`) | (17, 0) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 54 |
| 36-37 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 54 |
| 38-40 | Di chuyển hướng 3 (`3`) | (18, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 54 |
| 41-43 | Di chuyển hướng 3 (`3`) | (19, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 52 |
| 44 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 5)) | 54 |
| 45-46 | Di chuyển hướng 2 (`2`) | (20, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 54 |
| 47 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 52 |
| 48-49 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 51 |
| 50-51 | Di chuyển hướng 5 (`5`) | (23, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 50 |
| 52-53 | Di chuyển hướng 5 (`5`) | (22, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 54 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 19) (ô=506)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(4, 20))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(4, 20))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 5, 5, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 10 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 9 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 8 |
| 6 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 6 |
| 7-8 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 5 |
| 9-10 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 4 |
| 11-12 | Di chuyển hướng 5 (`5`) | (6, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 3 |
| 13-15 | Di chuyển hướng 5 (`5`) | (5, 20) | (4, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 1 |
| 16-53 | Chờ 38 bước (`-38`) | (4, 20) | (4, 20) | Dự kiến đứng yên tại (4, 20); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 1 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (1, 5) (ô=131)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(5, 4))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(5, 4))
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 1, 1, 0, 1, 0, 0, 1, 1, 0, 2, 2, 2, 2, 2, 3, 3, 2, 3, 3, 3, 5, 0, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 41 |
| 2-3 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 40 |
| 4-6 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 38 |
| 7-8 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 9)) | 37 |
| 9-10 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 36 |
| 11-12 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 35 |
| 13-15 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 33 |
| 16-17 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 32 |
| 18-19 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 31 |
| 20-21 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 30 |
| 22-23 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 29 |
| 24-25 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 28 |
| 26-27 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 27 |
| 28-29 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 26 |
| 30 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 24 |
| 31 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 22 |
| 32-33 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 21 |
| 34-35 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 20 |
| 36 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 18 |
| 37-38 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 17 |
| 39-40 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 16 |
| 41-42 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 15 |
| 43 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 13 |
| 44-45 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 12 |
| 46-47 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 11 |
| 48 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 9 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 8 |
| 51-52 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 7 |
| 53 | Chờ 1 bước (`-1`) | (5, 4) | (5, 4) | Dự kiến đứng yên tại (5, 4); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 7 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (24, 12) (ô=336)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(24, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(24, 12))
- Mảng hành động đã gửi server: `[-54]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-53 | Chờ 54 bước (`-54`) | (24, 12) | (24, 12) | Dự kiến đứng yên tại (24, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 1 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (4, 6) (ô=160)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 5)
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 1, 1, 1, 2, 1, 1, 3, 3, 3, 3, 3, 2, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 54 |
| 2-3 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 54 |
| 4-5 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 54 |
| 6-7 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 54 |
| 8-9 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 54 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 54 |
| 12-13 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 54 |
| 14-15 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 54 |
| 16-17 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 54 |
| 18-19 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 54 |
| 20 | Di chuyển hướng 1 (`1`) | (13, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 54 |
| 21-23 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 54 |
| 24 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 54 |
| 25 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 54 |
| 26 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 54 |
| 27 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 54 |
| 28-29 | Di chuyển hướng 2 (`2`) | (15, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 54 |
| 30 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 54 |
| 31-32 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 54 |
| 33-34 | Di chuyển hướng 3 (`3`) | (17, 0) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 54 |
| 35-36 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 54 |
| 37-39 | Di chuyển hướng 3 (`3`) | (18, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 54 |
| 40-42 | Di chuyển hướng 3 (`3`) | (19, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 54 |
| 43 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 5)) | 54 |
| 44-45 | Di chuyển hướng 2 (`2`) | (20, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 54 |
| 46-53 | Chờ 8 bước (`-8`) | (21, 5) | (21, 5) | Dự kiến đứng yên tại (21, 5); hướng tới tọa độ (21, 5) | 54 |

