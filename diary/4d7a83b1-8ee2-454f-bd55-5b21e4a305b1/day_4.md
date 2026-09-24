# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 58
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 16 | #0 | #7 | (24, 2) | 0 | 55 |
| 19 | #0 | #7 | (24, 3) | 54 | 55 |
| 25 | #4 | #6 | (8, 17) | 2 | 55 |
| 41 | #0 | #7 | (15, 3) | 37 | 55 |
| 54 | #2 | #6 | (8, 17) | 0 | 55 |
| 57 | #5 | #6 | (8, 17) | 6 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (24, 2) (ô=74)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(9, 3))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(9, 3))
- Mảng hành động đã gửi server: `[-17, 4, 3, 5, 5, 5, 4, 5, 5, 0, 5, 0, 5, 5, 5, 5, 4, 5, 5, 5, 0, 0, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-16 | Chờ 17 bước (`-17`) | (24, 2) | (24, 2) | Dự kiến đứng yên tại (24, 2); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 55 |
| 17-18 | Di chuyển hướng 4 (`4`) | (24, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 55 |
| 19-20 | Di chuyển hướng 3 (`3`) | (24, 3) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 54 |
| 21-22 | Di chuyển hướng 5 (`5`) | (24, 4) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 53 |
| 23-24 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 52 |
| 25 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 50 |
| 26-28 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 48 |
| 29-30 | Di chuyển hướng 5 (`5`) | (21, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 47 |
| 31 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 45 |
| 32-34 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 43 |
| 35 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 41 |
| 36-37 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 40 |
| 38-39 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 39 |
| 40 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 55 |
| 41-43 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 53 |
| 44-45 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 52 |
| 46-48 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 50 |
| 49 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 48 |
| 50 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 46 |
| 51 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 44 |
| 52-53 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 43 |
| 54-55 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 42 |
| 56-57 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 41 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[-58]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-57 | Chờ 58 bước (`-58`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (22, 8) (ô=222)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[4, 5, 5, 0, 5, 4, 4, 5, 5, 4, 3, 3, 4, 4, 4, 5, 3, 4, 4, 0, 5, 0, 5, 0, 5, 4, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 39 |
| 2-4 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 37 |
| 5-6 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 36 |
| 7 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 34 |
| 8-10 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 32 |
| 11 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 30 |
| 12-13 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 29 |
| 14-16 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 27 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 25 |
| 18-19 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 24 |
| 20-21 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 23 |
| 22-24 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 21 |
| 25-26 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 20 |
| 27-28 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 19 |
| 29-30 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 18 |
| 31-33 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 16 |
| 34-35 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 15 |
| 36-37 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 13 |
| 38-39 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 11 |
| 40-41 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 10 |
| 42 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 8 |
| 43 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 6 |
| 44-46 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 4 |
| 47-49 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 2 |
| 50-51 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 1 |
| 52-53 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |
| 54-57 | Chờ 4 bước (`-4`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 21) (ô=546)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(22, 17))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(22, 17))
- Mảng hành động đã gửi server: `[0, 1, 1, 1, -52]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 9 |
| 2-3 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 8 |
| 4 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 6 |
| 5 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 4 |
| 6-57 | Chờ 52 bước (`-52`) | (22, 17) | (22, 17) | Dự kiến đứng yên tại (22, 17); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 4 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (9, 16) (ô=409)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 15)
- Mảng hành động đã gửi server: `[5, 4, -22, 3, 2, 2, 2, 2, 3, 2, 3, 3, 1, 0, 0, 0, 0, 1, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 3 |
| 2-3 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 2 |
| 4-25 | Chờ 22 bước (`-22`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |
| 26-27 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 54 |
| 28-29 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 53 |
| 30-31 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 52 |
| 32-34 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 50 |
| 35 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 48 |
| 36 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 46 |
| 37-38 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 45 |
| 39 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 43 |
| 40-42 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 21)) | 41 |
| 43-44 | Di chuyển hướng 1 (`1`) | (15, 21) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 40 |
| 45 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 38 |
| 46-48 | Di chuyển hướng 0 (`0`) | (15, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 36 |
| 49-50 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 35 |
| 51-52 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 33 |
| 53-54 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 32 |
| 55-57 | Chờ 3 bước (`-3`) | (14, 15) | (14, 15) | Dự kiến đứng yên tại (14, 15); hướng tới tọa độ (14, 15) | 32 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 5, 5, 4, 0, 5, 4, 4, 5, 5, 4, 4, 4, 4, 5, 4, 3, 4, 3, 4, 3, 3, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 0) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 49 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 0) | (18, 0) | Dự kiến đến điểm hẹn tọa độ (18, 0) | 48 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đến điểm hẹn tọa độ (17, 0) | 47 |
| 6 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 45 |
| 7-9 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 43 |
| 10-11 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 42 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 41 |
| 14-16 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 39 |
| 17-18 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 38 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 37 |
| 21 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 35 |
| 22-23 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 34 |
| 24-25 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 32 |
| 26-28 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 30 |
| 29-30 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 29 |
| 31-33 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 27 |
| 34 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 25 |
| 35-36 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 24 |
| 37-39 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 22 |
| 40 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 8)) | 20 |
| 41-42 | Di chuyển hướng 3 (`3`) | (5, 8) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 19 |
| 43-44 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 18 |
| 45-47 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 16 |
| 48 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 14 |
| 49-50 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 13 |
| 51 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 11 |
| 52-53 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 10 |
| 54 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 8 |
| 55-56 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |
| 57 | Chờ 1 bước (`-1`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (11, 2) (ô=61)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 3, 4, 3, 4, 4, 4, 4, 4, 4, 3, 4, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 55 |
| 2-3 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 55 |
| 4 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 55 |
| 5 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 55 |
| 6 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 55 |
| 7-8 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 55 |
| 9 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 55 |
| 10-11 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 55 |
| 12-13 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 55 |
| 14-16 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 55 |
| 17 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 55 |
| 18-19 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 55 |
| 20 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 55 |
| 21-22 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 23-24 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |
| 25-57 | Chờ 33 bước (`-33`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (19, 3) (ô=94)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 3)
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 2, 3, 2, 4, 4, 5, 5, 4, 5, 5, 0, 5, 0, 5, 5, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (19, 3) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 55 |
| 4-5 | Di chuyển hướng 2 (`2`) | (20, 3) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 55 |
| 6-7 | Di chuyển hướng 1 (`1`) | (21, 3) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 55 |
| 8-9 | Di chuyển hướng 1 (`1`) | (21, 2) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 55 |
| 10-11 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 55 |
| 12-13 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 55 |
| 14-15 | Di chuyển hướng 2 (`2`) | (23, 2) | (24, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 55 |
| 16-17 | Di chuyển hướng 4 (`4`) | (24, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 55 |
| 18-19 | Di chuyển hướng 4 (`4`) | (24, 3) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 55 |
| 20-21 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 55 |
| 22 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 55 |
| 23-25 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 55 |
| 26-27 | Di chuyển hướng 5 (`5`) | (21, 5) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 55 |
| 28 | Di chuyển hướng 5 (`5`) | (20, 5) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 55 |
| 29-31 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 55 |
| 32 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 55 |
| 33-34 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 55 |
| 35-36 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 55 |
| 37 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 55 |
| 38-57 | Chờ 20 bước (`-20`) | (15, 3) | (15, 3) | Dự kiến đứng yên tại (15, 3); hướng tới tọa độ (15, 3) | 55 |

