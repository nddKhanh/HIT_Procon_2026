# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 55
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 19 | #5 | #6 | (11, 2) | 2 | 55 |
| 30 | #2 | #7 | (17, 3) | 3 | 55 |
| 33 | #2 | #7 | (17, 4) | 54 | 55 |
| 36 | #2 | #7 | (19, 3) | 52 | 55 |
| 51 | #5 | #7 | (19, 3) | 30 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (24, 2) (ô=74)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(24, 2))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(24, 2))
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (24, 2) | (24, 2) | Dự kiến đứng yên tại (24, 2); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 3) (ô=92)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(22, 8))
- Mảng hành động đã gửi server: `[-31, 3, 2, 1, 2, 2, 3, 2, 2, 2, 4, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-30 | Chờ 31 bước (`-31`) | (17, 3) | (17, 3) | Dự kiến đứng yên tại (17, 3); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 55 |
| 31-32 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 55 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 54 |
| 35 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 55 |
| 36 | Di chuyển hướng 2 (`2`) | (19, 3) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 53 |
| 37-38 | Di chuyển hướng 2 (`2`) | (20, 3) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 52 |
| 39-40 | Di chuyển hướng 3 (`3`) | (21, 3) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 51 |
| 41-43 | Di chuyển hướng 2 (`2`) | (21, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 49 |
| 44 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 47 |
| 45-46 | Di chuyển hướng 2 (`2`) | (23, 4) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 46 |
| 47-48 | Di chuyển hướng 4 (`4`) | (24, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 45 |
| 49-50 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 43 |
| 51-52 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 42 |
| 53-54 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 40 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 16) (ô=410)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(21, 21))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(21, 21))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 1, 1, 0, 2, 1, 1, 1, 1, 0, 0, 3, 3, 3, 2, 2, 3, 3, 3, 2, 3, 4, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 51 |
| 3 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 49 |
| 4-6 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 47 |
| 7 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 45 |
| 8-9 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 44 |
| 10 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 42 |
| 11 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 40 |
| 12-13 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 39 |
| 14-16 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 37 |
| 17-18 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 36 |
| 19-20 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 35 |
| 21-22 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 34 |
| 23-24 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 33 |
| 25-27 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 31 |
| 28-29 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 30 |
| 30-32 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 28 |
| 33-34 | Di chuyển hướng 3 (`3`) | (16, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 27 |
| 35-36 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 26 |
| 37-39 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 24 |
| 40 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 22 |
| 41-42 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 21 |
| 43-45 | Di chuyển hướng 3 (`3`) | (20, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 19 |
| 46 | Di chuyển hướng 2 (`2`) | (20, 16) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 17 |
| 47-48 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 16 |
| 49-50 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 15 |
| 51 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 13 |
| 52 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 11 |
| 53-54 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(21, 21)) | 10 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (16, 6) (ô=166)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(9, 16))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(9, 16))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, 0, 5, 4, 4, 5, 5, 4, 4, 4, 4, 5, 4, 3, 4, 3, 4, 3, 3, 3, 3, 3, 1, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 46 |
| 3 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 44 |
| 4-6 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 42 |
| 7 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 40 |
| 8-9 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 39 |
| 10-11 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 38 |
| 12-13 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 37 |
| 14 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 35 |
| 15-16 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 34 |
| 17 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 32 |
| 18-20 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 30 |
| 21-22 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 29 |
| 23-25 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 27 |
| 26 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 25 |
| 27-28 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 24 |
| 29-31 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 22 |
| 32 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 8)) | 20 |
| 33-34 | Di chuyển hướng 3 (`3`) | (5, 8) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 19 |
| 35-36 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 18 |
| 37-39 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 16 |
| 40 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 14 |
| 41-42 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 13 |
| 43 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 11 |
| 44-45 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 10 |
| 46 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 8 |
| 47-48 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 6 |
| 49-50 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 5 |
| 51-52 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 4 |
| 53-54 | Chờ 2 bước (`-2`) | (9, 16) | (9, 16) | Dự kiến đứng yên tại (9, 16); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 4 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (11, 2) (ô=61)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[-20, 5, 5, 5, 3, 3, 2, 2, 2, 2, 1, 2, 2, 2, 3, 2, 1, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-19 | Chờ 20 bước (`-20`) | (11, 2) | (11, 2) | Dự kiến đứng yên tại (11, 2); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 55 |
| 20-21 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 54 |
| 22-24 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 52 |
| 25-27 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 50 |
| 28-29 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 49 |
| 30-31 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 48 |
| 32-33 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 47 |
| 34 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 45 |
| 35 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 43 |
| 36 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 41 |
| 37-39 | Di chuyển hướng 1 (`1`) | (13, 4) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 39 |
| 40-41 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 38 |
| 42-44 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 36 |
| 45 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 34 |
| 46-47 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 33 |
| 48-49 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 32 |
| 50 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 55 |
| 51 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 53 |
| 52-53 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 52 |
| 54 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 50 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (16, 11) (ô=291)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(11, 2))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(11, 2))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 5, 0, 0, 0, 1, 1, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 55 |
| 3-4 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 55 |
| 5-6 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 55 |
| 7 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 55 |
| 8-10 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 55 |
| 11-12 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 55 |
| 13 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 55 |
| 14-15 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 55 |
| 16 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 55 |
| 17 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 55 |
| 18 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 55 |
| 19-54 | Chờ 36 bước (`-36`) | (11, 2) | (11, 2) | Dự kiến đứng yên tại (11, 2); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (8, 16) (ô=408)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 3)
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 2, 2, 2, 2, 1, 2, 3, 2, 1, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 55 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 55 |
| 4 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 55 |
| 5-6 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 55 |
| 7 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 55 |
| 8-10 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 55 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 55 |
| 13-14 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 55 |
| 15 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 55 |
| 16-17 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 55 |
| 18 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 55 |
| 19 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 20 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 55 |
| 21 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 55 |
| 22-24 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 55 |
| 25 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 55 |
| 26-28 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 55 |
| 29 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 55 |
| 30-31 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 55 |
| 32-33 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 55 |
| 34 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 55 |
| 35-54 | Chờ 20 bước (`-20`) | (19, 3) | (19, 3) | Dự kiến đứng yên tại (19, 3); hướng tới tọa độ (19, 3) | 55 |

