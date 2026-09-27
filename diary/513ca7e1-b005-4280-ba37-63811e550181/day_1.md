# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 50
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 16 | #1 | #6 | (9, 8) | 10 | 55 |
| 17 | #0 | #6 | (9, 8) | 7 | 55 |
| 33 | #2 | #6 | (10, 18) | 1 | 55 |
| 35 | #2 | #6 | (11, 18) | 54 | 55 |
| 37 | #5 | #6 | (12, 17) | 0 | 55 |
| 39 | #3 | #6 | (12, 18) | 1 | 55 |
| 41 | #3 | #6 | (12, 17) | 54 | 55 |
| 43 | #3 | #6 | (11, 16) | 54 | 55 |
| 44 | #3 | #6 | (10, 16) | 53 | 55 |
| 45 | #3 | #6 | (9, 16) | 53 | 55 |
| 46 | #3 | #6 | (8, 16) | 53 | 55 |
| 47 | #3 | #6 | (7, 16) | 53 | 55 |
| 48 | #3 | #6 | (7, 15) | 53 | 55 |
| 49 | #3 | #6 | (6, 15) | 53 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 16) (ô=396)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 6)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 0, 1, 0, 1, 1, 2, 2, 2, 2, 1, 2, 2, 2, 3, 2, 0, 0, 0, 5, 4, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 20 |
| 1-2 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 19 |
| 3-4 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 17 |
| 5-6 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 16 |
| 7-8 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 15 |
| 9-10 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 13 |
| 11-12 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 11 |
| 13-14 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 9 |
| 15-16 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 55 |
| 17-18 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 53 |
| 19-21 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 51 |
| 22-23 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 50 |
| 24-26 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 48 |
| 27-28 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 47 |
| 29 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 45 |
| 30-31 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 43 |
| 32-33 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 41 |
| 34 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 39 |
| 35 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 37 |
| 36 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 35 |
| 37-38 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 34 |
| 39 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 32 |
| 40-41 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 31 |
| 42-43 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 30 |
| 44-45 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 29 |
| 46 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 27 |
| 47-48 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 25 |
| 49 | Chờ 1 bước (`-1`) | (14, 6) | (14, 6) | Dự kiến đứng yên tại (14, 6); hướng tới tọa độ (14, 6) | 25 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 15) (ô=372)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(19, 8))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(19, 8))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 0, 1, 0, 1, 0, 1, 1, 1, 1, 2, -1, 3, 3, 2, 3, 2, 1, 1, 2, 3, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 22 |
| 2-3 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 20 |
| 4-5 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 19 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 18 |
| 8-9 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 16 |
| 10-11 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 14 |
| 12-13 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 12 |
| 14-15 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 55 |
| 16-17 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 53 |
| 18 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 51 |
| 19 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 49 |
| 20 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 47 |
| 21-22 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 46 |
| 23-24 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 45 |
| 25 | Chờ 1 bước (`-1`) | (12, 3) | (12, 3) | Dự kiến đứng yên tại (12, 3); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 45 |
| 26-27 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 44 |
| 28-30 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 42 |
| 31-32 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 41 |
| 33-34 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 40 |
| 35-36 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 38 |
| 37-38 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 36 |
| 39 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 34 |
| 40-41 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 33 |
| 42-43 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 32 |
| 44-45 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 31 |
| 46 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 29 |
| 47-48 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 8)) | 28 |
| 49 | Chờ 1 bước (`-1`) | (19, 8) | (19, 8) | Dự kiến đứng yên tại (19, 8); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 8)) | 28 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 13) (ô=318)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Mảng hành động đã gửi server: `[2, 0, 3, 4, 4, 3, 3, 3, 2, 0, 2, 3, 2, -9, 2, 2, 0, 0, 1, 1, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 17 |
| 2-3 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 16 |
| 4-5 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 15 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 14 |
| 8-9 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 13 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 12 |
| 12 | Di chuyển hướng 3 (`3`) | (6, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 10 |
| 13 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 8 |
| 14-15 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 7 |
| 16-17 | Di chuyển hướng 0 (`0`) | (8, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 6 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 5 |
| 20 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 3 |
| 21-23 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 1 |
| 24-32 | Chờ 9 bước (`-9`) | (10, 18) | (10, 18) | Dự kiến đứng yên tại (10, 18); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 55 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 55 |
| 35-36 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 54 |
| 37-38 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 53 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 52 |
| 41 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 50 |
| 42-43 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 49 |
| 44-45 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 48 |
| 46-48 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 46 |
| 49 | Chờ 1 bước (`-1`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 46 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 18) (ô=439)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(6, 15))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(6, 15))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 2, 2, 4, 3, 4, 4, 3, 3, -13, 0, 0, 5, 5, 5, 5, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 20 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 19 |
| 4 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 17 |
| 5 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 15 |
| 6 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 13 |
| 7-8 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 12 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 11 |
| 11-13 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 9 |
| 14-15 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 8 |
| 16-18 | Di chuyển hướng 3 (`3`) | (12, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 6 |
| 19-20 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 5 |
| 21-22 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 4 |
| 23 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 2 |
| 24-25 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 1 |
| 26-38 | Chờ 13 bước (`-13`) | (12, 18) | (12, 18) | Dự kiến đứng yên tại (12, 18); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 55 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 41-42 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 55 |
| 43 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 44 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 55 |
| 45 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 46 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 55 |
| 47 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 55 |
| 48 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 55 |
| 49 | Chờ 1 bước (`-1`) | (6, 15) | (6, 15) | Dự kiến đứng yên tại (6, 15); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 55 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 18) (ô=443)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(6, 13))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(6, 13))
- Mảng hành động đã gửi server: `[2, 5, 5, 5, 5, 0, 0, 0, 5, 1, 1, 0, 4, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 17 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 16 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 15 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 14 |
| 8-10 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 12 |
| 11-12 | Di chuyển hướng 0 (`0`) | (8, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 11 |
| 13-14 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 10 |
| 15 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 8 |
| 16 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 6 |
| 17-18 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 5 |
| 19-20 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 4 |
| 21-22 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 3 |
| 23-24 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 2 |
| 25-49 | Chờ 25 bước (`-25`) | (6, 13) | (6, 13) | Dự kiến đứng yên tại (6, 13); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 2 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (11, 15) (ô=371)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(7, 18))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(7, 18))
- Mảng hành động đã gửi server: `[1, 1, 1, 4, 3, 4, 3, 4, -21, 0, 5, 5, 5, 5, 5, 0, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 11 |
| 1-2 | Di chuyển hướng 1 (`1`) | (11, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 9 |
| 3-5 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 7 |
| 6-7 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 6 |
| 8-10 | Di chuyển hướng 3 (`3`) | (12, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 4 |
| 11-12 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 3 |
| 13-14 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 2 |
| 15 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 0 |
| 16-36 | Chờ 21 bước (`-21`) | (12, 17) | (12, 17) | Dự kiến đứng yên tại (12, 17); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 37-38 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 39 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 52 |
| 40 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 50 |
| 41 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 48 |
| 42 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 46 |
| 43 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 44 |
| 44 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 42 |
| 45-46 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 41 |
| 47 | Di chuyển hướng 3 (`3`) | (6, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 39 |
| 48 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 37 |
| 49 | Chờ 1 bước (`-1`) | (7, 18) | (7, 18) | Dự kiến đứng yên tại (7, 18); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 37 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 6) (ô=157)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(6, 15))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(6, 15))
- Mảng hành động đã gửi server: `[5, 0, 0, 1, 4, 4, 5, 4, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 3, 3, 2, 1, 3, 0, 0, 5, 5, 5, 5, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 55 |
| 4 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 55 |
| 5 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 6-7 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 55 |
| 8-9 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 10-11 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 55 |
| 12 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 55 |
| 13 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 55 |
| 14 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 55 |
| 15 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 55 |
| 16-17 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 55 |
| 18-19 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 55 |
| 20-21 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 55 |
| 22-23 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 55 |
| 24-25 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 55 |
| 26 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 55 |
| 27 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 55 |
| 28 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 55 |
| 29 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 55 |
| 30-32 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 55 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 55 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 37-38 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 55 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 41-42 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 55 |
| 43 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 44 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 55 |
| 45 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 46 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 55 |
| 47 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 55 |
| 48 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 55 |
| 49 | Chờ 1 bước (`-1`) | (6, 15) | (6, 15) | Dự kiến đứng yên tại (6, 15); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 55 |

