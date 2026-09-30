# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 58
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 7 | #1 | #5 | (4, 2) | 8 | 61 |
| 11 | #2 | #5 | (4, 2) | 32 | 61 |
| 14 | #3 | #5 | (4, 2) | 0 | 61 |
| 15 | #3 | #5 | (5, 2) | 59 | 61 |
| 16 | #3 | #5 | (6, 2) | 59 | 61 |
| 17 | #3 | #5 | (7, 2) | 59 | 61 |
| 19 | #3 | #5 | (8, 2) | 59 | 61 |
| 20 | #3 | #5 | (9, 2) | 59 | 61 |
| 21 | #3 | #5 | (10, 2) | 59 | 61 |
| 22 | #3 | #5 | (11, 2) | 59 | 61 |
| 23 | #3 | #5 | (12, 1) | 59 | 61 |
| 32 | #1 | #5 | (11, 2) | 44 | 61 |
| 34 | #2 | #5 | (11, 2) | 35 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 7) (ô=107)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 1, 3, 3, 4, 3, 0, 0, 5, 5, 5, 5, 0, 4, 4, 4, 4, 4, 5, 5, 5, 4, 4, 5, 2, 3, 3, 3, 3, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 54 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 52 |
| 3 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 50 |
| 4 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 48 |
| 5-7 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 46 |
| 8 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 44 |
| 9-10 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 43 |
| 11-12 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 42 |
| 13-14 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 41 |
| 15 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 39 |
| 16-17 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 38 |
| 18-19 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 37 |
| 20-21 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 36 |
| 22 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 34 |
| 23 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 32 |
| 24 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 30 |
| 25 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 28 |
| 26 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 26 |
| 27-28 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 25 |
| 29-30 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 23 |
| 31-32 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 22 |
| 33 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 20 |
| 34 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 18 |
| 35 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 16 |
| 36 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 14 |
| 37 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 12 |
| 38 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 10 |
| 39 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 8 |
| 40-41 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 7 |
| 42-43 | Di chuyển hướng 2 (`2`) | (0, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 6 |
| 44-45 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 5 |
| 46 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 3 |
| 47 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 1 |
| 48-49 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 0 |
| 50-57 | Chờ 8 bước (`-8`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[2, 3, 3, 2, 2, 2, 2, 1, -6, 2, 2, 2, 2, 1, 4, 4, 4, 4, 4, 4, 4, 0, 0, 0, 4, 4, 4, 3, 4, 4, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 14 |
| 2 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 12 |
| 3-5 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 10 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 61 |
| 7 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 59 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 57 |
| 9 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 55 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 53 |
| 12-17 | Chờ 6 bước (`-6`) | (8, 1) | (8, 1) | Dự kiến đứng yên tại (8, 1); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 53 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 52 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 51 |
| 22 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 49 |
| 23-25 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 47 |
| 26-27 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 46 |
| 28-29 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 45 |
| 30-31 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 61 |
| 32 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 59 |
| 33-35 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 57 |
| 36 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 55 |
| 37 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 53 |
| 38 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 51 |
| 39-40 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 50 |
| 41 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 48 |
| 42-44 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 46 |
| 45-46 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 45 |
| 47-49 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 43 |
| 50 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 41 |
| 51 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 39 |
| 52 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 37 |
| 53 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 35 |
| 54 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 33 |
| 55 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 31 |
| 56-57 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 30 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 2) (ô=30)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[5, 0, 1, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 3, 3, 4, 3, 0, 0, 5, 5, 5, 5, 0, 4, 4, 3, 4, 4, 4, 3, 4, 4, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 42 |
| 1 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 40 |
| 2-3 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 39 |
| 4-5 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 38 |
| 6 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 36 |
| 7-9 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 34 |
| 10 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 61 |
| 11 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 59 |
| 12 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 57 |
| 13 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 55 |
| 14-15 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 53 |
| 16 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 51 |
| 17 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 49 |
| 18 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 47 |
| 19 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 45 |
| 20-21 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 44 |
| 22-23 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 43 |
| 24-25 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 42 |
| 26 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 40 |
| 27-28 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 39 |
| 29-30 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 38 |
| 31-32 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 37 |
| 33 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 61 |
| 34 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 59 |
| 35 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 57 |
| 36 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 55 |
| 37 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 53 |
| 38-39 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 52 |
| 40-41 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 50 |
| 42-43 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 49 |
| 44-45 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 48 |
| 46-48 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 46 |
| 49 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 44 |
| 50 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 42 |
| 51 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 40 |
| 52 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 38 |
| 53 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 36 |
| 54 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 34 |
| 55-56 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 33 |
| 57 | Chờ 1 bước (`-1`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 33 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 0) (ô=1)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[4, -7, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 3, 3, 4, 3, 4, 4, 5, 5, 4, 5, 4, 5, 5, 4, 4, 5, 4, 4, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 7 |
| 2-8 | Chờ 7 bước (`-7`) | (1, 1) | (1, 1) | Dự kiến đứng yên tại (1, 1); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 7 |
| 9-10 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 6 |
| 11 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 4 |
| 12 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 2 |
| 13 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 61 |
| 14 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 61 |
| 15 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 61 |
| 16 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 61 |
| 17-18 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 61 |
| 19 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 61 |
| 20 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 61 |
| 21 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 61 |
| 22 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 61 |
| 23-24 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 60 |
| 25-26 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 59 |
| 27-28 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 58 |
| 29 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 56 |
| 30-31 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 55 |
| 32-33 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 54 |
| 34-35 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 53 |
| 36 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 51 |
| 37 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 49 |
| 38 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 47 |
| 39 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 45 |
| 40-41 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 44 |
| 42-43 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 43 |
| 44-46 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 41 |
| 47 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 39 |
| 48 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 37 |
| 49 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 35 |
| 50 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 33 |
| 51-52 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 32 |
| 53-57 | Chờ 5 bước (`-5`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 32 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=171)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(1, 1))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(1, 1))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 1, 1, 1, 1, 0, 0, 0, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 23 |
| 2-3 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 22 |
| 4 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 20 |
| 5 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 18 |
| 6-7 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 17 |
| 8-9 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 16 |
| 10-12 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 14 |
| 13 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 12 |
| 14 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 10 |
| 15 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 8 |
| 16 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 6 |
| 17 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 4 |
| 18-57 | Chờ 40 bước (`-40`) | (1, 1) | (1, 1) | Dự kiến đứng yên tại (1, 1); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 4 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 3) (ô=49)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 2)
- Mảng hành động đã gửi server: `[0, 5, 5, -10, 2, 2, 2, 2, 2, 2, 2, 1, 4, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 61 |
| 2 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 61 |
| 3 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 61 |
| 4-13 | Chờ 10 bước (`-10`) | (4, 2) | (4, 2) | Dự kiến đứng yên tại (4, 2); hướng tới tọa độ (4, 2) | 61 |
| 14 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 61 |
| 15 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 61 |
| 16 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 61 |
| 17-18 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 61 |
| 19 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 61 |
| 20 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 61 |
| 21 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 61 |
| 22 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 61 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 61 |
| 25-57 | Chờ 33 bước (`-33`) | (11, 2) | (11, 2) | Dự kiến đứng yên tại (11, 2); hướng tới tọa độ (11, 2) | 61 |

