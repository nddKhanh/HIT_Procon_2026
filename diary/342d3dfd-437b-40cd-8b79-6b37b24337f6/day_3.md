# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 88
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #3 | #6 | (21, 7) | 5 | 120 |
| 20 | #3 | #6 | (17, 6) | 113 | 120 |
| 55 | #3 | #6 | (15, 12) | 78 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (26, 18) (ô=602)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=11, tọa độ=(26, 16))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=11, tọa độ=(26, 16))
- Mảng hành động đã gửi server: `[0, 1, -83]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (26, 18) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 5 |
| 2-4 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 3 |
| 5-87 | Chờ 83 bước (`-83`) | (26, 16) | (26, 16) | Dự kiến đứng yên tại (26, 16); mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 9) (ô=290)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #26 (thương hiệu=18, tọa độ=(30, 29))
- Địa điểm đích kế hoạch: Spot #26 (thương hiệu=18, tọa độ=(30, 29))
- Mảng hành động đã gửi server: `[3, 2, 3, 3, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 3, 2, 3, 3, 2, 3, 3, 3, 3, 3, 4, 4, 5, 2, 3, 3, 2, 2, 2, 1, 1, 2, 2, 2, 3, 2, 2, 2, 1, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 78 |
| 1 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 76 |
| 2 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 74 |
| 3 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 72 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 70 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 69 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 68 |
| 9 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 66 |
| 10 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 64 |
| 11-12 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 63 |
| 13-14 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 62 |
| 15 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 60 |
| 16 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 58 |
| 17 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 56 |
| 18 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 54 |
| 19 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 52 |
| 20 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 50 |
| 21 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 48 |
| 22-23 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 47 |
| 24-25 | Di chuyển hướng 3 (`3`) | (15, 21) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 46 |
| 26-27 | Di chuyển hướng 2 (`2`) | (15, 22) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 45 |
| 28-29 | Di chuyển hướng 3 (`3`) | (16, 22) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 44 |
| 30-31 | Di chuyển hướng 3 (`3`) | (17, 23) | (17, 24) | Dự kiến đến điểm hẹn tọa độ (17, 24) | 43 |
| 32-33 | Di chuyển hướng 3 (`3`) | (17, 24) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 42 |
| 34-36 | Di chuyển hướng 3 (`3`) | (18, 25) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 40 |
| 37 | Di chuyển hướng 3 (`3`) | (18, 26) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 38 |
| 38 | Di chuyển hướng 4 (`4`) | (19, 27) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 36 |
| 39 | Di chuyển hướng 4 (`4`) | (18, 28) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 34 |
| 40 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 32 |
| 41-42 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 31 |
| 43 | Di chuyển hướng 3 (`3`) | (18, 29) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 29 |
| 44-46 | Di chuyển hướng 3 (`3`) | (18, 30) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 27 |
| 47-49 | Di chuyển hướng 2 (`2`) | (19, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 25 |
| 50-52 | Di chuyển hướng 2 (`2`) | (20, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 23 |
| 53-55 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 21 |
| 56-57 | Di chuyển hướng 1 (`1`) | (22, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 20 |
| 58 | Di chuyển hướng 1 (`1`) | (22, 30) | (23, 29) | Dự kiến đến điểm hẹn tọa độ (23, 29) | 18 |
| 59-60 | Di chuyển hướng 2 (`2`) | (23, 29) | (24, 29) | Dự kiến đến điểm hẹn tọa độ (24, 29) | 17 |
| 61-62 | Di chuyển hướng 2 (`2`) | (24, 29) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 16 |
| 63-64 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 15 |
| 65 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 13 |
| 66 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 11 |
| 67-68 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 10 |
| 69-70 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 9 |
| 71-73 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 7 |
| 74-87 | Chờ 14 bước (`-14`) | (30, 29) | (30, 29) | Dự kiến đứng yên tại (30, 29); mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 7 |

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

- Vị trí đầu ngày: (21, 7) (ô=245)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=11, tọa độ=(26, 16))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=11, tọa độ=(26, 16))
- Mảng hành động đã gửi server: `[-15, 5, 0, 5, 5, 0, 0, 5, 5, 5, 0, 0, 1, 1, 4, 4, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 2, 2, 3, 2, 3, 3, 3, 4, 3, 3, 2, 3, 3, 2, 1, 0, 3, 3, 3, 1, 2, 2, 2, 1, 1, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-14 | Chờ 15 bước (`-15`) | (21, 7) | (21, 7) | Dự kiến đứng yên tại (21, 7); mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 120 |
| 15-16 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 119 |
| 17 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 117 |
| 18 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 115 |
| 19 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 120 |
| 20-21 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 119 |
| 22-23 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 118 |
| 24-25 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 117 |
| 26 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 115 |
| 27-28 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 114 |
| 29 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 112 |
| 30 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 110 |
| 31 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 108 |
| 32 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 106 |
| 33-34 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 105 |
| 35 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 103 |
| 36 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 101 |
| 37 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 99 |
| 38 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 97 |
| 39 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 95 |
| 40 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 93 |
| 41 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 91 |
| 42 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 89 |
| 43-45 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 87 |
| 46-47 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 86 |
| 48 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 84 |
| 49-50 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 83 |
| 51 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 81 |
| 52 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 79 |
| 53-54 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 55 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 118 |
| 56 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 116 |
| 57 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 114 |
| 58 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 112 |
| 59 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 110 |
| 60 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 108 |
| 61 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 106 |
| 62 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 104 |
| 63 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 102 |
| 64 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 100 |
| 65 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 98 |
| 66 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 96 |
| 67-68 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 95 |
| 69 | Di chuyển hướng 3 (`3`) | (21, 19) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 93 |
| 70-72 | Di chuyển hướng 3 (`3`) | (21, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 91 |
| 73-74 | Di chuyển hướng 1 (`1`) | (22, 21) | (22, 20) | Dự kiến đến điểm hẹn tọa độ (22, 20) | 90 |
| 75-77 | Di chuyển hướng 2 (`2`) | (22, 20) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 88 |
| 78 | Di chuyển hướng 2 (`2`) | (23, 20) | (24, 20) | Dự kiến đến điểm hẹn tọa độ (24, 20) | 86 |
| 79-80 | Di chuyển hướng 2 (`2`) | (24, 20) | (25, 20) | Dự kiến đến điểm hẹn tọa độ (25, 20) | 85 |
| 81 | Di chuyển hướng 1 (`1`) | (25, 20) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 83 |
| 82 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 81 |
| 83-84 | Di chuyển hướng 0 (`0`) | (26, 18) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 80 |
| 85-87 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 78 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 27) (ô=879)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=11, tọa độ=(3, 31))
- Mảng hành động đã gửi server: `[4, 5, 5, 0, 5, 5, 0, 5, 5, 5, 5, 4, 4, 3, 4, 3, 5, 5, -56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 35 |
| 3-4 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 34 |
| 5 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 32 |
| 6 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 30 |
| 7 | Di chuyển hướng 5 (`5`) | (12, 27) | (11, 27) | Dự kiến đến điểm hẹn tọa độ (11, 27) | 28 |
| 8-9 | Di chuyển hướng 5 (`5`) | (11, 27) | (10, 27) | Dự kiến đến điểm hẹn tọa độ (10, 27) | 27 |
| 10-11 | Di chuyển hướng 0 (`0`) | (10, 27) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 26 |
| 12-13 | Di chuyển hướng 5 (`5`) | (9, 26) | (8, 26) | Dự kiến đến điểm hẹn tọa độ (8, 26) | 25 |
| 14-16 | Di chuyển hướng 5 (`5`) | (8, 26) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 23 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 21 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 26) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 20 |
| 20-22 | Di chuyển hướng 4 (`4`) | (5, 26) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 18 |
| 23-25 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 16 |
| 26 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 14 |
| 27 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 12 |
| 28 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 10 |
| 29-30 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 9 |
| 31 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 7 |
| 32-87 | Chờ 56 bước (`-56`) | (3, 31) | (3, 31) | Dự kiến đứng yên tại (3, 31); mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 7 |

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

- Vị trí đầu ngày: (15, 5) (ô=175)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 12)
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 3, 2, 5, 0, 5, 5, 5, 5, 4, 4, 3, 4, 4, 3, 2, -53]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (15, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 120 |
| 4-5 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 120 |
| 6-8 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 120 |
| 9-10 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 120 |
| 11 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 120 |
| 12 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 120 |
| 13 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 120 |
| 14-15 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 120 |
| 16 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 120 |
| 17 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 120 |
| 18 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 120 |
| 19-20 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 120 |
| 21-23 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 120 |
| 24-25 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 120 |
| 26 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 120 |
| 27 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 120 |
| 28 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 120 |
| 29-31 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 120 |
| 32 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 120 |
| 33-34 | Di chuyển hướng 2 (`2`) | (14, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 35-87 | Chờ 53 bước (`-53`) | (15, 12) | (15, 12) | Dự kiến đứng yên tại (15, 12); hướng tới tọa độ (15, 12) | 120 |

