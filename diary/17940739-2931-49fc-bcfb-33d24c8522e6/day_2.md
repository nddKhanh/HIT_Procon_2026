# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 35
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 9 | #1 | #5 | (11, 13) | 30 | 37 |
| 12 | #0 | #4 | (8, 4) | 1 | 37 |
| 15 | #0 | #4 | (9, 4) | 36 | 37 |
| 23 | #1 | #5 | (7, 11) | 28 | 37 |
| 27 | #3 | #4 | (11, 2) | 10 | 37 |
| 35 | #0 | #4 | (11, 2) | 23 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 6) (ô=99)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 2)
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 2, 2, -1, 2, 3, 3, 3, 1, 1, 0, 0, 0, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 9 |
| 3 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 7 |
| 4-5 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 6 |
| 6 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 4 |
| 7-9 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 2 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 37 |
| 12 | Chờ 1 bước (`-1`) | (8, 4) | (8, 4) | Dự kiến đứng yên tại (8, 4); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 37 |
| 13-14 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 15-16 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 35 |
| 17-19 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 33 |
| 20-22 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 31 |
| 23-24 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 30 |
| 25-26 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 5)) | 29 |
| 27-28 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 28 |
| 29-31 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 26 |
| 32 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 24 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 37 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 13) (ô=223)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 11)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 4, 5, 5, 5, 0, 2, 5, 0, 5, 5, 4, 5, 0, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 35 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 34 |
| 4 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 32 |
| 5-6 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 31 |
| 7-8 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 37 |
| 9-11 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 35 |
| 12-13 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 34 |
| 14 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 13)) | 32 |
| 15-16 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 31 |
| 17-18 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 30 |
| 19-20 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 29 |
| 21-22 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 37 |
| 23 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 11)) | 35 |
| 24-25 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 34 |
| 26 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 32 |
| 27 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 30 |
| 28-30 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 11)) | 28 |
| 31-32 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 27 |
| 33-34 | Chờ 2 bước (`-2`) | (2, 11) | (2, 11) | Dự kiến đứng yên tại (2, 11); hướng tới tọa độ (2, 11) | 27 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 4) (ô=72)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 12)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 4, 4, 5, 5, 4, 3, 2, 4, 3, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 34 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 33 |
| 4-6 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 31 |
| 7 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 29 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 28 |
| 10 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 26 |
| 11-13 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 24 |
| 14-15 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 23 |
| 16 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 21 |
| 17-19 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 8)) | 19 |
| 20-21 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 18 |
| 22-24 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 9)) | 16 |
| 25-26 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 15 |
| 27-29 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 13 |
| 30-32 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 11)) | 11 |
| 33-34 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 10 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 6) (ô=110)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 1)
- Mảng hành động đã gửi server: `[1, 4, 5, 5, 5, 4, 1, 1, 0, 0, 0, 2, 1, 2, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 5)) | 25 |
| 3-4 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 24 |
| 5-7 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 22 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 21 |
| 10-12 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 19 |
| 13-14 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 18 |
| 15-16 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 17 |
| 17-18 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 5)) | 16 |
| 19-20 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 15 |
| 21-23 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 13 |
| 24 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 11 |
| 25-26 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 37 |
| 27-28 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 36 |
| 29-31 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 1)) | 34 |
| 32-33 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 33 |
| 34 | Chờ 1 bước (`-1`) | (12, 1) | (12, 1) | Dự kiến đứng yên tại (12, 1); hướng tới tọa độ (12, 1) | 33 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (9, 4) (ô=73)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 2)
- Mảng hành động đã gửi server: `[5, -10, 2, 1, 2, 1, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 37 |
| 2-11 | Chờ 10 bước (`-10`) | (8, 4) | (8, 4) | Dự kiến đứng yên tại (8, 4); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 37 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 14-15 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 37 |
| 16-17 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 37 |
| 18 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 37 |
| 19-34 | Chờ 16 bước (`-16`) | (11, 2) | (11, 2) | Dự kiến đứng yên tại (11, 2); hướng tới tọa độ (11, 2) | 37 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (14, 13) (ô=222)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 11)
- Mảng hành động đã gửi server: `[0, 5, 5, 4, 5, 5, 5, 0, 0, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 37 |
| 2 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 37 |
| 3-4 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 37 |
| 5-6 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 37 |
| 7-9 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 37 |
| 10-11 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 37 |
| 12 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 13)) | 37 |
| 13-14 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 37 |
| 15-16 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 37 |
| 17-34 | Chờ 18 bước (`-18`) | (7, 11) | (7, 11) | Dự kiến đứng yên tại (7, 11); hướng tới tọa độ (7, 11) | 37 |

