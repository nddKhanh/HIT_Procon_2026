# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 43
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 26 | #2 | #6 | (17, 14) | 32 | 49 |
| 28 | #0 | #7 | (1, 12) | 27 | 49 |
| 32 | #4 | #6 | (18, 14) | 28 | 49 |
| 40 | #1 | #7 | (1, 12) | 20 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 17) (ô=379)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 16)
- Mảng hành động đã gửi server: `[2, 0, 2, 2, 1, 0, 0, 0, 5, 5, 4, 4, 4, 0, 0, 0, 4, 4, 4, 3, 4, 3, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 48 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 47 |
| 4-5 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 46 |
| 6 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 44 |
| 7-8 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 43 |
| 9-10 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 42 |
| 11 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 40 |
| 12 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 38 |
| 13-14 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 37 |
| 15-16 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 36 |
| 17-18 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 35 |
| 19 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 33 |
| 20-21 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 32 |
| 22-23 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 31 |
| 24-26 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 29 |
| 27 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 49 |
| 28-29 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 48 |
| 30-31 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 47 |
| 32 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến đến điểm hẹn tọa độ (0, 15) | 45 |
| 33 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 43 |
| 34-36 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 41 |
| 37-38 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(0, 18)) | 40 |
| 39-40 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 39 |
| 41-42 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 38 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 2) (ô=55)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 14)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 4, 5, 5, 5, 4, 5, 5, 0, 3, 3, 4, 3, 4, 3, 4, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 48 |
| 2-4 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 46 |
| 5 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 44 |
| 6-8 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 42 |
| 9-10 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 41 |
| 11 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 39 |
| 12-14 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 37 |
| 15-16 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 36 |
| 17-18 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 35 |
| 19 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 33 |
| 20-21 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(2, 5)) | 32 |
| 22-23 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 31 |
| 24-25 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 4)) | 30 |
| 26-27 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 29 |
| 28-29 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 6)) | 28 |
| 30-31 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 27 |
| 32 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 25 |
| 33-34 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 24 |
| 35-36 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 23 |
| 37-38 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 22 |
| 39 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 49 |
| 40-41 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 48 |
| 42 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 46 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 17) (ô=391)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 10)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 4, 1, 0, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 5, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (17, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 48 |
| 2-4 | Di chuyển hướng 2 (`2`) | (18, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 46 |
| 5-6 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 45 |
| 7 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 17)) | 43 |
| 8-9 | Di chuyển hướng 3 (`3`) | (21, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 42 |
| 10-11 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 19)) | 41 |
| 12-13 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 40 |
| 14-15 | Di chuyển hướng 0 (`0`) | (21, 18) | (21, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 17)) | 39 |
| 16-17 | Di chuyển hướng 5 (`5`) | (21, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 38 |
| 18 | Di chuyển hướng 5 (`5`) | (20, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 36 |
| 19-20 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 35 |
| 21-23 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(18, 15)) | 33 |
| 24-25 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 49 |
| 26-28 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 47 |
| 29 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 45 |
| 30-31 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 44 |
| 32 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 42 |
| 33 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 12)) | 40 |
| 34-35 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 39 |
| 36 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 37 |
| 37-39 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 35 |
| 40-41 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 34 |
| 42 | Chờ 1 bước (`-1`) | (10, 10) | (10, 10) | Dự kiến đứng yên tại (10, 10); hướng tới tọa độ (10, 10) | 34 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (19, 7) (ô=173)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 10)
- Mảng hành động đã gửi server: `[0, 5, 5, 0, 5, 0, 0, 0, 5, 3, 2, 3, 3, 2, 3, 4, 4, 3, 5, 5, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 48 |
| 2-4 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 46 |
| 5-7 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 44 |
| 8-9 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 43 |
| 10 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 41 |
| 11-12 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 40 |
| 13 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 38 |
| 14 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 36 |
| 15-17 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 2)) | 34 |
| 18-19 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 33 |
| 20-22 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 31 |
| 23 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 29 |
| 24 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 27 |
| 25-26 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 26 |
| 27 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 24 |
| 28-29 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 23 |
| 30-32 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 21 |
| 33-34 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(16, 9)) | 20 |
| 35-36 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 19 |
| 37-39 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 17 |
| 40-41 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 16 |
| 42 | Chờ 1 bước (`-1`) | (14, 10) | (14, 10) | Dự kiến đứng yên tại (14, 10); hướng tới tọa độ (14, 10) | 16 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 11) (ô=257)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(21, 10))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(21, 10))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 3, 4, 1, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 48 |
| 2-3 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 47 |
| 4 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 45 |
| 5-6 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 44 |
| 7-8 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 43 |
| 9 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 41 |
| 10-12 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 39 |
| 13-14 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 38 |
| 15-17 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 36 |
| 18-19 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 35 |
| 20-22 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 33 |
| 23-24 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 32 |
| 25-26 | Di chuyển hướng 2 (`2`) | (16, 15) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 31 |
| 27-29 | Di chuyển hướng 2 (`2`) | (17, 15) | (18, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(18, 15)) | 29 |
| 30-31 | Di chuyển hướng 1 (`1`) | (18, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 49 |
| 32-34 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 47 |
| 35-37 | Di chuyển hướng 1 (`1`) | (19, 13) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 45 |
| 38-40 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 43 |
| 41 | Di chuyển hướng 1 (`1`) | (20, 12) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 41 |
| 42 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(21, 10)) | 39 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 11) (ô=255)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 17)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 4, 4, 4, 4, 5, 5, 3, 2, 2, 2, 2, 3, 2, 2, 4, 3, 0, 1, 1, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 48 |
| 2 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 46 |
| 3-4 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 45 |
| 5-6 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 44 |
| 7-8 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 43 |
| 9 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 41 |
| 10 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 39 |
| 11-12 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 38 |
| 13-14 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 37 |
| 15 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 35 |
| 16-17 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 34 |
| 18-19 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 33 |
| 20 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 31 |
| 21 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 29 |
| 22-24 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 27 |
| 25-26 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 26 |
| 27-29 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 24 |
| 30-32 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 22 |
| 33-34 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 21 |
| 35 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 19 |
| 36-37 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 18 |
| 38 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 16 |
| 39-40 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 15 |
| 41 | Chờ 1 bước (`-1`) | (13, 17) | (13, 17) | Dự kiến đứng yên tại (13, 17); hướng tới tọa độ (13, 17) | 15 |
| 42 | Chờ 1 bước (`-1`) | (13, 17) | (13, 17) | Dự kiến đứng yên tại (13, 17); hướng tới tọa độ (13, 17) | 15 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (11, 5) (ô=121)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 14)
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 2, 2, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 49 |
| 2-4 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 49 |
| 5-7 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 49 |
| 8 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 49 |
| 9-11 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 49 |
| 12-13 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 49 |
| 14-15 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 49 |
| 16-17 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 49 |
| 18-20 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 49 |
| 21-22 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 49 |
| 23 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 49 |
| 24-26 | Di chuyển hướng 2 (`2`) | (17, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 49 |
| 27-42 | Chờ 16 bước (`-16`) | (18, 14) | (18, 14) | Dự kiến đứng yên tại (18, 14); hướng tới tọa độ (18, 14) | 49 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 5) (ô=111)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(1, 12))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(1, 12))
- Mảng hành động đã gửi server: `[3, 4, 3, 4, 3, 4, 3, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 6)) | 49 |
| 2-3 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 49 |
| 4 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 49 |
| 5-6 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 49 |
| 7-8 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 49 |
| 9-10 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 49 |
| 11 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 49 |
| 12-42 | Chờ 31 bước (`-31`) | (1, 12) | (1, 12) | Dự kiến đứng yên tại (1, 12); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 49 |

