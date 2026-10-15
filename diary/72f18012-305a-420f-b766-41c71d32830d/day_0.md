# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 48
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #3 | #4 | (4, 16) | 47 | 80 |
| 42 | #1 | #4 | (4, 16) | 19 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 1) (ô=34)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=7, tọa độ=(21, 4))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=7, tọa độ=(21, 4))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 2, 2, 2, 3, 3, 3, 3, 3, 2, 1, 1, 2, 2, 0, 1, 0, 0, 5, 5, 4, 5, 2, 1, 2, 3, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 79 |
| 2 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 77 |
| 3 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 75 |
| 4-5 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 74 |
| 6 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 72 |
| 7 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 70 |
| 8 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 68 |
| 9-11 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 66 |
| 12 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 64 |
| 13 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 62 |
| 14 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 60 |
| 15-16 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 59 |
| 17 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 57 |
| 18 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 55 |
| 19 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 53 |
| 20 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 51 |
| 21-22 | Di chuyển hướng 2 (`2`) | (21, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 50 |
| 23 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 48 |
| 24-25 | Di chuyển hướng 0 (`0`) | (23, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 47 |
| 26 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 45 |
| 27 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 43 |
| 28 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 41 |
| 29 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 39 |
| 30 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 37 |
| 31-32 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 36 |
| 33 | Di chuyển hướng 5 (`5`) | (20, 1) | (19, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=4, tọa độ=(19, 1)) | 34 |
| 34-35 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 33 |
| 36 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 31 |
| 37-38 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 30 |
| 39 | Di chuyển hướng 3 (`3`) | (21, 0) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 28 |
| 40-42 | Di chuyển hướng 4 (`4`) | (22, 1) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 26 |
| 43-44 | Di chuyển hướng 3 (`3`) | (21, 2) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 25 |
| 45-47 | Di chuyển hướng 4 (`4`) | (22, 3) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 23 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 6) (ô=145)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=10, tọa độ=(1, 14))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=10, tọa độ=(1, 14))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 2, 1, 1, 3, 4, 3, 4, 4, 4, 4, 4, 4, 5, 2, 2, 3, 2, 2, 2, 1, 2, 3, 4, 5, 4, 4, 4, 4, 4, 5, 5, 5, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 79 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 77 |
| 3 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 75 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 73 |
| 5 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 71 |
| 6 | Di chuyển hướng 1 (`1`) | (3, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 69 |
| 7-9 | Di chuyển hướng 1 (`1`) | (4, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 67 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 66 |
| 12 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 64 |
| 13 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 62 |
| 14 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 60 |
| 15-16 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 59 |
| 17-19 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 57 |
| 20 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 55 |
| 21 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 53 |
| 22 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 51 |
| 23 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 49 |
| 24-25 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 48 |
| 26 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 46 |
| 27 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 44 |
| 28 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 42 |
| 29 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 40 |
| 30 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 38 |
| 31 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 36 |
| 32 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 34 |
| 33 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 32 |
| 34-35 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 31 |
| 36 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 29 |
| 37 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 27 |
| 38 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 25 |
| 39 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 23 |
| 40 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 21 |
| 41 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 80 |
| 42 | Di chuyển hướng 5 (`5`) | (4, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 78 |
| 43-44 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 77 |
| 45 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 75 |
| 46 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 73 |
| 47 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 71 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 13) (ô=327)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=12, tọa độ=(21, 15))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=12, tọa độ=(21, 15))
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 3, 3, 4, 3, 4, 4, 5, 5, 5, 2, 2, 2, 2, 2, 3, 2, 5, 0, 0, 0, 0, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (15, 13) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 79 |
| 2-3 | Di chuyển hướng 2 (`2`) | (16, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 78 |
| 4 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 76 |
| 5-7 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(18, 14)) | 74 |
| 8-9 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 73 |
| 10-12 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 71 |
| 13-15 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 69 |
| 16 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 67 |
| 17 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 65 |
| 18 | Di chuyển hướng 4 (`4`) | (20, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 63 |
| 19 | Di chuyển hướng 4 (`4`) | (19, 20) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 61 |
| 20-22 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 59 |
| 23-24 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 58 |
| 25 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 56 |
| 26-27 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 55 |
| 28 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 53 |
| 29-30 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 52 |
| 31-33 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 50 |
| 34 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 48 |
| 35 | Di chuyển hướng 3 (`3`) | (21, 21) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 46 |
| 36 | Di chuyển hướng 2 (`2`) | (21, 22) | (22, 22) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=13, tọa độ=(22, 22)) | 44 |
| 37-38 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 43 |
| 39 | Di chuyển hướng 0 (`0`) | (21, 22) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 41 |
| 40 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 39 |
| 41-43 | Di chuyển hướng 0 (`0`) | (20, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 37 |
| 44 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 35 |
| 45 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 33 |
| 46 | Di chuyển hướng 1 (`1`) | (20, 17) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 31 |
| 47 | Di chuyển hướng 1 (`1`) | (20, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 29 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 17) (ô=409)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 19)
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 3, 2, 2, 2, 2, 2, 0, 0, 1, 1, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 79 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 77 |
| 3 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 75 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 74 |
| 6 | Di chuyển hướng 1 (`1`) | (4, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 72 |
| 7 | Di chuyển hướng 1 (`1`) | (5, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 70 |
| 8 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 68 |
| 9 | Di chuyển hướng 1 (`1`) | (6, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 66 |
| 10 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 64 |
| 11 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 62 |
| 12 | Di chuyển hướng 1 (`1`) | (8, 11) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 60 |
| 13-14 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 59 |
| 15 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 57 |
| 16 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 55 |
| 17 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 53 |
| 18 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 51 |
| 19 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 49 |
| 20 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 80 |
| 21 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 78 |
| 22-24 | Di chuyển hướng 4 (`4`) | (4, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 76 |
| 25 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 74 |
| 26 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 72 |
| 27 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 70 |
| 28 | Di chuyển hướng 4 (`4`) | (4, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 68 |
| 29 | Di chuyển hướng 3 (`3`) | (3, 22) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 66 |
| 30-31 | Di chuyển hướng 2 (`2`) | (4, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 65 |
| 32 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 63 |
| 33 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 61 |
| 34 | Di chuyển hướng 2 (`2`) | (7, 23) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 59 |
| 35-37 | Di chuyển hướng 2 (`2`) | (8, 23) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 57 |
| 38-39 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 56 |
| 40 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 54 |
| 41 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 52 |
| 42-43 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 51 |
| 44 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 49 |
| 45 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 47 |
| 46-47 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 46 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (12, 19) (ô=468)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 16)
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 5, 5, 5, 0, 0, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 80 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 80 |
| 4 | Di chuyển hướng 5 (`5`) | (10, 19) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 80 |
| 5 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 80 |
| 6-7 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 80 |
| 8-9 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 80 |
| 10-11 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 80 |
| 12-13 | Di chuyển hướng 0 (`0`) | (5, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 80 |
| 14 | Di chuyển hướng 0 (`0`) | (5, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 80 |
| 15-47 | Chờ 33 bước (`-33`) | (4, 16) | (4, 16) | Dự kiến đứng yên tại (4, 16); hướng tới tọa độ (4, 16) | 80 |

