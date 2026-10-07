# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 100
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 16 | #0 | #5 | (15, 4) | 19 | 120 |
| 44 | #3 | #5 | (22, 31) | 3 | 120 |
| 75 | #0 | #6 | (2, 29) | 47 | 120 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 6) (ô=201)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=5, tọa độ=(6, 26))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=5, tọa độ=(6, 26))
- Mảng hành động đã gửi server: `[0, 1, 1, 1, 1, 1, 2, 2, 4, 4, 3, 3, 2, 2, 2, 5, 4, 4, 3, 4, 4, 4, 4, 5, 4, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 4, 4, 4, 4, 3, 4, 3, 3, 4, 3, 3, 4, 4, 4, 3, 3, 4, 3, 4, 1, 2, 2, 2, 3, 3, 5, 5, 2, 1, 1, 0, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 43 |
| 1 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 41 |
| 2 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 39 |
| 3 | Di chuyển hướng 1 (`1`) | (10, 3) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 37 |
| 4 | Di chuyển hướng 1 (`1`) | (10, 2) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 35 |
| 5 | Di chuyển hướng 1 (`1`) | (11, 1) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 33 |
| 6 | Di chuyển hướng 2 (`2`) | (11, 0) | (12, 0) | Dự kiến đến điểm hẹn tọa độ (12, 0) | 31 |
| 7 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 0)) | 29 |
| 8-9 | Di chuyển hướng 4 (`4`) | (13, 0) | (13, 1) | Dự kiến đến điểm hẹn tọa độ (13, 1) | 28 |
| 10 | Di chuyển hướng 4 (`4`) | (13, 1) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 26 |
| 11 | Di chuyển hướng 3 (`3`) | (12, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 24 |
| 12 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 22 |
| 13 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 20 |
| 14-15 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 120 |
| 16 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 118 |
| 17-18 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 117 |
| 19 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 115 |
| 20 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 113 |
| 21 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 111 |
| 22 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 109 |
| 23 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 107 |
| 24-26 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 105 |
| 27-28 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 104 |
| 29 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=9, tọa độ=(12, 11)) | 102 |
| 30-31 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 101 |
| 32-33 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 100 |
| 34-35 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 99 |
| 36-37 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 98 |
| 38-40 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 96 |
| 41 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 94 |
| 42-43 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=10, tọa độ=(5, 12)) | 93 |
| 44-45 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 92 |
| 46 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 90 |
| 47 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 88 |
| 48-50 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 86 |
| 51 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 84 |
| 52 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 82 |
| 53 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 80 |
| 54 | Di chuyển hướng 4 (`4`) | (0, 14) | (0, 15) | Dự kiến đến điểm hẹn tọa độ (0, 15) | 78 |
| 55 | Di chuyển hướng 3 (`3`) | (0, 15) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 76 |
| 56 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 74 |
| 57-58 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=12, tọa độ=(0, 18)) | 73 |
| 59-60 | Di chuyển hướng 3 (`3`) | (0, 18) | (1, 19) | Dự kiến đến điểm hẹn tọa độ (1, 19) | 72 |
| 61 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 70 |
| 62 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 68 |
| 63 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến đến điểm hẹn tọa độ (1, 22) | 66 |
| 64 | Di chuyển hướng 4 (`4`) | (1, 22) | (1, 23) | Dự kiến đến điểm hẹn tọa độ (1, 23) | 64 |
| 65 | Di chuyển hướng 4 (`4`) | (1, 23) | (0, 24) | Dự kiến đến điểm hẹn tọa độ (0, 24) | 62 |
| 66 | Di chuyển hướng 4 (`4`) | (0, 24) | (0, 25) | Dự kiến đến điểm hẹn tọa độ (0, 25) | 60 |
| 67 | Di chuyển hướng 3 (`3`) | (0, 25) | (0, 26) | Dự kiến đến điểm hẹn tọa độ (0, 26) | 58 |
| 68 | Di chuyển hướng 3 (`3`) | (0, 26) | (1, 27) | Dự kiến đến điểm hẹn tọa độ (1, 27) | 56 |
| 69 | Di chuyển hướng 4 (`4`) | (1, 27) | (0, 28) | Dự kiến đến điểm hẹn tọa độ (0, 28) | 54 |
| 70 | Di chuyển hướng 3 (`3`) | (0, 28) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 52 |
| 71 | Di chuyển hướng 4 (`4`) | (1, 29) | (0, 30) | Dự kiến đạt mục tiêu Spot #27 (thương hiệu=19, tọa độ=(0, 30)) | 50 |
| 72-73 | Di chuyển hướng 1 (`1`) | (0, 30) | (1, 29) | Dự kiến đến điểm hẹn tọa độ (1, 29) | 49 |
| 74 | Di chuyển hướng 2 (`2`) | (1, 29) | (2, 29) | Dự kiến đến điểm hẹn tọa độ (2, 29) | 120 |
| 75-77 | Di chuyển hướng 2 (`2`) | (2, 29) | (3, 29) | Dự kiến đến điểm hẹn tọa độ (3, 29) | 118 |
| 78-80 | Di chuyển hướng 2 (`2`) | (3, 29) | (4, 29) | Dự kiến đến điểm hẹn tọa độ (4, 29) | 116 |
| 81-83 | Di chuyển hướng 3 (`3`) | (4, 29) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 114 |
| 84 | Di chuyển hướng 3 (`3`) | (4, 30) | (5, 31) | Dự kiến đạt mục tiêu Spot #29 (thương hiệu=21, tọa độ=(5, 31)) | 112 |
| 85-86 | Di chuyển hướng 5 (`5`) | (5, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 111 |
| 87 | Di chuyển hướng 5 (`5`) | (4, 31) | (3, 31) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=11, tọa độ=(3, 31)) | 109 |
| 88-89 | Di chuyển hướng 2 (`2`) | (3, 31) | (4, 31) | Dự kiến đến điểm hẹn tọa độ (4, 31) | 108 |
| 90 | Di chuyển hướng 1 (`1`) | (4, 31) | (4, 30) | Dự kiến đến điểm hẹn tọa độ (4, 30) | 106 |
| 91 | Di chuyển hướng 1 (`1`) | (4, 30) | (5, 29) | Dự kiến đến điểm hẹn tọa độ (5, 29) | 104 |
| 92 | Di chuyển hướng 0 (`0`) | (5, 29) | (4, 28) | Dự kiến đến điểm hẹn tọa độ (4, 28) | 102 |
| 93 | Di chuyển hướng 1 (`1`) | (4, 28) | (5, 27) | Dự kiến đến điểm hẹn tọa độ (5, 27) | 100 |
| 94-96 | Di chuyển hướng 1 (`1`) | (5, 27) | (5, 26) | Dự kiến đến điểm hẹn tọa độ (5, 26) | 98 |
| 97-99 | Di chuyển hướng 2 (`2`) | (5, 26) | (6, 26) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=5, tọa độ=(6, 26)) | 96 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (26, 17) (ô=570)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=15, tọa độ=(31, 21))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=15, tọa độ=(31, 21))
- Mảng hành động đã gửi server: `[4, 5, 0, 5, 5, 0, 0, 3, 3, 4, 5, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 2, 3, 2, 2, 2, 1, 1, 1, 0, 0, 1, 1, 1, 0, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (26, 17) | (25, 18) | Dự kiến đến điểm hẹn tọa độ (25, 18) | 58 |
| 3-4 | Di chuyển hướng 5 (`5`) | (25, 18) | (24, 18) | Dự kiến đến điểm hẹn tọa độ (24, 18) | 57 |
| 5-7 | Di chuyển hướng 0 (`0`) | (24, 18) | (24, 17) | Dự kiến đến điểm hẹn tọa độ (24, 17) | 55 |
| 8 | Di chuyển hướng 5 (`5`) | (24, 17) | (23, 17) | Dự kiến đến điểm hẹn tọa độ (23, 17) | 53 |
| 9-10 | Di chuyển hướng 5 (`5`) | (23, 17) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 52 |
| 11-13 | Di chuyển hướng 0 (`0`) | (22, 17) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 50 |
| 14-16 | Di chuyển hướng 0 (`0`) | (21, 16) | (21, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(21, 15)) | 48 |
| 17-18 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 47 |
| 19-21 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đến điểm hẹn tọa độ (22, 17) | 45 |
| 22-24 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 43 |
| 25-27 | Di chuyển hướng 5 (`5`) | (21, 18) | (20, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=13, tọa độ=(20, 18)) | 41 |
| 28-29 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 40 |
| 30 | Di chuyển hướng 3 (`3`) | (21, 19) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 38 |
| 31-33 | Di chuyển hướng 3 (`3`) | (21, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 36 |
| 34-35 | Di chuyển hướng 4 (`4`) | (22, 21) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 35 |
| 36 | Di chuyển hướng 3 (`3`) | (21, 22) | (22, 23) | Dự kiến đến điểm hẹn tọa độ (22, 23) | 33 |
| 37-38 | Di chuyển hướng 3 (`3`) | (22, 23) | (22, 24) | Dự kiến đến điểm hẹn tọa độ (22, 24) | 32 |
| 39-40 | Di chuyển hướng 3 (`3`) | (22, 24) | (23, 25) | Dự kiến đến điểm hẹn tọa độ (23, 25) | 31 |
| 41-43 | Di chuyển hướng 3 (`3`) | (23, 25) | (23, 26) | Dự kiến đến điểm hẹn tọa độ (23, 26) | 29 |
| 44-45 | Di chuyển hướng 3 (`3`) | (23, 26) | (24, 27) | Dự kiến đến điểm hẹn tọa độ (24, 27) | 28 |
| 46-48 | Di chuyển hướng 3 (`3`) | (24, 27) | (24, 28) | Dự kiến đến điểm hẹn tọa độ (24, 28) | 26 |
| 49-50 | Di chuyển hướng 3 (`3`) | (24, 28) | (25, 29) | Dự kiến đến điểm hẹn tọa độ (25, 29) | 25 |
| 51-52 | Di chuyển hướng 2 (`2`) | (25, 29) | (26, 29) | Dự kiến đến điểm hẹn tọa độ (26, 29) | 24 |
| 53 | Di chuyển hướng 3 (`3`) | (26, 29) | (26, 30) | Dự kiến đến điểm hẹn tọa độ (26, 30) | 22 |
| 54 | Di chuyển hướng 2 (`2`) | (26, 30) | (27, 30) | Dự kiến đạt mục tiêu Spot #28 (thương hiệu=20, tọa độ=(27, 30)) | 20 |
| 55-56 | Di chuyển hướng 2 (`2`) | (27, 30) | (28, 30) | Dự kiến đến điểm hẹn tọa độ (28, 30) | 19 |
| 57-58 | Di chuyển hướng 2 (`2`) | (28, 30) | (29, 30) | Dự kiến đến điểm hẹn tọa độ (29, 30) | 18 |
| 59-61 | Di chuyển hướng 1 (`1`) | (29, 30) | (30, 29) | Dự kiến đạt mục tiêu Spot #26 (thương hiệu=18, tọa độ=(30, 29)) | 16 |
| 62-63 | Di chuyển hướng 1 (`1`) | (30, 29) | (30, 28) | Dự kiến đến điểm hẹn tọa độ (30, 28) | 15 |
| 64 | Di chuyển hướng 1 (`1`) | (30, 28) | (31, 27) | Dự kiến đến điểm hẹn tọa độ (31, 27) | 13 |
| 65 | Di chuyển hướng 0 (`0`) | (31, 27) | (30, 26) | Dự kiến đến điểm hẹn tọa độ (30, 26) | 11 |
| 66 | Di chuyển hướng 0 (`0`) | (30, 26) | (30, 25) | Dự kiến đến điểm hẹn tọa độ (30, 25) | 9 |
| 67 | Di chuyển hướng 1 (`1`) | (30, 25) | (30, 24) | Dự kiến đến điểm hẹn tọa độ (30, 24) | 7 |
| 68-69 | Di chuyển hướng 1 (`1`) | (30, 24) | (31, 23) | Dự kiến đến điểm hẹn tọa độ (31, 23) | 6 |
| 70-72 | Di chuyển hướng 1 (`1`) | (31, 23) | (31, 22) | Dự kiến đến điểm hẹn tọa độ (31, 22) | 4 |
| 73-74 | Di chuyển hướng 0 (`0`) | (31, 22) | (31, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 3 |
| 75-99 | Chờ 25 bước (`-25`) | (31, 21) | (31, 21) | Dự kiến đứng yên tại (31, 21); mục tiêu Spot #23 (thương hiệu=15, tọa độ=(31, 21)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (31, 4) (ô=159)
- Nhiên liệu đầu ngày: 63
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=1, tọa độ=(22, 21))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=1, tọa độ=(22, 21))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 1, 1, 1, 2, 2, 2, 5, 5, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 4, 3, 4, 3, 3, 3, 4, 3, 5, 5, 5, 4, 4, 4, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (31, 4) | (30, 4) | Dự kiến đến điểm hẹn tọa độ (30, 4) | 62 |
| 2 | Di chuyển hướng 5 (`5`) | (30, 4) | (29, 4) | Dự kiến đến điểm hẹn tọa độ (29, 4) | 60 |
| 3-5 | Di chuyển hướng 5 (`5`) | (29, 4) | (28, 4) | Dự kiến đến điểm hẹn tọa độ (28, 4) | 58 |
| 6-7 | Di chuyển hướng 5 (`5`) | (28, 4) | (27, 4) | Dự kiến đến điểm hẹn tọa độ (27, 4) | 57 |
| 8-9 | Di chuyển hướng 0 (`0`) | (27, 4) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 56 |
| 10-11 | Di chuyển hướng 1 (`1`) | (27, 3) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 55 |
| 12-14 | Di chuyển hướng 1 (`1`) | (27, 2) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 53 |
| 15-17 | Di chuyển hướng 1 (`1`) | (28, 1) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 51 |
| 18 | Di chuyển hướng 2 (`2`) | (28, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 49 |
| 19 | Di chuyển hướng 2 (`2`) | (29, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 47 |
| 20 | Di chuyển hướng 2 (`2`) | (30, 0) | (31, 0) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=2, tọa độ=(31, 0)) | 45 |
| 21-22 | Di chuyển hướng 5 (`5`) | (31, 0) | (30, 0) | Dự kiến đến điểm hẹn tọa độ (30, 0) | 44 |
| 23 | Di chuyển hướng 5 (`5`) | (30, 0) | (29, 0) | Dự kiến đến điểm hẹn tọa độ (29, 0) | 42 |
| 24 | Di chuyển hướng 5 (`5`) | (29, 0) | (28, 0) | Dự kiến đến điểm hẹn tọa độ (28, 0) | 40 |
| 25 | Di chuyển hướng 4 (`4`) | (28, 0) | (28, 1) | Dự kiến đến điểm hẹn tọa độ (28, 1) | 38 |
| 26-28 | Di chuyển hướng 4 (`4`) | (28, 1) | (27, 2) | Dự kiến đến điểm hẹn tọa độ (27, 2) | 36 |
| 29-31 | Di chuyển hướng 4 (`4`) | (27, 2) | (27, 3) | Dự kiến đến điểm hẹn tọa độ (27, 3) | 34 |
| 32-33 | Di chuyển hướng 4 (`4`) | (27, 3) | (26, 4) | Dự kiến đến điểm hẹn tọa độ (26, 4) | 33 |
| 34-35 | Di chuyển hướng 4 (`4`) | (26, 4) | (26, 5) | Dự kiến đến điểm hẹn tọa độ (26, 5) | 32 |
| 36 | Di chuyển hướng 4 (`4`) | (26, 5) | (25, 6) | Dự kiến đến điểm hẹn tọa độ (25, 6) | 30 |
| 37 | Di chuyển hướng 4 (`4`) | (25, 6) | (25, 7) | Dự kiến đến điểm hẹn tọa độ (25, 7) | 28 |
| 38 | Di chuyển hướng 4 (`4`) | (25, 7) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 26 |
| 39 | Di chuyển hướng 3 (`3`) | (24, 8) | (25, 9) | Dự kiến đến điểm hẹn tọa độ (25, 9) | 24 |
| 40 | Di chuyển hướng 3 (`3`) | (25, 9) | (25, 10) | Dự kiến đến điểm hẹn tọa độ (25, 10) | 22 |
| 41 | Di chuyển hướng 4 (`4`) | (25, 10) | (25, 11) | Dự kiến đến điểm hẹn tọa độ (25, 11) | 20 |
| 42-44 | Di chuyển hướng 3 (`3`) | (25, 11) | (25, 12) | Dự kiến đến điểm hẹn tọa độ (25, 12) | 18 |
| 45-46 | Di chuyển hướng 4 (`4`) | (25, 12) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 17 |
| 47-48 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến đến điểm hẹn tọa độ (25, 14) | 16 |
| 49 | Di chuyển hướng 3 (`3`) | (25, 14) | (26, 15) | Dự kiến đến điểm hẹn tọa độ (26, 15) | 14 |
| 50 | Di chuyển hướng 3 (`3`) | (26, 15) | (26, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=11, tọa độ=(26, 16)) | 12 |
| 51-52 | Di chuyển hướng 4 (`4`) | (26, 16) | (26, 17) | Dự kiến đến điểm hẹn tọa độ (26, 17) | 11 |
| 53-55 | Di chuyển hướng 3 (`3`) | (26, 17) | (26, 18) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=6, tọa độ=(26, 18)) | 9 |
| 56-57 | Di chuyển hướng 5 (`5`) | (26, 18) | (25, 18) | Dự kiến đến điểm hẹn tọa độ (25, 18) | 8 |
| 58-59 | Di chuyển hướng 5 (`5`) | (25, 18) | (24, 18) | Dự kiến đến điểm hẹn tọa độ (24, 18) | 7 |
| 60-62 | Di chuyển hướng 5 (`5`) | (24, 18) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 5 |
| 63 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đến điểm hẹn tọa độ (23, 19) | 3 |
| 64-65 | Di chuyển hướng 4 (`4`) | (23, 19) | (22, 20) | Dự kiến đến điểm hẹn tọa độ (22, 20) | 2 |
| 66-68 | Di chuyển hướng 4 (`4`) | (22, 20) | (22, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 0 |
| 69-99 | Chờ 31 bước (`-31`) | (22, 21) | (22, 21) | Dự kiến đứng yên tại (22, 21); mục tiêu Spot #5 (thương hiệu=1, tọa độ=(22, 21)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (22, 31) (ô=1014)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 27)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 27)
- Mảng hành động đã gửi server: `[-44, 5, 5, 5, 0, 0, 5, 2, 1, 1, 0, 0, 0, 0, 0, 0, 5, 0, 3, 4, 4, 4, 4, 3, 3, 3, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-43 | Chờ 44 bước (`-44`) | (22, 31) | (22, 31) | Dự kiến đứng yên tại (22, 31); mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 120 |
| 44-45 | Di chuyển hướng 5 (`5`) | (22, 31) | (21, 31) | Dự kiến đến điểm hẹn tọa độ (21, 31) | 119 |
| 46-48 | Di chuyển hướng 5 (`5`) | (21, 31) | (20, 31) | Dự kiến đến điểm hẹn tọa độ (20, 31) | 117 |
| 49-51 | Di chuyển hướng 5 (`5`) | (20, 31) | (19, 31) | Dự kiến đến điểm hẹn tọa độ (19, 31) | 115 |
| 52-54 | Di chuyển hướng 0 (`0`) | (19, 31) | (18, 30) | Dự kiến đến điểm hẹn tọa độ (18, 30) | 113 |
| 55-57 | Di chuyển hướng 0 (`0`) | (18, 30) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 111 |
| 58 | Di chuyển hướng 5 (`5`) | (18, 29) | (17, 29) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=17, tọa độ=(17, 29)) | 109 |
| 59-60 | Di chuyển hướng 2 (`2`) | (17, 29) | (18, 29) | Dự kiến đến điểm hẹn tọa độ (18, 29) | 108 |
| 61 | Di chuyển hướng 1 (`1`) | (18, 29) | (18, 28) | Dự kiến đến điểm hẹn tọa độ (18, 28) | 106 |
| 62 | Di chuyển hướng 1 (`1`) | (18, 28) | (19, 27) | Dự kiến đến điểm hẹn tọa độ (19, 27) | 104 |
| 63 | Di chuyển hướng 0 (`0`) | (19, 27) | (18, 26) | Dự kiến đến điểm hẹn tọa độ (18, 26) | 102 |
| 64 | Di chuyển hướng 0 (`0`) | (18, 26) | (18, 25) | Dự kiến đến điểm hẹn tọa độ (18, 25) | 100 |
| 65-67 | Di chuyển hướng 0 (`0`) | (18, 25) | (17, 24) | Dự kiến đến điểm hẹn tọa độ (17, 24) | 98 |
| 68-69 | Di chuyển hướng 0 (`0`) | (17, 24) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 97 |
| 70-71 | Di chuyển hướng 0 (`0`) | (17, 23) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 96 |
| 72-73 | Di chuyển hướng 0 (`0`) | (16, 22) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 95 |
| 74-75 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 94 |
| 76-77 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=14, tọa độ=(14, 20)) | 93 |
| 78-79 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 92 |
| 80-81 | Di chuyển hướng 4 (`4`) | (15, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 91 |
| 82-83 | Di chuyển hướng 4 (`4`) | (14, 22) | (14, 23) | Dự kiến đến điểm hẹn tọa độ (14, 23) | 90 |
| 84-85 | Di chuyển hướng 4 (`4`) | (14, 23) | (13, 24) | Dự kiến đến điểm hẹn tọa độ (13, 24) | 89 |
| 86-88 | Di chuyển hướng 4 (`4`) | (13, 24) | (13, 25) | Dự kiến đến điểm hẹn tọa độ (13, 25) | 87 |
| 89-90 | Di chuyển hướng 3 (`3`) | (13, 25) | (13, 26) | Dự kiến đến điểm hẹn tọa độ (13, 26) | 86 |
| 91-92 | Di chuyển hướng 3 (`3`) | (13, 26) | (14, 27) | Dự kiến đến điểm hẹn tọa độ (14, 27) | 85 |
| 93-95 | Di chuyển hướng 3 (`3`) | (14, 27) | (14, 28) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=16, tọa độ=(14, 28)) | 83 |
| 96-97 | Di chuyển hướng 5 (`5`) | (14, 28) | (13, 28) | Dự kiến đến điểm hẹn tọa độ (13, 28) | 82 |
| 98 | Di chuyển hướng 5 (`5`) | (13, 28) | (12, 28) | Dự kiến đến điểm hẹn tọa độ (12, 28) | 80 |
| 99 | Di chuyển hướng 0 (`0`) | (12, 28) | (12, 27) | Dự kiến đến điểm hẹn tọa độ (12, 27) | 78 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (31, 6) (ô=223)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=7, tọa độ=(31, 6))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=7, tọa độ=(31, 6))
- Mảng hành động đã gửi server: `[-100]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-99 | Chờ 100 bước (`-100`) | (31, 6) | (31, 6) | Dự kiến đứng yên tại (31, 6); mục tiêu Spot #13 (thương hiệu=7, tọa độ=(31, 6)) | 3 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (19, 6) (ô=211)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Spot #31 (thương hiệu=23, tọa độ=(22, 31))
- Địa điểm đích kế hoạch: Spot #31 (thương hiệu=23, tọa độ=(22, 31))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 5, -5, 4, 4, 3, 4, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 2, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 4, -56]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 120 |
| 4 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 120 |
| 5-6 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 120 |
| 7-8 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=4, tọa độ=(16, 4)) | 120 |
| 9-10 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 120 |
| 11-15 | Chờ 5 bước (`-5`) | (15, 4) | (15, 4) | Dự kiến đứng yên tại (15, 4); hướng tới tọa độ (15, 4) | 120 |
| 16 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 120 |
| 17 | Di chuyển hướng 4 (`4`) | (15, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 120 |
| 18 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 120 |
| 19 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 120 |
| 20 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 120 |
| 21 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 120 |
| 22 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 120 |
| 23 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 120 |
| 24 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 120 |
| 25 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 120 |
| 26 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 120 |
| 27 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 120 |
| 28 | Di chuyển hướng 3 (`3`) | (16, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 120 |
| 29 | Di chuyển hướng 3 (`3`) | (17, 17) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 120 |
| 30 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 120 |
| 31 | Di chuyển hướng 3 (`3`) | (18, 18) | (19, 19) | Dự kiến đến điểm hẹn tọa độ (19, 19) | 120 |
| 32 | Di chuyển hướng 3 (`3`) | (19, 19) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 120 |
| 33 | Di chuyển hướng 3 (`3`) | (19, 20) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 120 |
| 34 | Di chuyển hướng 3 (`3`) | (20, 21) | (20, 22) | Dự kiến đến điểm hẹn tọa độ (20, 22) | 120 |
| 35 | Di chuyển hướng 3 (`3`) | (20, 22) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 120 |
| 36 | Di chuyển hướng 4 (`4`) | (21, 23) | (20, 24) | Dự kiến đến điểm hẹn tọa độ (20, 24) | 120 |
| 37 | Di chuyển hướng 4 (`4`) | (20, 24) | (20, 25) | Dự kiến đến điểm hẹn tọa độ (20, 25) | 120 |
| 38 | Di chuyển hướng 3 (`3`) | (20, 25) | (20, 26) | Dự kiến đến điểm hẹn tọa độ (20, 26) | 120 |
| 39 | Di chuyển hướng 3 (`3`) | (20, 26) | (21, 27) | Dự kiến đến điểm hẹn tọa độ (21, 27) | 120 |
| 40 | Di chuyển hướng 3 (`3`) | (21, 27) | (21, 28) | Dự kiến đến điểm hẹn tọa độ (21, 28) | 120 |
| 41 | Di chuyển hướng 3 (`3`) | (21, 28) | (22, 29) | Dự kiến đến điểm hẹn tọa độ (22, 29) | 120 |
| 42 | Di chuyển hướng 3 (`3`) | (22, 29) | (22, 30) | Dự kiến đến điểm hẹn tọa độ (22, 30) | 120 |
| 43 | Di chuyển hướng 4 (`4`) | (22, 30) | (22, 31) | Dự kiến đạt mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 120 |
| 44-99 | Chờ 56 bước (`-56`) | (22, 31) | (22, 31) | Dự kiến đứng yên tại (22, 31); mục tiêu Spot #31 (thương hiệu=23, tọa độ=(22, 31)) | 120 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (2, 29) (ô=930)
- Nhiên liệu đầu ngày: 120
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 29)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 29)
- Mảng hành động đã gửi server: `[-100]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-99 | Chờ 100 bước (`-100`) | (2, 29) | (2, 29) | Dự kiến đứng yên tại (2, 29); hướng tới tọa độ (2, 29) | 120 |

