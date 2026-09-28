# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 72
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 15 | #2 | #3 | (7, 7) | 12 | 65 |
| 22 | #0 | #3 | (7, 7) | 0 | 65 |
| 39 | #1 | #3 | (6, 8) | 2 | 65 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 16) (ô=237)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=1, tọa độ=(5, 16))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=1, tọa độ=(5, 16))
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 0, 0, 5, 0, 0, 0, -1, 0, 1, 1, 1, 1, 1, 2, 2, 0, 1, 1, 5, 4, 4, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 5, 4, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 18 |
| 2-4 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 16 |
| 5-7 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 14 |
| 8 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 12 |
| 9 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 10 |
| 10 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(9, 12)) | 8 |
| 11-12 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 7 |
| 13-14 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 6 |
| 15-16 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 5 |
| 17 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 3 |
| 18 | Chờ 1 bước (`-1`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 3 |
| 19-20 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 2 |
| 21 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 65 |
| 22-24 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 63 |
| 25 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 61 |
| 26-27 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 60 |
| 28-29 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 59 |
| 30-32 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 57 |
| 33 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 3)) | 55 |
| 34-35 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 54 |
| 36 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 52 |
| 37-38 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 0)) | 51 |
| 39-40 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 50 |
| 41 | Di chuyển hướng 4 (`4`) | (10, 0) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 48 |
| 42 | Di chuyển hướng 4 (`4`) | (10, 1) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 46 |
| 43 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 44 |
| 44 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 42 |
| 45 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 40 |
| 46 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 38 |
| 47 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 36 |
| 48 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 34 |
| 49 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 32 |
| 50-51 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 31 |
| 52 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 29 |
| 53 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 27 |
| 54 | Di chuyển hướng 5 (`5`) | (1, 6) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 25 |
| 55 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(0, 7)) | 23 |
| 56-57 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 22 |
| 58-59 | Di chuyển hướng 3 (`3`) | (0, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 21 |
| 60-61 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 20 |
| 62 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 18 |
| 63 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 16 |
| 64 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 14 |
| 65-66 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 13 |
| 67 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 11 |
| 68 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 9 |
| 69-71 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(5, 16)) | 7 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 7) (ô=98)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=0, tọa độ=(9, 12))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=0, tọa độ=(9, 12))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 0, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 2, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 43 |
| 2 | Di chuyển hướng 2 (`2`) | (0, 6) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 41 |
| 3 | Di chuyển hướng 2 (`2`) | (1, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 39 |
| 4 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 37 |
| 5 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 35 |
| 6 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 33 |
| 7 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 31 |
| 8 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 29 |
| 9 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 27 |
| 10-11 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 26 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 25 |
| 14-16 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 23 |
| 17 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 3)) | 21 |
| 18-19 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 20 |
| 20 | Di chuyển hướng 1 (`1`) | (11, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 18 |
| 21-22 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 0)) | 17 |
| 23-24 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 16 |
| 25 | Di chuyển hướng 4 (`4`) | (10, 0) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 14 |
| 26 | Di chuyển hướng 4 (`4`) | (10, 1) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 12 |
| 27 | Di chuyển hướng 4 (`4`) | (9, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 10 |
| 28-30 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 8 |
| 31-32 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 7 |
| 33-34 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 6 |
| 35 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 4 |
| 36-38 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 65 |
| 39 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 63 |
| 40-41 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 62 |
| 42 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 60 |
| 43-44 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 59 |
| 45-46 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(9, 12)) | 58 |
| 47-71 | Chờ 25 bước (`-25`) | (9, 12) | (9, 12) | Dự kiến đứng yên tại (9, 12); mục tiêu Spot #6 (thương hiệu=0, tọa độ=(9, 12)) | 58 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 14) (ô=200)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 16))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 16))
- Mảng hành động đã gửi server: `[3, 3, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 2, 1, 2, 0, 1, 1, 3, 3, 4, 4, 4, 4, 4, 3, 4, 3, 4, 4, 3, 3, 2, 3, 3, 2, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 30 |
| 1-3 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=1, tọa độ=(5, 16)) | 28 |
| 4-5 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 27 |
| 6 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 25 |
| 7 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 23 |
| 8 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 21 |
| 9 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 19 |
| 10 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 17 |
| 11 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 9)) | 15 |
| 12-13 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 14 |
| 14 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 65 |
| 15-17 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 63 |
| 18 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 61 |
| 19-20 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 60 |
| 21-22 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 59 |
| 23-25 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 57 |
| 26 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(11, 3)) | 55 |
| 27-28 | Di chuyển hướng 0 (`0`) | (11, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 54 |
| 29 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 52 |
| 30-31 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(11, 0)) | 51 |
| 32-33 | Di chuyển hướng 3 (`3`) | (11, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 1)) | 50 |
| 34-35 | Di chuyển hướng 3 (`3`) | (12, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 49 |
| 36 | Di chuyển hướng 4 (`4`) | (12, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 47 |
| 37-38 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 46 |
| 39-40 | Di chuyển hướng 4 (`4`) | (11, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 45 |
| 41-43 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 43 |
| 44 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 41 |
| 45 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 39 |
| 46 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 37 |
| 47 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 35 |
| 48 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 33 |
| 49 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=0, tọa độ=(9, 12)) | 31 |
| 50-51 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 30 |
| 52 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 28 |
| 53 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 26 |
| 54 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 24 |
| 55-57 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 22 |
| 58-60 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 16)) | 20 |
| 61-71 | Chờ 11 bước (`-11`) | (13, 16) | (13, 16) | Dự kiến đứng yên tại (13, 16); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 16)) | 20 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (8, 7) (ô=106)
- Nhiên liệu đầu ngày: 65
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 8)
- Mảng hành động đã gửi server: `[5, -19, 4, -47]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 65 |
| 3-21 | Chờ 19 bước (`-19`) | (7, 7) | (7, 7) | Dự kiến đứng yên tại (7, 7); hướng tới tọa độ (7, 7) | 65 |
| 22-24 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 65 |
| 25-71 | Chờ 47 bước (`-47`) | (6, 8) | (6, 8) | Dự kiến đứng yên tại (6, 8); hướng tới tọa độ (6, 8) | 65 |

