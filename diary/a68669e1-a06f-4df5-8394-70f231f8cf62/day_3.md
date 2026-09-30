# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 208
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 16 | #0 | #5 | (8, 23) | 3 | 64 |
| 19 | #1 | #4 | (25, 9) | 2 | 64 |
| 33 | #3 | #5 | (21, 24) | 2 | 64 |
| 35 | #0 | #5 | (21, 24) | 35 | 64 |
| 36 | #1 | #4 | (25, 2) | 45 | 64 |
| 37 | #0 | #5 | (22, 23) | 63 | 64 |
| 43 | #3 | #5 | (18, 20) | 55 | 64 |
| 44 | #3 | #5 | (18, 19) | 62 | 64 |
| 45 | #3 | #5 | (17, 18) | 62 | 64 |
| 46 | #3 | #5 | (16, 18) | 62 | 64 |
| 47 | #3 | #5 | (15, 18) | 62 | 64 |
| 48 | #3 | #5 | (15, 17) | 62 | 64 |
| 50 | #3 | #5 | (14, 16) | 63 | 64 |
| 51 | #3 | #5 | (14, 15) | 62 | 64 |
| 52 | #3 | #5 | (13, 14) | 62 | 64 |
| 53 | #3 | #5 | (13, 13) | 62 | 64 |
| 89 | #1 | #5 | (13, 13) | 0 | 64 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 27) (ô=875)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(29, 19))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(29, 19))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 0, -9, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 0, 0, 0, -154]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 27) | (10, 26) | Dự kiến đến điểm hẹn tọa độ (10, 26) | 9 |
| 2 | Di chuyển hướng 5 (`5`) | (10, 26) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 7 |
| 3 | Di chuyển hướng 0 (`0`) | (9, 26) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 5 |
| 4-5 | Di chuyển hướng 0 (`0`) | (9, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 4 |
| 6-7 | Di chuyển hướng 0 (`0`) | (8, 24) | (8, 23) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 3 |
| 8-16 | Chờ 9 bước (`-9`) | (8, 23) | (8, 23) | Dự kiến đứng yên tại (8, 23); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 64 |
| 17-18 | Di chuyển hướng 1 (`1`) | (8, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 63 |
| 19 | Di chuyển hướng 2 (`2`) | (8, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 61 |
| 20 | Di chuyển hướng 2 (`2`) | (9, 22) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 59 |
| 21 | Di chuyển hướng 2 (`2`) | (10, 22) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 57 |
| 22 | Di chuyển hướng 2 (`2`) | (11, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 55 |
| 23 | Di chuyển hướng 2 (`2`) | (12, 22) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 53 |
| 24 | Di chuyển hướng 2 (`2`) | (13, 22) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 51 |
| 25 | Di chuyển hướng 2 (`2`) | (14, 22) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 49 |
| 26 | Di chuyển hướng 2 (`2`) | (15, 22) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 47 |
| 27 | Di chuyển hướng 2 (`2`) | (16, 22) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 45 |
| 28 | Di chuyển hướng 2 (`2`) | (17, 22) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 43 |
| 29 | Di chuyển hướng 2 (`2`) | (18, 22) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 41 |
| 30 | Di chuyển hướng 2 (`2`) | (19, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 39 |
| 31 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 37 |
| 32-34 | Di chuyển hướng 3 (`3`) | (21, 23) | (21, 24) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 24)) | 64 |
| 35-36 | Di chuyển hướng 1 (`1`) | (21, 24) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 64 |
| 37 | Di chuyển hướng 1 (`1`) | (22, 23) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 62 |
| 38 | Di chuyển hướng 2 (`2`) | (22, 22) | (23, 22) | Dự kiến đến điểm hẹn tọa độ (23, 22) | 60 |
| 39 | Di chuyển hướng 2 (`2`) | (23, 22) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 58 |
| 40 | Di chuyển hướng 2 (`2`) | (24, 22) | (25, 22) | Dự kiến đến điểm hẹn tọa độ (25, 22) | 56 |
| 41 | Di chuyển hướng 2 (`2`) | (25, 22) | (26, 22) | Dự kiến đến điểm hẹn tọa độ (26, 22) | 54 |
| 42 | Di chuyển hướng 2 (`2`) | (26, 22) | (27, 22) | Dự kiến đến điểm hẹn tọa độ (27, 22) | 52 |
| 43 | Di chuyển hướng 2 (`2`) | (27, 22) | (28, 22) | Dự kiến đến điểm hẹn tọa độ (28, 22) | 50 |
| 44 | Di chuyển hướng 2 (`2`) | (28, 22) | (29, 22) | Dự kiến đến điểm hẹn tọa độ (29, 22) | 48 |
| 45 | Di chuyển hướng 2 (`2`) | (29, 22) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 46 |
| 46 | Di chuyển hướng 3 (`3`) | (30, 22) | (31, 23) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(31, 23)) | 44 |
| 47-48 | Di chuyển hướng 0 (`0`) | (31, 23) | (30, 22) | Dự kiến đến điểm hẹn tọa độ (30, 22) | 43 |
| 49 | Di chuyển hướng 0 (`0`) | (30, 22) | (30, 21) | Dự kiến đến điểm hẹn tọa độ (30, 21) | 41 |
| 50 | Di chuyển hướng 0 (`0`) | (30, 21) | (29, 20) | Dự kiến đến điểm hẹn tọa độ (29, 20) | 39 |
| 51-53 | Di chuyển hướng 0 (`0`) | (29, 20) | (29, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(29, 19)) | 37 |
| 54-207 | Chờ 154 bước (`-154`) | (29, 19) | (29, 19) | Dự kiến đứng yên tại (29, 19); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(29, 19)) | 37 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (23, 1) (ô=55)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=0, tọa độ=(13, 13))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=0, tọa độ=(13, 13))
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 3, 3, 4, 3, 2, -4, 1, 1, 1, 0, 1, 1, 1, 1, 4, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 5, 5, 4, 4, 4, 4, 5, 4, 5, 0, 0, 5, 5, 4, 4, 3, 3, 3, 2, 2, 2, 3, 3, 1, 1, 0, -119]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (23, 1) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 16 |
| 2 | Di chuyển hướng 4 (`4`) | (22, 2) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 14 |
| 3 | Di chuyển hướng 3 (`3`) | (22, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 12 |
| 4 | Di chuyển hướng 3 (`3`) | (22, 4) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 10 |
| 5-7 | Di chuyển hướng 3 (`3`) | (23, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 8 |
| 8 | Di chuyển hướng 3 (`3`) | (23, 6) | (24, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(24, 7)) | 6 |
| 9-10 | Di chuyển hướng 4 (`4`) | (24, 7) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 5 |
| 11-12 | Di chuyển hướng 3 (`3`) | (23, 8) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 4 |
| 13-15 | Di chuyển hướng 2 (`2`) | (24, 9) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=3, tọa độ=(25, 9)) | 2 |
| 16-19 | Chờ 4 bước (`-4`) | (25, 9) | (25, 9) | Dự kiến đứng yên tại (25, 9); mục tiêu Spot #15 (thương hiệu=3, tọa độ=(25, 9)) | 64 |
| 20-21 | Di chuyển hướng 1 (`1`) | (25, 9) | (25, 8) | Dự kiến đến điểm hẹn tọa độ (25, 8) | 63 |
| 22-24 | Di chuyển hướng 1 (`1`) | (25, 8) | (26, 7) | Dự kiến đến điểm hẹn tọa độ (26, 7) | 61 |
| 25 | Di chuyển hướng 1 (`1`) | (26, 7) | (26, 6) | Dự kiến đến điểm hẹn tọa độ (26, 6) | 59 |
| 26 | Di chuyển hướng 0 (`0`) | (26, 6) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 57 |
| 27 | Di chuyển hướng 1 (`1`) | (26, 5) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 55 |
| 28 | Di chuyển hướng 1 (`1`) | (26, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 53 |
| 29-30 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 52 |
| 31 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(28, 1)) | 50 |
| 32-33 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 49 |
| 34 | Di chuyển hướng 5 (`5`) | (27, 2) | (26, 2) | Dự kiến đến điểm hẹn tọa độ (26, 2) | 47 |
| 35 | Di chuyển hướng 5 (`5`) | (26, 2) | (25, 2) | Dự kiến đến điểm hẹn tọa độ (25, 2) | 64 |
| 36 | Di chuyển hướng 5 (`5`) | (25, 2) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 62 |
| 37 | Di chuyển hướng 5 (`5`) | (24, 2) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 60 |
| 38 | Di chuyển hướng 5 (`5`) | (23, 2) | (22, 2) | Dự kiến đến điểm hẹn tọa độ (22, 2) | 58 |
| 39 | Di chuyển hướng 5 (`5`) | (22, 2) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 56 |
| 40 | Di chuyển hướng 5 (`5`) | (21, 2) | (20, 2) | Dự kiến đến điểm hẹn tọa độ (20, 2) | 54 |
| 41 | Di chuyển hướng 5 (`5`) | (20, 2) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 52 |
| 42 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 50 |
| 43-44 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 49 |
| 45 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 47 |
| 46 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 45 |
| 47 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 43 |
| 48 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 41 |
| 49 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 39 |
| 50-51 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 38 |
| 52 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 36 |
| 53 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 34 |
| 54 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 32 |
| 55 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 30 |
| 56-57 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 29 |
| 58-59 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 28 |
| 60 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 26 |
| 61 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 24 |
| 62-64 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 22 |
| 65-66 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 21 |
| 67-68 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 19 |
| 69-70 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 18 |
| 71-73 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 16 |
| 74-76 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 14 |
| 77 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 12 |
| 78 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 10 |
| 79 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 8 |
| 80 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 6 |
| 81-83 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 4 |
| 84-85 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 3 |
| 86-87 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 2 |
| 88 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 64 |
| 89-207 | Chờ 119 bước (`-119`) | (13, 13) | (13, 13) | Dự kiến đứng yên tại (13, 13); mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 64 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 27) (ô=875)
- Nhiên liệu đầu ngày: 39
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=2, tọa độ=(12, 17))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=2, tọa độ=(12, 17))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 5, 3, 3, 3, 3, 4, 4, -172]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (11, 27) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 38 |
| 2 | Di chuyển hướng 1 (`1`) | (11, 26) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 36 |
| 3-4 | Di chuyển hướng 1 (`1`) | (12, 25) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 35 |
| 5-6 | Di chuyển hướng 1 (`1`) | (12, 24) | (13, 23) | Dự kiến đến điểm hẹn tọa độ (13, 23) | 34 |
| 7-8 | Di chuyển hướng 1 (`1`) | (13, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 33 |
| 9 | Di chuyển hướng 1 (`1`) | (13, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 31 |
| 10 | Di chuyển hướng 1 (`1`) | (14, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 29 |
| 11 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 27 |
| 12 | Di chuyển hướng 1 (`1`) | (14, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 25 |
| 13 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 23 |
| 14 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 21 |
| 15 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 19 |
| 16 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 17 |
| 17 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 15 |
| 18-19 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 14 |
| 20-22 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 12 |
| 23-24 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 11 |
| 25-26 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 10 |
| 27-28 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 9 |
| 29-30 | Di chuyển hướng 3 (`3`) | (12, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 8 |
| 31 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 6 |
| 32-33 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 5 |
| 34-35 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 4 |
| 36-207 | Chờ 172 bước (`-172`) | (12, 17) | (12, 17) | Dự kiến đứng yên tại (12, 17); mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 4 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 24) (ô=789)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(8, 23))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(8, 23))
- Mảng hành động đã gửi server: `[-33, 0, 0, 5, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 5, 5, 4, 4, 0, 0, 0, 0, 1, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 0, 5, 0, 0, 0, -83]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-32 | Chờ 33 bước (`-33`) | (21, 24) | (21, 24) | Dự kiến đứng yên tại (21, 24); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 24)) | 64 |
| 33-34 | Di chuyển hướng 0 (`0`) | (21, 24) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 63 |
| 35-37 | Di chuyển hướng 0 (`0`) | (21, 23) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 61 |
| 38 | Di chuyển hướng 5 (`5`) | (20, 22) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 59 |
| 39 | Di chuyển hướng 0 (`0`) | (19, 22) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 57 |
| 40-42 | Di chuyển hướng 0 (`0`) | (19, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 64 |
| 43 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 64 |
| 44 | Di chuyển hướng 0 (`0`) | (18, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 64 |
| 45 | Di chuyển hướng 5 (`5`) | (17, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 64 |
| 46 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 64 |
| 47 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 64 |
| 48-49 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 64 |
| 50 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 64 |
| 51 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 64 |
| 52 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 64 |
| 53-54 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 63 |
| 55-57 | Di chuyển hướng 0 (`0`) | (12, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(12, 11)) | 61 |
| 58-59 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 60 |
| 60-61 | Di chuyển hướng 0 (`0`) | (11, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 59 |
| 62 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 57 |
| 63 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 55 |
| 64-66 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 53 |
| 67-68 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 52 |
| 69-70 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(7, 11)) | 50 |
| 71-72 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 49 |
| 73 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 47 |
| 74 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 45 |
| 75-77 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(5, 7)) | 43 |
| 78-79 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 42 |
| 80 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 40 |
| 81 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 38 |
| 82 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 36 |
| 83 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 34 |
| 84-85 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 33 |
| 86-87 | Di chuyển hướng 3 (`3`) | (9, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 32 |
| 88 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 30 |
| 89 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 11)) | 28 |
| 90-91 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 27 |
| 92-93 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 26 |
| 94-95 | Di chuyển hướng 3 (`3`) | (12, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 25 |
| 96 | Di chuyển hướng 3 (`3`) | (12, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 23 |
| 97-98 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=1, tọa độ=(12, 16)) | 22 |
| 99-100 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=2, tọa độ=(12, 17)) | 21 |
| 101-102 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 20 |
| 103 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 18 |
| 104-105 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 17 |
| 106-107 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 16 |
| 108 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 14 |
| 109 | Di chuyển hướng 4 (`4`) | (13, 22) | (13, 23) | Dự kiến đến điểm hẹn tọa độ (13, 23) | 12 |
| 110-111 | Di chuyển hướng 4 (`4`) | (13, 23) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 11 |
| 112-113 | Di chuyển hướng 4 (`4`) | (12, 24) | (12, 25) | Dự kiến đến điểm hẹn tọa độ (12, 25) | 10 |
| 114-115 | Di chuyển hướng 4 (`4`) | (12, 25) | (11, 26) | Dự kiến đến điểm hẹn tọa độ (11, 26) | 9 |
| 116 | Di chuyển hướng 4 (`4`) | (11, 26) | (11, 27) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 27)) | 7 |
| 117-118 | Di chuyển hướng 0 (`0`) | (11, 27) | (10, 26) | Dự kiến đến điểm hẹn tọa độ (10, 26) | 6 |
| 119 | Di chuyển hướng 5 (`5`) | (10, 26) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 4 |
| 120 | Di chuyển hướng 0 (`0`) | (9, 26) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 2 |
| 121-122 | Di chuyển hướng 0 (`0`) | (9, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 1 |
| 123-124 | Di chuyển hướng 0 (`0`) | (8, 24) | (8, 23) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 0 |
| 125-207 | Chờ 83 bước (`-83`) | (8, 23) | (8, 23) | Dự kiến đứng yên tại (8, 23); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 0 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (9, 10) (ô=329)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(25, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(25, 2)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 0, 0, 1, 1, 0, 0, -180]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 64 |
| 4 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 64 |
| 5 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 64 |
| 6 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 64 |
| 7 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 64 |
| 8 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 64 |
| 9 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 64 |
| 10 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 64 |
| 11 | Di chuyển hướng 2 (`2`) | (17, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 64 |
| 12 | Di chuyển hướng 2 (`2`) | (18, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 64 |
| 13 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 64 |
| 14 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 64 |
| 15 | Di chuyển hướng 2 (`2`) | (21, 10) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 64 |
| 16 | Di chuyển hướng 2 (`2`) | (22, 10) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 64 |
| 17 | Di chuyển hướng 2 (`2`) | (23, 10) | (24, 10) | Dự kiến đến điểm hẹn tọa độ (24, 10) | 64 |
| 18 | Di chuyển hướng 1 (`1`) | (24, 10) | (25, 9) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=3, tọa độ=(25, 9)) | 64 |
| 19-20 | Di chuyển hướng 2 (`2`) | (25, 9) | (26, 9) | Dự kiến đến điểm hẹn tọa độ (26, 9) | 64 |
| 21 | Di chuyển hướng 1 (`1`) | (26, 9) | (26, 8) | Dự kiến đến điểm hẹn tọa độ (26, 8) | 64 |
| 22 | Di chuyển hướng 0 (`0`) | (26, 8) | (26, 7) | Dự kiến đến điểm hẹn tọa độ (26, 7) | 64 |
| 23 | Di chuyển hướng 0 (`0`) | (26, 7) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 64 |
| 24 | Di chuyển hướng 1 (`1`) | (25, 6) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 64 |
| 25 | Di chuyển hướng 1 (`1`) | (26, 5) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 64 |
| 26 | Di chuyển hướng 0 (`0`) | (26, 4) | (26, 3) | Dự kiến đến điểm hẹn tọa độ (26, 3) | 64 |
| 27 | Di chuyển hướng 0 (`0`) | (26, 3) | (25, 2) | Dự kiến đến điểm hẹn tọa độ (25, 2) | 64 |
| 28-207 | Chờ 180 bước (`-180`) | (25, 2) | (25, 2) | Dự kiến đứng yên tại (25, 2); hướng tới tọa độ (25, 2) | 64 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (10, 11) (ô=362)
- Nhiên liệu đầu ngày: 64
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=0, tọa độ=(13, 13))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=0, tọa độ=(13, 13))
- Mảng hành động đã gửi server: `[3, 4, 3, 4, 3, 4, 4, 3, 3, 4, 4, 5, 4, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, -2, 1, 0, 5, 5, 5, 0, 1, 0, 0, 5, 5, 0, 0, 0, 0, 0, -155]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (10, 11) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 64 |
| 4 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 64 |
| 5 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 64 |
| 6 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 64 |
| 7 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 64 |
| 8 | Di chuyển hướng 4 (`4`) | (10, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 64 |
| 9 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 64 |
| 10 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 64 |
| 11 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 64 |
| 12 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 64 |
| 13 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 64 |
| 14 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 64 |
| 15 | Di chuyển hướng 4 (`4`) | (8, 22) | (8, 23) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 23)) | 64 |
| 16-17 | Di chuyển hướng 1 (`1`) | (8, 23) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 64 |
| 18 | Di chuyển hướng 2 (`2`) | (8, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 64 |
| 19 | Di chuyển hướng 2 (`2`) | (9, 22) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 64 |
| 20 | Di chuyển hướng 2 (`2`) | (10, 22) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 64 |
| 21 | Di chuyển hướng 2 (`2`) | (11, 22) | (12, 22) | Dự kiến đến điểm hẹn tọa độ (12, 22) | 64 |
| 22 | Di chuyển hướng 2 (`2`) | (12, 22) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 64 |
| 23 | Di chuyển hướng 2 (`2`) | (13, 22) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 64 |
| 24 | Di chuyển hướng 2 (`2`) | (14, 22) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 64 |
| 25 | Di chuyển hướng 2 (`2`) | (15, 22) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 64 |
| 26 | Di chuyển hướng 2 (`2`) | (16, 22) | (17, 22) | Dự kiến đến điểm hẹn tọa độ (17, 22) | 64 |
| 27 | Di chuyển hướng 2 (`2`) | (17, 22) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 64 |
| 28 | Di chuyển hướng 2 (`2`) | (18, 22) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 64 |
| 29 | Di chuyển hướng 2 (`2`) | (19, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 64 |
| 30 | Di chuyển hướng 2 (`2`) | (20, 22) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 64 |
| 31 | Di chuyển hướng 3 (`3`) | (21, 22) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 64 |
| 32 | Di chuyển hướng 4 (`4`) | (22, 23) | (21, 24) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 24)) | 64 |
| 33-34 | Chờ 2 bước (`-2`) | (21, 24) | (21, 24) | Dự kiến đứng yên tại (21, 24); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 24)) | 64 |
| 35-36 | Di chuyển hướng 1 (`1`) | (21, 24) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 64 |
| 37 | Di chuyển hướng 0 (`0`) | (22, 23) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 64 |
| 38 | Di chuyển hướng 5 (`5`) | (21, 22) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 64 |
| 39 | Di chuyển hướng 5 (`5`) | (20, 22) | (19, 22) | Dự kiến đến điểm hẹn tọa độ (19, 22) | 64 |
| 40 | Di chuyển hướng 5 (`5`) | (19, 22) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 64 |
| 41 | Di chuyển hướng 0 (`0`) | (18, 22) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 64 |
| 42 | Di chuyển hướng 1 (`1`) | (18, 21) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 64 |
| 43 | Di chuyển hướng 0 (`0`) | (18, 20) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 64 |
| 44 | Di chuyển hướng 0 (`0`) | (18, 19) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 64 |
| 45 | Di chuyển hướng 5 (`5`) | (17, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 64 |
| 46 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 64 |
| 47 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 64 |
| 48-49 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 64 |
| 50 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 64 |
| 51 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 64 |
| 52 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 64 |
| 53-207 | Chờ 155 bước (`-155`) | (13, 13) | (13, 13) | Dự kiến đứng yên tại (13, 13); mục tiêu Spot #12 (thương hiệu=0, tọa độ=(13, 13)) | 64 |

