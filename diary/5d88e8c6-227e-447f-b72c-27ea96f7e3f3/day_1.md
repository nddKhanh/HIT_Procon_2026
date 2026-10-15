# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 53
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 1 | #2 | #4 | (13, 13) | 64 | 67 |
| 20 | #3 | #4 | (10, 8) | 35 | 67 |
| 27 | #2 | #4 | (10, 8) | 46 | 67 |
| 31 | #0 | #4 | (10, 8) | 37 | 67 |
| 51 | #1 | #4 | (10, 8) | 27 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 0) (ô=5)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 13)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 4, 4, 4, 3, 4, 4, 5, 5, 5, 4, 4, 4, 2, 3, 2, 2, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 56 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 55 |
| 4-5 | Di chuyển hướng 2 (`2`) | (7, 0) | (8, 0) | Dự kiến đến điểm hẹn tọa độ (8, 0) | 54 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 53 |
| 8 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 51 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 50 |
| 11 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 48 |
| 12-13 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 47 |
| 14-15 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 46 |
| 16-17 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 45 |
| 18-19 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 44 |
| 20-21 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 43 |
| 22-23 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 42 |
| 24-25 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 41 |
| 26-27 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 40 |
| 28-29 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 39 |
| 30 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 67 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 66 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 65 |
| 35-36 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 64 |
| 37-38 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 63 |
| 39-40 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 62 |
| 41-42 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 61 |
| 43-44 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 60 |
| 45 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 58 |
| 46-47 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 57 |
| 48-49 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 56 |
| 50 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 12)) | 54 |
| 51-52 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 53 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 11) (ô=195)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 7)
- Mảng hành động đã gửi server: `[1, 1, 1, 5, 4, 4, 4, 2, 3, 2, 2, 2, 2, 3, 3, 1, 1, 1, 1, 0, 0, 0, 0, 5, 4, 4, 5, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 60 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 59 |
| 4-6 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 57 |
| 7-8 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 56 |
| 9-10 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 55 |
| 11-12 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 54 |
| 13-14 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 53 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 52 |
| 17-18 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 51 |
| 19 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 49 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 48 |
| 22-23 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 47 |
| 24 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 12)) | 45 |
| 25-26 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 44 |
| 27-28 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 14)) | 43 |
| 29-30 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 42 |
| 31-33 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 40 |
| 34 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 38 |
| 35-36 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 10)) | 37 |
| 37-38 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 36 |
| 39-40 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 35 |
| 41-42 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 34 |
| 43-44 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 33 |
| 45 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 31 |
| 46-47 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 30 |
| 48-49 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 29 |
| 50 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 67 |
| 51-52 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 66 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 13) (ô=233)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 5)
- Mảng hành động đã gửi server: `[2, 3, 1, 1, 1, 1, 4, 5, 5, 4, 5, 0, 0, 0, 0, 2, 5, 5, 4, 4, 4, 1, 1, 1, 1, 1, 1, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 67 |
| 1-2 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 14)) | 66 |
| 3-4 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 65 |
| 5-7 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 63 |
| 8 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 61 |
| 9-10 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 10)) | 60 |
| 11-12 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 59 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 58 |
| 15 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 56 |
| 16-17 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 12)) | 55 |
| 18-19 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 54 |
| 20 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 52 |
| 21 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 50 |
| 22 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 48 |
| 23-24 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 47 |
| 25-26 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 67 |
| 27-28 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 66 |
| 29-30 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 65 |
| 31-32 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 64 |
| 33-34 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 63 |
| 35-36 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 62 |
| 37-38 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 61 |
| 39-40 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 60 |
| 41-42 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 59 |
| 43-44 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 58 |
| 45-46 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 57 |
| 47-48 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 56 |
| 49 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 54 |
| 50-51 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 53 |
| 52 | Chờ 1 bước (`-1`) | (12, 5) | (12, 5) | Dự kiến đứng yên tại (12, 5); hướng tới tọa độ (12, 5) | 53 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 6) (ô=114)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=0, tọa độ=(14, 1))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=0, tọa độ=(14, 1))
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 3, 0, 0, 5, 5, 5, 5, 5, 5, 4, 4, 4, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 47 |
| 2 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 45 |
| 3-4 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 44 |
| 5-6 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 43 |
| 7-8 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 10)) | 42 |
| 9-10 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 41 |
| 11-12 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 40 |
| 13-14 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 39 |
| 15-16 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 38 |
| 17-18 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 37 |
| 19 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 67 |
| 20-21 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(9, 8)) | 66 |
| 22-23 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 65 |
| 24-25 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 64 |
| 26-27 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 63 |
| 28-29 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 11)) | 62 |
| 30-31 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 10)) | 61 |
| 32-33 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 60 |
| 34-35 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 59 |
| 36-37 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 58 |
| 38-39 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 57 |
| 40-41 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 56 |
| 42 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 54 |
| 43-44 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 53 |
| 45-46 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 52 |
| 47-48 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 51 |
| 49-50 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 50 |
| 51-52 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(14, 1)) | 49 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (13, 13) (ô=234)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(10, 8))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(10, 8))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 1, 1, 1, 1, 0, 4, 4, 4, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 67 |
| 2 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 67 |
| 3 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 67 |
| 4 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 67 |
| 5 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 67 |
| 6 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 67 |
| 7 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 67 |
| 8-9 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(12, 6)) | 67 |
| 10-11 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 67 |
| 12-13 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 67 |
| 14-15 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 67 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 67 |
| 18-52 | Chờ 35 bước (`-35`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(10, 8)) | 67 |

