# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 60
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #1 | #6 | (16, 4) | 0 | 55 |
| 16 | #2 | #6 | (17, 4) | 0 | 55 |
| 21 | #0 | #6 | (15, 6) | 23 | 55 |
| 21 | #1 | #6 | (15, 6) | 52 | 55 |
| 22 | #2 | #6 | (15, 6) | 51 | 55 |
| 25 | #0 | #6 | (14, 6) | 53 | 55 |
| 25 | #1 | #6 | (14, 6) | 53 | 55 |
| 26 | #2 | #6 | (14, 6) | 53 | 55 |
| 29 | #0 | #6 | (13, 6) | 52 | 55 |
| 32 | #2 | #6 | (13, 6) | 52 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (18, 5) (ô=138)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 13)
- Mảng hành động đã gửi server: `[0, 5, 3, 3, 3, 2, 3, 0, 5, 0, 5, 5, 5, 0, 4, 4, 5, 5, 0, 1, 1, 1, 5, 4, 4, 4, 4, 3, 4, 3, 4, 3, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 39 |
| 2-3 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 38 |
| 4-5 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 37 |
| 6-7 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 36 |
| 8 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 34 |
| 9 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 32 |
| 10-11 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 8)) | 31 |
| 12-13 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 30 |
| 14-15 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 29 |
| 16 | Di chuyển hướng 0 (`0`) | (18, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 27 |
| 17 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 25 |
| 18 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 23 |
| 19-22 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 53 |
| 23-26 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 53 |
| 27-28 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 55 |
| 29-30 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 53 |
| 31-32 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 52 |
| 33-35 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 50 |
| 36-37 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 49 |
| 38-39 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 48 |
| 40 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 46 |
| 41-42 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 44 |
| 43-44 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 43 |
| 45-46 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 42 |
| 47-48 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 41 |
| 49 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 39 |
| 50 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 37 |
| 51 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 35 |
| 52 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 33 |
| 53 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 31 |
| 54 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 29 |
| 55 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 27 |
| 56-57 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 25 |
| 58-59 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 24 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 4) (ô=112)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(7, 18))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(7, 18))
- Mảng hành động đã gửi server: `[-15, 4, 4, 5, 4, 5, 5, 5, 5, 4, 4, 3, 4, 4, 5, 4, 0, 4, 3, 4, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-14 | Chờ 15 bước (`-15`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 55 |
| 15-16 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 54 |
| 17-18 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 52 |
| 19-22 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 53 |
| 23-26 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 53 |
| 27 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 51 |
| 28-29 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 50 |
| 30-32 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 48 |
| 33-34 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 47 |
| 35-37 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 45 |
| 38 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 43 |
| 39 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 41 |
| 40 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 39 |
| 41 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 37 |
| 42-44 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 35 |
| 45-46 | Di chuyển hướng 4 (`4`) | (7, 12) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 33 |
| 47-48 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 32 |
| 49-50 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 31 |
| 51-52 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 30 |
| 53-54 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 29 |
| 55-56 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 28 |
| 57-58 | Di chuyển hướng 3 (`3`) | (6, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 26 |
| 59 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 24 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 5) (ô=138)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 16)
- Mảng hành động đã gửi server: `[0, -14, 5, 4, 4, 5, 0, 4, 4, 5, 5, 5, 4, 4, 3, 4, 3, 2, 3, 3, 2, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 0 |
| 2-15 | Chờ 14 bước (`-14`) | (17, 4) | (17, 4) | Dự kiến đứng yên tại (17, 4); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 55 |
| 16-17 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 54 |
| 18-19 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 53 |
| 20-21 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 55 |
| 22-25 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 55 |
| 26-29 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 53 |
| 30-31 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 55 |
| 32-33 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 53 |
| 34-35 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 52 |
| 36-38 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 50 |
| 39-40 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 49 |
| 41-43 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 47 |
| 44 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 45 |
| 45 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 43 |
| 46 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 41 |
| 47 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 39 |
| 48-49 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 37 |
| 50-51 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 36 |
| 52-53 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 35 |
| 54-55 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 33 |
| 56-57 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 32 |
| 58-59 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 31 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 12) (ô=299)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(8, 17))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(8, 17))
- Mảng hành động đã gửi server: `[2, 5, 5, 4, 2, 3, 2, 4, 3, 4, 3, 5, 5, 5, 5, 5, 1, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 20 |
| 3-4 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 19 |
| 5-7 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 17 |
| 8-9 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 16 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 15 |
| 12-13 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 14 |
| 14-15 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 12 |
| 16-17 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 11 |
| 18-19 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 10 |
| 20-21 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 8 |
| 22-23 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 7 |
| 24-25 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 6 |
| 26-27 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 5 |
| 28-29 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 4 |
| 30-32 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 2 |
| 33-34 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 1 |
| 35-36 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 0 |
| 37-59 | Chờ 23 bước (`-23`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 12) (ô=300)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Mảng hành động đã gửi server: `[-60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-59 | Chờ 60 bước (`-60`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (12, 12) (ô=300)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Mảng hành động đã gửi server: `[-60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-59 | Chờ 60 bước (`-60`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 5) (ô=133)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 6)
- Mảng hành động đã gửi server: `[2, 3, 2, 1, 1, 2, 4, 4, 5, 5, 5, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 55 |
| 2-3 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 55 |
| 4-7 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 55 |
| 8-11 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 55 |
| 12-13 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 55 |
| 14-15 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 55 |
| 16-17 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 55 |
| 18-19 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 55 |
| 20 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 55 |
| 21-24 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 55 |
| 25-28 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 55 |
| 29-59 | Chờ 31 bước (`-31`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); hướng tới tọa độ (13, 6) | 55 |

