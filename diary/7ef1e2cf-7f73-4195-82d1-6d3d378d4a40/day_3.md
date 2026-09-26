# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 96
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #3 | (13, 9) | 66 | 67 |
| 27 | #1 | #3 | (13, 9) | 47 | 67 |
| 57 | #0 | #3 | (13, 9) | 30 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 13) (ô=235)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(0, 1))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(0, 1))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 0, 0, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 3, 3, 4, 3, 2, 3, 3, 5, 5, 5, 0, 0, 0, 5, 5, 5, 5, 5, 5, 5, 0, 1, 0, 0, 0, 0, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 66 |
| 2 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 64 |
| 3-4 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 63 |
| 5-6 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 62 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 61 |
| 9-10 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 60 |
| 11-12 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 59 |
| 13-14 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 58 |
| 15 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 56 |
| 16-17 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 55 |
| 18-19 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 54 |
| 20-21 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 13)) | 53 |
| 22-23 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 52 |
| 24-25 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 51 |
| 26-27 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 50 |
| 28-29 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 49 |
| 30 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 47 |
| 31 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 45 |
| 32 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 43 |
| 33-34 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 42 |
| 35-36 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 41 |
| 37-38 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 5)) | 40 |
| 39-40 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 39 |
| 41-42 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 38 |
| 43-44 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 37 |
| 45-46 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 36 |
| 47-48 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 35 |
| 49-50 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 34 |
| 51-52 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 8)) | 33 |
| 53-54 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 32 |
| 55-56 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 67 |
| 57-58 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 66 |
| 59-60 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 65 |
| 61-62 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 64 |
| 63-64 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 63 |
| 65-66 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 62 |
| 67-68 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 61 |
| 69-70 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 60 |
| 71 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 58 |
| 72 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 56 |
| 73-74 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 55 |
| 75-76 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 54 |
| 77-78 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 53 |
| 79 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 51 |
| 80 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 49 |
| 81 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(1, 6)) | 47 |
| 82-83 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 46 |
| 84 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 44 |
| 85-86 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 43 |
| 87-88 | Di chuyển hướng 0 (`0`) | (1, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 42 |
| 89-90 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 1)) | 41 |
| 91-95 | Chờ 5 bước (`-5`) | (0, 1) | (0, 1) | Dự kiến đứng yên tại (0, 1); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 1)) | 41 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 8) (ô=148)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(14, 14))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(14, 14))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 0, 0, 2, 2, 1, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, -59]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 8)) | 64 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 63 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 62 |
| 6-7 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 61 |
| 8 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 59 |
| 9 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 5)) | 57 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 56 |
| 12-13 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 55 |
| 14-15 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 54 |
| 16-17 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 53 |
| 18-19 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 52 |
| 20-21 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 51 |
| 22-24 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 49 |
| 25-26 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 67 |
| 27-28 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 66 |
| 29-30 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 65 |
| 31-32 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 64 |
| 33-34 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 63 |
| 35-36 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 14)) | 62 |
| 37-95 | Chờ 59 bước (`-59`) | (14, 14) | (14, 14) | Dự kiến đứng yên tại (14, 14); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 14)) | 62 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 10) (ô=183)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 3)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, -1, 0, -80]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 67 |
| 2-3 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 66 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 64 |
| 6-8 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 62 |
| 9-10 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 61 |
| 11-12 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 60 |
| 13 | Chờ 1 bước (`-1`) | (10, 4) | (10, 4) | Dự kiến đứng yên tại (10, 4); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 60 |
| 14-15 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 59 |
| 16-95 | Chờ 80 bước (`-80`) | (10, 3) | (10, 3) | Dự kiến đứng yên tại (10, 3); hướng tới tọa độ (10, 3) | 59 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (13, 9) (ô=166)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 9)
- Mảng hành động đã gửi server: `[-96]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-95 | Chờ 96 bước (`-96`) | (13, 9) | (13, 9) | Dự kiến đứng yên tại (13, 9); hướng tới tọa độ (13, 9) | 67 |

