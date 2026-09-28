# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 51
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 23 | #4 | #6 | (10, 9) | 1 | 58 |
| 34 | #5 | #6 | (6, 6) | 32 | 58 |
| 36 | #2 | #6 | (6, 6) | 21 | 58 |
| 42 | #0 | #6 | (6, 6) | 7 | 58 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 8) (ô=155)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 10)
- Mảng hành động đã gửi server: `[3, 2, 3, 2, 2, 5, 5, 0, 5, 0, 0, 0, 0, 5, 5, 5, 0, 1, 4, 3, 4, 4, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 39 |
| 2-4 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 37 |
| 5 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 35 |
| 6 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 33 |
| 7 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 31 |
| 8-9 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 30 |
| 10 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 28 |
| 11 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 26 |
| 12 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 24 |
| 13-15 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 22 |
| 16-17 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 21 |
| 18-19 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 20 |
| 20-22 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 18 |
| 23-24 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 17 |
| 25-26 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 16 |
| 27-29 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 14 |
| 30-31 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 13 |
| 32-34 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 3)) | 11 |
| 35-36 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 10 |
| 37-39 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 8 |
| 40-41 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 58 |
| 42-43 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 57 |
| 44-45 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 56 |
| 46-47 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 55 |
| 48-49 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 54 |
| 50 | Chờ 1 bước (`-1`) | (4, 10) | (4, 10) | Dự kiến đứng yên tại (4, 10); hướng tới tọa độ (4, 10) | 54 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 14) (ô=264)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(16, 17))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(16, 17))
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 2, 2, 5, 0, 4, 4, 3, 4, 3, 3, 3, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 21 |
| 1 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 19 |
| 2-4 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 17 |
| 5-6 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 16 |
| 7-8 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 15 |
| 9-10 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 14 |
| 11-12 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 13 |
| 13-14 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 12 |
| 15-16 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 11 |
| 17-18 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 10 |
| 19-20 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 9 |
| 21-22 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 8 |
| 23-25 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 6 |
| 26 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 4 |
| 27-28 | Di chuyển hướng 3 (`3`) | (15, 16) | (16, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 17)) | 3 |
| 29-50 | Chờ 22 bước (`-22`) | (16, 17) | (16, 17) | Dự kiến đứng yên tại (16, 17); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 17)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 7) (ô=132)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(10, 2))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(10, 2))
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 5, 5, 3, 3, 3, 4, 1, 1, 2, 2, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 46 |
| 2-4 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 44 |
| 5-7 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 42 |
| 8 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 40 |
| 9-10 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 39 |
| 11-12 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 38 |
| 13-14 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 37 |
| 15-17 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 35 |
| 18 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 33 |
| 19 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 12)) | 31 |
| 20-21 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 30 |
| 22 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 28 |
| 23-24 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 10)) | 27 |
| 25-26 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 26 |
| 27-29 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 24 |
| 30-31 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 23 |
| 32-33 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 22 |
| 34-35 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 58 |
| 36-37 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 57 |
| 38-39 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 56 |
| 40-42 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 54 |
| 43-44 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 53 |
| 45-46 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 52 |
| 47-49 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 50 |
| 50 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 2)) | 48 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 4) (ô=72)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(1, 6))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(1, 6))
- Mảng hành động đã gửi server: `[3, 3, -46]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 4 |
| 2-4 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 2 |
| 5-50 | Chờ 46 bước (`-46`) | (1, 6) | (1, 6) | Dự kiến đứng yên tại (1, 6); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 2 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (6, 4) (ô=78)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 10)
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 3, 3, 5, 4, -1, 3, 4, 4, 4, 4, 5, 5, 0, 0, 5, 0, 5, 4, 4, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 12 |
| 3-4 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 11 |
| 5-7 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 9 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 8 |
| 10-11 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 7 |
| 12-14 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 5 |
| 15-16 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 4 |
| 17-19 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 2 |
| 20 | Chờ 1 bước (`-1`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 2 |
| 21-22 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 58 |
| 23 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 56 |
| 24-26 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 54 |
| 27-29 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 52 |
| 30-32 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 50 |
| 33 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 48 |
| 34-35 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 47 |
| 36 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 45 |
| 37-38 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 44 |
| 39-41 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 42 |
| 42 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 10)) | 40 |
| 43-44 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 39 |
| 45-46 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 38 |
| 47 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 12)) | 36 |
| 48-49 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 35 |
| 50 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 33 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (15, 10) (ô=195)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 13)
- Mảng hành động đã gửi server: `[2, 2, 4, 5, 0, 5, 5, 0, 5, 0, 0, 0, 0, 5, 5, 5, 4, 4, 4, 4, 3, 3, 4, 3, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(17, 10)) | 53 |
| 4-5 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 52 |
| 6-7 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 51 |
| 8-9 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 50 |
| 10-11 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 49 |
| 12 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 47 |
| 13 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 45 |
| 14 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 43 |
| 15-17 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 41 |
| 18-19 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 40 |
| 20-21 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 39 |
| 22-24 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 37 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 36 |
| 27-28 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 35 |
| 29-31 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 33 |
| 32-33 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 58 |
| 34-35 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 57 |
| 36-37 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 56 |
| 38-39 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 55 |
| 40-41 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 54 |
| 42-44 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 52 |
| 45 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 50 |
| 46-47 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 49 |
| 48 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 47 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 46 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (16, 10) (ô=196)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 6)
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 5, 5, 5, 0, 3, -7, 0, 5, 0, 0, 5, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 58 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 58 |
| 4 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 58 |
| 5 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 58 |
| 6 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 58 |
| 7-9 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 58 |
| 10-12 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 58 |
| 13 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 58 |
| 14-15 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 58 |
| 16-22 | Chờ 7 bước (`-7`) | (10, 9) | (10, 9) | Dự kiến đứng yên tại (10, 9); hướng tới tọa độ (10, 9) | 58 |
| 23 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 58 |
| 24-25 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 58 |
| 26-28 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 58 |
| 29-31 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 58 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 58 |
| 34-50 | Chờ 17 bước (`-17`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); hướng tới tọa độ (6, 6) | 58 |

