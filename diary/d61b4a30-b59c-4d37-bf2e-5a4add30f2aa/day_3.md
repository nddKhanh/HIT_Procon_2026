# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 73
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 19 | #0 | #5 | (3, 12) | 0 | 61 |
| 27 | #1 | #5 | (0, 8) | 23 | 61 |
| 31 | #2 | #5 | (0, 8) | 0 | 61 |
| 42 | #4 | #5 | (1, 0) | 3 | 61 |
| 44 | #4 | #5 | (2, 1) | 60 | 61 |
| 45 | #4 | #5 | (2, 2) | 59 | 61 |
| 46 | #4 | #5 | (3, 2) | 59 | 61 |
| 47 | #4 | #5 | (4, 3) | 59 | 61 |
| 50 | #4 | #5 | (5, 3) | 59 | 61 |
| 52 | #4 | #5 | (6, 3) | 60 | 61 |
| 53 | #4 | #5 | (6, 4) | 59 | 61 |
| 54 | #4 | #5 | (7, 4) | 59 | 61 |
| 69 | #0 | #5 | (7, 4) | 13 | 61 |
| 73 | #2 | #5 | (7, 4) | 17 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=171)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(7, 4))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(7, 4))
- Mảng hành động đã gửi server: `[-20, 1, 1, 2, 1, 1, 0, 1, 0, 1, 1, 1, 1, 2, 2, 2, 2, 1, 3, 3, 4, 3, 4, 4, 5, 5, 4, 5, 0, 0, 0, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-19 | Chờ 20 bước (`-20`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 61 |
| 20-21 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 60 |
| 22-23 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 59 |
| 24 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 57 |
| 25 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 55 |
| 26 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 53 |
| 27 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 51 |
| 28 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 49 |
| 29 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 47 |
| 30 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 45 |
| 31 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 43 |
| 32-33 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 42 |
| 34-37 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 40 |
| 38-39 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 39 |
| 40-41 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 38 |
| 42 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 36 |
| 43-45 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 34 |
| 46-47 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 33 |
| 48-49 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 32 |
| 50-51 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 31 |
| 52 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 29 |
| 53-54 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 28 |
| 55-56 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 27 |
| 57-58 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 26 |
| 59 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 24 |
| 60 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 22 |
| 61 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 20 |
| 62 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 18 |
| 63-64 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 17 |
| 65 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 15 |
| 66-68 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 61 |
| 69-72 | Chờ 4 bước (`-4`) | (7, 4) | (7, 4) | Dự kiến đứng yên tại (7, 4); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 61 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=171)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(0, 8))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(0, 8))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, -65]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 29 |
| 2-3 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 28 |
| 4 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 26 |
| 5 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 24 |
| 6-7 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 23 |
| 8-72 | Chờ 65 bước (`-65`) | (0, 8) | (0, 8) | Dự kiến đứng yên tại (0, 8); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 61 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=171)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(7, 4))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(7, 4))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 4, 3, 3, 4, 4, 4, 4, 3, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 1, 0, 0, 4, 5, 5, 5, 5, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 32 |
| 2-3 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 31 |
| 4 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 29 |
| 5 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 27 |
| 6-7 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 26 |
| 8 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 24 |
| 9 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 22 |
| 10 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 20 |
| 11 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 18 |
| 12 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 16 |
| 13 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 14 |
| 14-15 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 13 |
| 16-17 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 12 |
| 18-19 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 11 |
| 20 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 9 |
| 21 | Di chuyển hướng 4 (`4`) | (2, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 7 |
| 22-24 | Di chuyển hướng 4 (`4`) | (1, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 5 |
| 25-27 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 3 |
| 28 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 1 |
| 29-30 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 61 |
| 31-32 | Di chuyển hướng 2 (`2`) | (0, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 60 |
| 33-34 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 59 |
| 35 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 57 |
| 36 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 55 |
| 37 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 53 |
| 38 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 51 |
| 39 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 49 |
| 40 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 47 |
| 41 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 45 |
| 42 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 43 |
| 43 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 41 |
| 44 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 39 |
| 45 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 37 |
| 46 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 35 |
| 47-48 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 34 |
| 49-50 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 33 |
| 51-52 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 32 |
| 53 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 30 |
| 54-55 | Di chuyển hướng 0 (`0`) | (13, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 29 |
| 56-57 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 28 |
| 58-59 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 27 |
| 60-62 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 25 |
| 63 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 23 |
| 64-65 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 22 |
| 66-67 | Di chuyển hướng 3 (`3`) | (8, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 21 |
| 68-69 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 19 |
| 70-72 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 61 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=171)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=1, tọa độ=(13, 1))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=1, tọa độ=(13, 1))
- Mảng hành động đã gửi server: `[1, 1, 2, 1, 1, 0, 1, 0, 1, 1, 1, 1, 2, 2, 2, 2, 1, 3, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 31 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 30 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 28 |
| 5 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 26 |
| 6 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 24 |
| 7 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 22 |
| 8 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 20 |
| 9 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 18 |
| 10 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 16 |
| 11 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 14 |
| 12-13 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 13 |
| 14-17 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 11 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 10 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 9 |
| 22 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 7 |
| 23-25 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 5 |
| 26-27 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 4 |
| 28-29 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 3 |
| 30-72 | Chờ 43 bước (`-43`) | (13, 1) | (13, 1) | Dự kiến đứng yên tại (13, 1); mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 3 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 1) (ô=15)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(12, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(12, 0))
- Mảng hành động đã gửi server: `[1, -40, 3, 3, 2, 3, 2, 2, 3, 2, 3, 3, 2, 2, 2, 2, 1, 1, 0, 1, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 3 |
| 2-41 | Chờ 40 bước (`-40`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 61 |
| 42-43 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 61 |
| 44 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 61 |
| 45 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 61 |
| 46 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 61 |
| 47-49 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 61 |
| 50-51 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 61 |
| 52 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 61 |
| 53 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 61 |
| 54-55 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 60 |
| 56-58 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 58 |
| 59 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 56 |
| 60 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 54 |
| 61 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 52 |
| 62 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 50 |
| 63 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 48 |
| 64-65 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 47 |
| 66-67 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 46 |
| 68-69 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 45 |
| 70 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 43 |
| 71-72 | Di chuyển hướng 0 (`0`) | (13, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 42 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (11, 2) (ô=39)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(7, 4))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(7, 4))
- Mảng hành động đã gửi server: `[5, 4, 3, 4, 4, 5, 5, 5, 4, 3, 4, 4, 5, 4, 4, 0, 0, 0, 0, 5, -4, 1, 1, 1, 1, 0, 0, 1, 0, 3, 3, 2, 3, 2, 2, 3, 2, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (11, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 61 |
| 4 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 61 |
| 5 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 61 |
| 6 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 61 |
| 7 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 61 |
| 8 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 61 |
| 9 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 61 |
| 10 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 61 |
| 11 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 61 |
| 12 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 61 |
| 13 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 61 |
| 14 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 61 |
| 15 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 61 |
| 16 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 61 |
| 17-18 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 61 |
| 19-20 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 61 |
| 21-22 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 61 |
| 23 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 61 |
| 24 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 61 |
| 25-26 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 61 |
| 27-30 | Chờ 4 bước (`-4`) | (0, 8) | (0, 8) | Dự kiến đứng yên tại (0, 8); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 61 |
| 31-32 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 61 |
| 33-35 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 61 |
| 36 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 61 |
| 37 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 61 |
| 38 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 61 |
| 39 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 61 |
| 40 | Di chuyển hướng 1 (`1`) | (1, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 61 |
| 41 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 61 |
| 42-43 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 61 |
| 44 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 61 |
| 45 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 61 |
| 46 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 61 |
| 47-49 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 61 |
| 50-51 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 61 |
| 52 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 61 |
| 53 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 61 |
| 54-72 | Chờ 19 bước (`-19`) | (7, 4) | (7, 4) | Dự kiến đứng yên tại (7, 4); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 61 |

