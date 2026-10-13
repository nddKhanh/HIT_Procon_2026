# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 48
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 26 | #0 | #4 | (23, 3) | 47 | 80 |
| 46 | #0 | #4 | (21, 6) | 49 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 1) (ô=34)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 7)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 2, 2, 2, 3, 3, 3, 3, 3, 2, 1, 1, 2, 2, 0, 1, 0, 0, 5, 5, 4, 5, 2, 1, 2, 2, 3, 3, 4, 4, 4, 4, 4]`

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
| 24-25 | Di chuyển hướng 0 (`0`) | (23, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 80 |
| 26 | Di chuyển hướng 1 (`1`) | (23, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 78 |
| 27 | Di chuyển hướng 0 (`0`) | (23, 2) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 76 |
| 28 | Di chuyển hướng 0 (`0`) | (23, 1) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 74 |
| 29 | Di chuyển hướng 5 (`5`) | (22, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 72 |
| 30 | Di chuyển hướng 5 (`5`) | (21, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 70 |
| 31-32 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 69 |
| 33 | Di chuyển hướng 5 (`5`) | (20, 1) | (19, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=4, tọa độ=(19, 1)) | 67 |
| 34-35 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 66 |
| 36 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(20, 0)) | 64 |
| 37-38 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 63 |
| 39 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 61 |
| 40 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 59 |
| 41 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 57 |
| 42 | Di chuyển hướng 4 (`4`) | (23, 2) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 55 |
| 43 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 53 |
| 44 | Di chuyển hướng 4 (`4`) | (22, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 51 |
| 45 | Di chuyển hướng 4 (`4`) | (22, 5) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 80 |
| 46-47 | Di chuyển hướng 4 (`4`) | (21, 6) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 79 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 6) (ô=145)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 17)
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 0, 3, 2, 2, 1, 1, 3, 4, 3, 4, 4, 4, 4, 4, 4, 5, 2, 2, 3, 3, 4, 5, 4, 4, 4, 3, 2, 2, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 79 |
| 2 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 77 |
| 3 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 75 |
| 4 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 73 |
| 5 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(1, 1)) | 71 |
| 6-7 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 70 |
| 8 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 68 |
| 9 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 66 |
| 10 | Di chuyển hướng 1 (`1`) | (3, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 64 |
| 11-13 | Di chuyển hướng 1 (`1`) | (4, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 62 |
| 14-15 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 61 |
| 16 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 59 |
| 17 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 57 |
| 18 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 55 |
| 19-20 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 54 |
| 21-23 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 52 |
| 24 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 50 |
| 25 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 48 |
| 26 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 46 |
| 27 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 44 |
| 28-29 | Di chuyển hướng 2 (`2`) | (1, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 43 |
| 30 | Di chuyển hướng 2 (`2`) | (2, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 41 |
| 31 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 39 |
| 32 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 37 |
| 33-35 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 35 |
| 36 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 33 |
| 37 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 31 |
| 38-40 | Di chuyển hướng 4 (`4`) | (2, 13) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 29 |
| 41-42 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 28 |
| 43 | Di chuyển hướng 3 (`3`) | (1, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 26 |
| 44 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 24 |
| 45 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 22 |
| 46-47 | Di chuyển hướng 4 (`4`) | (3, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 21 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 13) (ô=327)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 19)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 3, 2, 1, 4, 4, 4, 3, 3, 3, 3, 2, 5, 0, 5, 5, 5, 5, 5, 2, 2, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (15, 13) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 79 |
| 2-3 | Di chuyển hướng 2 (`2`) | (16, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 78 |
| 4 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 76 |
| 5-7 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=11, tọa độ=(18, 14)) | 74 |
| 8-9 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 73 |
| 10-12 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 71 |
| 13-15 | Di chuyển hướng 2 (`2`) | (19, 16) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 69 |
| 16 | Di chuyển hướng 1 (`1`) | (20, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 67 |
| 17-18 | Di chuyển hướng 4 (`4`) | (21, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 66 |
| 19 | Di chuyển hướng 4 (`4`) | (20, 16) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 64 |
| 20 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 62 |
| 21 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 60 |
| 22 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 58 |
| 23-25 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 56 |
| 26 | Di chuyển hướng 3 (`3`) | (21, 21) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 54 |
| 27 | Di chuyển hướng 2 (`2`) | (21, 22) | (22, 22) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=13, tọa độ=(22, 22)) | 52 |
| 28-29 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 51 |
| 30 | Di chuyển hướng 0 (`0`) | (21, 22) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 49 |
| 31 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 47 |
| 32 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 45 |
| 33-35 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 43 |
| 36-37 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 42 |
| 38 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=14, tọa độ=(16, 21)) | 40 |
| 39-40 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 39 |
| 41 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 37 |
| 42-43 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 36 |
| 44-46 | Di chuyển hướng 1 (`1`) | (19, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 34 |
| 47 | Di chuyển hướng 1 (`1`) | (19, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 32 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 17) (ô=409)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=17, tọa độ=(15, 23))
- Mảng hành động đã gửi server: `[1, 2, 2, 4, 3, 4, 3, 3, 4, 3, 2, 2, 2, 2, 2, 0, 0, 1, 1, 2, 2, 5, 0, 0, 0, 3, 3, 3, 3, 3, 2, 3, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 17) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 79 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 77 |
| 3 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 75 |
| 4-5 | Di chuyển hướng 4 (`4`) | (3, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 74 |
| 6-8 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 72 |
| 9 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 70 |
| 10 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 68 |
| 11 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 66 |
| 12 | Di chuyển hướng 4 (`4`) | (4, 21) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 64 |
| 13 | Di chuyển hướng 3 (`3`) | (3, 22) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 62 |
| 14-15 | Di chuyển hướng 2 (`2`) | (4, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 61 |
| 16 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 59 |
| 17 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 57 |
| 18 | Di chuyển hướng 2 (`2`) | (7, 23) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 55 |
| 19-21 | Di chuyển hướng 2 (`2`) | (8, 23) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 53 |
| 22-23 | Di chuyển hướng 0 (`0`) | (9, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 52 |
| 24 | Di chuyển hướng 0 (`0`) | (8, 22) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 50 |
| 25 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 48 |
| 26-27 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 47 |
| 28 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 45 |
| 29 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 43 |
| 30-31 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 42 |
| 32 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 40 |
| 33 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 38 |
| 34-35 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 37 |
| 36-37 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 36 |
| 38-39 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 35 |
| 40 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 33 |
| 41 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 31 |
| 42 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 29 |
| 43 | Di chuyển hướng 2 (`2`) | (11, 21) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 27 |
| 44 | Di chuyển hướng 3 (`3`) | (12, 21) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 25 |
| 45 | Di chuyển hướng 2 (`2`) | (12, 22) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 23 |
| 46 | Di chuyển hướng 2 (`2`) | (13, 22) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 21 |
| 47 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 19 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (12, 19) (ô=468)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 6)
- Mảng hành động đã gửi server: `[2, 1, 2, 1, 1, 1, 1, 1, 1, 0, 1, 2, 1, 2, 1, 0, 1, 1, 2, 1, 1, 4, 4, 4, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 80 |
| 2-3 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 80 |
| 4-5 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 80 |
| 6-7 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 80 |
| 8-9 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 80 |
| 10 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 80 |
| 11 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 80 |
| 12 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 80 |
| 13 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 80 |
| 14 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 80 |
| 15 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 80 |
| 16 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 80 |
| 17 | Di chuyển hướng 1 (`1`) | (18, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 80 |
| 18 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 80 |
| 19 | Di chuyển hướng 1 (`1`) | (20, 9) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 80 |
| 20 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 80 |
| 21 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 80 |
| 22 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 80 |
| 23 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 80 |
| 24 | Di chuyển hướng 1 (`1`) | (22, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 80 |
| 25 | Di chuyển hướng 1 (`1`) | (22, 4) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 80 |
| 26 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 80 |
| 27 | Di chuyển hướng 4 (`4`) | (22, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 80 |
| 28 | Di chuyển hướng 4 (`4`) | (22, 5) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 80 |
| 29-47 | Chờ 19 bước (`-19`) | (21, 6) | (21, 6) | Dự kiến đứng yên tại (21, 6); hướng tới tọa độ (21, 6) | 80 |

