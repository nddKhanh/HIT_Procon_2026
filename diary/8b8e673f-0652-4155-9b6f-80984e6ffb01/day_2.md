# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 80
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 8 | #2 | #3 | (6, 14) | 22 | 32 |
| 11 | #0 | #3 | (4, 14) | 23 | 32 |
| 19 | #1 | #3 | (1, 13) | 0 | 32 |
| 22 | #1 | #3 | (2, 13) | 31 | 32 |
| 24 | #1 | #3 | (2, 12) | 30 | 32 |
| 26 | #1 | #3 | (3, 12) | 31 | 32 |
| 48 | #2 | #3 | (5, 6) | 7 | 32 |
| 80 | #1 | #3 | (5, 6) | 1 | 32 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=218)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Mảng hành động đã gửi server: `[0, 5, 5, 4, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 28 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 26 |
| 4-5 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 25 |
| 6-7 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 15)) | 24 |
| 8-9 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 23 |
| 10-11 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 31 |
| 12-13 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 30 |
| 14-15 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 29 |
| 16-17 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 28 |
| 18-19 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 27 |
| 20-21 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 25 |
| 22-23 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 24 |
| 24-25 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 23 |
| 26-27 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 22 |
| 28-29 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 21 |
| 30-31 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 20 |
| 32-33 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 19 |
| 34-35 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 18 |
| 36 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 16 |
| 37 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 14 |
| 38 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 12 |
| 39-40 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 11 |
| 41-42 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 10 |
| 43-44 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 9 |
| 45-79 | Chờ 35 bước (`-35`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 9 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 13) (ô=183)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(5, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(5, 6))
- Mảng hành động đã gửi server: `[-20, 2, 1, 2, 2, 3, 3, 2, 2, 2, 2, 3, 5, 5, 0, 5, 0, 0, 4, 4, 3, 0, 1, 0, 1, 1, 0, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-19 | Chờ 20 bước (`-20`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 32 |
| 20-21 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 32 |
| 22-23 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 32 |
| 24-25 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 32 |
| 26-27 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 31 |
| 28-29 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 30 |
| 30-31 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 29 |
| 32-33 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 28 |
| 34-35 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 27 |
| 36-37 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 25 |
| 38-40 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 23 |
| 41-42 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 22 |
| 43-44 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 21 |
| 45-46 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 20 |
| 47-48 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 19 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 17 |
| 51-52 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 16 |
| 53-55 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 14 |
| 56-57 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 13 |
| 58-59 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 12 |
| 60-61 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 15)) | 11 |
| 62-63 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 10 |
| 64-65 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 9 |
| 66-67 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 8 |
| 68-69 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 7 |
| 70-71 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 6 |
| 72-73 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 5 |
| 74-75 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 3 |
| 76-77 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 2 |
| 78-79 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 32 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 11) (ô=159)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Mảng hành động đã gửi server: `[4, 3, 3, 2, 2, 2, 2, 3, 5, 5, 0, 5, 4, 5, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 2, 2, 3, 3, 2, 3, 2, 1, 1, 1, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 25 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 24 |
| 4-5 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 23 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 32 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 31 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 29 |
| 12-14 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 27 |
| 15-16 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 26 |
| 17-18 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 25 |
| 19-20 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 24 |
| 21-22 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 23 |
| 23-24 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 21 |
| 25-26 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 20 |
| 27-28 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 15)) | 19 |
| 29-30 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 18 |
| 31-32 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 17 |
| 33-35 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 15 |
| 36-37 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 14 |
| 38-39 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 13 |
| 40-41 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 11 |
| 42-43 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 9 |
| 44-45 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 8 |
| 46-47 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 32 |
| 48-49 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 31 |
| 50-51 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 30 |
| 52-53 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 29 |
| 54-55 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 28 |
| 56-57 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 27 |
| 58 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 25 |
| 59 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 23 |
| 60-61 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 22 |
| 62-63 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 21 |
| 64-65 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(11, 5)) | 20 |
| 66-67 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 19 |
| 68-69 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 18 |
| 70 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 16 |
| 71 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 14 |
| 72-79 | Chờ 8 bước (`-8`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 14 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (9, 14) (ô=205)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(5, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(5, 6))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 0, 5, 5, 2, 1, 2, 1, 1, 1, 0, 1, 1, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 32 |
| 2-4 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 5-6 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 32 |
| 7-8 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 32 |
| 9-10 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 32 |
| 11-12 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 32 |
| 13-14 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 32 |
| 15-16 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 32 |
| 17-18 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 32 |
| 19-20 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 32 |
| 21-22 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 32 |
| 23-24 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 32 |
| 25-26 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 32 |
| 27-28 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 32 |
| 29-30 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 32 |
| 31-32 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 32 |
| 33-34 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 32 |
| 35-36 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 32 |
| 37-79 | Chờ 43 bước (`-43`) | (5, 6) | (5, 6) | Dự kiến đứng yên tại (5, 6); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 32 |

