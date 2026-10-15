# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 48
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 22 | #3 | #2 | (15, 12) | 14 | 40 |
| 24 | #3 | #2 | (14, 12) | 39 | 40 |
| 25 | #3 | #2 | (13, 12) | 38 | 40 |
| 26 | #3 | #2 | (13, 11) | 38 | 40 |
| 27 | #3 | #2 | (12, 10) | 38 | 40 |
| 34 | #0 | #2 | (12, 5) | 5 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 8) (ô=130)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=2, tọa độ=(14, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=2, tọa độ=(14, 0))
- Mảng hành động đã gửi server: `[4, 4, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 5, 1, 1, 2, 3, 3, 3, 3, 2, 2, 2, 1, 0, 0, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 39 |
| 2 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 37 |
| 3-4 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 36 |
| 5 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 34 |
| 6-7 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 33 |
| 8 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 31 |
| 9 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 29 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 28 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 27 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 26 |
| 16 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 24 |
| 17 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 22 |
| 18-19 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 21 |
| 20-21 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 20 |
| 22-23 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 19 |
| 24-25 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 18 |
| 26 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 16 |
| 27 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 14 |
| 28-29 | Di chuyển hướng 3 (`3`) | (9, 1) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 13 |
| 30 | Di chuyển hướng 3 (`3`) | (9, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 11 |
| 31 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 9 |
| 32 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 7 |
| 33 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 40 |
| 34-35 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 39 |
| 36-37 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 38 |
| 38 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 36 |
| 39-41 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 34 |
| 42-43 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 33 |
| 44-45 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 32 |
| 46 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 30 |
| 47 | Chờ 1 bước (`-1`) | (14, 0) | (14, 0) | Dự kiến đứng yên tại (14, 0); mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 30 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 1) (ô=31)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=2, tọa độ=(14, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=2, tọa độ=(14, 0))
- Mảng hành động đã gửi server: `[0, -46]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 8 |
| 2-47 | Chờ 46 bước (`-46`) | (14, 0) | (14, 0) | Dự kiến đứng yên tại (14, 0); mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 8 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (2, 8) (ô=130)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 5)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 2, 2, 5, 5, 0, 0, 0, 1, 1, 0, 0, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 40 |
| 2 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 40 |
| 3 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 40 |
| 4-5 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 40 |
| 6-7 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 8-9 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 40 |
| 10 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 40 |
| 11 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 40 |
| 12-13 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 40 |
| 14-15 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 40 |
| 16 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 17-18 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 40 |
| 19 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 40 |
| 20 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 40 |
| 21 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 40 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 40 |
| 24 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 40 |
| 25 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 40 |
| 26 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 27-28 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 40 |
| 29 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 40 |
| 30 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 40 |
| 31-32 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 40 |
| 33 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 40 |
| 34-47 | Chờ 14 bước (`-14`) | (12, 5) | (12, 5) | Dự kiến đứng yên tại (12, 5); hướng tới tọa độ (12, 5) | 40 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 12) (ô=206)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 11)
- Mảng hành động đã gửi server: `[2, -21, 5, 5, 0, 0, 5, 4, 4, 3, 3, 2, 3, 2, 5, 0, 5, 0, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 14 |
| 1-21 | Chờ 21 bước (`-21`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 40 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 40 |
| 24 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 40 |
| 25 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 40 |
| 26 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 38 |
| 29-31 | Di chuyển hướng 4 (`4`) | (11, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 36 |
| 32-33 | Di chuyển hướng 4 (`4`) | (11, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 35 |
| 34 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 33 |
| 35 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 31 |
| 36 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 29 |
| 37 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 27 |
| 38 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(14, 15)) | 25 |
| 39-40 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 24 |
| 41 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 22 |
| 42 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 20 |
| 43 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 18 |
| 44 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 16 |
| 45 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 14 |
| 46 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 12 |
| 47 | Chờ 1 bước (`-1`) | (9, 11) | (9, 11) | Dự kiến đứng yên tại (9, 11); hướng tới tọa độ (9, 11) | 12 |

