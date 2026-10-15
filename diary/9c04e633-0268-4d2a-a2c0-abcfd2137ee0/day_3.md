# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 50
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #4 | #5 | (17, 6) | 7 | 51 |
| 28 | #3 | #6 | (13, 8) | 11 | 51 |
| 38 | #1 | #5 | (8, 8) | 18 | 51 |
| 38 | #4 | #6 | (16, 3) | 36 | 51 |
| 40 | #4 | #6 | (16, 4) | 50 | 51 |
| 44 | #1 | #5 | (8, 8) | 45 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 20) (ô=434)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 13)
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 2, 1, 1, 1, 3, 3, 4, 3, 3, 5, 4, 4, 0, 0, 0, 0, 0, 1, 1, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 30 |
| 2 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 28 |
| 3-4 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 27 |
| 5-6 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 26 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 25 |
| 9-10 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 24 |
| 11-12 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 23 |
| 13-14 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 22 |
| 15-16 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 21 |
| 17-18 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 20 |
| 19-20 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 19 |
| 21-22 | Di chuyển hướng 3 (`3`) | (14, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 18 |
| 23-24 | Di chuyển hướng 3 (`3`) | (15, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(15, 20)) | 17 |
| 25-26 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 16 |
| 27-28 | Di chuyển hướng 4 (`4`) | (14, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 15 |
| 29-30 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 22)) | 14 |
| 31-32 | Di chuyển hướng 0 (`0`) | (13, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 13 |
| 33-34 | Di chuyển hướng 0 (`0`) | (13, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 12 |
| 35-36 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 11 |
| 37-38 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 10 |
| 39-40 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 9 |
| 41-42 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 8 |
| 43-44 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 7 |
| 45-46 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 6 |
| 47-48 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 5 |
| 49 | Chờ 1 bước (`-1`) | (11, 13) | (11, 13) | Dự kiến đứng yên tại (11, 13); hướng tới tọa độ (11, 13) | 5 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 4) (ô=96)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 4)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 3, 2, 2, 2, 2, 3, 4, 3, 3, 4, 1, 0, 1, 1, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 42 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 41 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 39 |
| 6-8 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 37 |
| 9-10 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 36 |
| 11-12 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 35 |
| 13 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 33 |
| 14-16 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 31 |
| 17-18 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 29 |
| 19-20 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 28 |
| 21-22 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 27 |
| 23-24 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 26 |
| 25-26 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 25 |
| 27-28 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 24 |
| 29-30 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 23 |
| 31-32 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 5)) | 22 |
| 33-34 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 21 |
| 35 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 19 |
| 36-37 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 51 |
| 38-39 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 50 |
| 40 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 10)) | 48 |
| 41-42 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 47 |
| 43 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 51 |
| 44-45 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 50 |
| 46-47 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 49 |
| 48 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 47 |
| 49 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 45 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 18) (ô=392)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 15)
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 5, 4, 4, 4, 5, 4, 5, 5, 4, 4, 3, 2, 2, 2, 2, 1, 0, 1, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 48 |
| 2-3 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 47 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 46 |
| 6-7 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 45 |
| 8-9 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 44 |
| 10-11 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 42 |
| 14-15 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 40 |
| 16-17 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 39 |
| 18-19 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 38 |
| 20-21 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 37 |
| 22-23 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 36 |
| 24 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 34 |
| 25 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 32 |
| 26-27 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 31 |
| 28-29 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 19)) | 30 |
| 30-31 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 29 |
| 32-33 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 28 |
| 34-35 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 27 |
| 36-37 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 26 |
| 38-39 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(8, 20)) | 25 |
| 40-41 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 24 |
| 42-43 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 23 |
| 44 | Di chuyển hướng 1 (`1`) | (8, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 21 |
| 45-46 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 20 |
| 47-48 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 19 |
| 49 | Chờ 1 bước (`-1`) | (9, 15) | (9, 15) | Dự kiến đứng yên tại (9, 15); hướng tới tọa độ (9, 15) | 19 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 6) (ô=128)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 1)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 2, 2, 2, 1, 2, 2, 3, 2, 4, 3, 3, 3, 4, 5, -1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 31 |
| 2 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 29 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 28 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 27 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 26 |
| 9-10 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 5)) | 25 |
| 11-12 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 24 |
| 13 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 22 |
| 14-16 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 20 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 18 |
| 19-20 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 17 |
| 21-22 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 16 |
| 23-24 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 15 |
| 25 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 13 |
| 26 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 11 |
| 27-28 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 50 |
| 29-30 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 49 |
| 31 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 10)) | 47 |
| 32 | Chờ 1 bước (`-1`) | (12, 10) | (12, 10) | Dự kiến đứng yên tại (12, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 10)) | 47 |
| 33-34 | Di chuyển hướng 1 (`1`) | (12, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 46 |
| 35-36 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 45 |
| 37-38 | Di chuyển hướng 0 (`0`) | (13, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 44 |
| 39 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 42 |
| 40 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 40 |
| 41-42 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 39 |
| 43-44 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 38 |
| 45 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 36 |
| 46-47 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(14, 1)) | 35 |
| 48-49 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 34 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 7) (ô=158)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(20, 7))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(20, 7))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 2, 0, 1, 0, 0, 1, 1, 5, 4, 5, 5, 2, 3, 3, 3, 3, 3, 2, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 15 |
| 2 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 13 |
| 3 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 11 |
| 4-5 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 10 |
| 6-7 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 9 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 8 |
| 10-11 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 51 |
| 12-13 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 50 |
| 14-15 | Di chuyển hướng 1 (`1`) | (17, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 49 |
| 16-17 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 3)) | 48 |
| 18-19 | Di chuyển hướng 0 (`0`) | (17, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 47 |
| 20-21 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 46 |
| 22-24 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 44 |
| 25-26 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 43 |
| 27-28 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 42 |
| 29-30 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 41 |
| 31-32 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(14, 1)) | 40 |
| 33-34 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 39 |
| 35-36 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 38 |
| 37 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 51 |
| 38-39 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 51 |
| 40-41 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 50 |
| 42-43 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 49 |
| 44-45 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 48 |
| 46-47 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 47 |
| 48-49 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 7)) | 45 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 8)
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 4, 3, 5, 5, 5, 5, 5, 0, 0, 5, 5, 4, 4, 4, 3, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 0) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 51 |
| 2-3 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 51 |
| 4-5 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 51 |
| 6-7 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 51 |
| 8-9 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 51 |
| 10-11 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 51 |
| 12-13 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 51 |
| 14-15 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 51 |
| 16-17 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 51 |
| 18-19 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 51 |
| 20-21 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 51 |
| 22 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 51 |
| 23-24 | Di chuyển hướng 0 (`0`) | (12, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 25-26 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 51 |
| 27-28 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 51 |
| 29-31 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 51 |
| 32 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 51 |
| 33 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 51 |
| 34-35 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 51 |
| 36-49 | Chờ 14 bước (`-14`) | (8, 8) | (8, 8) | Dự kiến đứng yên tại (8, 8); hướng tới tọa độ (8, 8) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (14, 16) (ô=350)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 4)
- Mảng hành động đã gửi server: `[1, 2, 1, 1, 1, 1, 0, 0, 5, 5, 5, 4, 5, 1, 1, 1, 1, 1, 1, 1, 3, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 51 |
| 2 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 51 |
| 3 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 51 |
| 4-6 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 51 |
| 7-8 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 51 |
| 9-10 | Di chuyển hướng 1 (`1`) | (17, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 51 |
| 11 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 51 |
| 12-14 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 51 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 51 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 51 |
| 18-20 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 51 |
| 21-22 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 51 |
| 23 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 10)) | 51 |
| 24-25 | Di chuyển hướng 1 (`1`) | (12, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 51 |
| 26-27 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 51 |
| 28-29 | Di chuyển hướng 1 (`1`) | (13, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 51 |
| 30-31 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 51 |
| 32-33 | Di chuyển hướng 1 (`1`) | (14, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 51 |
| 34-35 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 51 |
| 36-37 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 51 |
| 38-39 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 51 |
| 40-49 | Chờ 10 bước (`-10`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); hướng tới tọa độ (16, 4) | 51 |

