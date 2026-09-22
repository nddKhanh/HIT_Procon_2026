# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 51
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 6) (ô=161)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 5)
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 1, 2, 1, 1, 1, 3, -1, 3, 4, 2, 3, 2, 2, 2, 2, 2, 1, 2, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 12 |
| 3 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 10 |
| 4-5 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 9 |
| 6-7 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 8 |
| 8-9 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 7 |
| 10-11 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 6 |
| 12 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 4 |
| 13-14 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 3 |
| 15-17 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 0)) | 1 |
| 18-19 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 51 |
| 20 | Chờ 1 bước (`-1`) | (12, 1) | (12, 1) | Dự kiến đứng yên tại (12, 1); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 51 |
| 21-22 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 50 |
| 23 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 48 |
| 24-25 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 47 |
| 26-27 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 46 |
| 28-29 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 45 |
| 30-31 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 44 |
| 32-34 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 42 |
| 35-37 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 40 |
| 38-39 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 39 |
| 40-41 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 38 |
| 42-44 | Di chuyển hướng 2 (`2`) | (19, 3) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 36 |
| 45-47 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(20, 4)) | 34 |
| 48-49 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 50 | Chờ 1 bước (`-1`) | (20, 5) | (20, 5) | Dự kiến đứng yên tại (20, 5); hướng tới tọa độ (20, 5) | 51 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (19, 13) (ô=357)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(19, 13))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(19, 13))
- Mảng hành động đã gửi server: `[-51]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-50 | Chờ 51 bước (`-51`) | (19, 13) | (19, 13) | Dự kiến đứng yên tại (19, 13); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(19, 13)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 9) (ô=243)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 1)
- Mảng hành động đã gửi server: `[1, 0, 1, 2, 1, 1, 1, 1, 0, 4, 4, 5, 4, 0, 1, 5, 5, 5, 5, 0, 5, 5, 5, 0, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 51 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 51 |
| 4-6 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 51 |
| 7 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 51 |
| 8-9 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 51 |
| 10 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 11-12 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 51 |
| 13-14 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 51 |
| 15 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 51 |
| 16-17 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 50 |
| 18-20 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 48 |
| 21 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 46 |
| 22 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 4)) | 44 |
| 23-24 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 43 |
| 25-26 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 42 |
| 27-28 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 41 |
| 29-31 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 39 |
| 32-34 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 37 |
| 35-36 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 36 |
| 37 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 34 |
| 38-40 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 1)) | 32 |
| 41-42 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 31 |
| 43-44 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 30 |
| 45-46 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 0)) | 29 |
| 47-48 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 51 |
| 49-50 | Chờ 2 bước (`-2`) | (1, 1) | (1, 1) | Dự kiến đứng yên tại (1, 1); hướng tới tọa độ (1, 1) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 16) (ô=423)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(9, 2))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 2, 1, 1, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 2, 1, 1, 2, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 38 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 37 |
| 4 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 35 |
| 5-6 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 34 |
| 7 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 32 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 12)) | 31 |
| 10-11 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 30 |
| 12-13 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 29 |
| 14-16 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 9)) | 27 |
| 17-18 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 26 |
| 19-21 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 24 |
| 22-24 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 22 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 21 |
| 27 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 19 |
| 28-30 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 17 |
| 31 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 6)) | 15 |
| 32-33 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 14 |
| 34-36 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 6)) | 12 |
| 37-38 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 11 |
| 39-41 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 9 |
| 42 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 7 |
| 43-44 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 6 |
| 45-46 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 5 |
| 47-48 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 3)) | 4 |
| 49-50 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(9, 2)) | 3 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (19, 5) (ô=149)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 6)
- Mảng hành động đã gửi server: `[4, 0, 1, -28, 3, 2, 1, 4, 4, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (19, 5) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 6 |
| 3-4 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 5 |
| 5-6 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 4 |
| 7-34 | Chờ 28 bước (`-28`) | (18, 4) | (18, 4) | Dự kiến đứng yên tại (18, 4); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 51 |
| 35-36 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 51 |
| 37-39 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 40-42 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(20, 4)) | 49 |
| 43-44 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 45-47 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 49 |
| 48 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 6)) | 47 |
| 49-50 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 46 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (1, 1) (ô=27)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 3, 3, 3, 4, 4, 4, 3, -1, 3, 3, 4, 3, 2, 2, 2, 3, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 17 |
| 3 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 15 |
| 4 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 13 |
| 5-7 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 11 |
| 8-10 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 9 |
| 11-13 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 7 |
| 14-15 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 6 |
| 16-18 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 49 |
| 19-20 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 48 |
| 21-22 | Di chuyển hướng 4 (`4`) | (0, 10) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 47 |
| 23-25 | Di chuyển hướng 3 (`3`) | (0, 11) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 45 |
| 26 | Chờ 1 bước (`-1`) | (0, 12) | (0, 12) | Dự kiến đứng yên tại (0, 12); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 45 |
| 27-28 | Di chuyển hướng 3 (`3`) | (0, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 44 |
| 29-31 | Di chuyển hướng 3 (`3`) | (1, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 42 |
| 32-33 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 41 |
| 34 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(1, 16)) | 39 |
| 35-36 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 38 |
| 37-39 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 36 |
| 40-42 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 34 |
| 43 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 32 |
| 44-46 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 30 |
| 47-48 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 29 |
| 49-50 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(8, 17)) | 28 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (9, 9) (ô=243)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 5)
- Mảng hành động đã gửi server: `[1, 0, 1, 2, 1, 1, 1, 1, 0, -4, 3, 2, 2, 1, 2, 3, 3, 3, 2, 3, 2, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 51 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 51 |
| 4-6 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 51 |
| 7 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 6)) | 51 |
| 8-9 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 51 |
| 10 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 11-12 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 51 |
| 13-14 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 51 |
| 15 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 51 |
| 16-19 | Chờ 4 bước (`-4`) | (12, 1) | (12, 1) | Dự kiến đứng yên tại (12, 1); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 51 |
| 20-21 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 51 |
| 22 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 51 |
| 23 | Di chuyển hướng 2 (`2`) | (13, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 51 |
| 24-26 | Di chuyển hướng 1 (`1`) | (14, 2) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 51 |
| 27 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 51 |
| 28 | Di chuyển hướng 3 (`3`) | (16, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 51 |
| 29 | Di chuyển hướng 3 (`3`) | (16, 2) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 51 |
| 30-32 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 51 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 4)) | 51 |
| 35-36 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 51 |
| 37-39 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 40-50 | Chờ 11 bước (`-11`) | (20, 5) | (20, 5) | Dự kiến đứng yên tại (20, 5); hướng tới tọa độ (20, 5) | 51 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 16) (ô=417)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 1)
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 51 |
| 2 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(1, 14)) | 51 |
| 3-4 | Di chuyển hướng 0 (`0`) | (1, 14) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 51 |
| 5-7 | Di chuyển hướng 0 (`0`) | (1, 13) | (0, 12) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 12)) | 51 |
| 8-9 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 51 |
| 10-12 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(0, 10)) | 51 |
| 13-14 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 51 |
| 15-16 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 51 |
| 17-19 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(1, 7)) | 51 |
| 20-21 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 51 |
| 22-24 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 51 |
| 25-27 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 51 |
| 28-30 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 51 |
| 31 | Di chuyển hướng 0 (`0`) | (1, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 51 |
| 32 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 51 |
| 33-50 | Chờ 18 bước (`-18`) | (1, 1) | (1, 1) | Dự kiến đứng yên tại (1, 1); hướng tới tọa độ (1, 1) | 51 |

