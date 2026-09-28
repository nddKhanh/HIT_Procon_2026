# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 45
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 25 | #3 | #5 | (4, 13) | 22 | 61 |
| 37 | #0 | #5 | (4, 14) | 28 | 61 |
| 44 | #2 | #5 | (4, 14) | 4 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (19, 17) (ô=359)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(2, 17))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(2, 17))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 5, 0, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 4, 3, 3, 0, 5, 5, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 53 |
| 2-3 | Di chuyển hướng 0 (`0`) | (18, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 52 |
| 4-5 | Di chuyển hướng 0 (`0`) | (18, 15) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 51 |
| 6-7 | Di chuyển hướng 5 (`5`) | (17, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 50 |
| 8 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 48 |
| 9-10 | Di chuyển hướng 0 (`0`) | (15, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 47 |
| 11 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 45 |
| 12-13 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 44 |
| 14-15 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 43 |
| 16-17 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 42 |
| 18-19 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 41 |
| 20 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 39 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 38 |
| 23 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 36 |
| 24 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 34 |
| 25-26 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 33 |
| 27-28 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 32 |
| 29-30 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 31 |
| 31-32 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(6, 15)) | 30 |
| 33-34 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 29 |
| 35-36 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 61 |
| 37-38 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 14)) | 60 |
| 39-40 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 59 |
| 41-42 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 58 |
| 43-44 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 17)) | 57 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 7) (ô=156)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(2, 0))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(2, 0))
- Mảng hành động đã gửi server: `[3, 3, 0, 0, 0, 5, 0, 5, 5, 5, 1, 0, 5, 0, 0, 5, 5, 5, 5, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 54 |
| 3-4 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 53 |
| 5 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 51 |
| 6-7 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 50 |
| 8-10 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 48 |
| 11-12 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 47 |
| 13-14 | Di chuyển hướng 0 (`0`) | (14, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 46 |
| 15 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 44 |
| 16-17 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 43 |
| 18-19 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 5)) | 42 |
| 20-21 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 41 |
| 22-23 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 40 |
| 24-26 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 38 |
| 27 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 36 |
| 28 | Di chuyển hướng 0 (`0`) | (9, 2) | (9, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 1)) | 34 |
| 29-30 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 33 |
| 31-33 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 31 |
| 34-35 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 1)) | 30 |
| 36-37 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 29 |
| 38-40 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 27 |
| 41-42 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 1)) | 26 |
| 43-44 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 25 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 5) (ô=113)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 14)
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 3, 3, 3, 4, 5, 5, 5, 5, 5, 4, 4, 5, 5, 5, 5, 5, 0, 5, 4, 4, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 36 |
| 2 | Di chuyển hướng 3 (`3`) | (14, 5) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 34 |
| 3-4 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 33 |
| 5-6 | Di chuyển hướng 3 (`3`) | (15, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 32 |
| 7-9 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 30 |
| 10-11 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 29 |
| 12 | Di chuyển hướng 3 (`3`) | (17, 9) | (17, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 10)) | 27 |
| 13-14 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 26 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 25 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 23 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 22 |
| 20-21 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 21 |
| 22-23 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 11)) | 20 |
| 24-25 | Di chuyển hướng 4 (`4`) | (12, 11) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 19 |
| 26-27 | Di chuyển hướng 4 (`4`) | (11, 12) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 18 |
| 28-29 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 17 |
| 30 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 15 |
| 31-32 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 14 |
| 33 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 12 |
| 34 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 10 |
| 35-36 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 9 |
| 37-38 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 8 |
| 39 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 6 |
| 40-41 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 14)) | 5 |
| 42-43 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 61 |
| 44 | Chờ 1 bước (`-1`) | (4, 14) | (4, 14) | Dự kiến đứng yên tại (4, 14); hướng tới tọa độ (4, 14) | 61 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 10) (ô=206)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=3, tọa độ=(7, 16))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=3, tọa độ=(7, 16))
- Mảng hành động đã gửi server: `[3, 4, 4, 4, 3, 0, 1, 0, 0, 1, 4, 4, 4, 4, 4, 4, 4, 2, 1, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 35 |
| 2-3 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 34 |
| 4-5 | Di chuyển hướng 4 (`4`) | (6, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 33 |
| 6-7 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 32 |
| 8-9 | Di chuyển hướng 3 (`3`) | (5, 14) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(6, 15)) | 31 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 30 |
| 12-13 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 29 |
| 14-15 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 28 |
| 16-17 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 27 |
| 18-19 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=2, tọa độ=(5, 10)) | 26 |
| 20-21 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 25 |
| 22-23 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 24 |
| 24 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 61 |
| 25-26 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 14)) | 60 |
| 27-28 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 59 |
| 29-30 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 58 |
| 31-32 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 17)) | 57 |
| 33-34 | Di chuyển hướng 2 (`2`) | (2, 17) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 56 |
| 35-36 | Di chuyển hướng 1 (`1`) | (3, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 55 |
| 37-38 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 54 |
| 39 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 52 |
| 40-41 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 51 |
| 42-43 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(7, 16)) | 50 |
| 44 | Chờ 1 bước (`-1`) | (7, 16) | (7, 16) | Dự kiến đứng yên tại (7, 16); mục tiêu Spot #18 (thương hiệu=3, tọa độ=(7, 16)) | 50 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (1, 8) (ô=161)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 6)
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 0, 1, 1, 1, 3, 2, 2, 2, 3, 4, 4, 4, 4, 4, 2, 2, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 36 |
| 2 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 34 |
| 3-4 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 33 |
| 5 | Di chuyển hướng 1 (`1`) | (1, 5) | (1, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 4)) | 31 |
| 6-7 | Di chuyển hướng 0 (`0`) | (1, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 30 |
| 8-9 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 29 |
| 10-12 | Di chuyển hướng 1 (`1`) | (1, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 27 |
| 13-14 | Di chuyển hướng 1 (`1`) | (2, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 26 |
| 15-16 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 1)) | 25 |
| 17-18 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 24 |
| 19-20 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 23 |
| 21-23 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 1)) | 21 |
| 24-25 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(6, 2)) | 20 |
| 26-27 | Di chuyển hướng 4 (`4`) | (6, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 19 |
| 28-30 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 17 |
| 31-32 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 16 |
| 33-34 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 15 |
| 35-36 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 7)) | 14 |
| 37-38 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 13 |
| 39-40 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 12 |
| 41-42 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 11 |
| 43-44 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 10 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (17, 11) (ô=237)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 14)
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 5, 5, 4, 3, -19]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 61 |
| 2 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 61 |
| 3-4 | Di chuyển hướng 5 (`5`) | (16, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 61 |
| 5 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 61 |
| 6-7 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 61 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 61 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 61 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 61 |
| 14 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 61 |
| 15-16 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 61 |
| 17 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 61 |
| 18 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 61 |
| 19-20 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 61 |
| 21-22 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 61 |
| 23 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 61 |
| 24-25 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 61 |
| 26-44 | Chờ 19 bước (`-19`) | (4, 14) | (4, 14) | Dự kiến đứng yên tại (4, 14); hướng tới tọa độ (4, 14) | 61 |

