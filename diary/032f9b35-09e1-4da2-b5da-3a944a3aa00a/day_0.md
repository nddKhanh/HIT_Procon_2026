# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 48
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 10 | #2 | #3 | (3, 10) | 47 | 55 |
| 28 | #5 | #3 | (3, 10) | 14 | 55 |
| 31 | #2 | #3 | (3, 10) | 28 | 55 |
| 32 | #4 | #3 | (3, 10) | 9 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 2) (ô=53)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Mảng hành động đã gửi server: `[5, 5, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 3, 4, 3, 2, 2, 2, 2, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 54 |
| 2 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 52 |
| 3-4 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 51 |
| 5-6 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 50 |
| 7 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 48 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 46 |
| 9 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 44 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 42 |
| 11 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 40 |
| 12 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 38 |
| 13 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 36 |
| 14 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 34 |
| 15 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 32 |
| 16 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 30 |
| 17 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 28 |
| 18 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 3)) | 26 |
| 19-20 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 25 |
| 21 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 23 |
| 22 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 21 |
| 23-24 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 20 |
| 25-27 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 18 |
| 28-29 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 17 |
| 30-31 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 16 |
| 32-47 | Chờ 16 bước (`-16`) | (20, 6) | (20, 6) | Dự kiến đứng yên tại (20, 6); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 16 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 23) (ô=572)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(21, 19))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(21, 19))
- Mảng hành động đã gửi server: `[0, 0, 0, 1, 0, 0, 2, 2, 2, 2, 2, 3, 4, 3, 4, 4, 4, 5, 5, 5, 1, 1, 1, 1, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 23) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 54 |
| 2-3 | Di chuyển hướng 0 (`0`) | (19, 22) | (19, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(19, 21)) | 53 |
| 4-5 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 52 |
| 6 | Di chuyển hướng 1 (`1`) | (18, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 50 |
| 7 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 18)) | 48 |
| 8-9 | Di chuyển hướng 0 (`0`) | (18, 18) | (18, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(18, 17)) | 47 |
| 10-11 | Di chuyển hướng 2 (`2`) | (18, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 46 |
| 12 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 44 |
| 13-14 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 43 |
| 15-16 | Di chuyển hướng 2 (`2`) | (21, 17) | (22, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(22, 17)) | 42 |
| 17-18 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(23, 17)) | 41 |
| 19-20 | Di chuyển hướng 3 (`3`) | (23, 17) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 40 |
| 21-23 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 19)) | 38 |
| 24-25 | Di chuyển hướng 3 (`3`) | (23, 19) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 37 |
| 26 | Di chuyển hướng 4 (`4`) | (23, 20) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 35 |
| 27-29 | Di chuyển hướng 4 (`4`) | (23, 21) | (22, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(22, 22)) | 33 |
| 30-31 | Di chuyển hướng 4 (`4`) | (22, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 32 |
| 32-33 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 31 |
| 34-35 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 30 |
| 36-37 | Di chuyển hướng 5 (`5`) | (20, 23) | (19, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 23)) | 29 |
| 38-39 | Di chuyển hướng 1 (`1`) | (19, 23) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 28 |
| 40-41 | Di chuyển hướng 1 (`1`) | (19, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 27 |
| 42 | Di chuyển hướng 1 (`1`) | (20, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 25 |
| 43 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 19)) | 23 |
| 44-47 | Chờ 4 bước (`-4`) | (21, 19) | (21, 19) | Dự kiến đứng yên tại (21, 19); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 19)) | 23 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 13) (ô=316)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(0, 13))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(0, 13))
- Mảng hành động đã gửi server: `[4, 2, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 3, 4, 3, 3, 4, 3, 4, 4, 4, 4, 4, 5, 4, 0, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 54 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 53 |
| 4-5 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 52 |
| 6 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 50 |
| 7-8 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 49 |
| 9 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |
| 10-11 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 54 |
| 12 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 52 |
| 13 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 50 |
| 14 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 48 |
| 15-16 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 47 |
| 17 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 45 |
| 18-19 | Di chuyển hướng 1 (`1`) | (2, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 44 |
| 20 | Di chuyển hướng 1 (`1`) | (3, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 42 |
| 21-22 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 41 |
| 23-24 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 40 |
| 25 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 38 |
| 26 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 36 |
| 27 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 34 |
| 28 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 32 |
| 29 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 30 |
| 30 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |
| 31-32 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 54 |
| 33 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 52 |
| 34 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 50 |
| 35 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 48 |
| 36-37 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 47 |
| 38-39 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 46 |
| 40-47 | Chờ 8 bước (`-8`) | (0, 13) | (0, 13) | Dự kiến đứng yên tại (0, 13); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 46 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (6, 5) (ô=126)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(3, 10))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(3, 10))
- Mảng hành động đã gửi server: `[0, 4, 4, 4, 3, 4, 4, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 55 |
| 2 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 55 |
| 3-4 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 55 |
| 5 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 55 |
| 6 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 55 |
| 7 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 55 |
| 8 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |
| 9-47 | Chờ 39 bước (`-39`) | (3, 10) | (3, 10) | Dự kiến đứng yên tại (3, 10); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (19, 6) (ô=163)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(0, 13))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(0, 13))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 4, 4, 3, 3, 3, 3, 4, 4, 3, 3, 3, 4, 5, 5, 5, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 54 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 53 |
| 4 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 51 |
| 5 | Di chuyển hướng 5 (`5`) | (17, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 49 |
| 6 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 47 |
| 7 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 45 |
| 8 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 43 |
| 9 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 41 |
| 10 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 39 |
| 11 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 37 |
| 12 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 35 |
| 13 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 33 |
| 14 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 31 |
| 15 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 29 |
| 16 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 27 |
| 17 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 25 |
| 18 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 23 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 22 |
| 21-22 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 21 |
| 23 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 19 |
| 24-25 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 18 |
| 26 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 16 |
| 27-28 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 15 |
| 29 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 13 |
| 30 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 11 |
| 31 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |
| 32-33 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 54 |
| 34 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 52 |
| 35-36 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 51 |
| 37 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 49 |
| 38-39 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 48 |
| 40-41 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 47 |
| 42 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 45 |
| 43-44 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 44 |
| 45-46 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 43 |
| 47 | Chờ 1 bước (`-1`) | (0, 13) | (0, 13) | Dự kiến đứng yên tại (0, 13); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 43 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (17, 3) (ô=89)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(0, 13))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(0, 13))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 4, 4, 3, 3, 3, 3, 4, 4, 3, 3, 3, 4, 5, 5, 5, 5, 0, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (17, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 54 |
| 2 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 52 |
| 3 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 50 |
| 4 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 48 |
| 5 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 46 |
| 6 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 44 |
| 7 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 42 |
| 8 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 40 |
| 9 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 38 |
| 10 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 36 |
| 11 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 34 |
| 12 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 32 |
| 13 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 30 |
| 14 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 28 |
| 15-16 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 27 |
| 17-18 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 26 |
| 19 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 24 |
| 20-21 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 23 |
| 22 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 21 |
| 23-24 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 20 |
| 25 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 18 |
| 26 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 16 |
| 27 | Di chuyển hướng 4 (`4`) | (4, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |
| 28-29 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 54 |
| 30 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 52 |
| 31-32 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 51 |
| 33 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 49 |
| 34-35 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 48 |
| 36-37 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 47 |
| 38 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 45 |
| 39-40 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 44 |
| 41-42 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 43 |
| 43-47 | Chờ 5 bước (`-5`) | (0, 13) | (0, 13) | Dự kiến đứng yên tại (0, 13); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 43 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (21, 18) (ô=453)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(23, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(23, 17))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 3, 4, 3, 3, 2, 1, 1, 2, 2, 3, 4, 4, 4, 5, 5, 5, 1, 1, 1, 1, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 18) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 54 |
| 2-3 | Di chuyển hướng 5 (`5`) | (21, 17) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 53 |
| 4-5 | Di chuyển hướng 5 (`5`) | (20, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 52 |
| 6 | Di chuyển hướng 5 (`5`) | (19, 17) | (18, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(18, 17)) | 50 |
| 7-8 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 18)) | 49 |
| 9-10 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 48 |
| 11 | Di chuyển hướng 3 (`3`) | (18, 19) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 46 |
| 12 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(19, 21)) | 44 |
| 13-14 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 43 |
| 15 | Di chuyển hướng 1 (`1`) | (20, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 41 |
| 16 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 19)) | 39 |
| 17-18 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 38 |
| 19-21 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 19)) | 36 |
| 22-23 | Di chuyển hướng 3 (`3`) | (23, 19) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 35 |
| 24 | Di chuyển hướng 4 (`4`) | (23, 20) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 33 |
| 25-27 | Di chuyển hướng 4 (`4`) | (23, 21) | (22, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(22, 22)) | 31 |
| 28-29 | Di chuyển hướng 4 (`4`) | (22, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 30 |
| 30-31 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 29 |
| 32-33 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 28 |
| 34-35 | Di chuyển hướng 5 (`5`) | (20, 23) | (19, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 23)) | 27 |
| 36-37 | Di chuyển hướng 1 (`1`) | (19, 23) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 26 |
| 38-39 | Di chuyển hướng 1 (`1`) | (19, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 25 |
| 40 | Di chuyển hướng 1 (`1`) | (20, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 23 |
| 41 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 19)) | 21 |
| 42-43 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 20 |
| 44-45 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(22, 17)) | 19 |
| 46-47 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(23, 17)) | 18 |

