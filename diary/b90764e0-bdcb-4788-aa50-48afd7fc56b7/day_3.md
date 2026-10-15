# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 50
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 6 | #5 | #2 | (11, 15) | 32 | 51 |
| 23 | #3 | #2 | (18, 11) | 5 | 51 |
| 23 | #4 | #1 | (1, 12) | 5 | 51 |
| 41 | #0 | #1 | (10, 13) | 12 | 51 |
| 42 | #5 | #2 | (20, 10) | 24 | 51 |
| 43 | #0 | #1 | (10, 14) | 50 | 51 |
| 44 | #0 | #1 | (11, 15) | 49 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=90)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(8, 18))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(8, 18))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 2, 1, 1, 4, 3, 3, 3, 2, 3, 4, 4, 4, 4, 3, 3, 3, 3, 5, 4, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 39 |
| 2-4 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 37 |
| 5 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 35 |
| 6-7 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 34 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 33 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 31 |
| 11-13 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 29 |
| 14-15 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 3)) | 28 |
| 16-17 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 27 |
| 18-19 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 26 |
| 20-21 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 6)) | 25 |
| 22-23 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 24 |
| 24-26 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 22 |
| 27-29 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 20 |
| 30-32 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 18 |
| 33-34 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 17 |
| 35-37 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 11)) | 15 |
| 38-39 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 14 |
| 40 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 51 |
| 41-42 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 51 |
| 43 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 51 |
| 44 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 49 |
| 45-46 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 48 |
| 47 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 46 |
| 48 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 44 |
| 49 | Di chuyển hướng 4 (`4`) | (9, 17) | (8, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 18)) | 42 |

### Xe #1 - Tiếp tế

- Vị trí đầu ngày: (9, 5) (ô=119)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 15)
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 5, 4, 4, 5, 4, 5, 4, 3, 2, 1, 2, 2, 2, 2, 3, 2, 2, 3, 3, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 51 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 51 |
| 3-5 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 51 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 51 |
| 8-10 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 51 |
| 11 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 51 |
| 12-14 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 51 |
| 15-16 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 17 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 51 |
| 18-20 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 51 |
| 21-22 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(1, 12)) | 51 |
| 23-24 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 51 |
| 25-27 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 51 |
| 28 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 51 |
| 29-30 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 51 |
| 31 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 51 |
| 32-33 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 51 |
| 34-36 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 51 |
| 37-38 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 39 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 40 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 51 |
| 41-42 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 51 |
| 43 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 51 |
| 44-49 | Chờ 6 bước (`-6`) | (11, 15) | (11, 15) | Dự kiến đứng yên tại (11, 15); hướng tới tọa độ (11, 15) | 51 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (9, 18) (ô=405)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 10)
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 1, 2, 1, 2, 1, 2, 2, 1, 2, 2, 1, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 51 |
| 4 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 51 |
| 5 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 51 |
| 6 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 51 |
| 7-8 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 51 |
| 9-10 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 51 |
| 11 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 51 |
| 12 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 51 |
| 13-15 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 51 |
| 18-19 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 51 |
| 20-22 | Di chuyển hướng 1 (`1`) | (17, 12) | (18, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 51 |
| 23-24 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 51 |
| 25-26 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 51 |
| 27 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 51 |
| 28-49 | Chờ 22 bước (`-22`) | (20, 10) | (20, 10) | Dự kiến đứng yên tại (20, 10); hướng tới tọa độ (20, 10) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 1) (ô=39)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 4, 3, 4, 3, 3, 2, 3, -3, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 19 |
| 3-4 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 18 |
| 5 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 16 |
| 6-7 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 15 |
| 8 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 13 |
| 9-10 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 12 |
| 11 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 10 |
| 12-13 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 9 |
| 14-16 | Di chuyển hướng 3 (`3`) | (16, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 7 |
| 17-18 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 6 |
| 19-20 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 5 |
| 21-23 | Chờ 3 bước (`-3`) | (18, 11) | (18, 11) | Dự kiến đứng yên tại (18, 11); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 51 |
| 24-25 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 50 |
| 26-27 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 49 |
| 28-30 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 47 |
| 31-32 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 46 |
| 33-34 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 45 |
| 35-36 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 44 |
| 37-39 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 42 |
| 40-41 | Di chuyển hướng 1 (`1`) | (17, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 3)) | 41 |
| 42-43 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 40 |
| 44-46 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 1)) | 38 |
| 47-48 | Di chuyển hướng 0 (`0`) | (18, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 0)) | 37 |
| 49 | Chờ 1 bước (`-1`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 0)) | 37 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 10) (ô=224)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 5)
- Mảng hành động đã gửi server: `[3, 3, 4, 0, 5, 4, 5, 0, -9, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 3, 3, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 15 |
| 2-3 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 14 |
| 4-5 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 13)) | 13 |
| 6-7 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 12 |
| 8 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 10 |
| 9-10 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 9 |
| 11 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 7 |
| 12-14 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(1, 12)) | 5 |
| 15-23 | Chờ 9 bước (`-9`) | (1, 12) | (1, 12) | Dự kiến đứng yên tại (1, 12); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(1, 12)) | 51 |
| 24-25 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 50 |
| 26-27 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 48 |
| 28-29 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 47 |
| 30 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 45 |
| 31-33 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 43 |
| 34 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 41 |
| 35 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 39 |
| 36-37 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 38 |
| 38-39 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 37 |
| 40-41 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 2)) | 36 |
| 42-43 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 35 |
| 44-45 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 34 |
| 46-47 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 33 |
| 48-49 | Chờ 2 bước (`-2`) | (3, 5) | (3, 5) | Dự kiến đứng yên tại (3, 5); hướng tới tọa độ (3, 5) | 33 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (9, 11) (ô=251)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 9)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 0, 1, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 37 |
| 2 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 35 |
| 3-4 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 34 |
| 5 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 51 |
| 6 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 49 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 48 |
| 9-10 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 47 |
| 11-13 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 45 |
| 14-16 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 43 |
| 17-18 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 42 |
| 19-20 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 20)) | 41 |
| 21-22 | Di chuyển hướng 1 (`1`) | (15, 20) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 40 |
| 23-25 | Di chuyển hướng 1 (`1`) | (16, 19) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 38 |
| 26 | Di chuyển hướng 1 (`1`) | (16, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 36 |
| 27-29 | Di chuyển hướng 1 (`1`) | (17, 17) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 34 |
| 30 | Di chuyển hướng 1 (`1`) | (17, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 32 |
| 31-32 | Di chuyển hướng 1 (`1`) | (18, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 31 |
| 33-34 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 30 |
| 35-37 | Di chuyển hướng 1 (`1`) | (19, 13) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 28 |
| 38-40 | Di chuyển hướng 1 (`1`) | (19, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 26 |
| 41 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 51 |
| 42-44 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 10)) | 49 |
| 45-46 | Di chuyển hướng 0 (`0`) | (21, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 48 |
| 47 | Di chuyển hướng 1 (`1`) | (21, 9) | (21, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 8)) | 46 |
| 48-49 | Di chuyển hướng 4 (`4`) | (21, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 45 |

