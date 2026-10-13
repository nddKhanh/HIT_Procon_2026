# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 49
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 22 | #1 | #7 | (9, 17) | 0 | 54 |
| 25 | #4 | #7 | (7, 16) | 0 | 54 |
| 29 | #4 | #7 | (7, 16) | 52 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 5) (ô=141)
- Nhiên liệu đầu ngày: 52
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(3, 12))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(3, 12))
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 4, 5, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 0, 0, 0, 0, 0, 1, 0, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 51 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 50 |
| 4-5 | Di chuyển hướng 4 (`4`) | (9, 6) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 49 |
| 6-7 | Di chuyển hướng 4 (`4`) | (9, 7) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 48 |
| 8-9 | Di chuyển hướng 4 (`4`) | (8, 8) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 47 |
| 10-11 | Di chuyển hướng 5 (`5`) | (8, 9) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 46 |
| 12-13 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 45 |
| 14 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 43 |
| 15-17 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 41 |
| 18 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 39 |
| 19-20 | Di chuyển hướng 4 (`4`) | (5, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 38 |
| 21-22 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 37 |
| 23-24 | Di chuyển hướng 4 (`4`) | (4, 15) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 36 |
| 25-26 | Di chuyển hướng 4 (`4`) | (3, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 35 |
| 27-28 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 34 |
| 29-30 | Di chuyển hướng 3 (`3`) | (3, 18) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 33 |
| 31-32 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 32 |
| 33-34 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 31 |
| 35-36 | Di chuyển hướng 0 (`0`) | (4, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 30 |
| 37-38 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 29 |
| 39-40 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 28 |
| 41-42 | Di chuyển hướng 0 (`0`) | (2, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 27 |
| 43-44 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 26 |
| 45 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 24 |
| 46-47 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 23 |
| 48 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 14) (ô=378)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 12)
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 5, 5, 5, 5, 5, 2, 3, 2, -4, 3, 3, 3, 2, 1, 1, 0, 1, 2, 1, 1, 2, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 15 |
| 1-2 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 14 |
| 3 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 12 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 11 |
| 6-7 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 10 |
| 8 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 8 |
| 9 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 6 |
| 10 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 4 |
| 11-12 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 3 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 2 |
| 15-16 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 1 |
| 17-18 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 0 |
| 19-22 | Chờ 4 bước (`-4`) | (9, 17) | (9, 17) | Dự kiến đứng yên tại (9, 17); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 54 |
| 23-24 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 53 |
| 25-26 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 52 |
| 27-28 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 51 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 50 |
| 31-32 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 49 |
| 33-34 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 48 |
| 35-36 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 47 |
| 37 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 45 |
| 38-39 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 44 |
| 40 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 42 |
| 41-42 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 41 |
| 43 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 39 |
| 44-45 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 38 |
| 46 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 36 |
| 47-48 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 35 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 5) (ô=139)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 8)
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 5, 0, 0, 0, 5, 5, 0, 2, 2, 2, 2, 2, 3, 3, 2, 3, 2, 2, 3, 3, 3, 3, 3, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 53 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 51 |
| 3 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 49 |
| 4-5 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 48 |
| 6-7 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 47 |
| 8 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 45 |
| 9 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 43 |
| 10-11 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 42 |
| 12-13 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 41 |
| 14-15 | Di chuyển hướng 5 (`5`) | (2, 1) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 40 |
| 16-17 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 39 |
| 18-19 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 38 |
| 20 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 36 |
| 21 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 34 |
| 22-23 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 33 |
| 24-25 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 32 |
| 26 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 30 |
| 27-28 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 29 |
| 29-30 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 28 |
| 31-32 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 27 |
| 33 | Di chuyển hướng 2 (`2`) | (8, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 25 |
| 34-35 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 24 |
| 36-37 | Di chuyển hướng 3 (`3`) | (10, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 23 |
| 38 | Di chuyển hướng 3 (`3`) | (10, 4) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 21 |
| 39-40 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 20 |
| 41-42 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 19 |
| 43-44 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 18 |
| 45-46 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 17 |
| 47 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 15 |
| 48 | Chờ 1 bước (`-1`) | (14, 8) | (14, 8) | Dự kiến đứng yên tại (14, 8); hướng tới tọa độ (14, 8) | 15 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (20, 5) (ô=150)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[2, 2, 2, 5, 5, 0, 0, 0, 0, 0, 5, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 21 |
| 2 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 19 |
| 3-4 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 18 |
| 5-6 | Di chuyển hướng 5 (`5`) | (23, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 17 |
| 7-8 | Di chuyển hướng 5 (`5`) | (22, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 16 |
| 9 | Di chuyển hướng 0 (`0`) | (21, 5) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 14 |
| 10 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 12 |
| 11-12 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 11 |
| 13-14 | Di chuyển hướng 0 (`0`) | (19, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 10 |
| 15-17 | Di chuyển hướng 0 (`0`) | (19, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 8 |
| 18-19 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 7 |
| 20-48 | Chờ 29 bước (`-29`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 7 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (17, 18) (ô=485)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 16)
- Mảng hành động đã gửi server: `[5, 5, 0, 5, 0, 5, 0, 0, 0, 5, 4, 5, 4, 4, -1, 5, 2, 2, 3, 3, 3, 3, 2, 1, 1, 0, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (17, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 16 |
| 1-2 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 15 |
| 3-4 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 14 |
| 5-6 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 13 |
| 7-8 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 12 |
| 9 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 10 |
| 10-11 | Di chuyển hướng 0 (`0`) | (12, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 9 |
| 12-13 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 8 |
| 14 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 6 |
| 15-16 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 5 |
| 17 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 3 |
| 18-19 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 2 |
| 20-21 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 1 |
| 22-23 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 0 |
| 24 | Chờ 1 bước (`-1`) | (7, 16) | (7, 16) | Dự kiến đứng yên tại (7, 16); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 54 |
| 25-26 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 53 |
| 27-28 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 54 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 53 |
| 31 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 51 |
| 32-33 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 50 |
| 34-35 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 49 |
| 36-37 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 48 |
| 38-39 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 47 |
| 40-41 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 46 |
| 42-43 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 45 |
| 44-45 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 44 |
| 46 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 42 |
| 47-48 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 41 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 8) (ô=208)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(5, 4))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(5, 4))
- Mảng hành động đã gửi server: `[4, 1, 1, 0, 1, 0, 0, 1, 1, 0, 2, 2, 2, 2, 2, 3, 3, 2, 3, 3, 3, 5, 5, 0, 5, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 9)) | 36 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 35 |
| 4-5 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 34 |
| 6-8 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 32 |
| 9-10 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 31 |
| 11-12 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 30 |
| 13-14 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 29 |
| 15-16 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 28 |
| 17-18 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 27 |
| 19-20 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 26 |
| 21-22 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 25 |
| 23 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 23 |
| 24 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 21 |
| 25-26 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 20 |
| 27-28 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 19 |
| 29 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 17 |
| 30-31 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 16 |
| 32-33 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 15 |
| 34-35 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 14 |
| 36 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 12 |
| 37-38 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 11 |
| 39-40 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 10 |
| 41 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 8 |
| 42 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 6 |
| 43-44 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 5 |
| 45-48 | Chờ 4 bước (`-4`) | (5, 4) | (5, 4) | Dự kiến đứng yên tại (5, 4); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 5 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (21, 16) (ô=437)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(25, 14))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(25, 14))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 2, 3, 3, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (21, 16) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 11 |
| 2-3 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 10 |
| 4-5 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 9 |
| 6-7 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 8 |
| 8-9 | Di chuyển hướng 2 (`2`) | (23, 12) | (24, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 7 |
| 10-11 | Di chuyển hướng 3 (`3`) | (24, 12) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 6 |
| 12 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(25, 14)) | 4 |
| 13-48 | Chờ 36 bước (`-36`) | (25, 14) | (25, 14) | Dự kiến đứng yên tại (25, 14); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(25, 14)) | 4 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (9, 5) (ô=139)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(7, 16))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(7, 16))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 0, 5, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 54 |
| 2-4 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 54 |
| 5-6 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 54 |
| 7-8 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 54 |
| 9-10 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 54 |
| 11 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 54 |
| 12-14 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 54 |
| 15 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 54 |
| 16 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 54 |
| 17-18 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 54 |
| 19-20 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 21 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 54 |
| 22-23 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 24 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 54 |
| 25-48 | Chờ 24 bước (`-24`) | (7, 16) | (7, 16) | Dự kiến đứng yên tại (7, 16); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 54 |

