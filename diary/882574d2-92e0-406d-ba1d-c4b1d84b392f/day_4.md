# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 54
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 17 | #5 | #7 | (13, 23) | 0 | 53 |
| 24 | #2 | #6 | (9, 6) | 2 | 53 |
| 25 | #1 | #7 | (15, 20) | 31 | 53 |
| 54 | #4 | #7 | (15, 20) | 6 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 9) (ô=213)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 5, 4, 4, 4, 5, 4, 4, 5, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 5, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 40 |
| 2-3 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 39 |
| 4-5 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 38 |
| 6-7 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 37 |
| 8 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 35 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 34 |
| 11 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 32 |
| 12-13 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 31 |
| 14-15 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 30 |
| 16 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 28 |
| 17-19 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 26 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 25 |
| 22 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 10)) | 23 |
| 23-24 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 22 |
| 25-26 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 21 |
| 27-28 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 20 |
| 29-30 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 19 |
| 31-32 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 18 |
| 33 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 4)) | 16 |
| 34-35 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 15 |
| 36-37 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 14 |
| 38 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 12 |
| 39-40 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 11 |
| 41-43 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 0)) | 9 |
| 44-45 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 0)) | 8 |
| 46-53 | Chờ 8 bước (`-8`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 0)) | 8 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 14) (ô=326)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(7, 15))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(7, 15))
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 3, 3, 2, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 5, 5, 4, 5, 5, 5, 4, 4, 0, 1, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 46 |
| 2-4 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 44 |
| 5 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 42 |
| 6-7 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(19, 18)) | 41 |
| 8-9 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 40 |
| 10-11 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 39 |
| 12-13 | Di chuyển hướng 2 (`2`) | (20, 20) | (21, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 20)) | 38 |
| 14-15 | Di chuyển hướng 5 (`5`) | (21, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 37 |
| 16-17 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 36 |
| 18-19 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 35 |
| 20 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 33 |
| 21-22 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 32 |
| 23-24 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 53 |
| 25-26 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 52 |
| 27-28 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 51 |
| 29 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 49 |
| 30-31 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 48 |
| 32 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 46 |
| 33-34 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 45 |
| 35 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 43 |
| 36-37 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 42 |
| 38 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 40 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 39 |
| 41-42 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 38 |
| 43-44 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 37 |
| 45-46 | Di chuyển hướng 0 (`0`) | (6, 20) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 36 |
| 47-48 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 35 |
| 49-50 | Di chuyển hướng 1 (`1`) | (6, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 34 |
| 51 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 32 |
| 52-53 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 15)) | 31 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 6) (ô=140)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 6)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 0, 2, 1, 2, 3, 3, 3, 2, -4, 5, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 1, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 18 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 16 |
| 3-5 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 14 |
| 6-7 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 13 |
| 8 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 4)) | 11 |
| 9-10 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 10 |
| 11 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 8 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 3)) | 7 |
| 14-15 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 6 |
| 16-17 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 5 |
| 18 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 3 |
| 19-20 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(9, 6)) | 2 |
| 21-24 | Chờ 4 bước (`-4`) | (9, 6) | (9, 6) | Dự kiến đứng yên tại (9, 6); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(9, 6)) | 53 |
| 25-26 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 52 |
| 27-28 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 51 |
| 29 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 49 |
| 30-32 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 47 |
| 33-34 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 10)) | 46 |
| 35-36 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 45 |
| 37 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 43 |
| 38-40 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 41 |
| 41-42 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 40 |
| 43 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 38 |
| 44-45 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 10)) | 37 |
| 46-47 | Di chuyển hướng 1 (`1`) | (0, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 36 |
| 48-49 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 35 |
| 50-51 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 34 |
| 52 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 32 |
| 53 | Chờ 1 bước (`-1`) | (2, 6) | (2, 6) | Dự kiến đứng yên tại (2, 6); hướng tới tọa độ (2, 6) | 32 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 22) (ô=489)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(2, 17))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(2, 17))
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 5, 0, 0, 0, 0, 4, 3, 4, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 18 |
| 2-3 | Di chuyển hướng 1 (`1`) | (6, 21) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 17 |
| 4-5 | Di chuyển hướng 0 (`0`) | (6, 20) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 16 |
| 6-7 | Di chuyển hướng 0 (`0`) | (6, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 15 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 14 |
| 10 | Di chuyển hướng 0 (`0`) | (4, 18) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 12 |
| 11-12 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 11 |
| 13-15 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 9 |
| 16-17 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 14)) | 8 |
| 18-19 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 7 |
| 20-21 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 6 |
| 22 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(2, 17)) | 4 |
| 23-53 | Chờ 31 bước (`-31`) | (2, 17) | (2, 17) | Dự kiến đứng yên tại (2, 17); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(2, 17)) | 4 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 7) (ô=168)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 20)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 3, 3, 5, 5, 5, 4, 5, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 41 |
| 2-3 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 40 |
| 4-5 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 39 |
| 6 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 37 |
| 7 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 35 |
| 8 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 33 |
| 9-10 | Di chuyển hướng 3 (`3`) | (19, 8) | (20, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 9)) | 32 |
| 11-12 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 31 |
| 13-14 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 30 |
| 15-16 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 29 |
| 17-18 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 28 |
| 19-20 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 27 |
| 21-22 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 26 |
| 23-24 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 25 |
| 25-26 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 24 |
| 27-28 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 22 |
| 29-30 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 21 |
| 31-32 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 20 |
| 33-35 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 18 |
| 36 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 16 |
| 37-38 | Di chuyển hướng 3 (`3`) | (20, 17) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 15 |
| 39-40 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 14 |
| 41-42 | Di chuyển hướng 3 (`3`) | (21, 19) | (21, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 20)) | 13 |
| 43-44 | Di chuyển hướng 5 (`5`) | (21, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 12 |
| 45-46 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 11 |
| 47-48 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 10 |
| 49 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 8 |
| 50-51 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 7 |
| 52-53 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 53 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 23) (ô=519)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 19)
- Mảng hành động đã gửi server: `[-18, 1, 1, 1, 0, 0, 0, 5, 5, 4, 5, 5, 5, 4, 4, 4, 4, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-17 | Chờ 18 bước (`-18`) | (13, 23) | (13, 23) | Dự kiến đứng yên tại (13, 23); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 23)) | 53 |
| 18-19 | Di chuyển hướng 1 (`1`) | (13, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 52 |
| 20-22 | Di chuyển hướng 1 (`1`) | (13, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 50 |
| 23-24 | Di chuyển hướng 1 (`1`) | (14, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 49 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 48 |
| 27 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 46 |
| 28-29 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 45 |
| 30 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 43 |
| 31-32 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 42 |
| 33 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 40 |
| 34-35 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 39 |
| 36 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 37 |
| 37-38 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 36 |
| 39-40 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 35 |
| 41-42 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 34 |
| 43-44 | Di chuyển hướng 4 (`4`) | (6, 20) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 33 |
| 45-46 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 32 |
| 47-48 | Di chuyển hướng 0 (`0`) | (5, 22) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 31 |
| 49-50 | Di chuyển hướng 0 (`0`) | (5, 21) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 30 |
| 51-52 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 29 |
| 53 | Chờ 1 bước (`-1`) | (4, 19) | (4, 19) | Dự kiến đứng yên tại (4, 19); hướng tới tọa độ (4, 19) | 29 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (17, 13) (ô=303)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(9, 6))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(9, 6))
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 5, 0, 0, 0, 0, 5, 5, 4, 5, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 53 |
| 2-3 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 53 |
| 4-5 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 53 |
| 6-7 | Di chuyển hướng 0 (`0`) | (16, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 53 |
| 8-9 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 53 |
| 10-11 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 53 |
| 12-13 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 53 |
| 14-15 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 53 |
| 16-17 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 53 |
| 18 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 53 |
| 19-20 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 53 |
| 21 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 53 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(9, 6)) | 53 |
| 24-53 | Chờ 30 bước (`-30`) | (9, 6) | (9, 6) | Dự kiến đứng yên tại (9, 6); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(9, 6)) | 53 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (19, 18) (ô=415)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 20)
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 4, 4, 4, 4, 5, 2, 1, 1, 1, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (19, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 53 |
| 2-3 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 53 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 53 |
| 6-7 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 53 |
| 8-9 | Di chuyển hướng 4 (`4`) | (16, 19) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 53 |
| 10-11 | Di chuyển hướng 4 (`4`) | (15, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 53 |
| 12 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 53 |
| 13-14 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 53 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 23) | (13, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 23)) | 53 |
| 17-18 | Di chuyển hướng 2 (`2`) | (13, 23) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 53 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 53 |
| 21-22 | Di chuyển hướng 1 (`1`) | (14, 22) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 53 |
| 23 | Di chuyển hướng 1 (`1`) | (15, 21) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 53 |
| 24-53 | Chờ 30 bước (`-30`) | (15, 20) | (15, 20) | Dự kiến đứng yên tại (15, 20); hướng tới tọa độ (15, 20) | 53 |

