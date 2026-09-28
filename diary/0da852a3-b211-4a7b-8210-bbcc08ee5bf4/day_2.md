# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 141
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (24, 9) (ô=312)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(24, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(24, 9)
- Mảng hành động đã gửi server: `[-141]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-140 | Chờ 141 bước (`-141`) | (24, 9) | (24, 9) | Dự kiến đứng yên tại (24, 9); hướng tới tọa độ (24, 9) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 22) (ô=706)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 22)
- Mảng hành động đã gửi server: `[-141]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-140 | Chờ 141 bước (`-141`) | (2, 22) | (2, 22) | Dự kiến đứng yên tại (2, 22); hướng tới tọa độ (2, 22) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 14) (ô=459)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 14)
- Mảng hành động đã gửi server: `[-141]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-140 | Chờ 141 bước (`-141`) | (11, 14) | (11, 14) | Dự kiến đứng yên tại (11, 14); hướng tới tọa độ (11, 14) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 19) (ô=616)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(8, 21))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(8, 21))
- Mảng hành động đã gửi server: `[4, 3, -137]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 19) | (7, 20) | Dự kiến di chuyển đến (7, 20); hướng tới tọa độ (8, 21) (Spot #12 (thương hiệu=2, tọa độ=(8, 21))) | 6 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(8, 21)) | 5 |
| 4-140 | Chờ 137 bước (`-137`) | (8, 21) | (8, 21) | Dự kiến đứng yên tại (8, 21); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(8, 21)) | 5 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (26, 10) (ô=346)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(8, 3))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(8, 3))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 0, 5, 0, 5, 5, 5, 0, 5, 5, 0, 5, 0, 5, 0, 0, -98]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (26, 10) | (25, 10) | Dự kiến di chuyển đến (25, 10); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 23 |
| 2-3 | Di chuyển hướng 5 (`5`) | (25, 10) | (24, 10) | Dự kiến di chuyển đến (24, 10); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 22 |
| 4-5 | Di chuyển hướng 5 (`5`) | (24, 10) | (23, 10) | Dự kiến di chuyển đến (23, 10); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 21 |
| 6-7 | Di chuyển hướng 5 (`5`) | (23, 10) | (22, 10) | Dự kiến di chuyển đến (22, 10); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 20 |
| 8-9 | Di chuyển hướng 5 (`5`) | (22, 10) | (21, 10) | Dự kiến di chuyển đến (21, 10); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 19 |
| 10-11 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến di chuyển đến (20, 10); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 18 |
| 12-13 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến di chuyển đến (19, 10); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 17 |
| 14-15 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến di chuyển đến (19, 9); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 16 |
| 16 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến di chuyển đến (18, 9); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 14 |
| 17-18 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến di chuyển đến (17, 8); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 13 |
| 19-20 | Di chuyển hướng 5 (`5`) | (17, 8) | (16, 8) | Dự kiến di chuyển đến (16, 8); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 12 |
| 21-22 | Di chuyển hướng 5 (`5`) | (16, 8) | (15, 8) | Dự kiến di chuyển đến (15, 8); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 10 |
| 23-24 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến di chuyển đến (14, 8); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 9 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến di chuyển đến (14, 7); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 8 |
| 27-28 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 7 |
| 29-30 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến di chuyển đến (12, 7); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 6 |
| 31-32 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 5 |
| 33-34 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến di chuyển đến (10, 6); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 4 |
| 35-36 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến di chuyển đến (10, 5); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 3 |
| 37-38 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 2 |
| 39-40 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (8, 3) (Spot #8 (thương hiệu=8, tọa độ=(8, 3))) | 1 |
| 41-42 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 3)) | 0 |
| 43-140 | Chờ 98 bước (`-98`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 3)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (8, 19) (ô=616)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(0, 23))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(0, 23))
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 4, 4, 4, 4, 4, 5, 0, 0, 0, -116]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 19) | (7, 19) | Dự kiến di chuyển đến (7, 19); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 15 |
| 2 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến di chuyển đến (6, 19); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 13 |
| 3-4 | Di chuyển hướng 4 (`4`) | (6, 19) | (5, 20) | Dự kiến di chuyển đến (5, 20); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 12 |
| 5-6 | Di chuyển hướng 4 (`4`) | (5, 20) | (5, 21) | Dự kiến di chuyển đến (5, 21); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 11 |
| 7-8 | Di chuyển hướng 4 (`4`) | (5, 21) | (4, 22) | Dự kiến di chuyển đến (4, 22); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 10 |
| 9-10 | Di chuyển hướng 4 (`4`) | (4, 22) | (4, 23) | Dự kiến di chuyển đến (4, 23); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 9 |
| 11-13 | Di chuyển hướng 4 (`4`) | (4, 23) | (3, 24) | Dự kiến di chuyển đến (3, 24); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 7 |
| 14-15 | Di chuyển hướng 4 (`4`) | (3, 24) | (3, 25) | Dự kiến di chuyển đến (3, 25); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 6 |
| 16-17 | Di chuyển hướng 4 (`4`) | (3, 25) | (2, 26) | Dự kiến di chuyển đến (2, 26); hướng tới tọa độ (1, 26) (Spot #13 (thương hiệu=3, tọa độ=(1, 26))) | 5 |
| 18 | Di chuyển hướng 5 (`5`) | (2, 26) | (1, 26) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=3, tọa độ=(1, 26)) | 3 |
| 19-20 | Di chuyển hướng 0 (`0`) | (1, 26) | (1, 25) | Dự kiến di chuyển đến (1, 25); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 2 |
| 21-22 | Di chuyển hướng 0 (`0`) | (1, 25) | (0, 24) | Dự kiến di chuyển đến (0, 24); hướng tới tọa độ (0, 23) (Spot #7 (thương hiệu=7, tọa độ=(0, 23))) | 1 |
| 23-24 | Di chuyển hướng 0 (`0`) | (0, 24) | (0, 23) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 23)) | 0 |
| 25-140 | Chờ 116 bước (`-116`) | (0, 23) | (0, 23) | Dự kiến đứng yên tại (0, 23); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 23)) | 0 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (14, 6) (ô=206)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(12, 9))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(12, 9))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, -133]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 6 |
| 2-3 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 5 |
| 4-5 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (12, 9) (Spot #9 (thương hiệu=9, tọa độ=(12, 9))) | 4 |
| 6-7 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 9)) | 3 |
| 8-140 | Chờ 133 bước (`-133`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 9)) | 3 |

### Xe #7 - Tuần tra

- Vị trí đầu ngày: (14, 6) (ô=206)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 6)
- Mảng hành động đã gửi server: `[-141]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-140 | Chờ 141 bước (`-141`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); hướng tới tọa độ (14, 6) | 6 |

