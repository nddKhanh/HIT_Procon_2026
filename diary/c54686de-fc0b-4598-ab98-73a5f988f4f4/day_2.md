# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 50
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #2 | #3 | (5, 9) | 0 | 53 |
| 17 | #2 | #3 | (5, 10) | 52 | 53 |
| 28 | #2 | #3 | (7, 14) | 47 | 53 |
| 34 | #0 | #5 | (17, 20) | 2 | 53 |
| 37 | #0 | #5 | (18, 21) | 52 | 53 |
| 49 | #4 | #5 | (18, 21) | 4 | 53 |
| 49 | #6 | #3 | (7, 14) | 15 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 21) (ô=482)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 21)
- Mảng hành động đã gửi server: `[5, 0, 5, -28, 3, 3, 2, 2, 1, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 5 |
| 3-4 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 3 |
| 5-6 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 2 |
| 7-34 | Chờ 28 bước (`-28`) | (17, 20) | (17, 20) | Dự kiến đứng yên tại (17, 20); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 53 |
| 35-36 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 53 |
| 37-39 | Di chuyển hướng 3 (`3`) | (18, 21) | (18, 22) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 22)) | 51 |
| 40-41 | Di chuyển hướng 2 (`2`) | (18, 22) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 50 |
| 42-44 | Di chuyển hướng 2 (`2`) | (19, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 48 |
| 45-46 | Di chuyển hướng 1 (`1`) | (20, 22) | (21, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 21)) | 47 |
| 47-48 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 46 |
| 49 | Chờ 1 bước (`-1`) | (20, 21) | (20, 21) | Dự kiến đứng yên tại (20, 21); hướng tới tọa độ (20, 21) | 46 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (19, 1) (ô=41)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(14, 14))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(14, 14))
- Mảng hành động đã gửi server: `[1, 2, 2, 5, 5, 4, 4, 5, 4, 5, 5, 4, 4, 4, 3, 3, 3, 5, 4, 4, 3, 3, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (19, 1) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 32 |
| 2 | Di chuyển hướng 2 (`2`) | (19, 0) | (20, 0) | Dự kiến đến điểm hẹn tọa độ (20, 0) | 30 |
| 3-5 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 0)) | 28 |
| 6-7 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đến điểm hẹn tọa độ (20, 0) | 27 |
| 8-10 | Di chuyển hướng 5 (`5`) | (20, 0) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 25 |
| 11 | Di chuyển hướng 4 (`4`) | (19, 0) | (19, 1) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(19, 1)) | 23 |
| 12-13 | Di chuyển hướng 4 (`4`) | (19, 1) | (18, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(18, 2)) | 22 |
| 14-15 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 21 |
| 16-17 | Di chuyển hướng 4 (`4`) | (17, 2) | (17, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 3)) | 20 |
| 18-19 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 19 |
| 20-21 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 18 |
| 22-23 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 17 |
| 24-26 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 15 |
| 27-28 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 6)) | 14 |
| 29-30 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 13 |
| 31-32 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 12 |
| 33-34 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 9)) | 10 |
| 35-36 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 9 |
| 37-38 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 8 |
| 39-40 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 7 |
| 41-42 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 6 |
| 43-45 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 4 |
| 46-47 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 3 |
| 48-49 | Chờ 2 bước (`-2`) | (14, 14) | (14, 14) | Dự kiến đứng yên tại (14, 14); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 9) (ô=203)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 17)
- Mảng hành động đã gửi server: `[-15, 3, 4, 2, 3, 3, 3, 3, 5, 5, 5, 5, 5, 3, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-14 | Chờ 15 bước (`-15`) | (5, 9) | (5, 9) | Dự kiến đứng yên tại (5, 9); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 53 |
| 15-16 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 53 |
| 17-18 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 52 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 51 |
| 21-23 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 49 |
| 24-25 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 48 |
| 26-27 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 53 |
| 28-29 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 52 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 51 |
| 32 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 49 |
| 33-35 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 47 |
| 36-38 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 45 |
| 39-41 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 43 |
| 42-43 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 42 |
| 44-46 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 40 |
| 47 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 38 |
| 48-49 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 37 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (9, 4) (ô=97)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 14)
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 4, 4, 5, 3, 3, 3, 3, 3, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 53 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 53 |
| 4-5 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 53 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 53 |
| 8-9 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 53 |
| 10-12 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 53 |
| 13 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 53 |
| 14-15 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 53 |
| 16-17 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 53 |
| 18-20 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 53 |
| 21-22 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 53 |
| 23-24 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 53 |
| 25-49 | Chờ 25 bước (`-25`) | (7, 14) | (7, 14) | Dự kiến đứng yên tại (7, 14); hướng tới tọa độ (7, 14) | 53 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=90)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 21)
- Mảng hành động đã gửi server: `[2, 1, 2, 3, 2, 2, 2, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 2, 3, 3, 3, 2, 3, 4, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 41 |
| 2 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 39 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 38 |
| 5-6 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 37 |
| 7 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 35 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 34 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 32 |
| 11-12 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 31 |
| 13-14 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 30 |
| 15-16 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 29 |
| 17 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 27 |
| 18-19 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 26 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 25 |
| 22 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 23 |
| 23-24 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 22 |
| 25-26 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 21 |
| 27-29 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 19 |
| 30-31 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 18 |
| 32-33 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 17 |
| 34 | Di chuyển hướng 3 (`3`) | (15, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 15 |
| 35-36 | Di chuyển hướng 3 (`3`) | (16, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 14 |
| 37-39 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 12 |
| 40-42 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 17)) | 10 |
| 43-44 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 9 |
| 45 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 7 |
| 46 | Di chuyển hướng 4 (`4`) | (18, 19) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 5 |
| 47-48 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 53 |
| 49 | Chờ 1 bước (`-1`) | (18, 21) | (18, 21) | Dự kiến đứng yên tại (18, 21); hướng tới tọa độ (18, 21) | 53 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (3, 15) (ô=333)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 21)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 3, 3, 3, 2, 3, 2, 3, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 53 |
| 2-4 | Di chuyển hướng 2 (`2`) | (4, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 53 |
| 5-7 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 53 |
| 8-10 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 53 |
| 11 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 53 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 53 |
| 14-15 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 53 |
| 16 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 53 |
| 17-18 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 53 |
| 19 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 53 |
| 20-21 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 53 |
| 22-23 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 53 |
| 24-26 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 53 |
| 27-28 | Di chuyển hướng 3 (`3`) | (14, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 53 |
| 29 | Di chuyển hướng 2 (`2`) | (15, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 53 |
| 30 | Di chuyển hướng 3 (`3`) | (16, 19) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 53 |
| 31-33 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 53 |
| 34-35 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 53 |
| 36-49 | Chờ 14 bước (`-14`) | (18, 21) | (18, 21) | Dự kiến đứng yên tại (18, 21); hướng tới tọa độ (18, 21) | 53 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (5, 15) (ô=335)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 14)
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 4, 4, 5, 5, 3, 4, 1, 2, 1, 2, 2, 2, 2, 1, 1, 0, 0, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 48 |
| 3-4 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 47 |
| 5 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 18)) | 45 |
| 6-7 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 44 |
| 8-9 | Di chuyển hướng 4 (`4`) | (6, 19) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 43 |
| 10-12 | Di chuyển hướng 4 (`4`) | (5, 20) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 41 |
| 13 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 39 |
| 14-16 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 37 |
| 17-18 | Di chuyển hướng 3 (`3`) | (3, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 36 |
| 19-20 | Di chuyển hướng 4 (`4`) | (3, 22) | (3, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 23)) | 35 |
| 21-22 | Di chuyển hướng 1 (`1`) | (3, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 34 |
| 23-24 | Di chuyển hướng 2 (`2`) | (3, 22) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 33 |
| 25 | Di chuyển hướng 1 (`1`) | (4, 22) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 31 |
| 26 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 29 |
| 27-29 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 27 |
| 30-32 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 25 |
| 33-34 | Di chuyển hướng 2 (`2`) | (8, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 24 |
| 35 | Di chuyển hướng 1 (`1`) | (9, 21) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 22 |
| 36-37 | Di chuyển hướng 1 (`1`) | (9, 20) | (10, 19) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 21 |
| 38-39 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 20 |
| 40-42 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 18 |
| 43-44 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 17 |
| 45-46 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 16 |
| 47-48 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 53 |
| 49 | Chờ 1 bước (`-1`) | (7, 14) | (7, 14) | Dự kiến đứng yên tại (7, 14); hướng tới tọa độ (7, 14) | 53 |

