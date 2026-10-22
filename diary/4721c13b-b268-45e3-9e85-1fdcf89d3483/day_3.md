# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 60
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #0 | #5 | (6, 15) | 66 | 67 |
| 4 | #0 | #5 | (7, 15) | 66 | 67 |
| 7 | #0 | #5 | (8, 15) | 65 | 67 |
| 9 | #0 | #5 | (9, 15) | 66 | 67 |
| 11 | #0 | #5 | (10, 15) | 66 | 67 |
| 13 | #0 | #5 | (11, 15) | 66 | 67 |
| 15 | #0 | #5 | (12, 15) | 66 | 67 |
| 20 | #2 | #5 | (14, 16) | 21 | 67 |
| 20 | #4 | #5 | (14, 16) | 21 | 67 |
| 21 | #2 | #5 | (15, 17) | 65 | 67 |
| 21 | #4 | #5 | (15, 17) | 65 | 67 |
| 23 | #2 | #5 | (15, 18) | 66 | 67 |
| 23 | #4 | #5 | (15, 18) | 66 | 67 |
| 25 | #4 | #5 | (15, 17) | 66 | 67 |
| 35 | #3 | #5 | (14, 14) | 10 | 67 |
| 45 | #4 | #5 | (13, 10) | 52 | 67 |
| 55 | #2 | #5 | (13, 10) | 47 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 16) (ô=341)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=2, tọa độ=(16, 1))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=2, tọa độ=(16, 1))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 0, 0, 0, 5, 0, 0, 1, 1, 2, 1, 2, 2, 2, 2, 2, 0, 0, 0, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 67 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 67 |
| 4-6 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(8, 15)) | 67 |
| 7-8 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 67 |
| 9-10 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 67 |
| 11-12 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 67 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 67 |
| 15 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 65 |
| 16-17 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 64 |
| 18-20 | Di chuyển hướng 2 (`2`) | (13, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 62 |
| 21-22 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 61 |
| 23-24 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 60 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 59 |
| 27-28 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 58 |
| 29-30 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 57 |
| 31 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 55 |
| 32 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 53 |
| 33-34 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 52 |
| 35 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 50 |
| 36-37 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 49 |
| 38-40 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 47 |
| 41-42 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 46 |
| 43 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 44 |
| 44-46 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 42 |
| 47 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 40 |
| 48 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 5)) | 38 |
| 49-50 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 37 |
| 51-52 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 3)) | 36 |
| 53-54 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 35 |
| 55-57 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 33 |
| 58-59 | Di chuyển hướng 0 (`0`) | (16, 2) | (16, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=2, tọa độ=(16, 1)) | 32 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 8) (ô=179)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 5))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 5))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 4, 5, 4, 4, 4, 5, 5, 5, 5, 5, 4, 0, 0, 0, 5, 0, 0, 0, 0, 1, 0, 1, 1, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 37 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 35 |
| 3 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 33 |
| 4-5 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 32 |
| 6-7 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 31 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 30 |
| 10-11 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 29 |
| 12 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 27 |
| 13-15 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 25 |
| 16-17 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 24 |
| 18-19 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 23 |
| 20-21 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(8, 15)) | 22 |
| 22-23 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 21 |
| 24-26 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 19 |
| 27-28 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 18 |
| 29-30 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 17 |
| 31-33 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 15 |
| 34-35 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 14 |
| 36-38 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 12 |
| 39-40 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 11 |
| 41 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 9 |
| 42-43 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 8 |
| 44 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 6 |
| 45-46 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 5 |
| 47-48 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 4 |
| 49-51 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 2 |
| 52-54 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 5)) | 0 |
| 55-59 | Chờ 5 bước (`-5`) | (2, 5) | (2, 5) | Dự kiến đứng yên tại (2, 5); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 5)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 11) (ô=250)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Mảng hành động đã gửi server: `[4, 0, 5, 4, 5, 4, 4, 3, 4, 3, 3, 5, 5, 4, 4, -1, 0, 0, 1, 0, 0, 1, 1, 1, 2, 1, 0, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(18, 12)) | 32 |
| 3-4 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 31 |
| 5-7 | Di chuyển hướng 5 (`5`) | (18, 11) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 29 |
| 8-9 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 28 |
| 10-11 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 26 |
| 12-13 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 25 |
| 14-15 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 24 |
| 16-17 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 23 |
| 18-19 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 67 |
| 20 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 67 |
| 21-22 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 67 |
| 23-24 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 66 |
| 25-26 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 18)) | 65 |
| 27-28 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 64 |
| 29-31 | Di chuyển hướng 4 (`4`) | (13, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 20)) | 62 |
| 32 | Chờ 1 bước (`-1`) | (12, 20) | (12, 20) | Dự kiến đứng yên tại (12, 20); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 20)) | 62 |
| 33-34 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 61 |
| 35-37 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 59 |
| 38-39 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 58 |
| 40 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 56 |
| 41-42 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 55 |
| 43-44 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 54 |
| 45-47 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 52 |
| 48 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 50 |
| 49-50 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 49 |
| 51-52 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 48 |
| 53-54 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 67 |
| 55-56 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 66 |
| 57 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 64 |
| 58 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 62 |
| 59 | Chờ 1 bước (`-1`) | (11, 8) | (11, 8) | Dự kiến đứng yên tại (11, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 62 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (16, 1) (ô=37)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 16)
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 3, 5, 4, 4, 4, 4, 3, 3, 4, 5, 4, 4, 3, 4, 3, 3, 5, 5, 4, 4, 0, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 31 |
| 2-3 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 30 |
| 4-6 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 3)) | 28 |
| 7-8 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 27 |
| 9-10 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 5)) | 26 |
| 11-12 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 25 |
| 13 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 23 |
| 14-15 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 22 |
| 16-18 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 20 |
| 19-20 | Di chuyển hướng 4 (`4`) | (16, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 19 |
| 21-23 | Di chuyển hướng 3 (`3`) | (16, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 17 |
| 24-26 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 15 |
| 27-28 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 14 |
| 29-30 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 12 |
| 31-32 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 11 |
| 33-34 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 67 |
| 35-36 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 66 |
| 37-38 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 64 |
| 39 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 62 |
| 40-41 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 61 |
| 42-43 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 60 |
| 44-45 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 18)) | 59 |
| 46-47 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 58 |
| 48-50 | Di chuyển hướng 4 (`4`) | (13, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 20)) | 56 |
| 51-52 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 55 |
| 53-55 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 53 |
| 56-57 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 52 |
| 58 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 50 |
| 59 | Chờ 1 bước (`-1`) | (11, 16) | (11, 16) | Dự kiến đứng yên tại (11, 16); hướng tới tọa độ (11, 16) | 50 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (19, 10) (ô=229)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=1, tọa độ=(18, 12))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=1, tọa độ=(18, 12))
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 5, 4, 4, 3, 4, 3, 3, 0, 0, 5, 5, 0, 5, 1, 1, 1, 2, 1, 0, 2, 2, 3, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 33 |
| 2-4 | Di chuyển hướng 4 (`4`) | (18, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 31 |
| 5-7 | Di chuyển hướng 5 (`5`) | (18, 11) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 29 |
| 8-9 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 28 |
| 10-11 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 26 |
| 12-13 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 25 |
| 14-15 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 24 |
| 16-17 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 23 |
| 18-19 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 67 |
| 20 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 67 |
| 21-22 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 67 |
| 23-24 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 67 |
| 25-26 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 66 |
| 27 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 64 |
| 28-29 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 63 |
| 30-31 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 62 |
| 32 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 60 |
| 33-34 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 59 |
| 35-37 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 57 |
| 38 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 55 |
| 39-40 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 54 |
| 41-42 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 53 |
| 43-44 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 67 |
| 45-46 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 66 |
| 47-49 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 64 |
| 50-51 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 63 |
| 52-54 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 61 |
| 55-56 | Di chuyển hướng 2 (`2`) | (17, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 60 |
| 57-59 | Di chuyển hướng 3 (`3`) | (18, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(18, 12)) | 58 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (5, 16) (ô=341)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=3, tọa độ=(13, 10))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=3, tọa độ=(13, 10))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, 3, 0, 3, 0, 0, 1, 0, 0, 0, 1, 0, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 67 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 67 |
| 4-6 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(8, 15)) | 67 |
| 7-8 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 67 |
| 9-10 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 67 |
| 11-12 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 67 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 67 |
| 15 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 67 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 67 |
| 18-19 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 67 |
| 20 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 67 |
| 21-22 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 67 |
| 23-24 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 67 |
| 25-26 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 67 |
| 27-28 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 67 |
| 29-30 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 67 |
| 31 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 67 |
| 32-33 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 67 |
| 34-35 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 67 |
| 36-38 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 67 |
| 39-40 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 67 |
| 41-42 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 67 |
| 43-59 | Chờ 17 bước (`-17`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 67 |

