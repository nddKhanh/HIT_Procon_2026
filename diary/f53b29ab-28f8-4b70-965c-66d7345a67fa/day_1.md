# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 56
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #4 | #2 | (20, 1) | 79 | 80 |
| 3 | #4 | #2 | (20, 0) | 78 | 80 |
| 5 | #4 | #2 | (21, 0) | 79 | 80 |
| 6 | #4 | #2 | (22, 0) | 78 | 80 |
| 7 | #4 | #2 | (23, 1) | 78 | 80 |
| 8 | #4 | #2 | (23, 2) | 78 | 80 |
| 9 | #4 | #2 | (23, 3) | 78 | 80 |
| 36 | #3 | #2 | (8, 20) | 0 | 80 |
| 55 | #3 | #2 | (2, 18) | 57 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (18, 21) (ô=522)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=12, tọa độ=(21, 15))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=12, tọa độ=(21, 15))
- Mảng hành động đã gửi server: `[5, 5, 2, 2, 2, 1, 1, 0, 1, 1, 1, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 23 |
| 2 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 21 |
| 3-4 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 20 |
| 5 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 18 |
| 6-7 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 17 |
| 8-10 | Di chuyển hướng 1 (`1`) | (19, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 15 |
| 11 | Di chuyển hướng 1 (`1`) | (19, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 13 |
| 12 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 11 |
| 13 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 9 |
| 14 | Di chuyển hướng 1 (`1`) | (20, 17) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 7 |
| 15 | Di chuyển hướng 1 (`1`) | (20, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 5 |
| 16-55 | Chờ 40 bước (`-40`) | (21, 15) | (21, 15) | Dự kiến đứng yên tại (21, 15); mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 5 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 17) (ô=411)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Mảng hành động đã gửi server: `[0, 5, 0, 1, 1, 1, 2, 1, 0, 5, 5, 0, -35]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 19 |
| 3 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 17 |
| 4 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 15 |
| 5 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 13 |
| 6-7 | Di chuyển hướng 1 (`1`) | (1, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 12 |
| 8-10 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 10 |
| 11 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 8 |
| 12 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 6 |
| 13-15 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 4 |
| 16 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 2 |
| 17-18 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 1 |
| 19-20 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 0 |
| 21-55 | Chờ 35 bước (`-35`) | (1, 9) | (1, 9) | Dự kiến đứng yên tại (1, 9); mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 0 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (19, 1) (ô=43)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 18)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 3, 4, 4, 4, 5, 4, 4, 3, 4, 5, 4, 5, 4, 3, 4, 4, 4, 4, 5, 5, 5, 0, 5, 5, 4, 3, 4, 4, 4, 1, 0, 5, 5, 5, 5, 5, 5, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 80 |
| 2 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 80 |
| 3-4 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 80 |
| 5 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 80 |
| 6 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 80 |
| 7 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 80 |
| 8 | Di chuyển hướng 4 (`4`) | (23, 2) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 80 |
| 9 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 80 |
| 10 | Di chuyển hướng 4 (`4`) | (22, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 80 |
| 11 | Di chuyển hướng 5 (`5`) | (22, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 80 |
| 12 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 80 |
| 13 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 80 |
| 14 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 80 |
| 15 | Di chuyển hướng 4 (`4`) | (20, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 80 |
| 16 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 80 |
| 17 | Di chuyển hướng 4 (`4`) | (19, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 80 |
| 18 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 80 |
| 19 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 80 |
| 20 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 80 |
| 21 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 80 |
| 22 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 80 |
| 23 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 80 |
| 24 | Di chuyển hướng 4 (`4`) | (16, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 80 |
| 25 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 80 |
| 26 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 80 |
| 27 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 80 |
| 28 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 80 |
| 29 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 80 |
| 30 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 80 |
| 31 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 80 |
| 32 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 80 |
| 33 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 80 |
| 34 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 80 |
| 35 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 80 |
| 36-37 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 80 |
| 38 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 80 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 80 |
| 41-42 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 80 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 80 |
| 45-46 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 80 |
| 47 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 80 |
| 48 | Di chuyển hướng 5 (`5`) | (3, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 80 |
| 49-55 | Chờ 7 bước (`-7`) | (2, 18) | (2, 18) | Dự kiến đứng yên tại (2, 18); hướng tới tọa độ (2, 18) | 80 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (15, 23) (ô=567)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 18)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 5, 5, 0, 0, 0, 3, 3, 4, 4, -14, 4, 3, 3, 5, 5, 5, 5, 5, 0, 1, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 18 |
| 2 | Di chuyển hướng 0 (`0`) | (14, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 16 |
| 3-4 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 15 |
| 5-6 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 14 |
| 7-8 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 13 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 12 |
| 11-12 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 11 |
| 13 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 9 |
| 14 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 7 |
| 15-16 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 6 |
| 17-18 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 5 |
| 19-20 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 4 |
| 21 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 2 |
| 22 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 0 |
| 23-36 | Chờ 14 bước (`-14`) | (8, 20) | (8, 20) | Dự kiến đứng yên tại (8, 20); mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 80 |
| 37-38 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 79 |
| 39 | Di chuyển hướng 3 (`3`) | (8, 21) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 77 |
| 40 | Di chuyển hướng 3 (`3`) | (8, 22) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 75 |
| 41-42 | Di chuyển hướng 5 (`5`) | (9, 23) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 74 |
| 43-45 | Di chuyển hướng 5 (`5`) | (8, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 72 |
| 46 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 70 |
| 47 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 68 |
| 48 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 66 |
| 49-50 | Di chuyển hướng 0 (`0`) | (4, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 65 |
| 51 | Di chuyển hướng 1 (`1`) | (3, 22) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 63 |
| 52 | Di chuyển hướng 0 (`0`) | (4, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 61 |
| 53 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 59 |
| 54 | Di chuyển hướng 0 (`0`) | (3, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 80 |
| 55 | Chờ 1 bước (`-1`) | (2, 18) | (2, 18) | Dự kiến đứng yên tại (2, 18); hướng tới tọa độ (2, 18) | 80 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (19, 1) (ô=43)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(1, 1))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(1, 1))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 3, 4, 3, 5, 5, 4, 4, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 5, 4, 5, 5, 5, 4, 5, 4, 5, 0, 1, 0, 4, 4, 5, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 80 |
| 2 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 80 |
| 3-4 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 80 |
| 5 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 80 |
| 6 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 80 |
| 7 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 80 |
| 8 | Di chuyển hướng 4 (`4`) | (23, 2) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 80 |
| 9 | Di chuyển hướng 3 (`3`) | (23, 3) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 78 |
| 10-11 | Di chuyển hướng 5 (`5`) | (23, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 77 |
| 12 | Di chuyển hướng 5 (`5`) | (22, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 75 |
| 13-14 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 74 |
| 15 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 72 |
| 16 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 70 |
| 17 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 68 |
| 18 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 66 |
| 19-20 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 65 |
| 21 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 63 |
| 22 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 61 |
| 23 | Di chuyển hướng 0 (`0`) | (17, 1) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 59 |
| 24 | Di chuyển hướng 5 (`5`) | (16, 0) | (15, 0) | Dự kiến đến điểm hẹn tọa độ (15, 0) | 57 |
| 25 | Di chuyển hướng 5 (`5`) | (15, 0) | (14, 0) | Dự kiến đến điểm hẹn tọa độ (14, 0) | 55 |
| 26-28 | Di chuyển hướng 5 (`5`) | (14, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 53 |
| 29 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 51 |
| 30-31 | Di chuyển hướng 5 (`5`) | (12, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 50 |
| 32 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 48 |
| 33 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 46 |
| 34-35 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 45 |
| 36-38 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 43 |
| 39-40 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 42 |
| 41 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 40 |
| 42 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 38 |
| 43 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 36 |
| 44 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 34 |
| 45 | Di chuyển hướng 1 (`1`) | (4, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 32 |
| 46 | Di chuyển hướng 0 (`0`) | (5, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 30 |
| 47-48 | Di chuyển hướng 4 (`4`) | (4, 0) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 29 |
| 49-51 | Di chuyển hướng 4 (`4`) | (4, 1) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 27 |
| 52 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 25 |
| 53 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 23 |
| 54 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 1)) | 21 |
| 55 | Chờ 1 bước (`-1`) | (1, 1) | (1, 1) | Dự kiến đứng yên tại (1, 1); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 1)) | 21 |

