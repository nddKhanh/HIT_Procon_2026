# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 46
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 24 | #3 | #4 | (11, 10) | 4 | 49 |
| 26 | #3 | #4 | (12, 10) | 48 | 49 |
| 27 | #3 | #4 | (13, 11) | 47 | 49 |
| 45 | #0 | #5 | (17, 0) | 8 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 18) (ô=393)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 0)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 5, 0, 1, 1, 0, -1, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 37 |
| 2 | Di chuyển hướng 1 (`1`) | (16, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 35 |
| 3-5 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 33 |
| 6-8 | Di chuyển hướng 1 (`1`) | (17, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 31 |
| 9-10 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 30 |
| 11-12 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 29 |
| 13-14 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 28 |
| 15-16 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 27 |
| 17 | Di chuyển hướng 1 (`1`) | (19, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 25 |
| 18-20 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 23 |
| 21-22 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 22 |
| 23-25 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 20 |
| 26 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 18 |
| 27-28 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 17 |
| 29-30 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 16 |
| 31-33 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 14 |
| 34-36 | Di chuyển hướng 1 (`1`) | (18, 3) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 12 |
| 37-38 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 11 |
| 39-41 | Di chuyển hướng 0 (`0`) | (19, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 0)) | 9 |
| 42 | Chờ 1 bước (`-1`) | (18, 0) | (18, 0) | Dự kiến đứng yên tại (18, 0); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 0)) | 9 |
| 43-44 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đến điểm hẹn tọa độ (17, 0) | 49 |
| 45 | Chờ 1 bước (`-1`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); hướng tới tọa độ (17, 0) | 49 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 9) (ô=200)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(20, 15))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(20, 15))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 4, 3, 2, 3, 3, 1, 1, 1, 1, 1, 1, 0, 4, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 47 |
| 3-4 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 46 |
| 5-6 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 45 |
| 7-9 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 43 |
| 10 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 41 |
| 11-13 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 39 |
| 14-15 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 38 |
| 16-18 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 36 |
| 19-20 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 35 |
| 21 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 33 |
| 22-23 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 32 |
| 24-25 | Di chuyển hướng 1 (`1`) | (16, 19) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 31 |
| 26-27 | Di chuyển hướng 1 (`1`) | (16, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 30 |
| 28-30 | Di chuyển hướng 1 (`1`) | (17, 17) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 28 |
| 31 | Di chuyển hướng 1 (`1`) | (17, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 26 |
| 32 | Di chuyển hướng 1 (`1`) | (18, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 24 |
| 33-34 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 23 |
| 35-36 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 22 |
| 37-38 | Di chuyển hướng 4 (`4`) | (18, 12) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 21 |
| 39-40 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 20 |
| 41-42 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 19 |
| 43-45 | Di chuyển hướng 2 (`2`) | (19, 15) | (20, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 15)) | 17 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 10) (ô=212)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(4, 12))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(4, 12))
- Mảng hành động đã gửi server: `[5, 1, 0, 1, 1, 1, 1, 1, 1, 2, 3, 3, 4, 4, 4, 4, 4, 3, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 47 |
| 3-4 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 46 |
| 5-6 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 45 |
| 7 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 43 |
| 8 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 41 |
| 9-11 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 39 |
| 12-14 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 37 |
| 15-17 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 35 |
| 18-19 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 2)) | 34 |
| 20-21 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(5, 2)) | 33 |
| 22-23 | Di chuyển hướng 3 (`3`) | (5, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 32 |
| 24-26 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 30 |
| 27-29 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 28 |
| 30 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 26 |
| 31-32 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 25 |
| 33-35 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 23 |
| 36 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 21 |
| 37-39 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 19 |
| 40-41 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 18 |
| 42-44 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 16 |
| 45 | Chờ 1 bước (`-1`) | (4, 12) | (4, 12) | Dự kiến đứng yên tại (4, 12); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 16 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 16) (ô=339)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(18, 12))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(18, 12))
- Mảng hành động đã gửi server: `[1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 0, 2, 3, -1, 2, 2, 3, 2, 2, 2, 1, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 16) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 21 |
| 2 | Di chuyển hướng 2 (`2`) | (4, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 19 |
| 3-5 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 17 |
| 6-8 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 15 |
| 9-10 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 14 |
| 11-12 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 13 |
| 13 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 11 |
| 14 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 9 |
| 15-16 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 8 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 7 |
| 19-21 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 5 |
| 22-23 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 49 |
| 24-25 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 49 |
| 26 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 49 |
| 27 | Chờ 1 bước (`-1`) | (13, 11) | (13, 11) | Dự kiến đứng yên tại (13, 11); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 49 |
| 28-29 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 48 |
| 30-32 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 46 |
| 33-34 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 45 |
| 35-37 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 43 |
| 38-39 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 42 |
| 40-41 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 41 |
| 42-43 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 40 |
| 44-45 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 39 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (2, 10) (ô=212)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(13, 11))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(13, 11))
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 2, 2, 2, 2, 3, 3, 2, 3, 2, 3, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 49 |
| 3 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 49 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 49 |
| 6 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 49 |
| 7-9 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 49 |
| 10 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 49 |
| 11-12 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 49 |
| 13 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 49 |
| 14-15 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 49 |
| 16-18 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 49 |
| 19-20 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 49 |
| 21-23 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 49 |
| 24-25 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 49 |
| 26 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 49 |
| 27-45 | Chờ 19 bước (`-19`) | (13, 11) | (13, 11) | Dự kiến đứng yên tại (13, 11); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 49 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (11, 9) (ô=200)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 0)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 0, 1, 2, 1, 1, 2, 1, 2, 2, 5, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 49 |
| 3 | Di chuyển hướng 1 (`1`) | (11, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 49 |
| 4 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 49 |
| 5 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 49 |
| 6-7 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 49 |
| 8-9 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 49 |
| 10 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 49 |
| 11-12 | Di chuyển hướng 1 (`1`) | (14, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 49 |
| 13 | Di chuyển hướng 1 (`1`) | (14, 2) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 49 |
| 14-15 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 49 |
| 16-17 | Di chuyển hướng 1 (`1`) | (16, 1) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 49 |
| 18 | Di chuyển hướng 2 (`2`) | (16, 0) | (17, 0) | Dự kiến đến điểm hẹn tọa độ (17, 0) | 49 |
| 19-21 | Di chuyển hướng 2 (`2`) | (17, 0) | (18, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 0)) | 49 |
| 22-23 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đến điểm hẹn tọa độ (17, 0) | 49 |
| 24-45 | Chờ 22 bước (`-22`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); hướng tới tọa độ (17, 0) | 49 |

