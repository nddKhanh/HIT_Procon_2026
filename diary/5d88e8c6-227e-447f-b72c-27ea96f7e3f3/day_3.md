# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 96
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #3 | #4 | (7, 11) | 44 | 67 |
| 23 | #0 | #4 | (7, 11) | 29 | 67 |
| 38 | #1 | #4 | (7, 11) | 26 | 67 |
| 47 | #2 | #4 | (7, 11) | 33 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 0) (ô=5)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 0)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 3, 3, 5, 4, 4, 4, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1, 0, -46]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 43 |
| 2-3 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 42 |
| 4-6 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 40 |
| 7-8 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 39 |
| 9 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 37 |
| 10-11 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 36 |
| 12 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 34 |
| 13-14 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 33 |
| 15-16 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 32 |
| 17-18 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 31 |
| 19-20 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 30 |
| 21-22 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 66 |
| 25-26 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 65 |
| 27-28 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 64 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 63 |
| 31-32 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 62 |
| 33-34 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 61 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 60 |
| 37-38 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 59 |
| 39-40 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 58 |
| 41-42 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 57 |
| 43-44 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 56 |
| 45-46 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 55 |
| 47 | Chờ 1 bước (`-1`) | (14, 1) | (14, 1) | Dự kiến đứng yên tại (14, 1); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 55 |
| 48-49 | Di chuyển hướng 0 (`0`) | (14, 1) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 54 |
| 50-95 | Chờ 46 bước (`-46`) | (13, 0) | (13, 0) | Dự kiến đứng yên tại (13, 0); hướng tới tọa độ (13, 0) | 54 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 1) (ô=31)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(13, 14))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(13, 14))
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 4, 3, 3, 3, 3, 0, 0, 0, 0, 5, 4, 4, 5, 5, 5, 4, 4, 4, 2, 3, 2, 2, 2, 2, 3, 3, -44]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (14, 1) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 53 |
| 2-3 | Di chuyển hướng 3 (`3`) | (14, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 52 |
| 4 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 50 |
| 5 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 48 |
| 6 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 46 |
| 7 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 44 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 43 |
| 10-11 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 42 |
| 12-13 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 10)) | 41 |
| 14-15 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 40 |
| 16-17 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 39 |
| 18-19 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 38 |
| 20-21 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 37 |
| 22 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 35 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 34 |
| 25-26 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 33 |
| 27 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 31 |
| 28-29 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 30 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 29 |
| 32-33 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 28 |
| 34-35 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 27 |
| 36-37 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |
| 38-39 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 66 |
| 40-41 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 65 |
| 42 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 63 |
| 43-44 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 62 |
| 45-46 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 61 |
| 47 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 12)) | 59 |
| 48-49 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 58 |
| 50-51 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 14)) | 57 |
| 52-95 | Chờ 44 bước (`-44`) | (13, 14) | (13, 14) | Dự kiến đứng yên tại (13, 14); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 14)) | 57 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 10) (ô=176)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=0, tọa độ=(14, 1))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=0, tọa độ=(14, 1))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 3, 2, 3, 3, 1, 1, 1, 1, 0, 0, 0, 0, 5, 4, 4, 5, 5, 5, 4, 4, 4, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 65 |
| 2-3 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 64 |
| 4-5 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 63 |
| 6-7 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 62 |
| 8 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 60 |
| 9 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 58 |
| 10 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 12)) | 56 |
| 11-12 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 55 |
| 13-14 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 14)) | 54 |
| 15-16 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 53 |
| 17-19 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 20 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 49 |
| 21-22 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 10)) | 48 |
| 23-24 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 47 |
| 25-26 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 46 |
| 27-28 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 45 |
| 29-30 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 44 |
| 31 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 42 |
| 32-33 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 41 |
| 34-35 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 40 |
| 36 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 38 |
| 37-38 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 37 |
| 39-40 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 36 |
| 41-42 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 35 |
| 43-44 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 34 |
| 45-46 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |
| 47-48 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 66 |
| 49-50 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 65 |
| 51-52 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 64 |
| 53-54 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 63 |
| 55-56 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 62 |
| 57-58 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 61 |
| 59 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 59 |
| 60-61 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 58 |
| 62-63 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 57 |
| 64-65 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 56 |
| 66-67 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 55 |
| 68-69 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 54 |
| 70-95 | Chờ 26 bước (`-26`) | (14, 1) | (14, 1) | Dự kiến đứng yên tại (14, 1); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 54 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 14) (ô=251)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=0, tọa độ=(14, 1))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=0, tọa độ=(14, 1))
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 5, 5, 5, 0, 1, 1, 1, 2, 2, 2, 1, 1, 3, 3, 3, 2, 3, 0, 0, 0, 0, 1, 1, 1, 0, 0, -44]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 53 |
| 2-3 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 12)) | 52 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 51 |
| 6 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 49 |
| 7-8 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 48 |
| 9-10 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 47 |
| 11 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 45 |
| 12-13 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 66 |
| 16-17 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 65 |
| 18-19 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 64 |
| 20-21 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 63 |
| 22-23 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 62 |
| 24-25 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 61 |
| 26 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 59 |
| 27-28 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 58 |
| 29-30 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 57 |
| 31 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 55 |
| 32-33 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 54 |
| 34-35 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 53 |
| 36-37 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 10)) | 52 |
| 38-39 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 51 |
| 40-41 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 50 |
| 42-43 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 49 |
| 44-45 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 48 |
| 46 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 46 |
| 47 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 44 |
| 48 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 42 |
| 49 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 40 |
| 50-51 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 39 |
| 52-95 | Chờ 44 bước (`-44`) | (14, 1) | (14, 1) | Dự kiến đứng yên tại (14, 1); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 39 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (7, 11) (ô=194)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(7, 11))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(7, 11))
- Mảng hành động đã gửi server: `[-96]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-95 | Chờ 96 bước (`-96`) | (7, 11) | (7, 11) | Dự kiến đứng yên tại (7, 11); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 67 |

