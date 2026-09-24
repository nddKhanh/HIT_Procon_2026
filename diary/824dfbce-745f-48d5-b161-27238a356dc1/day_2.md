# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 48
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #2 | #5 | (1, 10) | 0 | 49 |
| 23 | #1 | #4 | (19, 4) | 3 | 49 |
| 26 | #1 | #4 | (19, 5) | 48 | 49 |
| 29 | #1 | #4 | (18, 6) | 47 | 49 |
| 32 | #1 | #4 | (18, 7) | 47 | 49 |
| 36 | #1 | #4 | (16, 10) | 44 | 49 |
| 39 | #1 | #4 | (15, 10) | 47 | 49 |
| 42 | #1 | #4 | (13, 10) | 46 | 49 |
| 47 | #1 | #4 | (11, 10) | 45 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (18, 0) (ô=18)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 16)
- Mảng hành động đã gửi server: `[4, 3, 4, 3, 3, 4, 4, 3, 3, 3, 4, 4, 4, 4, 3, 4, 4, 4, 4, 0, 0, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 0) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 34 |
| 2-4 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 32 |
| 5-6 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 31 |
| 7-9 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 29 |
| 10-12 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 27 |
| 13-15 | Di chuyển hướng 4 (`4`) | (19, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 25 |
| 16-18 | Di chuyển hướng 4 (`4`) | (18, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 23 |
| 19-20 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 22 |
| 21-22 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 21 |
| 23-24 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 20 |
| 25 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 18 |
| 26-27 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 17 |
| 28-29 | Di chuyển hướng 4 (`4`) | (18, 12) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 16 |
| 30-31 | Di chuyển hướng 4 (`4`) | (18, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 15 |
| 32-33 | Di chuyển hướng 3 (`3`) | (17, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 14 |
| 34 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 12 |
| 35 | Di chuyển hướng 4 (`4`) | (17, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 10 |
| 36-38 | Di chuyển hướng 4 (`4`) | (17, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 8 |
| 39-40 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 7 |
| 41-42 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 6 |
| 43-44 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 5 |
| 45 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 3 |
| 46-47 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 15) (ô=335)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(11, 10))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(11, 10))
- Mảng hành động đã gửi server: `[0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, -1, 4, 4, 4, 4, 4, 4, 5, 5, 5, 4, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 18 |
| 2-4 | Di chuyển hướng 0 (`0`) | (19, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 16 |
| 5-6 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 15 |
| 7-8 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 14 |
| 9-10 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 13 |
| 11 | Di chuyển hướng 1 (`1`) | (19, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 11 |
| 12-14 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(20, 8)) | 9 |
| 15-16 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 8 |
| 17-19 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 6 |
| 20 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 4 |
| 21-22 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 49 |
| 23 | Chờ 1 bước (`-1`) | (19, 4) | (19, 4) | Dự kiến đứng yên tại (19, 4); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 49 |
| 24-25 | Di chuyển hướng 4 (`4`) | (19, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 49 |
| 26-28 | Di chuyển hướng 4 (`4`) | (19, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 49 |
| 29-31 | Di chuyển hướng 4 (`4`) | (18, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 49 |
| 32-33 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 48 |
| 34 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 46 |
| 35 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 49 |
| 36-38 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 49 |
| 39-40 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 48 |
| 41 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 49 |
| 42-43 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 48 |
| 44-45 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 47 |
| 46 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 49 |
| 47 | Chờ 1 bước (`-1`) | (11, 10) | (11, 10) | Dự kiến đứng yên tại (11, 10); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 49 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 2) (ô=46)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(1, 18))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(1, 18))
- Mảng hành động đã gửi server: `[2, 5, 4, 4, 4, 4, 4, 4, 3, 4, -1, 3, 3, 2, 2, 5, 4, 4, 3, 3, 5, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(5, 2)) | 14 |
| 2-3 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 2)) | 13 |
| 4-5 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 12 |
| 6-7 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 11 |
| 8-10 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 9 |
| 11-13 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 7 |
| 14-16 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 5 |
| 17 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 3 |
| 18 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 1 |
| 19-20 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 49 |
| 21 | Chờ 1 bước (`-1`) | (1, 10) | (1, 10) | Dự kiến đứng yên tại (1, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 49 |
| 22-23 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 48 |
| 24-26 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 46 |
| 27-28 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 45 |
| 29-31 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 43 |
| 32-33 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 42 |
| 34-36 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 40 |
| 37 | Di chuyển hướng 4 (`4`) | (3, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 38 |
| 38 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 36 |
| 39-41 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(3, 16)) | 34 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 33 |
| 44-45 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 32 |
| 46-47 | Di chuyển hướng 4 (`4`) | (2, 17) | (1, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 18)) | 31 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 18) (ô=379)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(18, 12))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(18, 12))
- Mảng hành động đã gửi server: `[3, 2, 2, 3, 3, 2, 2, 2, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 18) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 48 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 46 |
| 3-4 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 45 |
| 5 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 43 |
| 6-7 | Di chuyển hướng 3 (`3`) | (4, 20) | (5, 21) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(5, 21)) | 42 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 41 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 40 |
| 12-14 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 21)) | 38 |
| 15-16 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 37 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 36 |
| 19-20 | Di chuyển hướng 2 (`2`) | (9, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 35 |
| 21-22 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 20)) | 34 |
| 23-24 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 33 |
| 25-27 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 31 |
| 28-30 | Di chuyển hướng 1 (`1`) | (12, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 29 |
| 31-33 | Di chuyển hướng 1 (`1`) | (13, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 27 |
| 34-36 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 25 |
| 37-38 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 24 |
| 39-40 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 23 |
| 41 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 21 |
| 42-43 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 20 |
| 44-45 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 19 |
| 46-47 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 18 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (20, 8) (ô=188)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(11, 10))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(11, 10))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, -15, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 49 |
| 2-4 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 49 |
| 5 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 49 |
| 6-7 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 49 |
| 8-22 | Chờ 15 bước (`-15`) | (19, 4) | (19, 4) | Dự kiến đứng yên tại (19, 4); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 49 |
| 23-24 | Di chuyển hướng 4 (`4`) | (19, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 49 |
| 25-27 | Di chuyển hướng 4 (`4`) | (19, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 49 |
| 28-30 | Di chuyển hướng 4 (`4`) | (18, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 49 |
| 31-32 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 49 |
| 33 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 49 |
| 34 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 49 |
| 35-37 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 49 |
| 38-39 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 49 |
| 40 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 49 |
| 41-42 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 49 |
| 43 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 49 |
| 44-47 | Chờ 4 bước (`-4`) | (11, 10) | (11, 10) | Dự kiến đứng yên tại (11, 10); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 49 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (1, 18) (ô=379)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(1, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(1, 10))
- Mảng hành động đã gửi server: `[1, 0, 1, 1, 1, 0, 0, 0, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 49 |
| 2-3 | Di chuyển hướng 0 (`0`) | (2, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 49 |
| 4 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 49 |
| 5-7 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 49 |
| 8 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 49 |
| 9 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 49 |
| 10-11 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 49 |
| 12-14 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 49 |
| 15-47 | Chờ 33 bước (`-33`) | (1, 10) | (1, 10) | Dự kiến đứng yên tại (1, 10); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 49 |

