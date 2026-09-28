# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 93
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 13 | #3 | #4 | (10, 8) | 24 | 65 |
| 17 | #0 | #4 | (10, 8) | 31 | 65 |
| 18 | #1 | #4 | (10, 8) | 38 | 65 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 1) (ô=30)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(14, 8))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(14, 8))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 4, 3, 4, 3, 3, 3, 4, 5, 5, 5, 0, 5, 5, 5, 0, 5, 0, 0, 4, 4, 3, 4, 3, 3, 3, 2, 3, 2, 2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 46 |
| 2 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 44 |
| 3 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 42 |
| 4 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 40 |
| 5-6 | Di chuyển hướng 4 (`4`) | (10, 1) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 39 |
| 7-8 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(9, 3)) | 38 |
| 9-10 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 11-12 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 36 |
| 13 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 34 |
| 14 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 32 |
| 15-16 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 65 |
| 17-18 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 64 |
| 19-20 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 63 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 62 |
| 23-24 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 61 |
| 25-26 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 60 |
| 27 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 58 |
| 28-29 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 57 |
| 30 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 55 |
| 31-32 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 54 |
| 33-34 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 7)) | 53 |
| 35-36 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 52 |
| 37-38 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 51 |
| 39-40 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 50 |
| 41-42 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 49 |
| 43 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 47 |
| 44 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 45 |
| 45-46 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 44 |
| 47-48 | Di chuyển hướng 3 (`3`) | (0, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 43 |
| 49-51 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 41 |
| 52 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 39 |
| 53 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 37 |
| 54 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 35 |
| 55-56 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 34 |
| 57-58 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 33 |
| 59 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 31 |
| 60-61 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 30 |
| 62 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 28 |
| 63 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 26 |
| 64-65 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 25 |
| 66 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 23 |
| 67 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 21 |
| 68 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 19 |
| 69 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 17 |
| 70-71 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 16 |
| 72-73 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 15 |
| 74-92 | Chờ 19 bước (`-19`) | (14, 8) | (14, 8) | Dự kiến đứng yên tại (14, 8); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 15 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 1) (ô=30)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(4, 13))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(4, 13))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 4, 4, 3, 0, 5, 5, 4, 5, 4, 5, 5, 5, 0, 5, 5, 5, 0, 0, 0, 5, 4, 4, 3, 4, 3, 3, 3, 2, 3, 2, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (14, 1) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 55 |
| 2 | Di chuyển hướng 3 (`3`) | (14, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 53 |
| 3-4 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 52 |
| 5 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 50 |
| 6-7 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 49 |
| 8 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 47 |
| 9-10 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 46 |
| 11-12 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 45 |
| 13-14 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 44 |
| 15 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 42 |
| 16 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 40 |
| 17 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 65 |
| 18-19 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 64 |
| 20-21 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 63 |
| 22-23 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 62 |
| 24-25 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 61 |
| 26-27 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 60 |
| 28 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 58 |
| 29-30 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 57 |
| 31 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 55 |
| 32-33 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 54 |
| 34-35 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 53 |
| 36 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 51 |
| 37-38 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 50 |
| 39-40 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 49 |
| 41-42 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 48 |
| 43 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 46 |
| 44 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 44 |
| 45-46 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 43 |
| 47-48 | Di chuyển hướng 3 (`3`) | (0, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 42 |
| 49-51 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 40 |
| 52 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 38 |
| 53 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 36 |
| 54 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 34 |
| 55-92 | Chờ 38 bước (`-38`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 34 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 13) (ô=212)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(10, 9))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(10, 9))
- Mảng hành động đã gửi server: `[2, 5, 5, 0, 5, 0, 0, 0, 1, 0, 1, 1, 2, 2, 2, 3, 3, 3, 2, 3, 2, 2, 2, -54]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 33 |
| 2-3 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 32 |
| 4-5 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 31 |
| 6 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 29 |
| 7 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 27 |
| 8 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 25 |
| 9-11 | Di chuyển hướng 0 (`0`) | (1, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 23 |
| 12-13 | Di chuyển hướng 0 (`0`) | (0, 10) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 22 |
| 14-15 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 21 |
| 16 | Di chuyển hướng 0 (`0`) | (0, 8) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 19 |
| 17 | Di chuyển hướng 1 (`1`) | (0, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 17 |
| 18-19 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 16 |
| 20-21 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 15 |
| 22-23 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 14 |
| 24 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 12 |
| 25 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 10 |
| 26-27 | Di chuyển hướng 3 (`3`) | (4, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 9 |
| 28-29 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 8 |
| 30-31 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 7 |
| 32 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 5 |
| 33-34 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 4 |
| 35-36 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 3 |
| 37-38 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 2 |
| 39-92 | Chờ 54 bước (`-54`) | (10, 9) | (10, 9) | Dự kiến đứng yên tại (10, 9); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 2 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 13) (ô=213)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(4, 13))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(4, 13))
- Mảng hành động đã gửi server: `[1, 2, 2, 1, 1, 2, 1, 1, 2, 1, 2, 2, 3, 0, 1, 1, 1, 0, 0, 0, -1, 5, 5, 5, 5, 5, 5, 4, 4, 4, 5, 5, 4, 5, 5, 5, 4, 4, 3, 4, 3, 3, 3, 2, 3, 2, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 34 |
| 2 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 32 |
| 3-4 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 31 |
| 5 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 29 |
| 6-7 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 28 |
| 8 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 26 |
| 9-10 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 25 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 65 |
| 13-14 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 64 |
| 15 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 62 |
| 16 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 60 |
| 17 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 58 |
| 18-19 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 57 |
| 20-21 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 56 |
| 22-23 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 55 |
| 24 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 53 |
| 25-26 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 52 |
| 27 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 50 |
| 28-29 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 49 |
| 30 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 1)) | 47 |
| 31 | Chờ 1 bước (`-1`) | (14, 1) | (14, 1) | Dự kiến đứng yên tại (14, 1); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 1)) | 47 |
| 32-33 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 46 |
| 34 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 44 |
| 35 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 42 |
| 36 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 40 |
| 37-38 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 39 |
| 39 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 37 |
| 40-41 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 36 |
| 42-43 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 35 |
| 44-45 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 34 |
| 46-47 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 33 |
| 48-49 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 32 |
| 50 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 30 |
| 51 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 28 |
| 52 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 26 |
| 53-54 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 25 |
| 55-56 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 24 |
| 57-58 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 23 |
| 59 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 21 |
| 60 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 19 |
| 61-62 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 18 |
| 63-64 | Di chuyển hướng 3 (`3`) | (0, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 17 |
| 65-67 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 15 |
| 68 | Di chuyển hướng 2 (`2`) | (1, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 13 |
| 69 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 11 |
| 70 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 9 |
| 71-92 | Chờ 22 bước (`-22`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 9 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (10, 8) (ô=138)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 8)
- Mảng hành động đã gửi server: `[-93]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-92 | Chờ 93 bước (`-93`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); hướng tới tọa độ (10, 8) | 65 |

