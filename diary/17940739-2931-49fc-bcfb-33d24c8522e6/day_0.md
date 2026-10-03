# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 30 | #0 | #4 | (7, 12) | 12 | 37 |
| 31 | #1 | #5 | (12, 9) | 15 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 4) (ô=65)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(8, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(8, 12))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 3, 2, 4, 3, 2, 3, 2, 1, 2, 2, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 36 |
| 2 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 34 |
| 3 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 32 |
| 4-6 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 8)) | 30 |
| 7-8 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 29 |
| 9-11 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 9)) | 27 |
| 12-13 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 26 |
| 14-16 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 24 |
| 17-19 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 11)) | 22 |
| 20-21 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 21 |
| 22-24 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 19 |
| 25 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 17 |
| 26 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 11)) | 15 |
| 27-28 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 14 |
| 29 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 37 |
| 30-31 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 36 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (6, 12) (ô=198)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 9)
- Mảng hành động đã gửi server: `[0, 2, 3, 3, 2, 2, 2, 1, 2, 2, 3, 2, 0, 5, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 11)) | 36 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 35 |
| 4 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 33 |
| 5-6 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 13)) | 32 |
| 7-8 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 31 |
| 9 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 29 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 28 |
| 12-14 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 26 |
| 15-16 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 25 |
| 17-18 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 24 |
| 19 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 22 |
| 20-21 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 13)) | 21 |
| 22-23 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 20 |
| 24-25 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 19 |
| 26 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 17 |
| 27-28 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 16 |
| 29-30 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 37 |
| 31 | Chờ 1 bước (`-1`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); hướng tới tọa độ (12, 9) | 37 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 7) (ô=121)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(13, 1))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(13, 1))
- Mảng hành động đã gửi server: `[0, 0, 1, 2, 3, 3, 3, 1, 1, 0, 0, 0, 2, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 36 |
| 2-3 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 35 |
| 4-5 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 34 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 33 |
| 8 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 31 |
| 9-11 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 29 |
| 12-14 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 27 |
| 15-16 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 26 |
| 17-18 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 5)) | 25 |
| 19-20 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 24 |
| 21-23 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 22 |
| 24 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 20 |
| 25-26 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 19 |
| 27-28 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 18 |
| 29-31 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 1)) | 16 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 11) (ô=189)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 5)
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 1, 1, 4, 5, 5, 5, 4, 0, 0, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 36 |
| 2-3 | Di chuyển hướng 1 (`1`) | (12, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 35 |
| 4-6 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 33 |
| 7-8 | Di chuyển hướng 1 (`1`) | (13, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 32 |
| 9 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 30 |
| 10-12 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 5)) | 28 |
| 13-14 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 27 |
| 15-17 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 25 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 24 |
| 20-22 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 22 |
| 23-24 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 21 |
| 25-26 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 20 |
| 27-29 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 18 |
| 30 | Chờ 1 bước (`-1`) | (10, 5) | (10, 5) | Dự kiến đứng yên tại (10, 5); hướng tới tọa độ (10, 5) | 18 |
| 31 | Chờ 1 bước (`-1`) | (10, 5) | (10, 5) | Dự kiến đứng yên tại (10, 5); hướng tới tọa độ (10, 5) | 18 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (2, 0) (ô=2)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(7, 12))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(7, 12))
- Mảng hành động đã gửi server: `[3, 4, 3, 3, 3, 2, 3, 3, 3, 3, 4, 3, 3, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 37 |
| 2 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 37 |
| 3-5 | Di chuyển hướng 3 (`3`) | (2, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 37 |
| 6-8 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 37 |
| 9-11 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 37 |
| 12 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 37 |
| 13-14 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 37 |
| 15-17 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 37 |
| 18-19 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 37 |
| 20 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 37 |
| 21-22 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 37 |
| 23-25 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 37 |
| 26 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 37 |
| 27-31 | Chờ 5 bước (`-5`) | (7, 12) | (7, 12) | Dự kiến đứng yên tại (7, 12); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 37 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 13) (ô=212)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 9)
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 1, 1, 2, 2, 2, 2, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 37 |
| 2 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 37 |
| 3 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 11)) | 37 |
| 4-5 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 37 |
| 6 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 37 |
| 7-9 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 37 |
| 10-12 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 37 |
| 13-14 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 37 |
| 15-17 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 37 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 37 |
| 20-31 | Chờ 12 bước (`-12`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); hướng tới tọa độ (12, 9) | 37 |

