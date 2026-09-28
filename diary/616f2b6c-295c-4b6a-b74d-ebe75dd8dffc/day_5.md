# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 61
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #5 | #6 | (11, 7) | 1 | 58 |
| 33 | #2 | #6 | (6, 7) | 6 | 58 |
| 48 | #0 | #6 | (6, 7) | 7 | 58 |
| 57 | #4 | #6 | (6, 7) | 1 | 58 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 9) (ô=171)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(7, 13))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(7, 13))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 2, 2, 2, 2, 4, 0, 5, 5, 5, 0, 5, 0, 0, 0, 0, 5, 5, 5, 4, 4, 4, 4, 3, 3, 4, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 45 |
| 3-4 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 43 |
| 5-7 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 41 |
| 8-10 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 39 |
| 11 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 37 |
| 12 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 35 |
| 13 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 33 |
| 14-15 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 32 |
| 16 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(17, 10)) | 30 |
| 17-18 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 29 |
| 19-20 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 28 |
| 21 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 26 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 25 |
| 24 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 23 |
| 25 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 21 |
| 26 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 19 |
| 27-29 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 17 |
| 30-31 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 16 |
| 32-33 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 15 |
| 34-36 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 13 |
| 37-38 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 12 |
| 39-40 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 11 |
| 41-43 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 9 |
| 44-45 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 8 |
| 46-47 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 58 |
| 48-49 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 57 |
| 50-51 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 56 |
| 52-53 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 55 |
| 54-56 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 53 |
| 57 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 51 |
| 58-59 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 50 |
| 60 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 48 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 17) (ô=322)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(16, 17))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(16, 17))
- Mảng hành động đã gửi server: `[-61]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-60 | Chờ 61 bước (`-61`) | (16, 17) | (16, 17) | Dự kiến đứng yên tại (16, 17); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 17)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 6) (ô=109)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 9)
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 2, 2, 3, 2, 3, 3, 2, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 5, 4, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 31 |
| 2 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 29 |
| 3-4 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 28 |
| 5-7 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 26 |
| 8 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 24 |
| 9-10 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 10)) | 23 |
| 11-12 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 22 |
| 13 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 20 |
| 14-16 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 18 |
| 17-18 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 17 |
| 19 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 15 |
| 20-21 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 14 |
| 22-24 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 12 |
| 25 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 10 |
| 26-28 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 8 |
| 29-30 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 7 |
| 31-32 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 58 |
| 33-34 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 57 |
| 35-36 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 56 |
| 37-38 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 55 |
| 39-41 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 53 |
| 42-43 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 52 |
| 44-45 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 51 |
| 46-48 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 49 |
| 49-50 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 48 |
| 51-53 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 46 |
| 54-55 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 45 |
| 56-58 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 43 |
| 59-60 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 42 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 3) (ô=62)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(7, 13))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(7, 13))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 5, 4, 5, 0, 0, 0, 4, 3, 3, 4, 3, 3, 2, 2, 5, 4, 4, 2, 2, 2, 2, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 52 |
| 3-5 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 50 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 49 |
| 8-9 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 48 |
| 10-12 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 46 |
| 13-14 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 45 |
| 15-16 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 44 |
| 17-19 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 42 |
| 20 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 40 |
| 21-22 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 39 |
| 23-25 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 4)) | 37 |
| 26-27 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 36 |
| 28-30 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 34 |
| 31 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 32 |
| 32 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 30 |
| 33-34 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 29 |
| 35-37 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 27 |
| 38 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 25 |
| 39-40 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 10)) | 24 |
| 41-42 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 23 |
| 43-44 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 22 |
| 45-46 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 12)) | 20 |
| 47-48 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 19 |
| 49-51 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 17 |
| 52-53 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 16 |
| 54-56 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 14 |
| 57-58 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 13 |
| 59 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 11 |
| 60 | Chờ 1 bước (`-1`) | (7, 13) | (7, 13) | Dự kiến đứng yên tại (7, 13); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 11 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 8) (ô=154)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 8))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 8))
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 2, 2, 2, 3, 0, 5, 5, 5, 0, 5, 0, 0, 0, 0, 1, 1, 0, 5, 5, 5, 4, 4, 3, 4, 4, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 45 |
| 3-4 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 44 |
| 5-7 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 42 |
| 8 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 40 |
| 9 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 38 |
| 10 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 36 |
| 11-12 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 35 |
| 13 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 33 |
| 14-15 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 32 |
| 16 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 30 |
| 17-18 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 29 |
| 19 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 27 |
| 20 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 25 |
| 21 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 23 |
| 22-24 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 21 |
| 25-26 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 20 |
| 27-28 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 19 |
| 29-31 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 17 |
| 32-33 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 16 |
| 34-36 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 14 |
| 37 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 2)) | 12 |
| 38-39 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 11 |
| 40-42 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 9 |
| 43-44 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 8 |
| 45-47 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 3)) | 6 |
| 48-49 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 5 |
| 50-52 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 3 |
| 53-54 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 2 |
| 55-56 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 58 |
| 57-58 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 57 |
| 59-60 | Chờ 2 bước (`-2`) | (5, 8) | (5, 8) | Dự kiến đứng yên tại (5, 8); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 57 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (9, 8) (ô=153)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 8))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 8))
- Mảng hành động đã gửi server: `[2, 1, -8, 3, 3, 2, 3, 2, 2, 2, 3, 5, 5, 4, 5, 5, 5, 5, 5, 5, 4, 5, 5, 0, 1, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 3 |
| 2-4 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 1 |
| 5-12 | Chờ 8 bước (`-8`) | (11, 7) | (11, 7) | Dự kiến đứng yên tại (11, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 58 |
| 13-14 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 57 |
| 15-16 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 56 |
| 17-19 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 54 |
| 20 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 52 |
| 21 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 50 |
| 22 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 48 |
| 23-24 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 47 |
| 25 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 45 |
| 26-27 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 44 |
| 28-29 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 43 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 42 |
| 32-33 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 41 |
| 34-36 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 39 |
| 37-38 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 38 |
| 39-41 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 36 |
| 42 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 34 |
| 43-45 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 32 |
| 46-48 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 30 |
| 49 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 28 |
| 50-51 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 27 |
| 52 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 25 |
| 53-54 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 24 |
| 55 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 22 |
| 56-58 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 20 |
| 59-60 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 19 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 5) (ô=97)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 7)
- Mảng hành động đã gửi server: `[3, 2, 2, 3, 2, 0, 5, 5, 5, 5, 4, 4, 1, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 58 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 58 |
| 4-6 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 58 |
| 7-8 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 58 |
| 9-11 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 58 |
| 12-13 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 58 |
| 14-16 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 58 |
| 17-18 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 58 |
| 19-21 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 58 |
| 22-23 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 58 |
| 24-25 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 58 |
| 26-27 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 58 |
| 28-29 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 58 |
| 30-60 | Chờ 31 bước (`-31`) | (6, 7) | (6, 7) | Dự kiến đứng yên tại (6, 7); hướng tới tọa độ (6, 7) | 58 |

