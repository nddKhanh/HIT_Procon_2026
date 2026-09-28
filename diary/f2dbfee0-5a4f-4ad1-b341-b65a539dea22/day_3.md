# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 57
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 38 | #3 | #6 | (10, 3) | 0 | 55 |
| 55 | #3 | #6 | (13, 6) | 46 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 23) (ô=564)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(17, 15))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(17, 15))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 1, 0, 1, 1, 1, 4, 5, 0, 5, 5, 4, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (12, 23) | (13, 23) | Dự kiến đến điểm hẹn tọa độ (13, 23) | 40 |
| 1-2 | Di chuyển hướng 2 (`2`) | (13, 23) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 39 |
| 3 | Di chuyển hướng 2 (`2`) | (14, 23) | (15, 23) | Dự kiến đến điểm hẹn tọa độ (15, 23) | 37 |
| 4-6 | Di chuyển hướng 2 (`2`) | (15, 23) | (16, 23) | Dự kiến đến điểm hẹn tọa độ (16, 23) | 35 |
| 7 | Di chuyển hướng 2 (`2`) | (16, 23) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 33 |
| 8-9 | Di chuyển hướng 2 (`2`) | (17, 23) | (18, 23) | Dự kiến đến điểm hẹn tọa độ (18, 23) | 32 |
| 10-12 | Di chuyển hướng 2 (`2`) | (18, 23) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 30 |
| 13-15 | Di chuyển hướng 2 (`2`) | (19, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 28 |
| 16 | Di chuyển hướng 2 (`2`) | (20, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 26 |
| 17-18 | Di chuyển hướng 2 (`2`) | (21, 23) | (22, 23) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(22, 23)) | 25 |
| 19-20 | Di chuyển hướng 0 (`0`) | (22, 23) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 24 |
| 21-23 | Di chuyển hướng 0 (`0`) | (21, 22) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 22 |
| 24 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 20 |
| 25 | Di chuyển hướng 0 (`0`) | (20, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 18 |
| 26-27 | Di chuyển hướng 1 (`1`) | (20, 19) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 17 |
| 28-29 | Di chuyển hướng 0 (`0`) | (20, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 16 |
| 30-32 | Di chuyển hướng 1 (`1`) | (20, 17) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 14 |
| 33-34 | Di chuyển hướng 1 (`1`) | (20, 16) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 13 |
| 35 | Di chuyển hướng 1 (`1`) | (21, 15) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 11 |
| 36-37 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 10 |
| 38 | Di chuyển hướng 5 (`5`) | (21, 15) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 8 |
| 39-41 | Di chuyển hướng 0 (`0`) | (20, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 6 |
| 42-44 | Di chuyển hướng 5 (`5`) | (19, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 4 |
| 45 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(17, 14)) | 2 |
| 46-47 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 15)) | 1 |
| 48-56 | Chờ 9 bước (`-9`) | (17, 15) | (17, 15) | Dự kiến đứng yên tại (17, 15); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 15)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 2) (ô=69)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(21, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(21, 2))
- Mảng hành động đã gửi server: `[-57]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-56 | Chờ 57 bước (`-57`) | (21, 2) | (21, 2) | Dự kiến đứng yên tại (21, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(21, 2)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 10) (ô=258)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(18, 10))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(18, 10))
- Mảng hành động đã gửi server: `[-57]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-56 | Chờ 57 bước (`-57`) | (18, 10) | (18, 10) | Dự kiến đứng yên tại (18, 10); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 10)) | 2 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 3) (ô=82)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 7)
- Mảng hành động đã gửi server: `[-39, 5, 2, 3, 3, 3, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-38 | Chờ 39 bước (`-39`) | (10, 3) | (10, 3) | Dự kiến đứng yên tại (10, 3); hướng tới tọa độ (10, 3) | 55 |
| 39-40 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 54 |
| 41-42 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 53 |
| 43-44 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 52 |
| 45-47 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 50 |
| 48-49 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 49 |
| 50-52 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 6)) | 47 |
| 53-54 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 55 |
| 55-56 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 54 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 11) (ô=284)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(20, 3))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(20, 3))
- Mảng hành động đã gửi server: `[2, 1, 1, 0, 1, 1, 0, 0, 1, 0, 5, 4, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 24 |
| 2 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 22 |
| 3-4 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 21 |
| 5-6 | Di chuyển hướng 0 (`0`) | (22, 9) | (21, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 8)) | 20 |
| 7-8 | Di chuyển hướng 1 (`1`) | (21, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 19 |
| 9 | Di chuyển hướng 1 (`1`) | (22, 7) | (22, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(22, 6)) | 17 |
| 10-11 | Di chuyển hướng 0 (`0`) | (22, 6) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 16 |
| 12 | Di chuyển hướng 0 (`0`) | (22, 5) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 14 |
| 13 | Di chuyển hướng 1 (`1`) | (21, 4) | (22, 3) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(22, 3)) | 12 |
| 14-15 | Di chuyển hướng 0 (`0`) | (22, 3) | (21, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(21, 2)) | 11 |
| 16-17 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 10 |
| 18-20 | Di chuyển hướng 4 (`4`) | (20, 2) | (20, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 3)) | 8 |
| 21-56 | Chờ 36 bước (`-36`) | (20, 3) | (20, 3) | Dự kiến đứng yên tại (20, 3); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 3)) | 8 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (3, 23) (ô=555)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 8)
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 5, 5, 2, 2, 2, 2, 3, 2, 2, 1, 2, 2, 2, 1, 2, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 53 |
| 2-3 | Di chuyển hướng 0 (`0`) | (3, 22) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 52 |
| 4-5 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 51 |
| 6 | Di chuyển hướng 1 (`1`) | (2, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 49 |
| 7 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 47 |
| 8-10 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(3, 17)) | 45 |
| 11-12 | Di chuyển hướng 1 (`1`) | (3, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 44 |
| 13-14 | Di chuyển hướng 1 (`1`) | (3, 16) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 43 |
| 15-17 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 41 |
| 18-19 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 40 |
| 20-21 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 39 |
| 22-23 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 11)) | 38 |
| 24-25 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 37 |
| 26-27 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(4, 11)) | 36 |
| 28-29 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 35 |
| 30-31 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 11)) | 34 |
| 32-33 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 33 |
| 34-35 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 32 |
| 36-38 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 30 |
| 39 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 28 |
| 40 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 26 |
| 41 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 24 |
| 42-44 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(12, 11)) | 22 |
| 45-46 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 21 |
| 47-48 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 20 |
| 49-50 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 19 |
| 51 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(15, 10)) | 17 |
| 52-53 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 16 |
| 54-56 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 14 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (3, 22) (ô=531)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(13, 6))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(13, 6))
- Mảng hành động đã gửi server: `[0, 0, 1, 0, 0, 0, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 2, 1, 2, 2, 3, 3, 2, 3, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 22) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 55 |
| 2-3 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 55 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 55 |
| 5 | Di chuyển hướng 0 (`0`) | (3, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 55 |
| 6-8 | Di chuyển hướng 0 (`0`) | (2, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 55 |
| 9-11 | Di chuyển hướng 0 (`0`) | (2, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 55 |
| 12 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 55 |
| 13 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 14 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 55 |
| 15-16 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 55 |
| 17 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 55 |
| 18 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 55 |
| 19-20 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 55 |
| 21-23 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 55 |
| 24-26 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 55 |
| 27 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 55 |
| 28-29 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 55 |
| 30-31 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 55 |
| 32 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 55 |
| 33 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 55 |
| 34-35 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 55 |
| 36-37 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 55 |
| 38-39 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 55 |
| 40-41 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 42-44 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 55 |
| 45-47 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 55 |
| 48-49 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 55 |
| 50-56 | Chờ 7 bước (`-7`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 55 |

