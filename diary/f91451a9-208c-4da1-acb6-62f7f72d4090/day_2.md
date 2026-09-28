# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 51
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 29 | #3 | #5 | (15, 11) | 31 | 61 |
| 30 | #0 | #5 | (15, 11) | 36 | 61 |
| 30 | #2 | #5 | (15, 11) | 43 | 61 |
| 32 | #2 | #5 | (14, 12) | 60 | 61 |
| 34 | #2 | #5 | (14, 13) | 60 | 61 |
| 36 | #2 | #5 | (13, 13) | 60 | 61 |
| 38 | #2 | #5 | (12, 13) | 60 | 61 |
| 40 | #2 | #5 | (11, 13) | 60 | 61 |
| 45 | #2 | #5 | (8, 15) | 54 | 61 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 17) (ô=342)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 16)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 2, 2, 3, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 4, 4, 3, 3, 3, 3, 3, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 56 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 55 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 14)) | 54 |
| 6-7 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 53 |
| 8-9 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 52 |
| 10 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 50 |
| 11-12 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 49 |
| 13-14 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 48 |
| 15 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 46 |
| 16 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 44 |
| 17-18 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 43 |
| 19 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 41 |
| 20-21 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 40 |
| 22-23 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 11)) | 39 |
| 24-25 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 38 |
| 26-27 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 37 |
| 28-29 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 61 |
| 30-31 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 60 |
| 32 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 58 |
| 33-34 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 10)) | 57 |
| 35-36 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 56 |
| 37-38 | Di chuyển hướng 4 (`4`) | (17, 11) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 55 |
| 39 | Di chuyển hướng 3 (`3`) | (16, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 53 |
| 40-41 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 52 |
| 42-43 | Di chuyển hướng 3 (`3`) | (17, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 51 |
| 44-45 | Di chuyển hướng 3 (`3`) | (18, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 50 |
| 46-47 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(19, 17)) | 49 |
| 48-49 | Di chuyển hướng 0 (`0`) | (19, 17) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 48 |
| 50 | Chờ 1 bước (`-1`) | (18, 16) | (18, 16) | Dự kiến đứng yên tại (18, 16); hướng tới tọa độ (18, 16) | 48 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 0) (ô=2)
- Nhiên liệu đầu ngày: 25
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(1, 8))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(1, 8))
- Mảng hành động đã gửi server: `[3, 2, 3, 2, 2, 0, 2, 2, 2, 4, 4, 4, 5, 5, 4, 4, 4, 5, 5, 4, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 1)) | 24 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 23 |
| 4-5 | Di chuyển hướng 3 (`3`) | (4, 1) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 22 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 21 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(6, 2)) | 20 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 2) | (6, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 1)) | 19 |
| 12-13 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 18 |
| 14-15 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 17 |
| 16-18 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(9, 1)) | 15 |
| 19-20 | Di chuyển hướng 4 (`4`) | (9, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 14 |
| 21-22 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 13 |
| 23-24 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 12 |
| 25-26 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 11 |
| 27-28 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 10 |
| 29-30 | Di chuyển hướng 4 (`4`) | (5, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 9 |
| 31-32 | Di chuyển hướng 4 (`4`) | (5, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 8 |
| 33-34 | Di chuyển hướng 4 (`4`) | (4, 6) | (4, 7) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 7)) | 7 |
| 35-36 | Di chuyển hướng 5 (`5`) | (4, 7) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 6 |
| 37-38 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 5 |
| 39 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 3 |
| 40-50 | Chờ 11 bước (`-11`) | (1, 8) | (1, 8) | Dự kiến đứng yên tại (1, 8); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 14) (ô=284)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=1, tọa độ=(6, 15))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=1, tọa độ=(6, 15))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, 2, 3, 3, 3, 2, 2, 2, 2, 2, 2, 1, 1, 4, 4, 5, 5, 5, 5, 4, 5, 4, 4, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 60 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 59 |
| 4-5 | Di chuyển hướng 0 (`0`) | (5, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 58 |
| 6-7 | Di chuyển hướng 1 (`1`) | (5, 11) | (5, 10) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=2, tọa độ=(5, 10)) | 57 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 56 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 10) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 55 |
| 12-13 | Di chuyển hướng 3 (`3`) | (7, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 54 |
| 14-15 | Di chuyển hướng 3 (`3`) | (7, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 53 |
| 16 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 51 |
| 17-18 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 50 |
| 19 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 48 |
| 20-21 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 47 |
| 22-23 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 46 |
| 24-25 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 45 |
| 26-27 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 44 |
| 28-29 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 61 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 61 |
| 32-33 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 61 |
| 34-35 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 61 |
| 36-37 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 61 |
| 38-39 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 61 |
| 40-41 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 60 |
| 42 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 58 |
| 43 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 56 |
| 44 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 61 |
| 45-46 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(7, 16)) | 60 |
| 47-48 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 59 |
| 49-50 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(6, 15)) | 58 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 16) (ô=327)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(11, 5))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(11, 5))
- Mảng hành động đã gửi server: `[0, 5, 0, 1, 0, 2, 3, 2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 0, 0, 0, 0, 0, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 49 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(6, 15)) | 48 |
| 4-5 | Di chuyển hướng 0 (`0`) | (6, 15) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 47 |
| 6-7 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 46 |
| 8-9 | Di chuyển hướng 0 (`0`) | (6, 13) | (5, 12) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(5, 12)) | 45 |
| 10-11 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 44 |
| 12-13 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 43 |
| 14 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 41 |
| 15 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 39 |
| 16-17 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 38 |
| 18 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 36 |
| 19-20 | Di chuyển hướng 1 (`1`) | (11, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 35 |
| 21-22 | Di chuyển hướng 1 (`1`) | (11, 12) | (12, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 11)) | 34 |
| 23-24 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 33 |
| 25-26 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 32 |
| 27-28 | Di chuyển hướng 2 (`2`) | (14, 11) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 61 |
| 29-30 | Di chuyển hướng 2 (`2`) | (15, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 60 |
| 31 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 58 |
| 32-33 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 10)) | 57 |
| 34-35 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 56 |
| 36 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 54 |
| 37-38 | Di chuyển hướng 0 (`0`) | (16, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 53 |
| 39-41 | Di chuyển hướng 0 (`0`) | (16, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 51 |
| 42-43 | Di chuyển hướng 0 (`0`) | (15, 6) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 50 |
| 44-45 | Di chuyển hướng 5 (`5`) | (15, 5) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 49 |
| 46 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 47 |
| 47-48 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 46 |
| 49-50 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 5)) | 45 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (7, 6) (ô=127)
- Nhiên liệu đầu ngày: 10
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(1, 4))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(1, 4))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 0, 0, -37]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 9 |
| 2-4 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 7 |
| 5-6 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 6 |
| 7-8 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 5 |
| 9-10 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 4 |
| 11 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 2 |
| 12-13 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 4)) | 1 |
| 14-50 | Chờ 37 bước (`-37`) | (1, 4) | (1, 4) | Dự kiến đứng yên tại (1, 4); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 4)) | 1 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 14) (ô=284)
- Nhiên liệu đầu ngày: 61
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 15)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, -8, 4, 4, 5, 5, 5, 5, 4, 5, 4, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 61 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 61 |
| 4-5 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 61 |
| 6 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 61 |
| 7 | Di chuyển hướng 2 (`2`) | (8, 13) | (9, 13) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 13)) | 61 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 61 |
| 10 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 61 |
| 11-12 | Di chuyển hướng 2 (`2`) | (11, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 61 |
| 13-14 | Di chuyển hướng 2 (`2`) | (12, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 61 |
| 15-16 | Di chuyển hướng 2 (`2`) | (13, 13) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 61 |
| 17-18 | Di chuyển hướng 1 (`1`) | (14, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 61 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 61 |
| 21-28 | Chờ 8 bước (`-8`) | (15, 11) | (15, 11) | Dự kiến đứng yên tại (15, 11); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(15, 11)) | 61 |
| 29-30 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 61 |
| 31-32 | Di chuyển hướng 4 (`4`) | (14, 12) | (14, 13) | Dự kiến đến điểm hẹn tọa độ (14, 13) | 61 |
| 33-34 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 61 |
| 35-36 | Di chuyển hướng 5 (`5`) | (13, 13) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 61 |
| 37-38 | Di chuyển hướng 5 (`5`) | (12, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 61 |
| 39-40 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 61 |
| 41 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 61 |
| 42 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 61 |
| 43 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 61 |
| 44-50 | Chờ 7 bước (`-7`) | (8, 15) | (8, 15) | Dự kiến đứng yên tại (8, 15); hướng tới tọa độ (8, 15) | 61 |

