# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 54
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 4 | #1 | #4 | (8, 19) | 50 | 55 |
| 14 | #3 | #4 | (11, 17) | 18 | 55 |
| 16 | #2 | #5 | (2, 5) | 39 | 55 |
| 46 | #1 | #5 | (2, 5) | 21 | 55 |
| 49 | #3 | #4 | (11, 17) | 33 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 7) (ô=176)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 21)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 2, 3, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 4, 2, 2, 2, 3, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 54 |
| 2 | Di chuyển hướng 2 (`2`) | (9, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 52 |
| 3-4 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 51 |
| 5-7 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 49 |
| 8 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 47 |
| 9-11 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 45 |
| 12-13 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 44 |
| 14 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 42 |
| 15-16 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 41 |
| 17-18 | Di chuyển hướng 3 (`3`) | (16, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 40 |
| 19-20 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 39 |
| 21-23 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 12)) | 37 |
| 24-25 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 36 |
| 26-27 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 35 |
| 28-29 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 34 |
| 30-31 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 33 |
| 32-34 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 31 |
| 35-36 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 30 |
| 37-38 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 29 |
| 39-41 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 27 |
| 42-43 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 21)) | 26 |
| 44-45 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 25 |
| 46 | Di chuyển hướng 2 (`2`) | (21, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 23 |
| 47-48 | Di chuyển hướng 2 (`2`) | (22, 21) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 22 |
| 49-50 | Di chuyển hướng 3 (`3`) | (23, 21) | (23, 22) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(23, 22)) | 21 |
| 51-52 | Di chuyển hướng 0 (`0`) | (23, 22) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 20 |
| 53 | Chờ 1 bước (`-1`) | (23, 21) | (23, 21) | Dự kiến đứng yên tại (23, 21); hướng tới tọa độ (23, 21) | 20 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 21) (ô=511)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(1, 2))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(1, 2))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 5, 5, 5, 5, 5, 5, 0, 0, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 21) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 52 |
| 2-3 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 55 |
| 4-6 | Di chuyển hướng 1 (`1`) | (8, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 53 |
| 7-9 | Di chuyển hướng 1 (`1`) | (8, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 51 |
| 10 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 16)) | 49 |
| 11-12 | Di chuyển hướng 1 (`1`) | (9, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 48 |
| 13 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 46 |
| 14 | Di chuyển hướng 0 (`0`) | (9, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 44 |
| 15-17 | Di chuyển hướng 0 (`0`) | (9, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 42 |
| 18-20 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 40 |
| 21-23 | Di chuyển hướng 0 (`0`) | (8, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(7, 10)) | 38 |
| 24-25 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 37 |
| 26-27 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 36 |
| 28-29 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 35 |
| 30-31 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 6)) | 34 |
| 32-33 | Di chuyển hướng 5 (`5`) | (8, 6) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 33 |
| 34-36 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 31 |
| 37 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 29 |
| 38 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 27 |
| 39-41 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 25 |
| 42 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 23 |
| 43-45 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 5)) | 55 |
| 46-47 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 54 |
| 48-50 | Di chuyển hướng 1 (`1`) | (1, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 52 |
| 51-52 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 2)) | 51 |
| 53 | Chờ 1 bước (`-1`) | (1, 2) | (1, 2) | Dự kiến đứng yên tại (1, 2); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 2)) | 51 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 3) (ô=80)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 22)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 22)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 5, 4, 3, 4, 3, 4, 3, 3, 4, 3, 3, 5, 5, 4, 4, 3, 3, 4, 4, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 49 |
| 2-4 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 47 |
| 5-6 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 46 |
| 7 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 44 |
| 8-9 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 43 |
| 10-12 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 41 |
| 13-15 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 5)) | 55 |
| 16-17 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 54 |
| 18-20 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 52 |
| 21-22 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 51 |
| 23-25 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 49 |
| 26-27 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 10)) | 48 |
| 28-29 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 47 |
| 30-32 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 45 |
| 33-34 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 44 |
| 35 | Di chuyển hướng 3 (`3`) | (3, 13) | (3, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 14)) | 42 |
| 36-37 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 41 |
| 38 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 39 |
| 39-41 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 37 |
| 42 | Di chuyển hướng 4 (`4`) | (1, 15) | (0, 16) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(0, 16)) | 35 |
| 43-44 | Di chuyển hướng 3 (`3`) | (0, 16) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 34 |
| 45 | Di chuyển hướng 3 (`3`) | (1, 17) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 32 |
| 46-47 | Di chuyển hướng 4 (`4`) | (1, 18) | (1, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 19)) | 31 |
| 48-49 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 30 |
| 50-51 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 21)) | 29 |
| 52-53 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến đến điểm hẹn tọa độ (1, 22) | 28 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (16, 21) (ô=520)
- Nhiên liệu đầu ngày: 27
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(9, 16))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(9, 16))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 0, 5, 0, 5, 4, 4, 2, 3, 4, 4, 3, 1, 2, 1, 1, 1, 1, 5, 5, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 25 |
| 3-4 | Di chuyển hướng 5 (`5`) | (15, 21) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 24 |
| 5-6 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 23 |
| 7-8 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 22 |
| 9-10 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 21 |
| 11-12 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 20 |
| 13 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 55 |
| 14-16 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(10, 17)) | 53 |
| 17-18 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 52 |
| 19-21 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 19)) | 50 |
| 22-23 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 49 |
| 24 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 47 |
| 25-26 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 21)) | 46 |
| 27-28 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 45 |
| 29-30 | Di chuyển hướng 3 (`3`) | (9, 22) | (10, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 23)) | 44 |
| 31-32 | Di chuyển hướng 1 (`1`) | (10, 23) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 43 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 22) | (11, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 22)) | 42 |
| 35-36 | Di chuyển hướng 1 (`1`) | (11, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 41 |
| 37-38 | Di chuyển hướng 1 (`1`) | (12, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 40 |
| 39-41 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 38 |
| 42-43 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 37 |
| 44-45 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 36 |
| 46-47 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 35 |
| 48 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 55 |
| 49-51 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 53 |
| 52 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 16)) | 51 |
| 53 | Chờ 1 bước (`-1`) | (9, 16) | (9, 16) | Dự kiến đứng yên tại (9, 16); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 16)) | 51 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (7, 20) (ô=487)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 17)
- Mảng hành động đã gửi server: `[1, 2, 2, 2, 1, 0, -42]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 55 |
| 2-4 | Di chuyển hướng 2 (`2`) | (8, 19) | (9, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 19)) | 55 |
| 5-6 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 55 |
| 7 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 55 |
| 8-10 | Di chuyển hướng 1 (`1`) | (11, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 55 |
| 11 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 55 |
| 12-53 | Chờ 42 bước (`-42`) | (11, 17) | (11, 17) | Dự kiến đứng yên tại (11, 17); hướng tới tọa độ (11, 17) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (8, 7) (ô=176)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(2, 5))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(2, 5))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 0, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 55 |
| 2-4 | Di chuyển hướng 5 (`5`) | (7, 6) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 55 |
| 5 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 55 |
| 6 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 55 |
| 7-9 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 55 |
| 10 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 55 |
| 11-13 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 5)) | 55 |
| 14-53 | Chờ 40 bước (`-40`) | (2, 5) | (2, 5) | Dự kiến đứng yên tại (2, 5); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 5)) | 55 |

