# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 45
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 1) (ô=30)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(13, 10))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(13, 10))
- Mảng hành động đã gửi server: `[1, -14, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2, 2, 2, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 2 |
| 2-15 | Chờ 14 bước (`-14`) | (11, 0) | (11, 0) | Dự kiến đứng yên tại (11, 0); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 43 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 42 |
| 18-19 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 41 |
| 20-21 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 40 |
| 22 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 38 |
| 23 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 36 |
| 24-25 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 35 |
| 26-27 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 34 |
| 28-29 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 33 |
| 30 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 43 |
| 31-32 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 42 |
| 33-34 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 41 |
| 35-36 | Di chuyển hướng 2 (`2`) | (9, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 40 |
| 37-39 | Di chuyển hướng 2 (`2`) | (10, 9) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 38 |
| 40-41 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 36 |
| 42 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 34 |
| 43-44 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 33 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (11, 12) (ô=239)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Mảng hành động đã gửi server: `[0, 0, 5, 0, 0, 0, 4, 4, 1, 0, 0, 0, 5, 5, 4, 5, 1, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 0 (`0`) | (11, 12) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 12 |
| 4-7 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 10 |
| 8-9 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 9 |
| 10-11 | Di chuyển hướng 0 (`0`) | (9, 10) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 8 |
| 12-13 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 7 |
| 14-15 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 6 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 5 |
| 18 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 43 |
| 19-20 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 42 |
| 21 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 40 |
| 22-23 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 39 |
| 24-25 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 38 |
| 26-27 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 37 |
| 28-29 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 35 |
| 30-31 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 34 |
| 32-33 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 33 |
| 34-35 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 32 |
| 36-37 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 31 |
| 38-39 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 30 |
| 40-43 | Di chuyển hướng 1 (`1`) | (4, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |
| 44 | Chờ 1 bước (`-1`) | (4, 2) | (4, 2) | Dự kiến đứng yên tại (4, 2); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 2) (ô=42)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 8)
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 5, 1, 1, 2, 3, 2, 2, 3, 3, 2, 3, 2, 3, 2, 2, 3, 0, 1, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 43 |
| 2-3 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 41 |
| 4 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 39 |
| 5-6 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 38 |
| 7-8 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 37 |
| 9-10 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 36 |
| 11-12 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 35 |
| 13-14 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 34 |
| 15 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 32 |
| 16-17 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 30 |
| 18-19 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 29 |
| 20 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 27 |
| 21-22 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 26 |
| 23-24 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 25 |
| 25-26 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 24 |
| 27-28 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 23 |
| 29-30 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 22 |
| 31-32 | Di chuyển hướng 2 (`2`) | (11, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 20 |
| 33 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 18 |
| 34-35 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(13, 10)) | 17 |
| 36-37 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(13, 9)) | 16 |
| 38-39 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 8)) | 15 |
| 40-41 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 14 |
| 42 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 12 |
| 43-44 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 10 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 9) (ô=179)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(6, 14))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(6, 14))
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 3, 4, 3, 4, 5, 5, 5, 5, 4, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 41 |
| 2-3 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 40 |
| 4-5 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 39 |
| 6-7 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 38 |
| 8-11 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 36 |
| 12-15 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 34 |
| 16-19 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 32 |
| 20-23 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 30 |
| 24-27 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 28 |
| 28-31 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 26 |
| 32-35 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 24 |
| 36-37 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 22 |
| 38-39 | Di chuyển hướng 4 (`4`) | (7, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(6, 16)) | 20 |
| 40-41 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 19 |
| 42-43 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 14)) | 17 |
| 44 | Chờ 1 bước (`-1`) | (6, 14) | (6, 14) | Dự kiến đứng yên tại (6, 14); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 14)) | 17 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 6) (ô=125)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 3)
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 1, 4, 4, 5, 5, 5, 0, -1, 4, 4, 5, 5, 4, 4, 2, 1, 2, 2, 0, 0, 0, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 17 |
| 1 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 15 |
| 2 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 13 |
| 3 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 11 |
| 4-5 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 10 |
| 6-7 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 9 |
| 8-9 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 43 |
| 10 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 41 |
| 11 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 39 |
| 12-13 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 37 |
| 14-17 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 35 |
| 18 | Chờ 1 bước (`-1`) | (6, 2) | (6, 2) | Dự kiến đứng yên tại (6, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(6, 2)) | 35 |
| 19-20 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 34 |
| 21 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 32 |
| 22-23 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 30 |
| 24 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 4)) | 28 |
| 25-26 | Di chuyển hướng 4 (`4`) | (3, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 27 |
| 27-28 | Di chuyển hướng 4 (`4`) | (3, 5) | (2, 6) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(2, 6)) | 26 |
| 29-30 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 6)) | 25 |
| 31-32 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 24 |
| 33-34 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 23 |
| 35-36 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 21 |
| 37-38 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 42 |
| 39-40 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 41 |
| 41-42 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 41 |
| 43-44 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 42 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (8, 9) (ô=179)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(8, 13))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(8, 13))
- Mảng hành động đã gửi server: `[0, 1, 3, 3, 3, 2, 3, 3, 4, 3, 4, 5, 5, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 41 |
| 2 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 39 |
| 3-4 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 38 |
| 5-6 | Di chuyển hướng 3 (`3`) | (8, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 9)) | 37 |
| 7-8 | Di chuyển hướng 3 (`3`) | (9, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 36 |
| 9-10 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 10)) | 35 |
| 11-12 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 34 |
| 13-16 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 32 |
| 17-20 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 30 |
| 21-24 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 28 |
| 25-28 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 26 |
| 29-32 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 24 |
| 33-36 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 22 |
| 37-40 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 20 |
| 41-43 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(8, 13)) | 18 |
| 44 | Chờ 1 bước (`-1`) | (8, 13) | (8, 13) | Dự kiến đứng yên tại (8, 13); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(8, 13)) | 18 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (4, 2) (ô=42)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(11, 0))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(11, 0))
- Mảng hành động đã gửi server: `[3, 2, 3, 2, 2, 2, 1, 1, 1, 1, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 43 |
| 2-3 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 43 |
| 4 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 43 |
| 5-6 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 43 |
| 7 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 43 |
| 8 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 43 |
| 9 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 43 |
| 10 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 43 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 1)) | 43 |
| 13-14 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 43 |
| 15-44 | Chờ 30 bước (`-30`) | (11, 0) | (11, 0) | Dự kiến đứng yên tại (11, 0); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 0)) | 43 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (7, 9) (ô=178)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(4, 2))
- Mảng hành động đã gửi server: `[-31, 1, 0, 0, 0, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-30 | Chờ 31 bước (`-31`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 9)) | 43 |
| 31-32 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 43 |
| 33 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 43 |
| 34-35 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 43 |
| 36-37 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 5)) | 43 |
| 38-39 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 43 |
| 40-41 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 43 |
| 42-43 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |
| 44 | Chờ 1 bước (`-1`) | (4, 2) | (4, 2) | Dự kiến đứng yên tại (4, 2); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 2)) | 43 |

