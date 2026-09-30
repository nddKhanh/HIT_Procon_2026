# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 46
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #6 | (14, 18) | 49 | 51 |
| 9 | #3 | #5 | (9, 4) | 26 | 51 |
| 11 | #0 | #6 | (14, 18) | 36 | 51 |
| 36 | #0 | #6 | (14, 18) | 37 | 51 |
| 42 | #4 | #6 | (14, 18) | 9 | 51 |
| 43 | #3 | #5 | (2, 4) | 27 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 19) (ô=413)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 13)
- Mảng hành động đã gửi server: `[0, 5, 5, 2, 2, 2, 1, 0, 3, 3, 4, 3, 5, 4, 4, 1, 1, 0, 1, 1, 0, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 41 |
| 1-2 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 40 |
| 3-4 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 39 |
| 5-6 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 38 |
| 7-8 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 37 |
| 9-10 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 51 |
| 11-12 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 50 |
| 13-14 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 49 |
| 15-16 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 48 |
| 17-18 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 47 |
| 19-20 | Di chuyển hướng 4 (`4`) | (15, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 46 |
| 21-22 | Di chuyển hướng 3 (`3`) | (15, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(15, 20)) | 45 |
| 23-24 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 44 |
| 25-26 | Di chuyển hướng 4 (`4`) | (14, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 43 |
| 27-28 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 22)) | 42 |
| 29-30 | Di chuyển hướng 1 (`1`) | (13, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 41 |
| 31-32 | Di chuyển hướng 1 (`1`) | (14, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 40 |
| 33-34 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 39 |
| 35 | Di chuyển hướng 1 (`1`) | (14, 19) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 51 |
| 36-37 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 50 |
| 38-39 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 49 |
| 40-41 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 48 |
| 42-43 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 47 |
| 44-45 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 46 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 5) (ô=118)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 4)
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, 2, 3, 2, 5, 0, 0, 0, 0, 0, 1, 1, 5, 4, 5, 5, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 50 |
| 2-3 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 49 |
| 4-5 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 48 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 47 |
| 8-9 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 46 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 45 |
| 12-13 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 44 |
| 14 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 7)) | 42 |
| 15-16 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 41 |
| 17 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 39 |
| 18-19 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 38 |
| 20-22 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 36 |
| 23-24 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 3)) | 35 |
| 25-26 | Di chuyển hướng 0 (`0`) | (17, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 34 |
| 27-28 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 33 |
| 29-31 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 31 |
| 32-33 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 30 |
| 34-35 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 29 |
| 36-37 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 28 |
| 38-39 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(14, 1)) | 27 |
| 40-41 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 26 |
| 42-43 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 25 |
| 44 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 23 |
| 45 | Chờ 1 bước (`-1`) | (12, 4) | (12, 4) | Dự kiến đứng yên tại (12, 4); hướng tới tọa độ (12, 4) | 23 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 19) (ô=414)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 17)
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, 0, 0, 5, 4, 4, 4, 5, 4, 5, 4, 5, 4, 3, 2, 2, 2, 2, 1, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 19) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 51 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 50 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 49 |
| 6-7 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 48 |
| 8-9 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 47 |
| 10-11 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 46 |
| 12-13 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 45 |
| 14-15 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 44 |
| 16 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 42 |
| 17-18 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 41 |
| 19-20 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 40 |
| 21-22 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 39 |
| 23-24 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 38 |
| 25 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 36 |
| 26 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 34 |
| 27-28 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 33 |
| 29-30 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 19)) | 32 |
| 31-32 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 31 |
| 33-34 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 30 |
| 35-36 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 29 |
| 37-38 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 28 |
| 39-40 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(8, 20)) | 27 |
| 41-42 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 26 |
| 43-44 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 25 |
| 45 | Di chuyển hướng 1 (`1`) | (8, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 23 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 10) (ô=218)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 4)
- Mảng hành động đã gửi server: `[1, 0, 1, 1, 0, 1, 2, 2, 2, 3, 0, 5, 5, 5, 4, 5, 5, 5, 5, 5, 4, 5, 0, 1, -1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 34 |
| 2 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 32 |
| 3-4 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 31 |
| 5-6 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 30 |
| 7 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 28 |
| 8 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 51 |
| 9-11 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 49 |
| 12 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 47 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 46 |
| 15-16 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 45 |
| 17-18 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 44 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 43 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 42 |
| 23 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 40 |
| 24-26 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 38 |
| 27 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 5)) | 36 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 35 |
| 30-31 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 34 |
| 32-33 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 33 |
| 34-35 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 32 |
| 36-37 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 31 |
| 38 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 6)) | 29 |
| 39-40 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 28 |
| 41-42 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 51 |
| 43 | Chờ 1 bước (`-1`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 51 |
| 44-45 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 50 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 7) (ô=158)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(15, 20))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(15, 20))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 4, 5, 2, 1, 2, 2, 2, 3, 3, 4, 5, 5, 4, 4, 4, 3, 3, 4, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 38 |
| 2-3 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 37 |
| 4 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 35 |
| 5-6 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 34 |
| 7-8 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 33 |
| 9 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 10)) | 31 |
| 10-11 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 30 |
| 12 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 28 |
| 13-14 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 27 |
| 15-17 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 25 |
| 18 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 23 |
| 19-20 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 22 |
| 21-23 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 20 |
| 24 | Di chuyển hướng 4 (`4`) | (18, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 18 |
| 25-26 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 17 |
| 27-29 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 15 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 14 |
| 32-33 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 13 |
| 34-35 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 12 |
| 36-37 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 11 |
| 38-39 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 10 |
| 40-41 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 51 |
| 42-43 | Di chuyển hướng 3 (`3`) | (14, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 50 |
| 44-45 | Di chuyển hướng 3 (`3`) | (15, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(15, 20)) | 49 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (13, 5) (ô=118)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 51 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 51 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 51 |
| 6 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 51 |
| 7-9 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 51 |
| 10-11 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 51 |
| 12-13 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 51 |
| 14 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 51 |
| 15-17 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 51 |
| 18 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 51 |
| 19-20 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 51 |
| 21-45 | Chờ 25 bước (`-25`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (14, 18) (ô=392)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(14, 18))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(14, 18))
- Mảng hành động đã gửi server: `[-46]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-45 | Chờ 46 bước (`-46`) | (14, 18) | (14, 18) | Dự kiến đứng yên tại (14, 18); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 51 |

