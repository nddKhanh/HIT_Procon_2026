# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 48
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (19, 13) (ô=357)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 15)
- Mảng hành động đã gửi server: `[-36, 3, 3, 3, 2, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-35 | Chờ 36 bước (`-36`) | (19, 13) | (19, 13) | Dự kiến đứng yên tại (19, 13); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 51 |
| 36-37 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 50 |
| 38-40 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 48 |
| 41 | Di chuyển hướng 3 (`3`) | (20, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 46 |
| 42-44 | Di chuyển hướng 2 (`2`) | (20, 16) | (21, 16) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(21, 16)) | 44 |
| 45-46 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 43 |
| 47 | Chờ 1 bước (`-1`) | (21, 15) | (21, 15) | Dự kiến đứng yên tại (21, 15); hướng tới tọa độ (21, 15) | 43 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 2) (ô=61)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[2, 1, 1, 3, 4, 4, 5, 4, 0, -1, 2, 3, 3, 4, 5, 4, 3, 4, 3, 3, 4, 4, 4, 4, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 16 |
| 2-3 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 15 |
| 4-6 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 13 |
| 7-8 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 12 |
| 9-10 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 11 |
| 11-13 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 9 |
| 14 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 7 |
| 15 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 4)) | 5 |
| 16-17 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 18 | Chờ 1 bước (`-1`) | (9, 3) | (9, 3) | Dự kiến đứng yên tại (9, 3); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 19-20 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 50 |
| 21 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 48 |
| 22-24 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 46 |
| 25 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 44 |
| 26-27 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 43 |
| 28 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 41 |
| 29-31 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 39 |
| 32 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 37 |
| 33-34 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 36 |
| 35-36 | Di chuyển hướng 3 (`3`) | (9, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 35 |
| 37-38 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 34 |
| 39 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 32 |
| 40-41 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 31 |
| 42 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 29 |
| 43-44 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 28 |
| 45-46 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 27 |
| 47 | Chờ 1 bước (`-1`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 27 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (22, 8) (ô=230)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 5)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 0, 0, 1, -23, 3, 2, 1, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (22, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 11 |
| 2 | Di chuyển hướng 5 (`5`) | (22, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 9 |
| 3-5 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 7 |
| 6-8 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 5 |
| 9 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 3 |
| 10-11 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 2 |
| 12-13 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 1 |
| 14-36 | Chờ 23 bước (`-23`) | (18, 4) | (18, 4) | Dự kiến đứng yên tại (18, 4); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 51 |
| 37-38 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 51 |
| 39-41 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 42-44 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(20, 4)) | 49 |
| 45-46 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 47 | Chờ 1 bước (`-1`) | (20, 5) | (20, 5) | Dự kiến đứng yên tại (20, 5); hướng tới tọa độ (20, 5) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=315)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 6)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 0, 1, 1, 1, 5, 5, 0, 1, 1, 1, 0, 2, 1, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 49 |
| 3-4 | Di chuyển hướng 4 (`4`) | (3, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 48 |
| 5-7 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 46 |
| 8-10 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 44 |
| 11-12 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 43 |
| 13 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 41 |
| 14-15 | Di chuyển hướng 1 (`1`) | (1, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 40 |
| 16-18 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 38 |
| 19-20 | Di chuyển hướng 5 (`5`) | (2, 12) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 37 |
| 21-23 | Di chuyển hướng 5 (`5`) | (1, 12) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 35 |
| 24-25 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 34 |
| 26-28 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 32 |
| 29-30 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 31 |
| 31-32 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 30 |
| 33-35 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 28 |
| 36-37 | Di chuyển hướng 2 (`2`) | (1, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 27 |
| 38-40 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 25 |
| 41-43 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 23 |
| 44-45 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 22 |
| 46-47 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 21 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 6) (ô=161)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 14)
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 3, 3, 2, 3, 3, 1, 1, 0, 2, 3, 3, 2, 3, 3, 3, 2, 2, 1, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 49 |
| 3-4 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 48 |
| 5 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 46 |
| 6-7 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 45 |
| 8-10 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 9)) | 43 |
| 11-12 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 42 |
| 13-14 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 41 |
| 15 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 39 |
| 16 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 37 |
| 17-18 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 51 |
| 19-20 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 50 |
| 21-23 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 48 |
| 24-25 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 47 |
| 26-27 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 46 |
| 28 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 44 |
| 29-31 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 42 |
| 32-33 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 41 |
| 34-36 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 39 |
| 37 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(16, 14)) | 37 |
| 38-39 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 36 |
| 40-42 | Di chuyển hướng 2 (`2`) | (17, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 34 |
| 43-45 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 51 |
| 46-47 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 50 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (18, 4) (ô=122)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 0, 0, 0, 4, 4, 4, 5, 5, 5, 0, 5, 0, 5, 5, 5, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 35 |
| 2-3 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 34 |
| 4-6 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 32 |
| 7-9 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 30 |
| 10-11 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 29 |
| 12-13 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 28 |
| 14-15 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 27 |
| 16 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 25 |
| 17-18 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 24 |
| 19-20 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 23 |
| 21-23 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 21 |
| 24-25 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 20 |
| 26 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 18 |
| 27-28 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 17 |
| 29-31 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 15 |
| 32-33 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 14 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 13 |
| 36 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 11 |
| 37-39 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 9 |
| 40-41 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 8 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 7 |
| 44-45 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 6 |
| 46-47 | Chờ 2 bước (`-2`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 6 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (5, 6) (ô=161)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 5)
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 1, -8, 2, 2, 2, 1, 2, 1, 2, 2, 3, 3, 3, 2, 3, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 51 |
| 3 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 51 |
| 4-5 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 51 |
| 6-7 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 51 |
| 8-9 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 10-17 | Chờ 8 bước (`-8`) | (9, 3) | (9, 3) | Dự kiến đứng yên tại (9, 3); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 51 |
| 18-19 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 51 |
| 20 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 21 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 51 |
| 22-23 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 51 |
| 24 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 51 |
| 25 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 51 |
| 26-28 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 51 |
| 29 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 51 |
| 30 | Di chuyển hướng 3 (`3`) | (16, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 51 |
| 31 | Di chuyển hướng 3 (`3`) | (16, 2) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 51 |
| 32-34 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 51 |
| 35-36 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 51 |
| 37-38 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 51 |
| 39-41 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 42-47 | Chờ 6 bước (`-6`) | (20, 5) | (20, 5) | Dự kiến đứng yên tại (20, 5); hướng tới tọa độ (20, 5) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (3, 12) (ô=315)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(19, 13))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(19, 13))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 51 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 51 |
| 5 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 51 |
| 6-7 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 51 |
| 8-9 | Di chuyển hướng 1 (`1`) | (7, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 51 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 51 |
| 12-14 | Di chuyển hướng 2 (`2`) | (9, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 51 |
| 15-16 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 51 |
| 17 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 51 |
| 18-19 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 51 |
| 20-21 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 51 |
| 22-24 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 51 |
| 25-26 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 51 |
| 27-29 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 51 |
| 30-32 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 51 |
| 33 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 51 |
| 34 | Di chuyển hướng 3 (`3`) | (18, 12) | (19, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 51 |
| 35-47 | Chờ 13 bước (`-13`) | (19, 13) | (19, 13) | Dự kiến đứng yên tại (19, 13); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 51 |

