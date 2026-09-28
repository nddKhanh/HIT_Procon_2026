# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 54
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 35 | #3 | #0 | (18, 8) | 1 | 59 |
| 37 | #4 | #0 | (18, 8) | 0 | 59 |
| 52 | #2 | #0 | (15, 11) | 20 | 59 |

### Xe #0 - Tiếp tế

- Vị trí đầu ngày: (4, 12) (ô=232)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 11)
- Mảng hành động đã gửi server: `[2, 3, 3, 2, 2, 3, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 2, -2, 5, 5, 4, 4, 4, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 59 |
| 2 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 59 |
| 3-4 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(6, 14)) | 59 |
| 5-6 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 59 |
| 7 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 59 |
| 8-10 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 59 |
| 11 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 59 |
| 12-14 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 59 |
| 15-16 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 59 |
| 17-18 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 59 |
| 19 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 59 |
| 20-21 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 59 |
| 22-23 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 59 |
| 24 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 59 |
| 25-26 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 59 |
| 27-28 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 59 |
| 29 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 59 |
| 30-32 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 59 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 59 |
| 35-36 | Chờ 2 bước (`-2`) | (18, 8) | (18, 8) | Dự kiến đứng yên tại (18, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 59 |
| 37-38 | Di chuyển hướng 5 (`5`) | (18, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 59 |
| 39-40 | Di chuyển hướng 5 (`5`) | (17, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 59 |
| 41-43 | Di chuyển hướng 4 (`4`) | (16, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 59 |
| 44 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 59 |
| 45-46 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 59 |
| 47-53 | Chờ 7 bước (`-7`) | (15, 11) | (15, 11) | Dự kiến đứng yên tại (15, 11); hướng tới tọa độ (15, 11) | 59 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 5) (ô=96)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(8, 8))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(8, 8))
- Mảng hành động đã gửi server: `[3, 3, 2, 1, 1, 1, 1, 2, 1, 1, 2, 3, 3, 4, 4, 3, 4, 3, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 25 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 7)) | 24 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 23 |
| 6 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 21 |
| 7-9 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 19 |
| 10 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 17 |
| 11-12 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 16 |
| 13-14 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 15 |
| 15-16 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 14 |
| 17-18 | Di chuyển hướng 1 (`1`) | (6, 2) | (7, 1) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 1)) | 13 |
| 19-20 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 1)) | 12 |
| 21-22 | Di chuyển hướng 3 (`3`) | (8, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 11 |
| 23-24 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 10 |
| 25 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 8 |
| 26-27 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 7 |
| 28-29 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 6 |
| 30-31 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 5 |
| 32-33 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(8, 8)) | 4 |
| 34-53 | Chờ 20 bước (`-20`) | (8, 8) | (8, 8) | Dự kiến đứng yên tại (8, 8); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(8, 8)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 11) (ô=213)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 10)
- Mảng hành động đã gửi server: `[5, 5, 5, 2, 2, 2, 2, 3, 3, 3, 2, 3, 2, 2, 2, 1, 1, 2, 2, 3, 3, 3, 2, 1, 0, 0, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 57 |
| 2 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 55 |
| 3-4 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(1, 11)) | 54 |
| 5-6 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 53 |
| 7-8 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 52 |
| 9 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 50 |
| 10-11 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 49 |
| 12-13 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 48 |
| 14 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 46 |
| 15-16 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(6, 14)) | 45 |
| 17-18 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 44 |
| 19 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 42 |
| 20-22 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 40 |
| 23 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 38 |
| 24-26 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 36 |
| 27-28 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 35 |
| 29-30 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 34 |
| 31 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 32 |
| 32-33 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(14, 13)) | 31 |
| 34-35 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 30 |
| 36-37 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 29 |
| 38-40 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 27 |
| 41-42 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(16, 16)) | 26 |
| 43-44 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 25 |
| 45-46 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(16, 14)) | 24 |
| 47-48 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 23 |
| 49 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 21 |
| 50-51 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 59 |
| 52-53 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 58 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 8) (ô=170)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 3)
- Mảng hành động đã gửi server: `[-36, 0, 1, 0, 1, 0, 0, 1, 5, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-35 | Chờ 36 bước (`-36`) | (18, 8) | (18, 8) | Dự kiến đứng yên tại (18, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 59 |
| 36-37 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 58 |
| 38 | Di chuyển hướng 1 (`1`) | (18, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 56 |
| 39-41 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 54 |
| 42-43 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 53 |
| 44 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 51 |
| 45-46 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 50 |
| 47 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(18, 1)) | 48 |
| 48-49 | Di chuyển hướng 5 (`5`) | (18, 1) | (17, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(17, 1)) | 47 |
| 50-51 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 46 |
| 52 | Di chuyển hướng 4 (`4`) | (17, 2) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 44 |
| 53 | Chờ 1 bước (`-1`) | (17, 3) | (17, 3) | Dự kiến đứng yên tại (17, 3); hướng tới tọa độ (17, 3) | 44 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 3) (ô=75)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(18, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(18, 8))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 2, 2, 1, 1, 2, 2, 3, 4, 4, 4, 4, 3, 3, 2, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 21 |
| 2-3 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 20 |
| 4-6 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 18 |
| 7 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 16 |
| 8-9 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 15 |
| 10-11 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 14 |
| 12-13 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 13 |
| 14 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 11 |
| 15-16 | Di chuyển hướng 1 (`1`) | (15, 2) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 10 |
| 17-18 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(17, 1)) | 9 |
| 19-20 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(18, 1)) | 8 |
| 21-22 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 7 |
| 23-24 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 6 |
| 25-26 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 5 |
| 27-28 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 4 |
| 29-30 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 3 |
| 31-32 | Di chuyển hướng 3 (`3`) | (16, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 2 |
| 33-34 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 1 |
| 35-36 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 59 |
| 37-53 | Chờ 17 bước (`-17`) | (18, 8) | (18, 8) | Dự kiến đứng yên tại (18, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 59 |

