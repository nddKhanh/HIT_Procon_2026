# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 51
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #3 | #6 | (15, 11) | 2 | 51 |
| 32 | #0 | #6 | (16, 10) | 0 | 51 |
| 34 | #0 | #6 | (15, 10) | 50 | 51 |
| 43 | #3 | #6 | (11, 6) | 39 | 51 |
| 49 | #0 | #6 | (11, 6) | 38 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 10) (ô=266)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 6)
- Mảng hành động đã gửi server: `[-32, 5, 4, 0, 0, 5, 0, 0, 1, 0, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-31 | Chờ 32 bước (`-32`) | (16, 10) | (16, 10) | Dự kiến đứng yên tại (16, 10); mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 51 |
| 32-33 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 34-35 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 50 |
| 36-37 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 49 |
| 38 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 47 |
| 39 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 45 |
| 40 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 43 |
| 41-42 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 42 |
| 43-44 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 41 |
| 45-46 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 39 |
| 47-48 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 51 |
| 49-50 | Chờ 2 bước (`-2`) | (11, 6) | (11, 6) | Dự kiến đứng yên tại (11, 6); hướng tới tọa độ (11, 6) | 51 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (6, 15) (ô=381)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(7, 17))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(7, 17))
- Mảng hành động đã gửi server: `[5, 5, 5, 2, 1, 0, 0, 2, 2, 2, 2, 2, 3, 2, 1, 4, 4, 3, 3, 4, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 45 |
| 2-3 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 43 |
| 4-5 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 42 |
| 6-7 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 41 |
| 8-9 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 40 |
| 10-11 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 39 |
| 12-14 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 12)) | 37 |
| 15-16 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 36 |
| 17-18 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 35 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 33 |
| 21-23 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 31 |
| 24-25 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 29 |
| 26-27 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 28 |
| 28-29 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 27 |
| 30-31 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 26 |
| 32-33 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 25 |
| 34-35 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 24 |
| 36-39 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 22 |
| 40-41 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 21 |
| 42-43 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 20 |
| 44-45 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 19 |
| 46-48 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 17 |
| 49-50 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 16 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 15) (ô=378)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 16)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 2, 1, 1, 2, 2, 4, 3, 4, 3, 4, 5, 5, 5, 5, 5, 4, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 50 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 49 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 48 |
| 6-9 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 46 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 44 |
| 12 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 42 |
| 13-16 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 40 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 39 |
| 19-21 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 37 |
| 22-23 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 36 |
| 24-25 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 35 |
| 26-29 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 33 |
| 30-31 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 32 |
| 32-33 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 31 |
| 34-35 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 30 |
| 36-38 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 28 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 27 |
| 41-42 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 26 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 25 |
| 45-46 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 24 |
| 47-48 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 23 |
| 49-50 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 22 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (16, 4) (ô=116)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 8)
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 2, 2, 2, 0, 5, 4, 4, 5, 4, 4, -3, 0, 0, 5, 0, 0, 1, 0, 4, 5, 5, 5, 5, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 19 |
| 2-4 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 17 |
| 5 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 15 |
| 6-7 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 14 |
| 8-9 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 13 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 12 |
| 12-13 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 11 |
| 14-15 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 10 |
| 16-17 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 7)) | 9 |
| 18-19 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 8 |
| 20-21 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 7 |
| 22 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 5 |
| 23 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 3 |
| 24-25 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 2 |
| 26-28 | Chờ 3 bước (`-3`) | (15, 11) | (15, 11) | Dự kiến đứng yên tại (15, 11); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 51 |
| 29-30 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 50 |
| 31 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 48 |
| 32 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 46 |
| 33 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 44 |
| 34-35 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 43 |
| 36-37 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 42 |
| 38-39 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 40 |
| 40-41 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 39 |
| 42-45 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 49 |
| 46 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 47 |
| 47 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 45 |
| 48 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 43 |
| 49 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 41 |
| 50 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 39 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (9, 12) (ô=309)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(3, 15))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(3, 15))
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 5, 2, 1, 1, 1, 3, 3, 3, 3, 4, 5, 5, 5, 5, 5, 0, 0, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 35 |
| 3-4 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 34 |
| 5-6 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 7 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 30 |
| 8-9 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 28 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 27 |
| 12-13 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 25 |
| 14 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 23 |
| 15-18 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 21 |
| 19-20 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 20 |
| 21-22 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 19 |
| 23-26 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 17 |
| 27-28 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 16 |
| 29-30 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 15 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 14 |
| 33-35 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 12 |
| 36-37 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 11 |
| 38-39 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 10 |
| 40-41 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 9 |
| 42-43 | Di chuyển hướng 0 (`0`) | (5, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 8 |
| 44-46 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 6 |
| 47-48 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 5 |
| 49-50 | Chờ 2 bước (`-2`) | (3, 15) | (3, 15) | Dự kiến đứng yên tại (3, 15); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 5 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (15, 11) (ô=290)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(10, 15))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(10, 15))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 5, 5, 0, 5, 3, 3, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 16 |
| 2-5 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 14 |
| 6-9 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 12 |
| 10-13 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 10 |
| 14-17 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 8 |
| 18-21 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 6 |
| 22-25 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 4 |
| 26-27 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 3 |
| 28-29 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 2 |
| 30-33 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 0 |
| 34-50 | Chờ 17 bước (`-17`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (3, 15) (ô=378)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 6)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 1, 2, 5, 5, 0, 5, 0, 0, 0, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 51 |
| 2-4 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 51 |
| 5-7 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 51 |
| 8-9 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 10 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 51 |
| 11 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 51 |
| 12 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 51 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 51 |
| 15-16 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 51 |
| 17-18 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 51 |
| 19-20 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 51 |
| 21-22 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 51 |
| 23-24 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 51 |
| 25 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 51 |
| 26 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 51 |
| 27 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 51 |
| 28-29 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 30-31 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 51 |
| 32-33 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 34-35 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 51 |
| 36 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 51 |
| 37 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 51 |
| 38 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 51 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 51 |
| 41-42 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 51 |
| 43-50 | Chờ 8 bước (`-8`) | (11, 6) | (11, 6) | Dự kiến đứng yên tại (11, 6); hướng tới tọa độ (11, 6) | 51 |

