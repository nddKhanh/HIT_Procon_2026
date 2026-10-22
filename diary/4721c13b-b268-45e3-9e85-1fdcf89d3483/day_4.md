# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 66
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 25 | #1 | #5 | (2, 5) | 0 | 67 |
| 28 | #1 | #5 | (1, 6) | 66 | 67 |
| 31 | #1 | #5 | (2, 7) | 65 | 67 |
| 33 | #3 | #5 | (1, 8) | 29 | 67 |
| 34 | #1 | #5 | (1, 8) | 65 | 67 |
| 36 | #1 | #5 | (1, 9) | 66 | 67 |
| 39 | #1 | #5 | (2, 11) | 64 | 67 |
| 41 | #1 | #5 | (2, 12) | 66 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 1) (ô=37)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(12, 20))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(12, 20))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 3, 5, 4, 4, 4, 4, 3, 3, 4, 5, 4, 4, 3, 3, 4, 3, 4, 4, 5, 5, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 31 |
| 2-3 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 30 |
| 4-6 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 3)) | 28 |
| 7-8 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 27 |
| 9-10 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 5)) | 26 |
| 11-12 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 25 |
| 13 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 23 |
| 14-15 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 22 |
| 16-18 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 20 |
| 19-20 | Di chuyển hướng 4 (`4`) | (16, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 19 |
| 21-23 | Di chuyển hướng 3 (`3`) | (16, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 17 |
| 24-26 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 15 |
| 27-28 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 14 |
| 29-30 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 12 |
| 31-32 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 11 |
| 33-34 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 10 |
| 35-36 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 9 |
| 37-38 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 7 |
| 39-40 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 6 |
| 41-42 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 5 |
| 43-44 | Di chuyển hướng 4 (`4`) | (15, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 4 |
| 45-46 | Di chuyển hướng 4 (`4`) | (15, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 3 |
| 47-48 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 2 |
| 49-51 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 20)) | 0 |
| 52-65 | Chờ 14 bước (`-14`) | (12, 20) | (12, 20) | Dự kiến đứng yên tại (12, 20); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 20)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 5) (ô=107)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(11, 15))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(11, 15))
- Mảng hành động đã gửi server: `[-26, 4, 3, 4, 4, 3, 3, 3, 3, 2, 3, 3, 3, 1, 2, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-25 | Chờ 26 bước (`-26`) | (2, 5) | (2, 5) | Dự kiến đứng yên tại (2, 5); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 5)) | 67 |
| 26-27 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 67 |
| 28-30 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 67 |
| 31-33 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 67 |
| 34-35 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 67 |
| 36-37 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 66 |
| 38 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 67 |
| 39-40 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 67 |
| 41 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 65 |
| 42-43 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 64 |
| 44-46 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 62 |
| 47-48 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 61 |
| 49-51 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 59 |
| 52-53 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 58 |
| 54-55 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 57 |
| 56-58 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(8, 15)) | 55 |
| 59-60 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 54 |
| 61-62 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 53 |
| 63-64 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 52 |
| 65 | Chờ 1 bước (`-1`) | (11, 15) | (11, 15) | Dự kiến đứng yên tại (11, 15); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 52 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 8) (ô=179)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(13, 18))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(13, 18))
- Mảng hành động đã gửi server: `[3, 3, 2, 3, 3, 3, 1, 2, 1, 0, 1, 1, 0, 1, 1, 2, 5, 4, 4, 4, 4, 4, 3, 4, 4, 4, 3, 3, 4, 3, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 61 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 59 |
| 3 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 57 |
| 4-5 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 56 |
| 6-7 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 55 |
| 8-9 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 54 |
| 10-11 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 53 |
| 12-13 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 52 |
| 14-15 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 50 |
| 16-17 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 49 |
| 18-20 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 47 |
| 21-23 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 45 |
| 24-25 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 44 |
| 26-28 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 42 |
| 29-30 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 41 |
| 31 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 5)) | 39 |
| 32-33 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 38 |
| 34 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 36 |
| 35-36 | Di chuyển hướng 4 (`4`) | (17, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 35 |
| 37-39 | Di chuyển hướng 4 (`4`) | (17, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 33 |
| 40-41 | Di chuyển hướng 4 (`4`) | (16, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 32 |
| 42-44 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 30 |
| 45-46 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 29 |
| 47-49 | Di chuyển hướng 4 (`4`) | (16, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 27 |
| 50-51 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 26 |
| 52-53 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 25 |
| 54-55 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 24 |
| 56-57 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 22 |
| 58-59 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 21 |
| 60-61 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 20 |
| 62-63 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 19 |
| 64-65 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 18)) | 18 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 16) (ô=347)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 11)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 4, 0, 0, 0, 5, 0, 0, 0, 0, 1, 2, 2, 2, 3, 2, 1, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 49 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 48 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 47 |
| 6-7 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(8, 15)) | 46 |
| 8-9 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 45 |
| 10-12 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 43 |
| 13-14 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 42 |
| 15-16 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 41 |
| 17-19 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 39 |
| 20-21 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 38 |
| 22-24 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 36 |
| 25-26 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 35 |
| 27 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 33 |
| 28-29 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 32 |
| 30 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 30 |
| 31-32 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 67 |
| 33-34 | Di chuyển hướng 2 (`2`) | (1, 8) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 66 |
| 35-37 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 64 |
| 38-39 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 63 |
| 40 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 61 |
| 41-42 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 9)) | 60 |
| 43-44 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 59 |
| 45-46 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 58 |
| 47 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 56 |
| 48-50 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 54 |
| 51 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 52 |
| 52-53 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 51 |
| 54-55 | Di chuyển hướng 3 (`3`) | (11, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 50 |
| 56 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 48 |
| 57 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 46 |
| 58-59 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 45 |
| 60-62 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 43 |
| 63-64 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 42 |
| 65 | Chờ 1 bước (`-1`) | (16, 11) | (16, 11) | Dự kiến đứng yên tại (16, 11); hướng tới tọa độ (16, 11) | 42 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 12) (ô=270)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(12, 20))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(12, 20))
- Mảng hành động đã gửi server: `[0, 5, 0, 1, 1, 0, 1, 1, 2, 0, 0, 4, 4, 4, 4, 3, 4, 4, 3, 4, 4, 4, 3, 3, 4, 3, 4, 4, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 57 |
| 2-4 | Di chuyển hướng 5 (`5`) | (18, 11) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 55 |
| 5-6 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 54 |
| 7-9 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 52 |
| 10-12 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 50 |
| 13-14 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 49 |
| 15-17 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 47 |
| 18-19 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 46 |
| 20 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 5)) | 44 |
| 21-22 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 43 |
| 23-24 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 3)) | 42 |
| 25-26 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 41 |
| 27-28 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 40 |
| 29 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 38 |
| 30-31 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 37 |
| 32-34 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 35 |
| 35-36 | Di chuyển hướng 4 (`4`) | (16, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 34 |
| 37-39 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 32 |
| 40-41 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 31 |
| 42-44 | Di chuyển hướng 4 (`4`) | (16, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 29 |
| 45-46 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 28 |
| 47-48 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 27 |
| 49-50 | Di chuyển hướng 3 (`3`) | (14, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 26 |
| 51-52 | Di chuyển hướng 3 (`3`) | (15, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 24 |
| 53-54 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 23 |
| 55-56 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 22 |
| 57-58 | Di chuyển hướng 4 (`4`) | (15, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 21 |
| 59-60 | Di chuyển hướng 4 (`4`) | (15, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 20 |
| 61-62 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 19 |
| 63-65 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 20)) | 17 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (13, 10) (ô=223)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 12)
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 5, 5, 5, 5, 0, 5, 5, 0, 0, 5, 4, 3, 4, 4, 3, 3, 3, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 67 |
| 2 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 67 |
| 3 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 67 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 67 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 67 |
| 8 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 67 |
| 9-11 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 67 |
| 12 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 67 |
| 13-14 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 67 |
| 15-16 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 67 |
| 17-18 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 67 |
| 19 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 67 |
| 20-21 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 67 |
| 22-24 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 5)) | 67 |
| 25-26 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 67 |
| 27-29 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 67 |
| 30-32 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 67 |
| 33-34 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 67 |
| 35-36 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 67 |
| 37 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 67 |
| 38-39 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 67 |
| 40-65 | Chờ 26 bước (`-26`) | (2, 12) | (2, 12) | Dự kiến đứng yên tại (2, 12); hướng tới tọa độ (2, 12) | 67 |

