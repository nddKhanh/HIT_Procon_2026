# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 43
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 19 | #2 | #5 | (17, 7) | 4 | 41 |
| 23 | #2 | #5 | (15, 6) | 38 | 41 |
| 26 | #2 | #5 | (15, 5) | 39 | 41 |
| 30 | #2 | #5 | (15, 3) | 37 | 41 |
| 31 | #3 | #5 | (14, 3) | 0 | 41 |
| 32 | #2 | #5 | (14, 3) | 40 | 41 |
| 33 | #3 | #5 | (13, 3) | 40 | 41 |
| 34 | #3 | #5 | (12, 3) | 39 | 41 |
| 35 | #2 | #5 | (12, 3) | 38 | 41 |
| 37 | #3 | #5 | (11, 3) | 39 | 41 |
| 39 | #2 | #5 | (10, 3) | 37 | 41 |
| 40 | #3 | #5 | (10, 3) | 38 | 41 |
| 42 | #2 | #5 | (9, 4) | 39 | 41 |
| 43 | #3 | #5 | (9, 4) | 39 | 41 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 12) (ô=229)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 17))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 5, 5, 4, 4, 5, 4, 4, 5, 4, 4, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 21 |
| 3 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 19 |
| 4-6 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 12)) | 17 |
| 7-8 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 16 |
| 9-11 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 14 |
| 12-13 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 13 |
| 14 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 11 |
| 15-16 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 10 |
| 17-18 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 9 |
| 19-20 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 13)) | 7 |
| 21-22 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 6 |
| 23-24 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 5 |
| 25 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 15)) | 3 |
| 26-27 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 2 |
| 28-29 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 1 |
| 30-31 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 0 |
| 32-42 | Chờ 11 bước (`-11`) | (1, 17) | (1, 17) | Dự kiến đứng yên tại (1, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 17)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 17) (ô=320)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(17, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(17, 12))
- Mảng hành động đã gửi server: `[0, 5, 5, 0, 0, 5, 5, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 37 |
| 2-3 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 36 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(11, 16)) | 35 |
| 6-7 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 34 |
| 8-10 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 32 |
| 11 | Di chuyển hướng 5 (`5`) | (10, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 30 |
| 12-13 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 14)) | 29 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 28 |
| 16-17 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 27 |
| 18-19 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(8, 12)) | 26 |
| 20-21 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 25 |
| 22-24 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 12)) | 23 |
| 25-26 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 22 |
| 27-29 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 20 |
| 30 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 18 |
| 31-33 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 16 |
| 34-36 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 14 |
| 37-39 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 12 |
| 40-42 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 12)) | 10 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 7) (ô=143)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(9, 4))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(9, 4))
- Mảng hành động đã gửi server: `[-20, 5, 0, 0, 1, 0, 5, 5, 5, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-19 | Chờ 20 bước (`-20`) | (17, 7) | (17, 7) | Dự kiến đứng yên tại (17, 7); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 7)) | 41 |
| 20-21 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 40 |
| 22 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 41 |
| 23-25 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 41 |
| 26-28 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 39 |
| 29 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 41 |
| 30-31 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 41 |
| 32-33 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 40 |
| 34 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 41 |
| 35-37 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 39 |
| 38 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 41 |
| 39-41 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 4)) | 41 |
| 42 | Chờ 1 bước (`-1`) | (9, 4) | (9, 4) | Dự kiến đứng yên tại (9, 4); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 4)) | 41 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (15, 2) (ô=51)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(9, 4))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(9, 4))
- Mảng hành động đã gửi server: `[5, 4, -27, 5, 5, 5, 0, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 1 |
| 2-3 | Di chuyển hướng 4 (`4`) | (14, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 0 |
| 4-30 | Chờ 27 bước (`-27`) | (14, 3) | (14, 3) | Dự kiến đứng yên tại (14, 3); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 41 |
| 31-32 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 41 |
| 33 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 41 |
| 34-36 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 41 |
| 37 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(10, 2)) | 39 |
| 38-39 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 41 |
| 40-42 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 4)) | 41 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (2, 11) (ô=200)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(4, 7))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(4, 7))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 6 |
| 2-4 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 4 |
| 5-7 | Di chuyển hướng 1 (`1`) | (3, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 2 |
| 8 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 7)) | 0 |
| 9-42 | Chờ 34 bước (`-34`) | (4, 7) | (4, 7) | Dự kiến đứng yên tại (4, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 7)) | 0 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (11, 16) (ô=299)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(9, 4))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(9, 4))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 2, 1, 1, 1, 1, 1, 2, 5, 0, 0, 1, 0, 5, 5, 5, 5, 5, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 41 |
| 2-4 | Di chuyển hướng 1 (`1`) | (12, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 41 |
| 5 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 41 |
| 6 | Di chuyển hướng 1 (`1`) | (12, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 41 |
| 7 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 41 |
| 8-10 | Di chuyển hướng 1 (`1`) | (13, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 41 |
| 11-13 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 41 |
| 14 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 41 |
| 15-16 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 41 |
| 17 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 41 |
| 18 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 7)) | 41 |
| 19-20 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 41 |
| 21 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 41 |
| 22-24 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 41 |
| 25-27 | Di chuyển hướng 1 (`1`) | (15, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 41 |
| 28 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 41 |
| 29-30 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(14, 3)) | 41 |
| 31-32 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 41 |
| 33 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 41 |
| 34-36 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 41 |
| 37 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 41 |
| 38-40 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 4)) | 41 |
| 41-42 | Chờ 2 bước (`-2`) | (9, 4) | (9, 4) | Dự kiến đứng yên tại (9, 4); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 4)) | 41 |

