# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 36
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 18 | #0 | #2 | (13, 5) | 10 | 40 |
| 29 | #3 | #2 | (7, 0) | 14 | 40 |
| 31 | #3 | #2 | (8, 1) | 39 | 40 |
| 32 | #3 | #2 | (9, 1) | 38 | 40 |
| 34 | #3 | #2 | (9, 2) | 39 | 40 |
| 35 | #3 | #2 | (10, 3) | 38 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 1) (ô=31)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 10)
- Mảng hành động đã gửi server: `[0, 4, 4, 3, 3, 4, 5, -5, 3, 4, 4, 4, 3, 3, 3, 2, 2, 5, 5, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 19 |
| 2-3 | Di chuyển hướng 4 (`4`) | (14, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 18 |
| 4 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 16 |
| 5-6 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 15 |
| 7-8 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 14 |
| 9-11 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 12 |
| 12 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 10 |
| 13-17 | Chờ 5 bước (`-5`) | (13, 5) | (13, 5) | Dự kiến đứng yên tại (13, 5); mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 40 |
| 18-19 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 39 |
| 20 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 37 |
| 21-22 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 36 |
| 23 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 34 |
| 24 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 32 |
| 25 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 30 |
| 26 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 28 |
| 27 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 26 |
| 28 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 24 |
| 29-30 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 23 |
| 31 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 21 |
| 32 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 19 |
| 33 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 17 |
| 34 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 15 |
| 35 | Chờ 1 bước (`-1`) | (11, 10) | (11, 10) | Dự kiến đứng yên tại (11, 10); hướng tới tọa độ (11, 10) | 15 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 15) (ô=254)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=11, tọa độ=(14, 15))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=11, tọa độ=(14, 15))
- Mảng hành động đã gửi server: `[-36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-35 | Chờ 36 bước (`-36`) | (14, 15) | (14, 15) | Dự kiến đứng yên tại (14, 15); mục tiêu Spot #15 (thương hiệu=11, tọa độ=(14, 15)) | 1 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (1, 9) (ô=145)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 3)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 5, 5, 0, 0, 0, 0, 5, 0, 3, 2, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 40 |
| 1 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 40 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 40 |
| 4 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 40 |
| 5 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 40 |
| 6 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 40 |
| 7-8 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 40 |
| 9-10 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 40 |
| 11-12 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 40 |
| 13 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 40 |
| 14 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 40 |
| 15 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 40 |
| 16 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 40 |
| 17 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 40 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 40 |
| 20-21 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 40 |
| 22 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 40 |
| 23 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 40 |
| 24 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 40 |
| 25 | Di chuyển hướng 0 (`0`) | (9, 2) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 40 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 40 |
| 28 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 40 |
| 29-30 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 40 |
| 31 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 40 |
| 32-33 | Di chuyển hướng 3 (`3`) | (9, 1) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 40 |
| 34 | Di chuyển hướng 3 (`3`) | (9, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 40 |
| 35 | Chờ 1 bước (`-1`) | (10, 3) | (10, 3) | Dự kiến đứng yên tại (10, 3); hướng tới tọa độ (10, 3) | 40 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 10) (ô=160)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 4)
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 5, 1, 1, 0, -2, 3, 2, 3, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 37 |
| 2-3 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 36 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 34 |
| 5-6 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 33 |
| 7 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 31 |
| 8 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 29 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 28 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 27 |
| 13-14 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 26 |
| 15 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 24 |
| 16 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 22 |
| 17-18 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 21 |
| 19-20 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 20 |
| 21-22 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 19 |
| 23-24 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 18 |
| 25 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 16 |
| 26 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 14 |
| 27-28 | Chờ 2 bước (`-2`) | (7, 0) | (7, 0) | Dự kiến đứng yên tại (7, 0); mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 40 |
| 29-30 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 40 |
| 31 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 40 |
| 32-33 | Di chuyển hướng 3 (`3`) | (9, 1) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 40 |
| 34 | Di chuyển hướng 3 (`3`) | (9, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 40 |
| 35 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 38 |

