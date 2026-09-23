# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 44
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (17, 6) (ô=131)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(2, 2))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(2, 2))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 1, 0, 0, 1, 4, 4, 4, 3, 0, 5, 0, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 28 |
| 2-3 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 27 |
| 4-5 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 26 |
| 6-7 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 25 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 24 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 23 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 22 |
| 14-15 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 21 |
| 16 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 19 |
| 17-18 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 18 |
| 19-20 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 17 |
| 21-22 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 16 |
| 23 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 14 |
| 24-25 | Di chuyển hướng 0 (`0`) | (7, 2) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 13 |
| 26-27 | Di chuyển hướng 1 (`1`) | (7, 1) | (7, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 0)) | 12 |
| 28-29 | Di chuyển hướng 4 (`4`) | (7, 0) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 11 |
| 30-31 | Di chuyển hướng 4 (`4`) | (7, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 10 |
| 32-33 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 9 |
| 34 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 7 |
| 35-36 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 6 |
| 37 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 4 |
| 38-39 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 3 |
| 40-41 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 2 |
| 42 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 46 |
| 43 | Chờ 1 bước (`-1`) | (2, 2) | (2, 2) | Dự kiến đứng yên tại (2, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 46 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 19) (ô=363)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(14, 19))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(14, 19))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 1, 1, 3, 3, 4, 4, 4, -1, 1, 1, 2, 2, 2, 2, 1, 2, 3, 3, 3, 3, 4, 2, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 17 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 15 |
| 3-4 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 14 |
| 5 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 12 |
| 6 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 10 |
| 7 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 8 |
| 8-9 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 7 |
| 10 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 5 |
| 11 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 3 |
| 12-13 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 2 |
| 14 | Di chuyển hướng 4 (`4`) | (4, 17) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 46 |
| 15 | Chờ 1 bước (`-1`) | (3, 18) | (3, 18) | Dự kiến đứng yên tại (3, 18); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 46 |
| 16-17 | Di chuyển hướng 1 (`1`) | (3, 18) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 45 |
| 18 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 43 |
| 19-20 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 42 |
| 21 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 46 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 46 |
| 24-25 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 45 |
| 26 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 27 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 46 |
| 28-29 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 45 |
| 30-31 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 44 |
| 32-33 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 43 |
| 34-35 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 42 |
| 36-37 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 20)) | 41 |
| 38-39 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 40 |
| 40-41 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 39 |
| 42-43 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(14, 19)) | 38 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 6) (ô=127)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 8)
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 2, -1, 0, 5, 0, 5, 5, 2, 2, 2, 1, 1, 4, 3, 3, 4, 3, 4, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 4 |
| 2-3 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 3 |
| 4-5 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 2 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 46 |
| 8-9 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 46 |
| 10 | Chờ 1 bước (`-1`) | (17, 4) | (17, 4) | Dự kiến đứng yên tại (17, 4); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 46 |
| 11-12 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 45 |
| 13-14 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 44 |
| 15-16 | Di chuyển hướng 0 (`0`) | (16, 3) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 43 |
| 17-18 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 42 |
| 19 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 40 |
| 20-21 | Di chuyển hướng 2 (`2`) | (13, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 39 |
| 22 | Di chuyển hướng 2 (`2`) | (14, 2) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 37 |
| 23-24 | Di chuyển hướng 2 (`2`) | (15, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 36 |
| 25-26 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 35 |
| 27 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 0)) | 33 |
| 28-29 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 32 |
| 30 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 30 |
| 31-32 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 29 |
| 33-34 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 28 |
| 35-36 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 27 |
| 37-38 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 26 |
| 39-40 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 25 |
| 41-42 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 24 |
| 43 | Chờ 1 bước (`-1`) | (17, 8) | (17, 8) | Dự kiến đứng yên tại (17, 8); hướng tới tọa độ (17, 8) | 24 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 3) (ô=62)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(2, 2))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(2, 2))
- Mảng hành động đã gửi server: `[2, 3, 4, 3, 5, 5, 5, 4, 4, 5, 1, 1, 1, 1, 0, 0, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 21 |
| 2 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 19 |
| 3-4 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 18 |
| 5-6 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(6, 6)) | 17 |
| 7-8 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 16 |
| 9-10 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 15 |
| 11-13 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 13 |
| 14-15 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 12 |
| 16-17 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 11 |
| 18-19 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 8)) | 10 |
| 20-21 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 9 |
| 22-23 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 8 |
| 24-25 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 7 |
| 26-27 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 6 |
| 28 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 4 |
| 29-30 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 3 |
| 31-43 | Chờ 13 bước (`-13`) | (2, 2) | (2, 2) | Dự kiến đứng yên tại (2, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 46 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 13) (ô=251)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 13)
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 4, 4, 3, 0, 5, 5, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 0, 1, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 45 |
| 2 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 43 |
| 3 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 41 |
| 4-5 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 40 |
| 6 | Di chuyển hướng 4 (`4`) | (4, 17) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 46 |
| 7-8 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 45 |
| 9-10 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 44 |
| 11-12 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 43 |
| 13-14 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 42 |
| 15-16 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 41 |
| 17-18 | Di chuyển hướng 2 (`2`) | (1, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 40 |
| 19-20 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 39 |
| 21 | Di chuyển hướng 1 (`1`) | (2, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 37 |
| 22-23 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 36 |
| 24 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 34 |
| 25-26 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 33 |
| 27 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 31 |
| 28-29 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 30 |
| 30-31 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 29 |
| 32 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 27 |
| 33 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 25 |
| 34-35 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 24 |
| 36-38 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 22 |
| 39-40 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(10, 12)) | 21 |
| 41-42 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 20 |
| 43 | Chờ 1 bước (`-1`) | (11, 13) | (11, 13) | Dự kiến đứng yên tại (11, 13); hướng tới tọa độ (11, 13) | 20 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 4) (ô=82)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 18)
- Mảng hành động đã gửi server: `[2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 4, 3, 3, 4, 3, 4, 4, 4, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 30 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 29 |
| 4-5 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 28 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 27 |
| 8 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 25 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 24 |
| 11-12 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 23 |
| 13-14 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 22 |
| 15-16 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 21 |
| 17-18 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 20 |
| 19-20 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 19 |
| 21-22 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 18 |
| 23-24 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 17 |
| 25 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 15 |
| 26 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 13 |
| 27 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 11 |
| 28-29 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 10 |
| 30-31 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 9 |
| 32-33 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 8 |
| 34-35 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 7 |
| 36-38 | Di chuyển hướng 4 (`4`) | (16, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 5 |
| 39-40 | Di chuyển hướng 4 (`4`) | (16, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 4 |
| 41-42 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 46 |
| 43 | Chờ 1 bước (`-1`) | (14, 18) | (14, 18) | Dự kiến đứng yên tại (14, 18); hướng tới tọa độ (14, 18) | 46 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 2) (ô=51)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(2, 2))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(2, 2))
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 2, 5, 5, 5, 5, 5, 5, 5, 4, 4, 5, 0, 0, 5, 0, 5, 5, 0, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 46 |
| 2 | Di chuyển hướng 3 (`3`) | (14, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 46 |
| 3-4 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 46 |
| 5-6 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 46 |
| 7-8 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 46 |
| 9-10 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 46 |
| 11-12 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 46 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 46 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 46 |
| 17-18 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 46 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 46 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 46 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 46 |
| 25 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 46 |
| 26 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 46 |
| 27-28 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 46 |
| 29-30 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 46 |
| 31-32 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 46 |
| 33-34 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 46 |
| 35 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 46 |
| 36-37 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 46 |
| 38-39 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 46 |
| 40 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 46 |
| 41-43 | Chờ 3 bước (`-3`) | (2, 2) | (2, 2) | Dự kiến đứng yên tại (2, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 46 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (4, 13) (ô=251)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 18)
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 3, -8, 1, 2, 1, 2, 2, 2, 1, 2, 2, 3, 2, 3, 3, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 46 |
| 2 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 46 |
| 3 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 46 |
| 4 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 46 |
| 5-6 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 46 |
| 7-14 | Chờ 8 bước (`-8`) | (3, 18) | (3, 18) | Dự kiến đứng yên tại (3, 18); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 46 |
| 15-16 | Di chuyển hướng 1 (`1`) | (3, 18) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 46 |
| 17 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 46 |
| 18-19 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 46 |
| 20 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 46 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 46 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 46 |
| 25 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 46 |
| 26 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 46 |
| 27-28 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 46 |
| 29-30 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 46 |
| 31-32 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 46 |
| 33 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 46 |
| 34-35 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 46 |
| 36-37 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 46 |
| 38-43 | Chờ 6 bước (`-6`) | (14, 18) | (14, 18) | Dự kiến đứng yên tại (14, 18); hướng tới tọa độ (14, 18) | 46 |

