# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 68
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #4 | #2 | (8, 16) | 2 | 80 |
| 51 | #0 | #2 | (19, 5) | 0 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (19, 21) (ô=523)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(12, 0))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 5, 0, 5, 5, 5, 5, 5, 2, 2, 2, 1, 1, 0, 1, 1, 1, 4, 5, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 5, 5, 5, 5, 0, 1, 0, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 58 |
| 3 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 56 |
| 4 | Di chuyển hướng 3 (`3`) | (21, 21) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 54 |
| 5 | Di chuyển hướng 2 (`2`) | (21, 22) | (22, 22) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=13, tọa độ=(22, 22)) | 52 |
| 6-7 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 51 |
| 8 | Di chuyển hướng 0 (`0`) | (21, 22) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 49 |
| 9 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 47 |
| 10 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 45 |
| 11-13 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 43 |
| 14-15 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 42 |
| 16 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 40 |
| 17-18 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 39 |
| 19 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 37 |
| 20-21 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 36 |
| 22-24 | Di chuyển hướng 1 (`1`) | (19, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 34 |
| 25 | Di chuyển hướng 1 (`1`) | (19, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 32 |
| 26 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 30 |
| 27 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 28 |
| 28 | Di chuyển hướng 1 (`1`) | (20, 17) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 26 |
| 29 | Di chuyển hướng 1 (`1`) | (20, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 24 |
| 30-31 | Di chuyển hướng 4 (`4`) | (21, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 23 |
| 32 | Di chuyển hướng 5 (`5`) | (20, 16) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 21 |
| 33-35 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 19 |
| 36-38 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(18, 14)) | 17 |
| 39-40 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 16 |
| 41 | Di chuyển hướng 1 (`1`) | (19, 13) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 14 |
| 42 | Di chuyển hướng 0 (`0`) | (19, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 12 |
| 43 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 10 |
| 44-46 | Di chuyển hướng 1 (`1`) | (19, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 8 |
| 47 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 6 |
| 48 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 4 |
| 49 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 2 |
| 50 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 80 |
| 51 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 78 |
| 52-53 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 77 |
| 54-55 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 76 |
| 56-58 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 74 |
| 59 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 72 |
| 60-61 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 71 |
| 62-63 | Di chuyển hướng 1 (`1`) | (14, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 70 |
| 64-65 | Di chuyển hướng 0 (`0`) | (14, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 69 |
| 66 | Di chuyển hướng 0 (`0`) | (14, 1) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 67 |
| 67 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 65 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (23, 3) (ô=95)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=4, tọa độ=(19, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=4, tọa độ=(19, 1))
- Mảng hành động đã gửi server: `[3, 5, 5, 1, 0, 1, 0, 5, 4, 5, -50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (23, 3) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 14 |
| 1-2 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 13 |
| 3 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 11 |
| 4-5 | Di chuyển hướng 1 (`1`) | (21, 4) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 10 |
| 6-8 | Di chuyển hướng 0 (`0`) | (22, 3) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 8 |
| 9-10 | Di chuyển hướng 1 (`1`) | (21, 2) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 7 |
| 11-13 | Di chuyển hướng 0 (`0`) | (22, 1) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 5 |
| 14 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 3 |
| 15-16 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 2 |
| 17 | Di chuyển hướng 5 (`5`) | (20, 1) | (19, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=4, tọa độ=(19, 1)) | 0 |
| 18-67 | Chờ 50 bước (`-50`) | (19, 1) | (19, 1) | Dự kiến đứng yên tại (19, 1); mục tiêu Spot #5 (thương hiệu=4, tọa độ=(19, 1)) | 0 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (21, 15) (ô=381)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 5)
- Mảng hành động đã gửi server: `[1, 0, 0, 5, 4, 5, 5, 4, 4, 4, 5, 5, 5, 0, 5, 5, 4, 5, 2, 1, 2, 2, 3, 2, 2, 2, 1, 1, 2, 2, 1, 1, 0, 0, 1, 2, 1, 0, 0, 0, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (21, 15) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 80 |
| 2 | Di chuyển hướng 0 (`0`) | (21, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 80 |
| 3 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 80 |
| 4 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 80 |
| 5 | Di chuyển hướng 4 (`4`) | (19, 12) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 80 |
| 6 | Di chuyển hướng 5 (`5`) | (19, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 80 |
| 7-9 | Di chuyển hướng 5 (`5`) | (18, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 80 |
| 10 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 80 |
| 11 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 80 |
| 12 | Di chuyển hướng 4 (`4`) | (16, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 80 |
| 13 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 80 |
| 14 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 80 |
| 15 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 80 |
| 16 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 80 |
| 17 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 80 |
| 18 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 80 |
| 19 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 80 |
| 20 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 80 |
| 21-22 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 80 |
| 23 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 80 |
| 24 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 80 |
| 25 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 80 |
| 26 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 80 |
| 27 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 80 |
| 28 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 80 |
| 29 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 80 |
| 30 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 80 |
| 31 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 80 |
| 32 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 80 |
| 33-35 | Di chuyển hướng 2 (`2`) | (17, 14) | (18, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(18, 14)) | 80 |
| 36-37 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 80 |
| 38 | Di chuyển hướng 1 (`1`) | (19, 13) | (19, 12) | Dự kiến đến điểm hẹn tọa độ (19, 12) | 80 |
| 39 | Di chuyển hướng 0 (`0`) | (19, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 80 |
| 40 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 80 |
| 41 | Di chuyển hướng 1 (`1`) | (18, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 80 |
| 42 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 80 |
| 43 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 80 |
| 44 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 80 |
| 45 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 80 |
| 46 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 80 |
| 47-67 | Chờ 21 bước (`-21`) | (19, 5) | (19, 5) | Dự kiến đứng yên tại (19, 5); hướng tới tọa độ (19, 5) | 80 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 14) (ô=337)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=10, tọa độ=(1, 14))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=10, tọa độ=(1, 14))
- Mảng hành động đã gửi server: `[-68]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-67 | Chờ 68 bước (`-68`) | (1, 14) | (1, 14) | Dự kiến đứng yên tại (1, 14); mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 10) (ô=248)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 4, 4, -11, 3, 3, 4, 4, 4, 3, 3, 5, 5, 5, 5, 5, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 1, 0, 0, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 8 |
| 2 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 6 |
| 3-4 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 5 |
| 5-6 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 4 |
| 7-8 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 3 |
| 9-10 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 2 |
| 11-21 | Chờ 11 bước (`-11`) | (8, 16) | (8, 16) | Dự kiến đứng yên tại (8, 16); mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 80 |
| 22-23 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 79 |
| 24-25 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 78 |
| 26 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 76 |
| 27 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 74 |
| 28-29 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 73 |
| 30 | Di chuyển hướng 3 (`3`) | (8, 21) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 71 |
| 31 | Di chuyển hướng 3 (`3`) | (8, 22) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 69 |
| 32-33 | Di chuyển hướng 5 (`5`) | (9, 23) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 68 |
| 34-36 | Di chuyển hướng 5 (`5`) | (8, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 66 |
| 37 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 64 |
| 38 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 62 |
| 39 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 60 |
| 40-41 | Di chuyển hướng 0 (`0`) | (4, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 59 |
| 42 | Di chuyển hướng 1 (`1`) | (3, 22) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 57 |
| 43 | Di chuyển hướng 0 (`0`) | (4, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 55 |
| 44 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 53 |
| 45 | Di chuyển hướng 0 (`0`) | (3, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 51 |
| 46-48 | Di chuyển hướng 0 (`0`) | (2, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 49 |
| 49-51 | Di chuyển hướng 0 (`0`) | (2, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 47 |
| 52 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 45 |
| 53 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 43 |
| 54-55 | Di chuyển hướng 1 (`1`) | (1, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 42 |
| 56-58 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 40 |
| 59 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 38 |
| 60 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 36 |
| 61-63 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 34 |
| 64 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 32 |
| 65 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 30 |
| 66 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 28 |
| 67 | Chờ 1 bước (`-1`) | (1, 9) | (1, 9) | Dự kiến đứng yên tại (1, 9); mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 28 |

