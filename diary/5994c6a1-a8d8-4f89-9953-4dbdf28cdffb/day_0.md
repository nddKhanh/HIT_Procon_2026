# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 31
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #0 | #3 | (8, 11) | 59 | 65 |
| 16 | #1 | #3 | (8, 11) | 46 | 65 |
| 19 | #2 | #3 | (9, 10) | 41 | 65 |
| 24 | #0 | #3 | (10, 5) | 53 | 65 |
| 25 | #0 | #3 | (10, 4) | 63 | 65 |
| 26 | #0 | #3 | (11, 3) | 63 | 65 |
| 28 | #0 | #3 | (11, 2) | 64 | 65 |
| 29 | #0 | #3 | (12, 1) | 63 | 65 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 13) (ô=189)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(11, 0))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(11, 0))
- Mảng hành động đã gửi server: `[2, 2, 1, 5, 0, 0, 0, 1, 1, 1, 2, 1, 1, 1, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 64 |
| 2-4 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 62 |
| 5-6 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(9, 12)) | 61 |
| 7-8 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 60 |
| 9-10 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 59 |
| 11-12 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 64 |
| 13 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 62 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 61 |
| 16-18 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 59 |
| 19-21 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 57 |
| 22 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 55 |
| 23 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 65 |
| 24 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 65 |
| 25 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 3)) | 65 |
| 26-27 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 65 |
| 28 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 65 |
| 29-30 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 0)) | 64 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (4, 15) (ô=214)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 16))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 16))
- Mảng hành động đã gửi server: `[2, 3, 1, 0, 1, 1, 0, 1, 1, 3, 3, 3, 2, 3, 3, 2, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 64 |
| 2-4 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(5, 16)) | 62 |
| 5-6 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 61 |
| 7 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 59 |
| 8 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 57 |
| 9 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 55 |
| 10 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 53 |
| 11 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 51 |
| 12 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 49 |
| 13-14 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 48 |
| 15 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 65 |
| 16-17 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 64 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(9, 12)) | 63 |
| 20-21 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 62 |
| 22 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 60 |
| 23 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 58 |
| 24 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 56 |
| 25-27 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 54 |
| 28-30 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 16)) | 52 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 9) (ô=134)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 11)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 4, 4, 3, 4, 3, 4, 4, 3, 4, 5, 0, 0, 0, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 64 |
| 2-4 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 62 |
| 5-7 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 60 |
| 8 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 58 |
| 9 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 56 |
| 10 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 3)) | 54 |
| 11-12 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 53 |
| 13 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 51 |
| 14 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 49 |
| 15 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 47 |
| 16 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 45 |
| 17 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 43 |
| 18 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 65 |
| 19 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 63 |
| 20 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(9, 12)) | 61 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 60 |
| 23-24 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 59 |
| 25-26 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 58 |
| 27 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 56 |
| 28-29 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 55 |
| 30 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 53 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (0, 13) (ô=182)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(12, 1))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(12, 1))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 2, 1, 1, 1, 2, -4, 1, 2, 1, 1, 0, 1, 0, 1, 1, 1, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 65 |
| 2 | Di chuyển hướng 2 (`2`) | (0, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 65 |
| 3 | Di chuyển hướng 2 (`2`) | (1, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 65 |
| 4 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 65 |
| 5 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 65 |
| 6 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 65 |
| 7 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 65 |
| 8 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 65 |
| 9 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 65 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 65 |
| 12-15 | Chờ 4 bước (`-4`) | (8, 11) | (8, 11) | Dự kiến đứng yên tại (8, 11); hướng tới tọa độ (8, 11) | 65 |
| 16-17 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 65 |
| 18 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 65 |
| 19 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 65 |
| 20 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 65 |
| 21 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 65 |
| 22 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 65 |
| 23 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 65 |
| 24 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 65 |
| 25 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 3)) | 65 |
| 26-27 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 65 |
| 28 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 65 |
| 29-30 | Chờ 2 bước (`-2`) | (12, 1) | (12, 1) | Dự kiến đứng yên tại (12, 1); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 65 |

