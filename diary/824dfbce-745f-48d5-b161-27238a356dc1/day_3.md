# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 51
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 11 | #0 | #4 | (14, 15) | 0 | 49 |
| 14 | #0 | #4 | (15, 15) | 48 | 49 |
| 17 | #0 | #4 | (16, 14) | 46 | 49 |
| 19 | #0 | #4 | (17, 14) | 48 | 49 |
| 21 | #0 | #4 | (18, 13) | 48 | 49 |
| 30 | #3 | #4 | (20, 8) | 1 | 49 |
| 45 | #2 | #5 | (16, 19) | 2 | 49 |
| 47 | #2 | #5 | (15, 18) | 48 | 49 |
| 49 | #2 | #5 | (15, 17) | 48 | 49 |
| 50 | #2 | #5 | (14, 17) | 47 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 16) (ô=349)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(13, 11))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(13, 11))
- Mảng hành động đã gửi server: `[1, -9, 2, 1, 2, 2, 1, 2, 3, 3, 0, 0, 0, 1, 5, 5, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 0 |
| 3-11 | Chờ 9 bước (`-9`) | (14, 15) | (14, 15) | Dự kiến đứng yên tại (14, 15); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 49 |
| 12-13 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 49 |
| 14-15 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 48 |
| 16 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 49 |
| 17-18 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 49 |
| 19-20 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 49 |
| 21-22 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 48 |
| 23-24 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 47 |
| 25-27 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 15)) | 45 |
| 28-29 | Di chuyển hướng 0 (`0`) | (20, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 44 |
| 30-32 | Di chuyển hướng 0 (`0`) | (19, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 42 |
| 33-34 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 41 |
| 35-36 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 40 |
| 37-38 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 39 |
| 39-40 | Di chuyển hướng 5 (`5`) | (18, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 38 |
| 41-42 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 37 |
| 43-45 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 35 |
| 46-47 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 34 |
| 48-50 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 32 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 10) (ô=221)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 12)
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 5, 4, 4, 4, 4, 4, 4, 3, 4, 3, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 48 |
| 2-4 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 46 |
| 5-6 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 45 |
| 7-9 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 43 |
| 10-11 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 42 |
| 12 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 40 |
| 13-14 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 39 |
| 15-17 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 37 |
| 18-20 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 35 |
| 21-23 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(5, 2)) | 33 |
| 24-25 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 2)) | 32 |
| 26-27 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 31 |
| 28-29 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 30 |
| 30-32 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 28 |
| 33-35 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 26 |
| 36-38 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 24 |
| 39 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 22 |
| 40 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 20 |
| 41-42 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 19 |
| 43-44 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 18 |
| 45-47 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 16 |
| 48-49 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 15 |
| 50 | Chờ 1 bước (`-1`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); hướng tới tọa độ (3, 12) | 15 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 18) (ô=379)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(14, 17))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(14, 17))
- Mảng hành động đã gửi server: `[1, 1, 2, 3, 3, 4, 3, 3, 2, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 2, 3, 3, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 30 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 29 |
| 4-5 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(3, 16)) | 28 |
| 6-7 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 27 |
| 8 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 25 |
| 9-11 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 23 |
| 12 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 21 |
| 13-14 | Di chuyển hướng 3 (`3`) | (4, 20) | (5, 21) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(5, 21)) | 20 |
| 15-16 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 19 |
| 17-18 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 18 |
| 19-21 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 21)) | 16 |
| 22-23 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 15 |
| 24-25 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 14 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 13 |
| 28-29 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 20)) | 12 |
| 30-31 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 11 |
| 32-34 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 9 |
| 35-37 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 7 |
| 38-39 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 6 |
| 40-41 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 5 |
| 42 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 3 |
| 43-44 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 49 |
| 45-46 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 49 |
| 47-48 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 49 |
| 49 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 49 |
| 50 | Chờ 1 bước (`-1`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 49 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 12) (ô=270)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(18, 0))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(18, 0))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 1, 1, 0, 0, 3, 3, 4, 3, -7, 0, 1, 0, 0, 5, 0, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 17 |
| 2-3 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 16 |
| 4 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 14 |
| 5-6 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 13 |
| 7-8 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 12 |
| 9-11 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 10 |
| 12 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 8 |
| 13-14 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 7 |
| 15-16 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 6 |
| 17-18 | Di chuyển hướng 3 (`3`) | (20, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 5 |
| 19 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 3 |
| 20-22 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 1 |
| 23-29 | Chờ 7 bước (`-7`) | (20, 8) | (20, 8) | Dự kiến đứng yên tại (20, 8); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 49 |
| 30-31 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 48 |
| 32-34 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 46 |
| 35 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 44 |
| 36-37 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 43 |
| 38-39 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 42 |
| 40-42 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 40 |
| 43-45 | Di chuyển hướng 1 (`1`) | (18, 3) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 38 |
| 46-47 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 37 |
| 48-50 | Di chuyển hướng 0 (`0`) | (19, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 0)) | 35 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (11, 10) (ô=221)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(20, 8))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(20, 8))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 49 |
| 2-3 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 49 |
| 4-6 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 49 |
| 7 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 49 |
| 8-10 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 49 |
| 11-12 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 49 |
| 13-14 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 49 |
| 15 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 49 |
| 16-17 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 49 |
| 18-19 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 49 |
| 20-21 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 49 |
| 22-23 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 49 |
| 24-25 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 49 |
| 26 | Di chuyển hướng 1 (`1`) | (19, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 49 |
| 27-29 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 49 |
| 30-50 | Chờ 21 bước (`-21`) | (20, 8) | (20, 8) | Dự kiến đứng yên tại (20, 8); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 49 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (1, 10) (ô=211)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(14, 17))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(14, 17))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 3, 2, 3, 2, 2, 2, 3, 3, 2, 3, 2, 2, 2, 3, 3, -6, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 49 |
| 2-4 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 49 |
| 5-6 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 49 |
| 7-9 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 49 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 49 |
| 12-13 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 49 |
| 14-15 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 49 |
| 16-17 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 49 |
| 18-19 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 49 |
| 20 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 49 |
| 21 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 49 |
| 22-23 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 49 |
| 24-26 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 49 |
| 27-29 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 49 |
| 30 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 49 |
| 31-33 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 49 |
| 34-35 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 49 |
| 36 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 49 |
| 37-38 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 49 |
| 39-44 | Chờ 6 bước (`-6`) | (16, 19) | (16, 19) | Dự kiến đứng yên tại (16, 19); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 49 |
| 45-46 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 49 |
| 47-48 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 49 |
| 49 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 49 |
| 50 | Chờ 1 bước (`-1`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 49 |

