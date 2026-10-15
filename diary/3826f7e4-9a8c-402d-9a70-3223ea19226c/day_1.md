# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 76
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 36 | #2 | #5 | (8, 16) | 0 | 120 |
| 45 | #2 | #5 | (9, 19) | 115 | 120 |
| 57 | #1 | #6 | (26, 18) | 0 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 24) (ô=781)
- Nhiên liệu đầu ngày: 85
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=9, tọa độ=(12, 11))
- Mảng hành động đã gửi server: `[1, 1, 1, 0, 5, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 0, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 1, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (13, 24) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 83 |
| 3-4 | Di chuyển hướng 1 (`1`) | (14, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 82 |
| 5-6 | Di chuyển hướng 1 (`1`) | (14, 22) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 81 |
| 7-8 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 80 |
| 9-10 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 79 |
| 11 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 77 |
| 12 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 75 |
| 13 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 73 |
| 14 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 71 |
| 15 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 69 |
| 16 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 67 |
| 17 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 65 |
| 18-19 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 64 |
| 20-21 | Di chuyển hướng 0 (`0`) | (8, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 63 |
| 22 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 61 |
| 23 | Di chuyển hướng 0 (`0`) | (7, 12) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 59 |
| 24 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 57 |
| 25 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 55 |
| 26 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 53 |
| 27 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 51 |
| 28 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 49 |
| 29 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 47 |
| 30 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 45 |
| 31 | Di chuyển hướng 0 (`0`) | (1, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 43 |
| 32 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 41 |
| 33 | Di chuyển hướng 0 (`0`) | (0, 6) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 39 |
| 34 | Di chuyển hướng 1 (`1`) | (0, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 37 |
| 35 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 35 |
| 36-37 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=3, tọa độ=(1, 2)) | 34 |
| 38-39 | Di chuyển hướng 4 (`4`) | (1, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 33 |
| 40-41 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 32 |
| 42 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 30 |
| 43 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 28 |
| 44 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 26 |
| 45 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 24 |
| 46 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 22 |
| 47 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 20 |
| 48 | Di chuyển hướng 2 (`2`) | (2, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 18 |
| 49 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 16 |
| 50 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 14 |
| 51 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 12 |
| 52-53 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 11 |
| 54-55 | Di chuyển hướng 2 (`2`) | (6, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 10 |
| 56 | Di chuyển hướng 2 (`2`) | (7, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 8 |
| 57-59 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 6 |
| 60-61 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 5 |
| 62-63 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 4 |
| 64-65 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 3 |
| 66-75 | Chờ 10 bước (`-10`) | (12, 11) | (12, 11) | Dự kiến đứng yên tại (12, 11); mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 11) (ô=373)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(31, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(31, 22)
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 0, 0, 3, 3, 2, 2, 3, 2, 5, 4, 4, 3, 3, 3, 3, 4, 3, 3, 3, 4, 5, 3, 2, 2, 2, 2, 1, 2, -1, 0, 1, 2, 2, 3, 3, 3, 2, 3, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 52 |
| 2 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 50 |
| 3-4 | Di chuyển hướng 0 (`0`) | (19, 10) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 49 |
| 5 | Di chuyển hướng 0 (`0`) | (19, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 47 |
| 6 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 45 |
| 7 | Di chuyển hướng 0 (`0`) | (18, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 43 |
| 8-9 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 42 |
| 10-11 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 41 |
| 12-13 | Di chuyển hướng 3 (`3`) | (16, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 40 |
| 14-15 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 39 |
| 16-17 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 38 |
| 18 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 36 |
| 19 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 34 |
| 20 | Di chuyển hướng 2 (`2`) | (20, 7) | (21, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=8, tọa độ=(21, 7)) | 32 |
| 21-22 | Di chuyển hướng 5 (`5`) | (21, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 31 |
| 23 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 29 |
| 24-25 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 28 |
| 26 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 26 |
| 27-28 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 25 |
| 29 | Di chuyển hướng 3 (`3`) | (20, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 23 |
| 30 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 21 |
| 31 | Di chuyển hướng 4 (`4`) | (21, 13) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 19 |
| 32 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 17 |
| 33-34 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 16 |
| 35-37 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 14 |
| 38-40 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 12 |
| 41-43 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 10 |
| 44-45 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 9 |
| 46 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 7 |
| 47-48 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 6 |
| 49-50 | Di chuyển hướng 2 (`2`) | (23, 19) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 5 |
| 51 | Di chuyển hướng 2 (`2`) | (24, 19) | (25, 19) | Dự kiến đến điểm hẹn tọa độ (25, 19) | 3 |
| 52-54 | Di chuyển hướng 1 (`1`) | (25, 19) | (25, 18) | Dự kiến đến điểm hẹn tọa độ (25, 18) | 1 |
| 55-56 | Di chuyển hướng 2 (`2`) | (25, 18) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 120 |
| 57 | Chờ 1 bước (`-1`) | (26, 18) | (26, 18) | Dự kiến đứng yên tại (26, 18); mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 120 |
| 58-59 | Di chuyển hướng 0 (`0`) | (26, 18) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 119 |
| 60-62 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 117 |
| 63-64 | Di chuyển hướng 2 (`2`) | (26, 16) | (27, 16) | Dự kiến đến điểm hẹn tọa độ (27, 16) | 116 |
| 65-66 | Di chuyển hướng 2 (`2`) | (27, 16) | (28, 16) | Dự kiến đến điểm hẹn tọa độ (28, 16) | 115 |
| 67 | Di chuyển hướng 3 (`3`) | (28, 16) | (29, 17) | Dự kiến đến điểm hẹn tọa độ (29, 17) | 113 |
| 68 | Di chuyển hướng 3 (`3`) | (29, 17) | (29, 18) | Dự kiến đến điểm hẹn tọa độ (29, 18) | 111 |
| 69 | Di chuyển hướng 3 (`3`) | (29, 18) | (30, 19) | Dự kiến đến điểm hẹn tọa độ (30, 19) | 109 |
| 70 | Di chuyển hướng 2 (`2`) | (30, 19) | (31, 19) | Dự kiến đến điểm hẹn tọa độ (31, 19) | 107 |
| 71 | Di chuyển hướng 3 (`3`) | (31, 19) | (31, 20) | Dự kiến đến điểm hẹn tọa độ (31, 20) | 105 |
| 72 | Di chuyển hướng 4 (`4`) | (31, 20) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 103 |
| 73-74 | Di chuyển hướng 3 (`3`) | (31, 21) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 102 |
| 75 | Chờ 1 bước (`-1`) | (31, 22) | (31, 22) | Dự kiến đứng yên tại (31, 22); hướng tới tọa độ (31, 22) | 102 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 29) (ô=931)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 31)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 31)
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 0, 0, 0, 0, 1, -1, 3, 3, 4, 4, 5, 5, 4, 4, 4, 2, 2, 3, 4, 3, 4, 3, 2, 3, 3, 3, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (3, 29) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 24 |
| 3-5 | Di chuyển hướng 1 (`1`) | (4, 29) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 22 |
| 6 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 20 |
| 7-9 | Di chuyển hướng 2 (`2`) | (5, 27) | (6, 27) | Dự kiến đến điểm hẹn tọa độ (6, 27) | 18 |
| 10-12 | Di chuyển hướng 1 (`1`) | (6, 27) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 16 |
| 13-14 | Di chuyển hướng 1 (`1`) | (6, 26) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 15 |
| 15 | Di chuyển hướng 2 (`2`) | (7, 25) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 13 |
| 16-17 | Di chuyển hướng 1 (`1`) | (8, 25) | (8, 24) | Dự kiến đến điểm hẹn tọa độ (8, 24) | 12 |
| 18 | Di chuyển hướng 1 (`1`) | (8, 24) | (9, 23) | Dự kiến đến điểm hẹn tọa độ (9, 23) | 10 |
| 19-20 | Di chuyển hướng 1 (`1`) | (9, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 9 |
| 21-22 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 8 |
| 23-24 | Di chuyển hướng 0 (`0`) | (10, 21) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 7 |
| 25-27 | Di chuyển hướng 0 (`0`) | (9, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 5 |
| 28-29 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 4 |
| 30-32 | Di chuyển hướng 0 (`0`) | (8, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 2 |
| 33-35 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 120 |
| 36 | Chờ 1 bước (`-1`) | (8, 16) | (8, 16) | Dự kiến đứng yên tại (8, 16); mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 120 |
| 37-38 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 119 |
| 39-41 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 117 |
| 42-44 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 120 |
| 45-46 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 119 |
| 47-49 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 117 |
| 50-51 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 116 |
| 52-54 | Di chuyển hướng 4 (`4`) | (6, 20) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 114 |
| 55-57 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 112 |
| 58-60 | Di chuyển hướng 4 (`4`) | (5, 22) | (5, 23) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=12, tọa độ=(5, 23)) | 110 |
| 61-62 | Di chuyển hướng 2 (`2`) | (5, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 109 |
| 63 | Di chuyển hướng 2 (`2`) | (6, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 107 |
| 64 | Di chuyển hướng 3 (`3`) | (7, 23) | (7, 24) | Dự kiến đến điểm hẹn tọa độ (7, 24) | 105 |
| 65 | Di chuyển hướng 4 (`4`) | (7, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 103 |
| 66 | Di chuyển hướng 3 (`3`) | (7, 25) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 101 |
| 67 | Di chuyển hướng 4 (`4`) | (7, 26) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 99 |
| 68 | Di chuyển hướng 3 (`3`) | (7, 27) | (7, 28) | Dự kiến đến điểm hẹn tọa độ (7, 28) | 97 |
| 69 | Di chuyển hướng 2 (`2`) | (7, 28) | (8, 28) | Dự kiến đến điểm hẹn tọa độ (8, 28) | 95 |
| 70 | Di chuyển hướng 3 (`3`) | (8, 28) | (9, 29) | Dự kiến đến điểm hẹn tọa độ (9, 29) | 93 |
| 71 | Di chuyển hướng 3 (`3`) | (9, 29) | (9, 30) | Dự kiến đến điểm hẹn tọa độ (9, 30) | 91 |
| 72 | Di chuyển hướng 3 (`3`) | (9, 30) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 89 |
| 73 | Di chuyển hướng 2 (`2`) | (10, 31) | (11, 31) | Dự kiến đạt mục tiêu Spot #30 (thương hiệu=22, tọa độ=(11, 31)) | 87 |
| 74-75 | Di chuyển hướng 5 (`5`) | (11, 31) | (10, 31) | Dự kiến đến điểm hẹn tọa độ (10, 31) | 86 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 31) (ô=1013)
- Nhiên liệu đầu ngày: 78
- Mục tiêu kế hoạch từ Solver: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Địa điểm đích kế hoạch: Spot #27 (thương hiệu=19, tọa độ=(0, 30))
- Mảng hành động đã gửi server: `[2, 5, 5, 5, 0, 0, 5, 2, 1, 1, 0, 0, 5, 4, 5, 4, 4, 5, 5, 0, 5, 5, 0, 5, 5, 4, 5, 5, 4, 3, 4, 3, 0, 0, 5, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (21, 31) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 76 |
| 3-4 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 75 |
| 5-7 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 73 |
| 8-10 | Di chuyển hướng 5 (`5`) | (20, 31) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 71 |
| 11-13 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 69 |
| 14-16 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 67 |
| 17 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 65 |
| 18-19 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 64 |
| 20 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 62 |
| 21 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 60 |
| 22 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 58 |
| 23 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 56 |
| 24-26 | Di chuyển hướng 5 (`5`) | (18, 25) | (17, 25) | Dự kiến đến điểm hẹn tọa độ (17, 25) | 54 |
| 27-28 | Di chuyển hướng 4 (`4`) | (17, 25) | (16, 26) | Dự kiến đến điểm hẹn tọa độ (16, 26) | 53 |
| 29-30 | Di chuyển hướng 5 (`5`) | (16, 26) | (15, 26) | Dự kiến đến điểm hẹn tọa độ (15, 26) | 52 |
| 31-33 | Di chuyển hướng 4 (`4`) | (15, 26) | (15, 27) | Dự kiến đến điểm hẹn tọa độ (15, 27) | 50 |
| 34-36 | Di chuyển hướng 4 (`4`) | (15, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 48 |
| 37-38 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 47 |
| 39 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 45 |
| 40 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 43 |
| 41 | Di chuyển hướng 5 (`5`) | (12, 27) | (11, 27) | Dự kiến đến điểm hẹn tọa độ (11, 27) | 41 |
| 42-43 | Di chuyển hướng 5 (`5`) | (11, 27) | (10, 27) | Dự kiến đến điểm hẹn tọa độ (10, 27) | 40 |
| 44-45 | Di chuyển hướng 0 (`0`) | (10, 27) | (9, 26) | Dự kiến đến điểm hẹn tọa độ (9, 26) | 39 |
| 46-47 | Di chuyển hướng 5 (`5`) | (9, 26) | (8, 26) | Dự kiến đến điểm hẹn tọa độ (8, 26) | 38 |
| 48-50 | Di chuyển hướng 5 (`5`) | (8, 26) | (7, 26) | Dự kiến đến điểm hẹn tọa độ (7, 26) | 36 |
| 51 | Di chuyển hướng 4 (`4`) | (7, 26) | (7, 27) | Dự kiến đến điểm hẹn tọa độ (7, 27) | 34 |
| 52 | Di chuyển hướng 5 (`5`) | (7, 27) | (6, 27) | Dự kiến đến điểm hẹn tọa độ (6, 27) | 32 |
| 53-55 | Di chuyển hướng 5 (`5`) | (6, 27) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 30 |
| 56-58 | Di chuyển hướng 4 (`4`) | (5, 27) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 28 |
| 59 | Di chuyển hướng 3 (`3`) | (4, 28) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 26 |
| 60 | Di chuyển hướng 4 (`4`) | (5, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 24 |
| 61 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 22 |
| 62-63 | Di chuyển hướng 0 (`0`) | (5, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 21 |
| 64 | Di chuyển hướng 0 (`0`) | (4, 30) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 19 |
| 65-67 | Di chuyển hướng 5 (`5`) | (4, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 17 |
| 68-70 | Di chuyển hướng 5 (`5`) | (3, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 15 |
| 71-73 | Di chuyển hướng 5 (`5`) | (2, 29) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 13 |
| 74 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 11 |
| 75 | Chờ 1 bước (`-1`) | (0, 30) | (0, 30) | Dự kiến đứng yên tại (0, 30); mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 11 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (26, 17) (ô=570)
- Nhiên liệu đầu ngày: 119
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 0)
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 4, 5, 5, 4, 3, 5, 5, 5, 0, 0, 1, 1, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (26, 17) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 117 |
| 3-4 | Di chuyển hướng 0 (`0`) | (26, 16) | (26, 15) | Dự kiến đến điểm hẹn tọa độ (26, 15) | 116 |
| 5 | Di chuyển hướng 0 (`0`) | (26, 15) | (25, 14) | Dự kiến đến điểm hẹn tọa độ (25, 14) | 114 |
| 6 | Di chuyển hướng 0 (`0`) | (25, 14) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 112 |
| 7-8 | Di chuyển hướng 0 (`0`) | (25, 13) | (24, 12) | Dự kiến đến điểm hẹn tọa độ (24, 12) | 111 |
| 9-10 | Di chuyển hướng 0 (`0`) | (24, 12) | (24, 11) | Dự kiến đến điểm hẹn tọa độ (24, 11) | 110 |
| 11 | Di chuyển hướng 0 (`0`) | (24, 11) | (23, 10) | Dự kiến đến điểm hẹn tọa độ (23, 10) | 108 |
| 12 | Di chuyển hướng 1 (`1`) | (23, 10) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 106 |
| 13-15 | Di chuyển hướng 1 (`1`) | (24, 9) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 104 |
| 16 | Di chuyển hướng 1 (`1`) | (24, 8) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 102 |
| 17 | Di chuyển hướng 1 (`1`) | (25, 7) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 100 |
| 18 | Di chuyển hướng 1 (`1`) | (25, 6) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 98 |
| 19 | Di chuyển hướng 1 (`1`) | (26, 5) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 96 |
| 20-21 | Di chuyển hướng 1 (`1`) | (26, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 95 |
| 22-23 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 94 |
| 24-26 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 92 |
| 27-29 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 90 |
| 30 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 88 |
| 31 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 86 |
| 32 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 84 |
| 33-34 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 83 |
| 35 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 81 |
| 36 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 79 |
| 37 | Di chuyển hướng 5 (`5`) | (28, 0) | (27, 0) | Dự kiến đến điểm hẹn tọa độ (27, 0) | 77 |
| 38 | Di chuyển hướng 5 (`5`) | (27, 0) | (26, 0) | Dự kiến đến điểm hẹn tọa độ (26, 0) | 75 |
| 39 | Di chuyển hướng 5 (`5`) | (26, 0) | (25, 0) | Dự kiến đến điểm hẹn tọa độ (25, 0) | 73 |
| 40 | Di chuyển hướng 4 (`4`) | (25, 0) | (25, 1) | Dự kiến đến điểm hẹn tọa độ (25, 1) | 71 |
| 41 | Di chuyển hướng 5 (`5`) | (25, 1) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 69 |
| 42-43 | Di chuyển hướng 5 (`5`) | (24, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 68 |
| 44-45 | Di chuyển hướng 5 (`5`) | (23, 1) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 67 |
| 46-48 | Di chuyển hướng 5 (`5`) | (22, 1) | (21, 1) | Dự kiến đến điểm hẹn tọa độ (21, 1) | 65 |
| 49-50 | Di chuyển hướng 5 (`5`) | (21, 1) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 64 |
| 51-52 | Di chuyển hướng 5 (`5`) | (20, 1) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 63 |
| 53 | Di chuyển hướng 4 (`4`) | (19, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 61 |
| 54 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 59 |
| 55-56 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 58 |
| 57-58 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 57 |
| 59-61 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 55 |
| 62-63 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 54 |
| 64 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 52 |
| 65-66 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 51 |
| 67 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 49 |
| 68 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 47 |
| 69 | Di chuyển hướng 1 (`1`) | (12, 2) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 45 |
| 70 | Di chuyển hướng 1 (`1`) | (13, 1) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 43 |
| 71-72 | Di chuyển hướng 2 (`2`) | (13, 0) | (14, 0) | Dự kiến đến điểm hẹn tọa độ (14, 0) | 42 |
| 73-74 | Di chuyển hướng 2 (`2`) | (14, 0) | (15, 0) | Dự kiến đến điểm hẹn tọa độ (15, 0) | 41 |
| 75 | Chờ 1 bước (`-1`) | (15, 0) | (15, 0) | Dự kiến đứng yên tại (15, 0); hướng tới tọa độ (15, 0) | 41 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (26, 16) (ô=538)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 19)
- Mảng hành động đã gửi server: `[0, 5, 4, 4, 4, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 0, 0, 0, 5, 2, 3, 4, 4, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (26, 16) | (26, 15) | Dự kiến đến điểm hẹn tọa độ (26, 15) | 120 |
| 2 | Di chuyển hướng 5 (`5`) | (26, 15) | (25, 15) | Dự kiến đến điểm hẹn tọa độ (25, 15) | 120 |
| 3-5 | Di chuyển hướng 4 (`4`) | (25, 15) | (24, 16) | Dự kiến đến điểm hẹn tọa độ (24, 16) | 120 |
| 6 | Di chuyển hướng 4 (`4`) | (24, 16) | (24, 17) | Dự kiến đến điểm hẹn tọa độ (24, 17) | 120 |
| 7 | Di chuyển hướng 4 (`4`) | (24, 17) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 120 |
| 8 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 120 |
| 9-10 | Di chuyển hướng 5 (`5`) | (23, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 120 |
| 11-12 | Di chuyển hướng 5 (`5`) | (22, 19) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 120 |
| 13 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 120 |
| 14 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 120 |
| 15 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 120 |
| 16-18 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 120 |
| 19-21 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 120 |
| 22-23 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 120 |
| 24-25 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 120 |
| 26-27 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 120 |
| 28 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 120 |
| 29 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 120 |
| 30 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 120 |
| 31 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 120 |
| 32 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 120 |
| 33 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 120 |
| 34 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=1, tọa độ=(8, 16)) | 120 |
| 35-36 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 120 |
| 37 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 120 |
| 38 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 120 |
| 39-41 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 120 |
| 42-75 | Chờ 34 bước (`-34`) | (9, 19) | (9, 19) | Dự kiến đứng yên tại (9, 19); hướng tới tọa độ (9, 19) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (15, 11) (ô=367)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=6, tọa độ=(26, 18))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=6, tọa độ=(26, 18))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 3, 3, 2, 3, 3, 2, 1, 2, 2, 2, 2, 2, 1, -51]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 4 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 120 |
| 5 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 120 |
| 6 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 7 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 8 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 120 |
| 9 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 120 |
| 10 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 120 |
| 11 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 120 |
| 12 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 120 |
| 13 | Di chuyển hướng 2 (`2`) | (19, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 120 |
| 14 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 120 |
| 15 | Di chuyển hướng 2 (`2`) | (21, 19) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 120 |
| 16-17 | Di chuyển hướng 2 (`2`) | (22, 19) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 120 |
| 18-19 | Di chuyển hướng 2 (`2`) | (23, 19) | (24, 19) | Dự kiến đến điểm hẹn tọa độ (24, 19) | 120 |
| 20 | Di chuyển hướng 2 (`2`) | (24, 19) | (25, 19) | Dự kiến đến điểm hẹn tọa độ (25, 19) | 120 |
| 21-23 | Di chuyển hướng 2 (`2`) | (25, 19) | (26, 19) | Dự kiến đến điểm hẹn tọa độ (26, 19) | 120 |
| 24 | Di chuyển hướng 1 (`1`) | (26, 19) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 120 |
| 25-75 | Chờ 51 bước (`-51`) | (26, 18) | (26, 18) | Dự kiến đứng yên tại (26, 18); mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 120 |

