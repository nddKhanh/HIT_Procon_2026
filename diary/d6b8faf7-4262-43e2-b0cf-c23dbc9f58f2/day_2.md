# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 48
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 17 | #2 | #4 | (6, 3) | 3 | 62 |
| 29 | #0 | #4 | (7, 9) | 3 | 62 |
| 30 | #0 | #4 | (6, 10) | 60 | 62 |
| 31 | #0 | #4 | (6, 11) | 60 | 62 |
| 32 | #0 | #4 | (5, 12) | 60 | 62 |
| 34 | #3 | #4 | (5, 12) | 15 | 62 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 14) (ô=248)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 3)
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 2, 1, 1, 1, 1, 3, 5, 5, 5, 5, 4, 4, 4, 4, 1, 1, 1, 0, 1, 0, 0, 1, 0, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 20 |
| 2 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 18 |
| 3-5 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 16 |
| 6-7 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 15 |
| 8-9 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 14 |
| 10-11 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 13 |
| 12-13 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 12 |
| 14-15 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 11 |
| 16-17 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 10 |
| 18-19 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 9 |
| 20-21 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 8 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 7 |
| 24-25 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 6 |
| 26 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 4 |
| 27-28 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 62 |
| 29 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 62 |
| 30 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 62 |
| 31 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 62 |
| 32-33 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 61 |
| 34 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 59 |
| 35 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 57 |
| 36 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 55 |
| 37-38 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 54 |
| 39-40 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 53 |
| 41-42 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 52 |
| 43-44 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 51 |
| 45 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 49 |
| 46-47 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 48 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 14) (ô=249)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(6, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(6, 3))
- Mảng hành động đã gửi server: `[5, 4, 3, 3, 2, 2, 2, 3, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 5, 0, 1, 0, 1, 0, 5, 4, 0, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 47 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 46 |
| 4-5 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 45 |
| 6 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 43 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 17)) | 42 |
| 9-10 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 17)) | 41 |
| 11-12 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 40 |
| 13-14 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 18)) | 39 |
| 15-16 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 38 |
| 17-18 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 37 |
| 19 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 35 |
| 20 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 33 |
| 21 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 31 |
| 22-23 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 30 |
| 24 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 28 |
| 25 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 26 |
| 26 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 24 |
| 27 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 22 |
| 28 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 20 |
| 29-30 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 19 |
| 31-32 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 18 |
| 33 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 16 |
| 34 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 14 |
| 35-36 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 13 |
| 37-38 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 12 |
| 39 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(9, 4)) | 10 |
| 40-41 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 9 |
| 42-43 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 8 |
| 44-45 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 7 |
| 46 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 5 |
| 47 | Chờ 1 bước (`-1`) | (6, 3) | (6, 3) | Dự kiến đứng yên tại (6, 3); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 5 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 10) (ô=177)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(11, 17))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(11, 17))
- Mảng hành động đã gửi server: `[0, 0, 1, 0, 0, 1, 0, -7, 2, 2, 2, 2, 2, 3, 3, 4, 4, 2, 3, 3, 3, 4, 3, 3, 4, 4, 4, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 11 |
| 1 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 9 |
| 2-3 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 8 |
| 4-5 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 7 |
| 6-7 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 6 |
| 8-9 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 5 |
| 10 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 3 |
| 11-17 | Chờ 7 bước (`-7`) | (6, 3) | (6, 3) | Dự kiến đứng yên tại (6, 3); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 62 |
| 18-19 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 61 |
| 20 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 59 |
| 21-22 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 58 |
| 23-24 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 57 |
| 25 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 55 |
| 26-27 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 54 |
| 28-29 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 53 |
| 30 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 51 |
| 31 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 49 |
| 32-33 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 48 |
| 34-35 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 47 |
| 36 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 45 |
| 37 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 43 |
| 38 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 41 |
| 39 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 39 |
| 40 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 37 |
| 41-42 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 36 |
| 43 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 34 |
| 44 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 32 |
| 45 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 30 |
| 46 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 28 |
| 47 | Chờ 1 bước (`-1`) | (11, 17) | (11, 17) | Dự kiến đứng yên tại (11, 17); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 28 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 5) (ô=96)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=2, tọa độ=(10, 14))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=2, tọa độ=(10, 14))
- Mảng hành động đã gửi server: `[3, 4, 3, 0, 1, 0, 1, 0, 5, 5, 5, 5, 5, 3, 3, 4, 3, 4, 3, 4, 4, 4, 2, 1, 2, 2, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 45 |
| 1 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 43 |
| 2-3 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 42 |
| 4-5 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 41 |
| 6-7 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 40 |
| 8 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 38 |
| 9 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 36 |
| 10-11 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 35 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 34 |
| 14 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 32 |
| 15-16 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 31 |
| 17-18 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 30 |
| 19 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 28 |
| 20-21 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 27 |
| 22 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 25 |
| 23-24 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 24 |
| 25-26 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 23 |
| 27-28 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 22 |
| 29-30 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 21 |
| 31 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 19 |
| 32 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 17 |
| 33 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 62 |
| 34-35 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 61 |
| 36 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 59 |
| 37-38 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 58 |
| 39-40 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 57 |
| 41-42 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 56 |
| 43-45 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 54 |
| 46 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 52 |
| 47 | Chờ 1 bước (`-1`) | (10, 14) | (10, 14) | Dự kiến đứng yên tại (10, 14); mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 52 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (14, 13) (ô=235)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(5, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(5, 12))
- Mảng hành động đã gửi server: `[0, 0, 1, 0, 0, 0, 0, 0, 5, 5, 5, 5, 0, 0, 3, 3, 3, 3, 4, 4, -2, 4, 4, 4, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 62 |
| 2 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 62 |
| 3 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 62 |
| 4 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 62 |
| 5 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 62 |
| 6 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 62 |
| 7-8 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 62 |
| 9 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 62 |
| 10 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 62 |
| 11 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 62 |
| 12 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 62 |
| 13 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 62 |
| 14-15 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 62 |
| 16 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 62 |
| 17-18 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 62 |
| 19 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 62 |
| 20-21 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 62 |
| 22 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 62 |
| 23-24 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 62 |
| 25-26 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 62 |
| 27-28 | Chờ 2 bước (`-2`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); hướng tới tọa độ (7, 9) | 62 |
| 29 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 62 |
| 30 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 62 |
| 31 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 62 |
| 32-47 | Chờ 16 bước (`-16`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 62 |

