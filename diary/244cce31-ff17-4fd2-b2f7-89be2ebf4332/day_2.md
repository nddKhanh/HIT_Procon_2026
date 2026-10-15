# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 40
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #0 | #1 | (12, 10) | 38 | 40 |
| 3 | #0 | #1 | (12, 9) | 38 | 40 |
| 15 | #2 | #1 | (7, 8) | 1 | 40 |
| 18 | #2 | #1 | (6, 8) | 39 | 40 |
| 20 | #2 | #1 | (5, 8) | 39 | 40 |
| 24 | #2 | #1 | (2, 8) | 35 | 40 |
| 27 | #2 | #1 | (1, 10) | 37 | 40 |
| 31 | #2 | #1 | (3, 12) | 35 | 40 |
| 33 | #2 | #1 | (4, 13) | 39 | 40 |
| 38 | #2 | #1 | (2, 15) | 33 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 11) (ô=189)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(2, 0))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(2, 0))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 0, 5, 0, 0, 0, 0, 0, 5, 0, 3, 4, 4, 0, 5, 5, 0, 5, 0, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 2 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 40 |
| 3 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 38 |
| 4 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 36 |
| 5-6 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 35 |
| 7 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 33 |
| 8 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 31 |
| 9 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 29 |
| 10 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 27 |
| 11 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 25 |
| 12 | Di chuyển hướng 0 (`0`) | (9, 2) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 23 |
| 13-14 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 22 |
| 15 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 20 |
| 16-17 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 19 |
| 18 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 17 |
| 19 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 15 |
| 20-21 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 14 |
| 22 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 12 |
| 23 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(4, 2)) | 10 |
| 24-25 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 9 |
| 26 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 7 |
| 27 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 5 |
| 28-39 | Chờ 12 bước (`-12`) | (2, 0) | (2, 0) | Dự kiến đứng yên tại (2, 0); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 5 |

### Xe #1 - Tiếp tế

- Vị trí đầu ngày: (13, 11) (ô=189)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 15)
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 5, 5, 5, -5, 5, 5, 5, 5, 5, 4, 4, 2, 3, 3, 3, 3, 4, 5, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 2 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 40 |
| 3 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 40 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 40 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 40 |
| 8 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 40 |
| 9 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 10-14 | Chờ 5 bước (`-5`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 15-16 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 40 |
| 17-18 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 40 |
| 19-20 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 40 |
| 21 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 40 |
| 22 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 40 |
| 23-24 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 40 |
| 25 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 40 |
| 26-27 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 40 |
| 28 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 40 |
| 29 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 40 |
| 30-31 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 40 |
| 32-33 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 40 |
| 34 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 40 |
| 35 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 40 |
| 36 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 40 |
| 37-39 | Chờ 3 bước (`-3`) | (2, 15) | (2, 15) | Dự kiến đứng yên tại (2, 15); hướng tới tọa độ (2, 15) | 40 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 15) (ô=254)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=10, tọa độ=(1, 15))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=10, tọa độ=(1, 15))
- Mảng hành động đã gửi server: `[5, 0, 5, 0, 0, 0, 5, 0, 0, 0, -1, 5, 5, 5, 5, 5, 4, 4, 2, 3, 3, 3, 3, 4, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 17 |
| 2 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 15 |
| 3 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 13 |
| 4 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 11 |
| 5 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 9 |
| 6 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 7 |
| 7 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 5 |
| 8-10 | Di chuyển hướng 0 (`0`) | (9, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 3 |
| 11-12 | Di chuyển hướng 0 (`0`) | (8, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 2 |
| 13-14 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 15 | Chờ 1 bước (`-1`) | (7, 8) | (7, 8) | Dự kiến đứng yên tại (7, 8); mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 40 |
| 16-17 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 40 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 40 |
| 20-21 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 39 |
| 22 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 37 |
| 23 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 40 |
| 24-25 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 39 |
| 26 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 40 |
| 27-28 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 39 |
| 29 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 37 |
| 30 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 40 |
| 31-32 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 40 |
| 33-34 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 39 |
| 35 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 37 |
| 36 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 35 |
| 37 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 40 |
| 38 | Di chuyển hướng 5 (`5`) | (2, 15) | (1, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 15)) | 38 |
| 39 | Chờ 1 bước (`-1`) | (1, 15) | (1, 15) | Dự kiến đứng yên tại (1, 15); mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 15)) | 38 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (15, 1) (ô=31)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=8, tọa độ=(15, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=8, tọa độ=(15, 12))
- Mảng hành động đã gửi server: `[0, 4, 4, 3, 3, 4, 5, 3, 4, 4, 3, 3, 2, 3, 3, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 24 |
| 2-3 | Di chuyển hướng 4 (`4`) | (14, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 23 |
| 4 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 21 |
| 5-6 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 20 |
| 7-8 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 19 |
| 9-11 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 17 |
| 12 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 15 |
| 13-14 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 14 |
| 15 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 12 |
| 16-17 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 11 |
| 18 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 9 |
| 19-21 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 7 |
| 22-24 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 5 |
| 25-27 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 3 |
| 28-30 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 1 |
| 31-39 | Chờ 9 bước (`-9`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); mục tiêu Spot #12 (thương hiệu=8, tọa độ=(15, 12)) | 1 |

