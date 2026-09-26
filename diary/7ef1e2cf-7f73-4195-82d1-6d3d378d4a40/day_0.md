# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 17 | #0 | #3 | (13, 10) | 57 | 67 |
| 25 | #2 | #3 | (13, 10) | 50 | 67 |
| 30 | #0 | #3 | (12, 12) | 59 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 4) (ô=76)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 12)
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 4, 3, 2, 3, 3, 3, 3, 4, 3, 0, 5, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 66 |
| 2-3 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 65 |
| 4-5 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 64 |
| 6-7 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 63 |
| 8-9 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 62 |
| 10-11 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 8)) | 61 |
| 12-13 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 60 |
| 14 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 58 |
| 15-16 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 17-18 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 66 |
| 19-20 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 65 |
| 21-22 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 23-24 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 14)) | 63 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 62 |
| 27-28 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 61 |
| 29 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 67 |
| 30-31 | Chờ 2 bước (`-2`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); hướng tới tọa độ (12, 12) | 67 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 10) (ô=173)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 3)
- Mảng hành động đã gửi server: `[4, 4, 3, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 2, 3, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 66 |
| 2-3 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 65 |
| 4-5 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 13)) | 64 |
| 6-7 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 63 |
| 8-9 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 62 |
| 10-11 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 61 |
| 12 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 59 |
| 13 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 57 |
| 14 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 55 |
| 15 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(1, 6)) | 53 |
| 16-17 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 52 |
| 18 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 50 |
| 19-20 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 49 |
| 21-22 | Di chuyển hướng 0 (`0`) | (1, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 48 |
| 23-24 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 1)) | 47 |
| 25-26 | Di chuyển hướng 2 (`2`) | (0, 1) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 46 |
| 27 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 44 |
| 28-29 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 43 |
| 30-31 | Di chuyển hướng 3 (`3`) | (2, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 42 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 9) (ô=163)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 9)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 2, 2, 1, 3, 3, 4, 3, 2, 3, 3, -1, 0, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 66 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 65 |
| 4 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 63 |
| 5 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 5)) | 61 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 60 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 59 |
| 10-11 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 58 |
| 12-13 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 57 |
| 14-15 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 56 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 55 |
| 18-19 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 8)) | 54 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 53 |
| 22 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 51 |
| 23-24 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 25 | Chờ 1 bước (`-1`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 26-27 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 66 |
| 28-31 | Chờ 4 bước (`-4`) | (13, 9) | (13, 9) | Dự kiến đứng yên tại (13, 9); hướng tới tọa độ (13, 9) | 66 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (12, 5) (ô=97)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 12)
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 3, -16, 4, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 67 |
| 2-3 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 67 |
| 4-5 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 67 |
| 6 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 67 |
| 7-8 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 9-24 | Chờ 16 bước (`-16`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 25-26 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 67 |
| 27-29 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 67 |
| 30-31 | Chờ 2 bước (`-2`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); hướng tới tọa độ (12, 12) | 67 |

