# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 46
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 10) (ô=281)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(12, 9))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(12, 9))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 4, 5, 5, 4, 5, -9, 0, 0, 5, 0, 1, 2, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 15 |
| 3-4 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 14 |
| 5-6 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 13 |
| 7-8 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 12 |
| 9-11 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 10 |
| 12-13 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 9 |
| 14-15 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 8 |
| 16-17 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 7 |
| 18-20 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 5 |
| 21-22 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 4 |
| 23-24 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 3 |
| 25-33 | Chờ 9 bước (`-9`) | (11, 12) | (11, 12) | Dự kiến đứng yên tại (11, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 34-35 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 51 |
| 36 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 51 |
| 37 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 49 |
| 38-39 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 48 |
| 40-41 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 47 |
| 42 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 45 |
| 43 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 51 |
| 44-45 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 50 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 1) (ô=27)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Mảng hành động đã gửi server: `[1, 3, 2, 2, 2, 3, 4, 3, 3, 3, 2, 3, 3, 3, -1, 1, 2, 1, 0, 1, 0, 0, 5, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 19 |
| 3-4 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 18 |
| 5-6 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 17 |
| 7-8 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 16 |
| 9-10 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 15 |
| 11-13 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 13 |
| 14 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 11 |
| 15-16 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 10 |
| 17-18 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 9 |
| 19 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 7 |
| 20-21 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 6 |
| 22 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 4 |
| 23-24 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 3 |
| 25-27 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 51 |
| 28 | Chờ 1 bước (`-1`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 51 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 50 |
| 31 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 48 |
| 32 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 46 |
| 33-35 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 44 |
| 36-37 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 43 |
| 38 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 41 |
| 39-41 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 39 |
| 42 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 37 |
| 43-44 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 36 |
| 45 | Chờ 1 bước (`-1`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 36 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 14) (ô=383)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 4, 4, 5, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (19, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 17 |
| 3-5 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 15 |
| 6-8 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 14)) | 13 |
| 9-10 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 12 |
| 11 | Di chuyển hướng 5 (`5`) | (16, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 10 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 15) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 9 |
| 14-16 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 7 |
| 17-18 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 6 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 5 |
| 21-23 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 3 |
| 24-25 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 2 |
| 26-27 | Di chuyển hướng 4 (`4`) | (9, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 1 |
| 28-29 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 0 |
| 30-45 | Chờ 16 bước (`-16`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 7) (ô=183)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 6)
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 3, 3, 3, 4, 3, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 50 |
| 2-4 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 48 |
| 5-6 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 47 |
| 7-8 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 46 |
| 9-11 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 44 |
| 12-13 | Di chuyển hướng 3 (`3`) | (0, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 43 |
| 14-16 | Di chuyển hướng 3 (`3`) | (1, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 41 |
| 17-18 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 40 |
| 19 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 38 |
| 20-21 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 37 |
| 22 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 35 |
| 23-24 | Di chuyển hướng 1 (`1`) | (1, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 34 |
| 25-27 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 32 |
| 28-29 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 31 |
| 30-32 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 29 |
| 33 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 27 |
| 34-35 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 26 |
| 36-38 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 24 |
| 39-41 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 22 |
| 42-43 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 21 |
| 44-45 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 20 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (17, 4) (ô=121)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 9)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 0, 0, 0, 4, 4, 5, -1, 4, 3, 4, 3, 2, 3, 3, 3, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 14 |
| 2-4 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 12 |
| 5-7 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 10 |
| 8-9 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 9 |
| 10-11 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 8 |
| 12-13 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 50 |
| 14 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 48 |
| 15-16 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 47 |
| 17-18 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 46 |
| 19-21 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 44 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 43 |
| 24 | Chờ 1 bước (`-1`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 43 |
| 25-26 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 42 |
| 27-28 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 4)) | 41 |
| 29-30 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 40 |
| 31-33 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 38 |
| 34 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 36 |
| 35-36 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 35 |
| 37-39 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 33 |
| 40-42 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 31 |
| 43-44 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 51 |
| 45 | Chờ 1 bước (`-1`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); hướng tới tọa độ (11, 9) | 51 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (11, 0) (ô=11)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 5)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 2, 3, 4, 4, 5, 5, 5, 0, 5, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 50 |
| 2-3 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 49 |
| 4 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 47 |
| 5-6 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 46 |
| 7-8 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 45 |
| 9-10 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 44 |
| 11-13 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 42 |
| 14-16 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 40 |
| 17-18 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 39 |
| 19-20 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 38 |
| 21-23 | Di chuyển hướng 2 (`2`) | (19, 3) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 36 |
| 24-26 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(20, 4)) | 34 |
| 27-28 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 33 |
| 29-31 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 31 |
| 32 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 29 |
| 33-34 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 28 |
| 35 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 26 |
| 36-37 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 51 |
| 38-40 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 49 |
| 41-43 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 51 |
| 44-45 | Chờ 2 bước (`-2`) | (16, 5) | (16, 5) | Dự kiến đứng yên tại (16, 5); hướng tới tọa độ (16, 5) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (11, 0) (ô=11)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 5)
- Mảng hành động đã gửi server: `[4, 4, 5, 3, 2, 2, 2, 3, 2, 3, 2, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 51 |
| 2-4 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 51 |
| 5-6 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 51 |
| 7-8 | Di chuyển hướng 3 (`3`) | (9, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 51 |
| 9 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 10 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 51 |
| 11-12 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 51 |
| 13-14 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 51 |
| 15-16 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 51 |
| 17-18 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 51 |
| 19-21 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 51 |
| 22-45 | Chờ 24 bước (`-24`) | (16, 5) | (16, 5) | Dự kiến đứng yên tại (16, 5); hướng tới tọa độ (16, 5) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 7) (ô=183)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 9)
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 2, 2, 2, 2, -5, 3, 2, 3, 3, 0, 0, 1, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 51 |
| 2-4 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 51 |
| 5-6 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 51 |
| 7-9 | Di chuyển hướng 2 (`2`) | (3, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 51 |
| 10-12 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 51 |
| 13-14 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 51 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 51 |
| 17-19 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 51 |
| 20-22 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 51 |
| 23-27 | Chờ 5 bước (`-5`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 51 |
| 28-29 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 51 |
| 30-31 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 51 |
| 32 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 51 |
| 33 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 34-35 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 51 |
| 36 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 51 |
| 37 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 51 |
| 38-45 | Chờ 8 bước (`-8`) | (11, 9) | (11, 9) | Dự kiến đứng yên tại (11, 9); hướng tới tọa độ (11, 9) | 51 |

