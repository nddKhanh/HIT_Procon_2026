# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 56
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #3 | #5 | (2, 12) | 30 | 55 |
| 46 | #2 | #4 | (10, 13) | 0 | 55 |
| 54 | #0 | #5 | (3, 1) | 5 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 11) (ô=285)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(3, 1))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(3, 1))
- Mảng hành động đã gửi server: `[2, 5, 0, 5, 0, 0, 0, 4, 3, 4, 5, 5, 5, 0, 0, 5, 5, 5, 0, 0, 5, 0, 0, 0, 0, 5, 5, 5, 0, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (21, 11) | (22, 11) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(22, 11)) | 39 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 38 |
| 4-5 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 37 |
| 6-7 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 36 |
| 8 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 34 |
| 9-10 | Di chuyển hướng 0 (`0`) | (19, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(18, 8)) | 33 |
| 11-12 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 7)) | 32 |
| 13-14 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 31 |
| 15-16 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 30 |
| 17-18 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 10)) | 29 |
| 19-20 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 28 |
| 21-22 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 27 |
| 23-24 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(14, 10)) | 26 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 25 |
| 27-28 | Di chuyển hướng 0 (`0`) | (14, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 24 |
| 29 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 22 |
| 30 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 20 |
| 31-32 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 19 |
| 33-35 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 17 |
| 36-37 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 16 |
| 38-39 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 15 |
| 40-41 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 14 |
| 42 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 12 |
| 43-44 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 3)) | 11 |
| 45-46 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 10 |
| 47-48 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 9 |
| 49-50 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 8 |
| 51 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 6 |
| 52-53 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 1)) | 55 |
| 54 | Chờ 1 bước (`-1`) | (3, 1) | (3, 1) | Dự kiến đứng yên tại (3, 1); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 1)) | 55 |
| 55 | Chờ 1 bước (`-1`) | (3, 1) | (3, 1) | Dự kiến đứng yên tại (3, 1); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 1)) | 55 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 14) (ô=346)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(6, 18))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 2, 1, 1, 1, 2, 2, 1, 2, 2, 1, 5, 5, 4, 4, 5, 4, 5, 4, 4, 5, 0, 5, 0, 5, 4, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 48 |
| 3-4 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 47 |
| 5-6 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 46 |
| 7-8 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 45 |
| 9 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 43 |
| 10 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 41 |
| 11-12 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 40 |
| 13-14 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 39 |
| 15-16 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 38 |
| 17 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 36 |
| 18-19 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 35 |
| 20 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 33 |
| 21-22 | Di chuyển hướng 2 (`2`) | (17, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 32 |
| 23-24 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(19, 13)) | 31 |
| 25-26 | Di chuyển hướng 5 (`5`) | (19, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 30 |
| 27-29 | Di chuyển hướng 5 (`5`) | (18, 13) | (17, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 13)) | 28 |
| 30-31 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 27 |
| 32 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 25 |
| 33-34 | Di chuyển hướng 5 (`5`) | (16, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 24 |
| 35 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 22 |
| 36-37 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 21 |
| 38-39 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 20 |
| 40-41 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 19 |
| 42 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 17 |
| 43 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 15 |
| 44-45 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 14 |
| 46-47 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 13 |
| 48-49 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 12 |
| 50-51 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 11 |
| 52-53 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 10 |
| 54-55 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 9 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (23, 21) (ô=527)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(10, 17))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(10, 17))
- Mảng hành động đã gửi server: `[3, 5, 0, 5, 5, 5, 5, 5, 4, 5, 4, 0, 0, 0, 0, 0, 5, 0, 1, 5, 5, 0, 1, 1, -1, 4, 4, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (23, 21) | (23, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(23, 22)) | 28 |
| 3-4 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 27 |
| 5-6 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 26 |
| 7-8 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 21)) | 25 |
| 9-10 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 24 |
| 11-12 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 23 |
| 13-14 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 21)) | 22 |
| 15-16 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 21 |
| 17-18 | Di chuyển hướng 4 (`4`) | (17, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 20 |
| 19-20 | Di chuyển hướng 5 (`5`) | (16, 22) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 19 |
| 21-22 | Di chuyển hướng 4 (`4`) | (15, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 23)) | 18 |
| 23-24 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 17 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 16 |
| 27-29 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 14 |
| 30-31 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 13 |
| 32 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 11 |
| 33 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 9 |
| 34 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 7 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 6 |
| 37-38 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 5 |
| 39 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 3 |
| 40-41 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 2 |
| 42-43 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 1 |
| 44-45 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 13)) | 55 |
| 46 | Chờ 1 bước (`-1`) | (10, 13) | (10, 13) | Dự kiến đứng yên tại (10, 13); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 13)) | 55 |
| 47-48 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 54 |
| 49-50 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 53 |
| 51-52 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 52 |
| 53-54 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 51 |
| 55 | Chờ 1 bước (`-1`) | (10, 17) | (10, 17) | Dự kiến đứng yên tại (10, 17); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 7) (ô=171)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(9, 22))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(9, 22))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 5, 4, 3, 3, 3, 3, 4, 4, 4, 4, 0, 2, 2, 2, 2, 1, 2, 1, 2, 2, 4, 4, 3, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(2, 8)) | 35 |
| 2-3 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 34 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 33 |
| 6-7 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 11)) | 32 |
| 8-9 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 31 |
| 10-11 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 12 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 53 |
| 13-14 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 52 |
| 15-16 | Di chuyển hướng 3 (`3`) | (3, 14) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 51 |
| 17-18 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 50 |
| 19-20 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 49 |
| 21-22 | Di chuyển hướng 4 (`4`) | (4, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 48 |
| 23-24 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 47 |
| 25-26 | Di chuyển hướng 4 (`4`) | (3, 19) | (2, 20) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 20)) | 46 |
| 27-28 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 19)) | 45 |
| 29-30 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 44 |
| 31-32 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 43 |
| 33-34 | Di chuyển hướng 2 (`2`) | (4, 19) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 42 |
| 35 | Di chuyển hướng 2 (`2`) | (5, 19) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 40 |
| 36-37 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 39 |
| 38-39 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 38 |
| 40-41 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 37 |
| 42-43 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 36 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 35 |
| 46-47 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 34 |
| 48-49 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 33 |
| 50-51 | Di chuyển hướng 3 (`3`) | (9, 19) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 32 |
| 52 | Di chuyển hướng 4 (`4`) | (9, 20) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 30 |
| 53-54 | Di chuyển hướng 3 (`3`) | (9, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(9, 22)) | 29 |
| 55 | Chờ 1 bước (`-1`) | (9, 22) | (9, 22) | Dự kiến đứng yên tại (9, 22); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(9, 22)) | 29 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (14, 9) (ô=230)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(10, 13))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(10, 13))
- Mảng hành động đã gửi server: `[0, 5, 5, 4, 5, 5, 5, 4, 5, 5, 5, 5, 4, 4, 3, 2, 2, 2, 2, 2, 2, 2, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 55 |
| 2 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 55 |
| 3 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 55 |
| 4-5 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 55 |
| 6-7 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 55 |
| 8-9 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 55 |
| 10-11 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 55 |
| 12-13 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 55 |
| 14 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 55 |
| 15-16 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 55 |
| 17 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 55 |
| 18-19 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 55 |
| 20-21 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 55 |
| 22-23 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 24 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 55 |
| 25-26 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 55 |
| 27-28 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 55 |
| 29-30 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 55 |
| 31-32 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 55 |
| 33-34 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 55 |
| 35-36 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 55 |
| 37-38 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 13)) | 55 |
| 39-55 | Chờ 17 bước (`-17`) | (10, 13) | (10, 13) | Dự kiến đứng yên tại (10, 13); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 13)) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (8, 17) (ô=416)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(3, 1))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(3, 1))
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 0, 5, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 55 |
| 2 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 55 |
| 3 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 55 |
| 6 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 55 |
| 7 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 55 |
| 8-9 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 55 |
| 10-11 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 12 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 55 |
| 13-14 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 55 |
| 15-16 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 55 |
| 17-18 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(2, 8)) | 55 |
| 19-20 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 55 |
| 21-22 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 55 |
| 23-24 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 55 |
| 25 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 55 |
| 26-27 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 55 |
| 28-29 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 55 |
| 30-31 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 1)) | 55 |
| 32-55 | Chờ 24 bước (`-24`) | (3, 1) | (3, 1) | Dự kiến đứng yên tại (3, 1); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 1)) | 55 |

