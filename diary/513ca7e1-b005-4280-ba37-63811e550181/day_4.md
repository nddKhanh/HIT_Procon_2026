# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 56
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 5 | #4 | #6 | (13, 7) | 2 | 55 |
| 8 | #4 | #6 | (12, 7) | 54 | 55 |
| 13 | #4 | #6 | (10, 7) | 52 | 55 |
| 24 | #5 | #6 | (12, 12) | 1 | 55 |
| 26 | #5 | #6 | (12, 13) | 54 | 55 |
| 36 | #1 | #6 | (8, 17) | 0 | 55 |
| 37 | #4 | #6 | (8, 17) | 32 | 55 |
| 42 | #5 | #6 | (8, 17) | 41 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (18, 11) (ô=282)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(12, 3))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(12, 3))
- Mảng hành động đã gửi server: `[1, 0, 1, 2, 0, 0, 0, 0, 5, 4, 4, 5, 0, 4, 4, 0, 0, 0, 1, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 31 |
| 1 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 29 |
| 2 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 27 |
| 3 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 8)) | 25 |
| 4-5 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 24 |
| 6-7 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 23 |
| 8-9 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 21 |
| 10-11 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 20 |
| 12-13 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 19 |
| 14-15 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 18 |
| 16-17 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 16 |
| 18-21 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 14 |
| 22-25 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 12 |
| 26-27 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 11 |
| 28-31 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 9 |
| 32-33 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 8 |
| 34-37 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 6 |
| 38 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 4 |
| 39-40 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 2 |
| 41-55 | Chờ 15 bước (`-15`) | (12, 3) | (12, 3) | Dự kiến đứng yên tại (12, 3); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 4) (ô=113)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(10, 12))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(10, 12))
- Mảng hành động đã gửi server: `[5, 3, 3, 3, 3, 4, 3, 4, 3, 4, 3, 4, 4, 5, 5, 5, 5, 5, 4, 4, 5, 5, 5, 5, 1, 1, 2, 2, 2, 1, 1, 0, 1, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 41 |
| 2-3 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 40 |
| 4-5 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 39 |
| 6 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 37 |
| 7 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 35 |
| 8 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 33 |
| 9 | Di chuyển hướng 3 (`3`) | (18, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 31 |
| 10 | Di chuyển hướng 4 (`4`) | (18, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 29 |
| 11 | Di chuyển hướng 3 (`3`) | (18, 11) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 27 |
| 12 | Di chuyển hướng 4 (`4`) | (18, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 25 |
| 13 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 23 |
| 14 | Di chuyển hướng 4 (`4`) | (18, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 21 |
| 15 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 19 |
| 16 | Di chuyển hướng 5 (`5`) | (17, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 17 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 15 |
| 18 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 13 |
| 19 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 11 |
| 20 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 9 |
| 21-22 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 7 |
| 23-24 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 6 |
| 25-26 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 5 |
| 27-28 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 4 |
| 29-31 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 2 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 1 |
| 34-35 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 55 |
| 36-37 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 38 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 52 |
| 39 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 50 |
| 40 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 48 |
| 41-42 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 46 |
| 43-44 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 45 |
| 45-46 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 44 |
| 47-49 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 42 |
| 50-51 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 41 |
| 52-54 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 39 |
| 55 | Chờ 1 bước (`-1`) | (10, 12) | (10, 12) | Dự kiến đứng yên tại (10, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 39 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 7) (ô=181)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 7)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 2, 3, 2, 3, 0, 0, 0, 0, 5, 4, 4, 5, 0, 5, 0, 0, 4, 4, 4, 3, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 54 |
| 2 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 52 |
| 3-6 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 50 |
| 7-10 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 48 |
| 11 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 46 |
| 12 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 44 |
| 13 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 42 |
| 14-15 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 8)) | 41 |
| 16-17 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 40 |
| 18-19 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 39 |
| 20-21 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 37 |
| 22-23 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 36 |
| 24-25 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 35 |
| 26-27 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 34 |
| 28-29 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 32 |
| 30-33 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 30 |
| 34-37 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 28 |
| 38-39 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 27 |
| 40-41 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 26 |
| 42-44 | Di chuyển hướng 0 (`0`) | (12, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 24 |
| 45-46 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 23 |
| 47-48 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 21 |
| 49 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 19 |
| 50-51 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 18 |
| 52-53 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 17 |
| 54-55 | Chờ 2 bước (`-2`) | (10, 7) | (10, 7) | Dự kiến đứng yên tại (10, 7); hướng tới tọa độ (10, 7) | 17 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 12) (ô=300)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(12, 18))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(12, 18))
- Mảng hành động đã gửi server: `[5, 5, 4, 2, 3, 2, 4, 3, 4, 3, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 12 |
| 2-4 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 10 |
| 5-6 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 9 |
| 7-8 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 8 |
| 9-10 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 7 |
| 11 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 5 |
| 12-13 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 4 |
| 14-15 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 3 |
| 16-17 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 1 |
| 18-19 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 0 |
| 20-55 | Chờ 36 bước (`-36`) | (12, 18) | (12, 18) | Dự kiến đứng yên tại (12, 18); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 7) (ô=179)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 16)
- Mảng hành động đã gửi server: `[2, 2, -1, 5, 5, 5, 4, 4, 3, 4, 4, 5, 4, 0, 4, 3, 4, 2, 3, 3, 3, 5, 2, 2, 2, 2, 2, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 4 |
| 2-4 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 55 |
| 5 | Chờ 1 bước (`-1`) | (13, 7) | (13, 7) | Dự kiến đứng yên tại (13, 7); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 55 |
| 6-7 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 55 |
| 8-10 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 53 |
| 11-12 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 55 |
| 13-15 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 53 |
| 16 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 51 |
| 17 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 49 |
| 18 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 47 |
| 19 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 45 |
| 20-22 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 43 |
| 23-24 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 41 |
| 25-26 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 40 |
| 27-28 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 39 |
| 29-30 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 38 |
| 31-32 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 37 |
| 33-34 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 36 |
| 35 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 34 |
| 36 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 55 |
| 37-38 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 54 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 53 |
| 41-42 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 52 |
| 43-44 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 51 |
| 45-47 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 49 |
| 48-49 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 48 |
| 50-51 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 47 |
| 52-53 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 46 |
| 54-55 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 45 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (10, 12) (ô=298)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(6, 12))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(6, 12))
- Mảng hành động đã gửi server: `[2, 2, -19, 4, 3, 4, 3, 4, 5, 0, 5, 5, 4, 4, 0, 0, 0, 1, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 3 |
| 2-4 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 1 |
| 5-23 | Chờ 19 bước (`-19`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 55 |
| 24-25 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 55 |
| 26-28 | Di chuyển hướng 3 (`3`) | (12, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 53 |
| 29-30 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 52 |
| 31-32 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 51 |
| 33-34 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 49 |
| 35-36 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 48 |
| 37-38 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 47 |
| 39 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 45 |
| 40 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 43 |
| 41 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 55 |
| 42-43 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 54 |
| 44-45 | Di chuyển hướng 0 (`0`) | (7, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 53 |
| 46 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 51 |
| 47-48 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 49 |
| 49-50 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 48 |
| 51-52 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 47 |
| 53-54 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 46 |
| 55 | Chờ 1 bước (`-1`) | (6, 12) | (6, 12) | Dự kiến đứng yên tại (6, 12); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 46 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 6) (ô=156)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[3, 5, 5, 5, 4, 4, 3, 4, 3, 2, 2, 2, 4, 4, 4, 4, 5, 5, 4, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 55 |
| 6-8 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 55 |
| 9-10 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 55 |
| 11-13 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 55 |
| 14 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 55 |
| 15 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 55 |
| 16 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 55 |
| 17 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 55 |
| 18 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 55 |
| 19-20 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 55 |
| 21-23 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 55 |
| 24-25 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 55 |
| 26-28 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 55 |
| 29 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 55 |
| 30-31 | Di chuyển hướng 4 (`4`) | (11, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 32 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 55 |
| 33 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 34 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 55 |
| 35-55 | Chờ 21 bước (`-21`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 55 |

