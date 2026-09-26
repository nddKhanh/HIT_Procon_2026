# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 75
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 22 | #1 | #3 | (13, 10) | 51 | 67 |
| 46 | #0 | #3 | (13, 10) | 29 | 67 |
| 55 | #2 | #3 | (13, 10) | 1 | 67 |
| 63 | #0 | #3 | (14, 14) | 63 | 67 |
| 65 | #0 | #3 | (14, 13) | 66 | 67 |
| 73 | #1 | #3 | (13, 9) | 66 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 13) (ô=235)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 13)
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 5, 0, 0, 0, 0, 3, 3, 3, 2, 2, 0, 1, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, -9, 0, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 61 |
| 2 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 59 |
| 3-5 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 57 |
| 6-7 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 56 |
| 8-9 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 55 |
| 10-11 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 54 |
| 12-13 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 53 |
| 14-15 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 52 |
| 16 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 50 |
| 17 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 5)) | 48 |
| 18-19 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 47 |
| 20 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 45 |
| 21 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 43 |
| 22-23 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 42 |
| 24-25 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 8)) | 41 |
| 26-27 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 40 |
| 28-29 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 39 |
| 30-31 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 38 |
| 32-33 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 37 |
| 34-35 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 36 |
| 36-37 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 35 |
| 38-39 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 34 |
| 40-42 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 32 |
| 43 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 30 |
| 44-45 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 46-47 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 66 |
| 48-49 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 65 |
| 50-51 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 64 |
| 52-53 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 14)) | 63 |
| 54-62 | Chờ 9 bước (`-9`) | (14, 14) | (14, 14) | Dự kiến đứng yên tại (14, 14); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 14)) | 67 |
| 63-64 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 67 |
| 65-74 | Chờ 10 bước (`-10`) | (14, 13) | (14, 13) | Dự kiến đứng yên tại (14, 13); hướng tới tọa độ (14, 13) | 67 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 9) (ô=166)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 8)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, -1, 0, -48, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 65 |
| 2 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 63 |
| 3-5 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 61 |
| 6-7 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 60 |
| 8-9 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 59 |
| 10-11 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 58 |
| 12-13 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 57 |
| 14-15 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 56 |
| 16-18 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 54 |
| 19 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 52 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 22 | Chờ 1 bước (`-1`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 23-24 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 66 |
| 25-72 | Chờ 48 bước (`-48`) | (13, 9) | (13, 9) | Dự kiến đứng yên tại (13, 9); hướng tới tọa độ (13, 9) | 67 |
| 73-74 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 66 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 1) (ô=17)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=0, tọa độ=(13, 10))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=0, tọa độ=(13, 10))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 3, 4, 3, 3, 3, 4, 3, 0, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 1, 3, 3, 4, 3, 2, 3, 3, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 41 |
| 2-3 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 40 |
| 4-5 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 39 |
| 6-7 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 38 |
| 8 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(1, 6)) | 36 |
| 9-10 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 35 |
| 11 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 33 |
| 12 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 31 |
| 13 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 29 |
| 14 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 27 |
| 15-16 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 26 |
| 17-18 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 13)) | 25 |
| 19-20 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 24 |
| 21-22 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 23 |
| 23-24 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 22 |
| 25-26 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 21 |
| 27 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 19 |
| 28 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 17 |
| 29 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 15 |
| 30-31 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 14 |
| 32-33 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 13 |
| 34-35 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 5)) | 12 |
| 36-37 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 11 |
| 38-39 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 10 |
| 40-41 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 4)) | 9 |
| 42-43 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 8 |
| 44-45 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 7 |
| 46-47 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 6 |
| 48-49 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 8)) | 5 |
| 50-51 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 4 |
| 52 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 2 |
| 53-54 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 55-74 | Chờ 20 bước (`-20`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (13, 10) (ô=183)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 9)
- Mảng hành động đã gửi server: `[-55, 3, 3, 4, 3, 0, 1, 0, 0, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 55-56 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 67 |
| 57-58 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 67 |
| 59-60 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 67 |
| 61-62 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 14)) | 67 |
| 63-64 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 67 |
| 65-66 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 67 |
| 67-68 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 67 |
| 69-70 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(13, 10)) | 67 |
| 71-72 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 67 |
| 73-74 | Chờ 2 bước (`-2`) | (13, 9) | (13, 9) | Dự kiến đứng yên tại (13, 9); hướng tới tọa độ (13, 9) | 67 |

