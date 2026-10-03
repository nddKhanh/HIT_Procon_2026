# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 41
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #3 | #5 | (11, 3) | 34 | 41 |
| 12 | #4 | #5 | (15, 2) | 1 | 41 |
| 19 | #1 | #5 | (15, 4) | 3 | 41 |
| 20 | #1 | #5 | (16, 5) | 39 | 41 |
| 23 | #1 | #5 | (15, 6) | 39 | 41 |
| 26 | #1 | #5 | (16, 7) | 39 | 41 |
| 27 | #1 | #5 | (15, 8) | 39 | 41 |
| 28 | #1 | #5 | (15, 9) | 39 | 41 |
| 30 | #1 | #5 | (15, 10) | 40 | 41 |
| 33 | #1 | #5 | (16, 11) | 39 | 41 |
| 35 | #1 | #5 | (16, 12) | 40 | 41 |
| 40 | #1 | #5 | (16, 12) | 38 | 41 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 13) (ô=235)
- Nhiên liệu đầu ngày: 13
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(5, 13))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(5, 13))
- Mảng hành động đã gửi server: `[5, 3, 2, 3, 2, 1, 2, 1, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (1, 13) | (0, 13) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 13)) | 11 |
| 3-4 | Di chuyển hướng 3 (`3`) | (0, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 10 |
| 5 | Di chuyển hướng 2 (`2`) | (0, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 8 |
| 6-8 | Di chuyển hướng 3 (`3`) | (1, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 6 |
| 9-10 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 5 |
| 11-12 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 4 |
| 13 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 2 |
| 14-15 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 13)) | 1 |
| 16-40 | Chờ 25 bước (`-25`) | (5, 13) | (5, 13) | Dự kiến đứng yên tại (5, 13); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 13)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 11) (ô=214)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 12)
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 1, 0, 0, 5, 3, 4, 3, 4, 4, 3, 3, 3, 2, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 15 |
| 2-4 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 13 |
| 5-7 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 11 |
| 8 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 7)) | 9 |
| 9-10 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 8 |
| 11-12 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 7 |
| 13-15 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 5 |
| 16-18 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 41 |
| 19 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 41 |
| 20-22 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 41 |
| 23-25 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 41 |
| 26 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 41 |
| 27 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 41 |
| 28-29 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 41 |
| 30-32 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 41 |
| 33-34 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 41 |
| 35-37 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 12)) | 39 |
| 38-39 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 41 |
| 40 | Chờ 1 bước (`-1`) | (16, 12) | (16, 12) | Dự kiến đứng yên tại (16, 12); hướng tới tọa độ (16, 12) | 41 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 7) (ô=130)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(14, 17))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(14, 17))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 2, 3, 2, 4, 3, 2, 2, 3, 3, 2, 2, 3, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 28 |
| 2-4 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 26 |
| 5-7 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 24 |
| 8-10 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 22 |
| 11-12 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 21 |
| 13-14 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 20 |
| 15-16 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 19 |
| 17-18 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 18 |
| 19-20 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 14)) | 17 |
| 21-22 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 16 |
| 23-24 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 15 |
| 25 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 13 |
| 26-28 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(11, 16)) | 11 |
| 29-30 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 10 |
| 31-32 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 9 |
| 33-34 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 17)) | 8 |
| 35-40 | Chờ 6 bước (`-6`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(14, 17)) | 8 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 3) (ô=66)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 16)
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 4, 3, 4, 4, 4, 4, 5, 4, 4, 5, 4, 4, 5, 4, 4, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 41 |
| 3 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 39 |
| 4-6 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 4)) | 37 |
| 7-8 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 36 |
| 9-10 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 35 |
| 11-12 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 34 |
| 13 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 32 |
| 14-16 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 30 |
| 17 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 28 |
| 18-20 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 26 |
| 21-22 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 25 |
| 23-24 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 24 |
| 25-26 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 13)) | 22 |
| 27-28 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 21 |
| 29-30 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 20 |
| 31 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 18 |
| 32-33 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 17 |
| 34-35 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 16 |
| 36-37 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 15 |
| 38-39 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 14 |
| 40 | Chờ 1 bước (`-1`) | (1, 16) | (1, 16) | Dự kiến đứng yên tại (1, 16); hướng tới tọa độ (1, 16) | 14 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 2) (ô=51)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(5, 3))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(5, 3))
- Mảng hành động đã gửi server: `[-13, 5, 4, 5, 5, 5, 0, 4, 4, 5, 5, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-12 | Chờ 13 bước (`-13`) | (15, 2) | (15, 2) | Dự kiến đứng yên tại (15, 2); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 2)) | 41 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 40 |
| 15-16 | Di chuyển hướng 4 (`4`) | (14, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 39 |
| 17-18 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 38 |
| 19 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 36 |
| 20-22 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 34 |
| 23 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 2)) | 32 |
| 24-25 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 31 |
| 26-28 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 4)) | 29 |
| 29-30 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 28 |
| 31-33 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 26 |
| 34-35 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 25 |
| 36-38 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 23 |
| 39-40 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 3)) | 22 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (10, 3) (ô=64)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 12)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 4, 3, -3, 3, 4, 3, 4, 4, 3, 3, 3, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 41 |
| 3 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 41 |
| 4-6 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 41 |
| 7 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 41 |
| 8-9 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 41 |
| 10-11 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 2)) | 41 |
| 12-13 | Di chuyển hướng 4 (`4`) | (15, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 41 |
| 14-15 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 41 |
| 16-18 | Chờ 3 bước (`-3`) | (15, 4) | (15, 4) | Dự kiến đứng yên tại (15, 4); hướng tới tọa độ (15, 4) | 41 |
| 19 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 41 |
| 20-22 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 41 |
| 23-25 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 41 |
| 26 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 41 |
| 27 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 41 |
| 28-29 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 41 |
| 30-32 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 41 |
| 33-34 | Di chuyển hướng 3 (`3`) | (16, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 41 |
| 35-40 | Chờ 6 bước (`-6`) | (16, 12) | (16, 12) | Dự kiến đứng yên tại (16, 12); hướng tới tọa độ (16, 12) | 41 |

