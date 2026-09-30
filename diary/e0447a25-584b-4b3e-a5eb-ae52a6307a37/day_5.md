# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 126
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 14 | #3 | #4 | (3, 9) | 1 | 36 |
| 38 | #0 | #4 | (20, 12) | 3 | 36 |
| 48 | #1 | #4 | (15, 13) | 3 | 36 |
| 48 | #2 | #4 | (15, 13) | 0 | 36 |
| 54 | #2 | #4 | (14, 10) | 33 | 36 |
| 66 | #0 | #4 | (16, 6) | 17 | 36 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (19, 12) (ô=271)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(20, 0))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(20, 0))
- Mảng hành động đã gửi server: `[2, -36, 5, 5, 5, 5, 5, 4, 1, 0, 0, 0, 1, 2, 1, 1, 2, 2, 2, 1, 1, 0, 0, 1, 1, -44]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 3 |
| 2-37 | Chờ 36 bước (`-36`) | (20, 12) | (20, 12) | Dự kiến đứng yên tại (20, 12); mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 36 |
| 38-39 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 35 |
| 40-41 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 34 |
| 42-45 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 32 |
| 46-47 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 31 |
| 48-49 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 30 |
| 50-51 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 29 |
| 52-53 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 28 |
| 54-55 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 27 |
| 56-57 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 26 |
| 58 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 24 |
| 59 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 22 |
| 60 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 20 |
| 61-62 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 19 |
| 63-65 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 36 |
| 66 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 34 |
| 67-68 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 32 |
| 69 | Di chuyển hướng 2 (`2`) | (18, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 30 |
| 70 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 28 |
| 71-73 | Di chuyển hướng 1 (`1`) | (20, 5) | (20, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 4)) | 26 |
| 74-75 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 25 |
| 76-78 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 23 |
| 79 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 21 |
| 80-81 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 20 |
| 82-125 | Chờ 44 bước (`-44`) | (20, 0) | (20, 0) | Dự kiến đứng yên tại (20, 0); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 20 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 4) (ô=104)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(15, 13))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(15, 13))
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 4, 4, 4, 4, 4, 3, 3, 5, 5, 5, 4, 5, 4, 3, 3, 3, 4, -88]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 35 |
| 2-4 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 33 |
| 5 | Di chuyển hướng 1 (`1`) | (19, 2) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 31 |
| 6-7 | Di chuyển hướng 1 (`1`) | (20, 1) | (20, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 0)) | 30 |
| 8-9 | Di chuyển hướng 4 (`4`) | (20, 0) | (20, 1) | Dự kiến đến điểm hẹn tọa độ (20, 1) | 29 |
| 10-11 | Di chuyển hướng 4 (`4`) | (20, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 28 |
| 12 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 26 |
| 13-14 | Di chuyển hướng 4 (`4`) | (19, 3) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 25 |
| 15-16 | Di chuyển hướng 4 (`4`) | (18, 4) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 23 |
| 17-18 | Di chuyển hướng 3 (`3`) | (18, 5) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 21 |
| 19 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 7)) | 19 |
| 20-21 | Di chuyển hướng 5 (`5`) | (19, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 18 |
| 22 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 16 |
| 23-25 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 14 |
| 26-28 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 12 |
| 29-30 | Di chuyển hướng 5 (`5`) | (15, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 11 |
| 31 | Di chuyển hướng 4 (`4`) | (14, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 9 |
| 32 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 7 |
| 33 | Di chuyển hướng 3 (`3`) | (14, 10) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 5 |
| 34-35 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 4 |
| 36-37 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 3 |
| 38-125 | Chờ 88 bước (`-88`) | (15, 13) | (15, 13) | Dự kiến đứng yên tại (15, 13); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 36 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 12) (ô=272)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=1, tọa độ=(1, 13))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=1, tọa độ=(1, 13))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 4, -34, 1, 0, 0, 5, 5, 5, 5, 0, 0, 5, 5, 5, 4, 4, 5, 5, 0, 4, 4, 4, 4, -47]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 6 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 12) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 5 |
| 4-7 | Di chuyển hướng 5 (`5`) | (18, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 3 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 2 |
| 10-11 | Di chuyển hướng 5 (`5`) | (16, 12) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 1 |
| 12-13 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 0 |
| 14-47 | Chờ 34 bước (`-34`) | (15, 13) | (15, 13) | Dự kiến đứng yên tại (15, 13); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 36 |
| 48-49 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 35 |
| 50-51 | Di chuyển hướng 0 (`0`) | (15, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=0, tọa độ=(15, 11)) | 34 |
| 52-53 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 36 |
| 54 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 34 |
| 55 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 32 |
| 56 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 30 |
| 57 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 28 |
| 58 | Di chuyển hướng 0 (`0`) | (10, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 26 |
| 59 | Di chuyển hướng 0 (`0`) | (10, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 24 |
| 60-61 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 23 |
| 62-64 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 21 |
| 65-66 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 20 |
| 67 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 18 |
| 68 | Di chuyển hướng 4 (`4`) | (6, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 16 |
| 69 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 14 |
| 70 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 12 |
| 71 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 10 |
| 72-73 | Di chuyển hướng 4 (`4`) | (3, 9) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 9 |
| 74 | Di chuyển hướng 4 (`4`) | (2, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 7 |
| 75 | Di chuyển hướng 4 (`4`) | (2, 11) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 5 |
| 76-78 | Di chuyển hướng 4 (`4`) | (1, 12) | (1, 13) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=1, tọa độ=(1, 13)) | 3 |
| 79-125 | Chờ 47 bước (`-47`) | (1, 13) | (1, 13) | Dự kiến đứng yên tại (1, 13); mục tiêu Spot #11 (thương hiệu=1, tọa độ=(1, 13)) | 3 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (1, 13) (ô=274)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(3, 0))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(3, 0))
- Mảng hành động đã gửi server: `[2, 2, 2, 0, 0, 0, 1, -1, 3, 2, 2, 1, 1, 2, 2, 2, 0, 0, 5, 0, 0, 0, 0, 5, 0, 0, -84]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 11 |
| 2 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 9 |
| 3-5 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 13)) | 7 |
| 6-7 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 6 |
| 8-9 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 5 |
| 10-12 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 3 |
| 13 | Di chuyển hướng 1 (`1`) | (2, 10) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 36 |
| 14 | Chờ 1 bước (`-1`) | (3, 9) | (3, 9) | Dự kiến đứng yên tại (3, 9); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 36 |
| 15-16 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 35 |
| 17 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 33 |
| 18 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 31 |
| 19 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 29 |
| 20 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 27 |
| 21 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 25 |
| 22-23 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 24 |
| 24-26 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(9, 8)) | 22 |
| 27-28 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 21 |
| 29-30 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 20 |
| 31 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 18 |
| 32 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 16 |
| 33-34 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 15 |
| 35 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 13 |
| 36 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 11 |
| 37 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 9 |
| 38 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 7 |
| 39-41 | Di chuyển hướng 0 (`0`) | (4, 1) | (3, 0) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 5 |
| 42-125 | Chờ 84 bước (`-84`) | (3, 0) | (3, 0) | Dự kiến đứng yên tại (3, 0); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 0)) | 5 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (3, 0) (ô=3)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 6)
- Mảng hành động đã gửi server: `[5, 4, 3, 4, 3, 4, 4, 3, 3, 3, -3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 4, 4, 5, 5, 5, 5, 0, 0, 0, 1, -1, 0, 1, 2, 1, 1, -64]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 36 |
| 2 | Di chuyển hướng 4 (`4`) | (2, 0) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 36 |
| 3 | Di chuyển hướng 3 (`3`) | (2, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 36 |
| 4 | Di chuyển hướng 4 (`4`) | (2, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 36 |
| 5 | Di chuyển hướng 3 (`3`) | (2, 3) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 36 |
| 6 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 36 |
| 7 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 36 |
| 8 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 36 |
| 9 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 36 |
| 10 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 36 |
| 11-13 | Chờ 3 bước (`-3`) | (3, 9) | (3, 9) | Dự kiến đứng yên tại (3, 9); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 9)) | 36 |
| 14-15 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 36 |
| 16 | Di chuyển hướng 2 (`2`) | (3, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 36 |
| 17 | Di chuyển hướng 2 (`2`) | (4, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 36 |
| 18 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 36 |
| 19 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 36 |
| 20 | Di chuyển hướng 2 (`2`) | (7, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 36 |
| 21 | Di chuyển hướng 2 (`2`) | (8, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 36 |
| 22 | Di chuyển hướng 2 (`2`) | (9, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 36 |
| 23 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 36 |
| 24 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 36 |
| 25 | Di chuyển hướng 2 (`2`) | (12, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 36 |
| 26 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 36 |
| 27 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 36 |
| 28 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 36 |
| 29 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 36 |
| 30 | Di chuyển hướng 3 (`3`) | (17, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 36 |
| 31 | Di chuyển hướng 3 (`3`) | (18, 11) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 36 |
| 32-35 | Di chuyển hướng 2 (`2`) | (18, 12) | (19, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(19, 12)) | 36 |
| 36-37 | Di chuyển hướng 2 (`2`) | (19, 12) | (20, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=2, tọa độ=(20, 12)) | 36 |
| 38-39 | Di chuyển hướng 4 (`4`) | (20, 12) | (20, 13) | Dự kiến đến điểm hẹn tọa độ (20, 13) | 36 |
| 40-42 | Di chuyển hướng 4 (`4`) | (20, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 36 |
| 43 | Di chuyển hướng 5 (`5`) | (19, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 36 |
| 44 | Di chuyển hướng 5 (`5`) | (18, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 36 |
| 45 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 36 |
| 46 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 36 |
| 47 | Di chuyển hướng 0 (`0`) | (15, 14) | (15, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(15, 13)) | 36 |
| 48-49 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 36 |
| 50-51 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 36 |
| 52 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 36 |
| 53 | Chờ 1 bước (`-1`) | (14, 10) | (14, 10) | Dự kiến đứng yên tại (14, 10); hướng tới tọa độ (14, 10) | 36 |
| 54 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 36 |
| 55 | Di chuyển hướng 1 (`1`) | (14, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 36 |
| 56 | Di chuyển hướng 2 (`2`) | (14, 8) | (15, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 8)) | 36 |
| 57-58 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 36 |
| 59-61 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 36 |
| 62-125 | Chờ 64 bước (`-64`) | (16, 6) | (16, 6) | Dự kiến đứng yên tại (16, 6); hướng tới tọa độ (16, 6) | 36 |

