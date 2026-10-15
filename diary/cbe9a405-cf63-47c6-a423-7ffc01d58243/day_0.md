# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #3 | #5 | (26, 16) | 102 | 120 |
| 31 | #4 | #6 | (15, 11) | 64 | 120 |
| 36 | #0 | #6 | (15, 11) | 88 | 120 |
| 61 | #4 | #5 | (26, 16) | 80 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 6) (ô=213)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 24)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 24)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 0, 3, 3, 2, 2, 3, 2, 5, 4, 4, 5, 5, 5, 4, 4, 5, 5, 5, 4, 4, 4, 4, 4, 5, 2, 3, 3, 3, 2, 2, 3, 2, 3, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 119 |
| 2-4 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 117 |
| 5 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 115 |
| 6 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 113 |
| 7-8 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 112 |
| 9-10 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 111 |
| 11-12 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 110 |
| 13-14 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 109 |
| 15-16 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 108 |
| 17 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 106 |
| 18 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 104 |
| 19 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 102 |
| 20-21 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 101 |
| 22 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 99 |
| 23-24 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 98 |
| 25 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 96 |
| 26-28 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 94 |
| 29-31 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 92 |
| 32-34 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 90 |
| 35 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 36 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 118 |
| 37 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 116 |
| 38 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 114 |
| 39-40 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 113 |
| 41-42 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 112 |
| 43 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 110 |
| 44 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 108 |
| 45 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 106 |
| 46 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 104 |
| 47-48 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 103 |
| 49 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 101 |
| 50 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 99 |
| 51 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 97 |
| 52 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 95 |
| 53 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 93 |
| 54 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 91 |
| 55 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 89 |
| 56-57 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 88 |
| 58-59 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 87 |
| 60-61 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 86 |
| 62-63 | Di chuyển hướng 4 (`4`) | (14, 23) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 85 |

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
| 60-62 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 53 |
| 63 | Chờ 1 bước (`-1`) | (21, 11) | (21, 11) | Dự kiến đứng yên tại (21, 11); mục tiêu Spot #2 (thương hiệu=1, tọa độ=(21, 11)) | 53 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=295)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 29)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 29)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 0, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 5, 0, 5, 5, 4, 4, 4, 4, 3, 4, 3, 3, 4, 3, 3, 4, 4, 4, 3, 3, 4, 3, 4, 1, 2, 2, -1]`

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
| 29-30 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 73 |
| 31 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 71 |
| 32 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 69 |
| 33-35 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 67 |
| 36 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 65 |
| 37 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 63 |
| 38 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 61 |
| 39 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến đến điểm hẹn tọa độ (0, 15) | 59 |
| 40 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 57 |
| 41 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 55 |
| 42-43 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 54 |
| 44-45 | Di chuyển hướng 3 (`3`) | (0, 18) | (1, 19) | Dự kiến đến điểm hẹn tọa độ (1, 19) | 53 |
| 46 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 51 |
| 47 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 49 |
| 48 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến đến điểm hẹn tọa độ (1, 22) | 47 |
| 49 | Di chuyển hướng 4 (`4`) | (1, 22) | (1, 23) | Dự kiến đến điểm hẹn tọa độ (1, 23) | 45 |
| 50 | Di chuyển hướng 4 (`4`) | (1, 23) | (0, 24) | Dự kiến đến điểm hẹn tọa độ (0, 24) | 43 |
| 51 | Di chuyển hướng 4 (`4`) | (0, 24) | (0, 25) | Dự kiến đến điểm hẹn tọa độ (0, 25) | 41 |
| 52 | Di chuyển hướng 3 (`3`) | (0, 25) | (0, 26) | Dự kiến đến điểm hẹn tọa độ (0, 26) | 39 |
| 53 | Di chuyển hướng 3 (`3`) | (0, 26) | (1, 27) | Dự kiến đến điểm hẹn tọa độ (1, 27) | 37 |
| 54 | Di chuyển hướng 4 (`4`) | (1, 27) | (0, 28) | Dự kiến đến điểm hẹn tọa độ (0, 28) | 35 |
| 55 | Di chuyển hướng 3 (`3`) | (0, 28) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 33 |
| 56 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 31 |
| 57-58 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 30 |
| 59 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 28 |
| 60-62 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 26 |
| 63 | Chờ 1 bước (`-1`) | (3, 29) | (3, 29) | Dự kiến đứng yên tại (3, 29); hướng tới tọa độ (3, 29) | 26 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (30, 10) (ô=350)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 31)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 31)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 4, 4, 4, 2, 3, 3, 2, 2, 3, 3, 3, 2, 3, 4, 3, 4, 4, 4, 3, 3, 4, 4, 4, 5, 5, 5, 0, 5, 5, 5, 4, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (30, 10) | (30, 11) | Dự kiến đến điểm hẹn tọa độ (30, 11) | 119 |
| 2-4 | Di chuyển hướng 5 (`5`) | (30, 11) | (29, 11) | Dự kiến đến điểm hẹn tọa độ (29, 11) | 117 |
| 5-7 | Di chuyển hướng 5 (`5`) | (29, 11) | (28, 11) | Dự kiến đến điểm hẹn tọa độ (28, 11) | 115 |
| 8-9 | Di chuyển hướng 5 (`5`) | (28, 11) | (27, 11) | Dự kiến đến điểm hẹn tọa độ (27, 11) | 114 |
| 10 | Di chuyển hướng 5 (`5`) | (27, 11) | (26, 11) | Dự kiến đến điểm hẹn tọa độ (26, 11) | 112 |
| 11-13 | Di chuyển hướng 4 (`4`) | (26, 11) | (25, 12) | Dự kiến đến điểm hẹn tọa độ (25, 12) | 110 |
| 14-15 | Di chuyển hướng 4 (`4`) | (25, 12) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 109 |
| 16-17 | Di chuyển hướng 4 (`4`) | (25, 13) | (24, 14) | Dự kiến đến điểm hẹn tọa độ (24, 14) | 108 |
| 18 | Di chuyển hướng 2 (`2`) | (24, 14) | (25, 14) | Dự kiến đến điểm hẹn tọa độ (25, 14) | 106 |
| 19 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến đến điểm hẹn tọa độ (26, 15) | 104 |
| 20 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 120 |
| 21-22 | Di chuyển hướng 2 (`2`) | (26, 16) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 119 |
| 23-24 | Di chuyển hướng 2 (`2`) | (27, 16) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 118 |
| 25 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 116 |
| 26 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 114 |
| 27 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 112 |
| 28 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 110 |
| 29 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 108 |
| 30 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 106 |
| 31-32 | Di chuyển hướng 3 (`3`) | (31, 21) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 105 |
| 33-34 | Di chuyển hướng 4 (`4`) | (31, 22) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 104 |
| 35-37 | Di chuyển hướng 4 (`4`) | (31, 23) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 102 |
| 38-39 | Di chuyển hướng 4 (`4`) | (30, 24) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 101 |
| 40 | Di chuyển hướng 3 (`3`) | (30, 25) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 99 |
| 41 | Di chuyển hướng 3 (`3`) | (30, 26) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 97 |
| 42 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 95 |
| 43 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 93 |
| 44-45 | Di chuyển hướng 4 (`4`) | (30, 29) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 92 |
| 46-48 | Di chuyển hướng 5 (`5`) | (29, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 90 |
| 49-50 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 89 |
| 51-52 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 88 |
| 53 | Di chuyển hướng 0 (`0`) | (26, 30) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 86 |
| 54 | Di chuyển hướng 5 (`5`) | (26, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 84 |
| 55-56 | Di chuyển hướng 5 (`5`) | (25, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 83 |
| 57-58 | Di chuyển hướng 5 (`5`) | (24, 29) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 82 |
| 59-60 | Di chuyển hướng 4 (`4`) | (23, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 81 |
| 61 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 79 |
| 62-63 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 78 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 17) (ô=562)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(26, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(26, 17)
- Mảng hành động đã gửi server: `[5, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 4, 4, 3, 3, 3, 3, 3, 4, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 2, 3, 3, 2, 1, 0, 3, 2, 2, 2, 2, 2, 1, 0, 1, 4, -1]`

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
| 8 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 105 |
| 9 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 103 |
| 10 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 101 |
| 11 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 99 |
| 12 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 97 |
| 13 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 95 |
| 14 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 93 |
| 15 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 91 |
| 16 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 89 |
| 17 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 87 |
| 18 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 85 |
| 19-20 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 84 |
| 21 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 82 |
| 22 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 80 |
| 23 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 78 |
| 24 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 76 |
| 25 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 74 |
| 26 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 72 |
| 27 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 70 |
| 28 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 68 |
| 29 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 66 |
| 30 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 31 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 118 |
| 32 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 116 |
| 33 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 114 |
| 34 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 112 |
| 35 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 110 |
| 36 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 108 |
| 37 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 106 |
| 38 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 104 |
| 39 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 102 |
| 40 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 100 |
| 41 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 98 |
| 42 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 96 |
| 43 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 94 |
| 44-45 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 93 |
| 46 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 91 |
| 47-48 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 90 |
| 49-50 | Di chuyển hướng 2 (`2`) | (23, 19) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 89 |
| 51 | Di chuyển hướng 2 (`2`) | (24, 19) | (25, 19) | Dự kiến đến điểm hẹn tọa độ (25, 19) | 87 |
| 52-54 | Di chuyển hướng 2 (`2`) | (25, 19) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 85 |
| 55 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 83 |
| 56-57 | Di chuyển hướng 0 (`0`) | (26, 18) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 82 |
| 58-60 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 120 |
| 61-62 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 119 |
| 63 | Chờ 1 bước (`-1`) | (26, 17) | (26, 17) | Dự kiến đứng yên tại (26, 17); hướng tới tọa độ (26, 17) | 119 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (26, 22) (ô=730)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=11, tọa độ=(26, 16))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=11, tọa độ=(26, 16))
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 1, 1, -51]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (26, 22) | (27, 21) | Dự kiến đến điểm hẹn tọa độ (27, 21) | 120 |
| 2-4 | Di chuyển hướng 0 (`0`) | (27, 21) | (26, 20) | Dự kiến đến điểm hẹn tọa độ (26, 20) | 120 |
| 5-6 | Di chuyển hướng 0 (`0`) | (26, 20) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 120 |
| 7 | Di chuyển hướng 0 (`0`) | (26, 19) | (25, 18) | Dự kiến đến điểm hẹn tọa độ (25, 18) | 120 |
| 8-9 | Di chuyển hướng 1 (`1`) | (25, 18) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 120 |
| 10-12 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 120 |
| 13-63 | Chờ 51 bước (`-51`) | (26, 16) | (26, 16) | Dự kiến đứng yên tại (26, 16); mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (29, 24) (ô=797)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 11)
- Mảng hành động đã gửi server: `[4, 5, 0, 0, 5, 5, 0, 5, 5, 5, 5, 0, 0, 0, 0, 5, 0, 0, 1, 0, 0, 0, 0, -38]`

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
| 8 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 120 |
| 9-10 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 120 |
| 11-12 | Di chuyển hướng 5 (`5`) | (22, 22) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 120 |
| 13 | Di chuyển hướng 5 (`5`) | (21, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 120 |
| 14 | Di chuyển hướng 0 (`0`) | (20, 22) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 120 |
| 15 | Di chuyển hướng 0 (`0`) | (20, 21) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 120 |
| 16 | Di chuyển hướng 0 (`0`) | (19, 20) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 120 |
| 17 | Di chuyển hướng 0 (`0`) | (19, 19) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 120 |
| 18 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 120 |
| 19 | Di chuyển hướng 0 (`0`) | (17, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 120 |
| 20 | Di chuyển hướng 0 (`0`) | (17, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 21 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 22 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 120 |
| 23 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 120 |
| 24 | Di chuyển hướng 0 (`0`) | (16, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 25 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 26-63 | Chờ 38 bước (`-38`) | (15, 11) | (15, 11) | Dự kiến đứng yên tại (15, 11); hướng tới tọa độ (15, 11) | 120 |

