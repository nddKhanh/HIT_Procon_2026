# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 10 | #5 | #3 | (22, 21) | 0 | 120 |
| 12 | #4 | #6 | (5, 23) | 0 | 120 |
| 13 | #5 | #3 | (21, 20) | 119 | 120 |
| 16 | #5 | #3 | (21, 19) | 118 | 120 |
| 31 | #1 | #6 | (14, 20) | 0 | 120 |
| 37 | #2 | #6 | (15, 20) | 23 | 120 |
| 49 | #2 | #3 | (21, 19) | 110 | 120 |
| 67 | #0 | #3 | (21, 19) | 7 | 120 |
| 70 | #0 | #3 | (21, 19) | 117 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (31, 23) (ô=767)
- Nhiên liệu đầu ngày: 70
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(25, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(25, 14)
- Mảng hành động đã gửi server: `[1, 0, 3, 4, 4, 4, 3, 3, 4, 4, 4, 5, 5, 5, 0, 5, 5, 5, 4, 4, 5, 5, 5, 0, 0, 5, 2, 1, 1, 0, 1, 2, 1, 1, 1, 1, 0, 0, 0, 3, 2, 2, 2, 2, 2, 1, 0, 1, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 68 |
| 3-4 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 67 |
| 5-6 | Di chuyển hướng 3 (`3`) | (31, 21) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 66 |
| 7-8 | Di chuyển hướng 4 (`4`) | (31, 22) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 65 |
| 9-11 | Di chuyển hướng 4 (`4`) | (31, 23) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 63 |
| 12-13 | Di chuyển hướng 4 (`4`) | (30, 24) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 62 |
| 14 | Di chuyển hướng 3 (`3`) | (30, 25) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 60 |
| 15 | Di chuyển hướng 3 (`3`) | (30, 26) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 58 |
| 16 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 56 |
| 17 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 54 |
| 18-19 | Di chuyển hướng 4 (`4`) | (30, 29) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 53 |
| 20-22 | Di chuyển hướng 5 (`5`) | (29, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 51 |
| 23-24 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 50 |
| 25-26 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 49 |
| 27 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 47 |
| 28 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 45 |
| 29-30 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 44 |
| 31-32 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 43 |
| 33-34 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 42 |
| 35 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 40 |
| 36-37 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 39 |
| 38-40 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 37 |
| 41-43 | Di chuyển hướng 5 (`5`) | (20, 31) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 35 |
| 44-46 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 33 |
| 47-49 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 31 |
| 50 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 29 |
| 51-52 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 28 |
| 53 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 26 |
| 54 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 24 |
| 55 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 22 |
| 56 | Di chuyển hướng 1 (`1`) | (18, 26) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 20 |
| 57 | Di chuyển hướng 2 (`2`) | (19, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 18 |
| 58 | Di chuyển hướng 1 (`1`) | (20, 25) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 16 |
| 59 | Di chuyển hướng 1 (`1`) | (20, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 14 |
| 60 | Di chuyển hướng 1 (`1`) | (21, 23) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 12 |
| 61 | Di chuyển hướng 1 (`1`) | (21, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 10 |
| 62-63 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 9 |
| 64-66 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 120 |
| 67 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 118 |
| 68-69 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 120 |
| 70 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 118 |
| 71-72 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 117 |
| 73-74 | Di chuyển hướng 2 (`2`) | (23, 19) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 116 |
| 75 | Di chuyển hướng 2 (`2`) | (24, 19) | (25, 19) | Dự kiến đến điểm hẹn tọa độ (25, 19) | 114 |
| 76-78 | Di chuyển hướng 2 (`2`) | (25, 19) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 112 |
| 79 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 110 |
| 80-81 | Di chuyển hướng 0 (`0`) | (26, 18) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 109 |
| 82-84 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 107 |
| 85-86 | Di chuyển hướng 0 (`0`) | (26, 16) | (26, 15) | Dự kiến đến điểm hẹn tọa độ (26, 15) | 106 |
| 87 | Di chuyển hướng 0 (`0`) | (26, 15) | (25, 14) | Dự kiến đến điểm hẹn tọa độ (25, 14) | 104 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 20) (ô=654)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(13, 0))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(13, 0))
- Mảng hành động đã gửi server: `[-31, 5, 0, 5, 5, 0, 0, 0, 1, 1, 1, 1, 1, 4, 5, 5, 5, 5, 5, 5, 5, 0, 0, 5, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 3, 2, 1, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-30 | Chờ 31 bước (`-31`) | (14, 20) | (14, 20) | Dự kiến đứng yên tại (14, 20); mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 120 |
| 31-32 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 119 |
| 33 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 117 |
| 34 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 115 |
| 35 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 113 |
| 36 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 111 |
| 37 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 109 |
| 38 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 107 |
| 39 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 105 |
| 40 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 103 |
| 41 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 101 |
| 42 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 99 |
| 43-44 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 98 |
| 45-46 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 97 |
| 47-48 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 96 |
| 49-50 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 95 |
| 51-52 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 94 |
| 53-55 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 92 |
| 56 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 90 |
| 57-58 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 89 |
| 59-60 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 88 |
| 61 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 86 |
| 62 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 84 |
| 63 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 82 |
| 64 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 80 |
| 65 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 78 |
| 66 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 76 |
| 67 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 74 |
| 68 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 72 |
| 69 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 70 |
| 70 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 68 |
| 71-72 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 67 |
| 73-74 | Di chuyển hướng 1 (`1`) | (1, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 66 |
| 75 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 64 |
| 76 | Di chuyển hướng 1 (`1`) | (3, 1) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 62 |
| 77 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 60 |
| 78 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 58 |
| 79 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 56 |
| 80 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 54 |
| 81 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 52 |
| 82 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 50 |
| 83 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 48 |
| 84 | Di chuyển hướng 2 (`2`) | (9, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 46 |
| 85 | Di chuyển hướng 2 (`2`) | (10, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 44 |
| 86 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 42 |
| 87 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 40 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 17) (ô=544)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=2, tọa độ=(31, 0))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 3, 3, 2, 2, 2, 2, 1, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 51 |
| 2-3 | Di chuyển hướng 2 (`2`) | (0, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 50 |
| 4 | Di chuyển hướng 2 (`2`) | (1, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 48 |
| 5-6 | Di chuyển hướng 2 (`2`) | (2, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 47 |
| 7-9 | Di chuyển hướng 3 (`3`) | (3, 18) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 45 |
| 10-12 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 43 |
| 13-14 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 42 |
| 15-17 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 40 |
| 18-20 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 38 |
| 21-22 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 37 |
| 23-25 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 35 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 34 |
| 28-30 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 32 |
| 31 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 30 |
| 32 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 28 |
| 33 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 26 |
| 34 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 24 |
| 35-36 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 120 |
| 37-38 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 119 |
| 39-40 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 118 |
| 41-43 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 116 |
| 44-46 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 114 |
| 47 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 112 |
| 48 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 120 |
| 49 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 118 |
| 50-51 | Di chuyển hướng 1 (`1`) | (22, 19) | (22, 18) | Dự kiến đến điểm hẹn tọa độ (22, 18) | 117 |
| 52-54 | Di chuyển hướng 1 (`1`) | (22, 18) | (23, 17) | Dự kiến đến điểm hẹn tọa độ (23, 17) | 115 |
| 55-56 | Di chuyển hướng 1 (`1`) | (23, 17) | (23, 16) | Dự kiến đến điểm hẹn tọa độ (23, 16) | 114 |
| 57-58 | Di chuyển hướng 1 (`1`) | (23, 16) | (24, 15) | Dự kiến đến điểm hẹn tọa độ (24, 15) | 113 |
| 59 | Di chuyển hướng 1 (`1`) | (24, 15) | (24, 14) | Dự kiến đến điểm hẹn tọa độ (24, 14) | 111 |
| 60 | Di chuyển hướng 0 (`0`) | (24, 14) | (24, 13) | Dự kiến đến điểm hẹn tọa độ (24, 13) | 109 |
| 61 | Di chuyển hướng 0 (`0`) | (24, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 107 |
| 62 | Di chuyển hướng 1 (`1`) | (23, 12) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 105 |
| 63 | Di chuyển hướng 0 (`0`) | (24, 11) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 103 |
| 64 | Di chuyển hướng 1 (`1`) | (23, 10) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 101 |
| 65-67 | Di chuyển hướng 1 (`1`) | (24, 9) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 99 |
| 68 | Di chuyển hướng 1 (`1`) | (24, 8) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 97 |
| 69 | Di chuyển hướng 1 (`1`) | (25, 7) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 95 |
| 70 | Di chuyển hướng 1 (`1`) | (25, 6) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 93 |
| 71 | Di chuyển hướng 1 (`1`) | (26, 5) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 91 |
| 72-73 | Di chuyển hướng 1 (`1`) | (26, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 90 |
| 74-75 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 89 |
| 76-78 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 87 |
| 79-81 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 85 |
| 82 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 83 |
| 83 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 81 |
| 84 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 79 |
| 85-87 | Chờ 3 bước (`-3`) | (31, 0) | (31, 0) | Dự kiến đứng yên tại (31, 0); mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 79 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (22, 17) (ô=566)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 19)
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 0, 0, -73]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 120 |
| 3-5 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 120 |
| 6 | Di chuyển hướng 3 (`3`) | (21, 19) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 120 |
| 7-9 | Di chuyển hướng 3 (`3`) | (21, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 120 |
| 10-11 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 120 |
| 12-14 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 120 |
| 15-87 | Chờ 73 bước (`-73`) | (21, 19) | (21, 19) | Dự kiến đứng yên tại (21, 19); hướng tới tọa độ (21, 19) | 120 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 23) (ô=741)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 27)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 27)
- Mảng hành động đã gửi server: `[-13, 5, 4, 4, 3, 3, 3, 3, 4, 3, 0, 0, 5, 5, 5, 4, 1, 2, 2, 2, 1, 1, 2, 2, 3, 2, 3, 3, 3, 2, 5, 0, 0, 0, 5, 0, 0, 2, 2, 2, 3, 2, 2, 3, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-12 | Chờ 13 bước (`-13`) | (5, 23) | (5, 23) | Dự kiến đứng yên tại (5, 23); mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 120 |
| 13-14 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 119 |
| 15 | Di chuyển hướng 4 (`4`) | (4, 23) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 117 |
| 16 | Di chuyển hướng 4 (`4`) | (3, 24) | (3, 25) | Dự kiến đến điểm hẹn tọa độ (3, 25) | 115 |
| 17 | Di chuyển hướng 3 (`3`) | (3, 25) | (3, 26) | Dự kiến đến điểm hẹn tọa độ (3, 26) | 113 |
| 18-19 | Di chuyển hướng 3 (`3`) | (3, 26) | (4, 27) | Dự kiến đến điểm hẹn tọa độ (4, 27) | 112 |
| 20 | Di chuyển hướng 3 (`3`) | (4, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 110 |
| 21 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 108 |
| 22 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 106 |
| 23 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 104 |
| 24-25 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 103 |
| 26 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 101 |
| 27-29 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 99 |
| 30-32 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 97 |
| 33-35 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 95 |
| 36 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 93 |
| 37-38 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 92 |
| 39 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 90 |
| 40-42 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 88 |
| 43-45 | Di chuyển hướng 2 (`2`) | (3, 29) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 86 |
| 46-48 | Di chuyển hướng 1 (`1`) | (4, 29) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 84 |
| 49 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 82 |
| 50-52 | Di chuyển hướng 2 (`2`) | (5, 27) | (6, 27) | Dự kiến đến điểm hẹn tọa độ (6, 27) | 80 |
| 53-55 | Di chuyển hướng 2 (`2`) | (6, 27) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 78 |
| 56 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 76 |
| 57 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 74 |
| 58 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 72 |
| 59 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 70 |
| 60 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 68 |
| 61 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 66 |
| 62-63 | Di chuyển hướng 5 (`5`) | (11, 31) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 65 |
| 64 | Di chuyển hướng 0 (`0`) | (10, 31) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 63 |
| 65 | Di chuyển hướng 0 (`0`) | (9, 30) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 61 |
| 66 | Di chuyển hướng 0 (`0`) | (9, 29) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 59 |
| 67 | Di chuyển hướng 5 (`5`) | (8, 28) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 57 |
| 68 | Di chuyển hướng 0 (`0`) | (7, 28) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 55 |
| 69 | Di chuyển hướng 0 (`0`) | (7, 27) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 53 |
| 70-71 | Di chuyển hướng 2 (`2`) | (6, 26) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 52 |
| 72 | Di chuyển hướng 2 (`2`) | (7, 26) | (8, 26) | Dự kiến đến điểm hẹn tọa độ (8, 26) | 50 |
| 73-75 | Di chuyển hướng 2 (`2`) | (8, 26) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 48 |
| 76-77 | Di chuyển hướng 3 (`3`) | (9, 26) | (10, 27) | Dự kiến đến điểm hẹn tọa độ (10, 27) | 47 |
| 78-79 | Di chuyển hướng 2 (`2`) | (10, 27) | (11, 27) | Dự kiến đến điểm hẹn tọa độ (11, 27) | 46 |
| 80-81 | Di chuyển hướng 2 (`2`) | (11, 27) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 45 |
| 82 | Di chuyển hướng 3 (`3`) | (12, 27) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 43 |
| 83 | Di chuyển hướng 2 (`2`) | (12, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 41 |
| 84 | Di chuyển hướng 2 (`2`) | (13, 28) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 39 |
| 85-86 | Di chuyển hướng 1 (`1`) | (14, 28) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 38 |
| 87 | Chờ 1 bước (`-1`) | (15, 27) | (15, 27) | Dự kiến đứng yên tại (15, 27); hướng tới tọa độ (15, 27) | 38 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (22, 21) (ô=694)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(29, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(29, 4)
- Mảng hành động đã gửi server: `[-11, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 2, 5, 0, 5, 5, 0, 0, 0, 1, 2, 2, 1, 2, 2, 3, 2, 2, 2, 3, 3, 3, 2, 3, 2, 2, 2, 2, 5, 0, 1, 2, 5, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-10 | Chờ 11 bước (`-11`) | (22, 21) | (22, 21) | Dự kiến đứng yên tại (22, 21); mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 120 |
| 11-12 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 120 |
| 13-15 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 120 |
| 16 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 118 |
| 17-19 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 116 |
| 20-22 | Di chuyển hướng 0 (`0`) | (22, 17) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 114 |
| 23-25 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 112 |
| 26-27 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 111 |
| 28 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 109 |
| 29 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 107 |
| 30 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 105 |
| 31 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 103 |
| 32-33 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 102 |
| 34 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 100 |
| 35-36 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 99 |
| 37 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 97 |
| 38-39 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 96 |
| 40 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 94 |
| 41 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 92 |
| 42 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 90 |
| 43-44 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 89 |
| 45-46 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 88 |
| 47-48 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 87 |
| 49-51 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 85 |
| 52-53 | Di chuyển hướng 2 (`2`) | (16, 2) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 84 |
| 54-55 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 83 |
| 56 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 81 |
| 57 | Di chuyển hướng 2 (`2`) | (19, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 79 |
| 58-59 | Di chuyển hướng 2 (`2`) | (20, 1) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 78 |
| 60-61 | Di chuyển hướng 3 (`3`) | (21, 1) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 77 |
| 62-63 | Di chuyển hướng 2 (`2`) | (21, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 76 |
| 64-65 | Di chuyển hướng 2 (`2`) | (22, 2) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 75 |
| 66-68 | Di chuyển hướng 2 (`2`) | (23, 2) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 73 |
| 69 | Di chuyển hướng 3 (`3`) | (24, 2) | (25, 3) | Dự kiến đến điểm hẹn tọa độ (25, 3) | 71 |
| 70 | Di chuyển hướng 3 (`3`) | (25, 3) | (25, 4) | Dự kiến đến điểm hẹn tọa độ (25, 4) | 69 |
| 71 | Di chuyển hướng 3 (`3`) | (25, 4) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 67 |
| 72 | Di chuyển hướng 2 (`2`) | (26, 5) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 65 |
| 73 | Di chuyển hướng 3 (`3`) | (27, 5) | (27, 6) | Dự kiến đến điểm hẹn tọa độ (27, 6) | 63 |
| 74 | Di chuyển hướng 2 (`2`) | (27, 6) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 61 |
| 75 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 59 |
| 76 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 57 |
| 77 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 55 |
| 78-79 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 54 |
| 80 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 52 |
| 81 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 50 |
| 82 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 48 |
| 83-84 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 47 |
| 85 | Di chuyển hướng 5 (`5`) | (30, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 45 |
| 86-87 | Chờ 2 bước (`-2`) | (29, 4) | (29, 4) | Dự kiến đứng yên tại (29, 4); hướng tới tọa độ (29, 4) | 45 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (0, 30) (ô=960)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 20)
- Mảng hành động đã gửi server: `[1, 0, 1, 1, 2, 1, 1, 1, 2, 2, 2, 3, 2, 1, 1, 1, 1, 1, 2, 2, 3, 2, 2, -55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 120 |
| 2 | Di chuyển hướng 0 (`0`) | (1, 29) | (0, 28) | Dự kiến đến điểm hẹn tọa độ (0, 28) | 120 |
| 3 | Di chuyển hướng 1 (`1`) | (0, 28) | (1, 27) | Dự kiến đến điểm hẹn tọa độ (1, 27) | 120 |
| 4 | Di chuyển hướng 1 (`1`) | (1, 27) | (1, 26) | Dự kiến đến điểm hẹn tọa độ (1, 26) | 120 |
| 5-7 | Di chuyển hướng 2 (`2`) | (1, 26) | (2, 26) | Dự kiến đến điểm hẹn tọa độ (2, 26) | 120 |
| 8 | Di chuyển hướng 1 (`1`) | (2, 26) | (3, 25) | Dự kiến đến điểm hẹn tọa độ (3, 25) | 120 |
| 9 | Di chuyển hướng 1 (`1`) | (3, 25) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 120 |
| 10 | Di chuyển hướng 1 (`1`) | (3, 24) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 120 |
| 11 | Di chuyển hướng 2 (`2`) | (4, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 120 |
| 12-13 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 120 |
| 14 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 120 |
| 15 | Di chuyển hướng 3 (`3`) | (7, 23) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 120 |
| 16 | Di chuyển hướng 2 (`2`) | (7, 24) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 120 |
| 17 | Di chuyển hướng 1 (`1`) | (8, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 120 |
| 18-19 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 120 |
| 20-21 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 120 |
| 22-23 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 120 |
| 24-26 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 120 |
| 27 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 120 |
| 28 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 120 |
| 29 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 120 |
| 30 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 120 |
| 31-32 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 120 |
| 33-87 | Chờ 55 bước (`-55`) | (15, 20) | (15, 20) | Dự kiến đứng yên tại (15, 20); hướng tới tọa độ (15, 20) | 120 |

