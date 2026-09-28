# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 36
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #7 | (8, 9) | 36 | 37 |
| 3 | #1 | #7 | (8, 8) | 35 | 37 |
| 12 | #4 | #7 | (11, 6) | 2 | 37 |
| 17 | #2 | #7 | (10, 5) | 23 | 37 |
| 21 | #5 | #7 | (9, 3) | 2 | 37 |
| 28 | #6 | #7 | (12, 3) | 0 | 37 |
| 35 | #2 | #7 | (13, 3) | 24 | 37 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=151)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 15)
- Mảng hành động đã gửi server: `[0, 0, 5, 2, 3, 3, 2, 3, 3, 3, 4, 4, 4, 5, 2, 2, 2, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 36 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 35 |
| 4-5 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 34 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 33 |
| 8-9 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 32 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 31 |
| 12-13 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 30 |
| 14 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 28 |
| 15-16 | Di chuyển hướng 3 (`3`) | (8, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 27 |
| 17-19 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 25 |
| 20-21 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 24 |
| 22 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 14)) | 22 |
| 23-24 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 21 |
| 25-26 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 15)) | 20 |
| 27-28 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 19 |
| 29-30 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 18 |
| 31-32 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 15)) | 17 |
| 33-34 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 16 |
| 35 | Chờ 1 bước (`-1`) | (9, 15) | (9, 15) | Dự kiến đứng yên tại (9, 15); hướng tới tọa độ (9, 15) | 16 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=151)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 3)
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 2, 1, 1, 1, 0, 0, 2, 2, 2, 3, 3, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 37 |
| 2 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 37 |
| 3-4 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 36 |
| 5-7 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 34 |
| 8-9 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 33 |
| 10 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 31 |
| 11-13 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 29 |
| 14 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 27 |
| 15-16 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 26 |
| 17-18 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 25 |
| 19-21 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 0)) | 23 |
| 22-23 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 22 |
| 24-25 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 21 |
| 26-28 | Di chuyển hướng 2 (`2`) | (13, 0) | (14, 0) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 0)) | 19 |
| 29-30 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 18 |
| 31 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 16 |
| 32-33 | Di chuyển hướng 4 (`4`) | (15, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 15 |
| 34-35 | Chờ 2 bước (`-2`) | (15, 3) | (15, 3) | Dự kiến đứng yên tại (15, 3); hướng tới tọa độ (15, 3) | 15 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 9) (ô=152)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 3)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 0, 0, 3, 3, 2, 3, 2, 2, 1, 2, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 34 |
| 1-2 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 33 |
| 3-5 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 31 |
| 6-7 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 30 |
| 8 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 28 |
| 9-11 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 26 |
| 12-13 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 25 |
| 14-16 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 37 |
| 17 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 35 |
| 18-20 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 33 |
| 21-22 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 32 |
| 23-25 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 30 |
| 26-27 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 29 |
| 28-29 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 28 |
| 30-31 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 27 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 26 |
| 34 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 37 |
| 35 | Chờ 1 bước (`-1`) | (13, 3) | (13, 3) | Dự kiến đứng yên tại (13, 3); hướng tới tọa độ (13, 3) | 37 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (4, 9) (ô=148)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(0, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(0, 2))
- Mảng hành động đã gửi server: `[1, 1, 2, 3, 3, 0, 0, 0, 0, 0, 0, 5, 0, 5, 5, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 30 |
| 2-4 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 7)) | 28 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 27 |
| 7-8 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 26 |
| 9-10 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(7, 9)) | 25 |
| 11-12 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 24 |
| 13-14 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 23 |
| 15-16 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 22 |
| 17-19 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 20 |
| 20-21 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 19 |
| 22 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 17 |
| 23-24 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 15 |
| 25 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 13 |
| 26-27 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 12 |
| 28-29 | Di chuyển hướng 5 (`5`) | (1, 2) | (0, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 2)) | 11 |
| 30-35 | Chờ 6 bước (`-6`) | (0, 2) | (0, 2) | Dự kiến đứng yên tại (0, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 2)) | 11 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 6) (ô=107)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(11, 0))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(11, 0))
- Mảng hành động đã gửi server: `[-13, 2, 2, 1, 2, 5, 0, 0, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-12 | Chờ 13 bước (`-13`) | (11, 6) | (11, 6) | Dự kiến đứng yên tại (11, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 37 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 36 |
| 15-17 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 34 |
| 18-19 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 33 |
| 20-21 | Di chuyển hướng 2 (`2`) | (14, 5) | (15, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(15, 5)) | 32 |
| 22-23 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 31 |
| 24-25 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 30 |
| 26 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 28 |
| 27-29 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 26 |
| 30-31 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 25 |
| 32-34 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 0)) | 23 |
| 35 | Chờ 1 bước (`-1`) | (11, 0) | (11, 0) | Dự kiến đứng yên tại (11, 0); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 0)) | 23 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (9, 3) (ô=57)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(13, 6))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(13, 6))
- Mảng hành động đã gửi server: `[-21, 3, 3, 2, 3, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-20 | Chờ 21 bước (`-21`) | (9, 3) | (9, 3) | Dự kiến đứng yên tại (9, 3); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 37 |
| 21-22 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 36 |
| 23-25 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 34 |
| 26 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 32 |
| 27-29 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 30 |
| 30-31 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 29 |
| 32-34 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 27 |
| 35 | Chờ 1 bước (`-1`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(13, 6)) | 27 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (15, 5) (ô=95)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 6)
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 4, -18, 4, 4, 3, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 6 |
| 2-3 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 5 |
| 4 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 3 |
| 5-7 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 2)) | 1 |
| 8-9 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 0 |
| 10-27 | Chờ 18 bước (`-18`) | (12, 3) | (12, 3) | Dự kiến đứng yên tại (12, 3); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 37 |
| 28-29 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 36 |
| 30 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 34 |
| 31-33 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 32 |
| 34-35 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 31 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (7, 9) (ô=151)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 3)
- Mảng hành động đã gửi server: `[2, 1, 2, 1, 1, 2, 0, 5, 0, 0, 2, 2, 2, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 37 |
| 2 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 37 |
| 3-4 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 37 |
| 5-6 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 37 |
| 7-8 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 37 |
| 9-11 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 6)) | 37 |
| 12-13 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 37 |
| 14-16 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 37 |
| 17 | Di chuyển hướng 0 (`0`) | (10, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 37 |
| 18-20 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 3)) | 37 |
| 21-22 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 37 |
| 23-25 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 37 |
| 26-27 | Di chuyển hướng 2 (`2`) | (11, 3) | (12, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 3)) | 37 |
| 28-29 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 37 |
| 30-35 | Chờ 6 bước (`-6`) | (13, 3) | (13, 3) | Dự kiến đứng yên tại (13, 3); hướng tới tọa độ (13, 3) | 37 |

