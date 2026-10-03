# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 53
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #3 | #5 | (7, 18) | 50 | 51 |
| 3 | #3 | #5 | (7, 17) | 49 | 51 |
| 6 | #3 | #5 | (7, 16) | 49 | 51 |
| 13 | #3 | #5 | (9, 13) | 46 | 51 |
| 36 | #1 | #5 | (20, 6) | 2 | 51 |
| 39 | #1 | #5 | (19, 6) | 50 | 51 |
| 41 | #1 | #5 | (19, 7) | 50 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 6) (ô=135)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(3, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(3, 6))
- Mảng hành động đã gửi server: `[-53]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-52 | Chờ 53 bước (`-53`) | (3, 6) | (3, 6) | Dự kiến đứng yên tại (3, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 4) (ô=109)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 9)
- Mảng hành động đã gửi server: `[4, 4, -32, 5, 4, 4, 3, 2, 3, 0, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 4 |
| 2-4 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 2 |
| 5-36 | Chờ 32 bước (`-32`) | (20, 6) | (20, 6) | Dự kiến đứng yên tại (20, 6); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 51 |
| 37-38 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 51 |
| 39-40 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 51 |
| 41-42 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 50 |
| 43-44 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 49 |
| 45 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 47 |
| 46-47 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 45 |
| 48-49 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 44 |
| 50-51 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 42 |
| 52 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 40 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 20) (ô=450)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(4, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(4, 17))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 3, 0, 5, 5, 5, 5, 4, 5, 0, 1, 0, 5, 5, 5, 4, 5, 0, 5, 0, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 39 |
| 2-4 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 37 |
| 5-7 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 35 |
| 8 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 33 |
| 9 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 31 |
| 10 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 29 |
| 11-12 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(17, 21)) | 28 |
| 13-14 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 27 |
| 15-16 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 26 |
| 17 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 24 |
| 18 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 22 |
| 19 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 20 |
| 20-22 | Di chuyển hướng 4 (`4`) | (12, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 18 |
| 23-24 | Di chuyển hướng 5 (`5`) | (12, 21) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 17 |
| 25-26 | Di chuyển hướng 0 (`0`) | (11, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 16 |
| 27-28 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 14 |
| 29-30 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 13 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 12 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 10 |
| 35-37 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 8 |
| 38 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 6 |
| 39-40 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 5 |
| 41-42 | Di chuyển hướng 0 (`0`) | (6, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 4 |
| 43-45 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 2 |
| 46-47 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 1 |
| 48-52 | Chờ 5 bước (`-5`) | (4, 17) | (4, 17) | Dự kiến đứng yên tại (4, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 1 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 19) (ô=425)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 2)
- Mảng hành động đã gửi server: `[1, 0, 1, 0, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 51 |
| 2 | Di chuyển hướng 0 (`0`) | (7, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 51 |
| 3-5 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 6-7 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 50 |
| 8-9 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 49 |
| 10 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 47 |
| 11-12 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 13-15 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 49 |
| 16-17 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 48 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 47 |
| 20-21 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 46 |
| 22-24 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 44 |
| 25-26 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 43 |
| 27-28 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 42 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 41 |
| 31 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 39 |
| 32 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 37 |
| 33-35 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 35 |
| 36 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 33 |
| 37-39 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 31 |
| 40 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 29 |
| 41-43 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 27 |
| 44-46 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 25 |
| 47-48 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 24 |
| 49-50 | Di chuyển hướng 3 (`3`) | (17, 0) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 23 |
| 51-52 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 21 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (7, 19) (ô=425)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 18)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 4, 2, 2, 3, 3, 2, 3, 3, 2, 5, 4, 5, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 50 |
| 2-4 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 48 |
| 5-7 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 46 |
| 8-9 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 45 |
| 10-12 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 43 |
| 13-14 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 42 |
| 15-17 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 40 |
| 18-20 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 38 |
| 21 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 36 |
| 22-23 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 35 |
| 24-25 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 34 |
| 26-27 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 33 |
| 28-29 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 32 |
| 30 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 30 |
| 31-33 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 28 |
| 34-36 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 26 |
| 37 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 24 |
| 38-39 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 23 |
| 40-41 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 22 |
| 42-43 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 21 |
| 44-45 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 20 |
| 46-47 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 19 |
| 48-49 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 18 |
| 50-51 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 17 |
| 52 | Chờ 1 bước (`-1`) | (4, 18) | (4, 18) | Dự kiến đứng yên tại (4, 18); hướng tới tọa độ (4, 18) | 17 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 19) (ô=425)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 7)
- Mảng hành động đã gửi server: `[1, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 5, 4, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 51 |
| 2 | Di chuyển hướng 0 (`0`) | (7, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 51 |
| 3-5 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 6-7 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 8 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 51 |
| 9-10 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 11-13 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 51 |
| 14-15 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 51 |
| 18 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 51 |
| 19 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 51 |
| 20 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 51 |
| 21-22 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 51 |
| 23-25 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 51 |
| 26 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 51 |
| 27 | Di chuyển hướng 2 (`2`) | (17, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 51 |
| 28-29 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 51 |
| 30 | Di chuyển hướng 1 (`1`) | (18, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 51 |
| 31 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 51 |
| 32-33 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 34-35 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 51 |
| 36-37 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 51 |
| 38-39 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 51 |
| 40-52 | Chờ 13 bước (`-13`) | (19, 7) | (19, 7) | Dự kiến đứng yên tại (19, 7); hướng tới tọa độ (19, 7) | 51 |

