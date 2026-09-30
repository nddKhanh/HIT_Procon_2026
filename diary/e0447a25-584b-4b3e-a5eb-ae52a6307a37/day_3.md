# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 90
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #4 | (18, 8) | 35 | 36 |
| 3 | #2 | #4 | (18, 9) | 34 | 36 |
| 4 | #2 | #4 | (17, 10) | 34 | 36 |
| 5 | #2 | #4 | (16, 10) | 34 | 36 |
| 6 | #2 | #4 | (15, 10) | 34 | 36 |
| 19 | #0 | #4 | (3, 9) | 1 | 36 |
| 46 | #1 | #4 | (20, 0) | 4 | 36 |
| 48 | #1 | #4 | (20, 1) | 35 | 36 |
| 50 | #1 | #4 | (19, 2) | 35 | 36 |
| 51 | #1 | #4 | (19, 3) | 34 | 36 |
| 53 | #1 | #4 | (18, 4) | 35 | 36 |
| 54 | #1 | #4 | (18, 5) | 34 | 36 |
| 55 | #1 | #4 | (17, 6) | 34 | 36 |
| 63 | #2 | #4 | (19, 12) | 9 | 36 |
| 67 | #2 | #4 | (19, 12) | 34 | 36 |
| 78 | #1 | #4 | (19, 12) | 14 | 36 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 9) (ô=192)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(9, 8))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(9, 8))
- Mảng hành động đã gửi server: `[-20, 4, 4, 4, 4, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 0, -44]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-19 | Chờ 20 bước (`-20`) | (3, 9) | (3, 9) | Dự kiến đứng yên tại (3, 9); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 36 |
| 20-21 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 35 |
| 22 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 33 |
| 23 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 31 |
| 24-26 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(1, 13)) | 29 |
| 27-28 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 28 |
| 29 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 26 |
| 30-32 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 24 |
| 33-34 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 23 |
| 35-37 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 21 |
| 38 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 19 |
| 39 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 17 |
| 40-41 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 16 |
| 42 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 14 |
| 43 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 12 |
| 44 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 10 |
| 45 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 8 |
| 46-89 | Chờ 44 bước (`-44`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 8 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(20, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(20, 12))
- Mảng hành động đã gửi server: `[-46, 4, 4, 4, 4, 4, 4, 5, 4, 4, 5, 4, 3, 3, 4, 3, 1, 2, 2, 2, 2, 2, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-45 | Chờ 46 bước (`-46`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 36 |
| 46-47 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 36 |
| 48-49 | Di chuyển hướng 4 (`4`) | (20, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 36 |
| 50 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 36 |
| 51-52 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 36 |
| 53 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 36 |
| 54 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 36 |
| 55 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 34 |
| 56 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 32 |
| 57-59 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 30 |
| 60-61 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 29 |
| 62 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 27 |
| 63 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 25 |
| 64 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 23 |
| 65-66 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 22 |
| 67 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 20 |
| 68-69 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 19 |
| 70-71 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 18 |
| 72-73 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 17 |
| 74-75 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 16 |
| 76-77 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 36 |
| 78-79 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 35 |
| 80-89 | Chờ 10 bước (`-10`) | (20, 12) | (20, 12) | Dự kiến đứng yên tại (20, 12); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 35 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 7) (ô=166)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 4, 4, 3, 0, 0, 0, 1, 1, 2, 2, 3, 3, 3, 3, 2, -34, 2, 5, 5, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 36 |
| 2 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 36 |
| 3 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 36 |
| 4 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 36 |
| 5 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 36 |
| 6 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 34 |
| 7-8 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 33 |
| 9 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 31 |
| 10-11 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 30 |
| 12 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 28 |
| 13 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 26 |
| 14 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 24 |
| 15 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 22 |
| 16 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 20 |
| 17-18 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 19 |
| 19-21 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 17 |
| 22-24 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 15 |
| 25 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 13 |
| 26 | Di chuyển hướng 3 (`3`) | (18, 11) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 11 |
| 27-28 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 9 |
| 29-62 | Chờ 34 bước (`-34`) | (19, 12) | (19, 12) | Dự kiến đứng yên tại (19, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 36 |
| 63-64 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 35 |
| 65-66 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 36 |
| 67-68 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 35 |
| 69-70 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 33 |
| 71 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 31 |
| 72 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 29 |
| 73 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 27 |
| 74 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 25 |
| 75-76 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 24 |
| 77 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 22 |
| 78-80 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 20 |
| 81-82 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 19 |
| 83-85 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 17 |
| 86 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 15 |
| 87-88 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 14 |
| 89 | Chờ 1 bước (`-1`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 14 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 0) (ô=3)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(3, 0))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(3, 0))
- Mảng hành động đã gửi server: `[-90]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-89 | Chờ 90 bước (`-90`) | (3, 0) | (3, 0) | Dự kiến đứng yên tại (3, 0); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 0 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (19, 7) (ô=166)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(19, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(19, 12))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 3, 3, 4, 4, 3, 3, 2, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 36 |
| 2 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 36 |
| 3 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 36 |
| 4 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 36 |
| 5 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 36 |
| 6 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 36 |
| 7 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 36 |
| 8 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 36 |
| 9 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 36 |
| 10 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 36 |
| 11 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 36 |
| 12 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 36 |
| 13 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 36 |
| 14 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 36 |
| 15 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 16 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 36 |
| 17 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 36 |
| 18 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 36 |
| 19-20 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 36 |
| 21-22 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 36 |
| 23-24 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 36 |
| 25 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 36 |
| 26 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 36 |
| 27 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 36 |
| 28 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 36 |
| 29 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 36 |
| 30 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 36 |
| 31 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 36 |
| 32 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 36 |
| 33 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 36 |
| 34 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 36 |
| 35 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 36 |
| 36 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 36 |
| 37 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 36 |
| 38 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 36 |
| 39 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 36 |
| 40 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 36 |
| 41-42 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 36 |
| 43 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 36 |
| 44-45 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 36 |
| 46-47 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 36 |
| 48-49 | Di chuyển hướng 4 (`4`) | (20, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 36 |
| 50 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 36 |
| 51-52 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 36 |
| 53 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 36 |
| 54 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 36 |
| 55 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 36 |
| 56 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 36 |
| 57 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 36 |
| 58 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 36 |
| 59 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 36 |
| 60 | Di chuyển hướng 3 (`3`) | (18, 11) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 36 |
| 61-62 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 36 |
| 63-89 | Chờ 27 bước (`-27`) | (19, 12) | (19, 12) | Dự kiến đứng yên tại (19, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 36 |

