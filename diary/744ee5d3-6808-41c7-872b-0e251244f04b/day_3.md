# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 96
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 39 | #2 | #4 | (10, 15) | 4 | 67 |
| 58 | #1 | #4 | (10, 15) | 16 | 67 |
| 65 | #0 | #4 | (10, 15) | 8 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 3) (ô=58)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 13)
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 0, 0, 0, 0, 1, 0, 0, 3, 3, 4, 3, 3, 4, 3, 3, 3, 3, 3, 2, 3, 2, 2, 3, 2, 1, 2, 2, 3, 0, 0, 0, 0, 1, 1, 4, 4, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 57 |
| 2 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 3 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 53 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 52 |
| 6-7 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 51 |
| 8-9 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 50 |
| 10-13 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 48 |
| 14-15 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 47 |
| 16-17 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 46 |
| 18-19 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 45 |
| 20-21 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 44 |
| 22 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 42 |
| 23-25 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 10)) | 40 |
| 26-27 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 39 |
| 28-30 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 37 |
| 31 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 35 |
| 32 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 33 |
| 33-34 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 32 |
| 35 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 30 |
| 36-37 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 3)) | 29 |
| 38-39 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 28 |
| 40-41 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 27 |
| 42 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 25 |
| 43-44 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 24 |
| 45 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 22 |
| 46 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 20 |
| 47 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 18 |
| 48-49 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 17 |
| 50-51 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 16 |
| 52-54 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 14 |
| 55-56 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 13 |
| 57-58 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 12 |
| 59-60 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 10 |
| 61-62 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 9 |
| 63-64 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 67 |
| 65 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 65 |
| 66-67 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 64 |
| 68-69 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 63 |
| 70 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 61 |
| 71-72 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 60 |
| 73-74 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(14, 16)) | 59 |
| 75-76 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 58 |
| 77-78 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 57 |
| 79 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 55 |
| 80 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 53 |
| 81-82 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 52 |
| 83-84 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 51 |
| 85-86 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 50 |
| 87-88 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 49 |
| 89-90 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 48 |
| 91-92 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 47 |
| 93-94 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 46 |
| 95 | Chờ 1 bước (`-1`) | (10, 13) | (10, 13) | Dự kiến đứng yên tại (10, 13); hướng tới tọa độ (10, 13) | 46 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 3) (ô=57)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=0, tọa độ=(13, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=0, tọa độ=(13, 10))
- Mảng hành động đã gửi server: `[2, 5, 4, 5, 5, 5, 5, 5, 0, 1, 0, 0, 4, 4, 5, 4, 3, 3, 4, 3, 3, 3, 3, 3, 3, 4, 3, 2, 3, 2, 2, 3, 2, 1, 2, 2, 3, 0, 0, 0, 0, 1, 1, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (12, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 55 |
| 1-2 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 54 |
| 3 | Di chuyển hướng 4 (`4`) | (12, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 52 |
| 4 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 50 |
| 5-6 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 49 |
| 7-8 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 48 |
| 9-10 | Di chuyển hướng 5 (`5`) | (8, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 47 |
| 11-14 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 45 |
| 15-16 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 44 |
| 17-18 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 43 |
| 19 | Di chuyển hướng 0 (`0`) | (6, 2) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 41 |
| 20-21 | Di chuyển hướng 0 (`0`) | (6, 1) | (5, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 0)) | 40 |
| 22-23 | Di chuyển hướng 4 (`4`) | (5, 0) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 39 |
| 24-25 | Di chuyển hướng 4 (`4`) | (5, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 38 |
| 26-27 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 37 |
| 28-29 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(3, 3)) | 36 |
| 30-31 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 35 |
| 32-33 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 34 |
| 34 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 32 |
| 35-36 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 31 |
| 37 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 29 |
| 38 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 27 |
| 39-41 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 10)) | 25 |
| 42-43 | Di chuyển hướng 3 (`3`) | (5, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 24 |
| 44-45 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 23 |
| 46-47 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 22 |
| 48-49 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 21 |
| 50-51 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 20 |
| 52-53 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 18 |
| 54-55 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 17 |
| 56-57 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 67 |
| 58 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 65 |
| 59-60 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 64 |
| 61-62 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 63 |
| 63 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 61 |
| 64-65 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 60 |
| 66-67 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(14, 16)) | 59 |
| 68-69 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 58 |
| 70-71 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 57 |
| 72 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 55 |
| 73 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 53 |
| 74-75 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 52 |
| 76-77 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 51 |
| 78-95 | Chờ 18 bước (`-18`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 51 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 13) (ô=197)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(13, 3))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(13, 3))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 2, 3, 2, 2, 2, 2, 2, 2, 3, 0, 5, 5, 4, 5, -1, 0, 5, 5, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 3, 3, 4, 3, 2, 2, 2, 2, 2, 2, 1, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 28 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 27 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 26 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 25 |
| 8-9 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 24 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 23 |
| 12-13 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 21 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 20 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 19 |
| 18 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 17 |
| 19-21 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 15 |
| 22 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 13 |
| 23-24 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 12 |
| 25-26 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(14, 16)) | 11 |
| 27-28 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 10 |
| 29-30 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 9 |
| 31-32 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 8 |
| 33 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 6 |
| 34-35 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 5 |
| 36 | Chờ 1 bước (`-1`) | (10, 16) | (10, 16) | Dự kiến đứng yên tại (10, 16); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 5 |
| 37-38 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 67 |
| 39 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 65 |
| 40-41 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 64 |
| 42-43 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 63 |
| 44-45 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 61 |
| 46-47 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 60 |
| 48-49 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 59 |
| 50-52 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 57 |
| 53-54 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 56 |
| 55-56 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 55 |
| 57 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 53 |
| 58 | Di chuyển hướng 0 (`0`) | (4, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 51 |
| 59 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 49 |
| 60-61 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 48 |
| 62 | Di chuyển hướng 1 (`1`) | (4, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 46 |
| 63 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 44 |
| 64-65 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 43 |
| 66-67 | Di chuyển hướng 1 (`1`) | (4, 2) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 42 |
| 68-69 | Di chuyển hướng 1 (`1`) | (5, 1) | (5, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(5, 0)) | 41 |
| 70-71 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 40 |
| 72-73 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 39 |
| 74 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 37 |
| 75-76 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 36 |
| 77-78 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 35 |
| 79-82 | Di chuyển hướng 2 (`2`) | (7, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 33 |
| 83-84 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 32 |
| 85-86 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 31 |
| 87-88 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 30 |
| 89 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 28 |
| 90 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 26 |
| 91-95 | Chờ 5 bước (`-5`) | (13, 3) | (13, 3) | Dự kiến đứng yên tại (13, 3); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 26 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 13) (ô=197)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=0, tọa độ=(13, 10))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=0, tọa độ=(13, 10))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 3, 2, 3, 2, 2, 3, 2, 1, 2, 2, 3, 0, 0, 0, 0, 1, 1, -58]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 31 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 30 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 29 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 28 |
| 8-9 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 27 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 26 |
| 12-13 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 24 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 23 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 22 |
| 18 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 20 |
| 19-20 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 19 |
| 21-22 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 18 |
| 23 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 16 |
| 24-25 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 15 |
| 26-27 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(14, 16)) | 14 |
| 28-29 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(14, 15)) | 13 |
| 30-31 | Di chuyển hướng 0 (`0`) | (14, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 12 |
| 32 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 10 |
| 33 | Di chuyển hướng 0 (`0`) | (13, 13) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 8 |
| 34-35 | Di chuyển hướng 1 (`1`) | (12, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 7 |
| 36-37 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 6 |
| 38-95 | Chờ 58 bước (`-58`) | (13, 10) | (13, 10) | Dự kiến đứng yên tại (13, 10); mục tiêu Spot #8 (thương hiệu=0, tọa độ=(13, 10)) | 6 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (7, 4) (ô=67)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 15)
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 3, 2, 2, 3, 0, -62]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 67 |
| 4-5 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 67 |
| 6-7 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 67 |
| 8-9 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 67 |
| 10-11 | Di chuyển hướng 4 (`4`) | (5, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 67 |
| 12 | Di chuyển hướng 4 (`4`) | (4, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 67 |
| 13 | Di chuyển hướng 3 (`3`) | (4, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 67 |
| 14-15 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 67 |
| 16-17 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 67 |
| 18-20 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 13)) | 67 |
| 21-22 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 67 |
| 23-24 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 67 |
| 25-26 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 67 |
| 27-28 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 67 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 67 |
| 31 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(10, 16)) | 67 |
| 32-33 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 67 |
| 34-95 | Chờ 62 bước (`-62`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); hướng tới tọa độ (10, 15) | 67 |

