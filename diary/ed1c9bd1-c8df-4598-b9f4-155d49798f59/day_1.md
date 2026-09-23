# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 42
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 16) (ô=314)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(17, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(17, 6))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 2, 1, 2, 2, 1, -1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 10 |
| 2-3 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 9 |
| 4-5 | Di chuyển hướng 4 (`4`) | (11, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 8 |
| 6-7 | Di chuyển hướng 3 (`3`) | (11, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 20)) | 7 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 6 |
| 10-11 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 5 |
| 12-13 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(14, 19)) | 4 |
| 14-15 | Di chuyển hướng 2 (`2`) | (14, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 3 |
| 16-17 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 46 |
| 18 | Chờ 1 bước (`-1`) | (15, 18) | (15, 18) | Dự kiến đứng yên tại (15, 18); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 46 |
| 19-20 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 45 |
| 21-22 | Di chuyển hướng 0 (`0`) | (16, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 44 |
| 23-24 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 43 |
| 25-26 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 42 |
| 27-28 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 41 |
| 29-31 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 39 |
| 32-33 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 38 |
| 34 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 36 |
| 35 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 34 |
| 36 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 32 |
| 37-38 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 31 |
| 39-41 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 29 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 11) (ô=225)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 19)
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 5, 4, 4, 5, 5, 4, 5, 4, 4, 4, 4, 5, 5, 0, 1, 5, 4, 5, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 45 |
| 2 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 43 |
| 3 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 41 |
| 4-5 | Di chuyển hướng 4 (`4`) | (13, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 40 |
| 6-7 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 39 |
| 8-9 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 38 |
| 10-11 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 37 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 36 |
| 14-15 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 35 |
| 16 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 33 |
| 17 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 31 |
| 18-19 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 30 |
| 20-21 | Di chuyển hướng 4 (`4`) | (7, 17) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 29 |
| 22-23 | Di chuyển hướng 4 (`4`) | (6, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 28 |
| 24-25 | Di chuyển hướng 4 (`4`) | (6, 19) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 27 |
| 26-27 | Di chuyển hướng 5 (`5`) | (5, 20) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 26 |
| 28-29 | Di chuyển hướng 5 (`5`) | (4, 20) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 25 |
| 30-31 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 24 |
| 32-33 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 23 |
| 34-35 | Di chuyển hướng 5 (`5`) | (3, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 22 |
| 36 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 20 |
| 37-38 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 19 |
| 39-40 | Di chuyển hướng 2 (`2`) | (1, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 18 |
| 41 | Chờ 1 bước (`-1`) | (2, 19) | (2, 19) | Dự kiến đứng yên tại (2, 19); hướng tới tọa độ (2, 19) | 18 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 3) (ô=63)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 6)
- Mảng hành động đã gửi server: `[3, 2, 3, 3, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 30 |
| 1-2 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 29 |
| 3-4 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 28 |
| 5-6 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 27 |
| 7-8 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 26 |
| 9 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 24 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 23 |
| 12-13 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 22 |
| 14-15 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 21 |
| 16-17 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 20 |
| 18-19 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 19 |
| 20-21 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 18 |
| 22-23 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 17 |
| 24-25 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 16 |
| 26-27 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 15 |
| 28 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 0)) | 13 |
| 29-30 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 12 |
| 31 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 10 |
| 32-33 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 9 |
| 34-35 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 8 |
| 36-37 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 7 |
| 38-39 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 6 |
| 40-41 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 5 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 0) (ô=7)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 3))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 2, 0, 5, 5, 4, 4, 4, 4, 4, 5, 1, 1, 1, 1, 0, 0, 3, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 0) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 46 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 46 |
| 4-5 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 46 |
| 6 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 44 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 43 |
| 9-10 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 42 |
| 11 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 40 |
| 12 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 38 |
| 13-14 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 37 |
| 15-16 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 36 |
| 17-18 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 35 |
| 19-20 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 34 |
| 21-22 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 33 |
| 23-24 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 8)) | 32 |
| 25-26 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 31 |
| 27-28 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 30 |
| 29-30 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 29 |
| 31-32 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 28 |
| 33 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 26 |
| 34-35 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 25 |
| 36-37 | Di chuyển hướng 3 (`3`) | (2, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 24 |
| 38-39 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 23 |
| 40-41 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 11) (ô=220)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(4, 13))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(4, 13))
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 5, 5, 5, 5, 0, 5, 0, -21, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 11) | (10, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(10, 12)) | 14 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 13 |
| 4-5 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 12 |
| 6-8 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 10 |
| 9-10 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 9 |
| 11 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 7 |
| 12-13 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 6 |
| 14-15 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 5 |
| 16-17 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 4 |
| 18 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 2 |
| 19 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 0 |
| 20-40 | Chờ 21 bước (`-21`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 46 |
| 41 | Chờ 1 bước (`-1`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 46 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (10, 4) (ô=86)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(6, 4))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(6, 4))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 0, 5, 0, 5, 5, -1, 5, 5, 4, 4, 4, 4, 5, 5, 5, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 16 |
| 2-3 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 15 |
| 4-5 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 14 |
| 6-7 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 13 |
| 8-9 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 12 |
| 10-11 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 11 |
| 12-13 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 10 |
| 14-15 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 9 |
| 16-17 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 8 |
| 18-19 | Di chuyển hướng 0 (`0`) | (16, 3) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 7 |
| 20-21 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 6 |
| 22 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 46 |
| 23 | Chờ 1 bước (`-1`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 46 |
| 24-25 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 45 |
| 26-27 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 44 |
| 28 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 42 |
| 29 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 40 |
| 30-31 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 39 |
| 32 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 37 |
| 33 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 35 |
| 34-35 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 34 |
| 36-37 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(6, 6)) | 33 |
| 38-39 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 32 |
| 40-41 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 31 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 0) (ô=7)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(13, 2))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(13, 2))
- Mảng hành động đã gửi server: `[4, 3, 4, 3, 3, 3, 2, 1, 1, 1, 1, 2, 2, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 0) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 46 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 46 |
| 4-5 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 46 |
| 6 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 46 |
| 7-8 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 46 |
| 9-10 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 46 |
| 11-12 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 46 |
| 13 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 46 |
| 14 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 46 |
| 15-16 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 46 |
| 17 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 46 |
| 18 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 46 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 46 |
| 21-41 | Chờ 21 bước (`-21`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 46 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (16, 11) (ô=225)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(4, 13))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(4, 13))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 4, 4, 4, -3, 5, 5, 0, 0, 5, 5, 0, 5, 5, 5, 0, 5, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 46 |
| 2-3 | Di chuyển hướng 3 (`3`) | (16, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 46 |
| 4-5 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 46 |
| 6-7 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 46 |
| 8-9 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 46 |
| 10-12 | Di chuyển hướng 4 (`4`) | (16, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 46 |
| 13-14 | Di chuyển hướng 4 (`4`) | (16, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 46 |
| 15-17 | Chờ 3 bước (`-3`) | (15, 18) | (15, 18) | Dự kiến đứng yên tại (15, 18); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 46 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 46 |
| 20-21 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 46 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 46 |
| 24-25 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 46 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 46 |
| 27-28 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 46 |
| 29-30 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 46 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 46 |
| 33 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 46 |
| 34-35 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 46 |
| 36-37 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 46 |
| 38 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 46 |
| 39 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 46 |
| 40 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 46 |
| 41 | Chờ 1 bước (`-1`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 46 |

