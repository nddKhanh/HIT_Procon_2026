# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 52
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #0 | #5 | (19, 21) | 44 | 53 |
| 16 | #1 | #3 | (14, 14) | 3 | 53 |
| 19 | #1 | #3 | (14, 13) | 52 | 53 |
| 21 | #1 | #3 | (14, 12) | 52 | 53 |
| 27 | #4 | #5 | (13, 19) | 28 | 53 |
| 31 | #0 | #3 | (14, 12) | 30 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 21) (ô=482)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(17, 3))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(17, 3))
- Mảng hành động đã gửi server: `[5, 2, 2, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 53 |
| 3-4 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 51 |
| 5-7 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(21, 21)) | 49 |
| 8-9 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 48 |
| 10-12 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 46 |
| 13-14 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 44 |
| 15-16 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 43 |
| 17 | Di chuyển hướng 0 (`0`) | (18, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 41 |
| 18 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 39 |
| 19-21 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 37 |
| 22-24 | Di chuyển hướng 0 (`0`) | (16, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 35 |
| 25-26 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 34 |
| 27 | Di chuyển hướng 0 (`0`) | (15, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 32 |
| 28-30 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 53 |
| 31 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 51 |
| 32 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 49 |
| 33-34 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 48 |
| 35-36 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 47 |
| 37-38 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 45 |
| 39-40 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 6)) | 44 |
| 41-42 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 43 |
| 43-44 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 42 |
| 45-47 | Di chuyển hướng 1 (`1`) | (14, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 40 |
| 48-49 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 39 |
| 50-51 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 3)) | 38 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 14) (ô=322)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 2)
- Mảng hành động đã gửi server: `[-17, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-16 | Chờ 17 bước (`-17`) | (14, 14) | (14, 14) | Dự kiến đứng yên tại (14, 14); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 53 |
| 17-18 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 53 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 53 |
| 21 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 51 |
| 22-23 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 50 |
| 24-26 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 9)) | 48 |
| 27-28 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 47 |
| 29-31 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 45 |
| 32-33 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 44 |
| 34-36 | Di chuyển hướng 1 (`1`) | (16, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 42 |
| 37-39 | Di chuyển hướng 1 (`1`) | (17, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 40 |
| 40-41 | Di chuyển hướng 1 (`1`) | (17, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 39 |
| 42-44 | Di chuyển hướng 1 (`1`) | (18, 3) | (18, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(18, 2)) | 37 |
| 45-46 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(19, 1)) | 36 |
| 47-48 | Di chuyển hướng 5 (`5`) | (19, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 35 |
| 49-50 | Di chuyển hướng 4 (`4`) | (18, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 34 |
| 51 | Chờ 1 bước (`-1`) | (17, 2) | (17, 2) | Dự kiến đứng yên tại (17, 2); hướng tới tọa độ (17, 2) | 34 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 17) (ô=380)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(5, 9))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(5, 9))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 5, 5, 3, 4, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 2, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 18)) | 35 |
| 2-3 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 34 |
| 4-5 | Di chuyển hướng 4 (`4`) | (6, 19) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 33 |
| 6-8 | Di chuyển hướng 4 (`4`) | (5, 20) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 31 |
| 9 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 29 |
| 10-12 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 27 |
| 13-14 | Di chuyển hướng 3 (`3`) | (3, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 26 |
| 15-16 | Di chuyển hướng 4 (`4`) | (3, 22) | (3, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 23)) | 25 |
| 17-18 | Di chuyển hướng 1 (`1`) | (3, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 24 |
| 19-20 | Di chuyển hướng 0 (`0`) | (3, 22) | (3, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 21)) | 23 |
| 21-22 | Di chuyển hướng 1 (`1`) | (3, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 22 |
| 23-25 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 20 |
| 26-27 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 19 |
| 28-29 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 18 |
| 30-31 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 17 |
| 32-34 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(3, 15)) | 15 |
| 35-36 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 14 |
| 37-39 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 12 |
| 40-42 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 10 |
| 43-44 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 9 |
| 45-47 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(5, 11)) | 7 |
| 48-49 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 6 |
| 50-51 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 5 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (7, 14) (ô=315)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 12)
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 3, 2, 2, 1, 1, 0, 1, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 53 |
| 2-3 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 53 |
| 4-5 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 53 |
| 6 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 53 |
| 7-8 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 53 |
| 9 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 53 |
| 10-11 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 53 |
| 12-13 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 53 |
| 14-15 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 14)) | 53 |
| 16-17 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 53 |
| 18-19 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 53 |
| 20-51 | Chờ 32 bước (`-32`) | (14, 12) | (14, 12) | Dự kiến đứng yên tại (14, 12); hướng tới tọa độ (14, 12) | 53 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 21) (ô=480)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 12)
- Mảng hành động đã gửi server: `[0, 3, 3, 1, 0, 0, 0, 1, 4, 4, 5, 5, 4, 0, 5, 5, 5, 5, 0, 0, 0, 0, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (18, 21) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 51 |
| 3-4 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 50 |
| 5-7 | Di chuyển hướng 3 (`3`) | (18, 21) | (18, 22) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 22)) | 48 |
| 8-9 | Di chuyển hướng 1 (`1`) | (18, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 47 |
| 10-11 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 45 |
| 12-13 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 44 |
| 14 | Di chuyển hướng 0 (`0`) | (18, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 42 |
| 15 | Di chuyển hướng 1 (`1`) | (17, 18) | (18, 17) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 17)) | 40 |
| 16-17 | Di chuyển hướng 4 (`4`) | (18, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 39 |
| 18 | Di chuyển hướng 4 (`4`) | (17, 18) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 37 |
| 19-21 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 35 |
| 22 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 33 |
| 23 | Di chuyển hướng 4 (`4`) | (15, 19) | (14, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 20)) | 31 |
| 24-25 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 30 |
| 26 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 53 |
| 27-28 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 52 |
| 29-31 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 50 |
| 32-34 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(10, 19)) | 48 |
| 35-36 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 47 |
| 37-39 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 45 |
| 40-41 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 44 |
| 42-43 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 15)) | 43 |
| 44-45 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 42 |
| 46-48 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 40 |
| 49-51 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 38 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (18, 21) (ô=480)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 19)
- Mảng hành động đã gửi server: `[2, 0, 0, 0, 4, 5, 5, 5, 5, -37]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 53 |
| 3-4 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 53 |
| 5-6 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 53 |
| 7 | Di chuyển hướng 0 (`0`) | (18, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 53 |
| 8 | Di chuyển hướng 4 (`4`) | (17, 18) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 53 |
| 9-11 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 53 |
| 12 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 53 |
| 13 | Di chuyển hướng 5 (`5`) | (15, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 53 |
| 14 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 53 |
| 15-51 | Chờ 37 bước (`-37`) | (13, 19) | (13, 19) | Dự kiến đứng yên tại (13, 19); hướng tới tọa độ (13, 19) | 53 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (7, 14) (ô=315)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(3, 0))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(3, 0))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 2, 2, 1, 0, 0, 0, 5, 0, 0, 0, 0, 5, 5, 5, 0, 5, 4, 5, 0, 1, 1, 1, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 52 |
| 2-4 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 50 |
| 5-6 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 49 |
| 7 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 47 |
| 8-10 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 45 |
| 11-13 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 43 |
| 14-16 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(13, 11)) | 41 |
| 17-18 | Di chuyển hướng 0 (`0`) | (13, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 40 |
| 19-20 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 39 |
| 21 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 37 |
| 22-23 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 36 |
| 24-25 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 35 |
| 26 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 33 |
| 27-28 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 32 |
| 29-30 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 31 |
| 31-32 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 30 |
| 33 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 28 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 27 |
| 36 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(5, 3)) | 25 |
| 37-38 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 24 |
| 39-40 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 23 |
| 41 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(2, 4)) | 21 |
| 42-43 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 20 |
| 44-45 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 19 |
| 46 | Di chuyển hướng 1 (`1`) | (2, 2) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 17 |
| 47-49 | Di chuyển hướng 1 (`1`) | (3, 1) | (3, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(3, 0)) | 15 |
| 50 | Chờ 1 bước (`-1`) | (3, 0) | (3, 0) | Dự kiến đứng yên tại (3, 0); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(3, 0)) | 15 |
| 51 | Chờ 1 bước (`-1`) | (3, 0) | (3, 0) | Dự kiến đứng yên tại (3, 0); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(3, 0)) | 15 |

