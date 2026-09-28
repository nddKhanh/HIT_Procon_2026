# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 57
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #0 | #4 | (6, 12) | 61 | 62 |
| 3 | #0 | #4 | (7, 11) | 60 | 62 |
| 12 | #3 | #4 | (9, 4) | 3 | 62 |
| 19 | #3 | #4 | (11, 7) | 57 | 62 |
| 20 | #2 | #4 | (11, 7) | 8 | 62 |
| 21 | #3 | #4 | (12, 7) | 61 | 62 |
| 23 | #3 | #4 | (12, 8) | 61 | 62 |
| 24 | #3 | #4 | (13, 9) | 60 | 62 |
| 25 | #3 | #4 | (13, 10) | 60 | 62 |
| 26 | #3 | #4 | (13, 11) | 60 | 62 |
| 27 | #3 | #4 | (13, 12) | 60 | 62 |
| 28 | #3 | #4 | (13, 13) | 60 | 62 |
| 34 | #1 | #4 | (12, 16) | 15 | 62 |
| 35 | #1 | #4 | (13, 15) | 60 | 62 |
| 36 | #1 | #4 | (13, 14) | 60 | 62 |
| 37 | #1 | #4 | (13, 13) | 60 | 62 |
| 38 | #1 | #4 | (13, 12) | 60 | 62 |
| 39 | #1 | #4 | (13, 11) | 60 | 62 |
| 40 | #1 | #4 | (13, 10) | 60 | 62 |
| 41 | #1 | #4 | (13, 9) | 60 | 62 |
| 42 | #1 | #4 | (12, 8) | 60 | 62 |
| 43 | #1 | #4 | (11, 8) | 60 | 62 |
| 44 | #0 | #4 | (11, 8) | 26 | 62 |
| 45 | #1 | #4 | (11, 7) | 61 | 62 |
| 46 | #0 | #4 | (11, 7) | 61 | 62 |
| 46 | #2 | #4 | (11, 7) | 36 | 62 |
| 47 | #1 | #4 | (10, 7) | 61 | 62 |
| 48 | #1 | #4 | (9, 7) | 60 | 62 |
| 49 | #1 | #4 | (8, 6) | 60 | 62 |
| 50 | #1 | #4 | (7, 6) | 60 | 62 |
| 51 | #0 | #4 | (7, 6) | 55 | 62 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=209)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(6, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(6, 3))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 3, 3, 3, 3, 4, 2, 2, 2, 3, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 5, 3, 0, 5, 5, 0, 5, 5, 0, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 62 |
| 2 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 62 |
| 3-4 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 61 |
| 5-6 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 60 |
| 7-8 | Di chuyển hướng 3 (`3`) | (9, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 59 |
| 9-11 | Di chuyển hướng 3 (`3`) | (9, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 57 |
| 12 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 55 |
| 13-14 | Di chuyển hướng 3 (`3`) | (10, 14) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 54 |
| 15-16 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 53 |
| 17 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 51 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 17)) | 50 |
| 20-21 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 17)) | 49 |
| 22-23 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 48 |
| 24-25 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 18)) | 47 |
| 26-27 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 46 |
| 28-29 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 45 |
| 30 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 43 |
| 31 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 41 |
| 32 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 39 |
| 33-34 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 38 |
| 35 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 36 |
| 36 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 34 |
| 37 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 32 |
| 38 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 30 |
| 39 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 28 |
| 40-41 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 27 |
| 42-43 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 62 |
| 44-45 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 46-47 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 61 |
| 48 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 59 |
| 49 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 57 |
| 50 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 62 |
| 51 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 60 |
| 52-53 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 59 |
| 54-55 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 58 |
| 56 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 56 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (10, 14) (ô=248)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(6, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(6, 3))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 5, 5, 4, 4, 4, 5, 4, 2, 2, 2, 3, 0, 0, 5, 1, 1, 0, 1, 0, 1, 0, 0, 5, 0, 5, 5, 0, 5, 5, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 40 |
| 2-3 | Di chuyển hướng 2 (`2`) | (11, 14) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 39 |
| 4-5 | Di chuyển hướng 2 (`2`) | (12, 14) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 38 |
| 6 | Di chuyển hướng 2 (`2`) | (13, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 36 |
| 7-8 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 35 |
| 9-10 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(16, 13)) | 34 |
| 11-12 | Di chuyển hướng 5 (`5`) | (16, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 33 |
| 13-14 | Di chuyển hướng 5 (`5`) | (15, 13) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 32 |
| 15-16 | Di chuyển hướng 4 (`4`) | (14, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 31 |
| 17 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 29 |
| 18 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 27 |
| 19 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 25 |
| 20 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 23 |
| 21-22 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 17)) | 22 |
| 23-24 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 17)) | 21 |
| 25-26 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 20 |
| 27-28 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 18)) | 19 |
| 29-30 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 18 |
| 31-32 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 17 |
| 33 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 62 |
| 34 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 62 |
| 35 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 62 |
| 36 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 62 |
| 37 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 62 |
| 38 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 62 |
| 39 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 62 |
| 40 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 62 |
| 41 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 62 |
| 42 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 62 |
| 43-44 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 45-46 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 62 |
| 47 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 62 |
| 48 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 62 |
| 49 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 62 |
| 50 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 60 |
| 51-52 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 59 |
| 53-54 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 58 |
| 55 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 56 |
| 56 | Chờ 1 bước (`-1`) | (6, 3) | (6, 3) | Dự kiến đứng yên tại (6, 3); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 56 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 8) (ô=142)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 15)
- Mảng hành động đã gửi server: `[3, 3, 3, 5, 4, 5, 2, 1, 1, 1, 1, 1, 2, 2, 1, 0, 0, 1, 5, 5, 5, 5, 5, 3, 3, 4, 2, 2, 3, 2, 2, 3, 2, 3, 3, 4, 3, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 29 |
| 2 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 27 |
| 3 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 25 |
| 4-5 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 24 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 23 |
| 8 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 21 |
| 9-10 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 20 |
| 11 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 18 |
| 12-13 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 17 |
| 14 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 15 |
| 15-16 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 14 |
| 17 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 12 |
| 18 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 10 |
| 19 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 20-21 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 61 |
| 22-23 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 59 |
| 24 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 57 |
| 25-26 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 56 |
| 27-28 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 55 |
| 29 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 53 |
| 30-31 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 52 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 51 |
| 34 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 49 |
| 35-36 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 48 |
| 37 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 46 |
| 38-39 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 45 |
| 40-41 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 44 |
| 42 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 42 |
| 43 | Di chuyển hướng 3 (`3`) | (8, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 40 |
| 44 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 38 |
| 45 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 46-47 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 61 |
| 48-49 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 60 |
| 50 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 58 |
| 51 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 56 |
| 52 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 54 |
| 53 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 52 |
| 54 | Di chuyển hướng 4 (`4`) | (13, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 50 |
| 55 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 48 |
| 56 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 46 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 3) (ô=62)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 5)
- Mảng hành động đã gửi server: `[5, 4, -10, 3, 3, 3, 2, 3, 3, 3, 4, 3, 4, 4, 4, 4, 4, 0, 1, 0, 0, 0, 0, 5, 0, 0, 0, 1, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 5 |
| 2 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(9, 4)) | 3 |
| 3-12 | Chờ 10 bước (`-10`) | (9, 4) | (9, 4) | Dự kiến đứng yên tại (9, 4); mục tiêu Spot #14 (thương hiệu=1, tọa độ=(9, 4)) | 62 |
| 13-14 | Di chuyển hướng 3 (`3`) | (9, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 61 |
| 15 | Di chuyển hướng 3 (`3`) | (10, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 59 |
| 16-18 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 19-20 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 62 |
| 21-22 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 62 |
| 23 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 62 |
| 24 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 62 |
| 25 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 62 |
| 26 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 62 |
| 27 | Di chuyển hướng 4 (`4`) | (13, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 62 |
| 28 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 60 |
| 29-30 | Di chuyển hướng 4 (`4`) | (12, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 59 |
| 31-32 | Di chuyển hướng 4 (`4`) | (12, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 58 |
| 33 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 56 |
| 34-35 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 55 |
| 36 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 53 |
| 37-38 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 52 |
| 39-40 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 51 |
| 41 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 49 |
| 42-44 | Di chuyển hướng 0 (`0`) | (9, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 47 |
| 45-46 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 46 |
| 47-48 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 45 |
| 49 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 43 |
| 50 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 41 |
| 51-52 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 40 |
| 53-54 | Di chuyển hướng 0 (`0`) | (7, 7) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 39 |
| 55-56 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 38 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (5, 12) (ô=209)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 6)
- Mảng hành động đã gửi server: `[2, 1, 1, 1, 1, 1, 1, 0, 1, 4, 3, 3, 2, -2, 2, 3, 3, 3, 4, 3, 4, 3, 4, 4, -3, 1, 1, 0, 1, 0, 1, 0, 0, 5, 0, 5, 5, 0, 5, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 62 |
| 2 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 62 |
| 3-4 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 62 |
| 5 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 62 |
| 6-7 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 62 |
| 8 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 62 |
| 9 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 62 |
| 10 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 62 |
| 11 | Di chuyển hướng 1 (`1`) | (9, 5) | (9, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(9, 4)) | 62 |
| 12-13 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 62 |
| 14 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 62 |
| 15 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 62 |
| 16 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 17-18 | Chờ 2 bước (`-2`) | (11, 7) | (11, 7) | Dự kiến đứng yên tại (11, 7); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 19-20 | Di chuyển hướng 2 (`2`) | (11, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 62 |
| 21-22 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 62 |
| 23 | Di chuyển hướng 3 (`3`) | (12, 8) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 62 |
| 24 | Di chuyển hướng 3 (`3`) | (13, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 62 |
| 25 | Di chuyển hướng 4 (`4`) | (13, 10) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 62 |
| 26 | Di chuyển hướng 3 (`3`) | (13, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 62 |
| 27 | Di chuyển hướng 4 (`4`) | (13, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 62 |
| 28 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 62 |
| 29 | Di chuyển hướng 4 (`4`) | (13, 14) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 62 |
| 30 | Di chuyển hướng 4 (`4`) | (13, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 62 |
| 31-33 | Chờ 3 bước (`-3`) | (12, 16) | (12, 16) | Dự kiến đứng yên tại (12, 16); hướng tới tọa độ (12, 16) | 62 |
| 34 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 62 |
| 35 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 62 |
| 36 | Di chuyển hướng 0 (`0`) | (13, 14) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 62 |
| 37 | Di chuyển hướng 1 (`1`) | (13, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 62 |
| 38 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 62 |
| 39 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 62 |
| 40 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 62 |
| 41 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 62 |
| 42 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 62 |
| 43-44 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 62 |
| 45-46 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 62 |
| 47 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 62 |
| 48 | Di chuyển hướng 0 (`0`) | (9, 7) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 62 |
| 49 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 62 |
| 50-56 | Chờ 7 bước (`-7`) | (7, 6) | (7, 6) | Dự kiến đứng yên tại (7, 6); hướng tới tọa độ (7, 6) | 62 |

