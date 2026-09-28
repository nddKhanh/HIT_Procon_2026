# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 50
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 42 | #2 | #0 | (6, 14) | 0 | 59 |
| 45 | #2 | #0 | (6, 13) | 58 | 59 |
| 48 | #2 | #0 | (4, 12) | 56 | 59 |

### Xe #0 - Tiếp tế

- Vị trí đầu ngày: (8, 5) (ô=103)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 12)
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 3, 3, 2, 2, 3, 3, 3, 3, 4, 5, 5, 4, 4, 4, 4, 4, 5, 5, 0, 5, 5, 0, 0, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 59 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 59 |
| 4 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 59 |
| 5 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 59 |
| 6-7 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 59 |
| 8-9 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 59 |
| 10-11 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 59 |
| 12 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 59 |
| 13 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 59 |
| 14-15 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 59 |
| 16 | Di chuyển hướng 3 (`3`) | (15, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 59 |
| 17-18 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 59 |
| 19 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 59 |
| 20-21 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 59 |
| 22-23 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 59 |
| 24 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 59 |
| 25-26 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 59 |
| 27-28 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 59 |
| 29 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 59 |
| 30-31 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 59 |
| 32-33 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 59 |
| 34-36 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 59 |
| 37 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 59 |
| 38-40 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 59 |
| 41 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(6, 14)) | 59 |
| 42-43 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 59 |
| 44-45 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 59 |
| 46 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 59 |
| 47-49 | Chờ 3 bước (`-3`) | (4, 12) | (4, 12) | Dự kiến đứng yên tại (4, 12); hướng tới tọa độ (4, 12) | 59 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 4) (ô=84)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(1, 5))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(1, 5))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 5, 5, 5, 5, 0, 0, 5, 4, 3, 3, 3, 5, 4, 4, 5, 5, 5, 5, 4, 1, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 57 |
| 2 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 55 |
| 3 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 53 |
| 4-5 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 52 |
| 6-7 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 51 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 50 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 49 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 48 |
| 14 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 46 |
| 15 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 44 |
| 16-17 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 1)) | 43 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 1)) | 42 |
| 20-21 | Di chuyển hướng 4 (`4`) | (7, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 41 |
| 22-23 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 40 |
| 24-25 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 39 |
| 26-27 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 38 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 37 |
| 30-31 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 36 |
| 32-33 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 35 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 34 |
| 36-37 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 33 |
| 38-39 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 32 |
| 40 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 7)) | 30 |
| 41-42 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(1, 8)) | 29 |
| 43-44 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 7)) | 28 |
| 45-46 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 27 |
| 47-48 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 26 |
| 49 | Chờ 1 bước (`-1`) | (1, 5) | (1, 5) | Dự kiến đứng yên tại (1, 5); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 26 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 14) (ô=272)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 11)
- Mảng hành động đã gửi server: `[-43, 0, 0, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-42 | Chờ 43 bước (`-43`) | (6, 14) | (6, 14) | Dự kiến đứng yên tại (6, 14); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(6, 14)) | 59 |
| 43-44 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 59 |
| 45-46 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 58 |
| 47 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 59 |
| 48-49 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 58 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 15) (ô=302)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(18, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(18, 8))
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 3, 3, 3, 2, 5, 5, 5, 4, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(16, 14)) | 32 |
| 2-3 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 31 |
| 4 | Di chuyển hướng 5 (`5`) | (16, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 29 |
| 5-7 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(14, 13)) | 27 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 26 |
| 10-11 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 25 |
| 12-14 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 23 |
| 15-16 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(16, 16)) | 22 |
| 17-18 | Di chuyển hướng 5 (`5`) | (16, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 21 |
| 19-20 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 20 |
| 21-22 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 19 |
| 23 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 17 |
| 24-25 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 17)) | 16 |
| 26-27 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 15 |
| 28-30 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 13 |
| 31-32 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 12 |
| 33-34 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(14, 13)) | 11 |
| 35-36 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 10 |
| 37-39 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 8 |
| 40-41 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 7 |
| 42-43 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 6 |
| 44 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 4 |
| 45-47 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 2 |
| 48-49 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(18, 8)) | 1 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 8) (ô=160)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 3)
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 5, 5, 5, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 55 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 54 |
| 4-5 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 53 |
| 6-7 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 52 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 51 |
| 10-11 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 50 |
| 12 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 7)) | 48 |
| 13-14 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 47 |
| 15 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 45 |
| 16-17 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 44 |
| 18-19 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 43 |
| 20-21 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 42 |
| 22-23 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 41 |
| 24-25 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 40 |
| 26-27 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 39 |
| 28-29 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 38 |
| 30 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 36 |
| 31 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 34 |
| 32-33 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 33 |
| 34-35 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 32 |
| 36-37 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 31 |
| 38-39 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 30 |
| 40 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 28 |
| 41-42 | Di chuyển hướng 2 (`2`) | (15, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 27 |
| 43-44 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(17, 1)) | 26 |
| 45-46 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(18, 1)) | 25 |
| 47-48 | Di chuyển hướng 4 (`4`) | (18, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 24 |
| 49 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 22 |

