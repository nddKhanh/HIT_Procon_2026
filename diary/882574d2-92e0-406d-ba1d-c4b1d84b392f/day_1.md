# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 48
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #1 | #6 | (14, 7) | 5 | 53 |
| 22 | #2 | #7 | (0, 0) | 8 | 53 |
| 25 | #2 | #7 | (0, 1) | 52 | 53 |
| 27 | #0 | #6 | (15, 10) | 0 | 53 |
| 27 | #2 | #7 | (0, 2) | 52 | 53 |
| 29 | #0 | #6 | (16, 10) | 52 | 53 |
| 31 | #0 | #6 | (17, 10) | 52 | 53 |
| 33 | #0 | #6 | (18, 9) | 52 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 23) (ô=520)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(14, 7))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(14, 7))
- Mảng hành động đã gửi server: `[1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 5, -1, 2, 2, 1, 2, 2, 0, 0, 5, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (14, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 15 |
| 2-3 | Di chuyển hướng 1 (`1`) | (14, 22) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 14 |
| 4 | Di chuyển hướng 1 (`1`) | (15, 21) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 12 |
| 5-6 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 11 |
| 7-8 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 10 |
| 9-10 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 9 |
| 11-12 | Di chuyển hướng 1 (`1`) | (16, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 8 |
| 13-14 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 7 |
| 15-16 | Di chuyển hướng 1 (`1`) | (17, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 6 |
| 17-18 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 5 |
| 19-20 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 4 |
| 21 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 2 |
| 22-23 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 1 |
| 24-25 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 0 |
| 26 | Chờ 1 bước (`-1`) | (15, 10) | (15, 10) | Dự kiến đứng yên tại (15, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 53 |
| 27-28 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 53 |
| 29-30 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 53 |
| 31-32 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 53 |
| 33-34 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 52 |
| 35-36 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 9)) | 51 |
| 37-38 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 50 |
| 39-40 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 49 |
| 41 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 47 |
| 42 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 45 |
| 43 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 43 |
| 44-45 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 42 |
| 46-47 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 41 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 10) (ô=235)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 7)
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 2, 0, 0, 5, 5, 5, 5, 5, -1, 0, 0, 5, 5, 4, 5, 5, 4, 4, 4, 4, 0, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 19 |
| 2-3 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 18 |
| 4-5 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 17 |
| 6-7 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 16 |
| 8-9 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 9)) | 15 |
| 10-11 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 14 |
| 12-13 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 13 |
| 14 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 11 |
| 15 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 9 |
| 16 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 7 |
| 17-18 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 6 |
| 19-20 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 53 |
| 21 | Chờ 1 bước (`-1`) | (14, 7) | (14, 7) | Dự kiến đứng yên tại (14, 7); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 53 |
| 22-23 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 52 |
| 24-25 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 51 |
| 26 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 49 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 48 |
| 29 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 46 |
| 30-31 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(9, 6)) | 45 |
| 32-33 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 44 |
| 34-35 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 43 |
| 36 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 41 |
| 37-39 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 39 |
| 40-41 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 10)) | 38 |
| 42-43 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 37 |
| 44-45 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 36 |
| 46-47 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 35 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 3) (ô=73)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 10)
- Mảng hành động đã gửi server: `[5, 4, 5, 0, 5, 0, 0, 0, 5, -6, 4, 3, 4, 3, 3, 4, 4, 3, 4, 3, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 19 |
| 2-3 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 18 |
| 4 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 4)) | 16 |
| 5-6 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 15 |
| 7-8 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 14 |
| 9 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 12 |
| 10-11 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 11 |
| 12-14 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 0)) | 9 |
| 15-16 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 0)) | 8 |
| 17-22 | Chờ 6 bước (`-6`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 0)) | 53 |
| 23-24 | Di chuyển hướng 4 (`4`) | (0, 0) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 53 |
| 25-26 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 53 |
| 27-28 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 52 |
| 29-30 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 51 |
| 31-32 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 50 |
| 33-34 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 49 |
| 35-36 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 48 |
| 37-38 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 47 |
| 39-40 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đến điểm hẹn tọa độ (0, 9) | 46 |
| 41-42 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 10)) | 45 |
| 43-44 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 44 |
| 45-46 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 43 |
| 47 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 41 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 17) (ô=380)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(7, 15))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(7, 15))
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 0, 4, 3, 4, 2, 3, 2, 2, 3, 3, 1, 0, 1, 1, 0, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 25 |
| 2-3 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 24 |
| 4-5 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 23 |
| 6-7 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 22 |
| 8-9 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 14)) | 21 |
| 10-11 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 20 |
| 12-13 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 19 |
| 14 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(2, 17)) | 17 |
| 15-16 | Di chuyển hướng 2 (`2`) | (2, 17) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 16 |
| 17-18 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 15 |
| 19-20 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 14 |
| 21 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 12 |
| 22-23 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 11 |
| 24-25 | Di chuyển hướng 3 (`3`) | (6, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 10 |
| 26-27 | Di chuyển hướng 1 (`1`) | (6, 20) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 9 |
| 28-29 | Di chuyển hướng 0 (`0`) | (7, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 8 |
| 30-31 | Di chuyển hướng 1 (`1`) | (6, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 7 |
| 32 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 5 |
| 33-34 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 15)) | 4 |
| 35-47 | Chờ 13 bước (`-13`) | (7, 15) | (7, 15) | Dự kiến đứng yên tại (7, 15); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 15)) | 4 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 20) (ô=460)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(7, 19))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(7, 19))
- Mảng hành động đã gửi server: `[2, 0, 0, 0, 4, 5, 4, 5, 5, 4, 5, 0, 0, 0, 5, 5, 4, 5, 5, 5, 4, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 20) | (21, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 20)) | 24 |
| 2-3 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 23 |
| 4-5 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 22 |
| 6-7 | Di chuyển hướng 0 (`0`) | (20, 18) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 21 |
| 8-9 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(19, 18)) | 20 |
| 10-11 | Di chuyển hướng 5 (`5`) | (19, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 19 |
| 12-13 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 18 |
| 14-15 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 17 |
| 16-17 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 16 |
| 18-19 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 15 |
| 20-21 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 14 |
| 22-23 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 13 |
| 24 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 11 |
| 25-26 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 10 |
| 27 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 8 |
| 28-29 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 7 |
| 30 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 5 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 4 |
| 33 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 2 |
| 34-35 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 1 |
| 36-37 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 0 |
| 38-47 | Chờ 10 bước (`-10`) | (7, 19) | (7, 19) | Dự kiến đứng yên tại (7, 19); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 22) (ô=489)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(13, 23))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(13, 23))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 2, 2, 1, 2, 2, 3, 3, 3, 4, 4, 4, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 20 |
| 2-3 | Di chuyển hướng 1 (`1`) | (6, 21) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 19 |
| 4-5 | Di chuyển hướng 1 (`1`) | (6, 20) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 18 |
| 6-7 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 17 |
| 8-9 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 16 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 15 |
| 12 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 13 |
| 13-14 | Di chuyển hướng 1 (`1`) | (10, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 12 |
| 15 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 10 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 9 |
| 18 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 7 |
| 19-20 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 6 |
| 21 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 4 |
| 22-23 | Di chuyển hướng 4 (`4`) | (14, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 3 |
| 24-25 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 2 |
| 26-28 | Di chuyển hướng 4 (`4`) | (13, 22) | (13, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 23)) | 0 |
| 29-47 | Chờ 19 bước (`-19`) | (13, 23) | (13, 23) | Dự kiến đứng yên tại (13, 23); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 23)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (14, 8) (ô=190)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(18, 9))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(18, 9))
- Mảng hành động đã gửi server: `[0, -19, 3, 3, 3, 2, 2, 1, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 53 |
| 2-20 | Chờ 19 bước (`-19`) | (14, 7) | (14, 7) | Dự kiến đứng yên tại (14, 7); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 53 |
| 21-22 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 53 |
| 23-24 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 53 |
| 25-26 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 53 |
| 27-28 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 53 |
| 29-30 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 53 |
| 31-32 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 53 |
| 33-47 | Chờ 15 bước (`-15`) | (18, 9) | (18, 9) | Dự kiến đứng yên tại (18, 9); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 53 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (0, 11) (ô=242)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 2)
- Mảng hành động đã gửi server: `[1, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 4, 3, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 10)) | 53 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 53 |
| 4-5 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 53 |
| 6-7 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 53 |
| 8-9 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 53 |
| 10-11 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 53 |
| 12-13 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 53 |
| 14-15 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 53 |
| 16-17 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 53 |
| 18-19 | Di chuyển hướng 0 (`0`) | (0, 2) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 53 |
| 20-21 | Di chuyển hướng 1 (`1`) | (0, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 0)) | 53 |
| 22-23 | Di chuyển hướng 4 (`4`) | (0, 0) | (0, 1) | Dự kiến đến điểm hẹn tọa độ (0, 1) | 53 |
| 24-25 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 53 |
| 26-47 | Chờ 22 bước (`-22`) | (0, 2) | (0, 2) | Dự kiến đứng yên tại (0, 2); hướng tới tọa độ (0, 2) | 53 |

