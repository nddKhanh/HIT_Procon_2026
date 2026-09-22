# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 53
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 2) (ô=61)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 1)
- Mảng hành động đã gửi server: `[2, 1, 1, 4, 4, 5, 4, 3, 2, 3, 4, 5, 0, 0, 5, 0, 0, 5, 0, 5, 5, 5, 0, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 30 |
| 2-3 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 29 |
| 4-6 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 27 |
| 7-8 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 26 |
| 9-11 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 24 |
| 12-13 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 23 |
| 14-15 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 22 |
| 16-17 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 4)) | 21 |
| 18-19 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 20 |
| 20-22 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 18 |
| 23 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 16 |
| 24-25 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 15 |
| 26 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 13 |
| 27-29 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 11 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 10 |
| 32-33 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 9 |
| 34-35 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 8 |
| 36-37 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 7 |
| 38 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 5 |
| 39-41 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 3 |
| 42-43 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 2 |
| 44-45 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 1 |
| 46-47 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 51 |
| 48-49 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 51 |
| 50-51 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 51 |
| 52 | Chờ 1 bước (`-1`) | (3, 1) | (3, 1) | Dự kiến đứng yên tại (3, 1); hướng tới tọa độ (3, 1) | 51 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 7) (ô=183)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[4, 3, 4, -16, 4, 3, 3, 3, 4, 3, 2, 2, 2, 3, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 3 |
| 2-4 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 1 |
| 5-6 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 0 |
| 7-22 | Chờ 16 bước (`-16`) | (0, 10) | (0, 10) | Dự kiến đứng yên tại (0, 10); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 51 |
| 23-24 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 50 |
| 25-27 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 48 |
| 28-29 | Di chuyển hướng 3 (`3`) | (0, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 47 |
| 30-32 | Di chuyển hướng 3 (`3`) | (1, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 45 |
| 33-34 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 44 |
| 35 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 42 |
| 36-37 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 41 |
| 38-40 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 39 |
| 41-43 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 37 |
| 44 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 35 |
| 45-47 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 33 |
| 48-49 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 32 |
| 50-51 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 51 |
| 52 | Chờ 1 bước (`-1`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 51 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 13) (ô=339)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(19, 13))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(19, 13))
- Mảng hành động đã gửi server: `[0, 0, 1, 2, 1, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (1, 13) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 49 |
| 3-4 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 48 |
| 5-7 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 46 |
| 8-9 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 45 |
| 10 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 43 |
| 11-12 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 42 |
| 13-15 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 40 |
| 16-18 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 38 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 37 |
| 21-22 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 36 |
| 23-24 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 35 |
| 25-26 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 34 |
| 27-28 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 33 |
| 29-31 | Di chuyển hướng 2 (`2`) | (9, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 31 |
| 32-33 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 30 |
| 34 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 28 |
| 35-36 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 27 |
| 37-38 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 26 |
| 39-41 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 24 |
| 42-43 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 23 |
| 44-46 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 21 |
| 47-49 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 19 |
| 50 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 17 |
| 51 | Di chuyển hướng 3 (`3`) | (18, 12) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 15 |
| 52 | Chờ 1 bước (`-1`) | (19, 13) | (19, 13) | Dự kiến đứng yên tại (19, 13); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 15 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 16) (ô=437)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(9, 9))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(9, 9))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 5, 0, 0, 5, 0, 5, 1, 1, 0, 5, 0, 5, 4, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 16) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 30 |
| 2-4 | Di chuyển hướng 5 (`5`) | (20, 16) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 28 |
| 5 | Di chuyển hướng 5 (`5`) | (19, 16) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 26 |
| 6 | Di chuyển hướng 5 (`5`) | (18, 16) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 24 |
| 7-9 | Di chuyển hướng 5 (`5`) | (17, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 22 |
| 10-12 | Di chuyển hướng 0 (`0`) | (16, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 20 |
| 13 | Di chuyển hướng 5 (`5`) | (16, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 18 |
| 14-15 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 17 |
| 16-18 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 15 |
| 19-21 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 13 |
| 22 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 11 |
| 23-24 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 10 |
| 25-26 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 9 |
| 27-28 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 8 |
| 29-31 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 6 |
| 32-33 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 5 |
| 34-35 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 4 |
| 36 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 2 |
| 37 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 51 |
| 38-52 | Chờ 15 bước (`-15`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 51 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 6) (ô=160)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 15)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 3, -11, 3, 2, 3, 3, 1, 1, 0, 2, 3, 3, 2, 3, 3, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 10 |
| 2-4 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 8 |
| 5-6 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 7 |
| 7 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 5 |
| 8-9 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 4 |
| 10-12 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 2 |
| 13-23 | Chờ 11 bước (`-11`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 51 |
| 24-25 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 50 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 49 |
| 28 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 47 |
| 29 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 45 |
| 30-31 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 44 |
| 32-33 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 43 |
| 34-36 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 41 |
| 37-38 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 40 |
| 39-40 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 39 |
| 41 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 37 |
| 42-44 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 35 |
| 45-46 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 34 |
| 47-49 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 32 |
| 50 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 14)) | 30 |
| 51-52 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 29 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 2) (ô=57)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 6)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 1, 3, 4, 2, 3, 2, 2, 2, 2, 2, 1, 2, 3, 4, 4, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 44 |
| 1-2 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 43 |
| 3-5 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 41 |
| 6-8 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 39 |
| 9-10 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 38 |
| 11-12 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 37 |
| 13-15 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 35 |
| 16-17 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 34 |
| 18 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 32 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 31 |
| 21-22 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 30 |
| 23-24 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 29 |
| 25-26 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 28 |
| 27-29 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 26 |
| 30-32 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 24 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 23 |
| 35-36 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 22 |
| 37-39 | Di chuyển hướng 2 (`2`) | (19, 3) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 20 |
| 40-42 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(20, 4)) | 18 |
| 43-44 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 17 |
| 45-47 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 15 |
| 48 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 13 |
| 49-50 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 12 |
| 51 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 10 |
| 52 | Chờ 1 bước (`-1`) | (16, 6) | (16, 6) | Dự kiến đứng yên tại (16, 6); hướng tới tọa độ (16, 6) | 10 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (1, 13) (ô=339)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 2, 1, 1, 1, -15, 3, 3, 4, 4, 4, 4, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 51 |
| 3-5 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 51 |
| 6-7 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 51 |
| 8-10 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 51 |
| 11-12 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 13 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 51 |
| 14-15 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 51 |
| 16-17 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 51 |
| 18-19 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 51 |
| 20-22 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 51 |
| 23-37 | Chờ 15 bước (`-15`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 51 |
| 38-39 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 51 |
| 40-41 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 51 |
| 42-43 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 51 |
| 44 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 45-46 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 51 |
| 47 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 48-49 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 50-51 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 51 |
| 52 | Chờ 1 bước (`-1`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (2, 1) (ô=28)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 1)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 3, 3, 4, 3, 4, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, -3, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 51 |
| 2-4 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 51 |
| 5 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 51 |
| 6-8 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 51 |
| 9-11 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 51 |
| 12-14 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 51 |
| 15-16 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 51 |
| 17-19 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 51 |
| 20-21 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 51 |
| 22-23 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 51 |
| 24-25 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 51 |
| 26-28 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 51 |
| 29-30 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 51 |
| 31-33 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 51 |
| 34-36 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 51 |
| 37-39 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 51 |
| 40 | Di chuyển hướng 0 (`0`) | (1, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 51 |
| 41 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 51 |
| 42-44 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 51 |
| 45-47 | Chờ 3 bước (`-3`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 51 |
| 48-49 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 51 |
| 50-51 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 51 |
| 52 | Chờ 1 bước (`-1`) | (3, 1) | (3, 1) | Dự kiến đứng yên tại (3, 1); hướng tới tọa độ (3, 1) | 51 |

