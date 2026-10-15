# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 50
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #4 | #6 | (7, 19) | 0 | 53 |
| 40 | #3 | #6 | (3, 15) | 0 | 53 |
| 45 | #4 | #6 | (3, 17) | 45 | 53 |
| 49 | #2 | #7 | (6, 10) | 5 | 53 |
| 49 | #3 | #6 | (3, 17) | 47 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 7) (ô=168)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(14, 20))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(14, 20))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 2, 2, 2, 4, 4, 5, 4, 3, 3, 3, 3, 3, 4, 3, 3, 2, 5, 5, 5, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 40 |
| 2-3 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 39 |
| 4-5 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 38 |
| 6 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 36 |
| 7-8 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 35 |
| 9-10 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 34 |
| 11-12 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 9)) | 33 |
| 13-14 | Di chuyển hướng 4 (`4`) | (20, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 32 |
| 15-16 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 31 |
| 17 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 29 |
| 18-19 | Di chuyển hướng 4 (`4`) | (18, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 28 |
| 20 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 26 |
| 21-22 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 25 |
| 23-24 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 24 |
| 25-27 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 22 |
| 28 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 20 |
| 29-30 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(19, 18)) | 19 |
| 31-32 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 18 |
| 33-34 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 17 |
| 35-36 | Di chuyển hướng 2 (`2`) | (20, 20) | (21, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 20)) | 16 |
| 37-38 | Di chuyển hướng 5 (`5`) | (21, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 15 |
| 39-40 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 14 |
| 41-42 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 13 |
| 43 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 11 |
| 44-45 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 10 |
| 46-47 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 9 |
| 48-49 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 8 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (6, 7) (ô=160)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(21, 20))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(21, 20))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 2, 1, 2, 2, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 34 |
| 2 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 32 |
| 3 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 30 |
| 4-5 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(9, 6)) | 29 |
| 6-7 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 28 |
| 8-9 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 27 |
| 10 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 25 |
| 11-12 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 24 |
| 13 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 22 |
| 14-15 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 21 |
| 16-17 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 20 |
| 18-19 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 19 |
| 20-21 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 18 |
| 22-23 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 17 |
| 24-25 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 16 |
| 26-27 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 15 |
| 28 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 13 |
| 29-30 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 12 |
| 31-32 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 11 |
| 33-35 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 9 |
| 36 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 7 |
| 37-38 | Di chuyển hướng 3 (`3`) | (20, 17) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 6 |
| 39-40 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 5 |
| 41-42 | Di chuyển hướng 3 (`3`) | (21, 19) | (21, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 20)) | 4 |
| 43-49 | Chờ 7 bước (`-7`) | (21, 20) | (21, 20) | Dự kiến đứng yên tại (21, 20); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 20)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 10) (ô=223)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(6, 10))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(6, 10))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 1, 1, 0, 5, 0, 0, 0, 5, 2, 2, 2, 3, 2, 2, 3, 3, 3, 3, 4, 4, 4, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 40 |
| 2-3 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 39 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 37 |
| 5-6 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 36 |
| 7 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 34 |
| 8-9 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 4)) | 33 |
| 10-11 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 32 |
| 12-13 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 31 |
| 14 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 29 |
| 15-16 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 28 |
| 17-19 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 0)) | 26 |
| 20-21 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 0)) | 25 |
| 22-23 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 0)) | 24 |
| 24-25 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 23 |
| 26-28 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 21 |
| 29 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 19 |
| 30-31 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 18 |
| 32-33 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 17 |
| 34-35 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 16 |
| 36 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 3)) | 14 |
| 37-38 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 13 |
| 39-40 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 12 |
| 41 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 10 |
| 42-43 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 9 |
| 44 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 7 |
| 45-46 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 6 |
| 47-48 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 10)) | 53 |
| 49 | Chờ 1 bước (`-1`) | (6, 10) | (6, 10) | Dự kiến đứng yên tại (6, 10); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 10)) | 53 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 15) (ô=337)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 17)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, -32, 0, 4, 3, 4, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 3 |
| 2-3 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 2 |
| 4-5 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 1 |
| 6-7 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 0 |
| 8-39 | Chờ 32 bước (`-32`) | (3, 15) | (3, 15) | Dự kiến đứng yên tại (3, 15); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 53 |
| 40-41 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 14)) | 52 |
| 42-43 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 51 |
| 44-45 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 50 |
| 46 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(2, 17)) | 48 |
| 47-48 | Di chuyển hướng 2 (`2`) | (2, 17) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 53 |
| 49 | Chờ 1 bước (`-1`) | (3, 17) | (3, 17) | Dự kiến đứng yên tại (3, 17); hướng tới tọa độ (3, 17) | 53 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (7, 19) (ô=425)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 15))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 15))
- Mảng hành động đã gửi server: `[-29, 4, 4, 4, 0, 0, 0, 0, 0, 5, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-28 | Chờ 29 bước (`-29`) | (7, 19) | (7, 19) | Dự kiến đứng yên tại (7, 19); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 53 |
| 29-30 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 52 |
| 31-32 | Di chuyển hướng 4 (`4`) | (6, 20) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 51 |
| 33-34 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 50 |
| 35-36 | Di chuyển hướng 0 (`0`) | (5, 22) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 49 |
| 37-38 | Di chuyển hướng 0 (`0`) | (5, 21) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 48 |
| 39-40 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 47 |
| 41-42 | Di chuyển hướng 0 (`0`) | (4, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 46 |
| 43-44 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 53 |
| 45-46 | Di chuyển hướng 5 (`5`) | (3, 17) | (2, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(2, 17)) | 52 |
| 47-48 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 51 |
| 49 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 49 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 23) (ô=519)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(13, 23))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(13, 23))
- Mảng hành động đã gửi server: `[-50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-49 | Chờ 50 bước (`-50`) | (13, 23) | (13, 23) | Dự kiến đứng yên tại (13, 23); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 23)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (18, 9) (ô=216)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 17)
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 4, 4, 4, 5, 4, 5, 5, 5, 5, 4, 5, 5, 4, 0, 0, 0, 0, 5, 5, 4, 3, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 53 |
| 2-3 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 53 |
| 4-5 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 53 |
| 6 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 53 |
| 7-8 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 53 |
| 9 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 53 |
| 10-12 | Di chuyển hướng 4 (`4`) | (16, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 53 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 53 |
| 15 | Di chuyển hướng 4 (`4`) | (14, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 53 |
| 16-17 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 53 |
| 18 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 53 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 53 |
| 21 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 53 |
| 22 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 53 |
| 23 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 53 |
| 24-25 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 53 |
| 26-27 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 53 |
| 28-29 | Di chuyển hướng 0 (`0`) | (7, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 53 |
| 30-31 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 53 |
| 32-33 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 53 |
| 34-35 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 53 |
| 36-37 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 53 |
| 38-39 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 53 |
| 40-41 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 53 |
| 42 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 53 |
| 43-49 | Chờ 7 bước (`-7`) | (3, 17) | (3, 17) | Dự kiến đứng yên tại (3, 17); hướng tới tọa độ (3, 17) | 53 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (0, 2) (ô=44)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(6, 10))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(6, 10))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 3, 2, 3, 2, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 53 |
| 2-4 | Di chuyển hướng 3 (`3`) | (1, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 53 |
| 5-6 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 53 |
| 7-8 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 53 |
| 9-10 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 53 |
| 11-12 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 53 |
| 13-14 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 53 |
| 15 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 53 |
| 16-17 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 53 |
| 18 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 10)) | 53 |
| 19-49 | Chờ 31 bước (`-31`) | (6, 10) | (6, 10) | Dự kiến đứng yên tại (6, 10); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 10)) | 53 |

