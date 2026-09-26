# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 53
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #1 | #6 | (4, 12) | 3 | 51 |
| 29 | #4 | #6 | (6, 15) | 0 | 51 |
| 38 | #5 | #6 | (10, 15) | 0 | 51 |
| 40 | #5 | #6 | (9, 14) | 50 | 51 |
| 44 | #1 | #6 | (10, 13) | 40 | 51 |
| 44 | #2 | #6 | (10, 13) | 0 | 51 |
| 46 | #5 | #6 | (10, 13) | 48 | 51 |
| 50 | #2 | #6 | (8, 13) | 48 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 6) (ô=161)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(16, 4))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(16, 4))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 3, 2, 2, 2, 0, 5, 4, 4, 4, 5, 4, 0, 0, 5, 0, 1, 0, 0, 2, 2, 2, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 49 |
| 4-5 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 48 |
| 6 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 46 |
| 7 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 44 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 43 |
| 10-11 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 42 |
| 12-13 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 41 |
| 14-15 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 40 |
| 16-17 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 39 |
| 18-19 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 38 |
| 20-21 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 7)) | 37 |
| 22-23 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 36 |
| 24-25 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 35 |
| 26-27 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 10)) | 33 |
| 28-29 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 32 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 11)) | 31 |
| 32-33 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 30 |
| 34-35 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 28 |
| 36-37 | Di chuyển hướng 5 (`5`) | (14, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 26 |
| 38-39 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 24 |
| 40-41 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 23 |
| 42 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 21 |
| 43-44 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 19 |
| 45-46 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 18 |
| 47 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 16 |
| 48 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 14 |
| 49 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 12 |
| 50-51 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 4)) | 10 |
| 52 | Chờ 1 bước (`-1`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(16, 4)) | 10 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 17) (ô=432)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(10, 17))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(10, 17))
- Mảng hành động đã gửi server: `[0, 0, 4, 4, 0, 0, 1, 0, 0, 2, -1, 2, 2, 2, 2, 3, 2, 1, 4, 4, 3, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 15 |
| 2 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 13 |
| 3-4 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 12 |
| 5-6 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 11 |
| 7-8 | Di chuyển hướng 0 (`0`) | (5, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 10 |
| 9-11 | Di chuyển hướng 0 (`0`) | (4, 16) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 8 |
| 12-13 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 7 |
| 14-15 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 6 |
| 16-18 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(3, 12)) | 4 |
| 19-20 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 51 |
| 21 | Chờ 1 bước (`-1`) | (4, 12) | (4, 12) | Dự kiến đứng yên tại (4, 12); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 51 |
| 22-23 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 50 |
| 24-27 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 48 |
| 28-30 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 46 |
| 31-34 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 44 |
| 35-36 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 43 |
| 37-38 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 42 |
| 39-40 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 41 |
| 41-42 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 40 |
| 43-44 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 50 |
| 45-48 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 48 |
| 49-50 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 47 |
| 51-52 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 46 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 16) (ô=405)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 13)
- Mảng hành động đã gửi server: `[0, 5, 5, 3, 3, 3, 1, 2, 2, 2, 2, 2, 1, 0, 0, 0, 2, -6, 5, 0, 4, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 21 |
| 2-3 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 19 |
| 4-5 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 15)) | 18 |
| 6-7 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 17 |
| 8-10 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 15 |
| 11-12 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 13 |
| 13-14 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 12 |
| 15-16 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 11 |
| 17-18 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 10 |
| 19-20 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 9 |
| 21-22 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 8 |
| 23-25 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 6 |
| 26-27 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 5 |
| 28-29 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 4 |
| 30-31 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 3 |
| 32-35 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 1 |
| 36-37 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 0 |
| 38-43 | Chờ 6 bước (`-6`) | (10, 13) | (10, 13) | Dự kiến đứng yên tại (10, 13); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 44-45 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 50 |
| 46-47 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 49 |
| 48-49 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 50-52 | Chờ 3 bước (`-3`) | (8, 13) | (8, 13) | Dự kiến đứng yên tại (8, 13); hướng tới tọa độ (8, 13) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 8) (ô=207)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(12, 5))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(12, 5))
- Mảng hành động đã gửi server: `[0, 1, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 3, 5, 5, 5, 0, 5, 5, 5, 4, 0, 1, 0, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 37 |
| 1 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 35 |
| 2 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 33 |
| 3 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 31 |
| 4 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 29 |
| 5 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 27 |
| 6-9 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 25 |
| 10-11 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 24 |
| 12 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 22 |
| 13 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 20 |
| 14-15 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 19 |
| 16-17 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 18 |
| 18-20 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(18, 7)) | 16 |
| 21-22 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 15 |
| 23-24 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 8)) | 14 |
| 25-26 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 13 |
| 27-28 | Di chuyển hướng 5 (`5`) | (18, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 12 |
| 29-30 | Di chuyển hướng 5 (`5`) | (17, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 11 |
| 31-32 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 10 |
| 33-34 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 9 |
| 35-36 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 8 |
| 37 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 6 |
| 38 | Di chuyển hướng 4 (`4`) | (13, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 8)) | 4 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 7)) | 3 |
| 41-42 | Di chuyển hướng 1 (`1`) | (12, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 2 |
| 43-44 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 0 |
| 45-52 | Chờ 8 bước (`-8`) | (12, 5) | (12, 5) | Dự kiến đứng yên tại (12, 5); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(12, 5)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 15) (ô=378)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(10, 16))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(10, 16))
- Mảng hành động đã gửi server: `[2, 1, 3, 2, -21, 3, 3, 5, 5, 4, 1, 2, 2, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 15)) | 4 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 15) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 3 |
| 4-5 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 2 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 0 |
| 8-28 | Chờ 21 bước (`-21`) | (6, 15) | (6, 15) | Dự kiến đứng yên tại (6, 15); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 51 |
| 29-30 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 50 |
| 31 | Di chuyển hướng 3 (`3`) | (6, 16) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 48 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 47 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 17) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 46 |
| 36-37 | Di chuyển hướng 4 (`4`) | (5, 17) | (4, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 18)) | 45 |
| 38-39 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(5, 17)) | 44 |
| 40-41 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 43 |
| 42-43 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 17)) | 42 |
| 44-45 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 41 |
| 46-47 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 40 |
| 48-50 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 17)) | 38 |
| 51-52 | Di chuyển hướng 1 (`1`) | (10, 17) | (10, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 16)) | 37 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (10, 15) (ô=385)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(8, 12))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(8, 12))
- Mảng hành động đã gửi server: `[-38, 0, 0, 2, 1, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-37 | Chờ 38 bước (`-38`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 51 |
| 38-39 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 51 |
| 40-43 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 49 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 46-47 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 12)) | 50 |
| 48-49 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 49 |
| 50-52 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(8, 12)) | 47 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (11, 6) (ô=161)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 13)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 3, 4, 5, 4, 4, 4, 4, 3, 3, 2, 2, 2, 2, 2, 0, 1, -2, 5, 5, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 51 |
| 4 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 51 |
| 5 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 51 |
| 6 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 51 |
| 7 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 51 |
| 8 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 51 |
| 9 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 51 |
| 10-13 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 51 |
| 14-15 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 51 |
| 16-17 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 51 |
| 18-19 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 12)) | 51 |
| 20-21 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 51 |
| 22-24 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 14)) | 51 |
| 25-26 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 51 |
| 27-28 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 15)) | 51 |
| 29-30 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 51 |
| 31-32 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 33-34 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 51 |
| 35-37 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 15)) | 51 |
| 38-39 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 51 |
| 40-43 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 44-45 | Chờ 2 bước (`-2`) | (10, 13) | (10, 13) | Dự kiến đứng yên tại (10, 13); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 13)) | 51 |
| 46-47 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 13)) | 51 |
| 48-49 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 50-52 | Chờ 3 bước (`-3`) | (8, 13) | (8, 13) | Dự kiến đứng yên tại (8, 13); hướng tới tọa độ (8, 13) | 51 |

