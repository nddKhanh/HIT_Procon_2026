# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 53
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #3 | #7 | (0, 17) | 3 | 55 |
| 28 | #4 | #6 | (13, 16) | 2 | 55 |
| 31 | #3 | #7 | (0, 18) | 54 | 55 |
| 31 | #4 | #6 | (14, 15) | 54 | 55 |
| 33 | #3 | #7 | (1, 18) | 54 | 55 |
| 33 | #4 | #6 | (15, 15) | 53 | 55 |
| 35 | #3 | #7 | (2, 18) | 54 | 55 |
| 35 | #4 | #6 | (15, 14) | 54 | 55 |
| 37 | #3 | #7 | (3, 18) | 54 | 55 |
| 37 | #4 | #6 | (16, 13) | 54 | 55 |
| 39 | #3 | #7 | (4, 18) | 54 | 55 |
| 39 | #4 | #6 | (16, 12) | 54 | 55 |
| 41 | #4 | #6 | (16, 11) | 54 | 55 |
| 42 | #3 | #7 | (6, 17) | 52 | 55 |
| 45 | #3 | #7 | (7, 17) | 53 | 55 |
| 49 | #3 | #7 | (8, 16) | 53 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (19, 21) (ô=544)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(24, 2))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(24, 2))
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 29 |
| 3 | Di chuyển hướng 1 (`1`) | (20, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 27 |
| 4-5 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 26 |
| 6 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 24 |
| 7 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 22 |
| 8-9 | Di chuyển hướng 1 (`1`) | (22, 17) | (22, 16) | Dự kiến đến điểm hẹn tọa độ (22, 16) | 21 |
| 10-12 | Di chuyển hướng 1 (`1`) | (22, 16) | (23, 15) | Dự kiến đến điểm hẹn tọa độ (23, 15) | 19 |
| 13-14 | Di chuyển hướng 1 (`1`) | (23, 15) | (23, 14) | Dự kiến đến điểm hẹn tọa độ (23, 14) | 18 |
| 15-16 | Di chuyển hướng 0 (`0`) | (23, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 17 |
| 17 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 15 |
| 18-19 | Di chuyển hướng 0 (`0`) | (23, 12) | (23, 11) | Dự kiến đến điểm hẹn tọa độ (23, 11) | 14 |
| 20 | Di chuyển hướng 1 (`1`) | (23, 11) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 12 |
| 21-23 | Di chuyển hướng 0 (`0`) | (23, 10) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 10 |
| 24 | Di chuyển hướng 0 (`0`) | (23, 9) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 8 |
| 25-26 | Di chuyển hướng 1 (`1`) | (22, 8) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 7 |
| 27-28 | Di chuyển hướng 1 (`1`) | (23, 7) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 5 |
| 29-30 | Di chuyển hướng 1 (`1`) | (23, 6) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 4 |
| 31-32 | Di chuyển hướng 1 (`1`) | (24, 5) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 2 |
| 33-34 | Di chuyển hướng 0 (`0`) | (24, 4) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 1 |
| 35-36 | Di chuyển hướng 1 (`1`) | (24, 3) | (24, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 0 |
| 37-52 | Chờ 16 bước (`-16`) | (24, 2) | (24, 2) | Dự kiến đứng yên tại (24, 2); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(0, 0))
- Mảng hành động đã gửi server: `[-53]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-52 | Chờ 53 bước (`-53`) | (0, 0) | (0, 0) | Dự kiến đứng yên tại (0, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 4 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 18) (ô=459)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(17, 3))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(17, 3))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 3, 3, 2, 2, 2, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 43 |
| 2-3 | Di chuyển hướng 0 (`0`) | (8, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 42 |
| 4-5 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 41 |
| 6 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 39 |
| 7 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 37 |
| 8-9 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 36 |
| 10 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 34 |
| 11-12 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 33 |
| 13 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 31 |
| 14-16 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 29 |
| 17-18 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 8)) | 28 |
| 19-20 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 27 |
| 21 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 25 |
| 22-24 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 23 |
| 25-26 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 22 |
| 27 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 20 |
| 28-30 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 18 |
| 31-32 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 17 |
| 33-35 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 15 |
| 36 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 13 |
| 37-38 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 12 |
| 39 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 10 |
| 40-41 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 9 |
| 42-43 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 8 |
| 44-45 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 7 |
| 46-48 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 5 |
| 49 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 3 |
| 50-52 | Chờ 3 bước (`-3`) | (17, 3) | (17, 3) | Dự kiến đứng yên tại (17, 3); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 3 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 17) (ô=425)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 16)
- Mảng hành động đã gửi server: `[-29, 3, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-28 | Chờ 29 bước (`-29`) | (0, 17) | (0, 17) | Dự kiến đứng yên tại (0, 17); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 55 |
| 29-30 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 55 |
| 31-32 | Di chuyển hướng 2 (`2`) | (0, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 55 |
| 33-34 | Di chuyển hướng 2 (`2`) | (1, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 55 |
| 35-36 | Di chuyển hướng 2 (`2`) | (2, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 55 |
| 37-38 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 55 |
| 39-40 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 54 |
| 41 | Di chuyển hướng 1 (`1`) | (5, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 55 |
| 42-44 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 55 |
| 45-46 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 54 |
| 47-48 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 49-50 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 54 |
| 51-52 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 53 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (16, 21) (ô=541)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 6)
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 1, 1, 0, -16, 1, 2, 1, 1, 1, 0, 0, 0, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 21)) | 12 |
| 3-4 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 11 |
| 5-7 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 9 |
| 8 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 7 |
| 9-10 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 6 |
| 11 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 4 |
| 12 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 2 |
| 13-28 | Chờ 16 bước (`-16`) | (13, 16) | (13, 16) | Dự kiến đứng yên tại (13, 16); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 55 |
| 29-30 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 55 |
| 31-32 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 55 |
| 33-34 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 55 |
| 35-36 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 55 |
| 37-38 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 55 |
| 39-40 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 55 |
| 41-43 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 53 |
| 44-45 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 52 |
| 46-47 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 51 |
| 48-50 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 49 |
| 51-52 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 48 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 9) (ô=231)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(11, 2))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(11, 2))
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 0, 0, 0, 5, 5, 0, 0, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 8)) | 34 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 33 |
| 4 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 31 |
| 5-6 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 30 |
| 7-8 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 29 |
| 9-11 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 27 |
| 12-14 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 25 |
| 15-16 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 24 |
| 17-18 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 23 |
| 19-21 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 21 |
| 22-23 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 20 |
| 24-25 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 19 |
| 26-27 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 18 |
| 28-30 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 16 |
| 31-32 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 15 |
| 33-34 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 14 |
| 35 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 12 |
| 36-37 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 11 |
| 38-39 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 10 |
| 40-42 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 8 |
| 43-44 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 7 |
| 45-46 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 6 |
| 47-49 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 4 |
| 50 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 2 |
| 51-52 | Chờ 2 bước (`-2`) | (11, 2) | (11, 2) | Dự kiến đứng yên tại (11, 2); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 2 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (13, 2) (ô=63)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 11)
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 4, 3, 3, 3, 4, 4, 3, 4, 4, 4, 1, 2, 1, 1, 1, 0, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 55 |
| 2-3 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 55 |
| 4 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 55 |
| 5-6 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 55 |
| 7-9 | Di chuyển hướng 4 (`4`) | (14, 6) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 55 |
| 10-12 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 55 |
| 13 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 55 |
| 14-15 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 55 |
| 16-17 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 55 |
| 18-19 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 55 |
| 20-21 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 55 |
| 22-23 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 55 |
| 24-25 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 55 |
| 26-27 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 55 |
| 28-29 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 55 |
| 30-31 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 55 |
| 32-33 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 55 |
| 34-35 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 55 |
| 36-37 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 55 |
| 38-39 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 55 |
| 40-52 | Chờ 13 bước (`-13`) | (16, 11) | (16, 11) | Dự kiến đứng yên tại (16, 11); hướng tới tọa độ (16, 11) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (13, 16) (ô=413)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 16)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 3, 2, 2, 2, 2, 2, 1, 2, 1, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 55 |
| 2-4 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 55 |
| 5 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 6-8 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 55 |
| 9-10 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 11-12 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 55 |
| 13 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 55 |
| 14 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 55 |
| 15-17 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 55 |
| 18-19 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 55 |
| 20 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 55 |
| 21-22 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 55 |
| 23-24 | Di chuyển hướng 5 (`5`) | (1, 16) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 55 |
| 25-27 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 55 |
| 28-29 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 55 |
| 30-31 | Di chuyển hướng 2 (`2`) | (0, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 55 |
| 32-33 | Di chuyển hướng 2 (`2`) | (1, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 55 |
| 34-35 | Di chuyển hướng 2 (`2`) | (2, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 55 |
| 36-37 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 55 |
| 38-39 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 55 |
| 40 | Di chuyển hướng 1 (`1`) | (5, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 55 |
| 41-43 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 55 |
| 44-45 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 55 |
| 46 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 55 |
| 47-52 | Chờ 6 bước (`-6`) | (8, 16) | (8, 16) | Dự kiến đứng yên tại (8, 16); hướng tới tọa độ (8, 16) | 55 |

