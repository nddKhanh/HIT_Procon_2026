# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 50
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 17 | #1 | #5 | (7, 13) | 42 | 57 |
| 49 | #0 | #5 | (4, 13) | 23 | 57 |
| 49 | #1 | #4 | (1, 4) | 29 | 57 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (23, 21) (ô=569)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(4, 13))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(4, 13))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 5, 4, 5, 0, 5, 5, 0, 4, 5, 4, 0, 0, 0, 0, 1, 0, 0, 0, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 56 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 54 |
| 6-7 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 53 |
| 8-9 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 21)) | 52 |
| 10-11 | Di chuyển hướng 0 (`0`) | (18, 21) | (17, 20) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 20)) | 51 |
| 12-13 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 50 |
| 14 | Di chuyển hướng 4 (`4`) | (16, 20) | (16, 21) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 21)) | 48 |
| 15-16 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 47 |
| 17 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 20)) | 45 |
| 18-19 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 44 |
| 20 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 42 |
| 21-22 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 19)) | 41 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 40 |
| 25-26 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 39 |
| 27-28 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 21)) | 38 |
| 29-30 | Di chuyển hướng 0 (`0`) | (10, 21) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 37 |
| 31-32 | Di chuyển hướng 0 (`0`) | (9, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 36 |
| 33-35 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 34 |
| 36-37 | Di chuyển hướng 0 (`0`) | (8, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 33 |
| 38 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 31 |
| 39-40 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 15)) | 30 |
| 41-42 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 29 |
| 43-44 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 28 |
| 45 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 26 |
| 46 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 24 |
| 47-48 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 13)) | 57 |
| 49 | Chờ 1 bước (`-1`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 13)) | 57 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 19) (ô=494)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(1, 4))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(1, 4))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 5, 0, 0, 5, 5, 5, 3, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 19) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 56 |
| 2 | Di chuyển hướng 2 (`2`) | (0, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 54 |
| 3-5 | Di chuyển hướng 2 (`2`) | (1, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 52 |
| 6 | Di chuyển hướng 2 (`2`) | (2, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 50 |
| 7 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 18)) | 48 |
| 8-9 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 47 |
| 10-11 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 46 |
| 12-13 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 45 |
| 14 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 43 |
| 15-16 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 57 |
| 17 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 55 |
| 18-19 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 54 |
| 20 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 52 |
| 21-22 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 51 |
| 23-24 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 50 |
| 25-26 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 49 |
| 27-28 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 48 |
| 29 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 46 |
| 30 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 5)) | 44 |
| 31-32 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 43 |
| 33-34 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(7, 3)) | 42 |
| 35-36 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 41 |
| 37 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 39 |
| 38 | Di chuyển hướng 0 (`0`) | (5, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 37 |
| 39 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 35 |
| 40 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 33 |
| 41-42 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 32 |
| 43-44 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 31 |
| 45-46 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 30 |
| 47-48 | Di chuyển hướng 4 (`4`) | (2, 3) | (1, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 4)) | 57 |
| 49 | Chờ 1 bước (`-1`) | (1, 4) | (1, 4) | Dự kiến đứng yên tại (1, 4); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 4)) | 57 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 23) (ô=603)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 21)
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 2, 2, 2, 1, 1, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 23) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 56 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 55 |
| 4-5 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 54 |
| 6-7 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 53 |
| 8-9 | Di chuyển hướng 2 (`2`) | (8, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 52 |
| 10 | Di chuyển hướng 2 (`2`) | (9, 21) | (10, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 21)) | 50 |
| 11-12 | Di chuyển hướng 2 (`2`) | (10, 21) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 49 |
| 13-14 | Di chuyển hướng 1 (`1`) | (11, 21) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 48 |
| 15-16 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 19)) | 47 |
| 17-18 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 46 |
| 19-20 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 45 |
| 21-22 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 44 |
| 23-24 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 43 |
| 25 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 41 |
| 26-27 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 40 |
| 28-29 | Di chuyển hướng 5 (`5`) | (6, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 39 |
| 30-32 | Di chuyển hướng 5 (`5`) | (5, 20) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 37 |
| 33-34 | Di chuyển hướng 5 (`5`) | (4, 20) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 36 |
| 35-36 | Di chuyển hướng 5 (`5`) | (3, 20) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 35 |
| 37-38 | Di chuyển hướng 5 (`5`) | (2, 20) | (1, 20) | Dự kiến đến điểm hẹn tọa độ (1, 20) | 34 |
| 39-41 | Di chuyển hướng 5 (`5`) | (1, 20) | (0, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(0, 20)) | 32 |
| 42-43 | Di chuyển hướng 4 (`4`) | (0, 20) | (0, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(0, 21)) | 31 |
| 44-45 | Di chuyển hướng 2 (`2`) | (0, 21) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 30 |
| 46-47 | Di chuyển hướng 2 (`2`) | (1, 21) | (2, 21) | Dự kiến đến điểm hẹn tọa độ (2, 21) | 29 |
| 48-49 | Di chuyển hướng 2 (`2`) | (2, 21) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 28 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 4) (ô=114)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(20, 11))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(20, 11))
- Mảng hành động đã gửi server: `[3, 4, 3, 3, 3, 3, 3, 2, 1, 1, 2, 1, 1, 1, 0, 5, 0, 0, 3, 3, 3, 3, 3, 3, 2, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 56 |
| 2 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 54 |
| 3-4 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 53 |
| 5-6 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 52 |
| 7-8 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 51 |
| 9-10 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 50 |
| 11-12 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 49 |
| 13 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 47 |
| 14-15 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 46 |
| 16 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 9)) | 44 |
| 17-18 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 43 |
| 19-20 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 42 |
| 21-22 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 41 |
| 23-24 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(17, 6)) | 40 |
| 25-26 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 39 |
| 27-28 | Di chuyển hướng 5 (`5`) | (17, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 38 |
| 29-30 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 37 |
| 31 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 3)) | 35 |
| 32-33 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 34 |
| 34 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 32 |
| 35-36 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 31 |
| 37-38 | Di chuyển hướng 3 (`3`) | (16, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 30 |
| 39-40 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 29 |
| 41 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 27 |
| 42-44 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=1, tọa độ=(19, 9)) | 25 |
| 45-46 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 24 |
| 47-49 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 11)) | 22 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (12, 21) (ô=558)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(1, 4))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(1, 4))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 5, 0, 5, 5, 0, 0, 0, 0, 0, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (12, 21) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 57 |
| 2-3 | Di chuyển hướng 0 (`0`) | (11, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 57 |
| 4-6 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 57 |
| 7-8 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 57 |
| 9 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 57 |
| 10-11 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 57 |
| 12-13 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 57 |
| 14 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 57 |
| 15 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 57 |
| 16 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 57 |
| 17-18 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 57 |
| 19-20 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 57 |
| 21 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 57 |
| 22 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 57 |
| 23 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 57 |
| 24 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 57 |
| 25-26 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 57 |
| 27-28 | Di chuyển hướng 0 (`0`) | (3, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 57 |
| 29-30 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 57 |
| 31-32 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 4)) | 57 |
| 33-49 | Chờ 17 bước (`-17`) | (1, 4) | (1, 4) | Dự kiến đứng yên tại (1, 4); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 4)) | 57 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 4) (ô=111)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(4, 13))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(4, 13))
- Mảng hành động đã gửi server: `[4, 4, 4, 3, 3, 3, 3, 3, 4, 5, 5, 5, 5, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 5)) | 57 |
| 2-3 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 57 |
| 4 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 57 |
| 5 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 57 |
| 6-7 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 57 |
| 8-9 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 57 |
| 10-11 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 57 |
| 12-13 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 57 |
| 14 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 57 |
| 15-16 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 57 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 57 |
| 18 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 57 |
| 19-20 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 13)) | 57 |
| 21-49 | Chờ 29 bước (`-29`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 13)) | 57 |

