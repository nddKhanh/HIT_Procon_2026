# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 54
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 24 | #2 | #5 | (5, 11) | 3 | 53 |
| 25 | #6 | #3 | (5, 3) | 5 | 53 |
| 27 | #2 | #5 | (6, 11) | 52 | 53 |
| 30 | #2 | #5 | (6, 12) | 51 | 53 |
| 32 | #2 | #5 | (7, 13) | 52 | 53 |
| 34 | #2 | #5 | (7, 14) | 52 | 53 |
| 36 | #2 | #5 | (8, 15) | 52 | 53 |
| 54 | #6 | #5 | (8, 15) | 34 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (17, 3) (ô=83)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(21, 21))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(21, 21))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 4, 3, 4, 4, 3, 4, 3, 3, 2, 3, 3, 3, 2, 3, 4, 4, 3, 3, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 37 |
| 2-3 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 36 |
| 4-6 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 34 |
| 7-9 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 32 |
| 10-11 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 31 |
| 12-13 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 30 |
| 14-15 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 28 |
| 16-17 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 27 |
| 18-19 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 26 |
| 20 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 24 |
| 21-23 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 22 |
| 24-25 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 21 |
| 26-27 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 20 |
| 28 | Di chuyển hướng 3 (`3`) | (15, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 18 |
| 29-30 | Di chuyển hướng 3 (`3`) | (16, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 17 |
| 31-33 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 15 |
| 34-36 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 17)) | 13 |
| 37-38 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 12 |
| 39 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 10 |
| 40-41 | Di chuyển hướng 4 (`4`) | (18, 19) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 8 |
| 42-43 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 7 |
| 44-46 | Di chuyển hướng 3 (`3`) | (18, 21) | (18, 22) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 22)) | 5 |
| 47-48 | Di chuyển hướng 2 (`2`) | (18, 22) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 4 |
| 49-51 | Di chuyển hướng 2 (`2`) | (19, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 2 |
| 52-53 | Di chuyển hướng 1 (`1`) | (20, 22) | (21, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 21)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 2) (ô=61)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(14, 14))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(14, 14))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 2, 5, 5, 4, 4, 5, 4, 5, 5, 4, 4, 4, 3, 3, 3, 5, 4, 4, 3, 3, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 33 |
| 2-3 | Di chuyển hướng 1 (`1`) | (18, 1) | (18, 0) | Dự kiến đến điểm hẹn tọa độ (18, 0) | 32 |
| 4-5 | Di chuyển hướng 2 (`2`) | (18, 0) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 31 |
| 6 | Di chuyển hướng 2 (`2`) | (19, 0) | (20, 0) | Dự kiến đến điểm hẹn tọa độ (20, 0) | 29 |
| 7-9 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 0)) | 27 |
| 10-11 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đến điểm hẹn tọa độ (20, 0) | 26 |
| 12-14 | Di chuyển hướng 5 (`5`) | (20, 0) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 24 |
| 15 | Di chuyển hướng 4 (`4`) | (19, 0) | (19, 1) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(19, 1)) | 22 |
| 16-17 | Di chuyển hướng 4 (`4`) | (19, 1) | (18, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(18, 2)) | 21 |
| 18-19 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 20 |
| 20-21 | Di chuyển hướng 4 (`4`) | (17, 2) | (17, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 3)) | 19 |
| 22-23 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 18 |
| 24-25 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 17 |
| 26-27 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 16 |
| 28-30 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 14 |
| 31-32 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 6)) | 13 |
| 33-34 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 12 |
| 35-36 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 11 |
| 37-38 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 9)) | 9 |
| 39-40 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 8 |
| 41-42 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 7 |
| 43-44 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 6 |
| 45-46 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 5 |
| 47-49 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 3 |
| 50-51 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 2 |
| 52-53 | Chờ 2 bước (`-2`) | (14, 14) | (14, 14) | Dự kiến đứng yên tại (14, 14); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 9) (ô=203)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 16)
- Mảng hành động đã gửi server: `[3, 4, -21, 2, 3, 3, 3, 3, 5, 5, 5, 5, 5, 3, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 4 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 3 |
| 4-24 | Chờ 21 bước (`-21`) | (5, 11) | (5, 11) | Dự kiến đứng yên tại (5, 11); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 53 |
| 25-26 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 53 |
| 27-29 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 53 |
| 30-31 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 53 |
| 32-33 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 53 |
| 34-35 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 53 |
| 36-37 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 52 |
| 38 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 50 |
| 39-41 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 48 |
| 42-44 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 46 |
| 45-47 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 44 |
| 48-49 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 43 |
| 50-52 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 41 |
| 53 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 39 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (14, 12) (ô=278)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(5, 3))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(5, 3))
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 5, 0, 0, 0, 0, 0, 5, 5, 5, 0, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 53 |
| 4 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 53 |
| 5-6 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 53 |
| 7-8 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 53 |
| 9 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 53 |
| 10-11 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 53 |
| 12-13 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 53 |
| 14 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 53 |
| 15-16 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 53 |
| 17-18 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 53 |
| 19-20 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 53 |
| 21 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 53 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 53 |
| 24 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 53 |
| 25-53 | Chờ 29 bước (`-29`) | (5, 3) | (5, 3) | Dự kiến đứng yên tại (5, 3); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 53 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (9, 12) (ô=273)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(10, 19))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(10, 19))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 5, 4, 3, 4, 3, 4, 4, 5, 5, 3, 4, 1, 2, 1, 2, 2, 2, 2, 1, 1, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 36 |
| 1-2 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 35 |
| 3-5 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 33 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 32 |
| 8 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 30 |
| 9-11 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 28 |
| 12-13 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 27 |
| 14 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 18)) | 25 |
| 15-16 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 24 |
| 17-18 | Di chuyển hướng 4 (`4`) | (6, 19) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 23 |
| 19-21 | Di chuyển hướng 4 (`4`) | (5, 20) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 21 |
| 22 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 19 |
| 23-25 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 17 |
| 26-27 | Di chuyển hướng 3 (`3`) | (3, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 16 |
| 28-29 | Di chuyển hướng 4 (`4`) | (3, 22) | (3, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 23)) | 15 |
| 30-31 | Di chuyển hướng 1 (`1`) | (3, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 14 |
| 32-33 | Di chuyển hướng 2 (`2`) | (3, 22) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 13 |
| 34 | Di chuyển hướng 1 (`1`) | (4, 22) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 11 |
| 35 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 9 |
| 36-38 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 7 |
| 39-41 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 5 |
| 42-43 | Di chuyển hướng 2 (`2`) | (8, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 4 |
| 44 | Di chuyển hướng 1 (`1`) | (9, 21) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 2 |
| 45-46 | Di chuyển hướng 1 (`1`) | (9, 20) | (10, 19) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 1 |
| 47-53 | Chờ 7 bước (`-7`) | (10, 19) | (10, 19) | Dự kiến đứng yên tại (10, 19); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 1 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (13, 19) (ô=431)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(8, 15))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(8, 15))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 0, 5, 2, 3, 3, 3, 3, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 53 |
| 2-3 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 53 |
| 4-6 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 53 |
| 7 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 53 |
| 8-9 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 53 |
| 10 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 53 |
| 11-12 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 53 |
| 13-14 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 53 |
| 15-16 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 53 |
| 17-18 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 53 |
| 19-20 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 53 |
| 21-23 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 53 |
| 24-25 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 53 |
| 26-28 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 53 |
| 29-30 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 53 |
| 31-32 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 53 |
| 33-34 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 53 |
| 35-53 | Chờ 19 bước (`-19`) | (8, 15) | (8, 15) | Dự kiến đứng yên tại (8, 15); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 53 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (3, 0) (ô=3)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(8, 15))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(8, 15))
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 2, 1, 2, -13, 3, 4, 4, 4, 3, 3, 3, 4, 2, 3, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 14 |
| 2-4 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 12 |
| 5 | Di chuyển hướng 3 (`3`) | (2, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 10 |
| 6-7 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(2, 4)) | 9 |
| 8-9 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 8 |
| 10 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 6 |
| 11-12 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 5 |
| 13-25 | Chờ 13 bước (`-13`) | (5, 3) | (5, 3) | Dự kiến đứng yên tại (5, 3); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 53 |
| 26-27 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 52 |
| 28 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 50 |
| 29-31 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 48 |
| 32-34 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 46 |
| 35 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 44 |
| 36-38 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 42 |
| 39-40 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 41 |
| 41-42 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 40 |
| 43-44 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 39 |
| 45-47 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 37 |
| 48-49 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 36 |
| 50-51 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 35 |
| 52-53 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 53 |

