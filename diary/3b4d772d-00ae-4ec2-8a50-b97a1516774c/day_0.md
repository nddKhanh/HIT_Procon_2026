# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 13 | #3 | #7 | (6, 7) | 30 | 37 |
| 14 | #2 | #7 | (6, 7) | 25 | 37 |
| 17 | #0 | #7 | (6, 7) | 24 | 37 |
| 18 | #6 | #7 | (6, 7) | 24 | 37 |
| 19 | #0 | #7 | (5, 6) | 36 | 37 |
| 22 | #0 | #7 | (5, 5) | 35 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 5) (ô=88)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(0, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(0, 2))
- Mảng hành động đã gửi server: `[2, 1, 0, 5, 4, 4, 4, 4, 0, 0, 0, 0, 5, 0, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 36 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 34 |
| 3-5 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 32 |
| 6-7 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 31 |
| 8-10 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 29 |
| 11-12 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 28 |
| 13-15 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 26 |
| 16 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 37 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 37 |
| 19-21 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 37 |
| 22-23 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 36 |
| 24 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 34 |
| 25 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 32 |
| 26 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 30 |
| 27-28 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 29 |
| 29-30 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 2)) | 28 |
| 31 | Chờ 1 bước (`-1`) | (0, 2) | (0, 2) | Dự kiến đứng yên tại (0, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 2)) | 28 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 8) (ô=128)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(10, 15))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(10, 15))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2, 1, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 8) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 36 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 8) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 35 |
| 4 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 33 |
| 5-6 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 32 |
| 7-8 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 31 |
| 9-11 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 29 |
| 12-14 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 27 |
| 15-16 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 26 |
| 17-19 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 24 |
| 20-22 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 15)) | 22 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 21 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 20 |
| 27-28 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 19 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 15)) | 18 |
| 31 | Chờ 1 bước (`-1`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 15)) | 18 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 1) (ô=17)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(10, 15))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(10, 15))
- Mảng hành động đã gửi server: `[3, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 36 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 35 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 34 |
| 6 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 32 |
| 7 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 30 |
| 8 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 28 |
| 9-10 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 27 |
| 11-13 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 37 |
| 14-15 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 36 |
| 16-17 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 35 |
| 18-19 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 34 |
| 20 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 32 |
| 21 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 30 |
| 22-24 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 28 |
| 25-26 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 27 |
| 27-28 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 26 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 15)) | 25 |
| 31 | Chờ 1 bước (`-1`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 15)) | 25 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 5) (ô=81)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 15)
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 2, 2, 3, 3, 3, 4, 3, 3, 3, 4, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 36 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 35 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 34 |
| 6-8 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 32 |
| 9-10 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 31 |
| 11-12 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 37 |
| 13-14 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 36 |
| 15-16 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 35 |
| 17-18 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 34 |
| 19 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 32 |
| 20 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 30 |
| 21-23 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 28 |
| 24-25 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 27 |
| 26-27 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 26 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 15)) | 25 |
| 30-31 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 24 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 2) (ô=47)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 5)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 3, 3, 3, 1, 2, 5, 5, 5, 4, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 36 |
| 2-4 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 34 |
| 5-6 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 33 |
| 7-8 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 32 |
| 9-10 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 31 |
| 11-13 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 29 |
| 14-15 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 28 |
| 16-17 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 27 |
| 18-19 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 26 |
| 20-21 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 25 |
| 22-23 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 24 |
| 24-25 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 23 |
| 26-28 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 21 |
| 29-30 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 20 |
| 31 | Chờ 1 bước (`-1`) | (11, 5) | (11, 5) | Dự kiến đứng yên tại (11, 5); hướng tới tọa độ (11, 5) | 20 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 2) (ô=45)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(13, 6))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(13, 6))
- Mảng hành động đã gửi server: `[5, 4, 0, 1, 0, 2, 2, 2, 3, 3, 4, 3, 4, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 36 |
| 2-3 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 35 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 34 |
| 6-7 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 33 |
| 8-10 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 0)) | 31 |
| 11-12 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 30 |
| 13-14 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 29 |
| 15-17 | Di chuyển hướng 2 (`2`) | (13, 0) | (14, 0) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 0)) | 27 |
| 18-19 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 26 |
| 20 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 24 |
| 21-22 | Di chuyển hướng 4 (`4`) | (15, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 23 |
| 23-25 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 21 |
| 26-27 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 20 |
| 28-29 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 19 |
| 30-31 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 18 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (9, 8) (ô=137)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 3)
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 5, 5, 1, 1, 2, 1, 1, 1, 1, 2, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 36 |
| 2-3 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 35 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 33 |
| 5-6 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 32 |
| 7-9 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 30 |
| 10 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 28 |
| 11-12 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 27 |
| 13-15 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 25 |
| 16-17 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 37 |
| 18-19 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 36 |
| 20 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 34 |
| 21-23 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 32 |
| 24-25 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 31 |
| 26-28 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 29 |
| 29-30 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 28 |
| 31 | Chờ 1 bước (`-1`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); hướng tới tọa độ (8, 3) | 28 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (7, 6) (ô=103)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 5)
- Mảng hành động đã gửi server: `[5, 4, -14, 0, 0, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 37 |
| 2 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 37 |
| 3-16 | Chờ 14 bước (`-14`) | (6, 7) | (6, 7) | Dự kiến đứng yên tại (6, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 37 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 37 |
| 19-21 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 37 |
| 22-31 | Chờ 10 bước (`-10`) | (5, 5) | (5, 5) | Dự kiến đứng yên tại (5, 5); hướng tới tọa độ (5, 5) | 37 |

