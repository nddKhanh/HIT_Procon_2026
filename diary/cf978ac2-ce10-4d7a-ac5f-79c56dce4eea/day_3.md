# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 50
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #1 | #6 | (8, 16) | 49 | 51 |
| 5 | #1 | #6 | (8, 15) | 49 | 51 |
| 9 | #2 | #6 | (6, 14) | 30 | 51 |
| 13 | #3 | #6 | (4, 12) | 1 | 51 |
| 13 | #5 | #6 | (4, 12) | 40 | 51 |
| 23 | #4 | #6 | (5, 17) | 0 | 51 |
| 43 | #1 | #6 | (3, 15) | 30 | 51 |
| 49 | #2 | #6 | (3, 15) | 25 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (19, 8) (ô=219)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=24, tọa độ=(16, 10))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=24, tọa độ=(16, 10))
- Mảng hành động đã gửi server: `[0, 5, 4, 4, 4, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 5 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 7)) | 4 |
| 4-5 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 3 |
| 6-7 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 2 |
| 8-9 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 0 |
| 10-49 | Chờ 40 bước (`-40`) | (16, 10) | (16, 10) | Dự kiến đứng yên tại (16, 10); mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 17) (ô=434)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(6, 15))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(6, 15))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 2, 1, 4, 4, 3, 3, 4, 5, 5, 5, 5, 5, 0, 0, 5, 2, 1, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 51 |
| 3-4 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 5-6 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 50 |
| 7-8 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 48 |
| 9-10 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 47 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 46 |
| 13-14 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 45 |
| 15-16 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 44 |
| 17-20 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 42 |
| 21-22 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 41 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 40 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 39 |
| 27-29 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 37 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 36 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 35 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 34 |
| 36-37 | Di chuyển hướng 0 (`0`) | (5, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 33 |
| 38-40 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 31 |
| 41-42 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 51 |
| 43-44 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 50 |
| 45-46 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 49 |
| 47-48 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 48 |
| 49 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 46 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 15) (ô=381)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(3, 15))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(3, 15))
- Mảng hành động đã gửi server: `[5, 5, 1, 2, 2, 2, 2, 1, 0, 3, 2, 3, 4, 3, 4, 5, 5, 5, 5, 5, 4, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 36 |
| 2-3 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 34 |
| 4-5 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 33 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 32 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 51 |
| 9-10 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 49 |
| 11 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 47 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 45 |
| 14-15 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 44 |
| 16-17 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 43 |
| 18-19 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 42 |
| 20-21 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 41 |
| 22-25 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 39 |
| 26-27 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 38 |
| 28-29 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 37 |
| 30-31 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 36 |
| 32-34 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 34 |
| 35-36 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 33 |
| 37-38 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 32 |
| 39-40 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 31 |
| 41-42 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 30 |
| 43-44 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 29 |
| 45 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 27 |
| 46-48 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 51 |
| 49 | Chờ 1 bước (`-1`) | (3, 15) | (3, 15) | Dự kiến đứng yên tại (3, 15); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=303)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(16, 4))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(16, 4))
- Mảng hành động đã gửi server: `[2, -12, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 0, 0, 1, 1, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 1 |
| 2-13 | Chờ 12 bước (`-12`) | (4, 12) | (4, 12) | Dự kiến đứng yên tại (4, 12); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 51 |
| 14-15 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 50 |
| 16 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 48 |
| 17 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 46 |
| 18 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 44 |
| 19-20 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 42 |
| 21-22 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 40 |
| 23-24 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 38 |
| 25-26 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 36 |
| 27-28 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 34 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 32 |
| 31-32 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 31 |
| 33-34 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 30 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 28 |
| 37-38 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 27 |
| 39 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 25 |
| 40-41 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 24 |
| 42-44 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 22 |
| 45-48 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 4)) | 20 |
| 49 | Chờ 1 bước (`-1`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 4)) | 20 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (6, 15) (ô=381)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 12)
- Mảng hành động đã gửi server: `[5, 5, 5, 3, 3, 3, 1, -9, 2, 2, 2, 2, 2, 1, 0, 0, 0, 2, 1, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 9 |
| 2-3 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 7 |
| 4-5 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 6 |
| 6-7 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 5 |
| 8-10 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 3 |
| 11 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 1 |
| 12-13 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 0 |
| 14-22 | Chờ 9 bước (`-9`) | (5, 17) | (5, 17) | Dự kiến đứng yên tại (5, 17); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 51 |
| 23-24 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 50 |
| 25-26 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 49 |
| 27-28 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 48 |
| 29-30 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 47 |
| 31-33 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 45 |
| 34-35 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 44 |
| 36-37 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 43 |
| 38-39 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 42 |
| 40-43 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 40 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 39 |
| 46-47 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 38 |
| 48-49 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 37 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (8, 17) (ô=433)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(15, 11))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(15, 11))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 0, 0, 1, 4, 3, 3, 3, 2, 3, 3, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 48 |
| 2-3 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 47 |
| 4-5 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 45 |
| 6-7 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 44 |
| 8 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 42 |
| 9-12 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 51 |
| 13-14 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 50 |
| 15 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 48 |
| 16 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 46 |
| 17 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 44 |
| 18-19 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 42 |
| 20-21 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 40 |
| 22-23 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 38 |
| 24-25 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 36 |
| 26-27 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 34 |
| 28-29 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 32 |
| 30-31 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 31 |
| 32-33 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 30 |
| 34-35 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 28 |
| 36-37 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 27 |
| 38-39 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 25 |
| 40-41 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 24 |
| 42-43 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 23 |
| 44 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 21 |
| 45 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 19 |
| 46 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 17 |
| 47-49 | Chờ 3 bước (`-3`) | (15, 11) | (15, 11) | Dự kiến đứng yên tại (15, 11); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 17 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (9, 17) (ô=434)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(3, 15))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(3, 15))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 0, 0, 5, 2, 3, 4, 3, 4, 4, 5, 0, 0, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 51 |
| 3-4 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 5-6 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 51 |
| 7 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 51 |
| 8-9 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 51 |
| 12 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 51 |
| 13-14 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 51 |
| 15 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 16-17 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 51 |
| 18 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 51 |
| 19-20 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 51 |
| 21-22 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 51 |
| 23-24 | Di chuyển hướng 5 (`5`) | (5, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 51 |
| 25 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 51 |
| 26-28 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 51 |
| 29-49 | Chờ 21 bước (`-21`) | (3, 15) | (3, 15) | Dự kiến đứng yên tại (3, 15); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 51 |

