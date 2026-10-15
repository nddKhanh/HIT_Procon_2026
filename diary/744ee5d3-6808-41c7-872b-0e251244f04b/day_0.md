# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #2 | #4 | (5, 12) | 59 | 67 |
| 22 | #1 | #4 | (3, 6) | 48 | 67 |
| 30 | #2 | #4 | (3, 3) | 50 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 15) (ô=238)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=1, tọa độ=(2, 13))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=1, tọa độ=(2, 13))
- Mảng hành động đã gửi server: `[2, 3, 0, 5, 5, 4, 5, 0, 5, 5, 0, 5, 0, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 66 |
| 2-3 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(14, 16)) | 65 |
| 4-5 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 64 |
| 6-7 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 63 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 62 |
| 10 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 60 |
| 11-12 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 59 |
| 13-14 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 58 |
| 15 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 56 |
| 16-17 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 55 |
| 18-19 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 54 |
| 20 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 52 |
| 21-22 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 51 |
| 23-24 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 50 |
| 25-26 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 49 |
| 27-28 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 48 |
| 29-30 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 13)) | 47 |
| 31 | Chờ 1 bước (`-1`) | (2, 13) | (2, 13) | Dự kiến đứng yên tại (2, 13); mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 13)) | 47 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 3) (ô=46)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(5, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(5, 0))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 3, 3, 3, 3, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 66 |
| 2 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 64 |
| 3-4 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 63 |
| 5-6 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 62 |
| 7-8 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 61 |
| 9 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 59 |
| 10 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 57 |
| 11-13 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 10)) | 55 |
| 14-15 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 54 |
| 16-18 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 52 |
| 19 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 50 |
| 20 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 48 |
| 21-22 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 66 |
| 23 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 64 |
| 24 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 62 |
| 25-26 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 61 |
| 27-28 | Di chuyển hướng 1 (`1`) | (4, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 60 |
| 29-30 | Di chuyển hướng 1 (`1`) | (5, 1) | (5, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 0)) | 59 |
| 31 | Chờ 1 bước (`-1`) | (5, 0) | (5, 0) | Dự kiến đứng yên tại (5, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 0)) | 59 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 7) (ô=111)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 2)
- Mảng hành động đã gửi server: `[5, 4, 4, 3, 3, 3, 3, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 66 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 65 |
| 4 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 63 |
| 5 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 61 |
| 6-7 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 60 |
| 8-9 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 59 |
| 10-12 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 65 |
| 13-14 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 64 |
| 15-17 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 62 |
| 18-19 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 61 |
| 20-21 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 60 |
| 22 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 58 |
| 23 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 56 |
| 24 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 54 |
| 25-26 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 53 |
| 27 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 51 |
| 28-29 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 3)) | 67 |
| 30-31 | Di chuyển hướng 1 (`1`) | (3, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 66 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 0) (ô=3)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 4)
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 3, 2, 2, 2, 2, 2, 1, 2, 5, 4, 5, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 66 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 65 |
| 4-5 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 64 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 63 |
| 8-9 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 62 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 61 |
| 12 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 59 |
| 13-14 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 58 |
| 15-16 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 57 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 19 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 54 |
| 20 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 52 |
| 21-22 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 51 |
| 23 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 49 |
| 24 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 47 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 46 |
| 27-28 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 45 |
| 29-30 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 44 |
| 31 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 42 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (1, 13) (ô=196)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(3, 3))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(3, 3))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 13)) | 67 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 67 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 67 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 67 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 67 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 67 |
| 12-14 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 67 |
| 15-16 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 67 |
| 17-18 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 67 |
| 19 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 67 |
| 20 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 67 |
| 21 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 67 |
| 22-23 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 67 |
| 24 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 67 |
| 25-26 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 3)) | 67 |
| 27-31 | Chờ 5 bước (`-5`) | (3, 3) | (3, 3) | Dự kiến đứng yên tại (3, 3); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 3)) | 67 |

