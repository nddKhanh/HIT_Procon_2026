# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 54
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 30 | #2 | #3 | (3, 14) | 2 | 55 |
| 30 | #6 | #3 | (3, 14) | 0 | 55 |
| 38 | #5 | #3 | (0, 13) | 1 | 55 |
| 40 | #5 | #3 | (1, 13) | 54 | 55 |
| 52 | #5 | #3 | (4, 12) | 48 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 6) (ô=160)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, -45]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 10 |
| 2-4 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 8 |
| 5-6 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 7 |
| 7-8 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 6 |
| 9-53 | Chờ 45 bước (`-45`) | (20, 6) | (20, 6) | Dự kiến đứng yên tại (20, 6); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 6 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (22, 23) (ô=574)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(22, 22))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(22, 22))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 3, 4, 5, 5, 5, 4, 4, 4, 3, 2, 2, 1, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (22, 23) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 53 |
| 2-3 | Di chuyển hướng 5 (`5`) | (21, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 52 |
| 4-5 | Di chuyển hướng 0 (`0`) | (20, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 51 |
| 6-7 | Di chuyển hướng 0 (`0`) | (20, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 49 |
| 8 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 47 |
| 9 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 18)) | 45 |
| 10-11 | Di chuyển hướng 0 (`0`) | (18, 18) | (18, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(18, 17)) | 44 |
| 12-13 | Di chuyển hướng 2 (`2`) | (18, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 43 |
| 14 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 41 |
| 15-16 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 40 |
| 17-18 | Di chuyển hướng 2 (`2`) | (21, 17) | (22, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(22, 17)) | 39 |
| 19-20 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(23, 17)) | 38 |
| 21-22 | Di chuyển hướng 3 (`3`) | (23, 17) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 37 |
| 23-25 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 19)) | 35 |
| 26-27 | Di chuyển hướng 5 (`5`) | (23, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 34 |
| 28-30 | Di chuyển hướng 5 (`5`) | (22, 19) | (21, 19) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 19)) | 32 |
| 31-32 | Di chuyển hướng 5 (`5`) | (21, 19) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 31 |
| 33-34 | Di chuyển hướng 4 (`4`) | (20, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 30 |
| 35 | Di chuyển hướng 4 (`4`) | (19, 20) | (19, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(19, 21)) | 28 |
| 36-37 | Di chuyển hướng 4 (`4`) | (19, 21) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 27 |
| 38-39 | Di chuyển hướng 3 (`3`) | (18, 22) | (19, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 23)) | 26 |
| 40-41 | Di chuyển hướng 2 (`2`) | (19, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 25 |
| 42-43 | Di chuyển hướng 2 (`2`) | (20, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 24 |
| 44-45 | Di chuyển hướng 1 (`1`) | (21, 23) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 23 |
| 46-47 | Di chuyển hướng 2 (`2`) | (21, 22) | (22, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(22, 22)) | 22 |
| 48-53 | Chờ 6 bước (`-6`) | (22, 22) | (22, 22) | Dự kiến đứng yên tại (22, 22); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(22, 22)) | 22 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 4) (ô=98)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(3, 14))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(3, 14))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 4, 3, 2, 3, 4, 4, 3, 5, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 18 |
| 2-3 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 16 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 15 |
| 6-9 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 13 |
| 10-11 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 12 |
| 12-14 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 10 |
| 15-16 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 9 |
| 17 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 7 |
| 18 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 5 |
| 19-20 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 4 |
| 21-22 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 3 |
| 23-24 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 2 |
| 25-53 | Chờ 29 bước (`-29`) | (3, 14) | (3, 14) | Dự kiến đứng yên tại (3, 14); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 55 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (20, 23) (ô=572)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(4, 12))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(4, 12))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 1, 0, 1, 0, 1, 2, 5, 5, 5, 0, 2, 2, 1, 2, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 23) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 55 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 22) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 55 |
| 4-5 | Di chuyển hướng 0 (`0`) | (18, 22) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 55 |
| 6 | Di chuyển hướng 0 (`0`) | (18, 21) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 55 |
| 7 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 55 |
| 8 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 55 |
| 9 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 55 |
| 10 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 55 |
| 11 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 55 |
| 12 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 55 |
| 13 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 55 |
| 14 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 55 |
| 15 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 55 |
| 16 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 55 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 55 |
| 18 | Di chuyển hướng 5 (`5`) | (6, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 55 |
| 19 | Di chuyển hướng 5 (`5`) | (5, 20) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 55 |
| 20 | Di chuyển hướng 5 (`5`) | (4, 20) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 55 |
| 21 | Di chuyển hướng 5 (`5`) | (3, 20) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 55 |
| 22 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 55 |
| 23 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 55 |
| 24 | Di chuyển hướng 0 (`0`) | (2, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 55 |
| 25 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 55 |
| 26 | Di chuyển hướng 0 (`0`) | (2, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 55 |
| 27 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 28-29 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 55 |
| 30-31 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 32-33 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 55 |
| 34-35 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 55 |
| 36-37 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 55 |
| 38-39 | Di chuyển hướng 2 (`2`) | (0, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 55 |
| 40-41 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 55 |
| 42-43 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 44-45 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 55 |
| 46-47 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 55 |
| 48-53 | Chờ 6 bước (`-6`) | (4, 12) | (4, 12) | Dự kiến đứng yên tại (4, 12); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 55 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (16, 6) (ô=160)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(20, 6))
- Mảng hành động đã gửi server: `[1, 0, 0, 3, 3, 2, 3, 2, 2, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (16, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 13 |
| 2 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 11 |
| 3 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 3)) | 9 |
| 4-5 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 8 |
| 6 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 6 |
| 7 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 4 |
| 8 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 2 |
| 9-10 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 1 |
| 11-12 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 0 |
| 13-53 | Chờ 41 bước (`-41`) | (20, 6) | (20, 6) | Dự kiến đứng yên tại (20, 6); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(20, 6)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 14) (ô=336)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 11)
- Mảng hành động đã gửi server: `[0, -36, 2, 3, 2, 2, 2, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 1 |
| 2-37 | Chờ 36 bước (`-36`) | (0, 13) | (0, 13) | Dự kiến đứng yên tại (0, 13); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 55 |
| 38-39 | Di chuyển hướng 2 (`2`) | (0, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 55 |
| 40-41 | Di chuyển hướng 3 (`3`) | (1, 13) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 54 |
| 42-43 | Di chuyển hướng 2 (`2`) | (1, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 53 |
| 44-45 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 51 |
| 46-47 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 50 |
| 48-49 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 49 |
| 50-51 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 55 |
| 52-53 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 54 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (20, 20) (ô=500)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(4, 3))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(4, 3))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 1, 0, 1, 0, 1, 2, -4, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 48 |
| 2 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 46 |
| 3 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 44 |
| 4 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 42 |
| 5 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 40 |
| 6 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 38 |
| 7 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 36 |
| 8 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 34 |
| 9 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 32 |
| 10 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 30 |
| 11 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 28 |
| 12 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 26 |
| 13 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 24 |
| 14 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 22 |
| 15 | Di chuyển hướng 5 (`5`) | (6, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 20 |
| 16 | Di chuyển hướng 5 (`5`) | (5, 20) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 18 |
| 17 | Di chuyển hướng 5 (`5`) | (4, 20) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 16 |
| 18 | Di chuyển hướng 5 (`5`) | (3, 20) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 14 |
| 19 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 12 |
| 20 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 10 |
| 21 | Di chuyển hướng 0 (`0`) | (2, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 8 |
| 22 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 6 |
| 23 | Di chuyển hướng 0 (`0`) | (2, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 4 |
| 24 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 2 |
| 25-26 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 0 |
| 27-30 | Chờ 4 bước (`-4`) | (3, 14) | (3, 14) | Dự kiến đứng yên tại (3, 14); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 55 |
| 31-32 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 54 |
| 33-34 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 53 |
| 35-36 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 52 |
| 37 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 50 |
| 38 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 48 |
| 39 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 46 |
| 40-41 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 44 |
| 42-45 | Di chuyển hướng 1 (`1`) | (4, 7) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 42 |
| 46 | Di chuyển hướng 0 (`0`) | (4, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 40 |
| 47 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 38 |
| 48 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 36 |
| 49-50 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 35 |
| 51-52 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 34 |
| 53 | Chờ 1 bước (`-1`) | (4, 3) | (4, 3) | Dự kiến đứng yên tại (4, 3); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 34 |

