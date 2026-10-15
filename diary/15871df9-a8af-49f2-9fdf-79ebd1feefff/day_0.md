# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 33 | #2 | #5 | (7, 12) | 72 | 120 |
| 53 | #0 | #5 | (7, 12) | 48 | 120 |
| 55 | #3 | #6 | (21, 11) | 68 | 120 |
| 63 | #1 | #6 | (21, 11) | 53 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 6) (ô=213)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 0, 5, 5, 5, 0, 0, 1, 1, 5, 5, 5, 5, 4, 5, 0, 5, 5, 5, 5, 4, 5, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 119 |
| 2-4 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 117 |
| 5 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 115 |
| 6 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 113 |
| 7-8 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 112 |
| 9-10 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 111 |
| 11-12 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 110 |
| 13 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 108 |
| 14-15 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 107 |
| 16 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 105 |
| 17 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 103 |
| 18 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 101 |
| 19 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 99 |
| 20-21 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 98 |
| 22 | Di chuyển hướng 5 (`5`) | (12, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 96 |
| 23 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đến điểm hẹn tọa độ (10, 0) | 94 |
| 24 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 92 |
| 25 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 90 |
| 26 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 88 |
| 27 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 86 |
| 28 | Di chuyển hướng 5 (`5`) | (7, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 84 |
| 29 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 82 |
| 30 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 80 |
| 31 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 78 |
| 32 | Di chuyển hướng 4 (`4`) | (3, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 76 |
| 33 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 74 |
| 34 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 72 |
| 35-36 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 71 |
| 37-38 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 70 |
| 39 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 68 |
| 40 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 66 |
| 41 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 64 |
| 42 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 62 |
| 43 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 60 |
| 44 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 58 |
| 45 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 56 |
| 46 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 54 |
| 47 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 52 |
| 48 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 50 |
| 49-50 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 49 |
| 51-52 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 120 |
| 53 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 118 |
| 54-56 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 116 |
| 57-58 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 115 |
| 59-60 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 114 |
| 61-62 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 113 |
| 63 | Chờ 1 bước (`-1`) | (12, 11) | (12, 11) | Dự kiến đứng yên tại (12, 11); mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 113 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (29, 7) (ô=253)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=1, tọa độ=(21, 11))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=1, tọa độ=(21, 11))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 5, 0, 1, 2, 5, 4, 5, 5, 5, 5, 4, 4, 4, 5, 4, 5, 4, 4, -1]`

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
| 29-30 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 92 |
| 31-32 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 91 |
| 33-34 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 90 |
| 35 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 88 |
| 36 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 86 |
| 37 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 84 |
| 38-39 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 83 |
| 40 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 81 |
| 41 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 79 |
| 42 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 77 |
| 43-44 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 76 |
| 45 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 74 |
| 46 | Di chuyển hướng 5 (`5`) | (30, 5) | (29, 5) | Dự kiến đến điểm hẹn tọa độ (29, 5) | 72 |
| 47-48 | Di chuyển hướng 5 (`5`) | (29, 5) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 71 |
| 49-50 | Di chuyển hướng 5 (`5`) | (28, 5) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 70 |
| 51 | Di chuyển hướng 5 (`5`) | (27, 5) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 68 |
| 52 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 66 |
| 53 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 64 |
| 54 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 62 |
| 55 | Di chuyển hướng 5 (`5`) | (24, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 60 |
| 56 | Di chuyển hướng 4 (`4`) | (23, 8) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 58 |
| 57 | Di chuyển hướng 5 (`5`) | (23, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 56 |
| 58-59 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 55 |
| 60-62 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 120 |
| 63 | Chờ 1 bước (`-1`) | (21, 11) | (21, 11) | Dự kiến đứng yên tại (21, 11); mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 120 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=295)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 20)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 0, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 1, 0, 3, 4]`

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
| 25 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 80 |
| 26 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 78 |
| 27 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 76 |
| 28 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 74 |
| 29-30 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 73 |
| 31-32 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 120 |
| 33 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 118 |
| 34 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 116 |
| 35-36 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 115 |
| 37-38 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 114 |
| 39 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 112 |
| 40 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 110 |
| 41 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 108 |
| 42 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 106 |
| 43 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 104 |
| 44 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 102 |
| 45 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 100 |
| 46-47 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 99 |
| 48-49 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 98 |
| 50-51 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 97 |
| 52-54 | Di chuyển hướng 2 (`2`) | (17, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 95 |
| 55-57 | Di chuyển hướng 2 (`2`) | (18, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 93 |
| 58 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 91 |
| 59 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 89 |
| 60 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 87 |
| 61-62 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 86 |
| 63 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 84 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (30, 10) (ô=350)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=8, tọa độ=(21, 7))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=8, tọa độ=(21, 7))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 0, 5, 0, 5, 5, 5, 2, 3, 3, 3, 3, 3, 3, 3, 4, 3, 5, 5, 5, 0, 5, 0, 0, 0, 1, 0, 1, 5, 0, 0, 1, 1, 2]`

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
| 18-19 | Di chuyển hướng 2 (`2`) | (22, 9) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 101 |
| 20 | Di chuyển hướng 3 (`3`) | (23, 9) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 99 |
| 21 | Di chuyển hướng 3 (`3`) | (23, 10) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 97 |
| 22 | Di chuyển hướng 3 (`3`) | (24, 11) | (24, 12) | Dự kiến đến điểm hẹn tọa độ (24, 12) | 95 |
| 23-24 | Di chuyển hướng 3 (`3`) | (24, 12) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 94 |
| 25-26 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến đến điểm hẹn tọa độ (25, 14) | 93 |
| 27 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến đến điểm hẹn tọa độ (26, 15) | 91 |
| 28 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 89 |
| 29-30 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 88 |
| 31-33 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 86 |
| 34-35 | Di chuyển hướng 5 (`5`) | (26, 18) | (25, 18) | Dự kiến đến điểm hẹn tọa độ (25, 18) | 85 |
| 36-37 | Di chuyển hướng 5 (`5`) | (25, 18) | (24, 18) | Dự kiến đến điểm hẹn tọa độ (24, 18) | 84 |
| 38-40 | Di chuyển hướng 5 (`5`) | (24, 18) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 82 |
| 41 | Di chuyển hướng 0 (`0`) | (23, 18) | (23, 17) | Dự kiến đến điểm hẹn tọa độ (23, 17) | 80 |
| 42-43 | Di chuyển hướng 5 (`5`) | (23, 17) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 79 |
| 44-46 | Di chuyển hướng 0 (`0`) | (22, 17) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 77 |
| 47-49 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 75 |
| 50-51 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 74 |
| 52 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 72 |
| 53 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 70 |
| 54 | Di chuyển hướng 1 (`1`) | (20, 12) | (21, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 120 |
| 55-56 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 119 |
| 57 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 117 |
| 58-59 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 116 |
| 60 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 114 |
| 61-62 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 113 |
| 63 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 111 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 17) (ô=562)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(30, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(30, 22)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 4, 4, 5, 4, 3, 4, 4, 5, 2, 3, 3, 2, 2, 2, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, 1, 1, 0, 0, 1, 1, 1, 0, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 119 |
| 2 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 117 |
| 3 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 115 |
| 4 | Di chuyển hướng 3 (`3`) | (19, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 113 |
| 5 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 111 |
| 6 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 109 |
| 7 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 107 |
| 8 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 105 |
| 9 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 103 |
| 10 | Di chuyển hướng 4 (`4`) | (19, 25) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 101 |
| 11 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 99 |
| 12 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 97 |
| 13 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 95 |
| 14 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 93 |
| 15-16 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 92 |
| 17 | Di chuyển hướng 3 (`3`) | (18, 29) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 90 |
| 18-20 | Di chuyển hướng 3 (`3`) | (18, 30) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 88 |
| 21-23 | Di chuyển hướng 2 (`2`) | (19, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 86 |
| 24-26 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 84 |
| 27-29 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 82 |
| 30-31 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 81 |
| 32 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 79 |
| 33-34 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 78 |
| 35-36 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 77 |
| 37-38 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 76 |
| 39 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 74 |
| 40 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 72 |
| 41-42 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 71 |
| 43-44 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 70 |
| 45-47 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 68 |
| 48-49 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 67 |
| 50 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 65 |
| 51 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 63 |
| 52 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 61 |
| 53 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 59 |
| 54-55 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 58 |
| 56-58 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 56 |
| 59-60 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 55 |
| 61-62 | Di chuyển hướng 4 (`4`) | (31, 21) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 54 |
| 63 | Chờ 1 bước (`-1`) | (30, 22) | (30, 22) | Dự kiến đứng yên tại (30, 22); hướng tới tọa độ (30, 22) | 54 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (26, 22) (ô=730)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 12)
- Mảng hành động đã gửi server: `[4, 5, 0, 5, 5, 5, 5, 0, 0, 0, 0, 5, 0, 0, 1, 0, 0, 0, 0, 5, 5, 4, 4, 5, 4, 5, 0, 5, 0, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (26, 22) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 120 |
| 2 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 120 |
| 3 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 120 |
| 4 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 120 |
| 5-6 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 120 |
| 7-8 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 120 |
| 9 | Di chuyển hướng 5 (`5`) | (21, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 120 |
| 10 | Di chuyển hướng 0 (`0`) | (20, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 120 |
| 11 | Di chuyển hướng 0 (`0`) | (20, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 120 |
| 12 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 120 |
| 13 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 120 |
| 14 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 120 |
| 15 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 120 |
| 16 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 17 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 18 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 120 |
| 19 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 120 |
| 20 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 21 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 22 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 120 |
| 23 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 120 |
| 24 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 120 |
| 25 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 120 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 120 |
| 27 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 120 |
| 28 | Di chuyển hướng 5 (`5`) | (10, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 120 |
| 29 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 120 |
| 30 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 120 |
| 31 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 120 |
| 32-63 | Chờ 32 bước (`-32`) | (7, 12) | (7, 12) | Dự kiến đứng yên tại (7, 12); hướng tới tọa độ (7, 12) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (29, 24) (ô=797)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=1, tọa độ=(21, 11))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=1, tọa độ=(21, 11))
- Mảng hành động đã gửi server: `[4, 5, 0, 0, 5, 5, 0, 0, 0, 1, 0, 0, 5, 0, 0, 0, 1, 0, 1, -38]`

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
| 21-22 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 120 |
| 23 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 120 |
| 24 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 120 |
| 25 | Di chuyển hướng 1 (`1`) | (20, 12) | (21, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 120 |
| 26-63 | Chờ 38 bước (`-38`) | (21, 11) | (21, 11) | Dự kiến đứng yên tại (21, 11); mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 120 |

