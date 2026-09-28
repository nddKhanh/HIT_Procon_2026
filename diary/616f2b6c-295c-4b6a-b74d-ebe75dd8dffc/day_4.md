# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 56
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 13 | #3 | #6 | (1, 6) | 2 | 58 |
| 26 | #2 | #6 | (6, 7) | 30 | 58 |
| 35 | #4 | #6 | (7, 5) | 6 | 58 |
| 36 | #0 | #6 | (7, 5) | 25 | 58 |
| 49 | #3 | #6 | (7, 5) | 30 | 58 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 10) (ô=184)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 9)
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 0, 0, 0, 1, 1, 2, 2, 2, 2, 2, 3, 4, 3, 2, 2, 2, 3, 3, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 52 |
| 3-5 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 50 |
| 6 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 48 |
| 7-8 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 47 |
| 9 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 45 |
| 10-11 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 44 |
| 12-14 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 4)) | 42 |
| 15-16 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 41 |
| 17-19 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 39 |
| 20 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 37 |
| 21 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 35 |
| 22 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 33 |
| 23-25 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 31 |
| 26-28 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 29 |
| 29-30 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 3)) | 28 |
| 31-32 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 27 |
| 33-35 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 58 |
| 36-37 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 57 |
| 38-40 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 55 |
| 41-42 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 54 |
| 43-44 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 53 |
| 45-47 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 51 |
| 48-49 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 50 |
| 50-52 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 48 |
| 53-54 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 47 |
| 55 | Chờ 1 bước (`-1`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); hướng tới tọa độ (9, 9) | 47 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 17) (ô=322)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(16, 17))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(16, 17))
- Mảng hành động đã gửi server: `[-56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-55 | Chờ 56 bước (`-56`) | (16, 17) | (16, 17) | Dự kiến đứng yên tại (16, 17); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 17)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 2) (ô=46)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(1, 6))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(1, 6))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 5, 0, 0, 5, 5, 5, 4, 4, 4, 4, 3, 3, 4, 0, 5, 0, 5, 4, 4, 1, 0, 0, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 47 |
| 2 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 45 |
| 3 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 43 |
| 4 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 41 |
| 5-6 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 40 |
| 7-8 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 39 |
| 9-10 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 38 |
| 11-13 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 36 |
| 14-15 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 35 |
| 16-17 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 34 |
| 18-20 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 32 |
| 21-22 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 31 |
| 23-24 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 30 |
| 25-26 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 57 |
| 27-28 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 56 |
| 29-30 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 55 |
| 31-33 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 53 |
| 34 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 51 |
| 35-36 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 50 |
| 37-39 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 48 |
| 40 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 10)) | 46 |
| 41-42 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 45 |
| 43-44 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 44 |
| 45 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 12)) | 42 |
| 46-47 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 41 |
| 48 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 39 |
| 49 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 37 |
| 50-52 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 35 |
| 53-54 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 34 |
| 55 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 32 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 6) (ô=109)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 3)
- Mảng hành động đã gửi server: `[-14, 4, 4, 3, 3, 3, 4, 1, 1, 2, 3, 2, 3, 1, 0, 0, 1, 1, 1, 1, 0, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-13 | Chờ 14 bước (`-14`) | (1, 6) | (1, 6) | Dự kiến đứng yên tại (1, 6); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 58 |
| 14-15 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 57 |
| 16 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 55 |
| 17-18 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 54 |
| 19-21 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 52 |
| 22 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 50 |
| 23 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 12)) | 48 |
| 24-25 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 47 |
| 26 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 45 |
| 27-28 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 10)) | 44 |
| 29-30 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 43 |
| 31 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 41 |
| 32-34 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 39 |
| 35-36 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 38 |
| 37 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 38-40 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 34 |
| 41-42 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 33 |
| 43-44 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 32 |
| 45-46 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 31 |
| 47-48 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 58 |
| 49-50 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 57 |
| 51-53 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 3)) | 55 |
| 54-55 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 54 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 10) (ô=181)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 8)
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 3, 3, 3, 3, 3, 2, 3, 1, 0, 0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 5, 4, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 31 |
| 1-3 | Di chuyển hướng 0 (`0`) | (1, 9) | (0, 8) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 8)) | 29 |
| 4-5 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 28 |
| 6 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 26 |
| 7-8 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 25 |
| 9 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 23 |
| 10-11 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 22 |
| 12-14 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 10)) | 20 |
| 15-16 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 19 |
| 17 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 17 |
| 18-20 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 15 |
| 21-22 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 14 |
| 23 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 12 |
| 24-26 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 10 |
| 27-28 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 9 |
| 29-30 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 8 |
| 31-32 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 7 |
| 33-34 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 58 |
| 35-36 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 57 |
| 37-39 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 55 |
| 40-41 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 54 |
| 42-43 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 53 |
| 44-46 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 51 |
| 47-48 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 50 |
| 49-51 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 48 |
| 52-53 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 47 |
| 54-55 | Chờ 2 bước (`-2`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); hướng tới tọa độ (10, 8) | 47 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 13) (ô=240)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(9, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(9, 8))
- Mảng hành động đã gửi server: `[2, 2, 2, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 4, 5, 0, 5, 5, 0, 5, 0, 0, 0, 0, 4, 4, 3, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 13)) | 44 |
| 1-2 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 43 |
| 3 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 41 |
| 4-6 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 39 |
| 7-9 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 37 |
| 10 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 35 |
| 11-13 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 33 |
| 14-15 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 32 |
| 16-17 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 31 |
| 18 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 29 |
| 19 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 27 |
| 20-21 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 26 |
| 22-23 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(17, 10)) | 24 |
| 24-25 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 11)) | 23 |
| 26-27 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 22 |
| 28-29 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 21 |
| 30-31 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 20 |
| 32 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 18 |
| 33 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 16 |
| 34 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 14 |
| 35-37 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 12 |
| 38-39 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 7)) | 11 |
| 40-41 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 10 |
| 42-44 | Di chuyển hướng 0 (`0`) | (10, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 5)) | 8 |
| 45-46 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 7 |
| 47-48 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 6 |
| 49-51 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 4 |
| 52-55 | Chờ 4 bước (`-4`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 8)) | 4 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (6, 6) (ô=114)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(7, 5))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(7, 5))
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 0, 3, 3, 2, 3, 2, 1, 1, 1, 1, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 58 |
| 2-4 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 58 |
| 5-6 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 58 |
| 7-8 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 58 |
| 9-11 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 58 |
| 12 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 6)) | 58 |
| 13-14 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 58 |
| 15 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 58 |
| 16-17 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 58 |
| 18 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 58 |
| 19-21 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 58 |
| 22-23 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 8)) | 58 |
| 24-25 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 58 |
| 26-27 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 58 |
| 28-29 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 58 |
| 30-55 | Chờ 26 bước (`-26`) | (7, 5) | (7, 5) | Dự kiến đứng yên tại (7, 5); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(7, 5)) | 58 |

