# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 144
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 22 | #3 | #4 | (3, 0) | 5 | 36 |
| 48 | #3 | #4 | (4, 13) | 7 | 36 |
| 53 | #2 | #4 | (1, 13) | 3 | 36 |
| 74 | #2 | #4 | (15, 11) | 4 | 36 |
| 82 | #0 | #4 | (15, 8) | 2 | 36 |
| 84 | #0 | #4 | (14, 8) | 35 | 36 |
| 86 | #2 | #4 | (14, 8) | 25 | 36 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(9, 8))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(9, 8))
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 4, 4, 4, 5, 5, 5, 4, -59, 5, 4, 4, 3, 3, 3, 1, 2, 2, 2, 2, 5, 5, 5, 5, 0, 5, 0, 5, 5, 5, 0, 0, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 19 |
| 2-3 | Di chuyển hướng 4 (`4`) | (20, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 18 |
| 4 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 16 |
| 5-7 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 14 |
| 8-9 | Di chuyển hướng 4 (`4`) | (20, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 13 |
| 10-12 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 11 |
| 13 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 9 |
| 14-15 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 8 |
| 16 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 6 |
| 17-19 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 4 |
| 20-22 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 2 |
| 23-81 | Chờ 59 bước (`-59`) | (15, 8) | (15, 8) | Dự kiến đứng yên tại (15, 8); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 36 |
| 82-83 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 36 |
| 84-85 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 34 |
| 86-87 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 32 |
| 88 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 30 |
| 89 | Di chuyển hướng 3 (`3`) | (14, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 28 |
| 90-91 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 26 |
| 92-93 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 25 |
| 94-95 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 24 |
| 96-97 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 23 |
| 98-99 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 22 |
| 100-103 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 20 |
| 104-105 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 19 |
| 106-109 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 17 |
| 110-111 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 16 |
| 112-113 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 15 |
| 114-115 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 14 |
| 116-117 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 13 |
| 118 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 11 |
| 119 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 9 |
| 120 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 7 |
| 121 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 5 |
| 122 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 3 |
| 123 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 1 |
| 124-143 | Chờ 20 bước (`-20`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 1 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 13) (ô=288)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(3, 9))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(3, 9))
- Mảng hành động đã gửi server: `[1, 0, 3, 2, 2, 2, 2, 2, 5, 5, 5, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 5, -87]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 35 |
| 2-3 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 34 |
| 4-5 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 33 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 32 |
| 8-9 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 31 |
| 10-11 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 30 |
| 12-15 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 28 |
| 16-17 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 27 |
| 18-19 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 26 |
| 20-21 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 25 |
| 22-25 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 23 |
| 26-27 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 22 |
| 28-29 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 21 |
| 30-31 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 20 |
| 32-33 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 19 |
| 34 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 17 |
| 35-36 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 16 |
| 37-39 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 14 |
| 40-42 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 12 |
| 43 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 10 |
| 44-46 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 8 |
| 47-48 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 7 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 6 |
| 51 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 4 |
| 52-53 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 3 |
| 54 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 1 |
| 55-56 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 0 |
| 57-143 | Chờ 87 bước (`-87`) | (3, 9) | (3, 9) | Dự kiến đứng yên tại (3, 9); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 0 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 13) (ô=274)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[-53, 1, 1, 1, 1, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 3, 4, 0, 0, 0, 1, 1, 2, 2, 3, 3, 3, 3, 2, 5, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-52 | Chờ 53 bước (`-53`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #11 (thương hiệu=1, tọa độ=(1, 13)) | 36 |
| 53-54 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 35 |
| 55-57 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 33 |
| 58 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 31 |
| 59 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 29 |
| 60-61 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 28 |
| 62 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 26 |
| 63 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 24 |
| 64 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 22 |
| 65 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 20 |
| 66 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 18 |
| 67 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 16 |
| 68 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 14 |
| 69 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 12 |
| 70 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 10 |
| 71 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 8 |
| 72 | Di chuyển hướng 3 (`3`) | (13, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 6 |
| 73 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 36 |
| 74-75 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 35 |
| 76-77 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 34 |
| 78-79 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 33 |
| 80-81 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 31 |
| 82 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 29 |
| 83 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 27 |
| 84-85 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 36 |
| 86-87 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 34 |
| 88-89 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 33 |
| 90-92 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 31 |
| 93-95 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 29 |
| 96 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 27 |
| 97 | Di chuyển hướng 3 (`3`) | (18, 11) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 25 |
| 98-101 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 23 |
| 102-103 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 22 |
| 104-107 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 20 |
| 108 | Di chuyển hướng 1 (`1`) | (18, 11) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 18 |
| 109 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 16 |
| 110 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 14 |
| 111 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 12 |
| 112-113 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 11 |
| 114 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 9 |
| 115-117 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 7 |
| 118-119 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 6 |
| 120-122 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 4 |
| 123 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 2 |
| 124-125 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 1 |
| 126-143 | Chờ 18 bước (`-18`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 1 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 0) (ô=3)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(20, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(20, 12))
- Mảng hành động đã gửi server: `[-23, 4, 4, 4, 3, 4, 3, 4, 3, 3, 4, 4, 4, 4, 2, 2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 3, 2, 2, 2, 2, 2, -65]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-22 | Chờ 23 bước (`-23`) | (3, 0) | (3, 0) | Dự kiến đứng yên tại (3, 0); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 36 |
| 23-24 | Di chuyển hướng 4 (`4`) | (3, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 35 |
| 25-27 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 33 |
| 28 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 31 |
| 29 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 29 |
| 30 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 27 |
| 31 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 25 |
| 32 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 23 |
| 33 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 21 |
| 34 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 19 |
| 35-36 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 18 |
| 37 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 16 |
| 38 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 14 |
| 39-41 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(1, 13)) | 12 |
| 42-43 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 11 |
| 44 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 9 |
| 45-47 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 36 |
| 48-49 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 35 |
| 50 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 33 |
| 51 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 31 |
| 52 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 29 |
| 53 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 27 |
| 54 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 25 |
| 55 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 23 |
| 56 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 21 |
| 57 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 19 |
| 58 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 17 |
| 59 | Di chuyển hướng 2 (`2`) | (13, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 15 |
| 60 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 13 |
| 61-62 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 12 |
| 63-64 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 11 |
| 65-66 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 10 |
| 67-68 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 9 |
| 69-70 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 8 |
| 71-72 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 7 |
| 73-76 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 5 |
| 77-78 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 4 |
| 79-143 | Chờ 65 bước (`-65`) | (20, 12) | (20, 12) | Dự kiến đứng yên tại (20, 12); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 4 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (16, 6) (ô=142)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 8)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 5, 0, 0, 5, 4, 3, 4, 3, 4, 4, 3, 3, 4, 4, 3, 3, 2, 3, -9, 4, 5, 5, 0, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, -3, 0, 0, 1, 2, 5, -60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 36 |
| 4 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 36 |
| 5 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 36 |
| 6 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 36 |
| 7 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 36 |
| 8 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 36 |
| 9 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 36 |
| 10 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 36 |
| 11 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 36 |
| 12 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 36 |
| 13-14 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 36 |
| 15 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 36 |
| 16 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 36 |
| 17 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 36 |
| 18 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 36 |
| 19-21 | Di chuyển hướng 0 (`0`) | (4, 1) | (3, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 36 |
| 22-23 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 36 |
| 24 | Di chuyển hướng 4 (`4`) | (2, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 36 |
| 25 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 36 |
| 26 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 36 |
| 27 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 36 |
| 28 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 36 |
| 29 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 36 |
| 30 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 36 |
| 31 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 36 |
| 32 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 36 |
| 33 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 36 |
| 34 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 36 |
| 35 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 36 |
| 36 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 36 |
| 37-38 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 36 |
| 39-47 | Chờ 9 bước (`-9`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 36 |
| 48-49 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 36 |
| 50 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 36 |
| 51 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 36 |
| 52 | Di chuyển hướng 0 (`0`) | (1, 14) | (1, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(1, 13)) | 36 |
| 53-54 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 36 |
| 55 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 36 |
| 56 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 36 |
| 57 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 36 |
| 58 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 36 |
| 59 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 36 |
| 60 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 36 |
| 61 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 36 |
| 62 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 36 |
| 63 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 36 |
| 64 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 36 |
| 65 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 36 |
| 66 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 36 |
| 67 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 36 |
| 68 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 36 |
| 69-70 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 36 |
| 71-73 | Chờ 3 bước (`-3`) | (15, 11) | (15, 11) | Dự kiến đứng yên tại (15, 11); mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 36 |
| 74-75 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 36 |
| 76-77 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 36 |
| 78-79 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 36 |
| 80-81 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 36 |
| 82-83 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 36 |
| 84-143 | Chờ 60 bước (`-60`) | (14, 8) | (14, 8) | Dự kiến đứng yên tại (14, 8); hướng tới tọa độ (14, 8) | 36 |

