# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 46
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 10) (ô=281)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(19, 13))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(19, 13))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 4, 5, 5, 4, 5, 2, 3, 2, 3, 2, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 30 |
| 3-4 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 29 |
| 5-6 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 28 |
| 7-8 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 27 |
| 9-11 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 25 |
| 12-13 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 24 |
| 14-15 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 23 |
| 16-17 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 22 |
| 18-20 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 20 |
| 21-22 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 19 |
| 23-24 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 18 |
| 25-26 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 17 |
| 27-28 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 16 |
| 29 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 14 |
| 30-32 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 12 |
| 33-35 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 10 |
| 36-37 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 14)) | 9 |
| 38-39 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 8 |
| 40-42 | Di chuyển hướng 2 (`2`) | (17, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 6 |
| 43-45 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 4 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 1) (ô=27)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Mảng hành động đã gửi server: `[1, 3, 2, 2, 2, 3, 4, 3, 3, 3, 2, 3, 3, 3, 1, 2, 1, 0, 5, 0, 1, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 49 |
| 3-4 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 48 |
| 5-6 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 47 |
| 7-8 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 46 |
| 9-10 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 45 |
| 11-13 | Di chuyển hướng 3 (`3`) | (5, 1) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 43 |
| 14 | Di chuyển hướng 4 (`4`) | (5, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 41 |
| 15-16 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 40 |
| 17-18 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 39 |
| 19 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 37 |
| 20-21 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 36 |
| 22 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 34 |
| 23-24 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 33 |
| 25-27 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 31 |
| 28-29 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 30 |
| 30 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 28 |
| 31 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 26 |
| 32-34 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 24 |
| 35-36 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 23 |
| 37 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 21 |
| 38-40 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 4)) | 19 |
| 41-42 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 18 |
| 43-44 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 17 |
| 45 | Chờ 1 bước (`-1`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 17 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (19, 14) (ô=383)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 8)
- Mảng hành động đã gửi server: `[3, 3, 2, 0, 5, 5, 5, 1, 1, 1, 1, 1, 2, 1, 1, 0, 0, 0, 0, 3, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 49 |
| 3 | Di chuyển hướng 3 (`3`) | (20, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 47 |
| 4-6 | Di chuyển hướng 2 (`2`) | (20, 16) | (21, 16) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(21, 16)) | 45 |
| 7-8 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 44 |
| 9-11 | Di chuyển hướng 5 (`5`) | (21, 15) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 42 |
| 12 | Di chuyển hướng 5 (`5`) | (20, 15) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 40 |
| 13 | Di chuyển hướng 5 (`5`) | (19, 15) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 38 |
| 14-16 | Di chuyển hướng 1 (`1`) | (18, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 36 |
| 17-19 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 34 |
| 20-21 | Di chuyển hướng 1 (`1`) | (19, 13) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 33 |
| 22 | Di chuyển hướng 1 (`1`) | (19, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 31 |
| 23-24 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 30 |
| 25-26 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 29 |
| 27-29 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 27 |
| 30-31 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 26 |
| 32-33 | Di chuyển hướng 0 (`0`) | (22, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 25 |
| 34 | Di chuyển hướng 0 (`0`) | (22, 7) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 23 |
| 35-37 | Di chuyển hướng 0 (`0`) | (21, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 21 |
| 38 | Di chuyển hướng 0 (`0`) | (21, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(20, 4)) | 19 |
| 39-40 | Di chuyển hướng 3 (`3`) | (20, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 18 |
| 41 | Di chuyển hướng 3 (`3`) | (21, 5) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 16 |
| 42-44 | Di chuyển hướng 3 (`3`) | (21, 6) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 14 |
| 45 | Di chuyển hướng 3 (`3`) | (22, 7) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 12 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 7) (ô=183)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 12)
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 3, 3, 3, 4, 3, -14, 1, 1, 1, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 21 |
| 2-4 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 19 |
| 5-6 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 18 |
| 7-8 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 17 |
| 9-11 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 15 |
| 12-13 | Di chuyển hướng 3 (`3`) | (0, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 14 |
| 14-16 | Di chuyển hướng 3 (`3`) | (1, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 12 |
| 17-18 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 11 |
| 19 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 9 |
| 20-33 | Chờ 14 bước (`-14`) | (1, 16) | (1, 16) | Dự kiến đứng yên tại (1, 16); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 51 |
| 34-35 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 51 |
| 36-38 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 51 |
| 39-41 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 51 |
| 42-43 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 51 |
| 44-45 | Chờ 2 bước (`-2`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); hướng tới tọa độ (3, 12) | 51 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (17, 4) (ô=121)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 6)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 0, 0, 0, 4, 4, 5, 4, 4, 4, 4, 5, 5, 5, -4, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 28 |
| 2-4 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 26 |
| 5-7 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 24 |
| 8-9 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 23 |
| 10-11 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 22 |
| 12-13 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 21 |
| 14 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 19 |
| 15-16 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 18 |
| 17-18 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 17 |
| 19-21 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 15 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 14 |
| 24-25 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 13 |
| 26-27 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 12 |
| 28-29 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 11 |
| 30-32 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 9 |
| 33 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 7 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 6 |
| 36-38 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 4 |
| 39-42 | Chờ 4 bước (`-4`) | (4, 6) | (4, 6) | Dự kiến đứng yên tại (4, 6); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 51 |
| 43-44 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 51 |
| 45 | Chờ 1 bước (`-1`) | (5, 6) | (5, 6) | Dự kiến đứng yên tại (5, 6); hướng tới tọa độ (5, 6) | 51 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (11, 0) (ô=11)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(18, 4))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(18, 4))
- Mảng hành động đã gửi server: `[3, 5, 5, 4, 4, 2, 3, 3, 4, 3, 3, 3, -1, 1, 1, 2, 2, 1, 2, 2, 2, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 20 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 19 |
| 4-6 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 17 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 1) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 16 |
| 9-10 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 15 |
| 11-12 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 14 |
| 13 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 12 |
| 14-16 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 10 |
| 17 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 8 |
| 18-19 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 7 |
| 20-22 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 5 |
| 23-25 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 51 |
| 26 | Chờ 1 bước (`-1`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 51 |
| 27-28 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 50 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 49 |
| 31 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 47 |
| 32 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 45 |
| 33-35 | Di chuyển hướng 1 (`1`) | (15, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 43 |
| 36-38 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 41 |
| 39-40 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 40 |
| 41 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 38 |
| 42-43 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 37 |
| 44-45 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 36 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (19, 14) (ô=383)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 6)
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 0, 5, 0, 5, 5, 5, -5, 5, 0, 5, 5, 0, 0, 5, 5, 5, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (19, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 51 |
| 3-4 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 51 |
| 5 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 51 |
| 6 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 51 |
| 7-9 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 51 |
| 10-11 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 51 |
| 12-13 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 51 |
| 14-15 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 51 |
| 16-18 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 51 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 51 |
| 21-25 | Chờ 5 bước (`-5`) | (12, 9) | (12, 9) | Dự kiến đứng yên tại (12, 9); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 51 |
| 26-27 | Di chuyển hướng 5 (`5`) | (12, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 51 |
| 28-29 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 51 |
| 30 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 51 |
| 31 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 51 |
| 32-34 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 51 |
| 35-36 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 51 |
| 37 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 51 |
| 38-39 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 51 |
| 40-42 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 51 |
| 43-44 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 51 |
| 45 | Chờ 1 bước (`-1`) | (5, 6) | (5, 6) | Dự kiến đứng yên tại (5, 6); hướng tới tọa độ (5, 6) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 1) (ô=27)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 12)
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 3, 3, 3, 3, 4, 3, 3, 4, 4, 4, 3, 1, 1, 1, 1, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 51 |
| 3 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 51 |
| 4 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 51 |
| 5-7 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 51 |
| 8-10 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 51 |
| 11-13 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 51 |
| 14-15 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 51 |
| 16-18 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 51 |
| 19-20 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 51 |
| 21 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 51 |
| 22-24 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 51 |
| 25-26 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 51 |
| 27-29 | Di chuyển hướng 4 (`4`) | (2, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 51 |
| 30-31 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 51 |
| 32 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 51 |
| 33-34 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 51 |
| 35-37 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 51 |
| 38-40 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 51 |
| 41-42 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 51 |
| 43-45 | Chờ 3 bước (`-3`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); hướng tới tọa độ (3, 12) | 51 |

