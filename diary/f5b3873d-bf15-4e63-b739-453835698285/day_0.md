# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 28 | #3 | #6 | (21, 15) | 92 | 120 |
| 63 | #2 | #5 | (3, 31) | 30 | 120 |
| 64 | #4 | #6 | (21, 15) | 40 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 6) (ô=213)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 20)
- Mảng hành động đã gửi server: `[4, 5, 0, 5, 5, 0, 0, 5, 4, 4, 3, 4, 4, 4, 4, 5, 4, 5, 5, 5, 5, 5, 5, 2, 2, 3, 3, 3, 4, 2, 3, 3, 3, 2, 2, 3, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 6) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 119 |
| 2-3 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 118 |
| 4 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 116 |
| 5 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 114 |
| 6 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 112 |
| 7-8 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 111 |
| 9-10 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 110 |
| 11-12 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 109 |
| 13 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 107 |
| 14 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 105 |
| 15 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 103 |
| 16 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 101 |
| 17 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 99 |
| 18-20 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 97 |
| 21-22 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 96 |
| 23 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 94 |
| 24-25 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 93 |
| 26-27 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 92 |
| 28-29 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 91 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 90 |
| 32-34 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 88 |
| 35 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 86 |
| 36-37 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 85 |
| 38-39 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 84 |
| 40-41 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 83 |
| 42 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 81 |
| 43 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 79 |
| 44-45 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 78 |
| 46-47 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 77 |
| 48-49 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 76 |
| 50 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 74 |
| 51 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 72 |
| 52 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 70 |
| 53 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 68 |
| 54 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 66 |
| 55 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 64 |
| 56 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 62 |
| 57-58 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 61 |
| 59-60 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 60 |
| 61-62 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 59 |
| 63 | Chờ 1 bước (`-1`) | (17, 20) | (17, 20) | Dự kiến đứng yên tại (17, 20); hướng tới tọa độ (17, 20) | 59 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (29, 7) (ô=253)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #26 (thương hiệu=18, tọa độ=(30, 29))
- Địa điểm đích kế hoạch: Spot #26 (thương hiệu=18, tọa độ=(30, 29))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 2, 3, 3, 3, 4, 3, 3, 3, 3, 3, 2, 3, 4, 3, 4, 4, 4, 3, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (29, 7) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 119 |
| 2 | Di chuyển hướng 0 (`0`) | (28, 6) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 117 |
| 3-4 | Di chuyển hướng 0 (`0`) | (28, 5) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 116 |
| 5-6 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 115 |
| 7-8 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 114 |
| 9-11 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 112 |
| 12-14 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 110 |
| 15 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 108 |
| 16 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 106 |
| 17 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 104 |
| 18-19 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 103 |
| 20 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 101 |
| 21 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 99 |
| 22 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 97 |
| 23-25 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 95 |
| 26-28 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 93 |
| 29-30 | Di chuyển hướng 4 (`4`) | (27, 3) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 92 |
| 31-32 | Di chuyển hướng 4 (`4`) | (26, 4) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 91 |
| 33 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 89 |
| 34 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 87 |
| 35 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 85 |
| 36 | Di chuyển hướng 3 (`3`) | (24, 8) | (25, 9) | Dự kiến đến điểm hẹn tọa độ (25, 9) | 83 |
| 37 | Di chuyển hướng 3 (`3`) | (25, 9) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 81 |
| 38 | Di chuyển hướng 2 (`2`) | (25, 10) | (26, 10) | Dự kiến đến điểm hẹn tọa độ (26, 10) | 79 |
| 39 | Di chuyển hướng 3 (`3`) | (26, 10) | (27, 11) | Dự kiến đến điểm hẹn tọa độ (27, 11) | 77 |
| 40 | Di chuyển hướng 3 (`3`) | (27, 11) | (27, 12) | Dự kiến đến điểm hẹn tọa độ (27, 12) | 75 |
| 41 | Di chuyển hướng 3 (`3`) | (27, 12) | (28, 13) | Dự kiến đến điểm hẹn tọa độ (28, 13) | 73 |
| 42 | Di chuyển hướng 4 (`4`) | (28, 13) | (27, 14) | Dự kiến đến điểm hẹn tọa độ (27, 14) | 71 |
| 43 | Di chuyển hướng 3 (`3`) | (27, 14) | (28, 15) | Dự kiến đến điểm hẹn tọa độ (28, 15) | 69 |
| 44 | Di chuyển hướng 3 (`3`) | (28, 15) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 67 |
| 45 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 65 |
| 46 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 63 |
| 47 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 61 |
| 48 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 59 |
| 49 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 57 |
| 50 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 55 |
| 51-52 | Di chuyển hướng 3 (`3`) | (31, 21) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 54 |
| 53-54 | Di chuyển hướng 4 (`4`) | (31, 22) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 53 |
| 55-57 | Di chuyển hướng 4 (`4`) | (31, 23) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 51 |
| 58-59 | Di chuyển hướng 4 (`4`) | (30, 24) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 50 |
| 60 | Di chuyển hướng 3 (`3`) | (30, 25) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 48 |
| 61 | Di chuyển hướng 3 (`3`) | (30, 26) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 46 |
| 62 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 44 |
| 63 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 42 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=295)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 0, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 3, 3, 4, 3, 4, 3, 3, 4, 4, 4, 3, 3, 4, 3, 4, 1, 2, 2, 2, 3, 3, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 119 |
| 2 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 117 |
| 3 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 115 |
| 4 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 113 |
| 5 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 111 |
| 6 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 109 |
| 7 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 107 |
| 8 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 105 |
| 9 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 103 |
| 10 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 101 |
| 11 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 99 |
| 12 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 97 |
| 13-14 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 96 |
| 15-16 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 95 |
| 17-18 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 94 |
| 19 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 92 |
| 20 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 90 |
| 21 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 88 |
| 22 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 86 |
| 23 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 84 |
| 24 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 82 |
| 25 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 80 |
| 26 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 78 |
| 27 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 76 |
| 28 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 74 |
| 29 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến đến điểm hẹn tọa độ (0, 15) | 72 |
| 30 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 70 |
| 31 | Di chuyển hướng 3 (`3`) | (0, 16) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 68 |
| 32-33 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 67 |
| 34-35 | Di chuyển hướng 3 (`3`) | (0, 18) | (1, 19) | Dự kiến đến điểm hẹn tọa độ (1, 19) | 66 |
| 36 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 64 |
| 37 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 62 |
| 38 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến đến điểm hẹn tọa độ (1, 22) | 60 |
| 39 | Di chuyển hướng 4 (`4`) | (1, 22) | (1, 23) | Dự kiến đến điểm hẹn tọa độ (1, 23) | 58 |
| 40 | Di chuyển hướng 4 (`4`) | (1, 23) | (0, 24) | Dự kiến đến điểm hẹn tọa độ (0, 24) | 56 |
| 41 | Di chuyển hướng 4 (`4`) | (0, 24) | (0, 25) | Dự kiến đến điểm hẹn tọa độ (0, 25) | 54 |
| 42 | Di chuyển hướng 3 (`3`) | (0, 25) | (0, 26) | Dự kiến đến điểm hẹn tọa độ (0, 26) | 52 |
| 43 | Di chuyển hướng 3 (`3`) | (0, 26) | (1, 27) | Dự kiến đến điểm hẹn tọa độ (1, 27) | 50 |
| 44 | Di chuyển hướng 4 (`4`) | (1, 27) | (0, 28) | Dự kiến đến điểm hẹn tọa độ (0, 28) | 48 |
| 45 | Di chuyển hướng 3 (`3`) | (0, 28) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 46 |
| 46 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 44 |
| 47-48 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 43 |
| 49 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 41 |
| 50-52 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 39 |
| 53-55 | Di chuyển hướng 2 (`2`) | (3, 29) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 37 |
| 56-58 | Di chuyển hướng 3 (`3`) | (4, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 35 |
| 59 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 33 |
| 60-61 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 32 |
| 62 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 120 |
| 63 | Chờ 1 bước (`-1`) | (3, 31) | (3, 31) | Dự kiến đứng yên tại (3, 31); mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 120 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (30, 10) (ô=350)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #28 (thương hiệu=20, tọa độ=(27, 30))
- Địa điểm đích kế hoạch: Spot #28 (thương hiệu=20, tọa độ=(27, 30))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 0, 5, 0, 5, 5, 5, 4, 4, 4, 3, 4, 3, 3, 3, 4, 5, 3, 4, 4, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, 1, 1, 2, 2, 2, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (30, 10) | (30, 11) | Dự kiến đến điểm hẹn tọa độ (30, 11) | 119 |
| 2-4 | Di chuyển hướng 5 (`5`) | (30, 11) | (29, 11) | Dự kiến đến điểm hẹn tọa độ (29, 11) | 117 |
| 5-7 | Di chuyển hướng 5 (`5`) | (29, 11) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 115 |
| 8-9 | Di chuyển hướng 5 (`5`) | (28, 11) | (27, 11) | Dự kiến đến điểm hẹn tọa độ (27, 11) | 114 |
| 10 | Di chuyển hướng 0 (`0`) | (27, 11) | (26, 10) | Dự kiến đến điểm hẹn tọa độ (26, 10) | 112 |
| 11 | Di chuyển hướng 5 (`5`) | (26, 10) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 110 |
| 12 | Di chuyển hướng 0 (`0`) | (25, 10) | (25, 9) | Dự kiến đến điểm hẹn tọa độ (25, 9) | 108 |
| 13 | Di chuyển hướng 5 (`5`) | (25, 9) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 106 |
| 14-16 | Di chuyển hướng 5 (`5`) | (24, 9) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 104 |
| 17 | Di chuyển hướng 5 (`5`) | (23, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 102 |
| 18-19 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 101 |
| 20-22 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 99 |
| 23-24 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 98 |
| 25 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 96 |
| 26 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 94 |
| 27 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |
| 28-29 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 119 |
| 30-32 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 117 |
| 33-35 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 115 |
| 36-38 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 113 |
| 39-40 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 112 |
| 41 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 110 |
| 42 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 108 |
| 43 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 106 |
| 44 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 104 |
| 45 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 102 |
| 46 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 100 |
| 47 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 98 |
| 48 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đến điểm hẹn tọa độ (21, 27) | 96 |
| 49 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 94 |
| 50 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 92 |
| 51 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 90 |
| 52 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 88 |
| 53-54 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 87 |
| 55 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 85 |
| 56-57 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 84 |
| 58-59 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 83 |
| 60-61 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 82 |
| 62 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 80 |
| 63 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 78 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 17) (ô=562)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=1, tọa độ=(21, 15))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=1, tọa độ=(21, 15))
- Mảng hành động đã gửi server: `[5, 0, 1, 0, 0, 0, 0, 5, 0, 0, 5, 0, 5, 0, 0, 0, 5, 4, 1, 2, 1, 1, 1, 1, 1, 2, 2, 4, 4, 3, 3, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2, 4, 3, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (18, 17) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 119 |
| 2 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 117 |
| 3 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 115 |
| 4 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 113 |
| 5 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 111 |
| 6 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 109 |
| 7 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 107 |
| 8 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 105 |
| 9 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 103 |
| 10-11 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 102 |
| 12-14 | Di chuyển hướng 5 (`5`) | (13, 9) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 100 |
| 15-17 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 98 |
| 18-19 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 97 |
| 20-21 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 96 |
| 22-24 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 94 |
| 25 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 92 |
| 26 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 90 |
| 27 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=6, tọa độ=(7, 6)) | 88 |
| 28-29 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 87 |
| 30 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 85 |
| 31 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 83 |
| 32 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 81 |
| 33 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 79 |
| 34 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 77 |
| 35 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 75 |
| 36 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 73 |
| 37 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 71 |
| 38-39 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 70 |
| 40 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 68 |
| 41 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 66 |
| 42 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 64 |
| 43 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 62 |
| 44-45 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 61 |
| 46 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 59 |
| 47-48 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 58 |
| 49-50 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 57 |
| 51-52 | Di chuyển hướng 3 (`3`) | (17, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 56 |
| 53 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 54 |
| 54 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 52 |
| 55 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 50 |
| 56-57 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 49 |
| 58 | Di chuyển hướng 2 (`2`) | (20, 11) | (21, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 47 |
| 59-60 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 46 |
| 61 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 44 |
| 62 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 42 |
| 63 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (26, 22) (ô=730)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Mảng hành động đã gửi server: `[4, 5, 0, 5, 5, 5, 4, 4, 4, 5, 5, 5, 4, 5, 4, 4, 5, 5, 0, 0, 0, 5, 5, 5, 4, 4, 5, 5, 4, 3, 4, 4, 5, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (26, 22) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 120 |
| 2 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 120 |
| 3 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 120 |
| 4 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 120 |
| 5-6 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 120 |
| 7-8 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 120 |
| 9 | Di chuyển hướng 4 (`4`) | (21, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 120 |
| 10 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 120 |
| 11 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 120 |
| 12 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 120 |
| 13 | Di chuyển hướng 5 (`5`) | (19, 25) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 120 |
| 14-16 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến đến điểm hẹn tọa độ (17, 25) | 120 |
| 17-18 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 120 |
| 19-20 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 120 |
| 21-23 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 120 |
| 24-26 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 120 |
| 27-28 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 120 |
| 29 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 120 |
| 30 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 120 |
| 31 | Di chuyển hướng 0 (`0`) | (12, 27) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 120 |
| 32 | Di chuyển hướng 0 (`0`) | (11, 26) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 120 |
| 33 | Di chuyển hướng 5 (`5`) | (11, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 120 |
| 34 | Di chuyển hướng 5 (`5`) | (10, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 120 |
| 35 | Di chuyển hướng 5 (`5`) | (9, 25) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 120 |
| 36-37 | Di chuyển hướng 4 (`4`) | (8, 25) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 120 |
| 38 | Di chuyển hướng 4 (`4`) | (7, 26) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 120 |
| 39 | Di chuyển hướng 5 (`5`) | (7, 27) | (6, 27) | Dự kiến đến điểm hẹn tọa độ (6, 27) | 120 |
| 40-42 | Di chuyển hướng 5 (`5`) | (6, 27) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 120 |
| 43-45 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 120 |
| 46 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 120 |
| 47 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 120 |
| 48 | Di chuyển hướng 4 (`4`) | (4, 30) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 120 |
| 49 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 120 |
| 50-63 | Chờ 14 bước (`-14`) | (3, 31) | (3, 31) | Dự kiến đứng yên tại (3, 31); mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (29, 24) (ô=797)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=1, tọa độ=(21, 15))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=1, tọa độ=(21, 15))
- Mảng hành động đã gửi server: `[4, 5, 0, 0, 5, 5, 0, 0, 0, 1, 0, 0, 5, 0, 0, -43]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (29, 24) | (29, 25) | Dự kiến đến điểm hẹn tọa độ (29, 25) | 120 |
| 2 | Di chuyển hướng 5 (`5`) | (29, 25) | (28, 25) | Dự kiến đến điểm hẹn tọa độ (28, 25) | 120 |
| 3 | Di chuyển hướng 0 (`0`) | (28, 25) | (27, 24) | Dự kiến đến điểm hẹn tọa độ (27, 24) | 120 |
| 4 | Di chuyển hướng 0 (`0`) | (27, 24) | (27, 23) | Dự kiến đến điểm hẹn tọa độ (27, 23) | 120 |
| 5 | Di chuyển hướng 5 (`5`) | (27, 23) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 120 |
| 6 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 120 |
| 7 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 120 |
| 8 | Di chuyển hướng 0 (`0`) | (24, 22) | (24, 21) | Dự kiến đến điểm hẹn tọa độ (24, 21) | 120 |
| 9 | Di chuyển hướng 0 (`0`) | (24, 21) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 120 |
| 10 | Di chuyển hướng 1 (`1`) | (23, 20) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 120 |
| 11 | Di chuyển hướng 0 (`0`) | (24, 19) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 120 |
| 12 | Di chuyển hướng 0 (`0`) | (23, 18) | (23, 17) | Dự kiến đến điểm hẹn tọa độ (23, 17) | 120 |
| 13-14 | Di chuyển hướng 5 (`5`) | (23, 17) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 120 |
| 15-17 | Di chuyển hướng 0 (`0`) | (22, 17) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 120 |
| 18-20 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |
| 21-63 | Chờ 43 bước (`-43`) | (21, 15) | (21, 15) | Dự kiến đứng yên tại (21, 15); mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 120 |

