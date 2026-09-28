# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 38
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #2 | #7 | (12, 3) | 35 | 37 |
| 18 | #3 | #7 | (6, 7) | 0 | 37 |
| 24 | #5 | #7 | (5, 7) | 13 | 37 |
| 26 | #0 | #7 | (5, 7) | 1 | 37 |
| 36 | #0 | #7 | (5, 7) | 31 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 15) (ô=249)
- Nhiên liệu đầu ngày: 16
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(6, 7))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(6, 7))
- Mảng hành động đã gửi server: `[5, 5, 2, 1, 0, 0, 0, 0, 1, 0, 0, 5, 4, 4, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 15 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 15)) | 14 |
| 4-5 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 13 |
| 6-7 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 12 |
| 8-9 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 11 |
| 10-11 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 10 |
| 12-14 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 8 |
| 15-16 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 6 |
| 17-19 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 4 |
| 20-21 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 3 |
| 22-23 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 2 |
| 24-25 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 37 |
| 26-27 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 36 |
| 28-30 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 34 |
| 31-32 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 33 |
| 33-35 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 37 |
| 36-37 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 36 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 3) (ô=63)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(15, 5))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(15, 5))
- Mảng hành động đã gửi server: `[0, 5, 5, 4, 3, 3, 3, 1, 2, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 13 |
| 3-5 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 11 |
| 6-7 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 10 |
| 8-9 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 9 |
| 10-11 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 8 |
| 12-14 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 6 |
| 15-16 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 5 |
| 17-18 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 4 |
| 19-20 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 3 |
| 21-37 | Chờ 17 bước (`-17`) | (15, 5) | (15, 5) | Dự kiến đứng yên tại (15, 5); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 3) (ô=61)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(9, 3))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(9, 3))
- Mảng hành động đã gửi server: `[5, 1, 4, 3, 3, 3, 1, 2, 5, 5, 5, 4, 0, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 37 |
| 3-4 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 36 |
| 5-6 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 35 |
| 7-8 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 34 |
| 9-11 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 32 |
| 12-13 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 31 |
| 14-15 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 30 |
| 16-17 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 29 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 28 |
| 20-21 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 27 |
| 22-23 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 26 |
| 24-26 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 24 |
| 27-28 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 23 |
| 29-31 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 21 |
| 32-33 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 19 |
| 34-36 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 17 |
| 37 | Chờ 1 bước (`-1`) | (9, 3) | (9, 3) | Dự kiến đứng yên tại (9, 3); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 17 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 2) (ô=32)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 11)
- Mảng hành động đã gửi server: `[3, 2, 3, 3, 3, 3, 2, 2, -2, 3, 3, 5, 5, 5, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 10 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 3) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 8 |
| 3-5 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 6 |
| 6-7 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 5 |
| 8-9 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 4 |
| 10-12 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 2 |
| 13-14 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 1 |
| 15-16 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 0 |
| 17-18 | Chờ 2 bước (`-2`) | (6, 7) | (6, 7) | Dự kiến đứng yên tại (6, 7); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 37 |
| 19-20 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 36 |
| 21-22 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 35 |
| 23-24 | Di chuyển hướng 5 (`5`) | (7, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 34 |
| 25-27 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 32 |
| 28-31 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 30 |
| 32-33 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 29 |
| 34-36 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 27 |
| 37 | Chờ 1 bước (`-1`) | (5, 11) | (5, 11) | Dự kiến đứng yên tại (5, 11); hướng tới tọa độ (5, 11) | 27 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 0) (ô=11)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(15, 5))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(15, 5))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 2, 2, 2, 1, 2, 1, 1, 3, 3, 4, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 22 |
| 2-4 | Di chuyển hướng 4 (`4`) | (10, 0) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 20 |
| 5-7 | Di chuyển hướng 4 (`4`) | (10, 1) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 18 |
| 8-10 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 16 |
| 11-12 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 15 |
| 13-15 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 13 |
| 16-17 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 12 |
| 18-19 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 11 |
| 20-21 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 10 |
| 22-23 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 9 |
| 24-26 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 0)) | 7 |
| 27-28 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 6 |
| 29 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 4 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 3 |
| 32-34 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 1 |
| 35-36 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 0 |
| 37 | Chờ 1 bước (`-1`) | (15, 5) | (15, 5) | Dự kiến đứng yên tại (15, 5); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 6) (ô=109)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 12)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 4, 5, 4, 5, 0, 0, 5, 4, 4, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 26 |
| 2-4 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 24 |
| 5-6 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 23 |
| 7-9 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 21 |
| 10-11 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 20 |
| 12-13 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 19 |
| 14-15 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 18 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 16 |
| 18-19 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 15 |
| 20-21 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 14 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 37 |
| 24-25 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 36 |
| 26-28 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 9)) | 34 |
| 29-30 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 33 |
| 31-33 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 31 |
| 34-36 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 29 |
| 37 | Chờ 1 bước (`-1`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); hướng tới tọa độ (5, 12) | 29 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (10, 6) (ô=106)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(10, 15))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(10, 15))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 3, 3, 4, 3, 3, 3, 3, 4, 5, 2, 2, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 29 |
| 3-4 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 28 |
| 5-6 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 27 |
| 7-8 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 26 |
| 9 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 24 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 23 |
| 12-13 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 22 |
| 14-15 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 21 |
| 16-18 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 19 |
| 19-20 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 17 |
| 21-23 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 15 |
| 24-25 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 14 |
| 26-27 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 13 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 15)) | 12 |
| 30-31 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 11 |
| 32-33 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 10 |
| 34-35 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 15)) | 9 |
| 36-37 | Chờ 2 bước (`-2`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 15)) | 9 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (13, 3) (ô=61)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(5, 7))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(5, 7))
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 5, 4, 5, 5, 4, 5, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 37 |
| 3-4 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 37 |
| 5-6 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 37 |
| 7-9 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 37 |
| 10-11 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 37 |
| 12 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 37 |
| 13-14 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 37 |
| 15-16 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 37 |
| 17 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 37 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 37 |
| 20-37 | Chờ 18 bước (`-18`) | (5, 7) | (5, 7) | Dự kiến đứng yên tại (5, 7); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 37 |

