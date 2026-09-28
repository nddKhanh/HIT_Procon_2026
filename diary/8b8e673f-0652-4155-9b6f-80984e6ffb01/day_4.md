# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 128
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 34 | #1 | #3 | (1, 13) | 0 | 32 |
| 37 | #1 | #3 | (2, 13) | 31 | 32 |
| 55 | #0 | #3 | (9, 14) | 2 | 32 |
| 57 | #0 | #3 | (8, 14) | 31 | 32 |
| 60 | #0 | #3 | (7, 14) | 30 | 32 |
| 68 | #2 | #3 | (10, 15) | 5 | 32 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 15) (ô=220)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Mảng hành động đã gửi server: `[0, -53, 5, 5, 5, 5, 0, 0, 5, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 2, 2, 3, 3, 2, 3, 1, 1, 1, 2, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 2 |
| 2-54 | Chờ 53 bước (`-53`) | (9, 14) | (9, 14) | Dự kiến đứng yên tại (9, 14); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 32 |
| 55-56 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 32 |
| 57-59 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 60-63 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 30 |
| 64-65 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 29 |
| 66-67 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=0, tọa độ=(5, 13)) | 28 |
| 68-69 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 27 |
| 70-71 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 26 |
| 72-73 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 25 |
| 74-75 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 24 |
| 76-77 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 22 |
| 78-79 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 20 |
| 80 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 18 |
| 81-82 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 17 |
| 83-84 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 16 |
| 85-86 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 15 |
| 87-88 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 14 |
| 89-90 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 13 |
| 91-92 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 12 |
| 93 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 10 |
| 94 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 8 |
| 95-96 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 7 |
| 97-98 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 6 |
| 99-100 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(11, 5)) | 5 |
| 101-102 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 4 |
| 103-105 | Di chuyển hướng 1 (`1`) | (11, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 2 |
| 106-107 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 1 |
| 108-109 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 0 |
| 110-127 | Chờ 18 bước (`-18`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 0 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 13) (ô=183)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Mảng hành động đã gửi server: `[-35, 2, 1, 2, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 2, 2, 3, 3, 3, 2, 2, 1, 1, 1, -52]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-34 | Chờ 35 bước (`-35`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 32 |
| 35-36 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 32 |
| 37-38 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 30 |
| 39-40 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 29 |
| 41-42 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 28 |
| 43-44 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 27 |
| 45-46 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 25 |
| 47-48 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 23 |
| 49 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 21 |
| 50-51 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 20 |
| 52-53 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 19 |
| 54-55 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 18 |
| 56-57 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 17 |
| 58-59 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 16 |
| 60-61 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 15 |
| 62 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 13 |
| 63 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 11 |
| 64-65 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 10 |
| 66-67 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 9 |
| 68-69 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=1, tọa độ=(11, 5)) | 8 |
| 70-71 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 7 |
| 72-73 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 6 |
| 74 | Di chuyển hướng 1 (`1`) | (12, 4) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 4 |
| 75 | Di chuyển hướng 1 (`1`) | (13, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 2 |
| 76-127 | Chờ 52 bước (`-52`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (5, 6) (ô=89)
- Nhiên liệu đầu ngày: 26
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(13, 2))
- Mảng hành động đã gửi server: `[4, 3, 4, 4, 4, 4, 3, 3, 3, 2, 1, 2, 2, 2, 3, -35, 5, 5, 0, 5, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 25 |
| 2-3 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 24 |
| 4 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 22 |
| 5-6 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 20 |
| 7-8 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 18 |
| 9-10 | Di chuyển hướng 4 (`4`) | (4, 11) | (3, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(3, 12)) | 17 |
| 11-12 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 16 |
| 13-15 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 14 |
| 16-17 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 15)) | 13 |
| 18-19 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 12 |
| 20-21 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 11 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 10 |
| 24-27 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 8 |
| 28-30 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 6 |
| 31-32 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 5 |
| 33-67 | Chờ 35 bước (`-35`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 32 |
| 68-69 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 31 |
| 70-71 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 30 |
| 72-73 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 29 |
| 74-77 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 27 |
| 78-79 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 26 |
| 80-82 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 24 |
| 83-84 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 23 |
| 85-86 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 22 |
| 87-88 | Di chuyển hướng 0 (`0`) | (5, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 21 |
| 89-90 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 19 |
| 91 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 17 |
| 92-93 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 16 |
| 94-95 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 15 |
| 96-97 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 14 |
| 98-99 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 13 |
| 100-101 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 12 |
| 102-103 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 11 |
| 104 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 9 |
| 105 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 7 |
| 106 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 5 |
| 107-108 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 4 |
| 109-110 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 3 |
| 111-112 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 2 |
| 113-127 | Chờ 15 bước (`-15`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(13, 2)) | 2 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (11, 5) (ô=81)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(10, 15))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(10, 15))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 5, 5, 4, 4, 3, 4, 4, 3, 4, 4, 5, 4, 4, 4, 5, 2, 2, 3, 2, 2, 2, 2, 2, 2, 5, 5, 3, 2, 2, -60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 32 |
| 2-3 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 32 |
| 4-5 | Di chuyển hướng 0 (`0`) | (9, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 32 |
| 6-7 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 32 |
| 8 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 32 |
| 9 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 32 |
| 10-11 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 32 |
| 12-13 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 32 |
| 14-15 | Di chuyển hướng 3 (`3`) | (5, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 32 |
| 16-17 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 6)) | 32 |
| 18-19 | Di chuyển hướng 4 (`4`) | (5, 6) | (5, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(5, 7)) | 32 |
| 20-21 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 32 |
| 22 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 32 |
| 23-24 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 32 |
| 25-26 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 32 |
| 27-28 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 32 |
| 29 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 32 |
| 30-31 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 32 |
| 32-33 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 13)) | 32 |
| 34-35 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 32 |
| 36-37 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 32 |
| 38-39 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 32 |
| 40-41 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 32 |
| 42-43 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 32 |
| 44-45 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 32 |
| 46-47 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 48-51 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 32 |
| 52-54 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(9, 14)) | 32 |
| 55-56 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 32 |
| 57-59 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 60-63 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 32 |
| 64-65 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 32 |
| 66-67 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 32 |
| 68-127 | Chờ 60 bước (`-60`) | (10, 15) | (10, 15) | Dự kiến đứng yên tại (10, 15); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 15)) | 32 |

