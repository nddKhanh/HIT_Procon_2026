# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 55
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 1) (ô=29)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 1, 3, 4, 4, 5, 5, 1, 5, 5, 5, 5, 0, 5, 5, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 51 |
| 2-3 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 51 |
| 4-6 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 49 |
| 7-9 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 47 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 46 |
| 12-14 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 44 |
| 15-17 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 42 |
| 18-19 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 41 |
| 20-22 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 39 |
| 23-24 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 38 |
| 25-26 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 37 |
| 27-29 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 35 |
| 30 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 33 |
| 31 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 31 |
| 32-33 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 30 |
| 34-35 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 29 |
| 36-38 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 27 |
| 39-41 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 25 |
| 42-43 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 24 |
| 44 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 22 |
| 45-47 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 20 |
| 48-49 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 19 |
| 50-51 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 18 |
| 52-53 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 17 |
| 54 | Chờ 1 bước (`-1`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 17 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 17) (ô=450)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 15)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 0, 1, 1, 1, 0, 4, 3, 3, 3, 3, 4, 4, 4, 3, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 2-3 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 50 |
| 4 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 48 |
| 5-7 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 46 |
| 8 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 44 |
| 9 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 42 |
| 10-11 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 41 |
| 12-14 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 39 |
| 15-16 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 38 |
| 17-19 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 36 |
| 20-21 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 35 |
| 22-24 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 33 |
| 25-26 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 32 |
| 27-28 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 31 |
| 29-31 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 29 |
| 32-33 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 28 |
| 34-36 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 26 |
| 37-38 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 25 |
| 39 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 23 |
| 40-42 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 21 |
| 43-44 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 20 |
| 45-47 | Di chuyển hướng 4 (`4`) | (2, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 18 |
| 48-49 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 17 |
| 50 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 15 |
| 51-52 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 51 |
| 53-54 | Chờ 2 bước (`-2`) | (2, 15) | (2, 15) | Dự kiến đứng yên tại (2, 15); hướng tới tọa độ (2, 15) | 51 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 13) (ô=357)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 14)
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 5, 5, 5, 4, 5, -1, 1, 1, 0, 5, 0, 5, 4, 3, 2, 3, 3, 2, 3, 2, 3, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 14 |
| 2 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 12 |
| 3 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 10 |
| 4-6 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 8 |
| 7-9 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 6 |
| 10-11 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 5 |
| 12-14 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 3 |
| 15-16 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 2 |
| 17-18 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 19 | Chờ 1 bước (`-1`) | (11, 12) | (11, 12) | Dự kiến đứng yên tại (11, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 20-21 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 50 |
| 22-23 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 49 |
| 24-26 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 47 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 46 |
| 29-30 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 45 |
| 31 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 43 |
| 32 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 41 |
| 33-34 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 40 |
| 35-36 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 39 |
| 37 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 37 |
| 38 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 35 |
| 39-40 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 34 |
| 41-42 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 33 |
| 43 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 31 |
| 44-46 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 29 |
| 47-49 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 27 |
| 50-51 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 14)) | 26 |
| 52-53 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 25 |
| 54 | Chờ 1 bước (`-1`) | (17, 14) | (17, 14) | Dự kiến đứng yên tại (17, 14); hướng tới tọa độ (17, 14) | 25 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 9) (ô=243)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 1)
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 4, 4, 4, 3, 0, 1, 1, 1, 1, 2, 2, 1, 1, 0, 0, 0, 0, 5, 0, 1, 0, 1, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 50 |
| 2-3 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 49 |
| 4-5 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 48 |
| 6 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 7-8 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 50 |
| 9 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 48 |
| 10-11 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 47 |
| 12-13 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 46 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 45 |
| 16-17 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 44 |
| 18-19 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 43 |
| 20 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 41 |
| 21-22 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 40 |
| 23 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 38 |
| 24-25 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 26-27 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 50 |
| 28-29 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 49 |
| 30-32 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 47 |
| 33-34 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 46 |
| 35-37 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 44 |
| 38-40 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 42 |
| 41-42 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 41 |
| 43 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 39 |
| 44-46 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 4)) | 37 |
| 47-48 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 36 |
| 49-50 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 35 |
| 51-52 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 34 |
| 53-54 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 33 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (16, 15) (ô=406)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 0, 5, 0, 0, 5, 0, 0, 0, 0, 5, 5, 5, -10, 2, 1, 1, 2, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 27 |
| 1-2 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 26 |
| 3-5 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 24 |
| 6-8 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 22 |
| 9 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 20 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 12-13 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 50 |
| 14 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 48 |
| 15 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 46 |
| 16-17 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 45 |
| 18-19 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 44 |
| 20-22 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 42 |
| 23-24 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 41 |
| 25 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 39 |
| 26-27 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 38 |
| 28-30 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 36 |
| 31-40 | Chờ 10 bước (`-10`) | (4, 6) | (4, 6) | Dự kiến đứng yên tại (4, 6); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 51 |
| 41-42 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 50 |
| 43-45 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 48 |
| 46 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 46 |
| 47-48 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 45 |
| 49-50 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 44 |
| 51-52 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 43 |
| 53-54 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 42 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (16, 6) (ô=172)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 5)
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 0, 0, 0, -8, 3, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 2, 2, 0, 1, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 9 |
| 2-4 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 7 |
| 5-7 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 5 |
| 8-9 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 4 |
| 10-11 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 3 |
| 12-13 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 2 |
| 14 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 0 |
| 15-22 | Chờ 8 bước (`-8`) | (12, 1) | (12, 1) | Dự kiến đứng yên tại (12, 1); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 51 |
| 23-24 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 50 |
| 25 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 48 |
| 26-27 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 47 |
| 28-29 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 46 |
| 30 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 44 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 43 |
| 33-35 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 41 |
| 36-37 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 40 |
| 38-39 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 39 |
| 40-42 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 37 |
| 43-45 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 35 |
| 46-47 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 34 |
| 48 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 32 |
| 49-50 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 31 |
| 51-52 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 30 |
| 53-54 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 29 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (8, 17) (ô=450)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 15)
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 1, 2, 2, -14, 5, 5, 4, 4, 4, 5, 5, 5, 4, 5, 5, 5, 1, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 2-3 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 4-5 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 51 |
| 6 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 7-8 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 51 |
| 9 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 51 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 12-25 | Chờ 14 bước (`-14`) | (11, 12) | (11, 12) | Dự kiến đứng yên tại (11, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 51 |
| 26-27 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 51 |
| 28-29 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 51 |
| 30 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 31-32 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 51 |
| 33 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 34-35 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 51 |
| 36 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 51 |
| 37-39 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 51 |
| 40-41 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 51 |
| 42 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 51 |
| 43-45 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 51 |
| 46-48 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 51 |
| 49-50 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 51 |
| 51-54 | Chờ 4 bước (`-4`) | (2, 15) | (2, 15) | Dự kiến đứng yên tại (2, 15); hướng tới tọa độ (2, 15) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (3, 1) (ô=29)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(4, 6))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(4, 6))
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 3, 2, 2, 2, 2, 1, 1, 4, 4, 5, 5, 4, 5, 5, 4, 5, 4, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 51 |
| 2-3 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 51 |
| 4-6 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 51 |
| 7 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 51 |
| 8-9 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 51 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 51 |
| 12-14 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 15-16 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 51 |
| 17 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 18 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 51 |
| 19-21 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 51 |
| 22-23 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 51 |
| 24-26 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 27 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 51 |
| 28 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 29-30 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 51 |
| 31-32 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 51 |
| 35-36 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 51 |
| 37 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 51 |
| 38-40 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 51 |
| 41-54 | Chờ 14 bước (`-14`) | (4, 6) | (4, 6) | Dự kiến đứng yên tại (4, 6); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 51 |

