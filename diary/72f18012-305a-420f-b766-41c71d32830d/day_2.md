# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 68
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #4 | (21, 0) | 79 | 80 |
| 33 | #1 | #4 | (8, 20) | 1 | 80 |
| 51 | #0 | #4 | (6, 7) | 21 | 80 |
| 52 | #0 | #4 | (6, 8) | 78 | 80 |
| 53 | #0 | #4 | (7, 9) | 78 | 80 |
| 54 | #0 | #4 | (8, 9) | 78 | 80 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (21, 0) (ô=21)
- Nhiên liệu đầu ngày: 79
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 16)
- Mảng hành động đã gửi server: `[3, 4, 3, 4, 4, 4, 5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 5, 0, 1, 0, 3, 4, 3, 4, 3, 3, 3, 3, 3, 2, 3, 4, 3, 3, 3, 4, 4, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (21, 0) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 77 |
| 1-3 | Di chuyển hướng 4 (`4`) | (22, 1) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 75 |
| 4-5 | Di chuyển hướng 3 (`3`) | (21, 2) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 74 |
| 6-8 | Di chuyển hướng 4 (`4`) | (22, 3) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 72 |
| 9-10 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 71 |
| 11 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 69 |
| 12 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 67 |
| 13 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 65 |
| 14 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 63 |
| 15-16 | Di chuyển hướng 5 (`5`) | (18, 4) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 62 |
| 17-18 | Di chuyển hướng 5 (`5`) | (17, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 61 |
| 19-21 | Di chuyển hướng 5 (`5`) | (16, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 59 |
| 22 | Di chuyển hướng 5 (`5`) | (15, 4) | (14, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=5, tọa độ=(14, 4)) | 57 |
| 23-24 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 56 |
| 25-27 | Di chuyển hướng 5 (`5`) | (13, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 54 |
| 28 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 52 |
| 29 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 50 |
| 30 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 48 |
| 31 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 46 |
| 32 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 44 |
| 33 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 42 |
| 34-36 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 40 |
| 37 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 38 |
| 38 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 36 |
| 39 | Di chuyển hướng 1 (`1`) | (4, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 34 |
| 40 | Di chuyển hướng 0 (`0`) | (5, 1) | (4, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 0)) | 32 |
| 41-42 | Di chuyển hướng 3 (`3`) | (4, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 31 |
| 43 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 29 |
| 44 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 27 |
| 45 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 25 |
| 46-47 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 24 |
| 48-49 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 23 |
| 50 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 80 |
| 51 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 80 |
| 52 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 80 |
| 53 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 80 |
| 54 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=3, tọa độ=(8, 10)) | 78 |
| 55-56 | Di chuyển hướng 4 (`4`) | (8, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 77 |
| 57 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 75 |
| 58-59 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 74 |
| 60-61 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 73 |
| 62-63 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 72 |
| 64-65 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=11, tọa độ=(8, 16)) | 71 |
| 66-67 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 70 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 22) (ô=542)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 13)
- Mảng hành động đã gửi server: `[3, 0, 0, 0, 0, 5, 5, 5, 5, 4, -18, 4, 3, 3, 5, 5, 5, 5, 5, 0, 1, 0, 0, 1, 0, 1, 5, 5, 0, 1, 2, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=17, tọa độ=(15, 23)) | 13 |
| 1-2 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 12 |
| 3 | Di chuyển hướng 0 (`0`) | (14, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 10 |
| 4-5 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 9 |
| 6-7 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 8 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 7 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=13, tọa độ=(11, 19)) | 6 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 5 |
| 14 | Di chuyển hướng 5 (`5`) | (10, 19) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 3 |
| 15 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 1 |
| 16-33 | Chờ 18 bước (`-18`) | (8, 20) | (8, 20) | Dự kiến đứng yên tại (8, 20); mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 80 |
| 34-35 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 79 |
| 36 | Di chuyển hướng 3 (`3`) | (8, 21) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 77 |
| 37 | Di chuyển hướng 3 (`3`) | (8, 22) | (9, 23) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=16, tọa độ=(9, 23)) | 75 |
| 38-39 | Di chuyển hướng 5 (`5`) | (9, 23) | (8, 23) | Dự kiến đến điểm hẹn tọa độ (8, 23) | 74 |
| 40-42 | Di chuyển hướng 5 (`5`) | (8, 23) | (7, 23) | Dự kiến đến điểm hẹn tọa độ (7, 23) | 72 |
| 43 | Di chuyển hướng 5 (`5`) | (7, 23) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 70 |
| 44 | Di chuyển hướng 5 (`5`) | (6, 23) | (5, 23) | Dự kiến đến điểm hẹn tọa độ (5, 23) | 68 |
| 45 | Di chuyển hướng 5 (`5`) | (5, 23) | (4, 23) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=15, tọa độ=(4, 23)) | 66 |
| 46-47 | Di chuyển hướng 0 (`0`) | (4, 23) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 65 |
| 48 | Di chuyển hướng 1 (`1`) | (3, 22) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 63 |
| 49 | Di chuyển hướng 0 (`0`) | (4, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 61 |
| 50 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 59 |
| 51 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 57 |
| 52 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 55 |
| 53-55 | Di chuyển hướng 1 (`1`) | (3, 17) | (3, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(3, 16)) | 53 |
| 56-57 | Di chuyển hướng 5 (`5`) | (3, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 52 |
| 58 | Di chuyển hướng 5 (`5`) | (2, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 50 |
| 59 | Di chuyển hướng 0 (`0`) | (1, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 48 |
| 60 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 14)) | 46 |
| 61-62 | Di chuyển hướng 2 (`2`) | (1, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 45 |
| 63-64 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 44 |
| 65-67 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 42 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=12, tọa độ=(21, 15))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=12, tọa độ=(21, 15))
- Mảng hành động đã gửi server: `[2, 3, 4, 3, 4, 4, 4, 5, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 2, 3, 2, 2, 2, 3, 3, 3, 3, 3, 2, 1, 2, 1, 2, 4, 4, 4, 3, 4, 4, 4, 4, 3, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 80 |
| 2 | Di chuyển hướng 3 (`3`) | (21, 0) | (22, 1) | Dự kiến đến điểm hẹn tọa độ (22, 1) | 78 |
| 3-5 | Di chuyển hướng 4 (`4`) | (22, 1) | (21, 2) | Dự kiến đến điểm hẹn tọa độ (21, 2) | 76 |
| 6-7 | Di chuyển hướng 3 (`3`) | (21, 2) | (22, 3) | Dự kiến đến điểm hẹn tọa độ (22, 3) | 75 |
| 8-10 | Di chuyển hướng 4 (`4`) | (22, 3) | (21, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(21, 4)) | 73 |
| 11-12 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 72 |
| 13 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 70 |
| 14 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 68 |
| 15 | Di chuyển hướng 0 (`0`) | (19, 6) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 66 |
| 16 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 64 |
| 17-18 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 63 |
| 19 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 61 |
| 20 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 59 |
| 21 | Di chuyển hướng 0 (`0`) | (17, 1) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 57 |
| 22 | Di chuyển hướng 5 (`5`) | (16, 0) | (15, 0) | Dự kiến đến điểm hẹn tọa độ (15, 0) | 55 |
| 23 | Di chuyển hướng 5 (`5`) | (15, 0) | (14, 0) | Dự kiến đến điểm hẹn tọa độ (14, 0) | 53 |
| 24-26 | Di chuyển hướng 5 (`5`) | (14, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 51 |
| 27 | Di chuyển hướng 5 (`5`) | (13, 0) | (12, 0) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(12, 0)) | 49 |
| 28-29 | Di chuyển hướng 2 (`2`) | (12, 0) | (13, 0) | Dự kiến đến điểm hẹn tọa độ (13, 0) | 48 |
| 30 | Di chuyển hướng 3 (`3`) | (13, 0) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 46 |
| 31 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 44 |
| 32 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 42 |
| 33-35 | Di chuyển hướng 2 (`2`) | (16, 1) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 40 |
| 36 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 38 |
| 37 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 36 |
| 38 | Di chuyển hướng 3 (`3`) | (18, 3) | (18, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(18, 4)) | 34 |
| 39-40 | Di chuyển hướng 3 (`3`) | (18, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 33 |
| 41 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 31 |
| 42 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 29 |
| 43 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 27 |
| 44 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 25 |
| 45 | Di chuyển hướng 1 (`1`) | (22, 5) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 23 |
| 46 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=8, tọa độ=(23, 4)) | 21 |
| 47-48 | Di chuyển hướng 4 (`4`) | (23, 4) | (23, 5) | Dự kiến đến điểm hẹn tọa độ (23, 5) | 20 |
| 49-50 | Di chuyển hướng 4 (`4`) | (23, 5) | (22, 6) | Dự kiến đến điểm hẹn tọa độ (22, 6) | 19 |
| 51-53 | Di chuyển hướng 4 (`4`) | (22, 6) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 17 |
| 54-55 | Di chuyển hướng 3 (`3`) | (22, 7) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 16 |
| 56-57 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 15 |
| 58-59 | Di chuyển hướng 4 (`4`) | (22, 9) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 14 |
| 60 | Di chuyển hướng 4 (`4`) | (21, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 12 |
| 61-63 | Di chuyển hướng 4 (`4`) | (21, 11) | (20, 12) | Dự kiến đến điểm hẹn tọa độ (20, 12) | 10 |
| 64 | Di chuyển hướng 3 (`3`) | (20, 12) | (21, 13) | Dự kiến đến điểm hẹn tọa độ (21, 13) | 8 |
| 65 | Di chuyển hướng 3 (`3`) | (21, 13) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 6 |
| 66 | Di chuyển hướng 4 (`4`) | (21, 14) | (21, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 4 |
| 67 | Chờ 1 bước (`-1`) | (21, 15) | (21, 15) | Dự kiến đứng yên tại (21, 15); mục tiêu Spot #17 (thương hiệu=12, tọa độ=(21, 15)) | 4 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 9) (ô=217)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=9, tọa độ=(1, 9))
- Mảng hành động đã gửi server: `[-68]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-67 | Chờ 68 bước (`-68`) | (1, 9) | (1, 9) | Dự kiến đứng yên tại (1, 9); mục tiêu Spot #13 (thương hiệu=9, tọa độ=(1, 9)) | 4 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 80
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 9)
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 4, 4, 4, 5, 4, 4, 3, 4, 5, 4, 5, 4, 3, 4, 4, 4, 4, 5, 5, 5, 0, 5, 5, 4, 3, 4, 4, 4, 1, 1, 1, 0, 1, 0, 0, 0, 0, 5, 0, 1, 0, 0, 3, 3, 2, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 80 |
| 2 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 80 |
| 3 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 80 |
| 4 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 80 |
| 5 | Di chuyển hướng 4 (`4`) | (23, 2) | (23, 3) | Dự kiến đến điểm hẹn tọa độ (23, 3) | 80 |
| 6 | Di chuyển hướng 4 (`4`) | (23, 3) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 80 |
| 7 | Di chuyển hướng 4 (`4`) | (22, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 80 |
| 8 | Di chuyển hướng 5 (`5`) | (22, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 80 |
| 9 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 80 |
| 10 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 80 |
| 11 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 80 |
| 12 | Di chuyển hướng 4 (`4`) | (20, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 80 |
| 13 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 80 |
| 14 | Di chuyển hướng 4 (`4`) | (19, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 80 |
| 15 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 80 |
| 16 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 80 |
| 17 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 80 |
| 18 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 80 |
| 19 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 80 |
| 20 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 80 |
| 21 | Di chuyển hướng 4 (`4`) | (16, 15) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 80 |
| 22 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 80 |
| 23 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 80 |
| 24 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 80 |
| 25 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 80 |
| 26 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 80 |
| 27 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 80 |
| 28 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 80 |
| 29 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 80 |
| 30 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 80 |
| 31 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 80 |
| 32 | Di chuyển hướng 4 (`4`) | (9, 19) | (8, 20) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(8, 20)) | 80 |
| 33-34 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 80 |
| 35 | Di chuyển hướng 1 (`1`) | (9, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 80 |
| 36 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 80 |
| 37 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 80 |
| 38 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 80 |
| 39 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 80 |
| 40-41 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 80 |
| 42-43 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 80 |
| 44-45 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 80 |
| 46 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 80 |
| 47 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 80 |
| 48 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 80 |
| 49 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 80 |
| 50 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 80 |
| 51 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 80 |
| 52 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 80 |
| 53 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 80 |
| 54-67 | Chờ 14 bước (`-14`) | (8, 9) | (8, 9) | Dự kiến đứng yên tại (8, 9); hướng tới tọa độ (8, 9) | 80 |

