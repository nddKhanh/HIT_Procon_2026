# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 64
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (7, 10) (ô=327)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 21)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 5, 4, 5, 4, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 3, 5, 5, 5, 5, 5, 4, 5, 5, 0, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 73 |
| 2-3 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 72 |
| 4-5 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 71 |
| 6 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 69 |
| 7-8 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 68 |
| 9-10 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 67 |
| 11 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 65 |
| 12 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 63 |
| 13 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 61 |
| 14-16 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 59 |
| 17-19 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 57 |
| 20-21 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 56 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(7, 17)) | 55 |
| 24-25 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 54 |
| 26-27 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 53 |
| 28-29 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 52 |
| 30-31 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 17)) | 51 |
| 32-33 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 50 |
| 34-35 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 49 |
| 36-37 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(14, 17)) | 48 |
| 38-39 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 47 |
| 40-41 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 19)) | 46 |
| 42-43 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 45 |
| 44-45 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 44 |
| 46-47 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 43 |
| 48-50 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 41 |
| 51-52 | Di chuyển hướng 5 (`5`) | (10, 19) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 40 |
| 53 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 20)) | 38 |
| 54-55 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 37 |
| 56-57 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 36 |
| 58-59 | Di chuyển hướng 0 (`0`) | (6, 20) | (6, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 19)) | 35 |
| 60-61 | Di chuyển hướng 3 (`3`) | (6, 19) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 34 |
| 62-63 | Di chuyển hướng 3 (`3`) | (6, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 33 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (23, 31) (ô=1015)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 20)
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 1, 2, 3, 3, 2, 3, 2, 2, 3, 3, 2, 1, 1, 1, 0, 1, 0, 0, 0, 5, 5, 5, 5, 0, 0, 5, 5, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (23, 31) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 73 |
| 2-3 | Di chuyển hướng 0 (`0`) | (22, 30) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 72 |
| 4-5 | Di chuyển hướng 0 (`0`) | (22, 29) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 71 |
| 6-7 | Di chuyển hướng 0 (`0`) | (21, 28) | (21, 27) | Dự kiến đến điểm hẹn tọa độ (21, 27) | 70 |
| 8-9 | Di chuyển hướng 1 (`1`) | (21, 27) | (21, 26) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(21, 26)) | 69 |
| 10-11 | Di chuyển hướng 2 (`2`) | (21, 26) | (22, 26) | Dự kiến đến điểm hẹn tọa độ (22, 26) | 68 |
| 12 | Di chuyển hướng 3 (`3`) | (22, 26) | (23, 27) | Dự kiến đến điểm hẹn tọa độ (23, 27) | 66 |
| 13-14 | Di chuyển hướng 3 (`3`) | (23, 27) | (23, 28) | Dự kiến đến điểm hẹn tọa độ (23, 28) | 65 |
| 15-16 | Di chuyển hướng 2 (`2`) | (23, 28) | (24, 28) | Dự kiến đến điểm hẹn tọa độ (24, 28) | 64 |
| 17 | Di chuyển hướng 3 (`3`) | (24, 28) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 62 |
| 18 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=30, tọa độ=(26, 29)) | 60 |
| 19-20 | Di chuyển hướng 2 (`2`) | (26, 29) | (27, 29) | Dự kiến đến điểm hẹn tọa độ (27, 29) | 59 |
| 21-22 | Di chuyển hướng 3 (`3`) | (27, 29) | (27, 30) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(27, 30)) | 58 |
| 23-24 | Di chuyển hướng 3 (`3`) | (27, 30) | (28, 31) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(28, 31)) | 57 |
| 25-26 | Di chuyển hướng 2 (`2`) | (28, 31) | (29, 31) | Dự kiến đến điểm hẹn tọa độ (29, 31) | 56 |
| 27-28 | Di chuyển hướng 1 (`1`) | (29, 31) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 55 |
| 29-31 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đến điểm hẹn tọa độ (30, 29) | 53 |
| 32 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=28, tọa độ=(30, 28)) | 51 |
| 33-34 | Di chuyển hướng 0 (`0`) | (30, 28) | (30, 27) | Dự kiến đến điểm hẹn tọa độ (30, 27) | 50 |
| 35-36 | Di chuyển hướng 1 (`1`) | (30, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 49 |
| 37-38 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 48 |
| 39-40 | Di chuyển hướng 0 (`0`) | (30, 25) | (29, 24) | Dự kiến đến điểm hẹn tọa độ (29, 24) | 47 |
| 41-42 | Di chuyển hướng 0 (`0`) | (29, 24) | (29, 23) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(29, 23)) | 46 |
| 43-44 | Di chuyển hướng 5 (`5`) | (29, 23) | (28, 23) | Dự kiến đến điểm hẹn tọa độ (28, 23) | 45 |
| 45-47 | Di chuyển hướng 5 (`5`) | (28, 23) | (27, 23) | Dự kiến đến điểm hẹn tọa độ (27, 23) | 43 |
| 48-49 | Di chuyển hướng 5 (`5`) | (27, 23) | (26, 23) | Dự kiến đến điểm hẹn tọa độ (26, 23) | 42 |
| 50-51 | Di chuyển hướng 5 (`5`) | (26, 23) | (25, 23) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(25, 23)) | 41 |
| 52-53 | Di chuyển hướng 0 (`0`) | (25, 23) | (24, 22) | Dự kiến đến điểm hẹn tọa độ (24, 22) | 40 |
| 54-55 | Di chuyển hướng 0 (`0`) | (24, 22) | (24, 21) | Dự kiến đến điểm hẹn tọa độ (24, 21) | 39 |
| 56-57 | Di chuyển hướng 5 (`5`) | (24, 21) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 38 |
| 58-59 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 37 |
| 60 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 35 |
| 61-62 | Di chuyển hướng 5 (`5`) | (21, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 34 |
| 63 | Chờ 1 bước (`-1`) | (20, 20) | (20, 20) | Dự kiến đứng yên tại (20, 20); hướng tới tọa độ (20, 20) | 34 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 10) (ô=340)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 2)
- Mảng hành động đã gửi server: `[3, 3, 2, 4, 4, 0, 0, 0, 5, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 0, 5, 5, 5, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 73 |
| 2-3 | Di chuyển hướng 3 (`3`) | (21, 11) | (21, 12) | Dự kiến đến điểm hẹn tọa độ (21, 12) | 72 |
| 4-5 | Di chuyển hướng 2 (`2`) | (21, 12) | (22, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(22, 12)) | 71 |
| 6-7 | Di chuyển hướng 4 (`4`) | (22, 12) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 70 |
| 8-9 | Di chuyển hướng 4 (`4`) | (22, 13) | (21, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(21, 14)) | 69 |
| 10-11 | Di chuyển hướng 0 (`0`) | (21, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 68 |
| 12-13 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 67 |
| 14-15 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 66 |
| 16-17 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=31, tọa độ=(19, 11)) | 65 |
| 18-19 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 64 |
| 20-21 | Di chuyển hướng 2 (`2`) | (20, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 63 |
| 22-23 | Di chuyển hướng 2 (`2`) | (21, 11) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 62 |
| 24-25 | Di chuyển hướng 2 (`2`) | (22, 11) | (23, 11) | Dự kiến đến điểm hẹn tọa độ (23, 11) | 61 |
| 26-27 | Di chuyển hướng 2 (`2`) | (23, 11) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 60 |
| 28-30 | Di chuyển hướng 2 (`2`) | (24, 11) | (25, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(25, 11)) | 58 |
| 31-32 | Di chuyển hướng 1 (`1`) | (25, 11) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 57 |
| 33-34 | Di chuyển hướng 1 (`1`) | (25, 10) | (26, 9) | Dự kiến đến điểm hẹn tọa độ (26, 9) | 56 |
| 35 | Di chuyển hướng 1 (`1`) | (26, 9) | (26, 8) | Dự kiến đến điểm hẹn tọa độ (26, 8) | 54 |
| 36-37 | Di chuyển hướng 2 (`2`) | (26, 8) | (27, 8) | Dự kiến đến điểm hẹn tọa độ (27, 8) | 53 |
| 38 | Di chuyển hướng 2 (`2`) | (27, 8) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 51 |
| 39 | Di chuyển hướng 1 (`1`) | (28, 8) | (29, 7) | Dự kiến đến điểm hẹn tọa độ (29, 7) | 49 |
| 40 | Di chuyển hướng 1 (`1`) | (29, 7) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 47 |
| 41-43 | Di chuyển hướng 1 (`1`) | (29, 6) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 45 |
| 44-45 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(30, 4)) | 44 |
| 46-47 | Di chuyển hướng 1 (`1`) | (30, 4) | (31, 3) | Dự kiến đến điểm hẹn tọa độ (31, 3) | 43 |
| 48 | Di chuyển hướng 0 (`0`) | (31, 3) | (30, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(30, 2)) | 41 |
| 49-50 | Di chuyển hướng 5 (`5`) | (30, 2) | (29, 2) | Dự kiến đến điểm hẹn tọa độ (29, 2) | 40 |
| 51-52 | Di chuyển hướng 5 (`5`) | (29, 2) | (28, 2) | Dự kiến đến điểm hẹn tọa độ (28, 2) | 39 |
| 53-54 | Di chuyển hướng 5 (`5`) | (28, 2) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 38 |
| 55-56 | Di chuyển hướng 5 (`5`) | (27, 2) | (26, 2) | Dự kiến đến điểm hẹn tọa độ (26, 2) | 37 |
| 57-58 | Di chuyển hướng 5 (`5`) | (26, 2) | (25, 2) | Dự kiến đến điểm hẹn tọa độ (25, 2) | 36 |
| 59-60 | Di chuyển hướng 5 (`5`) | (25, 2) | (24, 2) | Dự kiến đến điểm hẹn tọa độ (24, 2) | 35 |
| 61-63 | Di chuyển hướng 5 (`5`) | (24, 2) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 33 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (28, 20) (ô=668)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #27 (thương hiệu=27, tọa độ=(12, 22))
- Địa điểm đích kế hoạch: Spot #27 (thương hiệu=27, tọa độ=(12, 22))
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 5, 5, 5, 0, 5, 5, 5, 5, 0, 3, 3, 3, 3, 4, 4, 4, 4, 3, 4, 5, 5, 5, 5, 0, 0, 1, 1, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (28, 20) | (27, 20) | Dự kiến đến điểm hẹn tọa độ (27, 20) | 73 |
| 2-3 | Di chuyển hướng 4 (`4`) | (27, 20) | (27, 21) | Dự kiến đến điểm hẹn tọa độ (27, 21) | 72 |
| 4-5 | Di chuyển hướng 5 (`5`) | (27, 21) | (26, 21) | Dự kiến đến điểm hẹn tọa độ (26, 21) | 71 |
| 6 | Di chuyển hướng 5 (`5`) | (26, 21) | (25, 21) | Dự kiến đến điểm hẹn tọa độ (25, 21) | 69 |
| 7-8 | Di chuyển hướng 5 (`5`) | (25, 21) | (24, 21) | Dự kiến đến điểm hẹn tọa độ (24, 21) | 68 |
| 9-10 | Di chuyển hướng 5 (`5`) | (24, 21) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 67 |
| 11-12 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 66 |
| 13 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 64 |
| 14-15 | Di chuyển hướng 5 (`5`) | (21, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 63 |
| 16-17 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 62 |
| 18-20 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 60 |
| 21 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 58 |
| 22-23 | Di chuyển hướng 0 (`0`) | (17, 20) | (17, 19) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=26, tọa độ=(17, 19)) | 57 |
| 24-25 | Di chuyển hướng 3 (`3`) | (17, 19) | (17, 20) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 20)) | 56 |
| 26-27 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 55 |
| 28-30 | Di chuyển hướng 3 (`3`) | (18, 21) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 53 |
| 31-32 | Di chuyển hướng 3 (`3`) | (18, 22) | (19, 23) | Dự kiến đến điểm hẹn tọa độ (19, 23) | 52 |
| 33-34 | Di chuyển hướng 4 (`4`) | (19, 23) | (18, 24) | Dự kiến đến điểm hẹn tọa độ (18, 24) | 51 |
| 35-36 | Di chuyển hướng 4 (`4`) | (18, 24) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 50 |
| 37-38 | Di chuyển hướng 4 (`4`) | (18, 25) | (17, 26) | Dự kiến đến điểm hẹn tọa độ (17, 26) | 49 |
| 39 | Di chuyển hướng 4 (`4`) | (17, 26) | (17, 27) | Dự kiến đến điểm hẹn tọa độ (17, 27) | 47 |
| 40-41 | Di chuyển hướng 3 (`3`) | (17, 27) | (17, 28) | Dự kiến đến điểm hẹn tọa độ (17, 28) | 46 |
| 42-43 | Di chuyển hướng 4 (`4`) | (17, 28) | (17, 29) | Dự kiến đến điểm hẹn tọa độ (17, 29) | 45 |
| 44-45 | Di chuyển hướng 5 (`5`) | (17, 29) | (16, 29) | Dự kiến đến điểm hẹn tọa độ (16, 29) | 44 |
| 46 | Di chuyển hướng 5 (`5`) | (16, 29) | (15, 29) | Dự kiến đến điểm hẹn tọa độ (15, 29) | 42 |
| 47-48 | Di chuyển hướng 5 (`5`) | (15, 29) | (14, 29) | Dự kiến đến điểm hẹn tọa độ (14, 29) | 41 |
| 49-50 | Di chuyển hướng 5 (`5`) | (14, 29) | (13, 29) | Dự kiến đến điểm hẹn tọa độ (13, 29) | 40 |
| 51 | Di chuyển hướng 0 (`0`) | (13, 29) | (12, 28) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(12, 28)) | 38 |
| 52-53 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 37 |
| 54-55 | Di chuyển hướng 1 (`1`) | (12, 27) | (12, 26) | Dự kiến đến điểm hẹn tọa độ (12, 26) | 36 |
| 56-57 | Di chuyển hướng 1 (`1`) | (12, 26) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 35 |
| 58 | Di chuyển hướng 0 (`0`) | (13, 25) | (12, 24) | Dự kiến đến điểm hẹn tọa độ (12, 24) | 33 |
| 59-60 | Di chuyển hướng 1 (`1`) | (12, 24) | (13, 23) | Dự kiến đến điểm hẹn tọa độ (13, 23) | 32 |
| 61-62 | Di chuyển hướng 0 (`0`) | (13, 23) | (12, 22) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=27, tọa độ=(12, 22)) | 31 |
| 63 | Chờ 1 bước (`-1`) | (12, 22) | (12, 22) | Dự kiến đứng yên tại (12, 22); mục tiêu Spot #27 (thương hiệu=27, tọa độ=(12, 22)) | 31 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (15, 20) (ô=655)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(7, 17))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(7, 17))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 4, 5, 4, 4, 4, 4, 4, 5, 5, 4, 5, 4, 4, 1, 0, 0, 0, 0, 0, 0, 2, 1, 1, 2, 2, 2, 2, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 73 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 19) | (14, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(14, 19)) | 72 |
| 4-5 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 71 |
| 6-7 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 70 |
| 8-9 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 69 |
| 10-12 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 67 |
| 13-14 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 66 |
| 15-16 | Di chuyển hướng 4 (`4`) | (9, 20) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 65 |
| 17 | Di chuyển hướng 4 (`4`) | (9, 21) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 63 |
| 18-19 | Di chuyển hướng 4 (`4`) | (8, 22) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 62 |
| 20 | Di chuyển hướng 4 (`4`) | (8, 23) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 60 |
| 21 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 58 |
| 22 | Di chuyển hướng 5 (`5`) | (7, 25) | (6, 25) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 25)) | 56 |
| 23-24 | Di chuyển hướng 5 (`5`) | (6, 25) | (5, 25) | Dự kiến đến điểm hẹn tọa độ (5, 25) | 55 |
| 25-27 | Di chuyển hướng 4 (`4`) | (5, 25) | (4, 26) | Dự kiến đến điểm hẹn tọa độ (4, 26) | 53 |
| 28-29 | Di chuyển hướng 5 (`5`) | (4, 26) | (3, 26) | Dự kiến đến điểm hẹn tọa độ (3, 26) | 52 |
| 30-31 | Di chuyển hướng 4 (`4`) | (3, 26) | (3, 27) | Dự kiến đến điểm hẹn tọa độ (3, 27) | 51 |
| 32 | Di chuyển hướng 4 (`4`) | (3, 27) | (2, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(2, 28)) | 49 |
| 33-34 | Di chuyển hướng 1 (`1`) | (2, 28) | (3, 27) | Dự kiến đến điểm hẹn tọa độ (3, 27) | 48 |
| 35 | Di chuyển hướng 0 (`0`) | (3, 27) | (2, 26) | Dự kiến đến điểm hẹn tọa độ (2, 26) | 46 |
| 36-37 | Di chuyển hướng 0 (`0`) | (2, 26) | (2, 25) | Dự kiến đến điểm hẹn tọa độ (2, 25) | 45 |
| 38-39 | Di chuyển hướng 0 (`0`) | (2, 25) | (1, 24) | Dự kiến đến điểm hẹn tọa độ (1, 24) | 44 |
| 40-41 | Di chuyển hướng 0 (`0`) | (1, 24) | (1, 23) | Dự kiến đến điểm hẹn tọa độ (1, 23) | 43 |
| 42-44 | Di chuyển hướng 0 (`0`) | (1, 23) | (0, 22) | Dự kiến đến điểm hẹn tọa độ (0, 22) | 41 |
| 45 | Di chuyển hướng 0 (`0`) | (0, 22) | (0, 21) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(0, 21)) | 39 |
| 46-47 | Di chuyển hướng 2 (`2`) | (0, 21) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 38 |
| 48 | Di chuyển hướng 1 (`1`) | (1, 21) | (1, 20) | Dự kiến đến điểm hẹn tọa độ (1, 20) | 36 |
| 49-50 | Di chuyển hướng 1 (`1`) | (1, 20) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 35 |
| 51 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 33 |
| 52-53 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 32 |
| 54-55 | Di chuyển hướng 2 (`2`) | (4, 19) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 31 |
| 56-58 | Di chuyển hướng 2 (`2`) | (5, 19) | (6, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 19)) | 29 |
| 59-60 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 28 |
| 61-63 | Di chuyển hướng 1 (`1`) | (6, 18) | (7, 17) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(7, 17)) | 26 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (27, 14) (ô=475)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(26, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(26, 2)
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 5, 5, 4, 4, 0, 0, 0, 5, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 0, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (27, 14) | (26, 14) | Dự kiến đến điểm hẹn tọa độ (26, 14) | 73 |
| 2 | Di chuyển hướng 5 (`5`) | (26, 14) | (25, 14) | Dự kiến đến điểm hẹn tọa độ (25, 14) | 71 |
| 3-4 | Di chuyển hướng 0 (`0`) | (25, 14) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 70 |
| 5-7 | Di chuyển hướng 0 (`0`) | (25, 13) | (24, 12) | Dự kiến đến điểm hẹn tọa độ (24, 12) | 68 |
| 8-9 | Di chuyển hướng 5 (`5`) | (24, 12) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 67 |
| 10-11 | Di chuyển hướng 5 (`5`) | (23, 12) | (22, 12) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(22, 12)) | 66 |
| 12-13 | Di chuyển hướng 4 (`4`) | (22, 12) | (22, 13) | Dự kiến đến điểm hẹn tọa độ (22, 13) | 65 |
| 14-15 | Di chuyển hướng 4 (`4`) | (22, 13) | (21, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(21, 14)) | 64 |
| 16-17 | Di chuyển hướng 0 (`0`) | (21, 14) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 63 |
| 18-19 | Di chuyển hướng 0 (`0`) | (21, 13) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 62 |
| 20-21 | Di chuyển hướng 0 (`0`) | (20, 12) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 61 |
| 22-23 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=31, tọa độ=(19, 11)) | 60 |
| 24-25 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 59 |
| 26-27 | Di chuyển hướng 2 (`2`) | (20, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 58 |
| 28-29 | Di chuyển hướng 2 (`2`) | (21, 11) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 57 |
| 30-31 | Di chuyển hướng 2 (`2`) | (22, 11) | (23, 11) | Dự kiến đến điểm hẹn tọa độ (23, 11) | 56 |
| 32-33 | Di chuyển hướng 2 (`2`) | (23, 11) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 55 |
| 34-36 | Di chuyển hướng 2 (`2`) | (24, 11) | (25, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(25, 11)) | 53 |
| 37-38 | Di chuyển hướng 1 (`1`) | (25, 11) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 52 |
| 39-40 | Di chuyển hướng 1 (`1`) | (25, 10) | (26, 9) | Dự kiến đến điểm hẹn tọa độ (26, 9) | 51 |
| 41 | Di chuyển hướng 1 (`1`) | (26, 9) | (26, 8) | Dự kiến đến điểm hẹn tọa độ (26, 8) | 49 |
| 42-43 | Di chuyển hướng 2 (`2`) | (26, 8) | (27, 8) | Dự kiến đến điểm hẹn tọa độ (27, 8) | 48 |
| 44 | Di chuyển hướng 2 (`2`) | (27, 8) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 46 |
| 45 | Di chuyển hướng 1 (`1`) | (28, 8) | (29, 7) | Dự kiến đến điểm hẹn tọa độ (29, 7) | 44 |
| 46 | Di chuyển hướng 1 (`1`) | (29, 7) | (29, 6) | Dự kiến đến điểm hẹn tọa độ (29, 6) | 42 |
| 47-49 | Di chuyển hướng 1 (`1`) | (29, 6) | (30, 5) | Dự kiến đến điểm hẹn tọa độ (30, 5) | 40 |
| 50-51 | Di chuyển hướng 1 (`1`) | (30, 5) | (30, 4) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(30, 4)) | 39 |
| 52-53 | Di chuyển hướng 1 (`1`) | (30, 4) | (31, 3) | Dự kiến đến điểm hẹn tọa độ (31, 3) | 38 |
| 54 | Di chuyển hướng 0 (`0`) | (31, 3) | (30, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(30, 2)) | 36 |
| 55-56 | Di chuyển hướng 5 (`5`) | (30, 2) | (29, 2) | Dự kiến đến điểm hẹn tọa độ (29, 2) | 35 |
| 57-58 | Di chuyển hướng 5 (`5`) | (29, 2) | (28, 2) | Dự kiến đến điểm hẹn tọa độ (28, 2) | 34 |
| 59-60 | Di chuyển hướng 5 (`5`) | (28, 2) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 33 |
| 61-62 | Di chuyển hướng 5 (`5`) | (27, 2) | (26, 2) | Dự kiến đến điểm hẹn tọa độ (26, 2) | 32 |
| 63 | Chờ 1 bước (`-1`) | (26, 2) | (26, 2) | Dự kiến đứng yên tại (26, 2); hướng tới tọa độ (26, 2) | 32 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (8, 27) (ô=872)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 13)
- Mảng hành động đã gửi server: `[0, 5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 4, 4, 3, 3, 3, 3, 3, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 27) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 73 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 26) | (6, 26) | Dự kiến đến điểm hẹn tọa độ (6, 26) | 72 |
| 4 | Di chuyển hướng 0 (`0`) | (6, 26) | (6, 25) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 25)) | 70 |
| 5-6 | Di chuyển hướng 1 (`1`) | (6, 25) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 69 |
| 7 | Di chuyển hướng 0 (`0`) | (6, 24) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 67 |
| 8-9 | Di chuyển hướng 0 (`0`) | (6, 23) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 66 |
| 10-11 | Di chuyển hướng 0 (`0`) | (5, 22) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 65 |
| 12-14 | Di chuyển hướng 0 (`0`) | (5, 21) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 63 |
| 15-16 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 62 |
| 17-18 | Di chuyển hướng 0 (`0`) | (4, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 61 |
| 19 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 59 |
| 20-22 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 57 |
| 23 | Di chuyển hướng 0 (`0`) | (2, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 55 |
| 24 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 53 |
| 25-26 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 52 |
| 27-28 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 51 |
| 29-30 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 11)) | 50 |
| 31-32 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 49 |
| 33-34 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 48 |
| 35-36 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 47 |
| 37-38 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 46 |
| 39-40 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=29, tọa độ=(7, 7)) | 45 |
| 41-42 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 44 |
| 43-44 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 43 |
| 45-46 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 42 |
| 47-48 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 7)) | 41 |
| 49-50 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 40 |
| 51-52 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 39 |
| 53-54 | Di chuyển hướng 3 (`3`) | (10, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 38 |
| 55-56 | Di chuyển hướng 3 (`3`) | (10, 10) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 37 |
| 57-58 | Di chuyển hướng 3 (`3`) | (11, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 36 |
| 59 | Di chuyển hướng 3 (`3`) | (11, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 34 |
| 60-61 | Di chuyển hướng 3 (`3`) | (12, 13) | (12, 14) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(12, 14)) | 33 |
| 62-63 | Di chuyển hướng 1 (`1`) | (12, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 32 |

### Xe #7 - Tuần tra

- Vị trí đầu ngày: (25, 7) (ô=249)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(2, 3))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(2, 3))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 0, 0, 0, 5, 5, 4, 5, 5, 5, 5, 5, 4, 5, 5, 4, 4, 5, 4, 4, 4, 4, 0, 1, 1, 0, 0, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (25, 7) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 73 |
| 2 | Di chuyển hướng 5 (`5`) | (24, 7) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 71 |
| 3-4 | Di chuyển hướng 5 (`5`) | (23, 7) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 70 |
| 5-6 | Di chuyển hướng 5 (`5`) | (22, 7) | (21, 7) | Dự kiến đến điểm hẹn tọa độ (21, 7) | 69 |
| 7-8 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 68 |
| 9-10 | Di chuyển hướng 0 (`0`) | (20, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 67 |
| 11-12 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 66 |
| 13-14 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 65 |
| 15 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 63 |
| 16-17 | Di chuyển hướng 5 (`5`) | (18, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 62 |
| 18-19 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 61 |
| 20 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 59 |
| 21-22 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 58 |
| 23-24 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 57 |
| 25-26 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(12, 4)) | 56 |
| 27-28 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 29-30 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 54 |
| 31-32 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 53 |
| 33 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 51 |
| 34-35 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 50 |
| 36-37 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 49 |
| 38-39 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=29, tọa độ=(7, 7)) | 48 |
| 40-41 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 47 |
| 42-43 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 46 |
| 44-45 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 45 |
| 46-47 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 44 |
| 48-49 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 11)) | 43 |
| 50-51 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 42 |
| 52 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 40 |
| 53-54 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 39 |
| 55-56 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 38 |
| 57 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 36 |
| 58-59 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 35 |
| 60 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 33 |
| 61-62 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(2, 3)) | 32 |
| 63 | Chờ 1 bước (`-1`) | (2, 3) | (2, 3) | Dự kiến đứng yên tại (2, 3); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(2, 3)) | 32 |

