# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 0) (ô=5)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 3)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 3, 2, 2, 2, 1, 3, 5, 5, 5, 5, 5, 5, 5, 4, 4, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 39 |
| 2-4 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 37 |
| 5-6 | Di chuyển hướng 2 (`2`) | (7, 0) | (8, 0) | Dự kiến đến điểm hẹn tọa độ (8, 0) | 36 |
| 7-8 | Di chuyển hướng 2 (`2`) | (8, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 35 |
| 9 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 33 |
| 10 | Di chuyển hướng 3 (`3`) | (10, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 31 |
| 11 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 29 |
| 12 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 27 |
| 13 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 25 |
| 14 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 23 |
| 15-16 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 22 |
| 17-18 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 21 |
| 19 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 19 |
| 20 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 17 |
| 21 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 15 |
| 22 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 13 |
| 23-24 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 12 |
| 25-26 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 11 |
| 27 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 9 |
| 28 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 7 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 6 |
| 31 | Chờ 1 bước (`-1`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); hướng tới tọa độ (8, 3) | 6 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 5) (ô=92)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 14)
- Mảng hành động đã gửi server: `[2, 2, 1, 0, 3, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2, 3, 2, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 39 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 38 |
| 4 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 36 |
| 5-7 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 34 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 33 |
| 10-12 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 31 |
| 13 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 29 |
| 14 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 27 |
| 15-16 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 26 |
| 17 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 24 |
| 18 | Di chuyển hướng 4 (`4`) | (12, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 22 |
| 19-21 | Di chuyển hướng 4 (`4`) | (11, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 20 |
| 22-23 | Di chuyển hướng 4 (`4`) | (11, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 19 |
| 24 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 17 |
| 25 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 15 |
| 26 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 13 |
| 27 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 11 |
| 28 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(14, 15)) | 9 |
| 29-30 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 8 |
| 31 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 6 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 9) (ô=144)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 2)
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 0, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 39 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 37 |
| 3 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 35 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 34 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 32 |
| 7 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 30 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 29 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 28 |
| 12-13 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 27 |
| 14 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 25 |
| 15 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 23 |
| 16-17 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 22 |
| 18-19 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 21 |
| 20 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 19 |
| 21-22 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 18 |
| 23 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 16 |
| 24 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 14 |
| 25 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 12 |
| 26 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 10 |
| 27-28 | Di chuyển hướng 0 (`0`) | (15, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 9 |
| 29-30 | Di chuyển hướng 4 (`4`) | (14, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 8 |
| 31 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 6 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 15) (ô=249)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=6, tọa độ=(2, 8))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=6, tọa độ=(2, 8))
- Mảng hành động đã gửi server: `[1, 4, 5, 5, 5, 5, 5, 5, 5, 5, 2, 2, 2, 1, 0, 0, 0, 0, 5, 5, 1, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(9, 14)) | 39 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 38 |
| 4-5 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 37 |
| 6 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 35 |
| 7 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 33 |
| 8 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 31 |
| 9 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 29 |
| 10 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 27 |
| 11 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 25 |
| 12 | Di chuyển hướng 5 (`5`) | (2, 15) | (1, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 15)) | 23 |
| 13-14 | Di chuyển hướng 2 (`2`) | (1, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 22 |
| 15 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 20 |
| 16 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 18 |
| 17 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 16 |
| 18 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 14 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 13 |
| 21-22 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 12 |
| 23 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 10 |
| 24 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 8 |
| 25-26 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(0, 10)) | 7 |
| 27-28 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 6 |
| 29 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 4 |
| 30 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 2 |
| 31 | Chờ 1 bước (`-1`) | (2, 8) | (2, 8) | Dự kiến đứng yên tại (2, 8); mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 2 |

