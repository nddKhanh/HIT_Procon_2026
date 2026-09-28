# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 62
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 10 | #1 | #4 | (11, 7) | 44 | 62 |
| 16 | #0 | #4 | (11, 7) | 42 | 62 |
| 21 | #3 | #4 | (11, 7) | 20 | 62 |
| 29 | #2 | #4 | (10, 8) | 21 | 62 |
| 61 | #2 | #4 | (10, 8) | 37 | 62 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (6, 3) (ô=57)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 13)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 1, 2, 3, 3, 4, 4, 4, 4, 4, 4, 3, 3, 3, 4, 3, 3, 2, 2, 2, 3, 0, 0, 1, 1, 0, 2, 2, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 55 |
| 2 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 53 |
| 3-4 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 52 |
| 5-6 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(9, 4)) | 51 |
| 7-8 | Di chuyển hướng 1 (`1`) | (9, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 50 |
| 9 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 48 |
| 10-11 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 47 |
| 12-13 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 46 |
| 14 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 44 |
| 15 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 61 |
| 18-19 | Di chuyển hướng 4 (`4`) | (10, 8) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 60 |
| 20-21 | Di chuyển hướng 4 (`4`) | (10, 9) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 59 |
| 22-23 | Di chuyển hướng 4 (`4`) | (9, 10) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 58 |
| 24-25 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 57 |
| 26-28 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 55 |
| 29 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 53 |
| 30-31 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 52 |
| 32-33 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 51 |
| 34 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 49 |
| 35-36 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 17)) | 48 |
| 37-38 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 17)) | 47 |
| 39-40 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 46 |
| 41-42 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 18)) | 45 |
| 43-44 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 44 |
| 45-46 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 43 |
| 47 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 41 |
| 48-49 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 40 |
| 50-51 | Di chuyển hướng 0 (`0`) | (14, 14) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 39 |
| 52-53 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 38 |
| 54-55 | Di chuyển hướng 2 (`2`) | (15, 13) | (16, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(16, 13)) | 37 |
| 56-57 | Di chuyển hướng 5 (`5`) | (16, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 36 |
| 58-59 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 35 |
| 60-61 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 34 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (6, 3) (ô=57)
- Nhiên liệu đầu ngày: 56
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=0, tọa độ=(6, 6))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=0, tọa độ=(6, 6))
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 3, 3, 2, 1, 0, 1, 0, 4, 4, 4, 5, 4, 4, 4, 4, 4, 4, 3, 3, 4, 3, 2, 2, 2, 2, 3, 0, 1, 0, 0, 0, 0, 5, 0, 0, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 55 |
| 2 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 53 |
| 3-4 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 52 |
| 5 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 50 |
| 6 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 48 |
| 7 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 46 |
| 8-9 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 10-11 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 61 |
| 12 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 59 |
| 13 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 57 |
| 14-15 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 56 |
| 16-17 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 55 |
| 18-19 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 54 |
| 20 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 52 |
| 21 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 50 |
| 22 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 48 |
| 23-24 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 47 |
| 25-26 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 46 |
| 27 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 44 |
| 28 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 42 |
| 29 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 40 |
| 30-31 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 39 |
| 32 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 37 |
| 33 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 35 |
| 34 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 33 |
| 35 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 31 |
| 36 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 29 |
| 37 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 27 |
| 38 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 25 |
| 39 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 23 |
| 40-41 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 22 |
| 42 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 20 |
| 43-44 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 19 |
| 45-46 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 18 |
| 47 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 16 |
| 48-50 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 14 |
| 51-52 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 13 |
| 53-54 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 12 |
| 55 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 10 |
| 56 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 8 |
| 57-58 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 7 |
| 59-60 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 6 |
| 61 | Chờ 1 bước (`-1`) | (6, 6) | (6, 6) | Dự kiến đứng yên tại (6, 6); mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 6 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 15) (ô=268)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 8)
- Mảng hành động đã gửi server: `[0, 5, 5, 0, 0, 0, 5, 5, 5, 4, 1, 1, 1, 2, 1, 2, 2, 1, 1, 0, 1, 0, 5, 5, 5, 5, 5, 3, 3, 4, 3, 4, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 44 |
| 2-3 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 43 |
| 4-5 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 42 |
| 6-7 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 41 |
| 8 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 39 |
| 9-11 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 37 |
| 12-13 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 36 |
| 14-15 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 35 |
| 16-17 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 34 |
| 18 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 32 |
| 19-20 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 31 |
| 21 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 29 |
| 22 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 27 |
| 23 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 25 |
| 24-25 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 24 |
| 26 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 22 |
| 27-28 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 62 |
| 29-30 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 61 |
| 31-32 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 60 |
| 33 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 58 |
| 34 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 35-36 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 55 |
| 37-38 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 54 |
| 39 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 52 |
| 40-41 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 51 |
| 42-43 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 50 |
| 44 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 48 |
| 45-46 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 47 |
| 47 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 45 |
| 48-49 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 44 |
| 50-51 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 43 |
| 52-53 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 42 |
| 54-55 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 41 |
| 56-57 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 40 |
| 58 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 38 |
| 59-60 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 62 |
| 61 | Chờ 1 bước (`-1`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); hướng tới tọa độ (10, 8) | 62 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (6, 5) (ô=91)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(5, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(5, 12))
- Mảng hành động đã gửi server: `[3, 0, 1, 0, 2, 2, 2, 2, 2, 3, 3, 4, 4, 3, 2, 3, 3, 4, 3, 3, 5, 4, 4, 4, 4, -1, 0, 1, 0, 0, 0, 0, 5, 5, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 37 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 36 |
| 4-5 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 35 |
| 6 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 33 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 32 |
| 9 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 30 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 29 |
| 12-13 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 28 |
| 14 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 26 |
| 15-16 | Di chuyển hướng 3 (`3`) | (11, 3) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 25 |
| 17-18 | Di chuyển hướng 3 (`3`) | (11, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 24 |
| 19 | Di chuyển hướng 4 (`4`) | (12, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 22 |
| 20 | Di chuyển hướng 4 (`4`) | (11, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 21-22 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 61 |
| 23-24 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 60 |
| 25-26 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 58 |
| 27-28 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 56 |
| 29-30 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 54 |
| 31-32 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 52 |
| 33-34 | Di chuyển hướng 3 (`3`) | (13, 12) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 50 |
| 35-36 | Di chuyển hướng 5 (`5`) | (14, 13) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 49 |
| 37 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 47 |
| 38-39 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 46 |
| 40-41 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 45 |
| 42 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 43 |
| 43 | Chờ 1 bước (`-1`) | (11, 17) | (11, 17) | Dự kiến đứng yên tại (11, 17); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 43 |
| 44-45 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 42 |
| 46 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 40 |
| 47-48 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 39 |
| 49-50 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 38 |
| 51 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 36 |
| 52-54 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 34 |
| 55-56 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 33 |
| 57-58 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 32 |
| 59-60 | Di chuyển hướng 5 (`5`) | (7, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 31 |
| 61 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 29 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (7, 6) (ô=109)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 8)
- Mảng hành động đã gửi server: `[2, 2, 3, 2, -15, 4, -39]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 62 |
| 2 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 62 |
| 3 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 62 |
| 4-5 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 6-20 | Chờ 15 bước (`-15`) | (11, 7) | (11, 7) | Dự kiến đứng yên tại (11, 7); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 21-22 | Di chuyển hướng 4 (`4`) | (11, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 62 |
| 23-61 | Chờ 39 bước (`-39`) | (10, 8) | (10, 8) | Dự kiến đứng yên tại (10, 8); hướng tới tọa độ (10, 8) | 62 |

