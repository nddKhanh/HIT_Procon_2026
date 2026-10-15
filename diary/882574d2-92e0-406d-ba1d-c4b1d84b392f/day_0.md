# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 46
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (0, 13) (ô=286)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 23)
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 4, 4, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 1, 2, 2, 3, 3, 3, 4, 4, 4, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 52 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 50 |
| 3-4 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 14)) | 49 |
| 5-6 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 48 |
| 7-8 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 47 |
| 9 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(2, 17)) | 45 |
| 10-11 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 44 |
| 12 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 42 |
| 13-14 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 41 |
| 15-16 | Di chuyển hướng 2 (`2`) | (4, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 40 |
| 17-18 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 39 |
| 19-20 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 15)) | 38 |
| 21-22 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 37 |
| 23-24 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 36 |
| 25 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 34 |
| 26 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 32 |
| 27 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 30 |
| 28-29 | Di chuyển hướng 1 (`1`) | (10, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 29 |
| 30 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 27 |
| 31-32 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 26 |
| 33 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 24 |
| 34-35 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 23 |
| 36 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 21 |
| 37-38 | Di chuyển hướng 4 (`4`) | (14, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 20 |
| 39-40 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 19 |
| 41-43 | Di chuyển hướng 4 (`4`) | (13, 22) | (13, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 23)) | 17 |
| 44-45 | Di chuyển hướng 2 (`2`) | (13, 23) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 16 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (5, 9) (ô=203)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(15, 10))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(15, 10))
- Mảng hành động đã gửi server: `[2, 3, 0, 1, 1, 2, 2, 1, 2, 1, 2, 2, 3, 3, 2, 2, 2, 2, 2, 3, 3, 5, 5, 5, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 52 |
| 2-3 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 10)) | 51 |
| 4-5 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 50 |
| 6-7 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 49 |
| 8-9 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 48 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 46 |
| 11 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 44 |
| 12-13 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(9, 6)) | 43 |
| 14-15 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 42 |
| 16-17 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 41 |
| 18 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 39 |
| 19-20 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 38 |
| 21 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 36 |
| 22-23 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 35 |
| 24-25 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 34 |
| 26-27 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 33 |
| 28-29 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 32 |
| 30 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 30 |
| 31 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 28 |
| 32 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 26 |
| 33-34 | Di chuyển hướng 3 (`3`) | (19, 8) | (20, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 9)) | 25 |
| 35-36 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 24 |
| 37-38 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 23 |
| 39-40 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 22 |
| 41-42 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 21 |
| 43-44 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 20 |
| 45 | Chờ 1 bước (`-1`) | (15, 10) | (15, 10) | Dự kiến đứng yên tại (15, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 20 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 9) (ô=200)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(7, 3))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(7, 3))
- Mảng hành động đã gửi server: `[1, 4, 4, 5, 1, 1, 1, 2, 1, 1, 1, 0, 5, 0, 0, 0, 5, 2, 2, 2, 3, 2, 2, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 52 |
| 2 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 50 |
| 3-4 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 49 |
| 5-6 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 10)) | 48 |
| 7-8 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 47 |
| 9-10 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 46 |
| 11-12 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 45 |
| 13 | Di chuyển hướng 2 (`2`) | (2, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 43 |
| 14-15 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 42 |
| 16 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 40 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 4)) | 39 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 38 |
| 21-22 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 37 |
| 23 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 35 |
| 24-25 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 34 |
| 26-28 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 0)) | 32 |
| 29-30 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 0)) | 31 |
| 31-32 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 0)) | 30 |
| 33-34 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 29 |
| 35-37 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 27 |
| 38 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 25 |
| 39-40 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 24 |
| 41-42 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 23 |
| 43-44 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 22 |
| 45 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 3)) | 20 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 15) (ô=330)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 17)
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 3, 2, 2, 3, 3, 1, 0, 0, 0, 0, 5, 5, 0, 4, 3, 4, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 15) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 52 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 51 |
| 4-5 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 50 |
| 6 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 48 |
| 7-8 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 47 |
| 9-10 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 46 |
| 11 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 44 |
| 12-13 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 43 |
| 14-15 | Di chuyển hướng 3 (`3`) | (6, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 42 |
| 16-17 | Di chuyển hướng 1 (`1`) | (6, 20) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 41 |
| 18-19 | Di chuyển hướng 0 (`0`) | (7, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 40 |
| 20-21 | Di chuyển hướng 0 (`0`) | (6, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 39 |
| 22-23 | Di chuyển hướng 0 (`0`) | (6, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 38 |
| 24-25 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 37 |
| 26-27 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 36 |
| 28-29 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 35 |
| 30-31 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 14)) | 34 |
| 32-33 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 33 |
| 34-35 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 32 |
| 36 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(2, 17)) | 30 |
| 37-38 | Di chuyển hướng 2 (`2`) | (2, 17) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 29 |
| 39-40 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 28 |
| 41-42 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 27 |
| 43-44 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 26 |
| 45 | Chờ 1 bước (`-1`) | (6, 17) | (6, 17) | Dự kiến đứng yên tại (6, 17); hướng tới tọa độ (6, 17) | 26 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 2) (ô=56)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 20)
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 1, 4, 4, 3, 3, 3, 3, 3, 3, 4, 3, 3, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 52 |
| 2-3 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 51 |
| 4-5 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 50 |
| 6 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 48 |
| 7-8 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 47 |
| 9-10 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 46 |
| 11-12 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 45 |
| 13-14 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 44 |
| 15-16 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 43 |
| 17-18 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 42 |
| 19-20 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 41 |
| 21-22 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 40 |
| 23-24 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 39 |
| 25-26 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 38 |
| 27 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 36 |
| 28-29 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 35 |
| 30-31 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 34 |
| 32-34 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 32 |
| 35 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 30 |
| 36-37 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(19, 18)) | 29 |
| 38-39 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 28 |
| 40-41 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 27 |
| 42-43 | Di chuyển hướng 2 (`2`) | (20, 20) | (21, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 20)) | 26 |
| 44-45 | Di chuyển hướng 5 (`5`) | (21, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 25 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (17, 13) (ô=303)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(5, 22))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(5, 22))
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 3, 5, 5, 5, 4, 4, 5, 4, 0, 0, 0, 5, 5, 4, 5, 5, 5, 4, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 52 |
| 2-3 | Di chuyển hướng 3 (`3`) | (17, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 51 |
| 4-5 | Di chuyển hướng 3 (`3`) | (18, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 50 |
| 6-8 | Di chuyển hướng 2 (`2`) | (18, 16) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 48 |
| 9 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 46 |
| 10-11 | Di chuyển hướng 5 (`5`) | (20, 17) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 45 |
| 12-13 | Di chuyển hướng 5 (`5`) | (19, 17) | (18, 17) | Dự kiến đến điểm hẹn tọa độ (18, 17) | 44 |
| 14 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 42 |
| 15-16 | Di chuyển hướng 4 (`4`) | (17, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 41 |
| 17-18 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 40 |
| 19-20 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 39 |
| 21-22 | Di chuyển hướng 4 (`4`) | (15, 19) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 38 |
| 23-24 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 37 |
| 25 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 35 |
| 26-27 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 34 |
| 28 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 32 |
| 29-30 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 31 |
| 31 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 29 |
| 32-33 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 28 |
| 34 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 26 |
| 35-36 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 25 |
| 37-38 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 24 |
| 39-40 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 23 |
| 41-42 | Di chuyển hướng 4 (`4`) | (6, 20) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 22 |
| 43-44 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 21 |
| 45 | Chờ 1 bước (`-1`) | (5, 22) | (5, 22) | Dự kiến đứng yên tại (5, 22); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 21 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (4, 1) (ô=26)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 8)
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 2, 2, 3, 3, 3, 2, 2, 3, 3, 3, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 53 |
| 2-3 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 53 |
| 4-5 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 53 |
| 6 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 53 |
| 7 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 53 |
| 8-9 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 53 |
| 10-11 | Di chuyển hướng 3 (`3`) | (9, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 53 |
| 12 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 53 |
| 13 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 53 |
| 14 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 53 |
| 15-16 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 53 |
| 17 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 53 |
| 18-19 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 53 |
| 20-21 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 53 |
| 22-45 | Chờ 24 bước (`-24`) | (14, 8) | (14, 8) | Dự kiến đứng yên tại (14, 8); hướng tới tọa độ (14, 8) | 53 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (0, 11) (ô=242)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 11)
- Mảng hành động đã gửi server: `[-46]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-45 | Chờ 46 bước (`-46`) | (0, 11) | (0, 11) | Dự kiến đứng yên tại (0, 11); hướng tới tọa độ (0, 11) | 53 |

