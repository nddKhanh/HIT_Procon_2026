# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 59
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #4 | #0 | (13, 3) | 46 | 59 |
| 13 | #3 | #0 | (13, 3) | 33 | 59 |
| 15 | #3 | #0 | (12, 3) | 58 | 59 |
| 17 | #3 | #0 | (11, 3) | 58 | 59 |
| 22 | #1 | #0 | (8, 5) | 1 | 59 |
| 28 | #3 | #0 | (6, 2) | 51 | 59 |
| 49 | #3 | #0 | (4, 7) | 48 | 59 |
| 57 | #1 | #0 | (4, 7) | 36 | 59 |

### Xe #0 - Tiếp tế

- Vị trí đầu ngày: (15, 11) (ô=224)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 7)
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 0, 0, 0, 0, 5, 5, 5, 5, 4, 4, 0, 0, 0, 5, 5, 4, 4, 5, 4, 4, 2, 3, 2, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 59 |
| 2-3 | Di chuyển hướng 1 (`1`) | (15, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 59 |
| 4 | Di chuyển hướng 0 (`0`) | (16, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 59 |
| 5-6 | Di chuyển hướng 0 (`0`) | (15, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 59 |
| 7 | Di chuyển hướng 0 (`0`) | (15, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 59 |
| 8-9 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 59 |
| 10 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 59 |
| 11 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 59 |
| 12-13 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 59 |
| 14-15 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 59 |
| 16-17 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 59 |
| 18 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 59 |
| 19 | Di chuyển hướng 4 (`4`) | (9, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 59 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 59 |
| 22-23 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 59 |
| 24-25 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 59 |
| 26-27 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 59 |
| 28-29 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 59 |
| 30-31 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 59 |
| 32-33 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 59 |
| 34-35 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 59 |
| 36-37 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 59 |
| 38 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 59 |
| 39 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 59 |
| 40-41 | Di chuyển hướng 2 (`2`) | (1, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 59 |
| 42-43 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 59 |
| 44 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 59 |
| 45-58 | Chờ 14 bước (`-14`) | (4, 7) | (4, 7) | Dự kiến đứng yên tại (4, 7); hướng tới tọa độ (4, 7) | 59 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (8, 8) (ô=160)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 7)
- Mảng hành động đã gửi server: `[0, 1, 0, -17, 1, 1, 0, 0, 5, 4, 5, 5, 4, 4, 5, 4, 5, 3, 3, 4, 2, 1, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 3 |
| 2-3 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 2 |
| 4-5 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 1 |
| 6-22 | Chờ 17 bước (`-17`) | (8, 5) | (8, 5) | Dự kiến đứng yên tại (8, 5); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 59 |
| 23-24 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 58 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 57 |
| 27 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 55 |
| 28-29 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 1)) | 54 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 1)) | 53 |
| 32-33 | Di chuyển hướng 4 (`4`) | (7, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 52 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 51 |
| 36-37 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 50 |
| 38-39 | Di chuyển hướng 4 (`4`) | (4, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 49 |
| 40-41 | Di chuyển hướng 4 (`4`) | (4, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 48 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 47 |
| 44 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 45 |
| 45 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 43 |
| 46-47 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 42 |
| 48-49 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 7)) | 41 |
| 50-51 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(1, 8)) | 40 |
| 52-53 | Di chuyển hướng 2 (`2`) | (1, 8) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 39 |
| 54-55 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 38 |
| 56 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 59 |
| 57-58 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 58 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (15, 10) (ô=205)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 12)
- Mảng hành động đã gửi server: `[4, 3, 3, 3, 3, 4, 5, 5, 5, 0, 5, 5, 5, 5, 5, 0, 5, 2, 3, 2, 2, 2, 3, 3, 1, 1, 1, 1, 1, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 57 |
| 2-3 | Di chuyển hướng 3 (`3`) | (15, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 56 |
| 4-5 | Di chuyển hướng 3 (`3`) | (15, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 55 |
| 6 | Di chuyển hướng 3 (`3`) | (16, 13) | (16, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(16, 14)) | 53 |
| 7-8 | Di chuyển hướng 3 (`3`) | (16, 14) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 52 |
| 9-10 | Di chuyển hướng 4 (`4`) | (17, 15) | (16, 16) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(16, 16)) | 51 |
| 11-12 | Di chuyển hướng 5 (`5`) | (16, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 50 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 49 |
| 15-16 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 48 |
| 17 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 46 |
| 18-19 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 45 |
| 20-21 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 44 |
| 22-23 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 43 |
| 24-26 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 41 |
| 27 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 39 |
| 28-30 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 37 |
| 31 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(6, 14)) | 35 |
| 32-33 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 34 |
| 34 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 32 |
| 35-37 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 30 |
| 38 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 28 |
| 39-41 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 26 |
| 42-43 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 25 |
| 44-45 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 17)) | 24 |
| 46-47 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 23 |
| 48-50 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 21 |
| 51-52 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 20 |
| 53-54 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(14, 13)) | 19 |
| 55-56 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 18 |
| 57-58 | Chờ 2 bước (`-2`) | (14, 12) | (14, 12) | Dự kiến đứng yên tại (14, 12); hướng tới tọa độ (14, 12) | 18 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 3) (ô=74)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 4)
- Mảng hành động đã gửi server: `[1, 1, 4, 5, 5, 4, 5, 5, 5, 5, 5, 5, 0, 0, 5, 4, 3, 3, 3, 3, 4, 3, 5, 5, 5, 0, 5, 5, 5, 0, 0, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 43 |
| 2 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(18, 1)) | 41 |
| 3-4 | Di chuyển hướng 4 (`4`) | (18, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 40 |
| 5 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 38 |
| 6-7 | Di chuyển hướng 5 (`5`) | (16, 2) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 37 |
| 8-9 | Di chuyển hướng 4 (`4`) | (15, 2) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 36 |
| 10 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 34 |
| 11-12 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 59 |
| 13-14 | Di chuyển hướng 5 (`5`) | (13, 3) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 59 |
| 15-16 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 59 |
| 17-18 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 58 |
| 19 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 56 |
| 20 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 54 |
| 21-22 | Di chuyển hướng 0 (`0`) | (8, 2) | (8, 1) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(8, 1)) | 53 |
| 23-24 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(7, 1)) | 52 |
| 25-26 | Di chuyển hướng 4 (`4`) | (7, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 51 |
| 27-28 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 58 |
| 29-30 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 57 |
| 31-32 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 5)) | 56 |
| 33-34 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 55 |
| 35-36 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 54 |
| 37-38 | Di chuyển hướng 3 (`3`) | (8, 7) | (8, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(8, 8)) | 53 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 52 |
| 41-42 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 51 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 50 |
| 45-46 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 49 |
| 47-48 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 59 |
| 49-50 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 58 |
| 51 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 7)) | 56 |
| 52-53 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 55 |
| 54-55 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 54 |
| 56-57 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 53 |
| 58 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 51 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (18, 8) (ô=170)
- Nhiên liệu đầu ngày: 59
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(1, 11))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(1, 11))
- Mảng hành động đã gửi server: `[0, 5, 5, 0, 0, 5, 0, 0, 3, 3, 3, 3, 3, 3, 4, 5, 5, 4, 4, 4, 4, 4, 5, 5, 0, 5, 5, 0, 0, 5, 5, 0, 5, 5, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 58 |
| 2 | Di chuyển hướng 5 (`5`) | (18, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 56 |
| 3-4 | Di chuyển hướng 5 (`5`) | (17, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 55 |
| 5 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 53 |
| 6 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 51 |
| 7-8 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 50 |
| 9 | Di chuyển hướng 0 (`0`) | (14, 5) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 48 |
| 10 | Di chuyển hướng 0 (`0`) | (13, 4) | (13, 3) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(13, 3)) | 46 |
| 11-12 | Di chuyển hướng 3 (`3`) | (13, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 58 |
| 13 | Di chuyển hướng 3 (`3`) | (13, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 56 |
| 14 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 54 |
| 15-16 | Di chuyển hướng 3 (`3`) | (14, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 53 |
| 17 | Di chuyển hướng 3 (`3`) | (15, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 51 |
| 18-19 | Di chuyển hướng 3 (`3`) | (15, 8) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 50 |
| 20 | Di chuyển hướng 4 (`4`) | (16, 9) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 48 |
| 21-22 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 47 |
| 23-24 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 46 |
| 25 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 44 |
| 26-27 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 43 |
| 28-29 | Di chuyển hướng 4 (`4`) | (12, 12) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 42 |
| 30 | Di chuyển hướng 4 (`4`) | (12, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 40 |
| 31-32 | Di chuyển hướng 4 (`4`) | (11, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 39 |
| 33-34 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 38 |
| 35-37 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 36 |
| 38 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 34 |
| 39-41 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 42 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(6, 14)) | 30 |
| 43-44 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 29 |
| 45-46 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 28 |
| 47 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 26 |
| 48-49 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 25 |
| 50-51 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 24 |
| 52 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 22 |
| 53-54 | Di chuyển hướng 5 (`5`) | (2, 11) | (1, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(1, 11)) | 21 |
| 55-58 | Chờ 4 bước (`-4`) | (1, 11) | (1, 11) | Dự kiến đứng yên tại (1, 11); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(1, 11)) | 21 |

