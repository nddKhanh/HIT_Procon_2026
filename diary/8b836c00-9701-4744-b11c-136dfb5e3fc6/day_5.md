# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 65
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 10 | #3 | #6 | (14, 17) | 0 | 61 |
| 42 | #0 | #6 | (12, 0) | 1 | 61 |
| 44 | #0 | #6 | (12, 1) | 60 | 61 |
| 46 | #0 | #6 | (11, 1) | 60 | 61 |
| 47 | #0 | #6 | (10, 2) | 59 | 61 |
| 49 | #0 | #6 | (9, 2) | 60 | 61 |
| 56 | #5 | #6 | (9, 2) | 0 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 0) (ô=12)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 9))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 9))
- Mảng hành động đã gửi server: `[-42, 4, 5, 4, 5, 4, 4, 5, 3, 3, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-41 | Chờ 42 bước (`-42`) | (12, 0) | (12, 0) | Dự kiến đứng yên tại (12, 0); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 61 |
| 42-43 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 61 |
| 44-45 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 61 |
| 46 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 61 |
| 47-48 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 61 |
| 49-50 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 60 |
| 51-52 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 59 |
| 53-55 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 57 |
| 56-57 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 56 |
| 58 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 54 |
| 59-60 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 53 |
| 61-62 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 52 |
| 63 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 50 |
| 64 | Chờ 1 bước (`-1`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 50 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 15) (ô=266)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(2, 5))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(2, 5))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=1, tọa độ=(10, 15)) | 23 |
| 2-3 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 22 |
| 4-6 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 20 |
| 7-9 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 18 |
| 10 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 16 |
| 11-12 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 15 |
| 13-15 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 13 |
| 16-17 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 12 |
| 18-20 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 10 |
| 21-23 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 8 |
| 24 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 6 |
| 25-26 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 5 |
| 27-29 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 3 |
| 30-31 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 2 |
| 32-64 | Chờ 33 bước (`-33`) | (2, 5) | (2, 5) | Dự kiến đứng yên tại (2, 5); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 18) (ô=309)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(1, 13))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(1, 13))
- Mảng hành động đã gửi server: `[0, 0, 1, 0, 0, 5, -50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 17)) | 12 |
| 3-4 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 11 |
| 5-7 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 9 |
| 8-10 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(2, 14)) | 7 |
| 11-12 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 6 |
| 13-14 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 5 |
| 15-64 | Chờ 50 bước (`-50`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(1, 13)) | 5 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 17) (ô=303)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(0, 3))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(0, 3))
- Mảng hành động đã gửi server: `[-11, 5, 0, 0, 1, 1, 0, 0, 5, 0, 5, 0, 5, 5, 1, 1, 0, 1, 0, 5, 0, 5, 5, 4, 4, 5, 0, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-10 | Chờ 11 bước (`-11`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 61 |
| 11-12 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 60 |
| 13 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 58 |
| 14 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 56 |
| 15-16 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 55 |
| 17-19 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 53 |
| 20 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 51 |
| 21-22 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 50 |
| 23-24 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 49 |
| 25-26 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 48 |
| 27-29 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 46 |
| 30-32 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 44 |
| 33-35 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 42 |
| 36 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 40 |
| 37-38 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 39 |
| 39 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 37 |
| 40-41 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 36 |
| 42-43 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 35 |
| 44 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 33 |
| 45-46 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 32 |
| 47 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 30 |
| 48-49 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 29 |
| 50-52 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 27 |
| 53-54 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 26 |
| 55 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 24 |
| 56-57 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 23 |
| 58-59 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 22 |
| 60-62 | Di chuyển hướng 5 (`5`) | (1, 4) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 20 |
| 63 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 18 |
| 64 | Chờ 1 bước (`-1`) | (0, 3) | (0, 3) | Dự kiến đứng yên tại (0, 3); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 18 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 17) (ô=303)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(0, 3))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(0, 3))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 1, 2, 3, 5, 5, 5, 5, 0, 0, 0, 1, 1, 0, 1, 0, 5, 0, 5, 5, 4, 4, 5, 0, 5, 0, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 50 |
| 2 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 48 |
| 3 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 46 |
| 4-5 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 45 |
| 6-8 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 13)) | 43 |
| 9-10 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 42 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 12) | (11, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 11)) | 41 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 40 |
| 15-16 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 12)) | 39 |
| 17-18 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 38 |
| 19-21 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 36 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 35 |
| 24-26 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 33 |
| 27 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 31 |
| 28-29 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 30 |
| 30-32 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 28 |
| 33-34 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 27 |
| 35 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 25 |
| 36-37 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 24 |
| 38-39 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 23 |
| 40 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 21 |
| 41-42 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 20 |
| 43 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 18 |
| 44-45 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 17 |
| 46-48 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=2, tọa độ=(4, 3)) | 15 |
| 49-50 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 14 |
| 51 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 12 |
| 52-53 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 11 |
| 54-55 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 10 |
| 56-58 | Di chuyển hướng 5 (`5`) | (1, 4) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 8 |
| 59 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 6 |
| 60-64 | Chờ 5 bước (`-5`) | (0, 3) | (0, 3) | Dự kiến đứng yên tại (0, 3); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 6 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (6, 6) (ô=108)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 5)
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 5, 0, 5, 0, 3, 2, 3, 3, 3, 3, 3, 2, 3, 4, 1, 1, 2, 1, 1, 0, 1, 1, 1, 1, 4, 4, 5, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 39 |
| 2 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 5)) | 37 |
| 3-4 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 36 |
| 5-7 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 5)) | 34 |
| 8-9 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 33 |
| 10-11 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 32 |
| 12-14 | Di chuyển hướng 5 (`5`) | (1, 4) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 30 |
| 15 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 3)) | 28 |
| 16-17 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 27 |
| 18 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 25 |
| 19-21 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(2, 5)) | 23 |
| 22-23 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 22 |
| 24-26 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 20 |
| 27-28 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 19 |
| 29-30 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 18 |
| 31-32 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 17 |
| 33 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 15 |
| 34-35 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(5, 11)) | 14 |
| 36-37 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 13 |
| 38-39 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 12 |
| 40-42 | Di chuyển hướng 2 (`2`) | (6, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 9)) | 10 |
| 43-44 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 9 |
| 45 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 7 |
| 46-47 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 6)) | 6 |
| 48-49 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 5 |
| 50 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 3 |
| 51-53 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 1 |
| 54-55 | Di chuyển hướng 1 (`1`) | (9, 3) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 61 |
| 56-57 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 60 |
| 58-59 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 59 |
| 60-62 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 4)) | 57 |
| 63-64 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 56 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 12) (ô=216)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(9, 2))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(9, 2))
- Mảng hành động đã gửi server: `[3, 4, 4, 3, 3, 2, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 4, 5, 4, 5, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 61 |
| 2 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 61 |
| 3-5 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 61 |
| 6-7 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 61 |
| 8 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 61 |
| 9 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 17)) | 61 |
| 10-11 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 61 |
| 12-13 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 61 |
| 14-15 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 61 |
| 16 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 61 |
| 17-19 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 61 |
| 20-21 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 61 |
| 22 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 61 |
| 23-24 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 61 |
| 25-26 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 61 |
| 27 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 61 |
| 28-29 | Di chuyển hướng 1 (`1`) | (13, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 61 |
| 30-32 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 61 |
| 33-34 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 61 |
| 35 | Di chuyển hướng 1 (`1`) | (13, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 61 |
| 36-37 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 61 |
| 38-39 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 61 |
| 40-41 | Di chuyển hướng 0 (`0`) | (13, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 0)) | 61 |
| 42-43 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 61 |
| 44-45 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 61 |
| 46 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 61 |
| 47-48 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 61 |
| 49-64 | Chờ 16 bước (`-16`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 2)) | 61 |

