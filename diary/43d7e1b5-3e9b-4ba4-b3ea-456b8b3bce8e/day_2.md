# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 46
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #3 | #0 | (13, 3) | 0 | 59 |
| 31 | #1 | #0 | (8, 5) | 20 | 59 |
| 40 | #4 | #0 | (8, 5) | 29 | 59 |
| 43 | #1 | #0 | (8, 5) | 53 | 59 |

### Xe #0 - Tiếp tế

- Vị trí đầu ngày: (16, 7) (ô=149)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(8, 5))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(8, 5))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, -3, 5, 5, 5, 5, 4, 4, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 59 |
| 4 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 59 |
| 5-6 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 59 |
| 7 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 59 |
| 8 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 59 |
| 9-11 | Chờ 3 bước (`-3`) | (13, 3) | (13, 3) | Dự kiến đứng yên tại (13, 3); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 59 |
| 12-13 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 59 |
| 14-15 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 59 |
| 16-17 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 59 |
| 18 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 59 |
| 19 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 59 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 59 |
| 22-45 | Chờ 24 bước (`-24`) | (8, 5) | (8, 5) | Dự kiến đứng yên tại (8, 5); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 59 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 6) (ô=122)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 4)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 5, 0, 0, 2, 2, 2, 2, 2, 2, 2, 3, 4, 3, 0, 1, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 40 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 39 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 38 |
| 6-7 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 37 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 36 |
| 10-11 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 35 |
| 12 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 7)) | 33 |
| 13-14 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 32 |
| 15-16 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 31 |
| 17-18 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 30 |
| 19 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 28 |
| 20-22 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 26 |
| 23 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 24 |
| 24-25 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 23 |
| 26-28 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 21 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 59 |
| 31-32 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 58 |
| 33-34 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 57 |
| 35-36 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(8, 8)) | 56 |
| 37-38 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 55 |
| 39-40 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 54 |
| 41-42 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 59 |
| 43-44 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 58 |
| 45 | Chờ 1 bước (`-1`) | (8, 4) | (8, 4) | Dự kiến đứng yên tại (8, 4); hướng tới tọa độ (8, 4) | 58 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 11) (ô=210)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(6, 14))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(6, 14))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 3, 3, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 8 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 7 |
| 4 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 5 |
| 5-6 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 4 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 3 |
| 9 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 1 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(6, 14)) | 0 |
| 12-45 | Chờ 34 bước (`-34`) | (6, 14) | (6, 14) | Dự kiến đứng yên tại (6, 14); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(6, 14)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 6) (ô=122)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 15)
- Mảng hành động đã gửi server: `[0, 1, 1, 2, 2, 2, 2, -1, 3, 3, 2, 3, 2, 3, 2, 3, 5, 5, 4, 3, 3, 4, 4, 3, 3, 4, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 8 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 7 |
| 4-5 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 6 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 4 |
| 7 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 2 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 1 |
| 10-11 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 59 |
| 12 | Chờ 1 bước (`-1`) | (13, 3) | (13, 3) | Dự kiến đứng yên tại (13, 3); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 59 |
| 13-14 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 58 |
| 15 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 56 |
| 16 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 54 |
| 17-18 | Di chuyển hướng 3 (`3`) | (15, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 53 |
| 19 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 51 |
| 20-21 | Di chuyển hướng 3 (`3`) | (16, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 50 |
| 22-23 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 49 |
| 24 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 47 |
| 25-26 | Di chuyển hướng 5 (`5`) | (18, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 46 |
| 27-28 | Di chuyển hướng 5 (`5`) | (17, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 45 |
| 29-31 | Di chuyển hướng 4 (`4`) | (16, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 43 |
| 32 | Di chuyển hướng 3 (`3`) | (16, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 41 |
| 33-34 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 40 |
| 35-36 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 39 |
| 37-38 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 38 |
| 39 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(16, 14)) | 36 |
| 40-41 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 35 |
| 42-43 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(16, 16)) | 34 |
| 44-45 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 33 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 6) (ô=129)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(8, 8))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(8, 8))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 4, 4, 5, 5, 0, 0, 5, 4, 3, 3, 3, 3, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 55 |
| 1-2 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 54 |
| 3-5 | Di chuyển hướng 1 (`1`) | (16, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 52 |
| 6-7 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 51 |
| 8 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(18, 1)) | 49 |
| 9-10 | Di chuyển hướng 5 (`5`) | (18, 1) | (17, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(17, 1)) | 48 |
| 11-12 | Di chuyển hướng 5 (`5`) | (17, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 47 |
| 13-14 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 46 |
| 15-16 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 45 |
| 17-18 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 44 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 43 |
| 21 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 41 |
| 22-23 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 40 |
| 24-25 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 39 |
| 26 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 37 |
| 27 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 35 |
| 28-29 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 1)) | 34 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 1)) | 33 |
| 32-33 | Di chuyển hướng 4 (`4`) | (7, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 32 |
| 34-35 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 31 |
| 36-37 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 30 |
| 38-39 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 59 |
| 40-41 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 58 |
| 42-43 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 57 |
| 44-45 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(8, 8)) | 56 |

