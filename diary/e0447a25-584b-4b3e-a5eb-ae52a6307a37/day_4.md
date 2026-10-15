# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 108
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #0 | #4 | (9, 8) | 8 | 36 |
| 29 | #2 | #4 | (20, 4) | 8 | 36 |
| 37 | #1 | #4 | (20, 4) | 2 | 36 |
| 63 | #0 | #4 | (4, 13) | 10 | 36 |
| 80 | #3 | #4 | (3, 0) | 0 | 36 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 8) (ô=177)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(19, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(19, 12))
- Mảng hành động đã gửi server: `[-15, 5, 5, 5, 4, 4, 5, 5, 0, 4, 4, 4, 4, 2, 2, 2, -23, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 0, 1, 3, 2, 2, 2, 2, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-14 | Chờ 15 bước (`-15`) | (9, 8) | (9, 8) | Dự kiến đứng yên tại (9, 8); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 36 |
| 15-16 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 35 |
| 17-19 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 33 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 32 |
| 22 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 30 |
| 23 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 28 |
| 24 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 26 |
| 25 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 24 |
| 26 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 22 |
| 27-28 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 21 |
| 29 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 19 |
| 30 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 17 |
| 31-33 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(1, 13)) | 15 |
| 34-35 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 14 |
| 36 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 12 |
| 37-39 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 10 |
| 40-62 | Chờ 23 bước (`-23`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 36 |
| 63-64 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 35 |
| 65 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 33 |
| 66 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 31 |
| 67 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 29 |
| 68 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 27 |
| 69 | Di chuyển hướng 2 (`2`) | (8, 14) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 25 |
| 70 | Di chuyển hướng 2 (`2`) | (9, 14) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 23 |
| 71 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 21 |
| 72 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 19 |
| 73 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 17 |
| 74 | Di chuyển hướng 2 (`2`) | (13, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 15 |
| 75 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 13 |
| 76-77 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 12 |
| 78 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 10 |
| 79-80 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 9 |
| 81-82 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 8 |
| 83-84 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 7 |
| 85-86 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 6 |
| 87-88 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 4 |
| 89-107 | Chờ 19 bước (`-19`) | (19, 12) | (19, 12) | Dự kiến đứng yên tại (19, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 4 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 12) (ô=272)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(20, 4))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(20, 4))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 4, 3, 0, 0, 0, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, -71]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 34 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 33 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 31 |
| 6-7 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 30 |
| 8-9 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 29 |
| 10-11 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 28 |
| 12-13 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 27 |
| 14 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 25 |
| 15-16 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 24 |
| 17 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 22 |
| 18 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 20 |
| 19 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 18 |
| 20 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 16 |
| 21 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 14 |
| 22-23 | Di chuyển hướng 2 (`2`) | (15, 8) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 13 |
| 24-26 | Di chuyển hướng 2 (`2`) | (16, 8) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 11 |
| 27-29 | Di chuyển hướng 2 (`2`) | (17, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 9 |
| 30 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 7 |
| 31-32 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 6 |
| 33 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 4 |
| 34-36 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 36 |
| 37-107 | Chờ 71 bước (`-71`) | (20, 4) | (20, 4) | Dự kiến đứng yên tại (20, 4); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 36 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=2, tọa độ=(20, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=2, tọa độ=(20, 12))
- Mảng hành động đã gửi server: `[4, 4, 3, 3, -21, 5, 5, 4, 4, 5, 4, 4, 5, 4, 3, 3, 4, 3, 1, 2, 2, 2, 2, 2, -48]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 13 |
| 2-3 | Di chuyển hướng 4 (`4`) | (20, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 12 |
| 4 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 10 |
| 5-7 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 8 |
| 8-28 | Chờ 21 bước (`-21`) | (20, 4) | (20, 4) | Dự kiến đứng yên tại (20, 4); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 36 |
| 29-30 | Di chuyển hướng 5 (`5`) | (20, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 35 |
| 31-32 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 34 |
| 33 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 32 |
| 34 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 30 |
| 35 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 28 |
| 36 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 26 |
| 37-39 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 24 |
| 40-41 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 23 |
| 42 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 21 |
| 43 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 19 |
| 44 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 17 |
| 45-46 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 16 |
| 47 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 14 |
| 48-49 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 13 |
| 50-51 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 12 |
| 52-53 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 11 |
| 54-55 | Di chuyển hướng 2 (`2`) | (17, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 10 |
| 56-57 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 8 |
| 58-59 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 7 |
| 60-107 | Chờ 48 bước (`-48`) | (20, 12) | (20, 12) | Dự kiến đứng yên tại (20, 12); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 7 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 0) (ô=3)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=1, tọa độ=(1, 13))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=1, tọa độ=(1, 13))
- Mảng hành động đã gửi server: `[-80, 4, 4, 4, 3, 4, 3, 4, 3, 3, 4, 4, 4, 4, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-79 | Chờ 80 bước (`-80`) | (3, 0) | (3, 0) | Dự kiến đứng yên tại (3, 0); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 36 |
| 80-81 | Di chuyển hướng 4 (`4`) | (3, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 35 |
| 82-84 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 33 |
| 85 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 31 |
| 86 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 29 |
| 87 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 27 |
| 88 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 25 |
| 89 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 23 |
| 90 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 21 |
| 91 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 19 |
| 92-93 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 18 |
| 94 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 16 |
| 95 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 14 |
| 96-98 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(1, 13)) | 12 |
| 99-107 | Chờ 9 bước (`-9`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #11 (thương hiệu=1, tọa độ=(1, 13)) | 12 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (19, 12) (ô=271)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(3, 0))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(3, 0))
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 5, 5, 5, 5, 5, 5, 0, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, -8, 5, 5, 4, 4, 5, 5, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 5, 0, 0, 5, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 2, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 36 |
| 2-3 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 36 |
| 4 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 36 |
| 5 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 36 |
| 6 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 36 |
| 7 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 36 |
| 8 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 36 |
| 9 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 36 |
| 10 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 36 |
| 11 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 36 |
| 12 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 36 |
| 13 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 36 |
| 14-15 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 36 |
| 16 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 36 |
| 17 | Di chuyển hướng 2 (`2`) | (10, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 36 |
| 18 | Di chuyển hướng 2 (`2`) | (11, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 36 |
| 19 | Di chuyển hướng 2 (`2`) | (12, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 36 |
| 20 | Di chuyển hướng 2 (`2`) | (13, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 36 |
| 21 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 36 |
| 22 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 36 |
| 23 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 36 |
| 24 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 36 |
| 25 | Di chuyển hướng 1 (`1`) | (18, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 36 |
| 26 | Di chuyển hướng 2 (`2`) | (18, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 36 |
| 27-28 | Di chuyển hướng 2 (`2`) | (19, 4) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 36 |
| 29-36 | Chờ 8 bước (`-8`) | (20, 4) | (20, 4) | Dự kiến đứng yên tại (20, 4); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 36 |
| 37-38 | Di chuyển hướng 5 (`5`) | (20, 4) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 36 |
| 39-40 | Di chuyển hướng 5 (`5`) | (19, 4) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 36 |
| 41 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 36 |
| 42 | Di chuyển hướng 4 (`4`) | (18, 5) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 36 |
| 43 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 36 |
| 44 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 36 |
| 45 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 36 |
| 46-47 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 36 |
| 48 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 36 |
| 49 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 36 |
| 50 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 36 |
| 51 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 36 |
| 52 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 36 |
| 53 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 36 |
| 54 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 36 |
| 55 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 36 |
| 56 | Di chuyển hướng 4 (`4`) | (7, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 36 |
| 57-58 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 36 |
| 59 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 36 |
| 60 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 36 |
| 61 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 36 |
| 62 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 36 |
| 63-64 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 36 |
| 65-66 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 36 |
| 67 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 36 |
| 68 | Di chuyển hướng 1 (`1`) | (2, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 36 |
| 69 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 36 |
| 70 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 36 |
| 71 | Di chuyển hướng 0 (`0`) | (2, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 36 |
| 72 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 36 |
| 73 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 36 |
| 74 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 36 |
| 75 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 36 |
| 76 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 36 |
| 77 | Di chuyển hướng 1 (`1`) | (1, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 36 |
| 78 | Di chuyển hướng 1 (`1`) | (2, 1) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 36 |
| 79 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 36 |
| 80-107 | Chờ 28 bước (`-28`) | (3, 0) | (3, 0) | Dự kiến đứng yên tại (3, 0); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 36 |

