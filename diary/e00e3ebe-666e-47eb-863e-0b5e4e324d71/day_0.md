# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 37
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 5) (ô=99)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(13, 10))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(13, 10))
- Mảng hành động đã gửi server: `[4, 5, 1, 1, 1, 1, 3, 3, 3, 2, 3, 3, 4, 4, 2, 2, 3, 2, 2, 1, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 42 |
| 2-3 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 41 |
| 4-5 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 40 |
| 6-7 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 39 |
| 8-9 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 38 |
| 10 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 36 |
| 11-12 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 35 |
| 13 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 33 |
| 14 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 31 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 30 |
| 17 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 28 |
| 18-19 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 27 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 26 |
| 22 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 24 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 23 |
| 25-26 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 22 |
| 27-28 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 21 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 20 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 19 |
| 33 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 17 |
| 34 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 15 |
| 35-36 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 43 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 5) (ô=104)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 10)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 5, 5, 4, 4, 4, 5, 0, 3, 2, 2, 3, 3, 3, 3, 3, 2, 2, 4, 3, -1, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 42 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 40 |
| 3 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 38 |
| 4-5 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 37 |
| 6-7 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 36 |
| 8-9 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 35 |
| 10 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 33 |
| 11 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 31 |
| 12 | Di chuyển hướng 4 (`4`) | (9, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 29 |
| 13-14 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 28 |
| 15 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 26 |
| 16 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 24 |
| 17-18 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 23 |
| 19 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 21 |
| 20 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 19 |
| 21 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 17 |
| 22 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 15 |
| 23 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 13 |
| 24 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 11 |
| 25 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 9 |
| 26 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 7 |
| 27 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 8)) | 5 |
| 28-29 | Di chuyển hướng 4 (`4`) | (13, 8) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 4 |
| 30-31 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 43 |
| 32 | Chờ 1 bước (`-1`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 43 |
| 33-34 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 42 |
| 35-36 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 41 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 6) (ô=122)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 14)
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 2, 3, 3, 4, 3, 4, 5, 5, 5, 0, 5, 5, 5, 2, 3, 3, 1, 1, 1, -1, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 42 |
| 2-3 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 41 |
| 4-5 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 40 |
| 6-7 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 39 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 38 |
| 10-11 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 43 |
| 12 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 43 |
| 13 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 14 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 15 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 16 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 17 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 18 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 43 |
| 19 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 43 |
| 20 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 14)) | 41 |
| 21-22 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 40 |
| 23 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 14)) | 38 |
| 24-25 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 37 |
| 26 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 35 |
| 27 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 16)) | 33 |
| 28-29 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 32 |
| 30 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 30 |
| 31 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(8, 13)) | 28 |
| 32 | Chờ 1 bước (`-1`) | (8, 13) | (8, 13) | Dự kiến đứng yên tại (8, 13); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(8, 13)) | 28 |
| 33-34 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 43 |
| 35-36 | Chờ 2 bước (`-2`) | (8, 14) | (8, 14) | Dự kiến đứng yên tại (8, 14); hướng tới tọa độ (8, 14) | 43 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 9) (ô=179)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(11, 1))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(11, 1))
- Mảng hành động đã gửi server: `[2, 0, 0, 0, 0, 5, 5, 4, 5, 5, 1, 1, 1, 1, 2, 2, 3, 2, 2, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 42 |
| 2-3 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 41 |
| 4-5 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 40 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 39 |
| 8-9 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 38 |
| 10 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 36 |
| 11-12 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 35 |
| 13 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 33 |
| 14 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 31 |
| 15-16 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 30 |
| 17-18 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 29 |
| 19-20 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 28 |
| 21-22 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 27 |
| 23 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 25 |
| 24-25 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 24 |
| 26-28 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 22 |
| 29-30 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 21 |
| 31 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 19 |
| 32 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 17 |
| 33 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 15 |
| 34 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 13 |
| 35-36 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 12 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (8, 5) (ô=103)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 8)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 5, 1, 1, 1, 1, 3, 3, 2, 3, 3, 3, 4, 4, 2, 2, 1, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 42 |
| 2 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 40 |
| 3-4 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 39 |
| 5 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 37 |
| 6 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 35 |
| 7-8 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 34 |
| 9-10 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 33 |
| 11-12 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 32 |
| 13-14 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 31 |
| 15 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 29 |
| 16-17 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 28 |
| 18 | Di chuyển hướng 3 (`3`) | (5, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 26 |
| 19 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 24 |
| 20 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 22 |
| 21 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 20 |
| 22-23 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 19 |
| 24-25 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 18 |
| 26 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 16 |
| 27-28 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 15 |
| 29-30 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 14 |
| 31-32 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 13 |
| 33-34 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 12 |
| 35-36 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 11 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (12, 1) (ô=31)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(7, 9))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(7, 9))
- Mảng hành động đã gửi server: `[0, 4, 4, 4, 5, 5, 5, 0, 5, 5, 4, 4, 4, 4, 2, 2, 1, 2, 3, 3, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 42 |
| 2-3 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 41 |
| 4-5 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 40 |
| 6-7 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 39 |
| 8 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 37 |
| 9 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 35 |
| 10 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 33 |
| 11 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 31 |
| 12-13 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 30 |
| 14-16 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 28 |
| 17-18 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 27 |
| 19 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 25 |
| 20-21 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 24 |
| 22-23 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 23 |
| 24-25 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 22 |
| 26-27 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 21 |
| 28 | Di chuyển hướng 1 (`1`) | (4, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 19 |
| 29 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 17 |
| 30-31 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 16 |
| 32-33 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 15 |
| 34-35 | Di chuyển hướng 3 (`3`) | (7, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 14 |
| 36 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 12 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (5, 16) (ô=309)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(13, 10))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(13, 10))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 1, 0, 1, 0, 1, 2, 2, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 43 |
| 2 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 43 |
| 3 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 43 |
| 4 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 5 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 6 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 7 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 8 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 9 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 43 |
| 10 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 43 |
| 11 | Di chuyển hướng 1 (`1`) | (11, 11) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 43 |
| 12 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 43 |
| 13-14 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 43 |
| 15-36 | Chờ 22 bước (`-22`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 43 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (10, 1) (ô=29)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 14)
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 5, 5, 5, 0, 1, 3, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 43 |
| 2-3 | Di chuyển hướng 3 (`3`) | (10, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 43 |
| 4 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 43 |
| 5 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 43 |
| 6 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 43 |
| 7 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 43 |
| 8 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 43 |
| 9 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 43 |
| 10 | Di chuyển hướng 3 (`3`) | (11, 9) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 43 |
| 11 | Di chuyển hướng 4 (`4`) | (11, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 43 |
| 12 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 43 |
| 13 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 43 |
| 14 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 15 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 43 |
| 16 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 17 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 43 |
| 18 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 43 |
| 19 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 43 |
| 20 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(8, 13)) | 43 |
| 21-22 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 43 |
| 23-36 | Chờ 14 bước (`-14`) | (8, 14) | (8, 14) | Dự kiến đứng yên tại (8, 14); hướng tới tọa độ (8, 14) | 43 |

