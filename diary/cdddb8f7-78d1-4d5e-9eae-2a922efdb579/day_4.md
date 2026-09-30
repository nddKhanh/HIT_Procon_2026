# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 50
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 22 | #2 | #7 | (3, 15) | 1 | 49 |
| 24 | #1 | #6 | (21, 17) | 1 | 49 |
| 25 | #2 | #7 | (3, 14) | 48 | 49 |
| 28 | #1 | #6 | (19, 17) | 46 | 49 |
| 28 | #2 | #7 | (4, 12) | 46 | 49 |
| 30 | #1 | #6 | (18, 16) | 48 | 49 |
| 30 | #2 | #7 | (5, 12) | 48 | 49 |
| 32 | #2 | #7 | (6, 12) | 48 | 49 |
| 33 | #1 | #6 | (18, 15) | 47 | 49 |
| 35 | #1 | #6 | (17, 14) | 48 | 49 |
| 39 | #1 | #6 | (15, 14) | 45 | 49 |
| 43 | #1 | #6 | (13, 12) | 44 | 49 |
| 43 | #2 | #7 | (10, 11) | 38 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 16) (ô=359)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 19)
- Mảng hành động đã gửi server: `[5, 4, 0, 0, 5, 5, 1, 1, 1, 2, 2, 3, 3, 3, 2, 3, 3, 3, 2, 2, 4, 3, 1, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 40 |
| 2-5 | Di chuyển hướng 4 (`4`) | (6, 16) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 38 |
| 6-7 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 37 |
| 8-9 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 36 |
| 10-12 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 34 |
| 13-14 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 33 |
| 15-16 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 32 |
| 17-18 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 31 |
| 19 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 29 |
| 20-21 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 28 |
| 22-23 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 27 |
| 24-25 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 26 |
| 26 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 24 |
| 27 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 22 |
| 28-29 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 21 |
| 30 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 19 |
| 31-32 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 18 |
| 33-34 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 17 |
| 35-37 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 15 |
| 38-40 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 13 |
| 41-42 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 12 |
| 43 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 10 |
| 44-45 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 9 |
| 46-47 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 8 |
| 48-49 | Chờ 2 bước (`-2`) | (14, 19) | (14, 19) | Dự kiến đứng yên tại (14, 19); hướng tới tọa độ (14, 19) | 8 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 19) (ô=439)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(11, 10))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(11, 10))
- Mảng hành động đã gửi server: `[1, 0, -21, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 2 |
| 2-3 | Di chuyển hướng 0 (`0`) | (21, 18) | (21, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 17)) | 1 |
| 4-24 | Chờ 21 bước (`-21`) | (21, 17) | (21, 17) | Dự kiến đứng yên tại (21, 17); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 17)) | 49 |
| 25-26 | Di chuyển hướng 5 (`5`) | (21, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 48 |
| 27 | Di chuyển hướng 5 (`5`) | (20, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 49 |
| 28-29 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 49 |
| 30-32 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(18, 15)) | 49 |
| 33-34 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 49 |
| 35-37 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 47 |
| 38 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 49 |
| 39-40 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 48 |
| 41 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 46 |
| 42 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 12)) | 49 |
| 43-44 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 48 |
| 45 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 46 |
| 46-48 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 44 |
| 49 | Chờ 1 bước (`-1`) | (11, 10) | (11, 10) | Dự kiến đứng yên tại (11, 10); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 44 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 17) (ô=380)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 9)
- Mảng hành động đã gửi server: `[0, 0, 5, 5, -14, 1, 1, 1, 2, 2, 3, 3, 3, 1, 1, 1, 1, 1, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 5 |
| 2-3 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 4 |
| 4-6 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 2 |
| 7-8 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 1 |
| 9-22 | Chờ 14 bước (`-14`) | (3, 15) | (3, 15) | Dự kiến đứng yên tại (3, 15); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 49 |
| 23-24 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 49 |
| 25-26 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 48 |
| 27 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 49 |
| 28-29 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 49 |
| 30-31 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 49 |
| 32-33 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 48 |
| 34 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 46 |
| 35 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 44 |
| 36-37 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 43 |
| 38-39 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 41 |
| 40 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 39 |
| 41-42 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 49 |
| 43-44 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 48 |
| 45-46 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 47 |
| 47-48 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 46 |
| 49 | Chờ 1 bước (`-1`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); hướng tới tọa độ (12, 9) | 46 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 18) (ô=396)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(2, 5))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(2, 5))
- Mảng hành động đã gửi server: `[0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 3, 2, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 26 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 25 |
| 4-6 | Di chuyển hướng 0 (`0`) | (0, 16) | (0, 15) | Dự kiến đến điểm hẹn tọa độ (0, 15) | 23 |
| 7 | Di chuyển hướng 1 (`1`) | (0, 15) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 21 |
| 8 | Di chuyển hướng 1 (`1`) | (0, 14) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 19 |
| 9-10 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 18 |
| 11-12 | Di chuyển hướng 0 (`0`) | (1, 12) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 17 |
| 13-14 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 15 |
| 15-16 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 14 |
| 17-18 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 13 |
| 19-20 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 12 |
| 21 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 6)) | 10 |
| 22-23 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 9 |
| 24-25 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 4)) | 8 |
| 26-27 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 7 |
| 28-29 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(2, 5)) | 6 |
| 30-49 | Chờ 20 bước (`-20`) | (2, 5) | (2, 5) | Dự kiến đứng yên tại (2, 5); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(2, 5)) | 6 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 3) (ô=74)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(8, 3))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(8, 3))
- Mảng hành động đã gửi server: `[-50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-49 | Chờ 50 bước (`-50`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (21, 10) (ô=241)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(14, 9))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(14, 9))
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 0, 5, 0, 5, 5, 0, 0, 0, 5, 3, 2, 3, 3, 2, 3, 4, 4, 3, 5, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 36 |
| 2 | Di chuyển hướng 0 (`0`) | (21, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 34 |
| 3-4 | Di chuyển hướng 5 (`5`) | (20, 8) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 33 |
| 5-6 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 32 |
| 7-8 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 31 |
| 9-11 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 29 |
| 12-14 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 27 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 26 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 24 |
| 18-19 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 23 |
| 20 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 21 |
| 21 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 19 |
| 22-24 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 2)) | 17 |
| 25-26 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 16 |
| 27-29 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 14 |
| 30 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 12 |
| 31 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 10 |
| 32-33 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 9 |
| 34 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 7 |
| 35-36 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 6 |
| 37-39 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 4 |
| 40-41 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(16, 9)) | 3 |
| 42-43 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 2 |
| 44-46 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 0 |
| 47-49 | Chờ 3 bước (`-3`) | (14, 9) | (14, 9) | Dự kiến đứng yên tại (14, 9); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (15, 9) (ô=213)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(13, 12))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(13, 12))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 5, 5, 0, 0, 0, 5, 5, 5, 0, 0, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 49 |
| 3-4 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 49 |
| 5-6 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 49 |
| 7-9 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 49 |
| 10-11 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 49 |
| 12 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 49 |
| 13-15 | Di chuyển hướng 2 (`2`) | (17, 15) | (18, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(18, 15)) | 49 |
| 16-17 | Di chuyển hướng 3 (`3`) | (18, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 49 |
| 18-20 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 49 |
| 21-22 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 49 |
| 23 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 17)) | 49 |
| 24-25 | Di chuyển hướng 5 (`5`) | (21, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 49 |
| 26 | Di chuyển hướng 5 (`5`) | (20, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 49 |
| 27-28 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 49 |
| 29-31 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(18, 15)) | 49 |
| 32-33 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 49 |
| 34-36 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 49 |
| 37 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 49 |
| 38-39 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 49 |
| 40 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 49 |
| 41 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 12)) | 49 |
| 42-49 | Chờ 8 bước (`-8`) | (13, 12) | (13, 12) | Dự kiến đứng yên tại (13, 12); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 12)) | 49 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (11, 19) (ô=429)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 11)
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 1, 1, 1, 2, 2, 3, 3, 2, 1, 1, 1, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 49 |
| 2-4 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 49 |
| 5-6 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 49 |
| 7-9 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 49 |
| 10 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 49 |
| 11-14 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 49 |
| 15-16 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 49 |
| 17-18 | Di chuyển hướng 5 (`5`) | (5, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 49 |
| 19 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 49 |
| 20-21 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 49 |
| 22-23 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 49 |
| 24-25 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 49 |
| 26 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 49 |
| 27-28 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 49 |
| 29-30 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 49 |
| 31-32 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 49 |
| 33 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 49 |
| 34 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 49 |
| 35-36 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 49 |
| 37 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 49 |
| 38-39 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 49 |
| 40-49 | Chờ 10 bước (`-10`) | (10, 11) | (10, 11) | Dự kiến đứng yên tại (10, 11); hướng tới tọa độ (10, 11) | 49 |

