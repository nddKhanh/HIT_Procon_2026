# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 53
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #3 | #5 | (3, 6) | 50 | 51 |
| 3 | #3 | #5 | (4, 5) | 49 | 51 |
| 4 | #2 | #6 | (8, 18) | 3 | 51 |
| 5 | #3 | #5 | (5, 5) | 50 | 51 |
| 7 | #3 | #5 | (6, 5) | 50 | 51 |
| 22 | #4 | #6 | (14, 15) | 4 | 51 |
| 31 | #0 | #6 | (15, 17) | 21 | 51 |
| 35 | #1 | #5 | (17, 0) | 0 | 51 |
| 44 | #2 | #6 | (15, 17) | 24 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 20) (ô=424)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 18)
- Mảng hành động đã gửi server: `[0, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 3, 3, 5, 4, 4, 0, 0, 0, 0, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 19)) | 41 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 19) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 40 |
| 4-5 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 39 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 38 |
| 8 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 36 |
| 9 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 34 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 33 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 32 |
| 14-15 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 31 |
| 16-17 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 30 |
| 18-19 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 28 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 27 |
| 22 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 25 |
| 23-24 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 24 |
| 25-26 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 23 |
| 27-28 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 22 |
| 29-30 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 51 |
| 31-32 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 50 |
| 33-34 | Di chuyển hướng 3 (`3`) | (14, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 49 |
| 35-36 | Di chuyển hướng 3 (`3`) | (15, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(15, 20)) | 48 |
| 37-38 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 47 |
| 39-40 | Di chuyển hướng 4 (`4`) | (14, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 46 |
| 41-42 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 22)) | 45 |
| 43-44 | Di chuyển hướng 0 (`0`) | (13, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 44 |
| 45-46 | Di chuyển hướng 0 (`0`) | (13, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 43 |
| 47-48 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 42 |
| 49-50 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 41 |
| 51-52 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 40 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 3) (ô=81)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 4)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 5, 0, 0, 0, 0, 0, 1, 1, -10, 5, 4, 5, 5, 4, 4, 4, 3, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 15 |
| 2-3 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 14 |
| 4-5 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 13 |
| 6-8 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 7)) | 11 |
| 9-10 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 10 |
| 11 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 8 |
| 12-13 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 7 |
| 14-16 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 5 |
| 17-18 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 3)) | 4 |
| 19-20 | Di chuyển hướng 0 (`0`) | (17, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 3 |
| 21-22 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 2 |
| 23-25 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 0 |
| 26-35 | Chờ 10 bước (`-10`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 51 |
| 36-37 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 50 |
| 38-39 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 49 |
| 40-41 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 48 |
| 42-43 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(14, 1)) | 47 |
| 44-45 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 46 |
| 46-47 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 45 |
| 48 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 43 |
| 49-50 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 42 |
| 51-52 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 41 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 20) (ô=428)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 20)
- Mảng hành động đã gửi server: `[1, 0, 5, 5, 5, 5, 4, 3, 2, 1, 1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 3, 3, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 4 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 51 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 49 |
| 5 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 47 |
| 6-7 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 46 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 45 |
| 10-11 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 19)) | 44 |
| 12-13 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 43 |
| 14-15 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 42 |
| 16-17 | Di chuyển hướng 1 (`1`) | (5, 20) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 41 |
| 18-19 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 40 |
| 20-21 | Di chuyển hướng 1 (`1`) | (6, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 39 |
| 22 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 37 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 36 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 35 |
| 27-28 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 34 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 33 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 31 |
| 33-34 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 30 |
| 35 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 28 |
| 36-37 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 27 |
| 38-39 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 26 |
| 40-41 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 25 |
| 42-43 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 51 |
| 44-45 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 50 |
| 46-47 | Di chuyển hướng 3 (`3`) | (14, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 49 |
| 48-49 | Di chuyển hướng 3 (`3`) | (15, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(15, 20)) | 48 |
| 50-51 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 47 |
| 52 | Chờ 1 bước (`-1`) | (14, 20) | (14, 20) | Dự kiến đứng yên tại (14, 20); hướng tới tọa độ (14, 20) | 47 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 6) (ô=128)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 9)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 5, 0, 5, 5, 2, 2, 3, 2, 2, 2, 1, 2, 2, 2, 3, 2, 3, 4, 3, 3, 4, 5, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 51 |
| 2 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 51 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 51 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 51 |
| 7-8 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 50 |
| 9-10 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 49 |
| 11 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 47 |
| 12-13 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 46 |
| 14-15 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 45 |
| 16-17 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 44 |
| 18 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 42 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 41 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 40 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 5)) | 39 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 38 |
| 27-28 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 29-31 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 35 |
| 32-35 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 33 |
| 36-37 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 32 |
| 38-39 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 31 |
| 40-41 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 30 |
| 42-43 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 29 |
| 44 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 27 |
| 45-46 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 26 |
| 47-48 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 25 |
| 49 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 10)) | 23 |
| 50-51 | Di chuyển hướng 1 (`1`) | (12, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 22 |
| 52 | Chờ 1 bước (`-1`) | (13, 9) | (13, 9) | Dự kiến đứng yên tại (13, 9); hướng tới tọa độ (13, 9) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (13, 22) (ô=475)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(4, 20))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(4, 20))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 2, 2, 2, 1, 0, 0, -2, 0, 0, 5, 5, 5, 4, 4, 4, 3, 4, 3, 4, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 13 |
| 2-3 | Di chuyển hướng 0 (`0`) | (13, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 12 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 11 |
| 6-7 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 10 |
| 8-9 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 9 |
| 10-11 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 8 |
| 12-13 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 7 |
| 14-15 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 6 |
| 16-17 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 5 |
| 18-19 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 4 |
| 20-21 | Chờ 2 bước (`-2`) | (14, 15) | (14, 15) | Dự kiến đứng yên tại (14, 15); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 51 |
| 22-23 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 50 |
| 24-25 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 49 |
| 26-27 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 48 |
| 28 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 46 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 45 |
| 31-32 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 43 |
| 33-34 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 42 |
| 35-36 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 41 |
| 37-38 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 40 |
| 39-40 | Di chuyển hướng 4 (`4`) | (9, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 39 |
| 41 | Di chuyển hướng 3 (`3`) | (8, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 37 |
| 42-43 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(8, 20)) | 36 |
| 44-45 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 35 |
| 46-47 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 34 |
| 48-49 | Di chuyển hướng 5 (`5`) | (6, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 33 |
| 50-51 | Di chuyển hướng 5 (`5`) | (5, 20) | (4, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 32 |
| 52 | Chờ 1 bước (`-1`) | (4, 20) | (4, 20) | Dự kiến đứng yên tại (4, 20); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 32 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (2, 6) (ô=128)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 51 |
| 2 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 51 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 51 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 51 |
| 7-8 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 51 |
| 9 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 51 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 51 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 51 |
| 14-16 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 51 |
| 17-20 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 21-22 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 51 |
| 23-24 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 51 |
| 25 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 51 |
| 26-27 | Di chuyển hướng 2 (`2`) | (13, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 51 |
| 28-29 | Di chuyển hướng 2 (`2`) | (14, 2) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 51 |
| 30 | Di chuyển hướng 1 (`1`) | (15, 2) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 51 |
| 31-32 | Di chuyển hướng 1 (`1`) | (16, 1) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 51 |
| 33-34 | Di chuyển hướng 2 (`2`) | (16, 0) | (17, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 51 |
| 35-52 | Chờ 18 bước (`-18`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (8, 16) (ô=344)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(15, 17))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(15, 17))
- Mảng hành động đã gửi server: `[3, 4, 1, 1, 0, 1, 1, 2, 2, 2, 3, 3, 3, 3, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 51 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 51 |
| 4 | Di chuyển hướng 1 (`1`) | (8, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 51 |
| 5-6 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 51 |
| 7-8 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 51 |
| 9-10 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 51 |
| 11-12 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 51 |
| 13-14 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 51 |
| 15-16 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 51 |
| 17 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 51 |
| 18-19 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 51 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 51 |
| 22-23 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 51 |
| 24-25 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 51 |
| 26-52 | Chờ 27 bước (`-27`) | (15, 17) | (15, 17) | Dự kiến đứng yên tại (15, 17); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 51 |

