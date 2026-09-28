# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 62
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 19 | #2 | #4 | (2, 9) | 32 | 65 |
| 29 | #3 | #4 | (2, 9) | 17 | 65 |
| 30 | #1 | #4 | (2, 9) | 40 | 65 |
| 45 | #3 | #4 | (2, 9) | 51 | 65 |
| 46 | #1 | #4 | (2, 9) | 51 | 65 |
| 55 | #0 | #4 | (2, 9) | 7 | 65 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 8) (ô=142)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(4, 13))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(4, 13))
- Mảng hành động đã gửi server: `[0, 5, 5, 4, 5, 4, 1, 1, 1, 1, 1, 1, 1, 1, 5, 5, 5, 5, 5, 5, 4, 4, 4, 5, 5, 4, 5, 5, 5, 4, 4, 3, 4, 2, 2, 3, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 56 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 55 |
| 4 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 53 |
| 5 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 51 |
| 6 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 49 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 48 |
| 9-10 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 47 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 46 |
| 13-14 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 45 |
| 15 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 43 |
| 16 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 41 |
| 17-18 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 40 |
| 19-20 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 39 |
| 21-22 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 1)) | 38 |
| 23-24 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 37 |
| 25 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 35 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 33 |
| 27 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 31 |
| 28-29 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 30 |
| 30 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 28 |
| 31-32 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 27 |
| 33-34 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 26 |
| 35-36 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 25 |
| 37-38 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 24 |
| 39-40 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 23 |
| 41 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 21 |
| 42 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 19 |
| 43 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 17 |
| 44-45 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 16 |
| 46-47 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 15 |
| 48-49 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 14 |
| 50 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 12 |
| 51 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 10 |
| 52-53 | Di chuyển hướng 2 (`2`) | (0, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 9 |
| 54 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 65 |
| 55 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 63 |
| 56-57 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 62 |
| 58-59 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 61 |
| 60-61 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 60 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 7) (ô=123)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 11)
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 0, 5, 5, 4, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 0, 1, 1, 3, 3, 4, 3, 3, 3, 3, 3, 2, 1, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 63 |
| 2 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 61 |
| 3 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 59 |
| 4-5 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 58 |
| 6-7 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 57 |
| 8-9 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 56 |
| 10 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 54 |
| 11 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 52 |
| 12 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 50 |
| 13-14 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 49 |
| 15-16 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 48 |
| 17-18 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 47 |
| 19-20 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 46 |
| 21-22 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 45 |
| 23-24 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 44 |
| 25-26 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 43 |
| 27-28 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 42 |
| 29 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 65 |
| 30 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 63 |
| 31 | Di chuyển hướng 5 (`5`) | (1, 9) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 61 |
| 32-33 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 60 |
| 34 | Di chuyển hướng 0 (`0`) | (0, 8) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 58 |
| 35 | Di chuyển hướng 1 (`1`) | (0, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 56 |
| 36-37 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 55 |
| 38-39 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 54 |
| 40-41 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 7)) | 53 |
| 42-43 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 52 |
| 44-45 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 65 |
| 46 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 63 |
| 47-48 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 62 |
| 49-50 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 61 |
| 51-52 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 60 |
| 53-54 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 59 |
| 55-56 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 58 |
| 57 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 56 |
| 58-59 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 55 |
| 60 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 53 |
| 61 | Chờ 1 bước (`-1`) | (8, 11) | (8, 11) | Dự kiến đứng yên tại (8, 11); hướng tới tọa độ (8, 11) | 53 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 7) (ô=114)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(14, 8))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(14, 8))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 3, 0, 0, 0, 0, 5, 5, 1, 0, 1, 1, 2, 2, 2, 3, 3, 3, 2, 3, 2, 2, 2, 1, 1, 2, 2, 2, 3, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 42 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 41 |
| 4 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 39 |
| 5-6 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 38 |
| 7-8 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 37 |
| 9-10 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 36 |
| 11-12 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 35 |
| 13-14 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 34 |
| 15-16 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 33 |
| 17-18 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 65 |
| 19 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 63 |
| 20 | Di chuyển hướng 5 (`5`) | (1, 9) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 61 |
| 21-22 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 60 |
| 23 | Di chuyển hướng 0 (`0`) | (0, 8) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 58 |
| 24 | Di chuyển hướng 1 (`1`) | (0, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 56 |
| 25-26 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 55 |
| 27-28 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 54 |
| 29-30 | Di chuyển hướng 2 (`2`) | (2, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 53 |
| 31 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 51 |
| 32 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 49 |
| 33-34 | Di chuyển hướng 3 (`3`) | (4, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 48 |
| 35-36 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 47 |
| 37-38 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 46 |
| 39 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 44 |
| 40-41 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 43 |
| 42-43 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 42 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 41 |
| 46-47 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 40 |
| 48-49 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 39 |
| 50-51 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 38 |
| 52 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 36 |
| 53 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 34 |
| 54-55 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 33 |
| 56-61 | Chờ 6 bước (`-6`) | (14, 8) | (14, 8) | Dự kiến đứng yên tại (14, 8); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(14, 8)) | 33 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 3) (ô=57)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 10)
- Mảng hành động đã gửi server: `[3, 4, 3, 4, 4, 4, 2, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 1, 0, 1, 1, 3, 3, 4, 3, 3, 3, 3, 3, 2, 1, 2, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 36 |
| 4 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 34 |
| 5 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 32 |
| 6-8 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 30 |
| 9 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 28 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 27 |
| 12-13 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(10, 9)) | 26 |
| 14-15 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 25 |
| 16-17 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 9)) | 24 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 23 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 22 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 21 |
| 24-25 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 20 |
| 26-27 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 19 |
| 28 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 65 |
| 29 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 63 |
| 30 | Di chuyển hướng 5 (`5`) | (1, 9) | (0, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(0, 9)) | 61 |
| 31-32 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 60 |
| 33 | Di chuyển hướng 0 (`0`) | (0, 8) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 58 |
| 34 | Di chuyển hướng 1 (`1`) | (0, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 56 |
| 35-36 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 5)) | 55 |
| 37-38 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 54 |
| 39-40 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(2, 7)) | 53 |
| 41-42 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 52 |
| 43-44 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 65 |
| 45 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 63 |
| 46-47 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 62 |
| 48-49 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 61 |
| 50-51 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 60 |
| 52-53 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 59 |
| 54-55 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 58 |
| 56 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 56 |
| 57-58 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 55 |
| 59 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 53 |
| 60-61 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 52 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (10, 8) (ô=138)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 9)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 4, 5, 5, -47]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 65 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 65 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 65 |
| 5-7 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 65 |
| 8 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 65 |
| 9-10 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 65 |
| 11 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 65 |
| 12-13 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 65 |
| 14 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 65 |
| 15-61 | Chờ 47 bước (`-47`) | (2, 9) | (2, 9) | Dự kiến đứng yên tại (2, 9); hướng tới tọa độ (2, 9) | 65 |

