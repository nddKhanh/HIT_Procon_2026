# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 52
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 7 | #2 | #6 | (14, 9) | 42 | 49 |
| 7 | #5 | #6 | (14, 9) | 0 | 49 |
| 19 | #0 | #7 | (12, 20) | 3 | 49 |
| 22 | #0 | #7 | (13, 19) | 48 | 49 |
| 24 | #0 | #7 | (12, 18) | 48 | 49 |
| 26 | #0 | #7 | (13, 17) | 48 | 49 |
| 28 | #4 | #6 | (8, 3) | 0 | 49 |
| 30 | #0 | #7 | (13, 15) | 45 | 49 |
| 32 | #0 | #7 | (13, 14) | 48 | 49 |
| 34 | #0 | #7 | (13, 13) | 48 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 19) (ô=432)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 17)
- Mảng hành động đã gửi server: `[5, 0, 3, 4, -11, 1, 0, 1, 0, 1, 1, 0, 1, 3, 3, 2, 2, 3, 2, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 6 |
| 3-4 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 5 |
| 5-6 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 4 |
| 7-8 | Di chuyển hướng 4 (`4`) | (13, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 3 |
| 9-19 | Chờ 11 bước (`-11`) | (12, 20) | (12, 20) | Dự kiến đứng yên tại (12, 20); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 49 |
| 20-21 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 49 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 49 |
| 24-25 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 49 |
| 26-28 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 47 |
| 29 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 49 |
| 30-31 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 49 |
| 32-33 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 49 |
| 34 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 12)) | 47 |
| 35-36 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 46 |
| 37 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 44 |
| 38 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 42 |
| 39-40 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 41 |
| 41 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 39 |
| 42-44 | Di chuyển hướng 2 (`2`) | (17, 15) | (18, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(18, 15)) | 37 |
| 45-46 | Di chuyển hướng 3 (`3`) | (18, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 36 |
| 47-49 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 34 |
| 50-51 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 33 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 10) (ô=231)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(0, 4))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(0, 4))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 4, 4, 4, 4, 5, 0, 5, 5, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 43 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 42 |
| 4-5 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 41 |
| 6-7 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 40 |
| 8-9 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 38 |
| 10-13 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 36 |
| 14-15 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 35 |
| 16-17 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 34 |
| 18-19 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 32 |
| 20-21 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 31 |
| 22-23 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 30 |
| 24-25 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 28 |
| 26-27 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 27 |
| 28-29 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 26 |
| 30-32 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 24 |
| 33 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 22 |
| 34-35 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 21 |
| 36-37 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 19 |
| 38-39 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 18 |
| 40-41 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 17 |
| 42-43 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 16 |
| 44 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 6)) | 14 |
| 45-46 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(2, 5)) | 13 |
| 47-48 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 12 |
| 49-50 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 4)) | 11 |
| 51 | Chờ 1 bước (`-1`) | (0, 4) | (0, 4) | Dự kiến đứng yên tại (0, 4); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 4)) | 11 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 9) (ô=210)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 17)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 4, 4, 3, 3, 3, 4, 3, 4, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 44 |
| 3-5 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 42 |
| 6-7 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 48 |
| 8-10 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(16, 9)) | 46 |
| 11-12 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 45 |
| 13-15 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 43 |
| 16 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 41 |
| 17-19 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 39 |
| 20-21 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 38 |
| 22 | Di chuyển hướng 3 (`3`) | (21, 9) | (21, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(21, 10)) | 36 |
| 23-24 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 35 |
| 25 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 33 |
| 26 | Di chuyển hướng 4 (`4`) | (20, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 31 |
| 27-29 | Di chuyển hướng 3 (`3`) | (20, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 29 |
| 30-32 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 27 |
| 33-35 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 25 |
| 36-38 | Di chuyển hướng 4 (`4`) | (21, 16) | (21, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 17)) | 23 |
| 39-40 | Di chuyển hướng 3 (`3`) | (21, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 22 |
| 41-42 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 19)) | 21 |
| 43-44 | Di chuyển hướng 5 (`5`) | (21, 19) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 20 |
| 45-47 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 18 |
| 48-50 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 16 |
| 51 | Chờ 1 bước (`-1`) | (19, 17) | (19, 17) | Dự kiến đứng yên tại (19, 17); hướng tới tọa độ (19, 17) | 16 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 5) (ô=112)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(1, 6))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(1, 6))
- Mảng hành động đã gửi server: `[5, 0, 3, 3, -44]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 5 |
| 2-3 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 4)) | 4 |
| 4-5 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 3 |
| 6-7 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 6)) | 2 |
| 8-51 | Chờ 44 bước (`-44`) | (1, 6) | (1, 6) | Dự kiến đứng yên tại (1, 6); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 6)) | 2 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 3) (ô=74)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 7)
- Mảng hành động đã gửi server: `[-28, 2, 2, 2, 1, 2, 3, 2, 3, 3, 2, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-27 | Chờ 28 bước (`-28`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 49 |
| 28-29 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 48 |
| 30-32 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 46 |
| 33 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 44 |
| 34-36 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 42 |
| 37-38 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 2)) | 41 |
| 39-40 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 40 |
| 41-43 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 38 |
| 44 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 36 |
| 45 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 34 |
| 46-47 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 33 |
| 48 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 31 |
| 49-50 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 30 |
| 51 | Chờ 1 bước (`-1`) | (16, 7) | (16, 7) | Dự kiến đứng yên tại (16, 7); hướng tới tọa độ (16, 7) | 30 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (14, 9) (ô=212)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 17)
- Mảng hành động đã gửi server: `[-8, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 5, 4, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-7 | Chờ 8 bước (`-8`) | (14, 9) | (14, 9) | Dự kiến đứng yên tại (14, 9); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 49 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 48 |
| 10-11 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 47 |
| 12-14 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 12)) | 45 |
| 15-16 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 44 |
| 17 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 42 |
| 18-19 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 41 |
| 20-21 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 40 |
| 22-23 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 39 |
| 24-26 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 37 |
| 27-29 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 35 |
| 30-31 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 34 |
| 32-33 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 33 |
| 34-35 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 32 |
| 36-37 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 30 |
| 38-39 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 29 |
| 40-41 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 28 |
| 42 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 26 |
| 43 | Di chuyển hướng 5 (`5`) | (2, 17) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 24 |
| 44-46 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(0, 18)) | 22 |
| 47-48 | Di chuyển hướng 1 (`1`) | (0, 18) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 21 |
| 49-51 | Di chuyển hướng 2 (`2`) | (1, 17) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 19 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 12) (ô=277)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(8, 3))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(8, 3))
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 5, 0, 0, 0, 0, 0, 5, 5, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 49 |
| 2-3 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 49 |
| 4-6 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 49 |
| 7-8 | Di chuyển hướng 0 (`0`) | (14, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 49 |
| 9-11 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 49 |
| 12 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 49 |
| 13-15 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 49 |
| 16-18 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 49 |
| 19-20 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 49 |
| 21-23 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 49 |
| 24 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 49 |
| 25-27 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 49 |
| 28-51 | Chờ 24 bước (`-24`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 49 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (10, 11) (ô=252)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 13)
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 3, 4, 3, 3, 3, 2, 1, 0, 1, 0, 1, 1, 0, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 49 |
| 2-3 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 49 |
| 4-5 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 49 |
| 6-7 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 49 |
| 8-9 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 49 |
| 10 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 49 |
| 11-12 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 49 |
| 13-15 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 49 |
| 16-17 | Di chuyển hướng 3 (`3`) | (11, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 49 |
| 18 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 49 |
| 19-20 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 49 |
| 21-22 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 49 |
| 23-24 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 49 |
| 25-27 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 49 |
| 28 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 49 |
| 29-30 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 49 |
| 31-32 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 49 |
| 33-51 | Chờ 19 bước (`-19`) | (13, 13) | (13, 13) | Dự kiến đứng yên tại (13, 13); hướng tới tọa độ (13, 13) | 49 |

