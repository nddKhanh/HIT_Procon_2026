# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 46
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #6 | (9, 13) | 50 | 51 |
| 8 | #3 | #6 | (6, 15) | 0 | 51 |
| 15 | #0 | #6 | (7, 9) | 32 | 51 |
| 16 | #0 | #6 | (7, 8) | 49 | 51 |
| 17 | #0 | #6 | (7, 7) | 49 | 51 |
| 18 | #0 | #6 | (7, 6) | 49 | 51 |
| 19 | #0 | #6 | (8, 6) | 49 | 51 |
| 20 | #0 | #6 | (9, 6) | 49 | 51 |
| 21 | #0 | #6 | (10, 6) | 49 | 51 |
| 22 | #0 | #6 | (11, 6) | 49 | 51 |
| 35 | #4 | #6 | (19, 8) | 1 | 51 |
| 46 | #2 | #6 | (19, 8) | 8 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 13) (ô=334)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(16, 4))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(16, 4))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 5, 5, 2, 1, 1, 1, 2, 1, 0, 1, 2, 2, 2, 2, 1, 3, 4, 3, 1, 1, 1, 2, 1, 2, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 49 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 47 |
| 3 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 45 |
| 4 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 43 |
| 5 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 41 |
| 6-7 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 12)) | 40 |
| 8-9 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 39 |
| 10-11 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 38 |
| 12 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 13 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 34 |
| 14 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 51 |
| 15 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 51 |
| 16 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 51 |
| 17 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 51 |
| 18 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 51 |
| 19 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 51 |
| 20 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 51 |
| 21 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 51 |
| 22 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 49 |
| 23-24 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 48 |
| 25 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 46 |
| 26-27 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 45 |
| 28-29 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 44 |
| 30 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 42 |
| 31 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 40 |
| 32 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 38 |
| 33 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 36 |
| 34 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 4)) | 34 |
| 35-45 | Chờ 11 bước (`-11`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 4)) | 34 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 15) (ô=378)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(10, 12))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(10, 12))
- Mảng hành động đã gửi server: `[2, 1, 1, 0, 3, 2, 3, 3, 3, 3, 5, 5, 5, 2, 1, 2, 2, 2, 1, 3, 0, 0, 0, 2, 1, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 35 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 34 |
| 4-5 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 33 |
| 6 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 31 |
| 7-8 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 30 |
| 9 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 28 |
| 10 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 26 |
| 11 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 24 |
| 12 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 22 |
| 13 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 20 |
| 14-15 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 19 |
| 16-17 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 18 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 17 |
| 20-21 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 16 |
| 22-23 | Di chuyển hướng 1 (`1`) | (6, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 15 |
| 24 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 13 |
| 25 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 11 |
| 26 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 9 |
| 27-29 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 7 |
| 30-31 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 6 |
| 32-33 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 5 |
| 34-35 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 4 |
| 36-37 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 2 |
| 38-39 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 1 |
| 40-41 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 0 |
| 42-45 | Chờ 4 bước (`-4`) | (10, 12) | (10, 12) | Dự kiến đứng yên tại (10, 12); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 13) (ô=335)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(19, 8))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(19, 8))
- Mảng hành động đã gửi server: `[5, 0, 5, 0, 1, 0, 1, 0, 1, 2, 2, 2, 2, 1, 3, 4, 3, 2, 3, 3, 3, 1, 2, 1, 1, 1, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 51 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 50 |
| 4-5 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 49 |
| 6-7 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 47 |
| 8 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 45 |
| 9 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 43 |
| 10 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 41 |
| 11 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 39 |
| 12 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 37 |
| 13 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 35 |
| 14 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 33 |
| 15 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 31 |
| 16 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 29 |
| 17 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 27 |
| 18-19 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 26 |
| 20 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 24 |
| 21-22 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 23 |
| 23-24 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 22 |
| 25-27 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 20 |
| 28-29 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 18 |
| 30-31 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 16 |
| 32-33 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 15 |
| 34-35 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 14 |
| 36-37 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 13 |
| 38-39 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 11 |
| 40-41 | Di chuyển hướng 1 (`1`) | (17, 8) | (18, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 7)) | 10 |
| 42-43 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 9 |
| 44-45 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 17) (ô=434)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(10, 17))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(10, 17))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, -1, 5, 5, 3, 3, 4, 0, 0, 0, 2, 2, 2, 1, 1, 2, 2, 2, 4, 3, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 4 |
| 3-4 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 3 |
| 5-6 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 2 |
| 7 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 51 |
| 8 | Chờ 1 bước (`-1`) | (6, 15) | (6, 15) | Dự kiến đứng yên tại (6, 15); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 51 |
| 9-10 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 50 |
| 11 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 48 |
| 12-13 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 47 |
| 14-16 | Di chuyển hướng 3 (`3`) | (4, 16) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 45 |
| 17-18 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 44 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 43 |
| 21 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 41 |
| 22-24 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 39 |
| 25-26 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 38 |
| 27-28 | Di chuyển hướng 2 (`2`) | (4, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 37 |
| 29 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 35 |
| 30-31 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 34 |
| 32 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 32 |
| 33 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 30 |
| 34 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 28 |
| 35-36 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 27 |
| 37-38 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 26 |
| 39-40 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 24 |
| 41-42 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 23 |
| 43-44 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 22 |
| 45 | Chờ 1 bước (`-1`) | (10, 17) | (10, 17) | Dự kiến đứng yên tại (10, 17); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (19, 9) (ô=244)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(15, 11))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(15, 11))
- Mảng hành động đã gửi server: `[1, -33, 4, 5, 4, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 1 |
| 2-34 | Chờ 33 bước (`-33`) | (19, 8) | (19, 8) | Dự kiến đứng yên tại (19, 8); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 51 |
| 35-36 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 50 |
| 37-38 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 49 |
| 39 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 47 |
| 40 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 45 |
| 41-42 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 44 |
| 43-44 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 43 |
| 45 | Chờ 1 bước (`-1`) | (15, 11) | (15, 11) | Dự kiến đứng yên tại (15, 11); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 43 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 15) (ô=381)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(10, 13))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(10, 13))
- Mảng hành động đã gửi server: `[5, 5, 5, 1, 0, 1, 3, 3, 3, 3, 4, 4, 1, 2, 2, 2, 2, 2, 1, 0, 0, 0, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 39 |
| 2 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 37 |
| 3-4 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 36 |
| 5-6 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 35 |
| 7-9 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 33 |
| 10 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 12)) | 31 |
| 11-12 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 30 |
| 13-15 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 28 |
| 16-17 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 27 |
| 18 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 25 |
| 19-20 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 24 |
| 21-22 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 23 |
| 23-24 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 22 |
| 25-26 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 21 |
| 27-28 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 20 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 19 |
| 31-32 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 18 |
| 33-35 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 16 |
| 36-37 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 15 |
| 38-39 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 14 |
| 40-41 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 13 |
| 42-43 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 11 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 10 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (10, 13) (ô=335)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(19, 8))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(19, 8))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 4, 1, 1, 1, 0, 1, 0, 1, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 51 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 51 |
| 5 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 51 |
| 6 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 51 |
| 7-8 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 51 |
| 9 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 51 |
| 10 | Di chuyển hướng 1 (`1`) | (7, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 51 |
| 11-12 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 51 |
| 13 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 51 |
| 14 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 51 |
| 15 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 51 |
| 16 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 51 |
| 17 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 51 |
| 18 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 51 |
| 19 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 51 |
| 20 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 51 |
| 21 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 51 |
| 22 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 51 |
| 23 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 51 |
| 24 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 51 |
| 25 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 51 |
| 26 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 51 |
| 27-28 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 51 |
| 29-30 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 51 |
| 31-32 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 51 |
| 33-34 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 51 |
| 35-45 | Chờ 11 bước (`-11`) | (19, 8) | (19, 8) | Dự kiến đứng yên tại (19, 8); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 51 |

