# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 56
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #2 | #4 | (15, 21) | 56 | 57 |
| 5 | #2 | #4 | (13, 20) | 54 | 57 |
| 6 | #2 | #4 | (12, 20) | 55 | 57 |
| 8 | #2 | #4 | (12, 19) | 56 | 57 |
| 10 | #2 | #4 | (11, 18) | 56 | 57 |
| 32 | #1 | #4 | (7, 5) | 2 | 57 |
| 35 | #1 | #4 | (6, 5) | 56 | 57 |
| 37 | #1 | #4 | (5, 5) | 56 | 57 |
| 39 | #1 | #4 | (4, 4) | 56 | 57 |
| 41 | #0 | #5 | (10, 21) | 0 | 57 |
| 42 | #1 | #4 | (2, 4) | 54 | 57 |
| 46 | #0 | #5 | (8, 19) | 52 | 57 |
| 49 | #0 | #5 | (6, 18) | 54 | 57 |
| 51 | #0 | #5 | (5, 18) | 56 | 57 |
| 53 | #0 | #5 | (4, 18) | 56 | 57 |
| 54 | #1 | #4 | (0, 9) | 49 | 57 |
| 54 | #2 | #5 | (3, 18) | 27 | 57 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (23, 16) (ô=439)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 18)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 5, 5, 5, 0, 5, 5, 5, 5, 5, 0, 4, 5, 4, -10, 5, 0, 0, 0, 5, 5, 5, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (23, 16) | (23, 17) | Dự kiến đến điểm hẹn tọa độ (23, 17) | 20 |
| 1-2 | Di chuyển hướng 4 (`4`) | (23, 17) | (22, 18) | Dự kiến đến điểm hẹn tọa độ (22, 18) | 19 |
| 3 | Di chuyển hướng 4 (`4`) | (22, 18) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 17 |
| 4-5 | Di chuyển hướng 4 (`4`) | (22, 19) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 16 |
| 6-7 | Di chuyển hướng 4 (`4`) | (21, 20) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 15 |
| 8-9 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 14 |
| 10-11 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 13 |
| 12-13 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 21)) | 12 |
| 14-15 | Di chuyển hướng 0 (`0`) | (18, 21) | (17, 20) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 20)) | 11 |
| 16-17 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 10 |
| 18 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 8 |
| 19-20 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 20)) | 7 |
| 21-22 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 6 |
| 23 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 4 |
| 24-25 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 19)) | 3 |
| 26-27 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 2 |
| 28-29 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 1 |
| 30-31 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 21)) | 0 |
| 32-41 | Chờ 10 bước (`-10`) | (10, 21) | (10, 21) | Dự kiến đứng yên tại (10, 21); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 21)) | 57 |
| 42-43 | Di chuyển hướng 5 (`5`) | (10, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 56 |
| 44 | Di chuyển hướng 0 (`0`) | (9, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 54 |
| 45 | Di chuyển hướng 0 (`0`) | (8, 20) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 57 |
| 46-47 | Di chuyển hướng 0 (`0`) | (8, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 56 |
| 48 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 57 |
| 49-50 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 57 |
| 51-52 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 18)) | 57 |
| 53-54 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 56 |
| 55 | Chờ 1 bước (`-1`) | (5, 18) | (5, 18) | Dự kiến đứng yên tại (5, 18); hướng tới tọa độ (5, 18) | 56 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (2, 1) (ô=28)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(0, 10))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(0, 10))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 1, 4, 4, 4, 5, 4, 3, -8, 5, 5, 0, 5, 5, 5, 4, 3, 4, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 18 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 17 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 15 |
| 5 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 13 |
| 6-7 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 12 |
| 8-9 | Di chuyển hướng 2 (`2`) | (7, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 11 |
| 10 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 9 |
| 11-12 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 0)) | 8 |
| 13-14 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 7 |
| 15-16 | Di chuyển hướng 4 (`4`) | (9, 1) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 6 |
| 17-18 | Di chuyển hướng 4 (`4`) | (8, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 5 |
| 19-20 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(7, 3)) | 4 |
| 21-22 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 3 |
| 23-24 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 5)) | 2 |
| 25-32 | Chờ 8 bước (`-8`) | (7, 5) | (7, 5) | Dự kiến đứng yên tại (7, 5); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 5)) | 57 |
| 33-34 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 57 |
| 35-36 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 57 |
| 37-38 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 57 |
| 39-40 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 56 |
| 41 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 57 |
| 42-44 | Di chuyển hướng 5 (`5`) | (2, 4) | (1, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 4)) | 55 |
| 45-46 | Di chuyển hướng 4 (`4`) | (1, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 54 |
| 47-48 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 53 |
| 49 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 51 |
| 50-51 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 50 |
| 52-53 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đến điểm hẹn tọa độ (0, 9) | 57 |
| 54-55 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(0, 10)) | 56 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (16, 21) (ô=562)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(4, 18))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(4, 18))
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 0, 0, 5, 0, 5, 0, 0, 0, 0, 5, 5, 5, 4, 4, 5, 4, 4, 4, 4, 3, 4, 2, 2, 1, 1, 1, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 57 |
| 2 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 20)) | 55 |
| 3-4 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 57 |
| 5 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 57 |
| 6-7 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 19)) | 57 |
| 8-9 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 57 |
| 10-11 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 56 |
| 12-13 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 55 |
| 14 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 53 |
| 15-16 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 52 |
| 17-18 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 15)) | 51 |
| 19-20 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 50 |
| 21-22 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 49 |
| 23 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 47 |
| 24 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 45 |
| 25-26 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 13)) | 44 |
| 27-28 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 43 |
| 29-30 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 42 |
| 31-32 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 41 |
| 33 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 39 |
| 34-36 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 37 |
| 37-38 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 36 |
| 39 | Di chuyển hướng 4 (`4`) | (0, 18) | (0, 19) | Dự kiến đến điểm hẹn tọa độ (0, 19) | 34 |
| 40-41 | Di chuyển hướng 3 (`3`) | (0, 19) | (0, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(0, 20)) | 33 |
| 42-43 | Di chuyển hướng 4 (`4`) | (0, 20) | (0, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(0, 21)) | 32 |
| 44-45 | Di chuyển hướng 2 (`2`) | (0, 21) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 31 |
| 46-47 | Di chuyển hướng 2 (`2`) | (1, 21) | (2, 21) | Dự kiến đến điểm hẹn tọa độ (2, 21) | 30 |
| 48-49 | Di chuyển hướng 1 (`1`) | (2, 21) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 29 |
| 50-51 | Di chuyển hướng 1 (`1`) | (2, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 28 |
| 52-53 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 57 |
| 54 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 18)) | 55 |
| 55 | Chờ 1 bước (`-1`) | (4, 18) | (4, 18) | Dự kiến đứng yên tại (4, 18); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 18)) | 55 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 9) (ô=252)
- Nhiên liệu đầu ngày: 44
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=0, tọa độ=(19, 1))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=0, tọa độ=(19, 1))
- Mảng hành động đã gửi server: `[5, 5, 5, 2, 1, 1, 1, 0, 5, 0, 0, 3, 3, 3, 3, 3, 3, 2, 3, 3, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 42 |
| 3 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 40 |
| 4-5 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 9)) | 39 |
| 6-7 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 38 |
| 8-9 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 37 |
| 10-11 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 36 |
| 12-13 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(17, 6)) | 35 |
| 14-15 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 34 |
| 16-17 | Di chuyển hướng 5 (`5`) | (17, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 33 |
| 18-19 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 32 |
| 20 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 3)) | 30 |
| 21-22 | Di chuyển hướng 3 (`3`) | (15, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 29 |
| 23 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 27 |
| 24-25 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 26 |
| 26-27 | Di chuyển hướng 3 (`3`) | (16, 6) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 25 |
| 28-29 | Di chuyển hướng 3 (`3`) | (17, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 24 |
| 30 | Di chuyển hướng 3 (`3`) | (17, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 22 |
| 31-33 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=1, tọa độ=(19, 9)) | 20 |
| 34-35 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 19 |
| 36-38 | Di chuyển hướng 3 (`3`) | (19, 10) | (20, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 11)) | 17 |
| 39-40 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 16 |
| 41-42 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 15 |
| 43-44 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 14 |
| 45-46 | Di chuyển hướng 0 (`0`) | (19, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 13 |
| 47 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 11 |
| 48 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 9 |
| 49-50 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 8 |
| 51 | Di chuyển hướng 0 (`0`) | (19, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 6 |
| 52-53 | Di chuyển hướng 1 (`1`) | (19, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 5 |
| 54 | Di chuyển hướng 0 (`0`) | (19, 2) | (19, 1) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=0, tọa độ=(19, 1)) | 3 |
| 55 | Chờ 1 bước (`-1`) | (19, 1) | (19, 1) | Dự kiến đứng yên tại (19, 1); mục tiêu Spot #24 (thương hiệu=0, tọa độ=(19, 1)) | 3 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (16, 21) (ô=562)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 9)
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 5, 5, 0, 5, 5, 4, 4, 4, 4, 4, -5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 57 |
| 2 | Di chuyển hướng 5 (`5`) | (15, 21) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 57 |
| 3-4 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 57 |
| 5 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 57 |
| 6-7 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 19)) | 57 |
| 8-9 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 57 |
| 10-11 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 57 |
| 12-14 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 57 |
| 15-16 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 57 |
| 17-18 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 57 |
| 19 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 57 |
| 20 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 57 |
| 21 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 57 |
| 22-23 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 57 |
| 24-25 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 57 |
| 26-27 | Di chuyển hướng 0 (`0`) | (7, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 57 |
| 28-29 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 57 |
| 30 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 57 |
| 31 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 5)) | 57 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 57 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 57 |
| 36-37 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 57 |
| 38-39 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 57 |
| 40 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 57 |
| 41-43 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 57 |
| 44-45 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 57 |
| 46 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 57 |
| 47-48 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 57 |
| 49-50 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đến điểm hẹn tọa độ (0, 9) | 57 |
| 51-55 | Chờ 5 bước (`-5`) | (0, 9) | (0, 9) | Dự kiến đứng yên tại (0, 9); hướng tới tọa độ (0, 9) | 57 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (19, 1) (ô=45)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 18)
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 4, 3, 3, 4, 4, 4, 4, 3, 3, 3, 2, 5, 0, 0, 0, 5, 5, 5, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 57 |
| 2-3 | Di chuyển hướng 4 (`4`) | (18, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 57 |
| 4 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 57 |
| 5-6 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 57 |
| 7-8 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 57 |
| 9-10 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 57 |
| 11-12 | Di chuyển hướng 4 (`4`) | (16, 7) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 57 |
| 13-14 | Di chuyển hướng 4 (`4`) | (15, 8) | (15, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 9)) | 57 |
| 15-16 | Di chuyển hướng 4 (`4`) | (15, 9) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 57 |
| 17 | Di chuyển hướng 4 (`4`) | (14, 10) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 57 |
| 18-19 | Di chuyển hướng 5 (`5`) | (14, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 57 |
| 20 | Di chuyển hướng 5 (`5`) | (13, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 57 |
| 21-22 | Di chuyển hướng 5 (`5`) | (12, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 57 |
| 23-24 | Di chuyển hướng 5 (`5`) | (11, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 57 |
| 25-26 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 57 |
| 27-28 | Di chuyển hướng 4 (`4`) | (9, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 57 |
| 29 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 57 |
| 30 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 57 |
| 31 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 57 |
| 32 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 57 |
| 33-34 | Di chuyển hướng 4 (`4`) | (8, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 57 |
| 35 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 57 |
| 36 | Di chuyển hướng 3 (`3`) | (7, 18) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 57 |
| 37-38 | Di chuyển hướng 3 (`3`) | (8, 19) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 57 |
| 39 | Di chuyển hướng 3 (`3`) | (8, 20) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 57 |
| 40 | Di chuyển hướng 2 (`2`) | (9, 21) | (10, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 21)) | 57 |
| 41-42 | Di chuyển hướng 5 (`5`) | (10, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 57 |
| 43 | Di chuyển hướng 0 (`0`) | (9, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 57 |
| 44 | Di chuyển hướng 0 (`0`) | (8, 20) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 57 |
| 45-46 | Di chuyển hướng 0 (`0`) | (8, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 57 |
| 47 | Di chuyển hướng 5 (`5`) | (7, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 57 |
| 48-49 | Di chuyển hướng 5 (`5`) | (6, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 57 |
| 50-51 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 18)) | 57 |
| 52-53 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 57 |
| 54-55 | Chờ 2 bước (`-2`) | (3, 18) | (3, 18) | Dự kiến đứng yên tại (3, 18); hướng tới tọa độ (3, 18) | 57 |

