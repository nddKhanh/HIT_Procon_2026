# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 52
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 8 | #0 | #3 | (10, 5) | 57 | 65 |
| 10 | #2 | #3 | (10, 5) | 43 | 65 |
| 19 | #1 | #3 | (10, 5) | 28 | 65 |
| 24 | #2 | #3 | (10, 5) | 49 | 65 |
| 25 | #2 | #3 | (9, 6) | 63 | 65 |
| 36 | #1 | #3 | (8, 7) | 43 | 65 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 0) (ô=11)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 16))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 16))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 4, 3, 4, 3, 4, 4, 3, 4, 5, 0, 0, 0, 4, 4, 3, 4, 4, 3, 4, 2, 2, 2, 1, 2, 3, 2, 2, 2, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 63 |
| 2-3 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 62 |
| 4 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 3)) | 60 |
| 5-6 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 59 |
| 7 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 65 |
| 8 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 63 |
| 9 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 61 |
| 10 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 59 |
| 11 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 57 |
| 12 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 55 |
| 13 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 53 |
| 14 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(9, 12)) | 51 |
| 15-16 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 50 |
| 17-18 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 49 |
| 19-20 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 48 |
| 21 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 46 |
| 22-23 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 45 |
| 24 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 43 |
| 25 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 41 |
| 26 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 39 |
| 27 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 37 |
| 28 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 35 |
| 29 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(5, 16)) | 33 |
| 30-31 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 32 |
| 32 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 30 |
| 33-34 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 29 |
| 35-36 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 28 |
| 37-39 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 26 |
| 40 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 24 |
| 41 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 22 |
| 42-43 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 21 |
| 44-46 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 16)) | 19 |
| 47-51 | Chờ 5 bước (`-5`) | (13, 16) | (13, 16) | Dự kiến đứng yên tại (13, 16); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 16)) | 19 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 16) (ô=237)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(0, 7))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(0, 7))
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 4, 4, 4, 3, 4, 4, 5, 4, 4, 4, 0, 0, 0, 5, 5, 5, 5, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 51 |
| 2-4 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 49 |
| 5-7 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 47 |
| 8 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 45 |
| 9 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 43 |
| 10 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(9, 12)) | 41 |
| 11-12 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 40 |
| 13 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 38 |
| 14 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 36 |
| 15 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 34 |
| 16 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 32 |
| 17 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 30 |
| 18 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 65 |
| 19 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 63 |
| 20 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 3)) | 61 |
| 21-22 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 60 |
| 23 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 58 |
| 24-25 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 0)) | 57 |
| 26-27 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 56 |
| 28-29 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 55 |
| 30 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 53 |
| 31 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 51 |
| 32 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 49 |
| 33 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 47 |
| 34 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 45 |
| 35 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 65 |
| 36-38 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 63 |
| 39-41 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 61 |
| 42-43 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 60 |
| 44 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 58 |
| 45 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 56 |
| 46 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 54 |
| 47 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 52 |
| 48 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 50 |
| 49 | Di chuyển hướng 5 (`5`) | (2, 6) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 48 |
| 50 | Di chuyển hướng 5 (`5`) | (1, 6) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 46 |
| 51 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 7)) | 44 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 11) (ô=162)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 14)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 4, 4, 4, 3, 4, 4, 3, 3, 4, 3, 4, 4, 5, 0, 0, 0, -1, 4, 4, 3, 4, 4, 3, 4, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 52 |
| 2 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 50 |
| 3-5 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 48 |
| 6-7 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 47 |
| 8 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 45 |
| 9 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 65 |
| 10 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 63 |
| 11 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 3)) | 61 |
| 12-13 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 60 |
| 14 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 58 |
| 15-16 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 0)) | 57 |
| 17-18 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 56 |
| 19-20 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 53 |
| 22 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 51 |
| 23 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 65 |
| 24 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 65 |
| 25 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 63 |
| 26 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 61 |
| 27 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 59 |
| 28 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 57 |
| 29 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 55 |
| 30 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(9, 12)) | 53 |
| 31-32 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 52 |
| 33-34 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 51 |
| 35-36 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 50 |
| 37 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 48 |
| 38 | Chờ 1 bước (`-1`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 48 |
| 39-40 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 47 |
| 41 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 45 |
| 42 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 43 |
| 43 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 41 |
| 44 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 39 |
| 45 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 37 |
| 46 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(5, 16)) | 35 |
| 47-48 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 34 |
| 49-51 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 32 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (12, 1) (ô=26)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 7)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, -18, 4, 5, 4, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 65 |
| 2 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 3)) | 65 |
| 3-4 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 65 |
| 5 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 65 |
| 6-23 | Chờ 18 bước (`-18`) | (10, 5) | (10, 5) | Dự kiến đứng yên tại (10, 5); hướng tới tọa độ (10, 5) | 65 |
| 24 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 65 |
| 25 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 65 |
| 26 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 65 |
| 27-51 | Chờ 25 bước (`-25`) | (8, 7) | (8, 7) | Dự kiến đứng yên tại (8, 7); hướng tới tọa độ (8, 7) | 65 |

