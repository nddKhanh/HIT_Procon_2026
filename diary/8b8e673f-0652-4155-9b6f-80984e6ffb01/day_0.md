# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #0 | #3 | (6, 3) | 24 | 32 |
| 25 | #1 | #3 | (5, 8) | 15 | 32 |
| 32 | #1 | #3 | (5, 8) | 27 | 32 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 7) (ô=100)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 1, 0, 1, 1, 2, 2, 3, 3, 2, 3, 2, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 31 |
| 2 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 29 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 28 |
| 5-6 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 27 |
| 7-8 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 26 |
| 9-10 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 25 |
| 11-12 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 24 |
| 13-14 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 31 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 30 |
| 17 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 28 |
| 18 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 26 |
| 19-20 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 25 |
| 21-22 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 24 |
| 23-24 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(11, 5)) | 23 |
| 25-26 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 22 |
| 27-28 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 21 |
| 29 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 19 |
| 30 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 17 |
| 31 | Chờ 1 bước (`-1`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 17 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 17) (ô=246)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 8)
- Mảng hành động đã gửi server: `[1, 0, 0, 5, 4, 5, 0, 1, 0, 5, 1, 1, 1, 1, 0, 1, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 31 |
| 2-3 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 30 |
| 4-5 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 29 |
| 6 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 27 |
| 7-8 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 26 |
| 9-10 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 15)) | 25 |
| 11-12 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 24 |
| 13-14 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 23 |
| 15-16 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 22 |
| 17-18 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 21 |
| 19-20 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 20 |
| 21-22 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 19 |
| 23 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 17 |
| 24 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 32 |
| 25 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 30 |
| 26-27 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 29 |
| 28-29 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 28 |
| 30-31 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 32 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=173)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 15)
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 5, 2, 2, 3, 2, 2, 2, 2, 2, 2, 3, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 31 |
| 2-3 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 30 |
| 4-5 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 29 |
| 6-7 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 28 |
| 8 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 26 |
| 9-10 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 25 |
| 11 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 23 |
| 12-13 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 22 |
| 14-15 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 21 |
| 16-17 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 20 |
| 18-19 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 19 |
| 20-21 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 18 |
| 22 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 16 |
| 23-25 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 14 |
| 26-27 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 13 |
| 28-29 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 12 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 11 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (13, 0) (ô=13)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 8)
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 5, 5, 5, 5, 4, 4, 3, 4, 4, 3, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 32 |
| 2-3 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 32 |
| 4 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 32 |
| 5-6 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 32 |
| 7-8 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 32 |
| 9 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 32 |
| 10 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 32 |
| 11 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 32 |
| 12-13 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 32 |
| 14-15 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 32 |
| 16-17 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 32 |
| 18-19 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 32 |
| 20-21 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 32 |
| 22-23 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 32 |
| 24-31 | Chờ 8 bước (`-8`) | (5, 8) | (5, 8) | Dự kiến đứng yên tại (5, 8); hướng tới tọa độ (5, 8) | 32 |

