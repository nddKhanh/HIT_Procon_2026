# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 53
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 17 | #3 | #7 | (0, 17) | 3 | 55 |
| 22 | #2 | #6 | (15, 10) | 0 | 55 |
| 46 | #3 | #6 | (12, 16) | 37 | 55 |
| 49 | #1 | #7 | (0, 0) | 4 | 55 |
| 52 | #4 | #6 | (12, 16) | 11 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 17) (ô=433)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 1)
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 2-3 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 53 |
| 4-5 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 52 |
| 6 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 50 |
| 7-9 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 48 |
| 10 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 46 |
| 11 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 44 |
| 12-14 | Di chuyển hướng 2 (`2`) | (13, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 42 |
| 15-16 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 40 |
| 17-18 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 39 |
| 19-20 | Di chuyển hướng 2 (`2`) | (16, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 38 |
| 21-22 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 37 |
| 23-25 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 35 |
| 26-27 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 34 |
| 28 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 32 |
| 29 | Di chuyển hướng 2 (`2`) | (20, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 30 |
| 30 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 28 |
| 31-32 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 27 |
| 33-35 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 25 |
| 36-37 | Di chuyển hướng 1 (`1`) | (22, 8) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 24 |
| 38-39 | Di chuyển hướng 1 (`1`) | (23, 7) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 22 |
| 40-41 | Di chuyển hướng 1 (`1`) | (23, 6) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 21 |
| 42-43 | Di chuyển hướng 1 (`1`) | (24, 5) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 19 |
| 44-45 | Di chuyển hướng 0 (`0`) | (24, 4) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 18 |
| 46-47 | Di chuyển hướng 1 (`1`) | (24, 3) | (24, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 17 |
| 48-49 | Di chuyển hướng 0 (`0`) | (24, 2) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 16 |
| 50-51 | Di chuyển hướng 5 (`5`) | (24, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 15 |
| 52 | Chờ 1 bước (`-1`) | (23, 1) | (23, 1) | Dự kiến đứng yên tại (23, 1); hướng tới tọa độ (23, 1) | 15 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 2)
- Mảng hành động đã gửi server: `[-49, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-48 | Chờ 49 bước (`-49`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 55 |
| 49-50 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 54 |
| 51-52 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 53 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 20) (ô=514)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(13, 1))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(13, 1))
- Mảng hành động đã gửi server: `[0, 5, 1, 1, 0, 1, 2, 1, 0, 0, 1, 1, -1, 0, 0, 0, 5, 5, 0, 0, 0, 5, 0, 0, 2, 2, 2, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 15 |
| 3 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 13 |
| 4-5 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 12 |
| 6 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 10 |
| 7 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 8 |
| 8-9 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 7 |
| 10-11 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 5 |
| 12-13 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 4 |
| 14-15 | Di chuyển hướng 0 (`0`) | (15, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 3 |
| 16-17 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 2 |
| 18-19 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 1 |
| 20-21 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 55 |
| 22 | Chờ 1 bước (`-1`) | (15, 10) | (15, 10) | Dự kiến đứng yên tại (15, 10); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 55 |
| 23-24 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 54 |
| 25-26 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 53 |
| 27 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 51 |
| 28-30 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 49 |
| 31-32 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 48 |
| 33 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 46 |
| 34-35 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 45 |
| 36 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 43 |
| 37 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 41 |
| 38-39 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 40 |
| 40-41 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 39 |
| 42-43 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 38 |
| 44-46 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 36 |
| 47-49 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 34 |
| 50-51 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 33 |
| 52 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 31 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 17) (ô=425)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(13, 19))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(13, 19))
- Mảng hành động đã gửi server: `[-18, 3, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-17 | Chờ 18 bước (`-18`) | (0, 17) | (0, 17) | Dự kiến đứng yên tại (0, 17); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 55 |
| 18-19 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 54 |
| 20-21 | Di chuyển hướng 2 (`2`) | (0, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 53 |
| 22-23 | Di chuyển hướng 2 (`2`) | (1, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 52 |
| 24-25 | Di chuyển hướng 2 (`2`) | (2, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 51 |
| 26-27 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 50 |
| 28-29 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 49 |
| 30 | Di chuyển hướng 1 (`1`) | (5, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 47 |
| 31-33 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 45 |
| 34-35 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 44 |
| 36-37 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 43 |
| 38-39 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 42 |
| 40-41 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 41 |
| 42-44 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 39 |
| 45 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 55 |
| 46-48 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 53 |
| 49-50 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 52 |
| 51 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 50 |
| 52 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 48 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (22, 10) (ô=272)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 16)
- Mảng hành động đã gửi server: `[1, 0, 3, 3, 4, 3, 4, 3, 4, 4, 4, 4, 4, 4, 3, 5, 5, 5, 5, 5, 5, 0, 0, 5, 1, 1, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (22, 10) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 53 |
| 3 | Di chuyển hướng 0 (`0`) | (23, 9) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 51 |
| 4-5 | Di chuyển hướng 3 (`3`) | (22, 8) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 50 |
| 6 | Di chuyển hướng 3 (`3`) | (23, 9) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 48 |
| 7-9 | Di chuyển hướng 4 (`4`) | (23, 10) | (23, 11) | Dự kiến đến điểm hẹn tọa độ (23, 11) | 46 |
| 10 | Di chuyển hướng 3 (`3`) | (23, 11) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 44 |
| 11-12 | Di chuyển hướng 4 (`4`) | (23, 12) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 43 |
| 13 | Di chuyển hướng 3 (`3`) | (23, 13) | (23, 14) | Dự kiến đến điểm hẹn tọa độ (23, 14) | 41 |
| 14-15 | Di chuyển hướng 4 (`4`) | (23, 14) | (23, 15) | Dự kiến đến điểm hẹn tọa độ (23, 15) | 40 |
| 16-17 | Di chuyển hướng 4 (`4`) | (23, 15) | (22, 16) | Dự kiến đến điểm hẹn tọa độ (22, 16) | 39 |
| 18-20 | Di chuyển hướng 4 (`4`) | (22, 16) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 37 |
| 21-22 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 36 |
| 23 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 34 |
| 24 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 32 |
| 25-26 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(21, 21)) | 31 |
| 27-28 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 30 |
| 29 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 28 |
| 30-32 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 26 |
| 33-34 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 25 |
| 35-36 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 24 |
| 37-39 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 21)) | 22 |
| 40-41 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 21 |
| 42-44 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 19 |
| 45 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 17 |
| 46-47 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 16 |
| 48 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 14 |
| 49 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 12 |
| 50-51 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 55 |
| 52 | Chờ 1 bước (`-1`) | (12, 16) | (12, 16) | Dự kiến đứng yên tại (12, 16); hướng tới tọa độ (12, 16) | 55 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 8) (ô=205)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[3, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 3, 3, 2, 2, 2, 3, 2, 1, 1, 1, 1, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 8) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 41 |
| 2-3 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 40 |
| 4-6 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 38 |
| 7-9 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 36 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 35 |
| 12 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 33 |
| 13-15 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 31 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 30 |
| 18-20 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 28 |
| 21 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 26 |
| 22-23 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 25 |
| 24 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 23 |
| 25-26 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 22 |
| 27-28 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 21 |
| 29-30 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 20 |
| 31-33 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 18 |
| 34 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 16 |
| 35-36 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 15 |
| 37-38 | Di chuyển hướng 2 (`2`) | (17, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 14 |
| 39-40 | Di chuyển hướng 1 (`1`) | (18, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 12 |
| 41-42 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 10 |
| 43-44 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 9 |
| 45 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 7 |
| 46-52 | Chờ 7 bước (`-7`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 7 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (22, 10) (ô=272)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 16)
- Mảng hành động đã gửi server: `[5, 0, 5, 0, 5, 4, 4, 5, 5, -4, 4, 4, 3, 4, 4, 4, 5, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (22, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 55 |
| 3-4 | Di chuyển hướng 0 (`0`) | (21, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 55 |
| 5-6 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 55 |
| 7 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 55 |
| 8-10 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 55 |
| 11 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 55 |
| 12-13 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 55 |
| 14-16 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 55 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 55 |
| 18-21 | Chờ 4 bước (`-4`) | (15, 10) | (15, 10) | Dự kiến đứng yên tại (15, 10); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 55 |
| 22-23 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 55 |
| 24-25 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 55 |
| 26-27 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 55 |
| 28-29 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 55 |
| 30-31 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 55 |
| 32-33 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 55 |
| 34-35 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 55 |
| 36-52 | Chờ 17 bước (`-17`) | (12, 16) | (12, 16) | Dự kiến đứng yên tại (12, 16); hướng tới tọa độ (12, 16) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (8, 17) (ô=433)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 5, 4, 1, 2, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 55 |
| 2 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 55 |
| 3 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 55 |
| 4-6 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 55 |
| 7-8 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 55 |
| 9 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 55 |
| 10-11 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 55 |
| 12-13 | Di chuyển hướng 5 (`5`) | (1, 16) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 55 |
| 14-16 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 55 |
| 17-18 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 55 |
| 19-21 | Di chuyển hướng 2 (`2`) | (0, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 55 |
| 22-23 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 55 |
| 24-25 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 26-27 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 55 |
| 28 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 29 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 55 |
| 30 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 55 |
| 31 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 55 |
| 32 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 55 |
| 33-35 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 55 |
| 36-38 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 55 |
| 39-40 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 55 |
| 41 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 55 |
| 42 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 55 |
| 43 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 55 |
| 44-46 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 55 |
| 47-48 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 55 |
| 49-52 | Chờ 4 bước (`-4`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 55 |

