# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 56
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 42 | #5 | #7 | (1, 5) | 0 | 54 |
| 54 | #3 | #7 | (5, 3) | 18 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 20) (ô=531)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(11, 20))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(11, 20))
- Mảng hành động đã gửi server: `[-56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-55 | Chờ 56 bước (`-56`) | (11, 20) | (11, 20) | Dự kiến đứng yên tại (11, 20); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 12) (ô=328)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(16, 12))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(16, 12))
- Mảng hành động đã gửi server: `[-56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-55 | Chờ 56 bước (`-56`) | (16, 12) | (16, 12) | Dự kiến đứng yên tại (16, 12); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 13) (ô=349)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 13))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 13))
- Mảng hành động đã gửi server: `[0, 4, 4, 5, 4, 4, 5, 0, 5, 0, 0, 0, 4, 5, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 21 |
| 2-4 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 19 |
| 5 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 17 |
| 6-7 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 16 |
| 8-9 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 15 |
| 10-11 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 14 |
| 12-13 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 13 |
| 14-15 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 12 |
| 16 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 10 |
| 17-18 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 9 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 8 |
| 21-22 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 7 |
| 23-24 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 6 |
| 25 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 4 |
| 26-55 | Chờ 30 bước (`-30`) | (2, 13) | (2, 13) | Dự kiến đứng yên tại (2, 13); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 4 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 5) (ô=151)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(5, 4))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(5, 4))
- Mảng hành động đã gửi server: `[5, 0, 1, 0, 0, 0, 5, 4, 4, 4, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0, 0, 0, 0, 0, 0, 5, 0, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 5)) | 52 |
| 2-3 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 51 |
| 4 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 49 |
| 5-6 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 48 |
| 7-8 | Di chuyển hướng 0 (`0`) | (19, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 47 |
| 9-11 | Di chuyển hướng 0 (`0`) | (19, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 45 |
| 12-13 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 44 |
| 14-15 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 43 |
| 16-17 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 42 |
| 18 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 40 |
| 19-20 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 39 |
| 21-22 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 38 |
| 23-24 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 37 |
| 25-26 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 36 |
| 27 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 34 |
| 28-29 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 33 |
| 30 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 31 |
| 31-32 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 30 |
| 33-34 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 29 |
| 35-36 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 28 |
| 37-38 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 27 |
| 39-40 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 26 |
| 41-42 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 25 |
| 43-44 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 24 |
| 45 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 22 |
| 46-47 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 21 |
| 48-49 | Di chuyển hướng 0 (`0`) | (6, 2) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 20 |
| 50-51 | Di chuyển hướng 4 (`4`) | (6, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 19 |
| 52-53 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 54 |
| 54-55 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 53 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 20) (ô=524)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(4, 20))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(4, 20))
- Mảng hành động đã gửi server: `[-56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-55 | Chờ 56 bước (`-56`) | (4, 20) | (4, 20) | Dự kiến đứng yên tại (4, 20); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 1 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 4) (ô=109)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(1, 1))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(1, 1))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, -35, 0, 0, 1, 1, 0, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 6 |
| 2 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 4 |
| 3-4 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 3 |
| 5 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 1 |
| 6-7 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 0 |
| 8-42 | Chờ 35 bước (`-35`) | (1, 5) | (1, 5) | Dự kiến đứng yên tại (1, 5); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 54 |
| 43-44 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 53 |
| 45-46 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 52 |
| 47-48 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 51 |
| 49-50 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 50 |
| 51-52 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 49 |
| 53-54 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 48 |
| 55 | Chờ 1 bước (`-1`) | (1, 1) | (1, 1) | Dự kiến đứng yên tại (1, 1); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 48 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (24, 12) (ô=336)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(24, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(24, 12))
- Mảng hành động đã gửi server: `[-56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-55 | Chờ 56 bước (`-56`) | (24, 12) | (24, 12) | Dự kiến đứng yên tại (24, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 1 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (21, 5) (ô=151)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 3)
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 5, 5, 0, 5, 2, 1, 2, 1, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 54 |
| 2-3 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 54 |
| 4-5 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 54 |
| 6-7 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 54 |
| 8-9 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 54 |
| 10-11 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 54 |
| 12-13 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 54 |
| 14 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 54 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 54 |
| 17 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 54 |
| 18-19 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 54 |
| 20-21 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 54 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 54 |
| 24-25 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 54 |
| 26-27 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 54 |
| 28-29 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 54 |
| 30-31 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 54 |
| 32-33 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 54 |
| 34-35 | Di chuyển hướng 0 (`0`) | (5, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 54 |
| 36-37 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 54 |
| 38 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 54 |
| 39 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 54 |
| 40-41 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 54 |
| 42-43 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 54 |
| 44-45 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 54 |
| 46 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 54 |
| 47-48 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 54 |
| 49 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 54 |
| 50-55 | Chờ 6 bước (`-6`) | (5, 3) | (5, 3) | Dự kiến đứng yên tại (5, 3); hướng tới tọa độ (5, 3) | 54 |

