# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 48
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 11 | #3 | #5 | (8, 4) | 43 | 51 |
| 13 | #3 | #5 | (9, 4) | 50 | 51 |
| 15 | #0 | #6 | (9, 14) | 36 | 51 |
| 16 | #3 | #5 | (10, 4) | 49 | 51 |
| 18 | #3 | #5 | (11, 4) | 49 | 51 |
| 20 | #3 | #5 | (12, 4) | 50 | 51 |
| 27 | #2 | #6 | (8, 16) | 5 | 51 |
| 30 | #2 | #6 | (9, 15) | 50 | 51 |
| 32 | #2 | #6 | (9, 14) | 50 | 51 |
| 34 | #1 | #5 | (17, 0) | 2 | 51 |
| 35 | #2 | #6 | (11, 13) | 48 | 51 |
| 38 | #2 | #6 | (13, 13) | 48 | 51 |
| 40 | #2 | #6 | (13, 14) | 50 | 51 |
| 42 | #2 | #6 | (14, 15) | 50 | 51 |
| 44 | #2 | #6 | (14, 16) | 50 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 13) (ô=286)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 20)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 4, 4, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 5, 5, 5, 3, 3, 3, 3, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 45 |
| 2 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 3-4 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 42 |
| 5 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 40 |
| 6-7 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 39 |
| 8-9 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 38 |
| 10-11 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 37 |
| 12-13 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 36 |
| 14-15 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 50 |
| 16 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 48 |
| 17-18 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 47 |
| 19 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 45 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 44 |
| 22-23 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 43 |
| 24-25 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 42 |
| 26-27 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 41 |
| 28-29 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 40 |
| 30-31 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 39 |
| 32-33 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 38 |
| 34-35 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 37 |
| 36-37 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 36 |
| 38-39 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 35 |
| 40-41 | Di chuyển hướng 3 (`3`) | (12, 20) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 34 |
| 42-43 | Di chuyển hướng 3 (`3`) | (13, 21) | (13, 22) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 22)) | 33 |
| 44-45 | Di chuyển hướng 1 (`1`) | (13, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 32 |
| 46-47 | Di chuyển hướng 1 (`1`) | (14, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 31 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 4) (ô=96)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 4)
- Mảng hành động đã gửi server: `[3, 2, 3, 2, 2, 2, 2, 3, 2, 5, 0, 0, 0, 0, 0, 1, 1, -1, 5, 4, 5, 5, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 22 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 21 |
| 4-5 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 20 |
| 6-7 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 19 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 18 |
| 10-11 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 17 |
| 12-13 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 16 |
| 14-15 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 15 |
| 16 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 7)) | 13 |
| 17-18 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 12 |
| 19 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 10 |
| 20-21 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 9 |
| 22-24 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 7 |
| 25-26 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 3)) | 6 |
| 27-28 | Di chuyển hướng 0 (`0`) | (17, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 5 |
| 29-30 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 4 |
| 31-33 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 51 |
| 34 | Chờ 1 bước (`-1`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 51 |
| 35-36 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 50 |
| 37-38 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 49 |
| 39-40 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 48 |
| 41-42 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(14, 1)) | 47 |
| 43-44 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 46 |
| 45-46 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 45 |
| 47 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 43 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 17) (ô=366)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(14, 18))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(14, 18))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 4, 3, 2, 2, 2, 2, 1, 0, 1, 0, -1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 22 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 20 |
| 3 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 18 |
| 4-5 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 17 |
| 6-7 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 16 |
| 8-9 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 19)) | 15 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 14 |
| 12-13 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 13 |
| 14-15 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 12 |
| 16-17 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 11 |
| 18-19 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(8, 20)) | 10 |
| 20-21 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 9 |
| 22-23 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 8 |
| 24 | Di chuyển hướng 1 (`1`) | (8, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 6 |
| 25-26 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 51 |
| 27 | Chờ 1 bước (`-1`) | (8, 16) | (8, 16) | Dự kiến đứng yên tại (8, 16); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 51 |
| 28-29 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 51 |
| 30-31 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 51 |
| 32-33 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 50 |
| 34 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 51 |
| 35-36 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 50 |
| 37 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 51 |
| 38-39 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 51 |
| 40-41 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 51 |
| 42-43 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 51 |
| 44-45 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 50 |
| 46-47 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 49 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 4) (ô=87)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(2, 6))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(2, 6))
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, 1, 2, 2, 2, 2, 3, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 49 |
| 2 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 47 |
| 3-4 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 46 |
| 5-6 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 45 |
| 7-8 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 5)) | 44 |
| 9-10 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 51 |
| 11-12 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 51 |
| 13-15 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 51 |
| 20-21 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 50 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 49 |
| 24-25 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 48 |
| 26-27 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 47 |
| 28-29 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 45 |
| 30-32 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 43 |
| 33-34 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 42 |
| 35-36 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 41 |
| 37 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 39 |
| 38-40 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 37 |
| 41 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 35 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 34 |
| 44-45 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 33 |
| 46-47 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 6)) | 32 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 20) (ô=435)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 7)
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 5, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 0, 0, 5, 5, 5, 4, 5, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 48 |
| 2-3 | Di chuyển hướng 0 (`0`) | (15, 19) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 47 |
| 4-5 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 46 |
| 6-7 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 45 |
| 8-9 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 44 |
| 10-11 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 43 |
| 12-13 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 42 |
| 14-15 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 41 |
| 16-17 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 40 |
| 18-19 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 39 |
| 20 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 37 |
| 21 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 35 |
| 22-24 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 33 |
| 25-26 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 32 |
| 27-28 | Di chuyển hướng 1 (`1`) | (17, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 31 |
| 29 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 29 |
| 30-32 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 27 |
| 33-34 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 26 |
| 35 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 24 |
| 36-38 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 22 |
| 39-40 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 21 |
| 41 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 10)) | 19 |
| 42-43 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 18 |
| 44-45 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 17 |
| 46-47 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 16 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (2, 4) (ô=86)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 1, 1, 2, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 51 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 51 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 51 |
| 5-7 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 51 |
| 8 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 51 |
| 9-10 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 51 |
| 11-12 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 51 |
| 13-15 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 51 |
| 20-21 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 51 |
| 22 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 51 |
| 23-24 | Di chuyển hướng 2 (`2`) | (13, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 51 |
| 25-26 | Di chuyển hướng 2 (`2`) | (14, 2) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 51 |
| 27 | Di chuyển hướng 1 (`1`) | (15, 2) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 51 |
| 28-29 | Di chuyển hướng 1 (`1`) | (16, 1) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 51 |
| 30-31 | Di chuyển hướng 2 (`2`) | (16, 0) | (17, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 51 |
| 32-47 | Chờ 16 bước (`-16`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (14, 18) (ô=392)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(14, 16))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(14, 16))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 5, 4, 4, 4, -8, 1, 1, 1, 2, 2, 2, 3, 3, 3, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 51 |
| 2-3 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 51 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 51 |
| 6-7 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 51 |
| 8-9 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 51 |
| 10-11 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 51 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 51 |
| 14 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 51 |
| 15-16 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 51 |
| 17-18 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 51 |
| 19-26 | Chờ 8 bước (`-8`) | (8, 16) | (8, 16) | Dự kiến đứng yên tại (8, 16); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 51 |
| 27-28 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 51 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 51 |
| 31-32 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 51 |
| 33 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 51 |
| 34-35 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 51 |
| 36 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 51 |
| 37-38 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 51 |
| 39-40 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 51 |
| 41-42 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 51 |
| 43-47 | Chờ 5 bước (`-5`) | (14, 16) | (14, 16) | Dự kiến đứng yên tại (14, 16); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 51 |

