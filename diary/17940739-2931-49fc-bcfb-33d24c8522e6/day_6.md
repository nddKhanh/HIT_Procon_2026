# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 40
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 15 | #1 | #4 | (8, 12) | 0 | 37 |
| 20 | #3 | #5 | (9, 4) | 11 | 37 |
| 25 | #2 | #5 | (9, 4) | 16 | 37 |
| 26 | #0 | #5 | (9, 4) | 3 | 37 |
| 31 | #0 | #5 | (9, 4) | 34 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 7) (ô=126)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(11, 6))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(11, 6))
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 0, 0, 5, 4, 5, 4, 4, 5, -1, 2, 3, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 18 |
| 1-3 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 5)) | 16 |
| 4-5 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 15 |
| 6-8 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 13 |
| 9-11 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 11 |
| 12-14 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 1)) | 9 |
| 15-16 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 8 |
| 17-19 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 6 |
| 20-21 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 5 |
| 22-23 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 4 |
| 24-25 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 35 |
| 28 | Chờ 1 bước (`-1`) | (8, 4) | (8, 4) | Dự kiến đứng yên tại (8, 4); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 35 |
| 29-30 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 31-32 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 35 |
| 33-35 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 33 |
| 36-38 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 31 |
| 39 | Chờ 1 bước (`-1`) | (11, 6) | (11, 6) | Dự kiến đứng yên tại (11, 6); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 31 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 13) (ô=223)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(0, 8))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(0, 8))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 4, 5, 5, 0, -1, 4, 0, 5, 5, 5, 5, 0, 5, 5, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 10 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 9 |
| 4 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 7 |
| 5-6 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 6 |
| 7-8 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 5 |
| 9-11 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 3 |
| 12-13 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 2 |
| 14 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 37 |
| 15 | Chờ 1 bước (`-1`) | (8, 12) | (8, 12) | Dự kiến đứng yên tại (8, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 37 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 13)) | 36 |
| 18-19 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 35 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 34 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 33 |
| 24-26 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 31 |
| 27 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 29 |
| 28-30 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 11)) | 27 |
| 31-32 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 26 |
| 33-35 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 24 |
| 36-37 | Di chuyển hướng 0 (`0`) | (1, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 23 |
| 38 | Di chuyển hướng 0 (`0`) | (0, 10) | (0, 9) | Dự kiến đến điểm hẹn tọa độ (0, 9) | 21 |
| 39 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 8)) | 19 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 7) (ô=123)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(6, 11))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(6, 11))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 0, 5, 4, 5, 4, 4, 5, 4, 4, 4, 4, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 29 |
| 2-3 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 5)) | 28 |
| 4-5 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 27 |
| 6-7 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 26 |
| 8-10 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 24 |
| 11-13 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 1)) | 22 |
| 14-15 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 21 |
| 16-18 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 19 |
| 19-20 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 18 |
| 21-22 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 17 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 25-26 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 35 |
| 27-28 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 34 |
| 29-30 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 33 |
| 31 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 31 |
| 32-33 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 30 |
| 34 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 28 |
| 35-36 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 27 |
| 37-39 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 11)) | 25 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 9) (ô=146)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(15, 5))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(15, 5))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 3, 3, 3, 1, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 24 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 23 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 22 |
| 6-8 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 20 |
| 9 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 18 |
| 10-11 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 17 |
| 12 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 15 |
| 13-15 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 13 |
| 16-17 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 12 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 20-21 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 35 |
| 22-24 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 33 |
| 25-27 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 31 |
| 28-29 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 30 |
| 30-31 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 29 |
| 32-34 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 27 |
| 35-36 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 26 |
| 37-39 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 5)) | 24 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (6, 12) (ô=198)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(8, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(8, 12))
- Mảng hành động đã gửi server: `[2, 2, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 37 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 37 |
| 4-39 | Chờ 36 bước (`-36`) | (8, 12) | (8, 12) | Dự kiến đứng yên tại (8, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 37 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (10, 2) (ô=42)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 4)
- Mảng hành động đã gửi server: `[4, 4, 5, 2, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 37 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 4-5 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 37 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 8-39 | Chờ 32 bước (`-32`) | (9, 4) | (9, 4) | Dự kiến đứng yên tại (9, 4); hướng tới tọa độ (9, 4) | 37 |

