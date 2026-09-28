# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 51
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 20 | #3 | #6 | (14, 7) | 41 | 55 |
| 22 | #3 | #6 | (13, 6) | 54 | 55 |
| 28 | #1 | #6 | (13, 6) | 3 | 55 |
| 31 | #1 | #6 | (14, 7) | 54 | 55 |
| 34 | #1 | #6 | (14, 9) | 52 | 55 |
| 37 | #1 | #6 | (13, 10) | 53 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 22) (ô=539)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(3, 23))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(3, 23))
- Mảng hành động đã gửi server: `[4, 5, 5, 0, 5, 0, 5, 5, 5, 4, 4, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (11, 22) | (11, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 23)) | 19 |
| 3-4 | Di chuyển hướng 5 (`5`) | (11, 23) | (10, 23) | Dự kiến đến điểm hẹn tọa độ (10, 23) | 18 |
| 5-7 | Di chuyển hướng 5 (`5`) | (10, 23) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 16 |
| 8-10 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 14 |
| 11-12 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 13 |
| 13-14 | Di chuyển hướng 0 (`0`) | (7, 22) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 12 |
| 15-17 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 10 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 9 |
| 20-22 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 21)) | 7 |
| 23-24 | Di chuyển hướng 4 (`4`) | (4, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 6 |
| 25-26 | Di chuyển hướng 4 (`4`) | (3, 22) | (3, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(3, 23)) | 5 |
| 27-50 | Chờ 24 bước (`-24`) | (3, 23) | (3, 23) | Dự kiến đứng yên tại (3, 23); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(3, 23)) | 5 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 2) (ô=50)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 11)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 2, 2, 2, 3, 3, 3, 2, 2, -1, 3, 3, 4, 4, 5, 4, 5, 4, 5, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 21 |
| 2 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 19 |
| 3-5 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 17 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 16 |
| 8-9 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 15 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 13 |
| 11-13 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 11 |
| 14-15 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 10 |
| 16-17 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 9 |
| 18-20 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 7 |
| 21-22 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 6 |
| 23-25 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 6)) | 4 |
| 26-27 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 55 |
| 28 | Chờ 1 bước (`-1`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 55 |
| 29-30 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 55 |
| 31-32 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 54 |
| 33 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 55 |
| 34-36 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 55 |
| 37-39 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 53 |
| 40-41 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(12, 11)) | 52 |
| 42-43 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 51 |
| 44-46 | Di chuyển hướng 4 (`4`) | (11, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 49 |
| 47 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 47 |
| 48 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 45 |
| 49 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 43 |
| 50 | Chờ 1 bước (`-1`) | (8, 11) | (8, 11) | Dự kiến đứng yên tại (8, 11); hướng tới tọa độ (8, 11) | 43 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 15) (ô=380)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 10)
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 3, 3, 3, 3, 0, 0, 1, 1, 1, 1, 1, 0, 0, 5, 0, 0, 0, 5, 0, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (20, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 44 |
| 3-4 | Di chuyển hướng 3 (`3`) | (20, 16) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 43 |
| 5-7 | Di chuyển hướng 4 (`4`) | (21, 17) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 41 |
| 8-9 | Di chuyển hướng 4 (`4`) | (20, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 40 |
| 10-11 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 39 |
| 12 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 37 |
| 13 | Di chuyển hướng 3 (`3`) | (21, 21) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 35 |
| 14-16 | Di chuyển hướng 3 (`3`) | (21, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(22, 23)) | 33 |
| 17-18 | Di chuyển hướng 0 (`0`) | (22, 23) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 32 |
| 19-21 | Di chuyển hướng 0 (`0`) | (21, 22) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 30 |
| 22 | Di chuyển hướng 1 (`1`) | (21, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 28 |
| 23-25 | Di chuyển hướng 1 (`1`) | (21, 20) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 26 |
| 26-27 | Di chuyển hướng 1 (`1`) | (22, 19) | (22, 18) | Dự kiến đến điểm hẹn tọa độ (22, 18) | 25 |
| 28-29 | Di chuyển hướng 1 (`1`) | (22, 18) | (23, 17) | Dự kiến đến điểm hẹn tọa độ (23, 17) | 24 |
| 30 | Di chuyển hướng 1 (`1`) | (23, 17) | (23, 16) | Dự kiến đến điểm hẹn tọa độ (23, 16) | 22 |
| 31-32 | Di chuyển hướng 0 (`0`) | (23, 16) | (23, 15) | Dự kiến đến điểm hẹn tọa độ (23, 15) | 21 |
| 33-34 | Di chuyển hướng 0 (`0`) | (23, 15) | (22, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(22, 14)) | 20 |
| 35-36 | Di chuyển hướng 5 (`5`) | (22, 14) | (21, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 14)) | 19 |
| 37-38 | Di chuyển hướng 0 (`0`) | (21, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 18 |
| 39-41 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 16 |
| 42 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 14 |
| 43-44 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 13 |
| 45-46 | Di chuyển hướng 0 (`0`) | (19, 11) | (18, 10) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 10)) | 12 |
| 47-48 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 11 |
| 49-50 | Chờ 2 bước (`-2`) | (17, 10) | (17, 10) | Dự kiến đứng yên tại (17, 10); hướng tới tọa độ (17, 10) | 11 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 10) (ô=261)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 12)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 0, 5, 0, 0, 0, 0, 5, 4, 4, 5, 5, 4, 5, 5, 4, 4, 5, 5, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 54 |
| 2 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 52 |
| 3-4 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 51 |
| 5-6 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 50 |
| 7-8 | Di chuyển hướng 5 (`5`) | (18, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 49 |
| 9-10 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 48 |
| 11-13 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(15, 10)) | 46 |
| 14-15 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 45 |
| 16-18 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 43 |
| 19 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 55 |
| 20-21 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 55 |
| 22-23 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 6)) | 54 |
| 24-25 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 53 |
| 26-28 | Di chuyển hướng 4 (`4`) | (12, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 51 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 50 |
| 31-33 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 48 |
| 34-35 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 47 |
| 36 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 45 |
| 37-38 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 44 |
| 39 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 42 |
| 40-42 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 11)) | 40 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 39 |
| 45-46 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(4, 11)) | 38 |
| 47-48 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 37 |
| 49 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 35 |
| 50 | Chờ 1 bước (`-1`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); hướng tới tọa độ (5, 12) | 35 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (22, 6) (ô=166)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 17)
- Mảng hành động đã gửi server: `[0, 0, 1, 0, 5, 4, 4, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 4, 5, 4, 5, 5, 5, 4, 5, 4, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (22, 6) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 49 |
| 2 | Di chuyển hướng 0 (`0`) | (22, 5) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 47 |
| 3 | Di chuyển hướng 1 (`1`) | (21, 4) | (22, 3) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(22, 3)) | 45 |
| 4-5 | Di chuyển hướng 0 (`0`) | (22, 3) | (21, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(21, 2)) | 44 |
| 6-7 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 43 |
| 8-10 | Di chuyển hướng 4 (`4`) | (20, 2) | (20, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(20, 3)) | 41 |
| 11-12 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 40 |
| 13 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 38 |
| 14-15 | Di chuyển hướng 3 (`3`) | (20, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 37 |
| 16-17 | Di chuyển hướng 3 (`3`) | (20, 6) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 36 |
| 18 | Di chuyển hướng 3 (`3`) | (21, 7) | (21, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(21, 8)) | 34 |
| 19-20 | Di chuyển hướng 3 (`3`) | (21, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 33 |
| 21-22 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 32 |
| 23-24 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 31 |
| 25 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 29 |
| 26 | Di chuyển hướng 4 (`4`) | (20, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 27 |
| 27-29 | Di chuyển hướng 4 (`4`) | (20, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 25 |
| 30-32 | Di chuyển hướng 5 (`5`) | (19, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 23 |
| 33 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(17, 14)) | 21 |
| 34-35 | Di chuyển hướng 4 (`4`) | (17, 14) | (17, 15) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 15)) | 20 |
| 36-37 | Di chuyển hướng 5 (`5`) | (17, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 19 |
| 38 | Di chuyển hướng 4 (`4`) | (16, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 17 |
| 39-41 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 15 |
| 42 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 13 |
| 43-44 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 12 |
| 45 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 10 |
| 46 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 8 |
| 47-48 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 18)) | 7 |
| 49-50 | Di chuyển hướng 1 (`1`) | (10, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 6 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (3, 15) (ô=363)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(3, 17))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(3, 17))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 4, 4, 4, 4, 4, 4, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 13 |
| 3-4 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 12 |
| 5 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 10 |
| 6 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 8 |
| 7-8 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(6, 11)) | 7 |
| 9-10 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 6 |
| 11-12 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 5 |
| 13-14 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 4 |
| 15-16 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 3 |
| 17-19 | Di chuyển hướng 4 (`4`) | (4, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 1 |
| 20-21 | Di chuyển hướng 4 (`4`) | (3, 16) | (3, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(3, 17)) | 0 |
| 22-50 | Chờ 29 bước (`-29`) | (3, 17) | (3, 17) | Dự kiến đứng yên tại (3, 17); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(3, 17)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (21, 10) (ô=261)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 10)
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 0, 5, 5, 5, 5, 0, -7, 3, 3, 4, 4, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 55 |
| 2-4 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 55 |
| 5-6 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 55 |
| 7-9 | Di chuyển hướng 0 (`0`) | (19, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 55 |
| 10 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 55 |
| 11-12 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 55 |
| 13-14 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 55 |
| 15 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 55 |
| 16-18 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 55 |
| 19-20 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 55 |
| 21-27 | Chờ 7 bước (`-7`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(13, 6)) | 55 |
| 28-29 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 55 |
| 30-31 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 55 |
| 32 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 55 |
| 33-35 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 55 |
| 36-50 | Chờ 15 bước (`-15`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); hướng tới tọa độ (13, 10) | 55 |

