# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 60
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 13 | #5 | #6 | (12, 11) | 5 | 55 |
| 16 | #5 | #6 | (13, 11) | 54 | 55 |
| 18 | #5 | #6 | (14, 11) | 54 | 55 |
| 28 | #0 | #6 | (17, 14) | 0 | 55 |
| 38 | #2 | #6 | (18, 10) | 2 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (17, 15) (ô=377)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 23)
- Mảng hành động đã gửi server: `[1, -26, 4, 5, 4, 5, 4, 5, 5, 5, 4, 4, 3, 3, 3, 4, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (17, 15) | (17, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(17, 14)) | 0 |
| 2-27 | Chờ 26 bước (`-26`) | (17, 14) | (17, 14) | Dự kiến đứng yên tại (17, 14); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(17, 14)) | 55 |
| 28-29 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 15)) | 54 |
| 30-31 | Di chuyển hướng 5 (`5`) | (17, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 53 |
| 32 | Di chuyển hướng 4 (`4`) | (16, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 51 |
| 33-35 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 49 |
| 36 | Di chuyển hướng 4 (`4`) | (14, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 47 |
| 37 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 45 |
| 38-39 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 44 |
| 40 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 42 |
| 41-42 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 18)) | 41 |
| 43-44 | Di chuyển hướng 4 (`4`) | (10, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 40 |
| 45 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 38 |
| 46-47 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 37 |
| 48-50 | Di chuyển hướng 3 (`3`) | (11, 21) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 35 |
| 51-53 | Di chuyển hướng 4 (`4`) | (11, 22) | (11, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 23)) | 33 |
| 54-55 | Di chuyển hướng 2 (`2`) | (11, 23) | (12, 23) | Dự kiến đến điểm hẹn tọa độ (12, 23) | 32 |
| 56 | Di chuyển hướng 2 (`2`) | (12, 23) | (13, 23) | Dự kiến đến điểm hẹn tọa độ (13, 23) | 30 |
| 57-58 | Di chuyển hướng 2 (`2`) | (13, 23) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 29 |
| 59 | Di chuyển hướng 2 (`2`) | (14, 23) | (15, 23) | Dự kiến đến điểm hẹn tọa độ (15, 23) | 27 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 2) (ô=69)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(21, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(21, 2))
- Mảng hành động đã gửi server: `[-60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-59 | Chờ 60 bước (`-60`) | (21, 2) | (21, 2) | Dự kiến đứng yên tại (21, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(21, 2)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 10) (ô=258)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 15)
- Mảng hành động đã gửi server: `[-38, 2, 3, 3, 3, 3, 2, 5, 4, 5, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-37 | Chờ 38 bước (`-38`) | (18, 10) | (18, 10) | Dự kiến đứng yên tại (18, 10); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 10)) | 55 |
| 38-39 | Di chuyển hướng 2 (`2`) | (18, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 54 |
| 40-41 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 53 |
| 42-43 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 52 |
| 44 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 50 |
| 45-47 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 48 |
| 48-49 | Di chuyển hướng 2 (`2`) | (21, 14) | (22, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(22, 14)) | 47 |
| 50-51 | Di chuyển hướng 5 (`5`) | (22, 14) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 46 |
| 52-53 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 45 |
| 54 | Di chuyển hướng 5 (`5`) | (21, 15) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 43 |
| 55-57 | Di chuyển hướng 5 (`5`) | (20, 15) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 41 |
| 58-59 | Chờ 2 bước (`-2`) | (19, 15) | (19, 15) | Dự kiến đứng yên tại (19, 15); hướng tới tọa độ (19, 15) | 41 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 7) (ô=182)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(3, 23))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(3, 23))
- Mảng hành động đã gửi server: `[0, 5, 5, 0, 0, 0, 5, 4, 4, 4, 4, 4, 3, 4, 4, 5, 5, 3, 4, 4, 4, 3, 4, 3, 4, 3, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 53 |
| 2-3 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 6)) | 52 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 51 |
| 6-8 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 49 |
| 9-10 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 48 |
| 11-13 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 46 |
| 14-15 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 45 |
| 16-17 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 44 |
| 18-19 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 43 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 42 |
| 22-24 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 40 |
| 25-26 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 39 |
| 27 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 37 |
| 28 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 35 |
| 29-31 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 11)) | 33 |
| 32-33 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 32 |
| 34-35 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(4, 11)) | 31 |
| 36-37 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 30 |
| 38 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 28 |
| 39 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 26 |
| 40-41 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 25 |
| 42-44 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 23 |
| 45-46 | Di chuyển hướng 4 (`4`) | (3, 16) | (3, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(3, 17)) | 22 |
| 47-48 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 21 |
| 49-51 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 19 |
| 52 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 17 |
| 53-55 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 21)) | 15 |
| 56-57 | Di chuyển hướng 4 (`4`) | (4, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 14 |
| 58-59 | Di chuyển hướng 4 (`4`) | (3, 22) | (3, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(3, 23)) | 13 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 3) (ô=92)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(22, 6))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(22, 6))
- Mảng hành động đã gửi server: `[2, 2, 4, 3, 3, -51]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 3) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 7 |
| 2-4 | Di chuyển hướng 2 (`2`) | (21, 3) | (22, 3) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(22, 3)) | 5 |
| 5-6 | Di chuyển hướng 4 (`4`) | (22, 3) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 4 |
| 7 | Di chuyển hướng 3 (`3`) | (21, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 2 |
| 8 | Di chuyển hướng 3 (`3`) | (22, 5) | (22, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(22, 6)) | 0 |
| 9-59 | Chờ 51 bước (`-51`) | (22, 6) | (22, 6) | Dự kiến đứng yên tại (22, 6); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(22, 6)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (14, 8) (ô=206)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(22, 3))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(22, 3))
- Mảng hành động đã gửi server: `[3, 3, 5, 4, 5, 5, -3, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 2, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 12 |
| 1-3 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(15, 10)) | 10 |
| 4-5 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 9 |
| 6 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 7 |
| 7-8 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 6 |
| 9-10 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(12, 11)) | 5 |
| 11-13 | Chờ 3 bước (`-3`) | (12, 11) | (12, 11) | Dự kiến đứng yên tại (12, 11); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(12, 11)) | 55 |
| 14-15 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 55 |
| 16-17 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 55 |
| 18-19 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 54 |
| 20-22 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 52 |
| 23-25 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 50 |
| 26-27 | Di chuyển hướng 2 (`2`) | (17, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 49 |
| 28-29 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 48 |
| 30-31 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 47 |
| 32-33 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 46 |
| 34 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 44 |
| 35-37 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 42 |
| 38-39 | Di chuyển hướng 2 (`2`) | (21, 14) | (22, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(22, 14)) | 41 |
| 40-41 | Di chuyển hướng 0 (`0`) | (22, 14) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 40 |
| 42-44 | Di chuyển hướng 0 (`0`) | (22, 13) | (21, 12) | Dự kiến đến điểm hẹn tọa độ (21, 12) | 38 |
| 45-47 | Di chuyển hướng 0 (`0`) | (21, 12) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 36 |
| 48 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 34 |
| 49-50 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 33 |
| 51-52 | Di chuyển hướng 0 (`0`) | (22, 9) | (21, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 8)) | 32 |
| 53-54 | Di chuyển hướng 1 (`1`) | (21, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 31 |
| 55 | Di chuyển hướng 1 (`1`) | (22, 7) | (22, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(22, 6)) | 29 |
| 56-57 | Di chuyển hướng 0 (`0`) | (22, 6) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 28 |
| 58 | Di chuyển hướng 0 (`0`) | (22, 5) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 26 |
| 59 | Di chuyển hướng 1 (`1`) | (21, 4) | (22, 3) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(22, 3)) | 24 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 6) (ô=157)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(18, 10))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(18, 10))
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 5, 4, 2, 2, 3, 2, 3, 3, 2, 1, 1, 1, 0, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 55 |
| 2-3 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 55 |
| 4 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 55 |
| 5-7 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 55 |
| 8-10 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 55 |
| 11-12 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(12, 11)) | 55 |
| 13-14 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 55 |
| 15-16 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 55 |
| 17-18 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 55 |
| 19 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 55 |
| 20-21 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 55 |
| 22-24 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 55 |
| 25-27 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(17, 14)) | 55 |
| 28-29 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 55 |
| 30-32 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 55 |
| 33-35 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 55 |
| 36-37 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 10)) | 55 |
| 38-59 | Chờ 22 bước (`-22`) | (18, 10) | (18, 10) | Dự kiến đứng yên tại (18, 10); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 10)) | 55 |

