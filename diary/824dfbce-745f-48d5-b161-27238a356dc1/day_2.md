# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 48
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 23 | #2 | #4 | (3, 16) | 0 | 49 |
| 26 | #1 | #5 | (13, 11) | 0 | 49 |
| 29 | #1 | #5 | (12, 12) | 48 | 49 |
| 46 | #3 | #5 | (11, 19) | 6 | 49 |
| 47 | #2 | #4 | (8, 20) | 34 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(14, 15))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(14, 15))
- Mảng hành động đã gửi server: `[2, 4, 3, 4, 3, 2, 3, 3, 4, 3, 4, 4, 4, 4, 4, 2, 5, 4, 5, 5, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (17, 0) | (18, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 0)) | 47 |
| 3-4 | Di chuyển hướng 4 (`4`) | (18, 0) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 46 |
| 5-7 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 44 |
| 8-9 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 43 |
| 10-12 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 41 |
| 13-15 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 39 |
| 16-17 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 38 |
| 18-19 | Di chuyển hướng 3 (`3`) | (20, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 37 |
| 20 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 35 |
| 21-23 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 33 |
| 24-25 | Di chuyển hướng 4 (`4`) | (20, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 32 |
| 26-28 | Di chuyển hướng 4 (`4`) | (20, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 30 |
| 29 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 28 |
| 30-31 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 27 |
| 32-33 | Di chuyển hướng 4 (`4`) | (18, 12) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 26 |
| 34-35 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 25 |
| 36-37 | Di chuyển hướng 5 (`5`) | (19, 13) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 24 |
| 38-39 | Di chuyển hướng 4 (`4`) | (18, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 23 |
| 40-41 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 22 |
| 42-43 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 21 |
| 44 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 19 |
| 45-46 | Di chuyển hướng 5 (`5`) | (15, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 18 |
| 47 | Chờ 1 bước (`-1`) | (14, 15) | (14, 15) | Dự kiến đứng yên tại (14, 15); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 18 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 15) (ô=335)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 18)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 5, 5, 0, 5, 5, 5, 3, 2, -1, 4, 3, 3, 3, 4, 3, 2, 3, 3, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 16 |
| 2-4 | Di chuyển hướng 0 (`0`) | (19, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 14 |
| 5-6 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 13 |
| 7-8 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 12 |
| 9-10 | Di chuyển hướng 5 (`5`) | (18, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 11 |
| 11-12 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 10 |
| 13-15 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 8 |
| 16-17 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 7 |
| 18 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 5 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 4 |
| 21 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 2 |
| 22-23 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 1 |
| 24-25 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 49 |
| 26 | Chờ 1 bước (`-1`) | (13, 11) | (13, 11) | Dự kiến đứng yên tại (13, 11); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 49 |
| 27-28 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 49 |
| 29-31 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 47 |
| 32 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 45 |
| 33-35 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 43 |
| 36-37 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 42 |
| 38-40 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 40 |
| 41-42 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 39 |
| 43 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 37 |
| 44-45 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 36 |
| 46-47 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 35 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 12) (ô=256)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 20)
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 3, 3, 3, 4, 3, 3, -2, 5, 4, 4, 3, 2, 2, 3, 3, 2, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 15 |
| 2-4 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 13 |
| 5-6 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 12 |
| 7-9 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 10 |
| 10-11 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 9 |
| 12-14 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 7 |
| 15-16 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 6 |
| 17 | Di chuyển hướng 4 (`4`) | (3, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 4 |
| 18 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 2 |
| 19-21 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(3, 16)) | 0 |
| 22-23 | Chờ 2 bước (`-2`) | (3, 16) | (3, 16) | Dự kiến đứng yên tại (3, 16); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(3, 16)) | 49 |
| 24-25 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 48 |
| 26-27 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 47 |
| 28-29 | Di chuyển hướng 4 (`4`) | (2, 17) | (1, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 18)) | 46 |
| 30-31 | Di chuyển hướng 3 (`3`) | (1, 18) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 45 |
| 32 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 43 |
| 33-34 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 42 |
| 35 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 40 |
| 36-37 | Di chuyển hướng 3 (`3`) | (4, 20) | (5, 21) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(5, 21)) | 39 |
| 38-39 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 38 |
| 40-41 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 37 |
| 42-44 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 21)) | 35 |
| 45-46 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 49 |
| 47 | Chờ 1 bước (`-1`) | (8, 20) | (8, 20) | Dự kiến đứng yên tại (8, 20); hướng tới tọa độ (8, 20) | 49 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 12) (ô=270)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 19)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 4, 4, 4, 4, 4, 4, 3, 4, 4, 4, 4, 0, 0, 5, 4, 5, 4, 4, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 38 |
| 2-3 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 37 |
| 4 | Di chuyển hướng 1 (`1`) | (19, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 35 |
| 5-7 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 33 |
| 8-9 | Di chuyển hướng 4 (`4`) | (20, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 32 |
| 10-12 | Di chuyển hướng 4 (`4`) | (20, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 30 |
| 13 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 28 |
| 14-15 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 27 |
| 16-17 | Di chuyển hướng 4 (`4`) | (18, 12) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 26 |
| 18-19 | Di chuyển hướng 4 (`4`) | (18, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 25 |
| 20-21 | Di chuyển hướng 3 (`3`) | (17, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 24 |
| 22 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 22 |
| 23 | Di chuyển hướng 4 (`4`) | (17, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 20 |
| 24-26 | Di chuyển hướng 4 (`4`) | (17, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 18 |
| 27-28 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 17 |
| 29-30 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 16 |
| 31-32 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 15 |
| 33 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 13 |
| 34-35 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 12 |
| 36-37 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 11 |
| 38-40 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 9 |
| 41-43 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 20)) | 7 |
| 44-45 | Di chuyển hướng 0 (`0`) | (11, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 49 |
| 46-47 | Chờ 2 bước (`-2`) | (11, 19) | (11, 19) | Dự kiến đứng yên tại (11, 19); hướng tới tọa độ (11, 19) | 49 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (13, 11) (ô=244)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 20)
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 4, 5, 4, 4, 4, 5, 5, 5, 0, 3, 2, 2, 2, 3, 3, 3, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 49 |
| 2-3 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 49 |
| 4-6 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 49 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 49 |
| 9-10 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 49 |
| 11 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 49 |
| 12 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 49 |
| 13-15 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 49 |
| 16 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 49 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 49 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 49 |
| 20-21 | Di chuyển hướng 5 (`5`) | (5, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 49 |
| 22 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(3, 16)) | 49 |
| 23-24 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 49 |
| 25 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 49 |
| 26-27 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 49 |
| 28-29 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 49 |
| 30 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 49 |
| 31-33 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 49 |
| 34-35 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 49 |
| 36-47 | Chờ 12 bước (`-12`) | (8, 20) | (8, 20) | Dự kiến đứng yên tại (8, 20); hướng tới tọa độ (8, 20) | 49 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 19)
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 5, 4, 4, 3, 4, 4, 3, 3, 4, 3, -3, 4, 3, 4, 4, 3, 4, 4, 4, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 49 |
| 3 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 49 |
| 4-5 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 49 |
| 6-7 | Di chuyển hướng 4 (`4`) | (15, 1) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 49 |
| 8 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 49 |
| 9-10 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 49 |
| 11 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 49 |
| 12-13 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 49 |
| 14-15 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 49 |
| 16 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 49 |
| 17 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 49 |
| 18-19 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 49 |
| 20-21 | Di chuyển hướng 4 (`4`) | (13, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 49 |
| 22 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 49 |
| 23-25 | Chờ 3 bước (`-3`) | (13, 11) | (13, 11) | Dự kiến đứng yên tại (13, 11); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 49 |
| 26-27 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 49 |
| 28-30 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 49 |
| 31 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 49 |
| 32-33 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 49 |
| 34-36 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 49 |
| 37-39 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 49 |
| 40 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 49 |
| 41-43 | Di chuyển hướng 4 (`4`) | (11, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 49 |
| 44-47 | Chờ 4 bước (`-4`) | (11, 19) | (11, 19) | Dự kiến đứng yên tại (11, 19); hướng tới tọa độ (11, 19) | 49 |

