# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 68
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #3 | #6 | (13, 8) | 73 | 74 |
| 8 | #2 | #6 | (15, 9) | 20 | 74 |
| 15 | #1 | #6 | (17, 9) | 32 | 74 |
| 42 | #2 | #6 | (17, 9) | 51 | 74 |
| 43 | #5 | #7 | (6, 29) | 9 | 74 |
| 46 | #3 | #6 | (17, 9) | 43 | 74 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (23, 17) (ô=567)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(25, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(25, 1)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 1, 0, 1, 1, 0, 1, 1, 0, 0, 5, 5, 5, 5, 5, 4, 5, 4, 4, 3, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (23, 17) | (24, 17) | Dự kiến đến điểm hẹn tọa độ (24, 17) | 61 |
| 2-3 | Di chuyển hướng 2 (`2`) | (24, 17) | (25, 17) | Dự kiến đến điểm hẹn tọa độ (25, 17) | 60 |
| 4-5 | Di chuyển hướng 2 (`2`) | (25, 17) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 59 |
| 6-8 | Di chuyển hướng 2 (`2`) | (26, 17) | (27, 17) | Dự kiến đến điểm hẹn tọa độ (27, 17) | 57 |
| 9-10 | Di chuyển hướng 2 (`2`) | (27, 17) | (28, 17) | Dự kiến đến điểm hẹn tọa độ (28, 17) | 56 |
| 11-12 | Di chuyển hướng 2 (`2`) | (28, 17) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 55 |
| 13 | Di chuyển hướng 1 (`1`) | (29, 17) | (29, 16) | Dự kiến đến điểm hẹn tọa độ (29, 16) | 53 |
| 14 | Di chuyển hướng 0 (`0`) | (29, 16) | (29, 15) | Dự kiến đến điểm hẹn tọa độ (29, 15) | 51 |
| 15-16 | Di chuyển hướng 1 (`1`) | (29, 15) | (29, 14) | Dự kiến đến điểm hẹn tọa độ (29, 14) | 50 |
| 17-18 | Di chuyển hướng 1 (`1`) | (29, 14) | (30, 13) | Dự kiến đến điểm hẹn tọa độ (30, 13) | 49 |
| 19 | Di chuyển hướng 0 (`0`) | (30, 13) | (29, 12) | Dự kiến đến điểm hẹn tọa độ (29, 12) | 47 |
| 20 | Di chuyển hướng 1 (`1`) | (29, 12) | (30, 11) | Dự kiến đến điểm hẹn tọa độ (30, 11) | 45 |
| 21 | Di chuyển hướng 1 (`1`) | (30, 11) | (30, 10) | Dự kiến đến điểm hẹn tọa độ (30, 10) | 43 |
| 22-23 | Di chuyển hướng 0 (`0`) | (30, 10) | (30, 9) | Dự kiến đến điểm hẹn tọa độ (30, 9) | 42 |
| 24-25 | Di chuyển hướng 0 (`0`) | (30, 9) | (29, 8) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(29, 8)) | 41 |
| 26-27 | Di chuyển hướng 5 (`5`) | (29, 8) | (28, 8) | Dự kiến đến điểm hẹn tọa độ (28, 8) | 40 |
| 28-29 | Di chuyển hướng 5 (`5`) | (28, 8) | (27, 8) | Dự kiến đến điểm hẹn tọa độ (27, 8) | 39 |
| 30 | Di chuyển hướng 5 (`5`) | (27, 8) | (26, 8) | Dự kiến đến điểm hẹn tọa độ (26, 8) | 37 |
| 31 | Di chuyển hướng 5 (`5`) | (26, 8) | (25, 8) | Dự kiến đến điểm hẹn tọa độ (25, 8) | 35 |
| 32-33 | Di chuyển hướng 5 (`5`) | (25, 8) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 34 |
| 34-35 | Di chuyển hướng 4 (`4`) | (24, 8) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 33 |
| 36 | Di chuyển hướng 5 (`5`) | (24, 9) | (23, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 9)) | 31 |
| 37-38 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 30 |
| 39 | Di chuyển hướng 4 (`4`) | (22, 10) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 28 |
| 40-41 | Di chuyển hướng 3 (`3`) | (22, 11) | (22, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 12)) | 27 |
| 42-43 | Di chuyển hướng 0 (`0`) | (22, 12) | (22, 11) | Dự kiến đến điểm hẹn tọa độ (22, 11) | 26 |
| 44-45 | Di chuyển hướng 1 (`1`) | (22, 11) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 25 |
| 46 | Di chuyển hướng 1 (`1`) | (22, 10) | (23, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 9)) | 23 |
| 47-48 | Di chuyển hướng 1 (`1`) | (23, 9) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 22 |
| 49-50 | Di chuyển hướng 1 (`1`) | (23, 8) | (24, 7) | Dự kiến đến điểm hẹn tọa độ (24, 7) | 21 |
| 51-52 | Di chuyển hướng 1 (`1`) | (24, 7) | (24, 6) | Dự kiến đến điểm hẹn tọa độ (24, 6) | 20 |
| 53-54 | Di chuyển hướng 1 (`1`) | (24, 6) | (25, 5) | Dự kiến đến điểm hẹn tọa độ (25, 5) | 19 |
| 55-56 | Di chuyển hướng 1 (`1`) | (25, 5) | (25, 4) | Dự kiến đến điểm hẹn tọa độ (25, 4) | 18 |
| 57-58 | Di chuyển hướng 1 (`1`) | (25, 4) | (26, 3) | Dự kiến đến điểm hẹn tọa độ (26, 3) | 17 |
| 59-60 | Di chuyển hướng 1 (`1`) | (26, 3) | (26, 2) | Dự kiến đến điểm hẹn tọa độ (26, 2) | 16 |
| 61-62 | Di chuyển hướng 1 (`1`) | (26, 2) | (27, 1) | Dự kiến đến điểm hẹn tọa độ (27, 1) | 15 |
| 63 | Di chuyển hướng 0 (`0`) | (27, 1) | (26, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(26, 0)) | 13 |
| 64-65 | Di chuyển hướng 4 (`4`) | (26, 0) | (26, 1) | Dự kiến đến điểm hẹn tọa độ (26, 1) | 12 |
| 66-67 | Di chuyển hướng 5 (`5`) | (26, 1) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 11 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 0) (ô=18)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(12, 8))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(12, 8))
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 4, 3, 4, 4, 4, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 4, 1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 0) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 43 |
| 2-3 | Di chuyển hướng 3 (`3`) | (19, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 42 |
| 4 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 40 |
| 5-6 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=28, tọa độ=(18, 4)) | 39 |
| 7-8 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 38 |
| 9 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 36 |
| 10 | Di chuyển hướng 4 (`4`) | (18, 6) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 34 |
| 11-12 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 33 |
| 13-14 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 74 |
| 15-17 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 72 |
| 18 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 70 |
| 19-20 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 69 |
| 21-22 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 68 |
| 23 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 66 |
| 24-25 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 65 |
| 26-27 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 64 |
| 28-29 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 63 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 62 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 61 |
| 34-35 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 60 |
| 36-37 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 59 |
| 38-39 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 58 |
| 40-41 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 11)) | 57 |
| 42-43 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 56 |
| 44 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(2, 12)) | 54 |
| 45-46 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 53 |
| 47 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 48-50 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 49 |
| 51 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(4, 8)) | 47 |
| 52-53 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 46 |
| 54 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 44 |
| 55-56 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 43 |
| 57 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 41 |
| 58-59 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 40 |
| 60-61 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 39 |
| 62-63 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 38 |
| 64-65 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 37 |
| 66-67 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 8)) | 36 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (18, 7) (ô=242)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(26, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(26, 15)
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 5, 4, 5, 4, 4, 4, 4, 1, 1, 1, 1, 0, 1, -1, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 3, 3, 3, 4, 3, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 25 |
| 2-3 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 24 |
| 4-6 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 22 |
| 7 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 74 |
| 8-9 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 73 |
| 10-11 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 72 |
| 12 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 70 |
| 13-14 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 69 |
| 15-16 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 68 |
| 17-18 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 67 |
| 19 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(10, 14)) | 65 |
| 20-21 | Di chuyển hướng 1 (`1`) | (10, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 64 |
| 22 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 62 |
| 23-24 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 11)) | 61 |
| 25-26 | Di chuyển hướng 1 (`1`) | (12, 11) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 60 |
| 27-28 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 59 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 8)) | 58 |
| 31 | Chờ 1 bước (`-1`) | (12, 8) | (12, 8) | Dự kiến đứng yên tại (12, 8); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 8)) | 58 |
| 32-33 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 57 |
| 34-36 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 55 |
| 37-38 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 54 |
| 39-40 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 53 |
| 41 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 74 |
| 42-44 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 72 |
| 45 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 70 |
| 46-47 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 69 |
| 48-49 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 68 |
| 50-51 | Di chuyển hướng 2 (`2`) | (21, 9) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 67 |
| 52-53 | Di chuyển hướng 2 (`2`) | (22, 9) | (23, 9) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(23, 9)) | 66 |
| 54-55 | Di chuyển hướng 4 (`4`) | (23, 9) | (22, 10) | Dự kiến đến điểm hẹn tọa độ (22, 10) | 65 |
| 56 | Di chuyển hướng 3 (`3`) | (22, 10) | (23, 11) | Dự kiến đến điểm hẹn tọa độ (23, 11) | 63 |
| 57-58 | Di chuyển hướng 3 (`3`) | (23, 11) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 62 |
| 59 | Di chuyển hướng 3 (`3`) | (23, 12) | (24, 13) | Dự kiến đến điểm hẹn tọa độ (24, 13) | 60 |
| 60-62 | Di chuyển hướng 4 (`4`) | (24, 13) | (23, 14) | Dự kiến đến điểm hẹn tọa độ (23, 14) | 58 |
| 63-64 | Di chuyển hướng 3 (`3`) | (23, 14) | (24, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(24, 15)) | 57 |
| 65-66 | Di chuyển hướng 2 (`2`) | (24, 15) | (25, 15) | Dự kiến đến điểm hẹn tọa độ (25, 15) | 56 |
| 67 | Di chuyển hướng 2 (`2`) | (25, 15) | (26, 15) | Dự kiến đến điểm hẹn tọa độ (26, 15) | 54 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 8) (ô=269)
- Nhiên liệu đầu ngày: 73
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 2)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 5, 2, 2, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 4, 4, 3, 3, 3, 2, 1, 1, 0, 0, 1, 0, 1, 1, 1, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 8)) | 72 |
| 3-4 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 71 |
| 5-6 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 70 |
| 7-8 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 69 |
| 9-10 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 68 |
| 11-12 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 7)) | 67 |
| 13-14 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 66 |
| 15-16 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 65 |
| 17-18 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 64 |
| 19-20 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 63 |
| 21-22 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 62 |
| 23 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 60 |
| 24 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 58 |
| 25-26 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 57 |
| 27-28 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(13, 0)) | 56 |
| 29-30 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=26, tọa độ=(14, 1)) | 55 |
| 31-32 | Di chuyển hướng 3 (`3`) | (14, 1) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 54 |
| 33 | Di chuyển hướng 3 (`3`) | (14, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 52 |
| 34-35 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 51 |
| 36 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 49 |
| 37-38 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 48 |
| 39-40 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 47 |
| 41-42 | Di chuyển hướng 3 (`3`) | (15, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 46 |
| 43-44 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 45 |
| 45 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 74 |
| 46-48 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 72 |
| 49-50 | Di chuyển hướng 1 (`1`) | (17, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 71 |
| 51-52 | Di chuyển hướng 0 (`0`) | (18, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 70 |
| 53-54 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 5)) | 69 |
| 55-56 | Di chuyển hướng 1 (`1`) | (17, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 68 |
| 57 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 66 |
| 58-59 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 65 |
| 60-61 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 64 |
| 62-63 | Di chuyển hướng 1 (`1`) | (18, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(18, 0)) | 63 |
| 64-65 | Di chuyển hướng 3 (`3`) | (18, 0) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 62 |
| 66-67 | Di chuyển hướng 3 (`3`) | (19, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 61 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (31, 25) (ô=831)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 25)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 25)
- Mảng hành động đã gửi server: `[0, 5, 4, 3, 2, 2, 4, 4, 4, 5, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 0, 5, 5, 0, 5, 0, 0, 0, 0, 1, 1, 0, 4, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (31, 25) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 59 |
| 2 | Di chuyển hướng 5 (`5`) | (30, 24) | (29, 24) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(29, 24)) | 57 |
| 3-4 | Di chuyển hướng 4 (`4`) | (29, 24) | (29, 25) | Dự kiến đến điểm hẹn tọa độ (29, 25) | 56 |
| 5-6 | Di chuyển hướng 3 (`3`) | (29, 25) | (29, 26) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(29, 26)) | 55 |
| 7-8 | Di chuyển hướng 2 (`2`) | (29, 26) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 54 |
| 9-10 | Di chuyển hướng 2 (`2`) | (30, 26) | (31, 26) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(31, 26)) | 53 |
| 11-12 | Di chuyển hướng 4 (`4`) | (31, 26) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 52 |
| 13 | Di chuyển hướng 4 (`4`) | (31, 27) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 50 |
| 14-15 | Di chuyển hướng 4 (`4`) | (30, 28) | (30, 29) | Dự kiến đến điểm hẹn tọa độ (30, 29) | 49 |
| 16-17 | Di chuyển hướng 5 (`5`) | (30, 29) | (29, 29) | Dự kiến đến điểm hẹn tọa độ (29, 29) | 48 |
| 18-19 | Di chuyển hướng 4 (`4`) | (29, 29) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 47 |
| 20 | Di chuyển hướng 5 (`5`) | (28, 30) | (27, 30) | Dự kiến đến điểm hẹn tọa độ (27, 30) | 45 |
| 21-22 | Di chuyển hướng 5 (`5`) | (27, 30) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 44 |
| 23 | Di chuyển hướng 4 (`4`) | (26, 30) | (26, 31) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(26, 31)) | 42 |
| 24-25 | Di chuyển hướng 5 (`5`) | (26, 31) | (25, 31) | Dự kiến đến điểm hẹn tọa độ (25, 31) | 41 |
| 26-28 | Di chuyển hướng 5 (`5`) | (25, 31) | (24, 31) | Dự kiến đến điểm hẹn tọa độ (24, 31) | 39 |
| 29-30 | Di chuyển hướng 5 (`5`) | (24, 31) | (23, 31) | Dự kiến đến điểm hẹn tọa độ (23, 31) | 38 |
| 31 | Di chuyển hướng 5 (`5`) | (23, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(22, 31)) | 36 |
| 32-33 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 35 |
| 34-35 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 34 |
| 36-37 | Di chuyển hướng 0 (`0`) | (20, 31) | (19, 30) | Dự kiến đến điểm hẹn tọa độ (19, 30) | 33 |
| 38-39 | Di chuyển hướng 5 (`5`) | (19, 30) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 32 |
| 40-42 | Di chuyển hướng 5 (`5`) | (18, 30) | (17, 30) | Dự kiến đến điểm hẹn tọa độ (17, 30) | 30 |
| 43-44 | Di chuyển hướng 0 (`0`) | (17, 30) | (17, 29) | Dự kiến đến điểm hẹn tọa độ (17, 29) | 29 |
| 45-46 | Di chuyển hướng 5 (`5`) | (17, 29) | (16, 29) | Dự kiến đến điểm hẹn tọa độ (16, 29) | 28 |
| 47 | Di chuyển hướng 0 (`0`) | (16, 29) | (15, 28) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=31, tọa độ=(15, 28)) | 26 |
| 48-49 | Di chuyển hướng 0 (`0`) | (15, 28) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 25 |
| 50-52 | Di chuyển hướng 0 (`0`) | (15, 27) | (14, 26) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 26)) | 23 |
| 53-54 | Di chuyển hướng 0 (`0`) | (14, 26) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 22 |
| 55-56 | Di chuyển hướng 1 (`1`) | (14, 25) | (14, 24) | Dự kiến đến điểm hẹn tọa độ (14, 24) | 21 |
| 57-58 | Di chuyển hướng 1 (`1`) | (14, 24) | (15, 23) | Dự kiến đến điểm hẹn tọa độ (15, 23) | 20 |
| 59-60 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=27, tọa độ=(14, 22)) | 19 |
| 61-62 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 18 |
| 63-64 | Di chuyển hướng 4 (`4`) | (14, 23) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 17 |
| 65-66 | Di chuyển hướng 3 (`3`) | (13, 24) | (14, 25) | Dự kiến đến điểm hẹn tọa độ (14, 25) | 16 |
| 67 | Chờ 1 bước (`-1`) | (14, 25) | (14, 25) | Dự kiến đứng yên tại (14, 25); hướng tới tọa độ (14, 25) | 16 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (5, 27) (ô=869)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 27)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 27)
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 1, 1, 1, 1, 1, 3, 3, 4, 4, 4, 4, 4, 4, 5, 4, 3, 2, 3, -1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 27) | (4, 26) | Dự kiến đến điểm hẹn tọa độ (4, 26) | 37 |
| 2-3 | Di chuyển hướng 0 (`0`) | (4, 26) | (4, 25) | Dự kiến đến điểm hẹn tọa độ (4, 25) | 36 |
| 4 | Di chuyển hướng 1 (`1`) | (4, 25) | (4, 24) | Dự kiến đến điểm hẹn tọa độ (4, 24) | 34 |
| 5-6 | Di chuyển hướng 1 (`1`) | (4, 24) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 33 |
| 7 | Di chuyển hướng 1 (`1`) | (5, 23) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 31 |
| 8-9 | Di chuyển hướng 1 (`1`) | (5, 22) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 30 |
| 10-11 | Di chuyển hướng 1 (`1`) | (6, 21) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 29 |
| 12-13 | Di chuyển hướng 1 (`1`) | (6, 20) | (7, 19) | Dự kiến đến điểm hẹn tọa độ (7, 19) | 28 |
| 14-16 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(7, 18)) | 26 |
| 17-18 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 25 |
| 19-21 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 23 |
| 22-23 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=29, tọa độ=(8, 21)) | 22 |
| 24-25 | Di chuyển hướng 4 (`4`) | (8, 21) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 21 |
| 26-27 | Di chuyển hướng 4 (`4`) | (7, 22) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 20 |
| 28-29 | Di chuyển hướng 4 (`4`) | (7, 23) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 19 |
| 30 | Di chuyển hướng 4 (`4`) | (6, 24) | (6, 25) | Dự kiến đến điểm hẹn tọa độ (6, 25) | 17 |
| 31-32 | Di chuyển hướng 4 (`4`) | (6, 25) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 16 |
| 33-35 | Di chuyển hướng 5 (`5`) | (5, 26) | (4, 26) | Dự kiến đến điểm hẹn tọa độ (4, 26) | 14 |
| 36-37 | Di chuyển hướng 4 (`4`) | (4, 26) | (4, 27) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(4, 27)) | 13 |
| 38-39 | Di chuyển hướng 3 (`3`) | (4, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 12 |
| 40 | Di chuyển hướng 2 (`2`) | (4, 28) | (5, 28) | Dự kiến đến điểm hẹn tọa độ (5, 28) | 10 |
| 41-42 | Di chuyển hướng 3 (`3`) | (5, 28) | (6, 29) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(6, 29)) | 74 |
| 43 | Chờ 1 bước (`-1`) | (6, 29) | (6, 29) | Dự kiến đứng yên tại (6, 29); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(6, 29)) | 74 |
| 44-45 | Di chuyển hướng 2 (`2`) | (6, 29) | (7, 29) | Dự kiến đến điểm hẹn tọa độ (7, 29) | 73 |
| 46-47 | Di chuyển hướng 2 (`2`) | (7, 29) | (8, 29) | Dự kiến đến điểm hẹn tọa độ (8, 29) | 72 |
| 48-49 | Di chuyển hướng 1 (`1`) | (8, 29) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 71 |
| 50-51 | Di chuyển hướng 1 (`1`) | (8, 28) | (9, 27) | Dự kiến đến điểm hẹn tọa độ (9, 27) | 70 |
| 52-53 | Di chuyển hướng 2 (`2`) | (9, 27) | (10, 27) | Dự kiến đến điểm hẹn tọa độ (10, 27) | 69 |
| 54-55 | Di chuyển hướng 2 (`2`) | (10, 27) | (11, 27) | Dự kiến đến điểm hẹn tọa độ (11, 27) | 68 |
| 56-57 | Di chuyển hướng 2 (`2`) | (11, 27) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 67 |
| 58-60 | Di chuyển hướng 2 (`2`) | (12, 27) | (13, 27) | Dự kiến đến điểm hẹn tọa độ (13, 27) | 65 |
| 61 | Di chuyển hướng 2 (`2`) | (13, 27) | (14, 27) | Dự kiến đến điểm hẹn tọa độ (14, 27) | 63 |
| 62-63 | Di chuyển hướng 1 (`1`) | (14, 27) | (14, 26) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 26)) | 62 |
| 64-65 | Di chuyển hướng 3 (`3`) | (14, 26) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 61 |
| 66-67 | Chờ 2 bước (`-2`) | (15, 27) | (15, 27) | Dự kiến đứng yên tại (15, 27); hướng tới tọa độ (15, 27) | 61 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 8) (ô=268)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 9)
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 2, -58]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 74 |
| 2-4 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 74 |
| 5-6 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 74 |
| 7-8 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 74 |
| 9 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 74 |
| 10-67 | Chờ 58 bước (`-58`) | (17, 9) | (17, 9) | Dự kiến đứng yên tại (17, 9); hướng tới tọa độ (17, 9) | 74 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (22, 24) (ô=790)
- Nhiên liệu đầu ngày: 74
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(6, 29))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(6, 29))
- Mảng hành động đã gửi server: `[4, 5, 5, 4, 4, 5, 4, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, -30]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 4 (`4`) | (22, 24) | (22, 25) | Dự kiến đến điểm hẹn tọa độ (22, 25) | 74 |
| 4 | Di chuyển hướng 5 (`5`) | (22, 25) | (21, 25) | Dự kiến đến điểm hẹn tọa độ (21, 25) | 74 |
| 5-6 | Di chuyển hướng 5 (`5`) | (21, 25) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 74 |
| 7-8 | Di chuyển hướng 4 (`4`) | (20, 25) | (19, 26) | Dự kiến đến điểm hẹn tọa độ (19, 26) | 74 |
| 9-10 | Di chuyển hướng 4 (`4`) | (19, 26) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 74 |
| 11-12 | Di chuyển hướng 5 (`5`) | (19, 27) | (18, 27) | Dự kiến đến điểm hẹn tọa độ (18, 27) | 74 |
| 13-14 | Di chuyển hướng 4 (`4`) | (18, 27) | (17, 28) | Dự kiến đến điểm hẹn tọa độ (17, 28) | 74 |
| 15-16 | Di chuyển hướng 4 (`4`) | (17, 28) | (17, 29) | Dự kiến đến điểm hẹn tọa độ (17, 29) | 74 |
| 17-18 | Di chuyển hướng 5 (`5`) | (17, 29) | (16, 29) | Dự kiến đến điểm hẹn tọa độ (16, 29) | 74 |
| 19 | Di chuyển hướng 5 (`5`) | (16, 29) | (15, 29) | Dự kiến đến điểm hẹn tọa độ (15, 29) | 74 |
| 20-21 | Di chuyển hướng 4 (`4`) | (15, 29) | (14, 30) | Dự kiến đến điểm hẹn tọa độ (14, 30) | 74 |
| 22-23 | Di chuyển hướng 5 (`5`) | (14, 30) | (13, 30) | Dự kiến đến điểm hẹn tọa độ (13, 30) | 74 |
| 24-25 | Di chuyển hướng 5 (`5`) | (13, 30) | (12, 30) | Dự kiến đến điểm hẹn tọa độ (12, 30) | 74 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 30) | (11, 30) | Dự kiến đến điểm hẹn tọa độ (11, 30) | 74 |
| 27-28 | Di chuyển hướng 5 (`5`) | (11, 30) | (10, 30) | Dự kiến đến điểm hẹn tọa độ (10, 30) | 74 |
| 29-31 | Di chuyển hướng 5 (`5`) | (10, 30) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 74 |
| 32 | Di chuyển hướng 5 (`5`) | (9, 30) | (8, 30) | Dự kiến đến điểm hẹn tọa độ (8, 30) | 74 |
| 33 | Di chuyển hướng 5 (`5`) | (8, 30) | (7, 30) | Dự kiến đến điểm hẹn tọa độ (7, 30) | 74 |
| 34-35 | Di chuyển hướng 0 (`0`) | (7, 30) | (7, 29) | Dự kiến đến điểm hẹn tọa độ (7, 29) | 74 |
| 36-37 | Di chuyển hướng 5 (`5`) | (7, 29) | (6, 29) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(6, 29)) | 74 |
| 38-67 | Chờ 30 bước (`-30`) | (6, 29) | (6, 29) | Dự kiến đứng yên tại (6, 29); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(6, 29)) | 74 |

