# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 54
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 17 | #4 | #6 | (10, 18) | 5 | 55 |
| 32 | #0 | #6 | (4, 21) | 3 | 55 |
| 41 | #5 | #6 | (3, 17) | 0 | 55 |
| 43 | #5 | #6 | (3, 18) | 54 | 55 |
| 46 | #5 | #6 | (3, 19) | 53 | 55 |
| 52 | #5 | #6 | (3, 22) | 50 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 23) (ô=555)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 23)
- Mảng hành động đã gửi server: `[1, 1, -28, 3, 2, 3, 2, 2, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 4 |
| 2-3 | Di chuyển hướng 1 (`1`) | (3, 22) | (4, 21) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 21)) | 3 |
| 4-31 | Chờ 28 bước (`-28`) | (4, 21) | (4, 21) | Dự kiến đứng yên tại (4, 21); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 21)) | 55 |
| 32-33 | Di chuyển hướng 3 (`3`) | (4, 21) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 54 |
| 34-35 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 53 |
| 36-38 | Di chuyển hướng 3 (`3`) | (5, 22) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 51 |
| 39-40 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 50 |
| 41-43 | Di chuyển hướng 2 (`2`) | (7, 23) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 48 |
| 44-45 | Di chuyển hướng 2 (`2`) | (8, 23) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 47 |
| 46-48 | Di chuyển hướng 2 (`2`) | (9, 23) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 45 |
| 49-51 | Di chuyển hướng 2 (`2`) | (10, 23) | (11, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 23)) | 43 |
| 52-53 | Di chuyển hướng 2 (`2`) | (11, 23) | (12, 23) | Dự kiến đến điểm hẹn tọa độ (12, 23) | 42 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 11) (ô=272)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(21, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(21, 2))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 4, 3, 3, 4, 4, 1, 1, 0, 0, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 41 |
| 3-4 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 40 |
| 5 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 38 |
| 6-7 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 37 |
| 8-10 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 35 |
| 11-12 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 34 |
| 13-14 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 33 |
| 15-16 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 32 |
| 17-18 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 31 |
| 19-21 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 29 |
| 22 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 27 |
| 23-24 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 26 |
| 25-26 | Di chuyển hướng 1 (`1`) | (18, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 25 |
| 27-29 | Di chuyển hướng 1 (`1`) | (18, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 23 |
| 30-31 | Di chuyển hướng 1 (`1`) | (19, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 22 |
| 32 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 3)) | 20 |
| 33-34 | Di chuyển hướng 2 (`2`) | (20, 3) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 19 |
| 35-37 | Di chuyển hướng 2 (`2`) | (21, 3) | (22, 3) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(22, 3)) | 17 |
| 38-39 | Di chuyển hướng 4 (`4`) | (22, 3) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 16 |
| 40 | Di chuyển hướng 3 (`3`) | (21, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 14 |
| 41 | Di chuyển hướng 3 (`3`) | (22, 5) | (22, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(22, 6)) | 12 |
| 42-43 | Di chuyển hướng 4 (`4`) | (22, 6) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 11 |
| 44 | Di chuyển hướng 4 (`4`) | (22, 7) | (21, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 8)) | 9 |
| 45-46 | Di chuyển hướng 1 (`1`) | (21, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 8 |
| 47 | Di chuyển hướng 1 (`1`) | (22, 7) | (22, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(22, 6)) | 6 |
| 48-49 | Di chuyển hướng 0 (`0`) | (22, 6) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 5 |
| 50 | Di chuyển hướng 0 (`0`) | (22, 5) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 3 |
| 51 | Di chuyển hướng 1 (`1`) | (21, 4) | (22, 3) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(22, 3)) | 1 |
| 52-53 | Di chuyển hướng 0 (`0`) | (22, 3) | (21, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(21, 2)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 10) (ô=257)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(18, 10))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(18, 10))
- Mảng hành động đã gửi server: `[5, 5, 2, 2, 2, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 9 |
| 3-5 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(15, 10)) | 7 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 6 |
| 8-10 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 4 |
| 11-13 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 10)) | 2 |
| 14-53 | Chờ 40 bước (`-40`) | (18, 10) | (18, 10) | Dự kiến đứng yên tại (18, 10); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 10)) | 2 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=293)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 3)
- Mảng hành động đã gửi server: `[1, 5, 5, 2, 2, 2, 2, 3, 2, 2, 1, 2, 0, 0, 1, 1, 1, 2, 0, 5, 5, 0, 0, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 11)) | 34 |
| 2-3 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 33 |
| 4-5 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(4, 11)) | 32 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 31 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 11)) | 30 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 29 |
| 12-13 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 28 |
| 14-16 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 26 |
| 17 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 24 |
| 18 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 22 |
| 19 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 20 |
| 20-22 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(12, 11)) | 18 |
| 23-24 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 17 |
| 25-27 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 15 |
| 28-30 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 13 |
| 31-32 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 12 |
| 33-35 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 6)) | 10 |
| 36-37 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 9 |
| 38-39 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 8 |
| 40-41 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 7 |
| 42-44 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 5 |
| 45-46 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 4 |
| 47-49 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 2 |
| 50-51 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 1 |
| 52-53 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 17) (ô=419)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 11)
- Mảng hành động đã gửi server: `[4, -16, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 3, 2, 1, 2, 5, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 18)) | 5 |
| 2-17 | Chờ 16 bước (`-16`) | (10, 18) | (10, 18) | Dự kiến đứng yên tại (10, 18); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 18)) | 55 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 54 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 53 |
| 22 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 51 |
| 23 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 49 |
| 24-25 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 48 |
| 26 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 46 |
| 27-29 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 44 |
| 30 | Di chuyển hướng 2 (`2`) | (16, 15) | (17, 15) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 15)) | 42 |
| 31-32 | Di chuyển hướng 1 (`1`) | (17, 15) | (17, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(17, 14)) | 41 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 40 |
| 35 | Di chuyển hướng 2 (`2`) | (18, 14) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 38 |
| 36-38 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 36 |
| 39-41 | Di chuyển hướng 2 (`2`) | (20, 15) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 34 |
| 42 | Di chuyển hướng 1 (`1`) | (21, 15) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 32 |
| 43-44 | Di chuyển hướng 2 (`2`) | (21, 14) | (22, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(22, 14)) | 31 |
| 45-46 | Di chuyển hướng 5 (`5`) | (22, 14) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 30 |
| 47-48 | Di chuyển hướng 0 (`0`) | (21, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 29 |
| 49-51 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 27 |
| 52 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 25 |
| 53 | Chờ 1 bước (`-1`) | (20, 11) | (20, 11) | Dự kiến đứng yên tại (20, 11); hướng tới tọa độ (20, 11) | 25 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (3, 17) (ô=411)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(3, 23))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(3, 23))
- Mảng hành động đã gửi server: `[-41, 3, 4, 3, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-40 | Chờ 41 bước (`-41`) | (3, 17) | (3, 17) | Dự kiến đứng yên tại (3, 17); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(3, 17)) | 55 |
| 41-42 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 55 |
| 43-45 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 55 |
| 46 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 53 |
| 47-49 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 21)) | 51 |
| 50-51 | Di chuyển hướng 4 (`4`) | (4, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 55 |
| 52-53 | Di chuyển hướng 4 (`4`) | (3, 22) | (3, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(3, 23)) | 54 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 10) (ô=253)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 22)
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 4, 4, 4, 5, 4, 5, 5, 4, 5, 4, 5, 4, 5, 0, 0, 1, 0, 3, 4, 4, 3, 3, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 55 |
| 3-4 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 55 |
| 5 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 55 |
| 6-8 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 55 |
| 9 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 55 |
| 10-12 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 55 |
| 13 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 55 |
| 14 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 55 |
| 15-16 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 18)) | 55 |
| 17-18 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 55 |
| 19-20 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (8, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 55 |
| 22-23 | Di chuyển hướng 5 (`5`) | (8, 19) | (7, 19) | Dự kiến đến điểm hẹn tọa độ (7, 19) | 55 |
| 24-25 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 55 |
| 26-27 | Di chuyển hướng 5 (`5`) | (6, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 55 |
| 28 | Di chuyển hướng 4 (`4`) | (5, 20) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 55 |
| 29-31 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 21)) | 55 |
| 32-33 | Di chuyển hướng 0 (`0`) | (4, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 55 |
| 34-36 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 55 |
| 37 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 55 |
| 38-40 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(3, 17)) | 55 |
| 41-42 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 55 |
| 43-45 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 55 |
| 46 | Di chuyển hướng 4 (`4`) | (3, 19) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 55 |
| 47 | Di chuyển hướng 3 (`3`) | (2, 20) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 55 |
| 48-49 | Di chuyển hướng 3 (`3`) | (3, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 55 |
| 50-53 | Chờ 4 bước (`-4`) | (3, 22) | (3, 22) | Dự kiến đứng yên tại (3, 22); hướng tới tọa độ (3, 22) | 55 |

