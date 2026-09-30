# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 44
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 7 | #1 | #5 | (7, 2) | 29 | 61 |
| 9 | #4 | #5 | (8, 2) | 30 | 61 |
| 10 | #0 | #5 | (7, 2) | 46 | 61 |
| 30 | #2 | #5 | (7, 3) | 1 | 61 |
| 36 | #0 | #5 | (7, 3) | 30 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 1) (ô=16)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(9, 7))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(9, 7))
- Mảng hành động đã gửi server: `[5, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 3, 3, 4, 3, 0, 0, 5, 5, 5, 5, 0, 4, 4, 3, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 59 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 58 |
| 4 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 56 |
| 5 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 54 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 52 |
| 7 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 50 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 48 |
| 9 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 61 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 59 |
| 11 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 57 |
| 12 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 55 |
| 13 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 53 |
| 14 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 51 |
| 15-16 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 50 |
| 17-18 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 49 |
| 19-20 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 48 |
| 21 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 46 |
| 22-23 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 45 |
| 24-25 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 44 |
| 26-27 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 43 |
| 28 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 41 |
| 29 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 39 |
| 30 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 37 |
| 31 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 35 |
| 32 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 33 |
| 33-34 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 32 |
| 35 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 61 |
| 36-37 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 60 |
| 38-39 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 59 |
| 40-42 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 57 |
| 43 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 55 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 4) (ô=63)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=2, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=2, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[0, 1, 1, 4, 4, 4, 4, 4, 5, 5, 5, 4, 4, 5, 2, 3, 3, 3, 3, -1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 33 |
| 2-3 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 32 |
| 4 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 30 |
| 5-6 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 61 |
| 7 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 59 |
| 8-9 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 58 |
| 10 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 56 |
| 11 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 54 |
| 12 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 52 |
| 13 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 50 |
| 14 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 48 |
| 15 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 46 |
| 16 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 44 |
| 17-18 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 43 |
| 19-20 | Di chuyển hướng 2 (`2`) | (0, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 42 |
| 21-22 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 41 |
| 23 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 39 |
| 24 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 37 |
| 25-26 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 36 |
| 27 | Chờ 1 bước (`-1`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 36 |
| 28-29 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 35 |
| 30-31 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 34 |
| 32 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 32 |
| 33 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 30 |
| 34 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 28 |
| 35 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 26 |
| 36 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 24 |
| 37 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 22 |
| 38 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 20 |
| 39 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 18 |
| 40 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 16 |
| 41-42 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 15 |
| 43 | Chờ 1 bước (`-1`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 15 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 7) (ô=107)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 2)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 1, 3, 3, 4, 3, 0, 0, 5, 5, 5, 5, 0, 4, 4, 0, 5, 5, 5, 5, 5, 0, 1, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 32 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 30 |
| 3 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 28 |
| 4 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 26 |
| 5-7 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 24 |
| 8 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 22 |
| 9-10 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 21 |
| 11-12 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 20 |
| 13-14 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 19 |
| 15 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 17 |
| 16-17 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 16 |
| 18-19 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 15 |
| 20-21 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 14 |
| 22 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 12 |
| 23 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 10 |
| 24 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 8 |
| 25 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 6 |
| 26 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 4 |
| 27-28 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 3 |
| 29 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 61 |
| 30-31 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 60 |
| 32 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 58 |
| 33 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 56 |
| 34 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 54 |
| 35 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 52 |
| 36 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 50 |
| 37 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 48 |
| 38-39 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 47 |
| 40-41 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 46 |
| 42-43 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 44 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 8) (ô=112)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=2, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=2, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 3, 1, 1, 2, 1, 1, 0, 1, 1, 1, 5, 0, 0, 5, 5, 5, 5, 0, 1, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 46 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 45 |
| 4 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 43 |
| 5 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 41 |
| 6-7 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 40 |
| 8-9 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 39 |
| 10-11 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 38 |
| 12 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 13 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 34 |
| 14 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 32 |
| 15 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 30 |
| 16 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 28 |
| 17 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 26 |
| 18-20 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 24 |
| 21-22 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 23 |
| 23 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 21 |
| 24 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 19 |
| 25 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 17 |
| 26 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 15 |
| 27 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 13 |
| 28 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 11 |
| 29 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 9 |
| 30-31 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 8 |
| 32-43 | Chờ 12 bước (`-12`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 8 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 6) (ô=92)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 2, 2, 2, 1, 1, 3, 3, 4, 3, 4, 4, 5, 5, 4, 5, 4, 5, 5, 4, 4, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 35 |
| 1-3 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 33 |
| 4-5 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 32 |
| 6-8 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 61 |
| 9 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 59 |
| 10 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 57 |
| 11 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 55 |
| 12 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 53 |
| 13-14 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 52 |
| 15-16 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 51 |
| 17-18 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 50 |
| 19 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 48 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 47 |
| 22-23 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 46 |
| 24-25 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 45 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 43 |
| 27 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 41 |
| 28 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 39 |
| 29 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 37 |
| 30-31 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 36 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 35 |
| 34-36 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 33 |
| 37 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 31 |
| 38 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 29 |
| 39 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 27 |
| 40 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 25 |
| 41-42 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 24 |
| 43 | Chờ 1 bước (`-1`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 24 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (2, 1) (ô=16)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 3)
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 2, 2, -1, 5, 4, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 61 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 61 |
| 3 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 61 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 61 |
| 5 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 61 |
| 6 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 61 |
| 7 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 61 |
| 8 | Chờ 1 bước (`-1`) | (8, 2) | (8, 2) | Dự kiến đứng yên tại (8, 2); hướng tới tọa độ (8, 2) | 61 |
| 9 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 61 |
| 10 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 61 |
| 11-43 | Chờ 33 bước (`-33`) | (7, 3) | (7, 3) | Dự kiến đứng yên tại (7, 3); hướng tới tọa độ (7, 3) | 61 |

