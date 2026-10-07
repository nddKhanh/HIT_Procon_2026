# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #6 | (18, 29) | 119 | 120 |
| 3 | #2 | #6 | (18, 28) | 118 | 120 |
| 4 | #2 | #6 | (19, 27) | 118 | 120 |
| 5 | #2 | #6 | (18, 26) | 118 | 120 |
| 31 | #1 | #6 | (6, 26) | 5 | 120 |
| 45 | #3 | #5 | (8, 16) | 3 | 120 |
| 48 | #3 | #6 | (9, 16) | 119 | 120 |
| 64 | #1 | #6 | (9, 16) | 78 | 120 |
| 76 | #4 | #6 | (9, 16) | 9 | 120 |
| 77 | #4 | #5 | (8, 16) | 118 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (0, 30) (ô=960)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Địa điểm đích kế hoạch: Spot #29 (thương hiệu=21, tọa độ=(5, 31))
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 3, 3, -75]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 11 |
| 2 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 9 |
| 3-5 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 7 |
| 6-8 | Di chuyển hướng 2 (`2`) | (3, 29) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 5 |
| 9-11 | Di chuyển hướng 3 (`3`) | (4, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 3 |
| 12 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 1 |
| 13-87 | Chờ 75 bước (`-75`) | (5, 31) | (5, 31) | Dự kiến đứng yên tại (5, 31); mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (4, 31) (ô=996)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 0)
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 1, 2, -22, 3, 3, 2, 3, 3, 3, 2, 5, 0, 0, 0, 5, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (4, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 15 |
| 1 | Di chuyển hướng 1 (`1`) | (4, 30) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 13 |
| 2 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 11 |
| 3 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 9 |
| 4-6 | Di chuyển hướng 1 (`1`) | (5, 27) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 7 |
| 7-9 | Di chuyển hướng 2 (`2`) | (5, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 5 |
| 10-31 | Chờ 22 bước (`-22`) | (6, 26) | (6, 26) | Dự kiến đứng yên tại (6, 26); mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 120 |
| 32-33 | Di chuyển hướng 3 (`3`) | (6, 26) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 119 |
| 34 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 117 |
| 35 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 115 |
| 36 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 113 |
| 37 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 111 |
| 38 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 109 |
| 39 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 107 |
| 40-41 | Di chuyển hướng 5 (`5`) | (11, 31) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 106 |
| 42 | Di chuyển hướng 0 (`0`) | (10, 31) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 104 |
| 43 | Di chuyển hướng 0 (`0`) | (9, 30) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 102 |
| 44 | Di chuyển hướng 0 (`0`) | (9, 29) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 100 |
| 45 | Di chuyển hướng 5 (`5`) | (8, 28) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 98 |
| 46 | Di chuyển hướng 0 (`0`) | (7, 28) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 96 |
| 47 | Di chuyển hướng 1 (`1`) | (7, 27) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 94 |
| 48 | Di chuyển hướng 1 (`1`) | (7, 26) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 92 |
| 49-50 | Di chuyển hướng 1 (`1`) | (8, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 91 |
| 51 | Di chuyển hướng 1 (`1`) | (8, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 89 |
| 52-53 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 88 |
| 54-55 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 87 |
| 56-57 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 86 |
| 58-60 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 84 |
| 61 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 82 |
| 62 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 80 |
| 63 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 120 |
| 64 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 118 |
| 65 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 116 |
| 66 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 114 |
| 67 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 112 |
| 68-69 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 111 |
| 70-71 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 110 |
| 72 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 108 |
| 73-74 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 107 |
| 75-77 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 105 |
| 78 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 103 |
| 79 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 101 |
| 80 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 99 |
| 81 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 97 |
| 82 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 95 |
| 83 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 93 |
| 84 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 91 |
| 85 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 89 |
| 86-87 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 88 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 29) (ô=945)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 20)
- Mảng hành động đã gửi server: `[2, 1, 1, 0, 1, 2, 1, 1, 0, 0, 1, 1, 0, 3, 4, 4, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 5, 0, 0, 0, 5, 5, 4, 3, 4, 4, 5, 5, 5, 4, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 120 |
| 2 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 120 |
| 3 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 120 |
| 5 | Di chuyển hướng 1 (`1`) | (18, 26) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 118 |
| 6 | Di chuyển hướng 2 (`2`) | (19, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 116 |
| 7 | Di chuyển hướng 1 (`1`) | (20, 25) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 114 |
| 8 | Di chuyển hướng 1 (`1`) | (20, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 112 |
| 9 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 110 |
| 10 | Di chuyển hướng 0 (`0`) | (20, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 108 |
| 11 | Di chuyển hướng 1 (`1`) | (20, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 106 |
| 12 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 104 |
| 13 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 102 |
| 14-15 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 101 |
| 16 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 99 |
| 17 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 97 |
| 18 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 95 |
| 19 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 93 |
| 20 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 91 |
| 21 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 89 |
| 22 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 87 |
| 23 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đến điểm hẹn tọa độ (21, 27) | 85 |
| 24 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 83 |
| 25 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 81 |
| 26 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 79 |
| 27 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 77 |
| 28-29 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 76 |
| 30 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 74 |
| 31-32 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 73 |
| 33-34 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 72 |
| 35-36 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 71 |
| 37 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 69 |
| 38 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 67 |
| 39-40 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 66 |
| 41-42 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 65 |
| 43-45 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 63 |
| 46-47 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 62 |
| 48 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 60 |
| 49 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 58 |
| 50 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 56 |
| 51 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 54 |
| 52-53 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 53 |
| 54-56 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 51 |
| 57-58 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 50 |
| 59-60 | Di chuyển hướng 1 (`1`) | (31, 21) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 49 |
| 61 | Di chuyển hướng 0 (`0`) | (31, 20) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 47 |
| 62 | Di chuyển hướng 5 (`5`) | (31, 19) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 45 |
| 63 | Di chuyển hướng 0 (`0`) | (30, 19) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 43 |
| 64 | Di chuyển hướng 0 (`0`) | (29, 18) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 41 |
| 65 | Di chuyển hướng 0 (`0`) | (29, 17) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 39 |
| 66 | Di chuyển hướng 5 (`5`) | (28, 16) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 37 |
| 67-68 | Di chuyển hướng 5 (`5`) | (27, 16) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 36 |
| 69-70 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 35 |
| 71-73 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 33 |
| 74-75 | Di chuyển hướng 4 (`4`) | (26, 18) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 32 |
| 76 | Di chuyển hướng 4 (`4`) | (26, 19) | (25, 20) | Dự kiến đến điểm hẹn tọa độ (25, 20) | 30 |
| 77 | Di chuyển hướng 5 (`5`) | (25, 20) | (24, 20) | Dự kiến đến điểm hẹn tọa độ (24, 20) | 28 |
| 78-79 | Di chuyển hướng 5 (`5`) | (24, 20) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 27 |
| 80 | Di chuyển hướng 5 (`5`) | (23, 20) | (22, 20) | Dự kiến đến điểm hẹn tọa độ (22, 20) | 25 |
| 81-83 | Di chuyển hướng 4 (`4`) | (22, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 23 |
| 84-85 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 22 |
| 86-87 | Chờ 2 bước (`-2`) | (21, 20) | (21, 20) | Dự kiến đứng yên tại (21, 20); hướng tới tọa độ (21, 20) | 22 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 29) (ô=937)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 23)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 23)
- Mảng hành động đã gửi server: `[0, 5, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 5, -25, 2, 3, 3, 3, 2, 2, 3, 2, 3, 4, 4, 4, 4, 3, 3, 3, 5, 5, 0, 0, 0, 5, 5, 0, 5, 0, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (9, 29) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 27 |
| 1 | Di chuyển hướng 5 (`5`) | (8, 28) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 25 |
| 2 | Di chuyển hướng 0 (`0`) | (7, 28) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 23 |
| 3 | Di chuyển hướng 1 (`1`) | (7, 27) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 21 |
| 4 | Di chuyển hướng 1 (`1`) | (7, 26) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 19 |
| 5-6 | Di chuyển hướng 1 (`1`) | (8, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 18 |
| 7 | Di chuyển hướng 1 (`1`) | (8, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 16 |
| 8-9 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 15 |
| 10-11 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 14 |
| 12-13 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 13 |
| 14-16 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 11 |
| 17 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 9 |
| 18 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 7 |
| 19 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 5 |
| 20 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 3 |
| 21-45 | Chờ 25 bước (`-25`) | (8, 16) | (8, 16) | Dự kiến đứng yên tại (8, 16); mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 120 |
| 46-47 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 120 |
| 48 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 118 |
| 49 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 116 |
| 50 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 114 |
| 51 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 112 |
| 52 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 110 |
| 53 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 108 |
| 54 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 106 |
| 55-56 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 105 |
| 57-58 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 104 |
| 59-60 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 103 |
| 61-62 | Di chuyển hướng 4 (`4`) | (14, 23) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 102 |
| 63-65 | Di chuyển hướng 4 (`4`) | (13, 24) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 100 |
| 66-67 | Di chuyển hướng 3 (`3`) | (13, 25) | (13, 26) | Dự kiến đến điểm hẹn tọa độ (13, 26) | 99 |
| 68-69 | Di chuyển hướng 3 (`3`) | (13, 26) | (14, 27) | Dự kiến đến điểm hẹn tọa độ (14, 27) | 98 |
| 70-72 | Di chuyển hướng 3 (`3`) | (14, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 96 |
| 73-74 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 95 |
| 75 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 93 |
| 76 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 91 |
| 77 | Di chuyển hướng 0 (`0`) | (12, 27) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 89 |
| 78 | Di chuyển hướng 0 (`0`) | (11, 26) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 87 |
| 79 | Di chuyển hướng 5 (`5`) | (11, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 85 |
| 80 | Di chuyển hướng 5 (`5`) | (10, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 83 |
| 81 | Di chuyển hướng 0 (`0`) | (9, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 81 |
| 82 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 79 |
| 83 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 77 |
| 84 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 75 |
| 85 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 73 |
| 86-87 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 72 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (30, 4) (ô=158)
- Nhiên liệu đầu ngày: 92
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=10, tọa độ=(5, 12))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=10, tọa độ=(5, 12))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 1, 1, 1, 2, 2, 2, 5, 5, 5, 5, 5, 5, 4, 5, 5, 4, 5, 5, 5, 4, 3, 4, 3, 3, 2, 5, 0, 5, 5, 0, 0, 5, 4, 4, 3, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 5, 0, 1, 0, 5, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (30, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 90 |
| 1-3 | Di chuyển hướng 5 (`5`) | (29, 4) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 88 |
| 4-5 | Di chuyển hướng 5 (`5`) | (28, 4) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 87 |
| 6-7 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 86 |
| 8-9 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 85 |
| 10-12 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 83 |
| 13-15 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 81 |
| 16 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 79 |
| 17 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 77 |
| 18 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 75 |
| 19-20 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 74 |
| 21 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 72 |
| 22 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 70 |
| 23 | Di chuyển hướng 5 (`5`) | (28, 0) | (27, 0) | Dự kiến đến điểm hẹn tọa độ (27, 0) | 68 |
| 24 | Di chuyển hướng 5 (`5`) | (27, 0) | (26, 0) | Dự kiến đến điểm hẹn tọa độ (26, 0) | 66 |
| 25 | Di chuyển hướng 5 (`5`) | (26, 0) | (25, 0) | Dự kiến đến điểm hẹn tọa độ (25, 0) | 64 |
| 26 | Di chuyển hướng 4 (`4`) | (25, 0) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 62 |
| 27 | Di chuyển hướng 5 (`5`) | (25, 1) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 60 |
| 28-29 | Di chuyển hướng 5 (`5`) | (24, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 59 |
| 30-31 | Di chuyển hướng 4 (`4`) | (23, 1) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 58 |
| 32-33 | Di chuyển hướng 5 (`5`) | (22, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 57 |
| 34-35 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 56 |
| 36-38 | Di chuyển hướng 5 (`5`) | (20, 2) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 54 |
| 39-41 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 52 |
| 42 | Di chuyển hướng 3 (`3`) | (19, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 50 |
| 43 | Di chuyển hướng 4 (`4`) | (19, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 48 |
| 44 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 46 |
| 45 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 44 |
| 46 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 42 |
| 47-48 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 41 |
| 49 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 39 |
| 50 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 37 |
| 51 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 35 |
| 52-53 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 34 |
| 54-55 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 33 |
| 56-57 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 32 |
| 58 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 30 |
| 59 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 28 |
| 60 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 26 |
| 61 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 24 |
| 62 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 22 |
| 63-65 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 20 |
| 66-67 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 19 |
| 68 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 17 |
| 69-70 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 16 |
| 71-72 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 15 |
| 73 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 13 |
| 74 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 11 |
| 75 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 120 |
| 76 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 120 |
| 77-78 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 119 |
| 79-80 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 118 |
| 81-82 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 117 |
| 83 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 115 |
| 84-85 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 114 |
| 86-87 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 113 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (31, 0) (ô=31)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=1, tọa độ=(8, 16))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=1, tọa độ=(8, 16))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 4, 5, 5, 4, 4, 4, 4, 3, 4, 3, 3, 4, 5, 5, 4, 4, 5, 4, 4, 4, 5, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 120 |
| 2 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 120 |
| 3 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 120 |
| 4 | Di chuyển hướng 5 (`5`) | (28, 0) | (27, 0) | Dự kiến đến điểm hẹn tọa độ (27, 0) | 120 |
| 5 | Di chuyển hướng 5 (`5`) | (27, 0) | (26, 0) | Dự kiến đến điểm hẹn tọa độ (26, 0) | 120 |
| 6 | Di chuyển hướng 5 (`5`) | (26, 0) | (25, 0) | Dự kiến đến điểm hẹn tọa độ (25, 0) | 120 |
| 7 | Di chuyển hướng 4 (`4`) | (25, 0) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 120 |
| 8 | Di chuyển hướng 5 (`5`) | (25, 1) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 120 |
| 9-10 | Di chuyển hướng 5 (`5`) | (24, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 120 |
| 11-12 | Di chuyển hướng 5 (`5`) | (23, 1) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 120 |
| 13-15 | Di chuyển hướng 5 (`5`) | (22, 1) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 120 |
| 16-17 | Di chuyển hướng 5 (`5`) | (21, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 120 |
| 18-19 | Di chuyển hướng 5 (`5`) | (20, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 120 |
| 20 | Di chuyển hướng 4 (`4`) | (19, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 120 |
| 21 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 120 |
| 22-23 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 120 |
| 24-25 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 120 |
| 26-28 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 120 |
| 29 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 120 |
| 30 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 120 |
| 31 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 120 |
| 32 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 120 |
| 33 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 120 |
| 34 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 120 |
| 35 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 36 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 120 |
| 37 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 120 |
| 38 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 120 |
| 39 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 120 |
| 40 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 120 |
| 41 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 120 |
| 42 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 120 |
| 43 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 120 |
| 44 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 120 |
| 45-87 | Chờ 43 bước (`-43`) | (8, 16) | (8, 16) | Dự kiến đứng yên tại (8, 16); mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (17, 29) (ô=945)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 16)
- Mảng hành động đã gửi server: `[2, 1, 1, 0, 0, 5, 4, 5, 4, 4, 5, 5, 0, 0, 0, 5, 5, 5, 4, 5, 1, 1, 2, 1, 1, 1, 1, 1, 0, 0, 0, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 120 |
| 2 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 120 |
| 3 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 120 |
| 5 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 120 |
| 6-8 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến đến điểm hẹn tọa độ (17, 25) | 120 |
| 9-10 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 120 |
| 11-12 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 120 |
| 13-15 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 120 |
| 16-18 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 120 |
| 19-20 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 120 |
| 21 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 120 |
| 22 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 120 |
| 23 | Di chuyển hướng 0 (`0`) | (12, 27) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 120 |
| 24 | Di chuyển hướng 0 (`0`) | (11, 26) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 120 |
| 25 | Di chuyển hướng 5 (`5`) | (11, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 120 |
| 26 | Di chuyển hướng 5 (`5`) | (10, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 120 |
| 27 | Di chuyển hướng 5 (`5`) | (9, 25) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 120 |
| 28-29 | Di chuyển hướng 4 (`4`) | (8, 25) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 120 |
| 30 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 120 |
| 31-32 | Di chuyển hướng 1 (`1`) | (6, 26) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 120 |
| 33 | Di chuyển hướng 1 (`1`) | (7, 25) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 120 |
| 34 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 120 |
| 35 | Di chuyển hướng 1 (`1`) | (8, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 120 |
| 36-37 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 120 |
| 38-39 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 120 |
| 40-41 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 120 |
| 42-44 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 120 |
| 45 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 120 |
| 46 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 120 |
| 47 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 120 |
| 48-87 | Chờ 40 bước (`-40`) | (9, 16) | (9, 16) | Dự kiến đứng yên tại (9, 16); hướng tới tọa độ (9, 16) | 120 |

