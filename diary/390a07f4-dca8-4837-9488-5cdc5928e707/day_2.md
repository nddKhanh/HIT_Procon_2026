# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 52
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 18 | #0 | #6 | (6, 4) | 16 | 53 |
| 18 | #1 | #6 | (6, 4) | 12 | 53 |
| 23 | #3 | #5 | (1, 13) | 6 | 53 |
| 31 | #0 | #6 | (6, 4) | 39 | 53 |
| 33 | #1 | #6 | (6, 4) | 41 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 12) (ô=313)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(7, 6))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(7, 6))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 1, 1, 1, 1, 1, 0, 0, 5, 4, 4, 5, 2, 2, 1, 2, 2, 2, 2, 2, 4, 4, 4, 3, 4, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 29 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 10)) | 27 |
| 3-4 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 26 |
| 5-6 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 25 |
| 7-8 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 24 |
| 9-10 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 22 |
| 11-12 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 20 |
| 13-14 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 19 |
| 15 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 17 |
| 16-17 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 53 |
| 18 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 51 |
| 19 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 3)) | 49 |
| 20-21 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 48 |
| 22 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 46 |
| 23-24 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 5)) | 45 |
| 25-26 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 44 |
| 27-28 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 43 |
| 29 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 41 |
| 30 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 53 |
| 31 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 51 |
| 32 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 49 |
| 33 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 47 |
| 34 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 45 |
| 35-36 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 44 |
| 37-38 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 43 |
| 39-40 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 42 |
| 41-42 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 40 |
| 43-44 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 39 |
| 45-46 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 38 |
| 47-49 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 36 |
| 50 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 34 |
| 51 | Chờ 1 bước (`-1`) | (7, 6) | (7, 6) | Dự kiến đứng yên tại (7, 6); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 34 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 11) (ô=288)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 10)
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 1, 1, 2, 1, 0, 0, 1, 1, 4, 5, 5, 0, 3, 2, 3, 2, 2, 2, 2, 4, 4, 4, 3, 4, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 24 |
| 1-2 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 11)) | 23 |
| 3-4 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 22 |
| 5-6 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 21 |
| 7-8 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 19 |
| 9-10 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 17 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 16 |
| 13 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 14 |
| 14-15 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 13 |
| 16-17 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 53 |
| 18 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 51 |
| 19-20 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 50 |
| 21-22 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 49 |
| 23-24 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 48 |
| 25 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 3)) | 46 |
| 26-27 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 2)) | 45 |
| 28-29 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 3)) | 44 |
| 30-31 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 43 |
| 32 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 53 |
| 33 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 51 |
| 34 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 49 |
| 35 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 47 |
| 36 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 45 |
| 37-38 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 44 |
| 39-40 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 43 |
| 41-42 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 42 |
| 43-44 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 40 |
| 45-46 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 39 |
| 47-48 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 38 |
| 49-50 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 37 |
| 51 | Chờ 1 bước (`-1`) | (7, 10) | (7, 10) | Dự kiến đứng yên tại (7, 10); hướng tới tọa độ (7, 10) | 37 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 10) (ô=262)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 0, 1, 0, 0, 4, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 33 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 32 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 31 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 29 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 28 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 27 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 26 |
| 14-15 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 25 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 24 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 23 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 21 |
| 22-23 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 19 |
| 24-25 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 17 |
| 26-27 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 15 |
| 28-29 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 13 |
| 30-31 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 11 |
| 32-33 | Di chuyển hướng 1 (`1`) | (16, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 9 |
| 34-36 | Di chuyển hướng 1 (`1`) | (17, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 4)) | 7 |
| 37-38 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 6 |
| 39-40 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 2)) | 5 |
| 41-42 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 1)) | 4 |
| 43-44 | Di chuyển hướng 0 (`0`) | (17, 1) | (16, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 0)) | 3 |
| 45-46 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 2 |
| 47-49 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 1)) | 0 |
| 50-51 | Chờ 2 bước (`-2`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 1)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 14) (ô=367)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(10, 5))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(10, 5))
- Mảng hành động đã gửi server: `[0, 2, 2, 3, 0, 0, 5, 0, 0, 4, 4, 4, -1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 0, 1, 2, 2, 2, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 13)) | 21 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 20 |
| 4-6 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 18 |
| 7-8 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 17 |
| 9-10 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 16 |
| 11-12 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 15 |
| 13-14 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 13 |
| 15 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 11 |
| 16-17 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 10)) | 10 |
| 18-19 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 9 |
| 20 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 7 |
| 21-22 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 13)) | 53 |
| 23 | Chờ 1 bước (`-1`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 13)) | 53 |
| 24-25 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 52 |
| 26-27 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 51 |
| 28 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 49 |
| 29-30 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 48 |
| 31-32 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 47 |
| 33-34 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 46 |
| 35-36 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 44 |
| 37-38 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 42 |
| 39-40 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 41 |
| 41 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 39 |
| 42-43 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 38 |
| 44-45 | Di chuyển hướng 1 (`1`) | (7, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 37 |
| 46 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 35 |
| 47 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 33 |
| 48 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 31 |
| 49-50 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 30 |
| 51 | Chờ 1 bước (`-1`) | (10, 5) | (10, 5) | Dự kiến đứng yên tại (10, 5); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 30 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 5) (ô=140)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(15, 1))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(15, 1))
- Mảng hành động đã gửi server: `[1, 4, 4, 3, 2, 2, 2, 2, 2, 2, 1, 0, 5, 2, 2, 2, 0, 0, 1, 2, 0, 0, 5, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 47 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 46 |
| 4-5 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 45 |
| 6-7 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 44 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 42 |
| 10-11 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 40 |
| 12-13 | Di chuyển hướng 2 (`2`) | (12, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 38 |
| 14-15 | Di chuyển hướng 2 (`2`) | (13, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 36 |
| 16-17 | Di chuyển hướng 2 (`2`) | (14, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 34 |
| 18-19 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 32 |
| 20-21 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 30 |
| 22-23 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 28 |
| 24-25 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(15, 5)) | 26 |
| 26-27 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 25 |
| 28-29 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 23 |
| 30-32 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(18, 5)) | 21 |
| 33-34 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 4)) | 20 |
| 35-36 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 19 |
| 37-38 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 2)) | 18 |
| 39-40 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 2)) | 17 |
| 41-42 | Di chuyển hướng 0 (`0`) | (18, 2) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 16 |
| 43-44 | Di chuyển hướng 0 (`0`) | (18, 1) | (17, 0) | Dự kiến đến điểm hẹn tọa độ (17, 0) | 15 |
| 45 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 0)) | 13 |
| 46-47 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 12 |
| 48-50 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 1)) | 10 |
| 51 | Chờ 1 bước (`-1`) | (15, 1) | (15, 1) | Dự kiến đứng yên tại (15, 1); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 1)) | 10 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (9, 9) (ô=243)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 13))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 13))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 4, 4, 5, 4, 5, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 53 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 53 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 53 |
| 6-7 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 53 |
| 8-9 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 53 |
| 10-11 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 11)) | 53 |
| 12-13 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 53 |
| 14 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 53 |
| 15-16 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 53 |
| 17-18 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 13)) | 53 |
| 19-51 | Chờ 33 bước (`-33`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 13)) | 53 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 5) (ô=137)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 4)
- Mảng hành động đã gửi server: `[0, -50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 53 |
| 2-51 | Chờ 50 bước (`-50`) | (6, 4) | (6, 4) | Dự kiến đứng yên tại (6, 4); hướng tới tọa độ (6, 4) | 53 |

