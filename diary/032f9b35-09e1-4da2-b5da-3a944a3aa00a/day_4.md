# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 60
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #6 | (3, 2) | 0 | 55 |
| 9 | #3 | #6 | (4, 7) | 47 | 55 |
| 24 | #3 | #6 | (2, 14) | 42 | 55 |
| 31 | #2 | #6 | (2, 14) | 35 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 6) (ô=160)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(16, 6))
- Mảng hành động đã gửi server: `[-60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-59 | Chờ 60 bước (`-60`) | (16, 6) | (16, 6) | Dự kiến đứng yên tại (16, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 4 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (19, 23) (ô=571)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(22, 23))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(22, 23))
- Mảng hành động đã gửi server: `[0, 1, 0, 1, 0, 0, 2, 2, 2, 2, 2, 3, 4, 3, 4, 4, 4, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 23) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 23 |
| 2-3 | Di chuyển hướng 1 (`1`) | (18, 22) | (19, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(19, 21)) | 22 |
| 4-5 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 21 |
| 6 | Di chuyển hướng 1 (`1`) | (18, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 19 |
| 7 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 18)) | 17 |
| 8-9 | Di chuyển hướng 0 (`0`) | (18, 18) | (18, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(18, 17)) | 16 |
| 10-11 | Di chuyển hướng 2 (`2`) | (18, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 15 |
| 12 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 13 |
| 13-14 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 12 |
| 15-16 | Di chuyển hướng 2 (`2`) | (21, 17) | (22, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(22, 17)) | 11 |
| 17-18 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(23, 17)) | 10 |
| 19-20 | Di chuyển hướng 3 (`3`) | (23, 17) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 9 |
| 21-23 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 19)) | 7 |
| 24-25 | Di chuyển hướng 3 (`3`) | (23, 19) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 6 |
| 26 | Di chuyển hướng 4 (`4`) | (23, 20) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 4 |
| 27-29 | Di chuyển hướng 4 (`4`) | (23, 21) | (22, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(22, 22)) | 2 |
| 30-31 | Di chuyển hướng 4 (`4`) | (22, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 1 |
| 32-59 | Chờ 28 bước (`-28`) | (22, 23) | (22, 23) | Dự kiến đứng yên tại (22, 23); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 3) (ô=76)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(0, 13))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(0, 13))
- Mảng hành động đã gửi server: `[0, -1, 4, 4, 3, 3, 3, 4, 3, 4, 3, 3, 3, 4, 5, 5, 5, 5, 0, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 55 |
| 2 | Chờ 1 bước (`-1`) | (3, 2) | (3, 2) | Dự kiến đứng yên tại (3, 2); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 55 |
| 3-4 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 54 |
| 5-6 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 52 |
| 7-8 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 51 |
| 9-10 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 49 |
| 11-12 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 48 |
| 13-16 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 46 |
| 17-18 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 45 |
| 19 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 43 |
| 20-21 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 42 |
| 22-23 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 40 |
| 24-25 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 39 |
| 26 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 37 |
| 27-28 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 36 |
| 29-30 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 31-34 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 53 |
| 35-36 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 52 |
| 37-38 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 51 |
| 39-59 | Chờ 21 bước (`-21`) | (0, 13) | (0, 13) | Dự kiến đứng yên tại (0, 13); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 3) (ô=75)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(21, 19))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(21, 19))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 4, 3, 4, 3, 3, 3, 4, 5, 5, 4, 3, 4, 3, 4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 53 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 51 |
| 4 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 49 |
| 5 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 47 |
| 6-9 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 53 |
| 10-11 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 52 |
| 12 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 50 |
| 13-14 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 49 |
| 15-16 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 47 |
| 17-18 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 46 |
| 19 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 44 |
| 20-21 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 43 |
| 22-23 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 24-27 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 53 |
| 28-29 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 51 |
| 30 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 49 |
| 31 | Di chuyển hướng 3 (`3`) | (2, 17) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 47 |
| 32 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 45 |
| 33 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 43 |
| 34 | Di chuyển hướng 2 (`2`) | (2, 20) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 41 |
| 35 | Di chuyển hướng 2 (`2`) | (3, 20) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 39 |
| 36 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 37 |
| 37 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 35 |
| 38 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 33 |
| 39 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 31 |
| 40 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 29 |
| 41 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 27 |
| 42 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 25 |
| 43 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 23 |
| 44-45 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 21 |
| 46-47 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 19 |
| 48-49 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 17 |
| 50-51 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 15 |
| 52-53 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 13 |
| 54-55 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 11 |
| 56 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 9 |
| 57 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 7 |
| 58 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 19)) | 5 |
| 59 | Chờ 1 bước (`-1`) | (21, 19) | (21, 19) | Dự kiến đứng yên tại (21, 19); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 19)) | 5 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 15) (ô=362)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Mảng hành động đã gửi server: `[1, 2, 1, 1, 0, 0, 1, 0, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 2, 2, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 44 |
| 2-5 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 42 |
| 6-7 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 41 |
| 8-9 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 40 |
| 10-11 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 39 |
| 12-13 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 37 |
| 14-15 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 36 |
| 16 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 34 |
| 17-18 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 33 |
| 19-22 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 31 |
| 23 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 29 |
| 24-25 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 28 |
| 26-27 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 27 |
| 28 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 25 |
| 29 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 23 |
| 30 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 21 |
| 31 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 19 |
| 32 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 17 |
| 33 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 15 |
| 34 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 13 |
| 35 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 11 |
| 36 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 9 |
| 37 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 7 |
| 38 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 5 |
| 39-40 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 4 |
| 41-43 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 2 |
| 44-45 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 1 |
| 46-47 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 0 |
| 48-59 | Chờ 12 bước (`-12`) | (20, 6) | (20, 6) | Dự kiến đứng yên tại (20, 6); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (16, 3) (ô=88)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(16, 3))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(16, 3))
- Mảng hành động đã gửi server: `[-60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-59 | Chờ 60 bước (`-60`) | (16, 3) | (16, 3) | Dự kiến đứng yên tại (16, 3); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 3)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (3, 3) (ô=75)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 14)
- Mảng hành động đã gửi server: `[1, 3, 3, 4, 3, 4, 4, 3, 4, 4, 4, 4, 3, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 55 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 55 |
| 4-5 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 55 |
| 6 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 55 |
| 7 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 55 |
| 8 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 55 |
| 9-12 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 55 |
| 13-14 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 55 |
| 15 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |
| 16-17 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 55 |
| 18-19 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 20-21 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 55 |
| 22-23 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 24-59 | Chờ 36 bước (`-36`) | (2, 14) | (2, 14) | Dự kiến đứng yên tại (2, 14); hướng tới tọa độ (2, 14) | 55 |

