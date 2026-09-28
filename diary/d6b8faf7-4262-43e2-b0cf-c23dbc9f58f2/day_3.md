# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 53
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 10 | #1 | #4 | (6, 8) | 0 | 62 |
| 18 | #2 | #4 | (5, 12) | 14 | 62 |
| 37 | #1 | #4 | (5, 12) | 31 | 62 |
| 47 | #0 | #4 | (5, 12) | 0 | 62 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 3) (ô=58)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(5, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(5, 12))
- Mảng hành động đã gửi server: `[2, 2, 3, 1, 2, 3, 3, 4, 4, 3, 2, 3, 3, 4, 3, 3, 4, 4, 4, 5, 4, 0, 1, 0, 0, 0, 0, 5, 5, 5, 4, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 46 |
| 1-2 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 45 |
| 3-4 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(9, 4)) | 44 |
| 5-6 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 43 |
| 7 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 41 |
| 8-9 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 40 |
| 10-11 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 39 |
| 12 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 37 |
| 13 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 35 |
| 14-15 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 34 |
| 16-17 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 33 |
| 18 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 31 |
| 19 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 29 |
| 20 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 27 |
| 21 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 25 |
| 22 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 23 |
| 23-24 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 22 |
| 25 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 20 |
| 26 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 18 |
| 27 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 16 |
| 28 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 14 |
| 29-30 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 13 |
| 31 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 11 |
| 32-33 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 10 |
| 34-35 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 9 |
| 36 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 7 |
| 37-39 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 5 |
| 40-41 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 4 |
| 42-43 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 3 |
| 44-45 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 2 |
| 46 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 62 |
| 47-52 | Chờ 6 bước (`-6`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 62 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (6, 3) (ô=57)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=2, tọa độ=(10, 14))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=2, tọa độ=(10, 14))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 4, -1, 2, 2, 1, 2, 2, 1, 0, 1, 0, 4, 4, 4, 4, 4, 4, 4, 5, 4, 4, 3, 3, 4, 3, 2, 2, 2, 2, 3, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 4 |
| 2-3 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 3 |
| 4-5 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 2 |
| 6-7 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 1 |
| 8-9 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 62 |
| 10 | Chờ 1 bước (`-1`) | (6, 8) | (6, 8) | Dự kiến đứng yên tại (6, 8); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 62 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 61 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 60 |
| 15 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 58 |
| 16 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 56 |
| 17 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 54 |
| 18-19 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 53 |
| 20 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 51 |
| 21 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 49 |
| 22-23 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 48 |
| 24-25 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 47 |
| 26-27 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 46 |
| 28 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 44 |
| 29 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 42 |
| 30 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 40 |
| 31 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 38 |
| 32-33 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 37 |
| 34 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 35 |
| 35 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 33 |
| 36 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 62 |
| 37-38 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 61 |
| 39 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 59 |
| 40 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 57 |
| 41 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 55 |
| 42 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 53 |
| 43 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 51 |
| 44 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 49 |
| 45 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 47 |
| 46 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 45 |
| 47-48 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 44 |
| 49 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 42 |
| 50-51 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 41 |
| 52 | Chờ 1 bước (`-1`) | (10, 14) | (10, 14) | Dự kiến đứng yên tại (10, 14); mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 41 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 17) (ô=300)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(6, 8))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(6, 8))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 0, 0, 5, 5, 5, 4, 1, 1, 2, 1, 1, 1, 2, 2, 1, 0, 1, 0, 5, 5, 5, 5, 5, 4, 3, 3, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 27 |
| 2 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 25 |
| 3-4 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 24 |
| 5-6 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 23 |
| 7 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 21 |
| 8-10 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 19 |
| 11-12 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 18 |
| 13-14 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 17 |
| 15-16 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 16 |
| 17 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 62 |
| 18-19 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 61 |
| 20 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 59 |
| 21 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 57 |
| 22 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 55 |
| 23-24 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 54 |
| 25 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 52 |
| 26 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 50 |
| 27 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 48 |
| 28-29 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 47 |
| 30 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 45 |
| 31 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 43 |
| 32-33 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 42 |
| 34-35 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 41 |
| 36 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 39 |
| 37-38 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 38 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 37 |
| 41 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 35 |
| 42-43 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 34 |
| 44-45 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 33 |
| 46-47 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 32 |
| 48-49 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 31 |
| 50-51 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 30 |
| 52 | Chờ 1 bước (`-1`) | (6, 8) | (6, 8) | Dự kiến đứng yên tại (6, 8); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 30 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 14) (ô=248)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(11, 3))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(11, 3))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 2, 2, 4, 5, 4, 4, 4, 5, 2, 2, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 5, 0, 0, 0, 0, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 51 |
| 2-3 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 50 |
| 4-5 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 49 |
| 6 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 47 |
| 7-8 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 46 |
| 9-10 | Di chuyển hướng 2 (`2`) | (15, 13) | (16, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(16, 13)) | 45 |
| 11-12 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 44 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 43 |
| 15-16 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 42 |
| 17-18 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 41 |
| 19 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 17)) | 39 |
| 20-21 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 17)) | 38 |
| 22-23 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 17)) | 37 |
| 24-25 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 36 |
| 26-27 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 18)) | 35 |
| 28-29 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 34 |
| 30-31 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 33 |
| 32 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 31 |
| 33 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 29 |
| 34 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 27 |
| 35 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 25 |
| 36 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 23 |
| 37 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 21 |
| 38 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 19 |
| 39 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 17 |
| 40 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 15 |
| 41-42 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 14 |
| 43-44 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 13 |
| 45-47 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 11 |
| 48 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(9, 4)) | 9 |
| 49-50 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 8 |
| 51 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 6 |
| 52 | Chờ 1 bước (`-1`) | (11, 3) | (11, 3) | Dự kiến đứng yên tại (11, 3); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 6 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (5, 12) (ô=209)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(5, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(5, 12))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, -5, 4, 3, 4, 4, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 62 |
| 2 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 62 |
| 3 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 62 |
| 4 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 62 |
| 5-9 | Chờ 5 bước (`-5`) | (6, 8) | (6, 8) | Dự kiến đứng yên tại (6, 8); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 62 |
| 10-11 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 62 |
| 12 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 62 |
| 13 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 62 |
| 14 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 62 |
| 15-52 | Chờ 38 bước (`-38`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 62 |

