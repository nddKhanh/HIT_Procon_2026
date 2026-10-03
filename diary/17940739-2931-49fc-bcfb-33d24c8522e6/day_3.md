# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 36
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 25 | #0 | #5 | (11, 7) | 22 | 37 |
| 26 | #3 | #5 | (11, 7) | 16 | 37 |
| 27 | #2 | #4 | (0, 8) | 0 | 37 |
| 35 | #3 | #5 | (14, 6) | 32 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 2) (ô=43)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(10, 2))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(10, 2))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 3, 4, 5, 5, 5, 4, 1, 1, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 36 |
| 2-4 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 34 |
| 5-6 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 33 |
| 7-9 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 31 |
| 10-12 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 5)) | 29 |
| 13-14 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 28 |
| 15-17 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 26 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 25 |
| 20-22 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 23 |
| 23-24 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 37 |
| 25-26 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 36 |
| 27-28 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 5)) | 35 |
| 29-30 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 34 |
| 31-33 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 32 |
| 34 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 30 |
| 35 | Chờ 1 bước (`-1`) | (10, 2) | (10, 2) | Dự kiến đứng yên tại (10, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 30 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 11) (ô=178)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 12)
- Mảng hành động đã gửi server: `[2, 3, 2, 1, 2, 3, 2, 2, 4, 2, 2, 2, 1, 2, 2, 2, 3, -1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 11)) | 25 |
| 3-4 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 24 |
| 5-7 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 22 |
| 8 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 20 |
| 9 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 11)) | 18 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 17 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 12)) | 16 |
| 14-15 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 12)) | 15 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 13)) | 14 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 13 |
| 20 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 11 |
| 21-22 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 10 |
| 23-25 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 8 |
| 26-27 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 7 |
| 28-29 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 6 |
| 30 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 4 |
| 31-32 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 13)) | 3 |
| 33 | Chờ 1 bước (`-1`) | (15, 13) | (15, 13) | Dự kiến đứng yên tại (15, 13); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 13)) | 3 |
| 34-35 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=195)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 6)
- Mảng hành động đã gửi server: `[0, 5, 0, 1, 5, 0, -12, 1, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 11)) | 8 |
| 3-4 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 7 |
| 5-7 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 5 |
| 8-10 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 9)) | 3 |
| 11-12 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 2 |
| 13-15 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 8)) | 0 |
| 16-27 | Chờ 12 bước (`-12`) | (0, 8) | (0, 8) | Dự kiến đứng yên tại (0, 8); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 8)) | 37 |
| 28-29 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 36 |
| 30-32 | Di chuyển hướng 2 (`2`) | (1, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 34 |
| 33 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 32 |
| 34-35 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 31 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 1) (ô=28)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 6)
- Mảng hành động đã gửi server: `[2, 5, 4, 5, 4, 4, 5, 2, 3, 3, 3, 1, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 1)) | 31 |
| 3-4 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 30 |
| 5-7 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 28 |
| 8-9 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 2)) | 27 |
| 10-11 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 26 |
| 12-13 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 25 |
| 14-15 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 23 |
| 16-17 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 22 |
| 18-19 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 20 |
| 20-22 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 18 |
| 23-25 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 37 |
| 26-27 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 6)) | 36 |
| 28-29 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 35 |
| 30-32 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 33 |
| 33-34 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 37 |
| 35 | Chờ 1 bước (`-1`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); hướng tới tọa độ (14, 6) | 37 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (11, 2) (ô=43)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(0, 8))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(0, 8))
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 5, 5, 5, 4, 5, 4, 4, 5, 5, 4, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 37 |
| 2 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 37 |
| 3-4 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 5-6 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 4)) | 37 |
| 7-8 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 37 |
| 9-10 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 37 |
| 11-13 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 37 |
| 14 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 37 |
| 15-16 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 37 |
| 17 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 37 |
| 18-20 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 37 |
| 21-22 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 37 |
| 23 | Di chuyển hướng 5 (`5`) | (2, 7) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 37 |
| 24-26 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 8)) | 37 |
| 27-35 | Chờ 9 bước (`-9`) | (0, 8) | (0, 8) | Dự kiến đứng yên tại (0, 8); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 8)) | 37 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 11) (ô=183)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 6)
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 1, 2, -7, 2, 2, 2, 1, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 37 |
| 4-6 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 37 |
| 7-9 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 37 |
| 10-11 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 37 |
| 12-14 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 37 |
| 15-17 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 37 |
| 18-24 | Chờ 7 bước (`-7`) | (11, 7) | (11, 7) | Dự kiến đứng yên tại (11, 7); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 37 |
| 25-26 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 37 |
| 27 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 37 |
| 28-30 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 37 |
| 31 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 37 |
| 32-35 | Chờ 4 bước (`-4`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); hướng tới tọa độ (14, 6) | 37 |

