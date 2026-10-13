# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 62 | #3 | #6 | (18, 25) | 52 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 6) (ô=213)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=3, tọa độ=(1, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=3, tọa độ=(1, 2))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 0, 5, 5, 5, 0, 0, 1, 1, 4, 4, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 0, 5, 0, 0, 0, 0, 0, 1, 1, 1]`

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
| 20-21 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 98 |
| 22 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 96 |
| 23 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 94 |
| 24 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 92 |
| 25 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 90 |
| 26 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 88 |
| 27 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 86 |
| 28 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 84 |
| 29 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 82 |
| 30-32 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 80 |
| 33-34 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 79 |
| 35 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 77 |
| 36-37 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 76 |
| 38-39 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 75 |
| 40-41 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 74 |
| 42-43 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 73 |
| 44-46 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 71 |
| 47 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 69 |
| 48-49 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 68 |
| 50-51 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 67 |
| 52 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 65 |
| 53 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 63 |
| 54 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 61 |
| 55 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 59 |
| 56 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 57 |
| 57 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 55 |
| 58 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 53 |
| 59 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 51 |
| 60 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 49 |
| 61 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 47 |
| 62-63 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 46 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (29, 7) (ô=253)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(30, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(30, 5)
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 0, 0, 0, 0, 5, 5, 5, 0, 3, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 5, 0, 1, 2, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (29, 7) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 119 |
| 2 | Di chuyển hướng 5 (`5`) | (28, 6) | (27, 6) | Dự kiến đến điểm hẹn tọa độ (27, 6) | 117 |
| 3 | Di chuyển hướng 0 (`0`) | (27, 6) | (27, 5) | Dự kiến đến điểm hẹn tọa độ (27, 5) | 115 |
| 4 | Di chuyển hướng 5 (`5`) | (27, 5) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 113 |
| 5 | Di chuyển hướng 0 (`0`) | (26, 5) | (25, 4) | Dự kiến đến điểm hẹn tọa độ (25, 4) | 111 |
| 6 | Di chuyển hướng 0 (`0`) | (25, 4) | (25, 3) | Dự kiến đến điểm hẹn tọa độ (25, 3) | 109 |
| 7 | Di chuyển hướng 0 (`0`) | (25, 3) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 107 |
| 8 | Di chuyển hướng 0 (`0`) | (24, 2) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 105 |
| 9-10 | Di chuyển hướng 5 (`5`) | (24, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 104 |
| 11-12 | Di chuyển hướng 5 (`5`) | (23, 1) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 103 |
| 13-15 | Di chuyển hướng 5 (`5`) | (22, 1) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 101 |
| 16-17 | Di chuyển hướng 0 (`0`) | (21, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 0)) | 100 |
| 18-19 | Di chuyển hướng 3 (`3`) | (20, 0) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 99 |
| 20-21 | Di chuyển hướng 2 (`2`) | (21, 1) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 98 |
| 22-24 | Di chuyển hướng 2 (`2`) | (22, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 96 |
| 25-26 | Di chuyển hướng 2 (`2`) | (23, 1) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 95 |
| 27-28 | Di chuyển hướng 2 (`2`) | (24, 1) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 94 |
| 29 | Di chuyển hướng 1 (`1`) | (25, 1) | (25, 0) | Dự kiến đến điểm hẹn tọa độ (25, 0) | 92 |
| 30 | Di chuyển hướng 2 (`2`) | (25, 0) | (26, 0) | Dự kiến đến điểm hẹn tọa độ (26, 0) | 90 |
| 31 | Di chuyển hướng 2 (`2`) | (26, 0) | (27, 0) | Dự kiến đến điểm hẹn tọa độ (27, 0) | 88 |
| 32 | Di chuyển hướng 2 (`2`) | (27, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 86 |
| 33 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 84 |
| 34 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 82 |
| 35 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 80 |
| 36-37 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 79 |
| 38 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 77 |
| 39 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 75 |
| 40 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 73 |
| 41-43 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 71 |
| 44-46 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 69 |
| 47-48 | Di chuyển hướng 3 (`3`) | (27, 3) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 68 |
| 49-50 | Di chuyển hướng 3 (`3`) | (27, 4) | (28, 5) | Dự kiến đến điểm hẹn tọa độ (28, 5) | 67 |
| 51-52 | Di chuyển hướng 3 (`3`) | (28, 5) | (28, 6) | Dự kiến đến điểm hẹn tọa độ (28, 6) | 66 |
| 53 | Di chuyển hướng 2 (`2`) | (28, 6) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 64 |
| 54 | Di chuyển hướng 2 (`2`) | (29, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 62 |
| 55 | Di chuyển hướng 2 (`2`) | (30, 6) | (31, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 60 |
| 56-57 | Di chuyển hướng 5 (`5`) | (31, 6) | (30, 6) | Dự kiến đến điểm hẹn tọa độ (30, 6) | 59 |
| 58 | Di chuyển hướng 0 (`0`) | (30, 6) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 57 |
| 59 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 55 |
| 60 | Di chuyển hướng 2 (`2`) | (30, 4) | (31, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=5, tọa độ=(31, 4)) | 53 |
| 61-62 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 52 |
| 63 | Di chuyển hướng 4 (`4`) | (30, 4) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 50 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 9) (ô=295)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 3, 4, 2, 3, 3, 3, 2, 2, 3, 2, 3, 4, 4, 4, 4, 3, 3, 3, 5, 5, 0, 0, 0, 5, 5, 0, 5, 0, 5, 5, 5, 4, 4, 3, 3, 3, 3, 4, 3, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 119 |
| 2 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 117 |
| 3 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 115 |
| 4 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 113 |
| 5 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 111 |
| 6-7 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 110 |
| 8-9 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 109 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 108 |
| 12 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 106 |
| 13 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 104 |
| 14 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 102 |
| 15 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 100 |
| 16 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 98 |
| 17 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 96 |
| 18 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 94 |
| 19-20 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 93 |
| 21-22 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 92 |
| 23-24 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 91 |
| 25-26 | Di chuyển hướng 4 (`4`) | (14, 23) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 90 |
| 27-29 | Di chuyển hướng 4 (`4`) | (13, 24) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 88 |
| 30-31 | Di chuyển hướng 3 (`3`) | (13, 25) | (13, 26) | Dự kiến đến điểm hẹn tọa độ (13, 26) | 87 |
| 32-33 | Di chuyển hướng 3 (`3`) | (13, 26) | (14, 27) | Dự kiến đến điểm hẹn tọa độ (14, 27) | 86 |
| 34-36 | Di chuyển hướng 3 (`3`) | (14, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 84 |
| 37-38 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 83 |
| 39 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 81 |
| 40 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 79 |
| 41 | Di chuyển hướng 0 (`0`) | (12, 27) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 77 |
| 42 | Di chuyển hướng 0 (`0`) | (11, 26) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 75 |
| 43 | Di chuyển hướng 5 (`5`) | (11, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 73 |
| 44 | Di chuyển hướng 5 (`5`) | (10, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 71 |
| 45 | Di chuyển hướng 0 (`0`) | (9, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 69 |
| 46 | Di chuyển hướng 5 (`5`) | (8, 24) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 67 |
| 47 | Di chuyển hướng 0 (`0`) | (7, 24) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 65 |
| 48 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 63 |
| 49 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 61 |
| 50-51 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 60 |
| 52 | Di chuyển hướng 4 (`4`) | (4, 23) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 58 |
| 53 | Di chuyển hướng 4 (`4`) | (3, 24) | (3, 25) | Dự kiến đến điểm hẹn tọa độ (3, 25) | 56 |
| 54 | Di chuyển hướng 3 (`3`) | (3, 25) | (3, 26) | Dự kiến đến điểm hẹn tọa độ (3, 26) | 54 |
| 55-56 | Di chuyển hướng 3 (`3`) | (3, 26) | (4, 27) | Dự kiến đến điểm hẹn tọa độ (4, 27) | 53 |
| 57 | Di chuyển hướng 3 (`3`) | (4, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 51 |
| 58 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 49 |
| 59 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 47 |
| 60 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 45 |
| 61-62 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 44 |
| 63 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 42 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (30, 10) (ô=350)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 25)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 0, 5, 0, 5, 5, 5, 4, 4, 4, 3, 4, 3, 3, 3, 4, 5, 3, 3, 3, 4, 4, 4, 4, 5, 4, 3, 4, 4, 5, 2, 1, 1, 0, 0, -1, -1]`

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
| 27 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 92 |
| 28-29 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 91 |
| 30-32 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 89 |
| 33-35 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 87 |
| 36-38 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 85 |
| 39-40 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 84 |
| 41 | Di chuyển hướng 3 (`3`) | (21, 19) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 82 |
| 42-44 | Di chuyển hướng 3 (`3`) | (21, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 80 |
| 45-46 | Di chuyển hướng 4 (`4`) | (22, 21) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 79 |
| 47 | Di chuyển hướng 4 (`4`) | (21, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 77 |
| 48 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 75 |
| 49 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 73 |
| 50 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 71 |
| 51 | Di chuyển hướng 4 (`4`) | (19, 25) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 69 |
| 52 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 67 |
| 53 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 65 |
| 54 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 63 |
| 55 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 61 |
| 56-57 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 60 |
| 58 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 58 |
| 59 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 56 |
| 60 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 54 |
| 61 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 120 |
| 62 | Chờ 1 bước (`-1`) | (18, 25) | (18, 25) | Dự kiến đứng yên tại (18, 25); hướng tới tọa độ (18, 25) | 120 |
| 63 | Chờ 1 bước (`-1`) | (18, 25) | (18, 25) | Dự kiến đứng yên tại (18, 25); hướng tới tọa độ (18, 25) | 120 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 17) (ô=562)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=3, tọa độ=(1, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=3, tọa độ=(1, 2))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 0, 1, 0, 0, 0, 0, 1, 1, 2, 5, 0, 5, 5, 0, 0, 5, 5, 5, 0, 0, 1, 1, 5, 5, 4, 4, 4, 4, 4, 5, 4, 5, 5, 0, 0, 5, 0, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (18, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 119 |
| 2-4 | Di chuyển hướng 1 (`1`) | (18, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 117 |
| 5-7 | Di chuyển hướng 2 (`2`) | (19, 15) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 115 |
| 8-10 | Di chuyển hướng 2 (`2`) | (20, 15) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 113 |
| 11-12 | Di chuyển hướng 0 (`0`) | (21, 15) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 112 |
| 13 | Di chuyển hướng 1 (`1`) | (20, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 110 |
| 14 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 108 |
| 15 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 106 |
| 16 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 104 |
| 17-18 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 103 |
| 19 | Di chuyển hướng 1 (`1`) | (19, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 101 |
| 20-21 | Di chuyển hướng 1 (`1`) | (19, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 100 |
| 22 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 98 |
| 23-24 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 97 |
| 25 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 95 |
| 26 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 93 |
| 27 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 91 |
| 28-29 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 90 |
| 30-31 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 89 |
| 32-33 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 88 |
| 34 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 86 |
| 35-36 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 85 |
| 37 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 83 |
| 38 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 81 |
| 39 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 79 |
| 40 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 77 |
| 41-42 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 76 |
| 43 | Di chuyển hướng 5 (`5`) | (12, 0) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 74 |
| 44 | Di chuyển hướng 4 (`4`) | (11, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 72 |
| 45 | Di chuyển hướng 4 (`4`) | (11, 1) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 70 |
| 46 | Di chuyển hướng 4 (`4`) | (10, 2) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 68 |
| 47 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 66 |
| 48 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 64 |
| 49 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 62 |
| 50 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=6, tọa độ=(7, 6)) | 60 |
| 51-52 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 59 |
| 53-55 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 57 |
| 56 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 55 |
| 57 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 53 |
| 58 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 51 |
| 59 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 49 |
| 60 | Di chuyển hướng 5 (`5`) | (3, 3) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 47 |
| 61-63 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 45 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (26, 22) (ô=730)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(30, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(30, 22)
- Mảng hành động đã gửi server: `[4, 5, 0, 5, 5, 0, 0, 0, 0, 3, 4, 4, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, 1, 1, 0, 0, 1, 1, 1, 0, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (26, 22) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 119 |
| 2 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đến điểm hẹn tọa độ (25, 23) | 117 |
| 3 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 115 |
| 4 | Di chuyển hướng 5 (`5`) | (24, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 113 |
| 5-6 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 112 |
| 7-8 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 111 |
| 9-10 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 110 |
| 11-13 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 108 |
| 14 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 106 |
| 15-16 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 105 |
| 17 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 103 |
| 18 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 101 |
| 19 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 99 |
| 20 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 97 |
| 21 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 95 |
| 22 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 93 |
| 23 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 91 |
| 24 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đến điểm hẹn tọa độ (21, 27) | 89 |
| 25 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 87 |
| 26 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 85 |
| 27 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 83 |
| 28 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 81 |
| 29-30 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 80 |
| 31 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 78 |
| 32-33 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 77 |
| 34-35 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 76 |
| 36-37 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 75 |
| 38 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 73 |
| 39 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 71 |
| 40-41 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 70 |
| 42-43 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 69 |
| 44-46 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 67 |
| 47-48 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 66 |
| 49 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 64 |
| 50 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 62 |
| 51 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 60 |
| 52 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 58 |
| 53-54 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 57 |
| 55-57 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 55 |
| 58-59 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 54 |
| 60-61 | Di chuyển hướng 4 (`4`) | (31, 21) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 53 |
| 62-63 | Chờ 2 bước (`-2`) | (30, 22) | (30, 22) | Dự kiến đứng yên tại (30, 22); hướng tới tọa độ (30, 22) | 53 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (29, 24) (ô=797)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 25)
- Mảng hành động đã gửi server: `[4, 5, 0, 0, 5, 5, 0, 5, 5, 5, 4, 4, 4, 5, 5, -46]`

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
| 13 | Di chuyển hướng 4 (`4`) | (21, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 120 |
| 14 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 120 |
| 15 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 120 |
| 16 | Di chuyển hướng 5 (`5`) | (20, 25) | (19, 25) | Dự kiến đến điểm hẹn tọa độ (19, 25) | 120 |
| 17 | Di chuyển hướng 5 (`5`) | (19, 25) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 120 |
| 18-63 | Chờ 46 bước (`-46`) | (18, 25) | (18, 25) | Dự kiến đứng yên tại (18, 25); hướng tới tọa độ (18, 25) | 120 |

