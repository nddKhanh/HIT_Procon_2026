# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 87
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #5 | (8, 3) | 60 | 61 |
| 5 | #2 | #5 | (8, 2) | 59 | 61 |
| 7 | #4 | #5 | (10, 2) | 38 | 61 |
| 14 | #2 | #5 | (12, 1) | 53 | 61 |
| 16 | #3 | #5 | (12, 1) | 1 | 61 |
| 23 | #1 | #5 | (12, 1) | 30 | 61 |
| 27 | #0 | #5 | (11, 1) | 27 | 61 |
| 41 | #3 | #5 | (2, 1) | 33 | 61 |
| 42 | #4 | #5 | (1, 0) | 26 | 61 |
| 64 | #2 | #5 | (1, 0) | 0 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 4) (ô=63)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 5, 5, 0, 5, 2, 3, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 1, 3, 3, 4, 3, 4, 4, 5, 5, 4, 5, 4, 5, 5, 4, 4, 5, 4, 4, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 60 |
| 2 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 58 |
| 3 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 56 |
| 4 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 54 |
| 5-6 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 52 |
| 7 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 50 |
| 8 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 48 |
| 9 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 46 |
| 10-11 | Di chuyển hướng 2 (`2`) | (1, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 45 |
| 12 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 43 |
| 13 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 41 |
| 14 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 39 |
| 15-16 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 37 |
| 17 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 35 |
| 18 | Di chuyển hướng 1 (`1`) | (6, 2) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 33 |
| 19-21 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 31 |
| 22-23 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 30 |
| 24-25 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 29 |
| 26 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 61 |
| 27-29 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 59 |
| 30-31 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 58 |
| 32-33 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 57 |
| 34-35 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 56 |
| 36 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 54 |
| 37-38 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 53 |
| 39-40 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 52 |
| 41-42 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 51 |
| 43 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 49 |
| 44 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 47 |
| 45 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 45 |
| 46 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 43 |
| 47-48 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 42 |
| 49-50 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 41 |
| 51-53 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 39 |
| 54 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 37 |
| 55 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 35 |
| 56 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 33 |
| 57 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 31 |
| 58-59 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 30 |
| 60-86 | Chờ 27 bước (`-27`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 30 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (0, 8) (ô=112)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 0, 0, 1, 4, 5, 5, 5, 5, 3, 4, 4, 3, 3, 3, 4, 4, 4, 5, 4, 5, 5, 4, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 60 |
| 2-3 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 59 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 57 |
| 5 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 55 |
| 6 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 53 |
| 7 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 51 |
| 8 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 49 |
| 9 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 47 |
| 10 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 45 |
| 11 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 43 |
| 12 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 41 |
| 13 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 39 |
| 14 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 37 |
| 15 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 35 |
| 16-17 | Di chuyển hướng 1 (`1`) | (13, 5) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 34 |
| 18-19 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 33 |
| 20-21 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 32 |
| 22 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 61 |
| 23-24 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 60 |
| 25-26 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 59 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 58 |
| 29-31 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 56 |
| 32 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 54 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 53 |
| 35-36 | Di chuyển hướng 3 (`3`) | (8, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 52 |
| 37 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 50 |
| 38-40 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 48 |
| 41-42 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 47 |
| 43-45 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 45 |
| 46 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 43 |
| 47-48 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 42 |
| 49-50 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 41 |
| 51-53 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 39 |
| 54 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 37 |
| 55 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 35 |
| 56 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 33 |
| 57-58 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 32 |
| 59-60 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 31 |
| 61-86 | Chờ 26 bước (`-26`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 31 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 4) (ô=63)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=2, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=2, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[1, 1, 0, 2, 2, 2, 2, 1, 3, 3, 4, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 5, 2, 3, 3, 3, 3, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 61 |
| 2-4 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 61 |
| 5 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 1)) | 59 |
| 6-7 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 58 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến đến điểm hẹn tọa độ (10, 1) | 57 |
| 10 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 55 |
| 11-13 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 61 |
| 14-15 | Di chuyển hướng 1 (`1`) | (12, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 60 |
| 16-17 | Di chuyển hướng 3 (`3`) | (12, 0) | (13, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=1, tọa độ=(13, 1)) | 59 |
| 18-19 | Di chuyển hướng 3 (`3`) | (13, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 58 |
| 20 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 56 |
| 21-22 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 4)) | 55 |
| 23-24 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 54 |
| 25-26 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 53 |
| 27 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 51 |
| 28 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 49 |
| 29 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 47 |
| 30 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 45 |
| 31 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 43 |
| 32 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 41 |
| 33 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 39 |
| 34 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 37 |
| 35 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 35 |
| 36 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 33 |
| 37 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 31 |
| 38 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 29 |
| 39-40 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(0, 8)) | 28 |
| 41-42 | Di chuyển hướng 2 (`2`) | (0, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=0, tọa độ=(1, 8)) | 27 |
| 43-44 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 26 |
| 45 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 24 |
| 46 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 22 |
| 47-48 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 21 |
| 49-50 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 20 |
| 51-52 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 19 |
| 53 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 17 |
| 54 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 15 |
| 55 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 13 |
| 56 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 11 |
| 57 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 9 |
| 58 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 7 |
| 59 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 5 |
| 60 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 3 |
| 61 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 1 |
| 62-63 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 61 |
| 64-86 | Chờ 23 bước (`-23`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 61 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 1) (ô=27)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[0, -12, 4, 5, 4, 5, 5, 4, 4, 5, 0, 0, 5, 5, 5, 0, 5, 1, 3, 3, 4, 3, 4, 3, 4, 3, 4, 3, 3, 3, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 1) | (12, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 2 |
| 2-13 | Chờ 12 bước (`-12`) | (12, 0) | (12, 0) | Dự kiến đứng yên tại (12, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 0)) | 2 |
| 14-15 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 61 |
| 16-17 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 60 |
| 18-20 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 58 |
| 21 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 56 |
| 22 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 54 |
| 23 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 52 |
| 24-26 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 50 |
| 27-28 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 49 |
| 29 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 47 |
| 30 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 45 |
| 31 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 43 |
| 32-33 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 41 |
| 34 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 39 |
| 35 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 37 |
| 36 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 35 |
| 37-38 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 34 |
| 39-40 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 61 |
| 41 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 59 |
| 42 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 57 |
| 43 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 55 |
| 44 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 53 |
| 45 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 51 |
| 46 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 49 |
| 47 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 47 |
| 48 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 45 |
| 49 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 43 |
| 50 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 41 |
| 51-52 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 40 |
| 53-86 | Chờ 34 bước (`-34`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 40 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 0) (ô=12)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 5, 4, 4, 3, 3, 3, 0, 5, 5, 5, 5, 5, 0, 0, 0, 0, 0, 1, -7, 3, 3, 4, 3, 4, 3, 4, 3, 4, 3, 3, 3, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (12, 0) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 41 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 40 |
| 4-6 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 61 |
| 7 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 59 |
| 8 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 57 |
| 9 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 55 |
| 10-12 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 4)) | 53 |
| 13-14 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 52 |
| 15-17 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 50 |
| 18 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 7)) | 48 |
| 19-20 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 47 |
| 21 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 45 |
| 22 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 43 |
| 23 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 41 |
| 24 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 39 |
| 25 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 37 |
| 26 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 35 |
| 27-29 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 33 |
| 30 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 31 |
| 31 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 29 |
| 32 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 1)) | 27 |
| 33-34 | Di chuyển hướng 1 (`1`) | (1, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 26 |
| 35-41 | Chờ 7 bước (`-7`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 61 |
| 42-43 | Di chuyển hướng 3 (`3`) | (1, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 60 |
| 44 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 58 |
| 45 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 56 |
| 46 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 54 |
| 47 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 52 |
| 48 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 50 |
| 49 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 48 |
| 50 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 46 |
| 51 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 44 |
| 52 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 42 |
| 53 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 40 |
| 54-55 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 39 |
| 56-86 | Chờ 31 bước (`-31`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 12)) | 39 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (7, 4) (ô=63)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=2, tọa độ=(1, 0))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=2, tọa độ=(1, 0))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 1, 2, -12, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, -45]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 61 |
| 2-4 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 61 |
| 5 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 61 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 61 |
| 7 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 61 |
| 8-10 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 61 |
| 11-22 | Chờ 12 bước (`-12`) | (12, 1) | (12, 1) | Dự kiến đứng yên tại (12, 1); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 1)) | 61 |
| 23-24 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 61 |
| 25-27 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 61 |
| 28 | Di chuyển hướng 5 (`5`) | (10, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 61 |
| 29 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 61 |
| 30 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 61 |
| 31-34 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 61 |
| 35 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 61 |
| 36 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 61 |
| 37-38 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 61 |
| 39 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 61 |
| 40 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 61 |
| 41 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 61 |
| 42-86 | Chờ 45 bước (`-45`) | (1, 0) | (1, 0) | Dự kiến đứng yên tại (1, 0); mục tiêu Spot #11 (thương hiệu=2, tọa độ=(1, 0)) | 61 |

