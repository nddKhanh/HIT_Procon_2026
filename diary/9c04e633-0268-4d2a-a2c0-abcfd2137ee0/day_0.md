# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 44
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 19 | #0 | #6 | (14, 18) | 40 | 51 |
| 25 | #3 | #5 | (13, 5) | 33 | 51 |
| 29 | #4 | #5 | (13, 5) | 30 | 51 |
| 31 | #0 | #6 | (14, 18) | 45 | 51 |
| 42 | #2 | #6 | (14, 18) | 24 | 51 |
| 44 | #1 | #5 | (13, 5) | 23 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 22) (ô=478)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 19)
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 5, 5, 0, 2, 2, 2, 1, 0, 0, 3, 3, 4, 4, 3, 4, 4, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (16, 22) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 50 |
| 2-3 | Di chuyển hướng 0 (`0`) | (16, 21) | (15, 20) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(15, 20)) | 49 |
| 4-5 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 48 |
| 6-7 | Di chuyển hướng 5 (`5`) | (15, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 47 |
| 8 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 45 |
| 9-10 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 44 |
| 11-12 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 43 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 42 |
| 15-16 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 41 |
| 17-18 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 51 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 50 |
| 21-22 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 49 |
| 23-24 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 48 |
| 25-26 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 47 |
| 27-28 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 46 |
| 29-30 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 51 |
| 31-32 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 50 |
| 33 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 48 |
| 34-35 | Di chuyển hướng 4 (`4`) | (14, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 47 |
| 36-37 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 22)) | 46 |
| 38-39 | Di chuyển hướng 1 (`1`) | (13, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 45 |
| 40-41 | Di chuyển hướng 1 (`1`) | (14, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 44 |
| 42-43 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 43 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 1) (ô=41)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 5))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 5))
- Mảng hành động đã gửi server: `[3, 4, 3, 4, 3, 4, 5, 0, 0, 0, 0, 0, 1, 1, 5, 4, 5, 5, 4, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (20, 1) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 50 |
| 2-3 | Di chuyển hướng 4 (`4`) | (20, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 49 |
| 4-5 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 48 |
| 6 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 46 |
| 7-9 | Di chuyển hướng 3 (`3`) | (20, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 44 |
| 10-11 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 7)) | 43 |
| 12-13 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 42 |
| 14 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 40 |
| 15-16 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 39 |
| 17-19 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 37 |
| 20-21 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 3)) | 36 |
| 22-23 | Di chuyển hướng 0 (`0`) | (17, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 35 |
| 24-25 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 34 |
| 26-28 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 32 |
| 29-30 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 31 |
| 31-32 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 30 |
| 33-34 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 29 |
| 35-36 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(14, 1)) | 28 |
| 37-38 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 27 |
| 39-40 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 26 |
| 41 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 24 |
| 42-43 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 51 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 19) (ô=400)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 19)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 2, 2, 2, 1, 0, 1, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 50 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 48 |
| 3-4 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 19)) | 47 |
| 5-6 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 46 |
| 7-8 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 45 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 44 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 43 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(8, 20)) | 42 |
| 15-16 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 41 |
| 17-18 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 40 |
| 19 | Di chuyển hướng 1 (`1`) | (8, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 38 |
| 20-21 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 37 |
| 22-23 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 36 |
| 24-25 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 35 |
| 26-27 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 34 |
| 28 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 32 |
| 29-30 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 31 |
| 31 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 29 |
| 32-33 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 28 |
| 34-35 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 27 |
| 36-37 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 26 |
| 38-39 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 25 |
| 40-41 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 51 |
| 42-43 | Di chuyển hướng 3 (`3`) | (14, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 50 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (15, 5) (ô=120)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(8, 10))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(8, 10))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 0, 5, 5, 5, 0, 0, 0, 1, 0, 5, 5, 5, 4, 5, 3, 4, 3, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (15, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 50 |
| 2-3 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 49 |
| 4-5 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 48 |
| 6-7 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 47 |
| 8-9 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 46 |
| 10-12 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 44 |
| 13-14 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 43 |
| 15 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 41 |
| 16-18 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 39 |
| 19-20 | Di chuyển hướng 0 (`0`) | (14, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 38 |
| 21-22 | Di chuyển hướng 0 (`0`) | (13, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 37 |
| 23 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 35 |
| 24 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 51 |
| 25-26 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 50 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 49 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 48 |
| 31 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 46 |
| 32-34 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 44 |
| 35 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 5)) | 42 |
| 36-37 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 41 |
| 38 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 39 |
| 39-40 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 38 |
| 41-42 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 37 |
| 43 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 10)) | 35 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 5) (ô=109)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 7)
- Mảng hành động đã gửi server: `[4, 5, 0, 1, 2, 2, 3, 2, 2, 2, 2, 1, 2, 2, 2, 3, 4, 3, 3, 3, 4, 5, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 50 |
| 2 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 6)) | 48 |
| 3-4 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 47 |
| 5-6 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 46 |
| 7-8 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 45 |
| 9-10 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 44 |
| 11 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 42 |
| 12-13 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 41 |
| 14-15 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 40 |
| 16-17 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 5)) | 39 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 38 |
| 20 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 36 |
| 21-23 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 34 |
| 24 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 32 |
| 25-26 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 31 |
| 27-28 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 51 |
| 29-30 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 50 |
| 31 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 48 |
| 32 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 46 |
| 33-34 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 45 |
| 35-36 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 44 |
| 37 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 10)) | 42 |
| 38-39 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 41 |
| 40-41 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 40 |
| 42-43 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 39 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (11, 7) (ô=158)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 5))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 5))
- Mảng hành động đã gửi server: `[1, 2, 1, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 51 |
| 2 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 51 |
| 3 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 51 |
| 4-43 | Chờ 40 bước (`-40`) | (13, 5) | (13, 5) | Dự kiến đứng yên tại (13, 5); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (15, 16) (ô=351)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(14, 18))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(14, 18))
- Mảng hành động đã gửi server: `[4, 4, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 51 |
| 2-3 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 51 |
| 4-43 | Chờ 40 bước (`-40`) | (14, 18) | (14, 18) | Dự kiến đứng yên tại (14, 18); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 51 |

