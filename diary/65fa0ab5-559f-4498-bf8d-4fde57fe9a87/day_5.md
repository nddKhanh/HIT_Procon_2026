# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 58
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 23 | #2 | #5 | (2, 6) | 11 | 55 |
| 32 | #3 | #4 | (7, 21) | 3 | 55 |
| 35 | #3 | #4 | (6, 21) | 54 | 55 |
| 36 | #1 | #5 | (8, 6) | 19 | 55 |
| 39 | #3 | #4 | (4, 21) | 51 | 55 |
| 41 | #3 | #4 | (3, 21) | 54 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (22, 21) (ô=526)
- Nhiên liệu đầu ngày: 43
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(9, 16))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(9, 16))
- Mảng hành động đã gửi server: `[2, 3, 0, 5, 5, 5, 1, 0, 0, 1, 0, 0, 0, 0, 0, 4, 4, 5, 4, 4, 4, 4, 5, 0, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (22, 21) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 42 |
| 2-3 | Di chuyển hướng 3 (`3`) | (23, 21) | (23, 22) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(23, 22)) | 41 |
| 4-5 | Di chuyển hướng 0 (`0`) | (23, 22) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 40 |
| 6-7 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 39 |
| 8-9 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 38 |
| 10-11 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 21)) | 36 |
| 12-13 | Di chuyển hướng 1 (`1`) | (20, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 35 |
| 14-15 | Di chuyển hướng 0 (`0`) | (20, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 34 |
| 16-18 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 32 |
| 19-20 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 31 |
| 21-22 | Di chuyển hướng 0 (`0`) | (20, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 30 |
| 23-25 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 28 |
| 26-27 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 27 |
| 28-29 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 26 |
| 30-31 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 12)) | 25 |
| 32-33 | Di chuyển hướng 4 (`4`) | (17, 12) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 24 |
| 34-36 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 22 |
| 37-38 | Di chuyển hướng 5 (`5`) | (16, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 21 |
| 39-40 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 20 |
| 41-42 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 19 |
| 43 | Di chuyển hướng 4 (`4`) | (14, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 17 |
| 44-45 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 16 |
| 46-47 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 15 |
| 48-49 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 14 |
| 50-52 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 12 |
| 53-55 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(10, 17)) | 10 |
| 56-57 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 16)) | 9 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 14) (ô=351)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(1, 2))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(1, 2))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 4, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 5, 5, 5, 5, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (15, 14) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 41 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 15) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 40 |
| 4-6 | Di chuyển hướng 5 (`5`) | (14, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 38 |
| 7-8 | Di chuyển hướng 5 (`5`) | (13, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 37 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 36 |
| 11-12 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 35 |
| 13 | Di chuyển hướng 4 (`4`) | (10, 15) | (9, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 16)) | 33 |
| 14-15 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 32 |
| 16-17 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 31 |
| 18-19 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 30 |
| 20-22 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 28 |
| 23-25 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 26 |
| 26-28 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(7, 10)) | 24 |
| 29-30 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 23 |
| 31 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 21 |
| 32-33 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 20 |
| 34-35 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 6)) | 55 |
| 36-37 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 54 |
| 38-40 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 52 |
| 41-42 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 3)) | 51 |
| 43-44 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 50 |
| 45-47 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 48 |
| 48-49 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 47 |
| 50 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 45 |
| 51-53 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 43 |
| 54-55 | Di chuyển hướng 5 (`5`) | (3, 3) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 42 |
| 56-57 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 2)) | 41 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (11, 8) (ô=203)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 20)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 0, 5, 5, 5, 5, 5, 0, 3, 4, 4, 3, 3, 3, 4, 3, 3, 5, 5, 4, 4, 3, 3, 4, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 30 |
| 1-3 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 28 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 27 |
| 6 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 25 |
| 7-8 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 24 |
| 9-11 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 22 |
| 12 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 20 |
| 13 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 18 |
| 14-16 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 16 |
| 17 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 14 |
| 18-20 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 5)) | 12 |
| 21-22 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 55 |
| 23-25 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 53 |
| 26-27 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 52 |
| 28-30 | Di chuyển hướng 3 (`3`) | (1, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 50 |
| 31-32 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 10)) | 49 |
| 33-34 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 48 |
| 35-37 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 46 |
| 38-39 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 45 |
| 40 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 14)) | 43 |
| 41-42 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 42 |
| 43 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 40 |
| 44-46 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 38 |
| 47 | Di chuyển hướng 4 (`4`) | (1, 15) | (0, 16) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(0, 16)) | 36 |
| 48-49 | Di chuyển hướng 3 (`3`) | (0, 16) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 35 |
| 50 | Di chuyển hướng 3 (`3`) | (1, 17) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 33 |
| 51-52 | Di chuyển hướng 4 (`4`) | (1, 18) | (1, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 19)) | 32 |
| 53-54 | Di chuyển hướng 2 (`2`) | (1, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 31 |
| 55-56 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 30 |
| 57 | Chờ 1 bước (`-1`) | (2, 20) | (2, 20) | Dự kiến đứng yên tại (2, 20); hướng tới tọa độ (2, 20) | 30 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 20) (ô=493)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 22)
- Mảng hành động đã gửi server: `[0, 0, 4, 4, 3, 4, 5, 4, 0, 1, 5, 5, 5, -6, 5, 5, 5, 5, 0, 0, 5, 4, 3, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 16 |
| 2-3 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 15 |
| 4-5 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 14 |
| 6-7 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 13 |
| 8-9 | Di chuyển hướng 3 (`3`) | (11, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 12 |
| 10-11 | Di chuyển hướng 4 (`4`) | (12, 21) | (11, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 22)) | 11 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 22) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 10 |
| 14-15 | Di chuyển hướng 4 (`4`) | (10, 22) | (10, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 23)) | 9 |
| 16-17 | Di chuyển hướng 0 (`0`) | (10, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 8 |
| 18-19 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 21)) | 7 |
| 20-21 | Di chuyển hướng 5 (`5`) | (10, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 6 |
| 22-23 | Di chuyển hướng 5 (`5`) | (9, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 5 |
| 24-26 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 3 |
| 27-32 | Chờ 6 bước (`-6`) | (7, 21) | (7, 21) | Dự kiến đứng yên tại (7, 21); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 55 |
| 33-34 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 55 |
| 35-37 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 53 |
| 38 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 55 |
| 39-40 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 55 |
| 41-43 | Di chuyển hướng 0 (`0`) | (3, 21) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 53 |
| 44-45 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 52 |
| 46-47 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 19)) | 51 |
| 48-49 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 50 |
| 50-51 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 21)) | 49 |
| 52-53 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến đến điểm hẹn tọa độ (1, 22) | 48 |
| 54-56 | Di chuyển hướng 2 (`2`) | (1, 22) | (2, 22) | Dự kiến đến điểm hẹn tọa độ (2, 22) | 46 |
| 57 | Chờ 1 bước (`-1`) | (2, 22) | (2, 22) | Dự kiến đứng yên tại (2, 22); hướng tới tọa độ (2, 22) | 46 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (20, 17) (ô=428)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 21)
- Mảng hành động đã gửi server: `[4, 5, 4, 5, 4, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 55 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 55 |
| 4 | Di chuyển hướng 4 (`4`) | (18, 18) | (18, 19) | Dự kiến đến điểm hẹn tọa độ (18, 19) | 55 |
| 5-6 | Di chuyển hướng 5 (`5`) | (18, 19) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 55 |
| 7 | Di chuyển hướng 4 (`4`) | (17, 19) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 55 |
| 8-10 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 55 |
| 11-12 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 55 |
| 13-15 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 55 |
| 16-17 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 55 |
| 18-20 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 55 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 55 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 21)) | 55 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 55 |
| 27-28 | Di chuyển hướng 5 (`5`) | (9, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 55 |
| 29-31 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 55 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 55 |
| 34-36 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 55 |
| 37 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 55 |
| 38-39 | Di chuyển hướng 5 (`5`) | (4, 21) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 55 |
| 40-57 | Chờ 18 bước (`-18`) | (3, 21) | (3, 21) | Dự kiến đứng yên tại (3, 21); hướng tới tọa độ (3, 21) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (9, 15) (ô=369)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(8, 6))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(8, 6))
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 0, 0, 1, 0, 0, 5, 0, 5, 2, 2, 2, 2, 2, 2, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 55 |
| 2 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 55 |
| 3-5 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 55 |
| 6 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 55 |
| 7-9 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 55 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 11) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 55 |
| 12 | Di chuyển hướng 1 (`1`) | (5, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 55 |
| 13 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 55 |
| 14-16 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 55 |
| 17-18 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 55 |
| 19-21 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 55 |
| 22 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 55 |
| 23-25 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 55 |
| 26 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 55 |
| 27-29 | Di chuyển hướng 2 (`2`) | (4, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 55 |
| 30 | Di chuyển hướng 2 (`2`) | (5, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 55 |
| 31 | Di chuyển hướng 2 (`2`) | (6, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 55 |
| 32-34 | Di chuyển hướng 2 (`2`) | (7, 6) | (8, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 6)) | 55 |
| 35-57 | Chờ 23 bước (`-23`) | (8, 6) | (8, 6) | Dự kiến đứng yên tại (8, 6); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 6)) | 55 |

