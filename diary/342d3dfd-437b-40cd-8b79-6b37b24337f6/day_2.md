# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 16 | #4 | #6 | (14, 20) | 0 | 120 |
| 54 | #1 | #6 | (15, 5) | 24 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (18, 29) (ô=946)
- Nhiên liệu đầu ngày: 63
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=6, tọa độ=(26, 18))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=6, tọa độ=(26, 18))
- Mảng hành động đã gửi server: `[5, 2, 3, 3, 2, 2, 2, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 5, 0, 0, 0, 5, 5, 4, 3, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 61 |
| 1-2 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 60 |
| 3 | Di chuyển hướng 3 (`3`) | (18, 29) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 58 |
| 4-6 | Di chuyển hướng 3 (`3`) | (18, 30) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 56 |
| 7-9 | Di chuyển hướng 2 (`2`) | (19, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 54 |
| 10-12 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 52 |
| 13-15 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 50 |
| 16-17 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 49 |
| 18 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 47 |
| 19-20 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 46 |
| 21-22 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 45 |
| 23-24 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 44 |
| 25 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 42 |
| 26 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 40 |
| 27-28 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 39 |
| 29-30 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 38 |
| 31-33 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 36 |
| 34-35 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 35 |
| 36 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 33 |
| 37 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 31 |
| 38 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 29 |
| 39 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 27 |
| 40-41 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 26 |
| 42-44 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 24 |
| 45-46 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 23 |
| 47-48 | Di chuyển hướng 1 (`1`) | (31, 21) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 22 |
| 49 | Di chuyển hướng 0 (`0`) | (31, 20) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 20 |
| 50 | Di chuyển hướng 5 (`5`) | (31, 19) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 18 |
| 51 | Di chuyển hướng 0 (`0`) | (30, 19) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 16 |
| 52 | Di chuyển hướng 0 (`0`) | (29, 18) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 14 |
| 53 | Di chuyển hướng 0 (`0`) | (29, 17) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 12 |
| 54 | Di chuyển hướng 5 (`5`) | (28, 16) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 10 |
| 55-56 | Di chuyển hướng 5 (`5`) | (27, 16) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 9 |
| 57-58 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 8 |
| 59-61 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 6 |
| 62-87 | Chờ 26 bước (`-26`) | (26, 18) | (26, 18) | Dự kiến đứng yên tại (26, 18); mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 6 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 19) (ô=609)
- Nhiên liệu đầu ngày: 84
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 9)
- Mảng hành động đã gửi server: `[0, 0, 1, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 3, 3, 2, 2, 2, 5, 4, 4, 3, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 5, 0, 1, 0, 0, 5, 5, 5, 0, 0, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (1, 19) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 82 |
| 1-2 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 81 |
| 3-4 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 80 |
| 5 | Di chuyển hướng 0 (`0`) | (0, 16) | (0, 15) | Dự kiến đến điểm hẹn tọa độ (0, 15) | 78 |
| 6 | Di chuyển hướng 1 (`1`) | (0, 15) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 76 |
| 7 | Di chuyển hướng 1 (`1`) | (0, 14) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 74 |
| 8 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 72 |
| 9 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 70 |
| 10 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 68 |
| 11 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 66 |
| 12 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 64 |
| 13 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 62 |
| 14 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 60 |
| 15 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 58 |
| 16-17 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 57 |
| 18-20 | Di chuyển hướng 2 (`2`) | (8, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 55 |
| 21-23 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 53 |
| 24-26 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 51 |
| 27-29 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 49 |
| 30-31 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 48 |
| 32-34 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 46 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 45 |
| 37-39 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 43 |
| 40 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 41 |
| 41 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 39 |
| 42-43 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 38 |
| 44 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 36 |
| 45 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 34 |
| 46 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 32 |
| 47 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 30 |
| 48-49 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 29 |
| 50 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 27 |
| 51-52 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 26 |
| 53 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 120 |
| 54 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 118 |
| 55 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 116 |
| 56 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 114 |
| 57 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 112 |
| 58-60 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 110 |
| 61-62 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 109 |
| 63 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 107 |
| 64-65 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 106 |
| 66-67 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 105 |
| 68 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 103 |
| 69 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 101 |
| 70 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 99 |
| 71 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 97 |
| 72-73 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 96 |
| 74-75 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 95 |
| 76-77 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 94 |
| 78 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 92 |
| 79 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 90 |
| 80-81 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 89 |
| 82-83 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 88 |
| 84 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 86 |
| 85 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 84 |
| 86 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 82 |
| 87 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 80 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 31) (ô=1003)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Địa điểm đích kế hoạch: Spot #30 (thương hiệu=22, tọa độ=(11, 31))
- Mảng hành động đã gửi server: `[-88]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-87 | Chờ 88 bước (`-88`) | (11, 31) | (11, 31) | Dự kiến đứng yên tại (11, 31); mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (26, 19) (ô=634)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=8, tọa độ=(21, 7))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=8, tọa độ=(21, 7))
- Mảng hành động đã gửi server: `[1, 4, 5, 5, 5, 5, 5, 0, 2, 1, 0, 0, 0, 1, 0, 1, 5, 0, 0, 1, 1, 2, -50]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 39 |
| 1-2 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 38 |
| 3 | Di chuyển hướng 5 (`5`) | (26, 19) | (25, 19) | Dự kiến đến điểm hẹn tọa độ (25, 19) | 36 |
| 4-6 | Di chuyển hướng 5 (`5`) | (25, 19) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 34 |
| 7 | Di chuyển hướng 5 (`5`) | (24, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 32 |
| 8-9 | Di chuyển hướng 5 (`5`) | (23, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 31 |
| 10-11 | Di chuyển hướng 5 (`5`) | (22, 19) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 30 |
| 12 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 28 |
| 13-14 | Di chuyển hướng 2 (`2`) | (20, 18) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 27 |
| 15-17 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 25 |
| 18-20 | Di chuyển hướng 0 (`0`) | (22, 17) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 23 |
| 21-23 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 21 |
| 24-25 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 20 |
| 26 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 18 |
| 27 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 16 |
| 28 | Di chuyển hướng 1 (`1`) | (20, 12) | (21, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 14 |
| 29-30 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 13 |
| 31 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 11 |
| 32-33 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 10 |
| 34 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 8 |
| 35-36 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 7 |
| 37 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 5 |
| 38-87 | Chờ 50 bước (`-50`) | (21, 7) | (21, 7) | Dự kiến đứng yên tại (21, 7); mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 5 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (14, 20) (ô=654)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 27)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 27)
- Mảng hành động đã gửi server: `[-17, 5, 0, 5, 5, 4, 4, 4, 4, 4, 5, 4, 4, 5, 4, 4, 3, 4, 3, 0, 0, 5, 5, 5, 4, 1, 0, 1, 1, 2, 1, 1, 1, 2, 2, 2, 3, 2, 3, 2, 2, 3, 3, 3, 2, 2, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-16 | Chờ 17 bước (`-17`) | (14, 20) | (14, 20) | Dự kiến đứng yên tại (14, 20); mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 120 |
| 17-18 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 119 |
| 19 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 117 |
| 20 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 115 |
| 21 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 113 |
| 22 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 111 |
| 23-25 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 109 |
| 26-27 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 108 |
| 28-29 | Di chuyển hướng 4 (`4`) | (9, 22) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 107 |
| 30-31 | Di chuyển hướng 4 (`4`) | (9, 23) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 106 |
| 32 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 104 |
| 33 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 102 |
| 34 | Di chuyển hướng 4 (`4`) | (7, 25) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 100 |
| 35-36 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 99 |
| 37-39 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 97 |
| 40-42 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 95 |
| 43 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 93 |
| 44 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 91 |
| 45 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 89 |
| 46-47 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 88 |
| 48 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 86 |
| 49-51 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 84 |
| 52-54 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 82 |
| 55-57 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 80 |
| 58 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 78 |
| 59-60 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 77 |
| 61 | Di chuyển hướng 0 (`0`) | (1, 29) | (0, 28) | Dự kiến đến điểm hẹn tọa độ (0, 28) | 75 |
| 62 | Di chuyển hướng 1 (`1`) | (0, 28) | (1, 27) | Dự kiến đến điểm hẹn tọa độ (1, 27) | 73 |
| 63 | Di chuyển hướng 1 (`1`) | (1, 27) | (1, 26) | Dự kiến đến điểm hẹn tọa độ (1, 26) | 71 |
| 64-66 | Di chuyển hướng 2 (`2`) | (1, 26) | (2, 26) | Dự kiến đến điểm hẹn tọa độ (2, 26) | 69 |
| 67 | Di chuyển hướng 1 (`1`) | (2, 26) | (3, 25) | Dự kiến đến điểm hẹn tọa độ (3, 25) | 67 |
| 68 | Di chuyển hướng 1 (`1`) | (3, 25) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 65 |
| 69 | Di chuyển hướng 1 (`1`) | (3, 24) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 63 |
| 70 | Di chuyển hướng 2 (`2`) | (4, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 61 |
| 71-72 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 60 |
| 73 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 58 |
| 74 | Di chuyển hướng 3 (`3`) | (7, 23) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 56 |
| 75 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 54 |
| 76 | Di chuyển hướng 3 (`3`) | (8, 24) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 52 |
| 77 | Di chuyển hướng 2 (`2`) | (9, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 50 |
| 78 | Di chuyển hướng 2 (`2`) | (10, 25) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 48 |
| 79 | Di chuyển hướng 3 (`3`) | (11, 25) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 46 |
| 80 | Di chuyển hướng 3 (`3`) | (11, 26) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 44 |
| 81 | Di chuyển hướng 3 (`3`) | (12, 27) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 42 |
| 82 | Di chuyển hướng 2 (`2`) | (12, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 40 |
| 83 | Di chuyển hướng 2 (`2`) | (13, 28) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 38 |
| 84-85 | Di chuyển hướng 1 (`1`) | (14, 28) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 37 |
| 86-87 | Chờ 2 bước (`-2`) | (15, 27) | (15, 27) | Dự kiến đứng yên tại (15, 27); hướng tới tọa độ (15, 27) | 37 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (31, 0) (ô=31)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Mảng hành động đã gửi server: `[-88]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-87 | Chờ 88 bước (`-88`) | (31, 0) | (31, 0) | Dự kiến đứng yên tại (31, 0); mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 3 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (15, 11) (ô=367)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 5)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 2, 2, 4, -44]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 4 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 120 |
| 5 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 120 |
| 6 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 7 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 8 | Di chuyển hướng 4 (`4`) | (16, 16) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 120 |
| 9-11 | Di chuyển hướng 4 (`4`) | (16, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 120 |
| 12-13 | Di chuyển hướng 4 (`4`) | (15, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 120 |
| 14-15 | Di chuyển hướng 4 (`4`) | (15, 19) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 120 |
| 16-17 | Di chuyển hướng 1 (`1`) | (14, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 120 |
| 18-19 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 120 |
| 20-21 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 120 |
| 22-24 | Di chuyển hướng 1 (`1`) | (16, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 25 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 26 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 120 |
| 27 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 120 |
| 28 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 29 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 30-33 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 120 |
| 34 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 120 |
| 35 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 120 |
| 36 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 120 |
| 37 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 120 |
| 38 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 120 |
| 39 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 120 |
| 40 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 120 |
| 41-42 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 120 |
| 43 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 120 |
| 44-87 | Chờ 44 bước (`-44`) | (15, 5) | (15, 5) | Dự kiến đứng yên tại (15, 5); hướng tới tọa độ (15, 5) | 120 |

