# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 45
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #3 | #5 | (9, 5) | 40 | 41 |
| 15 | #4 | #5 | (4, 7) | 0 | 41 |
| 26 | #3 | #5 | (4, 13) | 20 | 41 |
| 29 | #3 | #5 | (3, 15) | 38 | 41 |
| 31 | #3 | #5 | (2, 15) | 40 | 41 |
| 33 | #3 | #5 | (1, 16) | 40 | 41 |
| 35 | #0 | #5 | (1, 17) | 0 | 41 |
| 35 | #3 | #5 | (1, 17) | 40 | 41 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 17) (ô=307)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 17)
- Mảng hành động đã gửi server: `[-35, 1, 1, 2, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-34 | Chờ 35 bước (`-35`) | (1, 17) | (1, 17) | Dự kiến đứng yên tại (1, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 41 |
| 35-36 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 40 |
| 37-38 | Di chuyển hướng 1 (`1`) | (1, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 39 |
| 39-40 | Di chuyển hướng 2 (`2`) | (2, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 38 |
| 41-42 | Di chuyển hướng 3 (`3`) | (3, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 37 |
| 43-44 | Di chuyển hướng 3 (`3`) | (3, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 36 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 12) (ô=233)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(17, 7))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(17, 7))
- Mảng hành động đã gửi server: `[5, 0, 1, 1, 0, 1, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 9 |
| 2-4 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 7 |
| 5-6 | Di chuyển hướng 1 (`1`) | (16, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 6 |
| 7-9 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 4 |
| 10-12 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 2 |
| 13 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 7)) | 0 |
| 14-44 | Chờ 31 bước (`-31`) | (17, 7) | (17, 7) | Dự kiến đứng yên tại (17, 7); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 7)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 4) (ô=81)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 5)
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 1, 5, 4, 5, 5, 5, 0, 5, 5, 5, 5, 4, 5, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 40 |
| 2-4 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 38 |
| 5 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 36 |
| 6-8 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 34 |
| 9-10 | Di chuyển hướng 2 (`2`) | (13, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 32 |
| 11-12 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 31 |
| 13-14 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 2)) | 30 |
| 15-16 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 29 |
| 17-18 | Di chuyển hướng 4 (`4`) | (14, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 28 |
| 19-20 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 27 |
| 21-22 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 25 |
| 23-25 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 23 |
| 26 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 2)) | 21 |
| 27-28 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 20 |
| 29-31 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 18 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 17 |
| 34-35 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 16 |
| 36-37 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 15 |
| 38-40 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 3)) | 13 |
| 41-42 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 12 |
| 43-44 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 11 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 4) (ô=81)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(0, 13))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(0, 13))
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 4, 4, 3, 3, 0, 5, 4, 5, 4, 5, 4, 4, 5, 4, 4, 1, 0, 0, 0, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 41 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 40 |
| 4-5 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 39 |
| 6 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 37 |
| 7-9 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 35 |
| 10 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 33 |
| 11-13 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 31 |
| 14 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 29 |
| 15-16 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 28 |
| 17 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 26 |
| 18-19 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 25 |
| 20 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 23 |
| 21-22 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 13)) | 21 |
| 23-24 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 20 |
| 25-26 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 40 |
| 27 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 38 |
| 28-29 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 40 |
| 30-31 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 40 |
| 32-33 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 40 |
| 34-35 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 40 |
| 36-37 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 39 |
| 38-40 | Di chuyển hướng 0 (`0`) | (1, 15) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 37 |
| 41 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 13)) | 35 |
| 42-44 | Chờ 3 bước (`-3`) | (0, 13) | (0, 13) | Dự kiến đứng yên tại (0, 13); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 13)) | 35 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 7) (ô=130)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(10, 12))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(10, 12))
- Mảng hành động đã gửi server: `[-16, 3, 3, 3, 3, 2, 3, 3, 3, 0, 1, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-15 | Chờ 16 bước (`-16`) | (4, 7) | (4, 7) | Dự kiến đứng yên tại (4, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 7)) | 41 |
| 16-17 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 40 |
| 18-20 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 38 |
| 21-23 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 24-26 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 34 |
| 27-28 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 33 |
| 29-30 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 32 |
| 31-32 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 31 |
| 33-34 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 14)) | 30 |
| 35-36 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 29 |
| 37-38 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 28 |
| 39-40 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 27 |
| 41-43 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 12)) | 25 |
| 44 | Chờ 1 bước (`-1`) | (10, 12) | (10, 12) | Dự kiến đứng yên tại (10, 12); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 12)) | 25 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (9, 4) (ô=81)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 17))
- Mảng hành động đã gửi server: `[4, 5, 5, 4, 5, 5, 4, 4, 4, 3, 3, 3, 4, 4, 4, 5, 4, 4, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 41 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 41 |
| 4-6 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 41 |
| 7 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 41 |
| 8-10 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 41 |
| 11 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 41 |
| 12-14 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 7)) | 41 |
| 15-16 | Di chuyển hướng 4 (`4`) | (4, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 41 |
| 17 | Di chuyển hướng 4 (`4`) | (3, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 41 |
| 18-20 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 41 |
| 21-22 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 41 |
| 23 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 41 |
| 24-25 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 41 |
| 26-27 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 41 |
| 28 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 41 |
| 29-30 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 41 |
| 31-32 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 41 |
| 33-34 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 41 |
| 35-44 | Chờ 10 bước (`-10`) | (1, 17) | (1, 17) | Dự kiến đứng yên tại (1, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 41 |

