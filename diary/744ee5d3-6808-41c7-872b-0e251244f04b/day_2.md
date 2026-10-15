# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 75
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 13 | #2 | #4 | (7, 14) | 60 | 67 |
| 14 | #2 | #4 | (6, 14) | 65 | 67 |
| 16 | #2 | #4 | (6, 13) | 66 | 67 |
| 22 | #3 | #4 | (5, 10) | 2 | 67 |
| 39 | #1 | #4 | (7, 4) | 41 | 67 |
| 63 | #0 | #4 | (7, 4) | 20 | 67 |
| 64 | #1 | #4 | (7, 4) | 50 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 12) (ô=192)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(13, 3))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(13, 3))
- Mảng hành động đã gửi server: `[1, 1, 4, 4, 3, 3, 3, 5, 5, 4, 5, 0, 5, 5, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 2, 1, 3, 3, 4, 3, 2, 2, 2, 2, 2, 2, 1, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 66 |
| 2-3 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 65 |
| 4-5 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 64 |
| 6-7 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 63 |
| 8-9 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 62 |
| 10 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 60 |
| 11 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 58 |
| 12-13 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 57 |
| 14-15 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 56 |
| 16 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 17-18 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 53 |
| 19-20 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 52 |
| 21 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 50 |
| 22-23 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 49 |
| 24-25 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 48 |
| 26 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 46 |
| 27-28 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 45 |
| 29-30 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 44 |
| 31-33 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 42 |
| 34-35 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 41 |
| 36-37 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 40 |
| 38 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 38 |
| 39 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 36 |
| 40 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 34 |
| 41-42 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 33 |
| 43 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 31 |
| 44-45 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 3)) | 30 |
| 46-47 | Di chuyển hướng 1 (`1`) | (3, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 29 |
| 48-49 | Di chuyển hướng 1 (`1`) | (3, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 28 |
| 50-51 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 27 |
| 52-53 | Di chuyển hướng 1 (`1`) | (5, 1) | (5, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 0)) | 26 |
| 54-55 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 25 |
| 56-57 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 24 |
| 58 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 22 |
| 59-60 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 21 |
| 61-62 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 67 |
| 63 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 65 |
| 64-65 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 64 |
| 66-67 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 63 |
| 68-69 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 62 |
| 70 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 60 |
| 71 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 58 |
| 72-74 | Chờ 3 bước (`-3`) | (13, 3) | (13, 3) | Dự kiến đứng yên tại (13, 3); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 58 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 10) (ô=163)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 3)
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 4, 4, 5, 5, 5, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 5, 0, 1, 0, 0, 4, 4, 5, 4, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 1, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 65 |
| 2-3 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 64 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 63 |
| 6-7 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 62 |
| 8-9 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 61 |
| 10-11 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 60 |
| 12-13 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 59 |
| 14-16 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 57 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 55 |
| 18-19 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 54 |
| 20-21 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 53 |
| 22-24 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 25-26 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 50 |
| 27-28 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 49 |
| 29 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 47 |
| 30 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 45 |
| 31-32 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 44 |
| 33-34 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 43 |
| 35-36 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 42 |
| 37-38 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 67 |
| 39 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 65 |
| 40-41 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 64 |
| 42-43 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 63 |
| 44 | Di chuyển hướng 0 (`0`) | (6, 2) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 61 |
| 45-46 | Di chuyển hướng 0 (`0`) | (6, 1) | (5, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 0)) | 60 |
| 47-48 | Di chuyển hướng 4 (`4`) | (5, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 59 |
| 49-50 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 58 |
| 51-52 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 57 |
| 53-54 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 3)) | 56 |
| 55-56 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 55 |
| 57-58 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 54 |
| 59 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 52 |
| 60-61 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 51 |
| 62-63 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 67 |
| 64 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 65 |
| 65-66 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 64 |
| 67-68 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 63 |
| 69-70 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 62 |
| 71 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 60 |
| 72 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 58 |
| 73-74 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 57 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 12) (ô=192)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=1, tọa độ=(2, 13))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=1, tọa độ=(2, 13))
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 5, 4, 5, 0, 3, 2, 3, 2, 2, 3, 2, 1, 2, 2, 3, 0, 0, 0, 0, 1, 1, 4, 4, 5, 5, 4, 4, 5, 5, 5, 0, 5, 5, 5, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 66 |
| 2-3 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 65 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 64 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 63 |
| 8-9 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 62 |
| 10-12 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 67 |
| 13 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 67 |
| 14-15 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 67 |
| 16-17 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 66 |
| 18-19 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 65 |
| 20 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 63 |
| 21-22 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 62 |
| 23-24 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 61 |
| 25 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 59 |
| 26-27 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 58 |
| 28-29 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 57 |
| 30 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 55 |
| 31-32 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 54 |
| 33-34 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(14, 16)) | 53 |
| 35-36 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 52 |
| 37-38 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 51 |
| 39 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 49 |
| 40 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 47 |
| 41-42 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 46 |
| 43-44 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 45 |
| 45-46 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 44 |
| 47-48 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 43 |
| 49-50 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 42 |
| 51-52 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 41 |
| 53-54 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 40 |
| 55-56 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 39 |
| 57-58 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 38 |
| 59-61 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 36 |
| 62 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 34 |
| 63-64 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 33 |
| 65-66 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 32 |
| 67-68 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 31 |
| 69-70 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 30 |
| 71-72 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 13)) | 29 |
| 73-74 | Chờ 2 bước (`-2`) | (2, 13) | (2, 13) | Dự kiến đứng yên tại (2, 13); mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 13)) | 29 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 10) (ô=155)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=1, tọa độ=(2, 13))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=1, tọa độ=(2, 13))
- Mảng hành động đã gửi server: `[-23, 3, 3, 4, 3, 2, 3, 2, 2, 3, 2, 1, 2, 2, 3, 0, 5, 5, 5, 5, 5, 5, 0, 5, 0, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-22 | Chờ 23 bước (`-23`) | (5, 10) | (5, 10) | Dự kiến đứng yên tại (5, 10); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 10)) | 67 |
| 23-24 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 66 |
| 25-26 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 65 |
| 27-28 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 64 |
| 29-30 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 63 |
| 31-32 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 62 |
| 33 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 60 |
| 34-35 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 59 |
| 36-37 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 58 |
| 38 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 56 |
| 39-40 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 55 |
| 41-42 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 54 |
| 43 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 52 |
| 44-45 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 51 |
| 46-47 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(14, 16)) | 50 |
| 48-49 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 49 |
| 50-51 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 48 |
| 52-53 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 47 |
| 54 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 45 |
| 55-57 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 58 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 41 |
| 59-60 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 40 |
| 61-62 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 39 |
| 63 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 37 |
| 64-65 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 36 |
| 66-67 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 35 |
| 68-69 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 34 |
| 70-71 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 33 |
| 72-73 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 13)) | 32 |
| 74 | Chờ 1 bước (`-1`) | (2, 13) | (2, 13) | Dự kiến đứng yên tại (2, 13); mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 13)) | 32 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (12, 12) (ô=192)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 4)
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 5, 5, 5, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 2, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 67 |
| 2-3 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 67 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 67 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 67 |
| 8-9 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 67 |
| 10-12 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 67 |
| 13 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 67 |
| 14-15 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 67 |
| 16-17 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 67 |
| 18-19 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 67 |
| 20-21 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 10)) | 67 |
| 22-23 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 67 |
| 24-26 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 67 |
| 27 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 67 |
| 28-29 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 67 |
| 30-31 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 67 |
| 32-33 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 67 |
| 34-35 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 67 |
| 36-74 | Chờ 39 bước (`-39`) | (7, 4) | (7, 4) | Dự kiến đứng yên tại (7, 4); hướng tới tọa độ (7, 4) | 67 |

