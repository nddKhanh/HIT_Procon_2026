# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 51
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 7 | #0 | #5 | (13, 17) | 15 | 49 |
| 50 | #1 | #5 | (20, 15) | 0 | 49 |
| 50 | #3 | #4 | (15, 19) | 12 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 15) (ô=329)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(20, 8))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(20, 8))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 17 |
| 2-4 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 15 |
| 5-7 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 47 |
| 8-10 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 45 |
| 11-13 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 20)) | 43 |
| 14-15 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 42 |
| 16-18 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 40 |
| 19-21 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 38 |
| 22-24 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 36 |
| 25-27 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 34 |
| 28-29 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 33 |
| 30-31 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 32 |
| 32 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 30 |
| 33-34 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 29 |
| 35-36 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 28 |
| 37-38 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 27 |
| 39-40 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 26 |
| 41-42 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 25 |
| 43 | Di chuyển hướng 1 (`1`) | (19, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 23 |
| 44-46 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 21 |
| 47-50 | Chờ 4 bước (`-4`) | (20, 8) | (20, 8) | Dự kiến đứng yên tại (20, 8); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 18) (ô=393)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(20, 15))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(20, 15))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 3, 3, 4, 4, 4, 3, 4, 4, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 34 |
| 2 | Di chuyển hướng 1 (`1`) | (16, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 32 |
| 3-5 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 30 |
| 6-8 | Di chuyển hướng 1 (`1`) | (17, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 28 |
| 9-10 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 27 |
| 11-12 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 26 |
| 13-14 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 25 |
| 15-16 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 24 |
| 17 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 22 |
| 18-19 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 21 |
| 20-21 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 20 |
| 22-24 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 18 |
| 25 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 16 |
| 26-27 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 15 |
| 28-29 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 14 |
| 30-31 | Di chuyển hướng 3 (`3`) | (20, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 13 |
| 32 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 11 |
| 33-35 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 9 |
| 36-37 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 8 |
| 38-39 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 7 |
| 40 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 5 |
| 41-42 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 4 |
| 43-44 | Di chuyển hướng 3 (`3`) | (18, 12) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 3 |
| 45-46 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 2 |
| 47-49 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 15)) | 49 |
| 50 | Chờ 1 bước (`-1`) | (20, 15) | (20, 15) | Dự kiến đứng yên tại (20, 15); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 15)) | 49 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 20) (ô=428)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 11)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 0, 0, 5, 5, 0, 1, 1, 2, 1, 0, 0, 1, 2, 5, 5, 0, 0, 1, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 21)) | 48 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 47 |
| 4-6 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 45 |
| 7-8 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(5, 21)) | 44 |
| 9-10 | Di chuyển hướng 0 (`0`) | (5, 21) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 43 |
| 11-12 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 42 |
| 13 | Di chuyển hướng 5 (`5`) | (4, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 40 |
| 14-15 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 39 |
| 16 | Di chuyển hướng 0 (`0`) | (2, 19) | (1, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 18)) | 37 |
| 17-18 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 36 |
| 19-20 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 35 |
| 21-22 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(3, 16)) | 34 |
| 23-24 | Di chuyển hướng 1 (`1`) | (3, 16) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 33 |
| 25 | Di chuyển hướng 0 (`0`) | (4, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 31 |
| 26-28 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 29 |
| 29 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 27 |
| 30-32 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 25 |
| 33-34 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 24 |
| 35-37 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 22 |
| 38-39 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 21 |
| 40-42 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 19 |
| 43-44 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 18 |
| 45-46 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 17 |
| 47-49 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 15 |
| 50 | Chờ 1 bước (`-1`) | (3, 11) | (3, 11) | Dự kiến đứng yên tại (3, 11); hướng tới tọa độ (3, 11) | 15 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 19) (ô=410)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 19)
- Mảng hành động đã gửi server: `[3, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 2, 3, 4, 3, 3, 3, 4, 3, 2, 3, 3, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (11, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 20)) | 47 |
| 3-4 | Di chuyển hướng 0 (`0`) | (11, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 46 |
| 5-7 | Di chuyển hướng 1 (`1`) | (11, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 44 |
| 8-10 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 42 |
| 11 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 40 |
| 12-14 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 38 |
| 15-17 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 36 |
| 18-19 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 35 |
| 20 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 33 |
| 21-23 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 31 |
| 24-25 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 30 |
| 26-27 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 29 |
| 28 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 27 |
| 29-30 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 26 |
| 31-33 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 24 |
| 34 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 22 |
| 35-37 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 20 |
| 38-39 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 19 |
| 40-42 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 17 |
| 43-44 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 16 |
| 45 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 14 |
| 46-47 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 13 |
| 48-49 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 49 |
| 50 | Chờ 1 bước (`-1`) | (15, 19) | (15, 19) | Dự kiến đứng yên tại (15, 19); hướng tới tọa độ (15, 19) | 49 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (8, 20) (ô=428)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 19)
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 2, 2, 2, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 49 |
| 2-3 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 49 |
| 4-5 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 20)) | 49 |
| 6-7 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 49 |
| 8-10 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 49 |
| 11-13 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 49 |
| 14-15 | Di chuyển hướng 2 (`2`) | (14, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 49 |
| 16-50 | Chờ 35 bước (`-35`) | (15, 19) | (15, 19) | Dự kiến đứng yên tại (15, 19); hướng tới tọa độ (15, 19) | 49 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (11, 19) (ô=410)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(20, 15))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(20, 15))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (11, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 49 |
| 3-5 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 49 |
| 6 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 49 |
| 7-9 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 49 |
| 10-11 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 49 |
| 12 | Di chuyển hướng 2 (`2`) | (15, 17) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 49 |
| 13 | Di chuyển hướng 2 (`2`) | (16, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 49 |
| 14-16 | Di chuyển hướng 1 (`1`) | (17, 17) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 49 |
| 17 | Di chuyển hướng 1 (`1`) | (17, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 49 |
| 18 | Di chuyển hướng 2 (`2`) | (18, 15) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 49 |
| 19-21 | Di chuyển hướng 2 (`2`) | (19, 15) | (20, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 15)) | 49 |
| 22-50 | Chờ 29 bước (`-29`) | (20, 15) | (20, 15) | Dự kiến đứng yên tại (20, 15); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 15)) | 49 |

