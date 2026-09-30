# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 48
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #1 | #3 | (13, 10) | 37 | 53 |
| 14 | #1 | #3 | (14, 9) | 52 | 53 |
| 17 | #1 | #3 | (14, 7) | 50 | 53 |
| 20 | #4 | #3 | (13, 5) | 2 | 53 |
| 35 | #4 | #3 | (9, 4) | 43 | 53 |
| 42 | #6 | #5 | (3, 15) | 0 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 16) (ô=367)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 21)
- Mảng hành động đã gửi server: `[3, 2, 3, 3, 4, 3, 3, 1, 0, 0, 1, 0, 4, 4, 5, 5, 4, 2, 2, 2, 2, 3, 2, 2, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (15, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 46 |
| 3 | Di chuyển hướng 2 (`2`) | (16, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 44 |
| 4-6 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 42 |
| 7 | Di chuyển hướng 3 (`3`) | (17, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 40 |
| 8 | Di chuyển hướng 4 (`4`) | (18, 19) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 38 |
| 9-10 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 37 |
| 11-13 | Di chuyển hướng 3 (`3`) | (18, 21) | (18, 22) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 22)) | 35 |
| 14-15 | Di chuyển hướng 1 (`1`) | (18, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 34 |
| 16 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 32 |
| 17-18 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 31 |
| 19 | Di chuyển hướng 1 (`1`) | (18, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 29 |
| 20 | Di chuyển hướng 0 (`0`) | (18, 18) | (18, 17) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 17)) | 27 |
| 21-22 | Di chuyển hướng 4 (`4`) | (18, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 26 |
| 23 | Di chuyển hướng 4 (`4`) | (17, 18) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 24 |
| 24-26 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 22 |
| 27 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 20 |
| 28 | Di chuyển hướng 4 (`4`) | (15, 19) | (14, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 20)) | 18 |
| 29-30 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 17 |
| 31-32 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 16 |
| 33-35 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 14 |
| 36-37 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 13 |
| 38-39 | Di chuyển hướng 3 (`3`) | (18, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 12 |
| 40 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 10 |
| 41-43 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 21)) | 8 |
| 44-45 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 7 |
| 46-47 | Chờ 2 bước (`-2`) | (20, 21) | (20, 21) | Dự kiến đứng yên tại (20, 21); hướng tới tọa độ (20, 21) | 7 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 12) (ô=278)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(19, 1))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(19, 1))
- Mảng hành động đã gửi server: `[0, 5, 1, 1, 2, 5, 4, 1, 1, 0, 1, 1, 1, 1, 2, 1, 2, 1, 1, 2, 2, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 44 |
| 1 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 42 |
| 2-3 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 41 |
| 4-5 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 40 |
| 6-7 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 9)) | 39 |
| 8-9 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 38 |
| 10-11 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 53 |
| 12-13 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 53 |
| 14-15 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 52 |
| 16 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 53 |
| 17-18 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 52 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 51 |
| 21-23 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 49 |
| 24-26 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 47 |
| 27-28 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 3)) | 46 |
| 29-30 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 45 |
| 31-32 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(18, 2)) | 44 |
| 33-34 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(19, 1)) | 43 |
| 35-36 | Di chuyển hướng 1 (`1`) | (19, 1) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 42 |
| 37 | Di chuyển hướng 2 (`2`) | (19, 0) | (20, 0) | Dự kiến đến điểm hẹn tọa độ (20, 0) | 40 |
| 38-40 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 0)) | 38 |
| 41-42 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đến điểm hẹn tọa độ (20, 0) | 37 |
| 43-45 | Di chuyển hướng 5 (`5`) | (20, 0) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 35 |
| 46 | Di chuyển hướng 4 (`4`) | (19, 0) | (19, 1) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(19, 1)) | 33 |
| 47 | Chờ 1 bước (`-1`) | (19, 1) | (19, 1) | Dự kiến đứng yên tại (19, 1); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(19, 1)) | 33 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 11) (ô=255)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(5, 9))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(5, 9))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 4, 5, 5, 4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 1, 0, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 24 |
| 2-4 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 22 |
| 5-6 | Di chuyển hướng 3 (`3`) | (14, 13) | (14, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 21 |
| 7-8 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 20 |
| 9-10 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 19 |
| 11-12 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 18 |
| 13-14 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 17 |
| 15 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 15 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 14 |
| 18-19 | Di chuyển hướng 4 (`4`) | (10, 18) | (10, 19) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 13 |
| 20-21 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 12 |
| 22-24 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 10 |
| 25-26 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 9 |
| 27-28 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 8 |
| 29-30 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 7 |
| 31-32 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 6 |
| 33-34 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 5 |
| 35-36 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 4 |
| 37-39 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 2 |
| 40-41 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 1 |
| 42-43 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 0 |
| 44-47 | Chờ 4 bước (`-4`) | (5, 9) | (5, 9) | Dự kiến đứng yên tại (5, 9); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 0 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (16, 16) (ô=368)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 4)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 5, 5, 5, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (16, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 53 |
| 3-4 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 53 |
| 5 | Di chuyển hướng 0 (`0`) | (15, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 53 |
| 6-8 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 53 |
| 9 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 53 |
| 10 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 53 |
| 11-12 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 53 |
| 13-14 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 53 |
| 15 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 53 |
| 16-17 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 6)) | 53 |
| 18-19 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 53 |
| 20-22 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 53 |
| 23-24 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 53 |
| 25 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 53 |
| 26-28 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 53 |
| 29-47 | Chờ 19 bước (`-19`) | (9, 4) | (9, 4) | Dự kiến đứng yên tại (9, 4); hướng tới tọa độ (9, 4) | 53 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 5) (ô=114)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, -1, 0, 0, 5, 5, 5, 5, 5, 5, 5, 0, 5, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 16 |
| 3-5 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 14 |
| 6 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 12 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 11 |
| 9 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 9 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 8 |
| 12-13 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 7 |
| 14-16 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 5 |
| 17 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 3 |
| 18-19 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 53 |
| 20-22 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 6)) | 51 |
| 23 | Chờ 1 bước (`-1`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 6)) | 51 |
| 24-25 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 50 |
| 26-28 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 48 |
| 29-30 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 47 |
| 31 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 45 |
| 32-34 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 53 |
| 35-36 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 52 |
| 37-38 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 51 |
| 39 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 49 |
| 40-41 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 48 |
| 42 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 46 |
| 43-44 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 45 |
| 45-46 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 44 |
| 47 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(2, 4)) | 42 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (14, 19) (ô=432)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(3, 15))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(3, 15))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 5, 5, 0, 0, 5, 5, 0, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 53 |
| 4-5 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 53 |
| 6-8 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 53 |
| 9-11 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 53 |
| 12-13 | Di chuyển hướng 5 (`5`) | (10, 19) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 53 |
| 14 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 53 |
| 15 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 53 |
| 16-18 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 53 |
| 19-20 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 53 |
| 21 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 53 |
| 22-23 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 53 |
| 24 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 53 |
| 25-27 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 53 |
| 28-47 | Chờ 20 bước (`-20`) | (3, 15) | (3, 15) | Dự kiến đứng yên tại (3, 15); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 53 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (8, 16) (ô=360)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 15)
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 3, 4, 4, 5, 5, 3, 4, 1, 0, 1, 0, 1, 0, 1, 0, -1, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 26 |
| 2-4 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 24 |
| 5-7 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 22 |
| 8 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 18)) | 20 |
| 9-10 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 19 |
| 11-12 | Di chuyển hướng 4 (`4`) | (6, 19) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 18 |
| 13-15 | Di chuyển hướng 4 (`4`) | (5, 20) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 16 |
| 16 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 14 |
| 17-19 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 12 |
| 20-21 | Di chuyển hướng 3 (`3`) | (3, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 11 |
| 22-23 | Di chuyển hướng 4 (`4`) | (3, 22) | (3, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 23)) | 10 |
| 24-25 | Di chuyển hướng 1 (`1`) | (3, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 9 |
| 26-27 | Di chuyển hướng 0 (`0`) | (3, 22) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 8 |
| 28-29 | Di chuyển hướng 1 (`1`) | (3, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 7 |
| 30-32 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 5 |
| 33-34 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 4 |
| 35-36 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 3 |
| 37-38 | Di chuyển hướng 1 (`1`) | (3, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 2 |
| 39-41 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 53 |
| 42 | Chờ 1 bước (`-1`) | (3, 15) | (3, 15) | Dự kiến đứng yên tại (3, 15); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 53 |
| 43-44 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 52 |
| 45-47 | Di chuyển hướng 2 (`2`) | (4, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 50 |

