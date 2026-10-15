# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 46
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 13 | #2 | #6 | (8, 6) | 39 | 53 |
| 17 | #0 | #5 | (17, 3) | 28 | 53 |
| 20 | #2 | #6 | (8, 6) | 48 | 53 |
| 21 | #0 | #5 | (17, 3) | 51 | 53 |
| 26 | #1 | #6 | (8, 6) | 31 | 53 |
| 26 | #2 | #6 | (8, 6) | 47 | 53 |
| 36 | #4 | #5 | (17, 3) | 21 | 53 |
| 41 | #1 | #6 | (8, 6) | 41 | 53 |
| 42 | #0 | #5 | (17, 3) | 39 | 53 |
| 42 | #3 | #6 | (8, 6) | 14 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 10) (ô=267)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=25, tọa độ=(15, 5))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=25, tọa độ=(15, 5))
- Mảng hành động đã gửi server: `[1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 0, 1, 1, 3, 0, 1, 0, 0, 4, 5, 3, 2, 2, 2, 5, 4, 4, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 52 |
| 2 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 50 |
| 3-4 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 49 |
| 5-6 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 48 |
| 7 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 46 |
| 8 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 44 |
| 9 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 42 |
| 10 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 40 |
| 11 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 38 |
| 12 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 36 |
| 13 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 34 |
| 14 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 32 |
| 15 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 30 |
| 16 | Di chuyển hướng 1 (`1`) | (16, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 53 |
| 17-18 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 4)) | 52 |
| 19-20 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 53 |
| 21-22 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 2)) | 52 |
| 23-24 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 1)) | 51 |
| 25-26 | Di chuyển hướng 0 (`0`) | (17, 1) | (16, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 0)) | 50 |
| 27-28 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 49 |
| 29-31 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 1)) | 47 |
| 32-33 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 46 |
| 34 | Di chuyển hướng 2 (`2`) | (15, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 44 |
| 35 | Di chuyển hướng 2 (`2`) | (16, 2) | (17, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 2)) | 42 |
| 36-37 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 2)) | 41 |
| 38-39 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 2)) | 40 |
| 40-41 | Di chuyển hướng 4 (`4`) | (17, 2) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 53 |
| 42-43 | Di chuyển hướng 4 (`4`) | (17, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 52 |
| 44 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 50 |
| 45 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(15, 5)) | 48 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (4, 6) (ô=160)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(7, 2))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(7, 2))
- Mảng hành động đã gửi server: `[2, 3, 0, 0, 5, 5, 2, 1, 1, 0, 3, 2, 3, 3, 3, 2, 2, 1, 1, 4, 4, 4, 3, 0, 0, 0, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 52 |
| 2 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 50 |
| 3-4 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 49 |
| 5 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 47 |
| 6 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 45 |
| 7-8 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 5)) | 44 |
| 9-10 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 43 |
| 11-12 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 42 |
| 13 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 3)) | 40 |
| 14-15 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 2)) | 39 |
| 16-17 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 3)) | 38 |
| 18-19 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 37 |
| 20 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 35 |
| 21 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 33 |
| 22-23 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 32 |
| 24-25 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 53 |
| 26 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 51 |
| 27-28 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 50 |
| 29-30 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 49 |
| 31-32 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 48 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 47 |
| 35-36 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 46 |
| 37 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 44 |
| 38-39 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 43 |
| 40 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 53 |
| 41 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 51 |
| 42 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 49 |
| 43 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 47 |
| 44-45 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 46 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 12) (ô=314)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(3, 13))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(3, 13))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 4, 5, 5, 0, 2, 3, 3, 3, 4, 5, 4, 5, 5, 4, 4, 3, 3, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 52 |
| 2 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 11)) | 50 |
| 3-4 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 49 |
| 5-6 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 48 |
| 7 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 46 |
| 8 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 44 |
| 9-10 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 43 |
| 11 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 41 |
| 12 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 53 |
| 13 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 51 |
| 14-15 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 50 |
| 16-17 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 49 |
| 18-19 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 53 |
| 20 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 51 |
| 21-22 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 50 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 49 |
| 25 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 53 |
| 26 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 51 |
| 27 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 49 |
| 28-29 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 48 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 47 |
| 32 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 45 |
| 33-34 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 44 |
| 35-36 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 43 |
| 37 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 41 |
| 38 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 39 |
| 39 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 37 |
| 40-41 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 36 |
| 42-43 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 35 |
| 44 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 33 |
| 45 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 13)) | 31 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 13) (ô=340)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(10, 5))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(10, 5))
- Mảng hành động đã gửi server: `[2, 5, 5, 1, 1, 1, 2, 3, 3, 3, 3, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0, 2, 3, 3, 3, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 13)) | 52 |
| 2-3 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 51 |
| 4-5 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 13)) | 50 |
| 6-7 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 49 |
| 8-9 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 48 |
| 10 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 10)) | 46 |
| 11-12 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 45 |
| 13-14 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 11)) | 44 |
| 15-16 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 43 |
| 17 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 41 |
| 18-19 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 40 |
| 20-21 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 39 |
| 22-23 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 38 |
| 24 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 36 |
| 25 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 34 |
| 26 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 32 |
| 27 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 30 |
| 28 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 28 |
| 29-30 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 27 |
| 31 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 25 |
| 32 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 23 |
| 33 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 3)) | 21 |
| 34-35 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 20 |
| 36 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 18 |
| 37 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 16 |
| 38-39 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 15 |
| 40-41 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 53 |
| 42 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 51 |
| 43-44 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 50 |
| 45 | Chờ 1 bước (`-1`) | (10, 5) | (10, 5) | Dự kiến đứng yên tại (10, 5); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 50 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 10) (ô=271)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=24, tọa độ=(16, 0))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=24, tọa độ=(16, 0))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 1, 1, 1, 3, 3, 3, 2, 2, 2, 2, 1, 0, 5, 2, 2, 2, 0, 0, 1, 2, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 52 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 51 |
| 4-5 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 50 |
| 6-7 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 49 |
| 8 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 47 |
| 9-10 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 46 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 45 |
| 13-14 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 44 |
| 15-16 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 43 |
| 17-18 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 42 |
| 19 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 40 |
| 20 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 38 |
| 21 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 36 |
| 22 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 34 |
| 23 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 32 |
| 24 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 30 |
| 25 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(15, 5)) | 28 |
| 26-27 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 27 |
| 28 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 25 |
| 29-31 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(18, 5)) | 23 |
| 32-33 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 4)) | 22 |
| 34-35 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 53 |
| 36-37 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 2)) | 52 |
| 38-39 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 2)) | 51 |
| 40-41 | Di chuyển hướng 0 (`0`) | (18, 2) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 50 |
| 42-43 | Di chuyển hướng 0 (`0`) | (18, 1) | (17, 0) | Dự kiến đến điểm hẹn tọa độ (17, 0) | 49 |
| 44 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 0)) | 47 |
| 45 | Chờ 1 bước (`-1`) | (16, 0) | (16, 0) | Dự kiến đứng yên tại (16, 0); mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 0)) | 47 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (19, 5) (ô=149)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 3)
- Mảng hành động đã gửi server: `[5, 0, 0, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(18, 5)) | 53 |
| 2-3 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 4)) | 53 |
| 4-5 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 53 |
| 6-45 | Chờ 40 bước (`-40`) | (17, 3) | (17, 3) | Dự kiến đứng yên tại (17, 3); hướng tới tọa độ (17, 3) | 53 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 8) (ô=215)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 6)
- Mảng hành động đã gửi server: `[1, 1, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 53 |
| 2 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 53 |
| 3-45 | Chờ 43 bước (`-43`) | (8, 6) | (8, 6) | Dự kiến đứng yên tại (8, 6); hướng tới tọa độ (8, 6) | 53 |

