# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 34
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 15 | #1 | #7 | (7, 9) | 8 | 37 |
| 15 | #2 | #7 | (7, 9) | 15 | 37 |
| 17 | #3 | #7 | (7, 9) | 13 | 37 |
| 21 | #0 | #7 | (7, 9) | 15 | 37 |
| 32 | #2 | #7 | (7, 9) | 26 | 37 |
| 33 | #0 | #7 | (7, 9) | 27 | 37 |
| 33 | #1 | #7 | (7, 9) | 26 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (0, 2) (ô=32)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(7, 9))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(7, 9))
- Mảng hành động đã gửi server: `[3, 2, 3, 3, 3, 3, 2, 2, 3, 3, 5, 5, 5, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 27 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 3) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 25 |
| 3-5 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 23 |
| 6-7 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 22 |
| 8-9 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 21 |
| 10-12 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 19 |
| 13-14 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 18 |
| 15-16 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 17 |
| 17-18 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 16 |
| 19-20 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |
| 21-22 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 36 |
| 23-25 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 34 |
| 26 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 32 |
| 27-28 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 31 |
| 29 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 29 |
| 30-32 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |
| 33 | Chờ 1 bước (`-1`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 15) (ô=250)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(7, 9))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(7, 9))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 1, 0, 0, 0, 5, 4, 4, -1, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 17 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 16 |
| 4-5 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 15 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 14 |
| 8-10 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 12 |
| 11-12 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 10 |
| 13-14 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |
| 15-16 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 36 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 35 |
| 19-20 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 34 |
| 21-22 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 33 |
| 23-25 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 31 |
| 26 | Chờ 1 bước (`-1`) | (4, 9) | (4, 9) | Dự kiến đứng yên tại (4, 9); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 31 |
| 27-28 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 30 |
| 29 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 28 |
| 30-32 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |
| 33 | Chờ 1 bước (`-1`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 15) (ô=250)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 9)
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 1, 0, 0, 0, 5, 4, 4, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 24 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 23 |
| 4-5 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 22 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 21 |
| 8-10 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 19 |
| 11-12 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 17 |
| 13-14 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |
| 15-16 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 36 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 35 |
| 19-20 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 34 |
| 21-22 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 33 |
| 23-25 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 31 |
| 26-27 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 30 |
| 28 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 28 |
| 29-31 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |
| 32-33 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 36 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=248)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(4, 9))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(4, 9))
- Mảng hành động đã gửi server: `[5, 2, 1, 0, 0, 0, 1, 0, 0, 0, 5, 4, 4, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 15)) | 23 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 22 |
| 4-5 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 21 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 20 |
| 8-9 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 19 |
| 10-12 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 17 |
| 13-14 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 15 |
| 15-16 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |
| 17-18 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 36 |
| 19-20 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 35 |
| 21-22 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 34 |
| 23-24 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 33 |
| 25-27 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 31 |
| 28-33 | Chờ 6 bước (`-6`) | (4, 9) | (4, 9) | Dự kiến đứng yên tại (4, 9); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 31 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 5) (ô=91)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(11, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(11, 6))
- Mảng hành động đã gửi server: `[1, 1, 1, 3, 3, 3, 4, 1, 2, 5, 5, 5, 4, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 18 |
| 3 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 16 |
| 4-5 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 15 |
| 6-7 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 14 |
| 8-10 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 12 |
| 11 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 10 |
| 12-13 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 9 |
| 14-15 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 8 |
| 16-17 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 7 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 6 |
| 20-21 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 5 |
| 22-23 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 4 |
| 24-26 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 2 |
| 27-33 | Chờ 7 bước (`-7`) | (11, 6) | (11, 6) | Dự kiến đứng yên tại (11, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 2 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 6) (ô=109)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(9, 3))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(9, 3))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 0, 0, 5, 4, 4, 4, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 17 |
| 2-3 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 16 |
| 4 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 14 |
| 5-7 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 12 |
| 8-9 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 11 |
| 10-12 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 0)) | 9 |
| 13-14 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 8 |
| 15-17 | Di chuyển hướng 4 (`4`) | (10, 0) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 6 |
| 18-20 | Di chuyển hướng 4 (`4`) | (10, 1) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 4 |
| 21-23 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 2 |
| 24-33 | Chờ 10 bước (`-10`) | (9, 3) | (9, 3) | Dự kiến đứng yên tại (9, 3); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 2 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (8, 3) (ô=56)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(15, 5))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(15, 5))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 0, 0, 2, 2, 2, 3, 3, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 26 |
| 3-4 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 25 |
| 5-7 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 23 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 22 |
| 10-11 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 21 |
| 12-13 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 20 |
| 14-16 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 0)) | 18 |
| 17-18 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 17 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 16 |
| 21-23 | Di chuyển hướng 2 (`2`) | (13, 0) | (14, 0) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 0)) | 14 |
| 24-25 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 13 |
| 26 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 11 |
| 27-28 | Di chuyển hướng 4 (`4`) | (15, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 10 |
| 29-31 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 8 |
| 32-33 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 7 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (5, 5) (ô=85)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(7, 9))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(7, 9))
- Mảng hành động đã gửi server: `[2, 3, 4, 3, 3, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 37 |
| 2 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 37 |
| 3 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 37 |
| 4-5 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 37 |
| 6-7 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |
| 8-33 | Chờ 26 bước (`-26`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 37 |

