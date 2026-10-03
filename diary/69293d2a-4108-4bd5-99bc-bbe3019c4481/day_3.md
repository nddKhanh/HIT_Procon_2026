# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 43
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #2 | #5 | (17, 12) | 0 | 41 |
| 15 | #2 | #5 | (17, 13) | 40 | 41 |
| 31 | #4 | #5 | (9, 14) | 3 | 41 |
| 36 | #2 | #5 | (9, 14) | 28 | 41 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 13) (ô=239)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(5, 13))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(5, 13))
- Mảng hành động đã gửi server: `[-43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-42 | Chờ 43 bước (`-43`) | (5, 13) | (5, 13) | Dự kiến đứng yên tại (5, 13); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 13)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 12) (ô=232)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 4)
- Mảng hành động đã gửi server: `[0, 0, 0, 1, 2, 1, 5, 0, 1, 0, 0, 1, 5, 4, 5, 5, 0, 5, 4, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 39 |
| 3-4 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 38 |
| 5-7 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 36 |
| 8-9 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 35 |
| 10 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 33 |
| 11 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 7)) | 31 |
| 12-13 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 30 |
| 14 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 28 |
| 15-17 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 26 |
| 18-20 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 24 |
| 21-22 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 22 |
| 23-24 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 2)) | 21 |
| 25-26 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 20 |
| 27-28 | Di chuyển hướng 4 (`4`) | (14, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 19 |
| 29-30 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 18 |
| 31 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 16 |
| 32-34 | Di chuyển hướng 0 (`0`) | (12, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 14 |
| 35 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 2)) | 12 |
| 36-37 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 11 |
| 38-40 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 4)) | 9 |
| 41-42 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 8 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 17) (ô=320)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(8, 12))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(8, 12))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 1, -1, 4, 4, 4, 4, 5, 5, 5, 5, 0, 0, 5, 5, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 7 |
| 2 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 5 |
| 3-4 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 4 |
| 5-7 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 2 |
| 8-9 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 1 |
| 10-11 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 12)) | 41 |
| 12 | Chờ 1 bước (`-1`) | (17, 12) | (17, 12) | Dự kiến đứng yên tại (17, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 12)) | 41 |
| 13-14 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 41 |
| 15-16 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 40 |
| 17-18 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 39 |
| 19-21 | Di chuyển hướng 4 (`4`) | (16, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 37 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 36 |
| 24-25 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 35 |
| 26-27 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 34 |
| 28-29 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(11, 16)) | 33 |
| 30-31 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 32 |
| 32-34 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 30 |
| 35 | Di chuyển hướng 5 (`5`) | (10, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 41 |
| 36-37 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 14)) | 40 |
| 38-39 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 39 |
| 40-41 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 38 |
| 42 | Chờ 1 bước (`-1`) | (8, 12) | (8, 12) | Dự kiến đứng yên tại (8, 12); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 38 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 16) (ô=289)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(3, 15))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(3, 15))
- Mảng hành động đã gửi server: `[0, 0, 0, 3, 3, 3, 4, 1, 1, 2, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 13 |
| 2-4 | Di chuyển hướng 0 (`0`) | (1, 15) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 11 |
| 5 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 13)) | 9 |
| 6-7 | Di chuyển hướng 3 (`3`) | (0, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 8 |
| 8 | Di chuyển hướng 3 (`3`) | (0, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 6 |
| 9-11 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 4 |
| 12-13 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 3 |
| 14-15 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 2 |
| 16-17 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 1 |
| 18-19 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 0 |
| 20-42 | Chờ 23 bước (`-23`) | (3, 15) | (3, 15) | Dự kiến đứng yên tại (3, 15); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 3) (ô=59)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 15)
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 3, 3, 3, 3, 2, 2, 3, 4, 3, 2, 1, 1, 3, 4, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 21 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 20 |
| 4-5 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 19 |
| 6-8 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 7)) | 17 |
| 9-10 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 16 |
| 11-13 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 14 |
| 14-16 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 12 |
| 17-19 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 10 |
| 20-21 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 9 |
| 22-23 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 8 |
| 24 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 6 |
| 25-26 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 5 |
| 27-28 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 14)) | 4 |
| 29-30 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 41 |
| 31-32 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 40 |
| 33-35 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 12)) | 38 |
| 36-37 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 37 |
| 38-39 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 36 |
| 40 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 34 |
| 41-42 | Chờ 2 bước (`-2`) | (11, 15) | (11, 15) | Dự kiến đứng yên tại (11, 15); hướng tới tọa độ (11, 15) | 34 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (16, 12) (ô=232)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 14)
- Mảng hành động đã gửi server: `[2, -9, 4, 5, 5, 4, 5, 5, 5, 5, 5, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 12)) | 41 |
| 3-11 | Chờ 9 bước (`-9`) | (17, 12) | (17, 12) | Dự kiến đứng yên tại (17, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 12)) | 41 |
| 12-13 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 41 |
| 14-15 | Di chuyển hướng 5 (`5`) | (17, 13) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 41 |
| 16-18 | Di chuyển hướng 5 (`5`) | (16, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 41 |
| 19 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 41 |
| 20-22 | Di chuyển hướng 5 (`5`) | (14, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 41 |
| 23-25 | Di chuyển hướng 5 (`5`) | (13, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 41 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 41 |
| 27-29 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 41 |
| 30 | Di chuyển hướng 5 (`5`) | (10, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 41 |
| 31-42 | Chờ 12 bước (`-12`) | (9, 14) | (9, 14) | Dự kiến đứng yên tại (9, 14); hướng tới tọa độ (9, 14) | 41 |

