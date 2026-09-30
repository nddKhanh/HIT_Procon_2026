# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 51
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 37 | #0 | #6 | (8, 16) | 0 | 51 |
| 49 | #3 | #5 | (2, 6) | 0 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 13) (ô=284)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(4, 20))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(4, 20))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, -30, 5, 4, 5, 4, 5, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 4 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 2 |
| 4-5 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 1 |
| 6-7 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 0 |
| 8-37 | Chờ 30 bước (`-30`) | (8, 16) | (8, 16) | Dự kiến đứng yên tại (8, 16); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 51 |
| 38-39 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 50 |
| 40-41 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 49 |
| 42 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 47 |
| 43 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 45 |
| 44-45 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 44 |
| 46-47 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 19)) | 43 |
| 48-49 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 42 |
| 50 | Chờ 1 bước (`-1`) | (4, 20) | (4, 20) | Dự kiến đứng yên tại (4, 20); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 42 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 4) (ô=93)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 3)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 4, 3, 3, 4, 5, 1, 1, 1, 1, 1, 1, 2, 1, 0, 1, 1, 3, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 43 |
| 3-6 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 41 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 40 |
| 9-10 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 39 |
| 11-12 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 38 |
| 13-14 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 37 |
| 15 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 35 |
| 16-17 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 34 |
| 18-19 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 33 |
| 20 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 10)) | 31 |
| 21-22 | Di chuyển hướng 1 (`1`) | (12, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 30 |
| 23-24 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 29 |
| 25-26 | Di chuyển hướng 1 (`1`) | (13, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 28 |
| 27-28 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 27 |
| 29-30 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 26 |
| 31-32 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 25 |
| 33-34 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 24 |
| 35-36 | Di chuyển hướng 1 (`1`) | (16, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 3)) | 23 |
| 37-38 | Di chuyển hướng 0 (`0`) | (17, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 22 |
| 39-40 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 21 |
| 41-43 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 19 |
| 44-45 | Di chuyển hướng 3 (`3`) | (17, 0) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 18 |
| 46-47 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 17 |
| 48-49 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 16 |
| 50 | Chờ 1 bước (`-1`) | (18, 3) | (18, 3) | Dự kiến đứng yên tại (18, 3); hướng tới tọa độ (18, 3) | 16 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 15) (ô=324)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(8, 20))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(8, 20))
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 5, 4, 4, 3, 2, 2, 2, 2, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 18 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 17 |
| 4-5 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 16 |
| 6 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 14 |
| 7 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 12 |
| 8-9 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 11 |
| 10-11 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 19)) | 10 |
| 12-13 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 9 |
| 14-15 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 8 |
| 16-17 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 7 |
| 18-19 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 6 |
| 20-21 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(8, 20)) | 5 |
| 22-50 | Chờ 29 bước (`-29`) | (8, 20) | (8, 20) | Dự kiến đứng yên tại (8, 20); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(8, 20)) | 5 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (15, 1) (ô=36)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(2, 6))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(2, 6))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 5, 5, 5, 4, 4, 4, 3, 3, 4, 1, 0, 1, 0, 0, 5, 5, 5, 5, 5, 0, 4, 3, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(14, 1)) | 33 |
| 2-3 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 32 |
| 4-5 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 31 |
| 6 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 29 |
| 7-8 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 28 |
| 9-10 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 27 |
| 11-14 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 25 |
| 15-17 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 23 |
| 18 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 21 |
| 19 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 19 |
| 20-21 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 18 |
| 22-23 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 17 |
| 24 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 10)) | 15 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 14 |
| 27 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 12 |
| 28-29 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 11 |
| 30-31 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 10 |
| 32 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 5)) | 8 |
| 33-34 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 7 |
| 35-36 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 6 |
| 37-38 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 5 |
| 39-40 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 4 |
| 41-42 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 3 |
| 43-44 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 2 |
| 45-46 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 1 |
| 47-48 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 6)) | 51 |
| 49 | Chờ 1 bước (`-1`) | (2, 6) | (2, 6) | Dự kiến đứng yên tại (2, 6); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 6)) | 51 |
| 50 | Chờ 1 bước (`-1`) | (2, 6) | (2, 6) | Dự kiến đứng yên tại (2, 6); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 6)) | 51 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 7) (ô=167)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(13, 22))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(13, 22))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 4, 4, 4, 5, 2, 2, 2, 1, 0, 3, 3, 4, 3, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 44 |
| 2-3 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 43 |
| 4-6 | Di chuyển hướng 4 (`4`) | (19, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 41 |
| 7-8 | Di chuyển hướng 4 (`4`) | (18, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 40 |
| 9 | Di chuyển hướng 4 (`4`) | (18, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 38 |
| 10-11 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 37 |
| 12-13 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 36 |
| 14-16 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 34 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 32 |
| 18 | Di chuyển hướng 5 (`5`) | (15, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 30 |
| 19-20 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 29 |
| 21-22 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 28 |
| 23-24 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 27 |
| 25-26 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 26 |
| 27-28 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 25 |
| 29-30 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 24 |
| 31-32 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 23 |
| 33-34 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 22 |
| 35-36 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 21 |
| 37-38 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 20 |
| 39-40 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 19 |
| 41-42 | Di chuyển hướng 4 (`4`) | (15, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 18 |
| 43-44 | Di chuyển hướng 3 (`3`) | (15, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(15, 20)) | 17 |
| 45-46 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 16 |
| 47-48 | Di chuyển hướng 4 (`4`) | (14, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 15 |
| 49-50 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 22)) | 14 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (8, 8) (ô=176)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(2, 6))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(2, 6))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 5, 0, 5, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 51 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 51 |
| 4 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 51 |
| 5-6 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 51 |
| 7 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 51 |
| 8 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 51 |
| 9 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 6)) | 51 |
| 10-50 | Chờ 41 bước (`-41`) | (2, 6) | (2, 6) | Dự kiến đứng yên tại (2, 6); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 6)) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (16, 4) (ô=100)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(8, 16))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(8, 16))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5, 4, 5, 5, 4, 4, 4, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 51 |
| 2-3 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 51 |
| 4-5 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 51 |
| 6-7 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 51 |
| 8-9 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 51 |
| 10-11 | Di chuyển hướng 3 (`3`) | (18, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 51 |
| 12-13 | Di chuyển hướng 4 (`4`) | (18, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 51 |
| 14 | Di chuyển hướng 4 (`4`) | (18, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 51 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 51 |
| 17-19 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 51 |
| 20-21 | Di chuyển hướng 5 (`5`) | (15, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 22 | Di chuyển hướng 5 (`5`) | (14, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 51 |
| 23-24 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 51 |
| 25-26 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 51 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 51 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 51 |
| 31-32 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 51 |
| 33-34 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 51 |
| 35-36 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 51 |
| 37-50 | Chờ 14 bước (`-14`) | (8, 16) | (8, 16) | Dự kiến đứng yên tại (8, 16); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 51 |

