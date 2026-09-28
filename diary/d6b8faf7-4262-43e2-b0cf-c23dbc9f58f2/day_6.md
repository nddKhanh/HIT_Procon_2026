# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 66
- Số xe: 5
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 7 | #1 | #4 | (6, 8) | 4 | 62 |
| 10 | #1 | #4 | (7, 8) | 61 | 62 |
| 13 | #1 | #4 | (9, 8) | 59 | 62 |
| 14 | #3 | #4 | (10, 8) | 21 | 62 |
| 15 | #1 | #4 | (10, 8) | 61 | 62 |
| 35 | #0 | #4 | (12, 8) | 5 | 62 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 13) (ô=234)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(8, 11))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(8, 11))
- Mảng hành động đã gửi server: `[4, 5, 5, 4, 3, 3, 2, 2, 2, 3, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 5, 0, 1, 0, 1, 0, 5, 5, 5, 5, 5, 3, 3, 4, 3, 4, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (13, 13) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 32 |
| 1-2 | Di chuyển hướng 5 (`5`) | (12, 14) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 31 |
| 3-4 | Di chuyển hướng 5 (`5`) | (11, 14) | (10, 14) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=2, tọa độ=(10, 14)) | 30 |
| 5-6 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 29 |
| 7-8 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 28 |
| 9 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 26 |
| 10-11 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 17)) | 25 |
| 12-13 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 17)) | 24 |
| 14-15 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 23 |
| 16-17 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 18)) | 22 |
| 18-19 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 21 |
| 20-21 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 20 |
| 22 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 18 |
| 23 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 16 |
| 24 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 14 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 13) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 13 |
| 27-28 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 11 |
| 29-30 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 9 |
| 31-32 | Di chuyển hướng 0 (`0`) | (13, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 7 |
| 33-34 | Di chuyển hướng 0 (`0`) | (13, 9) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 62 |
| 35-36 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 60 |
| 37-38 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 59 |
| 39-40 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 58 |
| 41 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 56 |
| 42 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 54 |
| 43-44 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 53 |
| 45-46 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 52 |
| 47 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 50 |
| 48-49 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 49 |
| 50-51 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 48 |
| 52 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 46 |
| 53-54 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 45 |
| 55 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 43 |
| 56-57 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 42 |
| 58-59 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 41 |
| 60-61 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 40 |
| 62-63 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 39 |
| 64 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 37 |
| 65 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 35 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (6, 6) (ô=108)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 17)
- Mảng hành động đã gửi server: `[3, 4, -4, 2, 2, 2, 2, 1, 1, 0, 1, 0, 5, 5, 5, 5, 5, 3, 3, 4, 3, 4, 4, 3, 4, 4, 3, 3, 4, 3, 2, 2, 2, 2, 3, 2, 2, 2, 3, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 5 |
| 2-3 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 4 |
| 4-7 | Chờ 4 bước (`-4`) | (6, 8) | (6, 8) | Dự kiến đứng yên tại (6, 8); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 62 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 62 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 61 |
| 12 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 62 |
| 13-14 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 62 |
| 15-16 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 61 |
| 17-18 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 60 |
| 19 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 58 |
| 20 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 21-22 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 55 |
| 23-24 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 54 |
| 25 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 52 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 51 |
| 28-29 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 50 |
| 30 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 48 |
| 31-32 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 47 |
| 33 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 45 |
| 34-35 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 44 |
| 36-37 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 43 |
| 38-39 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 42 |
| 40-41 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 41 |
| 42 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 39 |
| 43 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 37 |
| 44 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 35 |
| 45-46 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 34 |
| 47 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 32 |
| 48 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 30 |
| 49 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 28 |
| 50 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 26 |
| 51 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 24 |
| 52 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 22 |
| 53 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 20 |
| 54 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 18 |
| 55-56 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(12, 17)) | 17 |
| 57-58 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 17)) | 16 |
| 59-60 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 15 |
| 61-62 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 18)) | 14 |
| 63-64 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 13 |
| 65 | Chờ 1 bước (`-1`) | (14, 17) | (14, 17) | Dự kiến đứng yên tại (14, 17); hướng tới tọa độ (14, 17) | 13 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 8) (ô=146)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(14, 18))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(14, 18))
- Mảng hành động đã gửi server: `[2, 0, 1, 0, 1, 0, 5, 5, 5, 5, 5, 3, 3, 4, 3, 4, 4, 3, 4, 4, 3, 3, 4, 3, 2, 2, 2, 2, 3, 1, 2, 1, 1, 1, 2, 2, 4, 4, 4, 4, 3, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 61 |
| 2-3 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 60 |
| 4-5 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 59 |
| 6 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 57 |
| 7 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 8-9 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 54 |
| 10-11 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 53 |
| 12 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 51 |
| 13-14 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 50 |
| 15-16 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 49 |
| 17 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 47 |
| 18-19 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 46 |
| 20 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 44 |
| 21-22 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 43 |
| 23-24 | Di chuyển hướng 3 (`3`) | (6, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 42 |
| 25-26 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 41 |
| 27-28 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 40 |
| 29 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 38 |
| 30 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 36 |
| 31 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 34 |
| 32-33 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 33 |
| 34 | Di chuyển hướng 3 (`3`) | (6, 13) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 31 |
| 35 | Di chuyển hướng 4 (`4`) | (6, 14) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 29 |
| 36 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 27 |
| 37 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 25 |
| 38 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 23 |
| 39 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 21 |
| 40 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 19 |
| 41 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 17)) | 17 |
| 42-43 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 16 |
| 44 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 14 |
| 45 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 12 |
| 46 | Di chuyển hướng 1 (`1`) | (13, 15) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 10 |
| 47 | Di chuyển hướng 1 (`1`) | (13, 14) | (14, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 13)) | 8 |
| 48-49 | Di chuyển hướng 2 (`2`) | (14, 13) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 7 |
| 50-51 | Di chuyển hướng 2 (`2`) | (15, 13) | (16, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(16, 13)) | 6 |
| 52-53 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 5 |
| 54-55 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 4 |
| 56-58 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 2 |
| 59-60 | Di chuyển hướng 4 (`4`) | (14, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 1 |
| 61-62 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 18)) | 0 |
| 63-65 | Chờ 3 bước (`-3`) | (14, 18) | (14, 18) | Dự kiến đứng yên tại (14, 18); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 18)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=209)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(6, 3))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(6, 3))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 1, 1, 1, 1, 1, 0, 1, 0, 5, 4, 4, 5, 5, 4, 0, 1, 0, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 28 |
| 2 | Di chuyển hướng 1 (`1`) | (6, 12) | (7, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(7, 11)) | 26 |
| 3-4 | Di chuyển hướng 2 (`2`) | (7, 11) | (8, 11) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(8, 11)) | 25 |
| 5-6 | Di chuyển hướng 2 (`2`) | (8, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 24 |
| 7-8 | Di chuyển hướng 1 (`1`) | (9, 11) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 23 |
| 9-10 | Di chuyển hướng 1 (`1`) | (9, 10) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 22 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 21 |
| 13-14 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(11, 7)) | 61 |
| 15-16 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 60 |
| 17 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 58 |
| 18 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 56 |
| 19-20 | Di chuyển hướng 0 (`0`) | (11, 4) | (11, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 3)) | 55 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 54 |
| 23 | Di chuyển hướng 4 (`4`) | (10, 3) | (9, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=1, tọa độ=(9, 4)) | 52 |
| 24-25 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 51 |
| 26 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 49 |
| 27 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 47 |
| 28-29 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=0, tọa độ=(6, 6)) | 46 |
| 30-31 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 45 |
| 32-33 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 44 |
| 34 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 42 |
| 35-65 | Chờ 31 bước (`-31`) | (6, 3) | (6, 3) | Dự kiến đứng yên tại (6, 3); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(6, 3)) | 42 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (10, 8) (ô=146)
- Nhiên liệu đầu ngày: 62
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 8)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 2, 2, 2, 2, 2, 2, -48]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 62 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 62 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 62 |
| 5-6 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 8)) | 62 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 62 |
| 9-10 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 62 |
| 11 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 62 |
| 12-13 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 62 |
| 14-15 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=3, tọa độ=(11, 8)) | 62 |
| 16-17 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 62 |
| 18-65 | Chờ 48 bước (`-48`) | (12, 8) | (12, 8) | Dự kiến đứng yên tại (12, 8); hướng tới tọa độ (12, 8) | 62 |

