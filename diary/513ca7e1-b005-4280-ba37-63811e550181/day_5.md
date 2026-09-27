# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 58
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 8 | #3 | #6 | (12, 18) | 0 | 55 |
| 11 | #3 | #6 | (12, 17) | 54 | 55 |
| 29 | #0 | #6 | (12, 3) | 2 | 55 |
| 31 | #0 | #6 | (12, 4) | 54 | 55 |
| 34 | #0 | #6 | (13, 5) | 53 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 3) (ô=84)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(18, 5))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(18, 5))
- Mảng hành động đã gửi server: `[-29, 3, 3, 2, 4, 4, 2, 1, 2, 1, 1, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-28 | Chờ 29 bước (`-29`) | (12, 3) | (12, 3) | Dự kiến đứng yên tại (12, 3); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 55 |
| 29-30 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 55 |
| 31-33 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 55 |
| 34-35 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(14, 5)) | 54 |
| 36-37 | Di chuyển hướng 4 (`4`) | (14, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 53 |
| 38-39 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 51 |
| 40-41 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 50 |
| 42 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 48 |
| 43-46 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 46 |
| 47-50 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 44 |
| 51-52 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 42 |
| 53-54 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 41 |
| 55-56 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 40 |
| 57 | Chờ 1 bước (`-1`) | (18, 5) | (18, 5) | Dự kiến đứng yên tại (18, 5); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 40 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 12) (ô=298)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(16, 4))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(16, 4))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 0, 1, 0, 1, 0, 1, 2, 0, 0, 0, 0, 5, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 38 |
| 2-3 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 37 |
| 4-5 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 35 |
| 6-7 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 34 |
| 8-9 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 32 |
| 10 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 30 |
| 11 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 28 |
| 12 | Di chuyển hướng 2 (`2`) | (15, 16) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 26 |
| 13 | Di chuyển hướng 2 (`2`) | (16, 16) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 24 |
| 14 | Di chuyển hướng 1 (`1`) | (17, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 22 |
| 15 | Di chuyển hướng 1 (`1`) | (18, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 20 |
| 16 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 18 |
| 17 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 16 |
| 18 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 14 |
| 19-20 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 12 |
| 21-22 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 10 |
| 23-24 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 8 |
| 25-26 | Di chuyển hướng 2 (`2`) | (18, 8) | (19, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(19, 8)) | 6 |
| 27-28 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(19, 7)) | 5 |
| 29-30 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 4 |
| 31-32 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 2 |
| 33-34 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 1 |
| 35-36 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 0 |
| 37-57 | Chờ 21 bước (`-21`) | (16, 4) | (16, 4) | Dự kiến đứng yên tại (16, 4); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 7) (ô=178)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(18, 5))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(18, 5))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 2, 1, 1, 2, 3, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 7)) | 15 |
| 3-4 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 14 |
| 5-7 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(13, 7)) | 12 |
| 8-9 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 11 |
| 10 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 9 |
| 11-14 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 7 |
| 15-18 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 5 |
| 19-20 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(16, 4)) | 3 |
| 21-22 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 4)) | 2 |
| 23-24 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 1 |
| 25-57 | Chờ 33 bước (`-33`) | (18, 5) | (18, 5) | Dự kiến đứng yên tại (18, 5); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 5)) | 1 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 18) (ô=444)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 12)
- Mảng hành động đã gửi server: `[-9, 0, 0, 1, 1, 4, 4, 4, 4, 5, 5, 5, 1, 0, 0, 5, 1, 0, 1, 2, 2, 2, 2, 2, 2, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-8 | Chờ 9 bước (`-9`) | (12, 18) | (12, 18) | Dự kiến đứng yên tại (12, 18); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 55 |
| 9-10 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 11-12 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 13 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 52 |
| 14-15 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 51 |
| 16-17 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 50 |
| 18-19 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 49 |
| 20 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 47 |
| 21-22 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(10, 18)) | 46 |
| 23-24 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 45 |
| 25-27 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 43 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 42 |
| 30-31 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 41 |
| 32-33 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 40 |
| 34 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 38 |
| 35 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 36 |
| 36-37 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 35 |
| 38-39 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 34 |
| 40-41 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 12)) | 33 |
| 42-43 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 32 |
| 44 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 30 |
| 45-47 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 28 |
| 48 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 26 |
| 49-50 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 25 |
| 51-53 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 23 |
| 54-55 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 22 |
| 56-57 | Chờ 2 bước (`-2`) | (11, 12) | (11, 12) | Dự kiến đứng yên tại (11, 12); hướng tới tọa độ (11, 12) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 16) (ô=395)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 4, 4, 4, 4, 4, 3, 5, 0, 0, 0, 1, 1, 5, 3, 3, 3, 2, 2, 2, 2, 3, 0, 1, 1, 0, 1, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 43 |
| 1-2 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 42 |
| 3-4 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 40 |
| 5-6 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 39 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 38 |
| 9-10 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 37 |
| 11 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 35 |
| 12 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 33 |
| 13 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 31 |
| 14-15 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 30 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 29 |
| 18-19 | Di chuyển hướng 0 (`0`) | (7, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 28 |
| 20 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 26 |
| 21-22 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 24 |
| 23-24 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 23 |
| 25-26 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 22 |
| 27-28 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 21 |
| 29-30 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 20 |
| 31-32 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 19 |
| 33 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 17 |
| 34 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 15 |
| 35 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 13 |
| 36 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 11 |
| 37 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 9 |
| 38 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 7 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 6 |
| 41 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 4 |
| 42-43 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 3 |
| 44-45 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 2 |
| 46-48 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 0 |
| 49-57 | Chờ 9 bước (`-9`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 12) (ô=294)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(12, 12))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 4, 4, 4, 4, 4, 3, 5, 0, 0, 0, 1, 1, 5, 3, 3, 3, 2, 2, 2, 2, 3, 0, 1, 1, 0, 1, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 45 |
| 2 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 43 |
| 3-5 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 41 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 12)) | 39 |
| 7-8 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 13)) | 38 |
| 9-10 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 37 |
| 11 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 35 |
| 12 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 33 |
| 13 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(8, 17)) | 31 |
| 14-15 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 18)) | 30 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 18)) | 29 |
| 18-19 | Di chuyển hướng 0 (`0`) | (7, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 28 |
| 20 | Di chuyển hướng 0 (`0`) | (7, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 26 |
| 21-22 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 15)) | 24 |
| 23-24 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 23 |
| 25-26 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 22 |
| 27-28 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 13)) | 21 |
| 29-30 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 20 |
| 31-32 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 19 |
| 33 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 17 |
| 34 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 15 |
| 35 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 13 |
| 36 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 11 |
| 37 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 9 |
| 38 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 7 |
| 39-40 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 6 |
| 41 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(12, 15)) | 4 |
| 42-43 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 14)) | 3 |
| 44-45 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 2 |
| 46-48 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 0 |
| 49-57 | Chờ 9 bước (`-9`) | (12, 12) | (12, 12) | Dự kiến đứng yên tại (12, 12); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 12)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (8, 17) (ô=416)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 5)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 3, 0, 0, 5, 5, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 2, 1, 1, 3, 3, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 55 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 55 |
| 3 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 4 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 55 |
| 5 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 6-7 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(12, 18)) | 55 |
| 8-9 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(12, 17)) | 55 |
| 10-11 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 55 |
| 12 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 13 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 55 |
| 14 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 55 |
| 15 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 55 |
| 16 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 55 |
| 17 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 55 |
| 18 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 55 |
| 19 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 55 |
| 20 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 55 |
| 21 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 55 |
| 22 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 55 |
| 23 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 55 |
| 24 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 55 |
| 25 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 55 |
| 26 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 27-28 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 3)) | 55 |
| 29-30 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 55 |
| 31-33 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 55 |
| 34-57 | Chờ 24 bước (`-24`) | (13, 5) | (13, 5) | Dự kiến đứng yên tại (13, 5); hướng tới tọa độ (13, 5) | 55 |

