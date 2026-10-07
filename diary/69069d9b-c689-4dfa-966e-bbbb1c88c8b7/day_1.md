# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 49
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 11 | #2 | #6 | (7, 8) | 18 | 54 |
| 13 | #2 | #6 | (7, 9) | 53 | 54 |
| 16 | #2 | #6 | (6, 11) | 51 | 54 |
| 21 | #1 | #7 | (15, 18) | 7 | 54 |
| 25 | #4 | #6 | (2, 13) | 3 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 5) (ô=139)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 3, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2, 5, 5, 5, 0, 1, 0, 0, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 48 |
| 2-3 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 47 |
| 4-5 | Di chuyển hướng 3 (`3`) | (11, 5) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 46 |
| 6-7 | Di chuyển hướng 3 (`3`) | (11, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 45 |
| 8-9 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 44 |
| 10-11 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 43 |
| 12 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 41 |
| 13-14 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 40 |
| 15 | Di chuyển hướng 2 (`2`) | (15, 7) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 38 |
| 16-17 | Di chuyển hướng 2 (`2`) | (16, 7) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 37 |
| 18-19 | Di chuyển hướng 2 (`2`) | (17, 7) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 36 |
| 20-21 | Di chuyển hướng 2 (`2`) | (18, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 35 |
| 22-23 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 34 |
| 24-25 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 33 |
| 26-27 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 32 |
| 28 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 30 |
| 29-30 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 29 |
| 31-32 | Di chuyển hướng 5 (`5`) | (23, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 28 |
| 33-34 | Di chuyển hướng 5 (`5`) | (22, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 27 |
| 35 | Di chuyển hướng 5 (`5`) | (21, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 5)) | 25 |
| 36-37 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 24 |
| 38 | Di chuyển hướng 1 (`1`) | (19, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 22 |
| 39-40 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 21 |
| 41-42 | Di chuyển hướng 0 (`0`) | (19, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 20 |
| 43-45 | Di chuyển hướng 0 (`0`) | (19, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 18 |
| 46-47 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 17 |
| 48 | Chờ 1 bước (`-1`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 17 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (22, 14) (ô=386)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(24, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(24, 14)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 4, 4, 5, 4, -7, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 2, 3, 3, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (22, 14) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 18 |
| 2-3 | Di chuyển hướng 5 (`5`) | (21, 14) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 17 |
| 4 | Di chuyển hướng 5 (`5`) | (20, 14) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 15 |
| 5-6 | Di chuyển hướng 5 (`5`) | (19, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 14 |
| 7 | Di chuyển hướng 4 (`4`) | (18, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 12 |
| 8-9 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 11 |
| 10-11 | Di chuyển hướng 4 (`4`) | (17, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 10 |
| 12-13 | Di chuyển hướng 5 (`5`) | (17, 17) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 9 |
| 14 | Di chuyển hướng 4 (`4`) | (16, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 7 |
| 15-21 | Chờ 7 bước (`-7`) | (15, 18) | (15, 18) | Dự kiến đứng yên tại (15, 18); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 54 |
| 22-23 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 53 |
| 24-25 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 52 |
| 26 | Di chuyển hướng 2 (`2`) | (17, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 50 |
| 27-29 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 48 |
| 30 | Di chuyển hướng 2 (`2`) | (19, 18) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 46 |
| 31-32 | Di chuyển hướng 1 (`1`) | (20, 18) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 45 |
| 33 | Di chuyển hướng 1 (`1`) | (21, 17) | (21, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(21, 16)) | 43 |
| 34-35 | Di chuyển hướng 1 (`1`) | (21, 16) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 42 |
| 36-37 | Di chuyển hướng 1 (`1`) | (22, 15) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 41 |
| 38-39 | Di chuyển hướng 1 (`1`) | (22, 14) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 40 |
| 40-41 | Di chuyển hướng 1 (`1`) | (23, 13) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 39 |
| 42-43 | Di chuyển hướng 2 (`2`) | (23, 12) | (24, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 38 |
| 44-45 | Di chuyển hướng 3 (`3`) | (24, 12) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 37 |
| 46 | Di chuyển hướng 3 (`3`) | (25, 13) | (25, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(25, 14)) | 35 |
| 47-48 | Di chuyển hướng 5 (`5`) | (25, 14) | (24, 14) | Dự kiến đến điểm hẹn tọa độ (24, 14) | 34 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (9, 9) (ô=243)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 12)
- Mảng hành động đã gửi server: `[1, 2, 5, 5, 5, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 5, 0, 0, 0, 0, 0, 0, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 22 |
| 2-3 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 21 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 20 |
| 6-7 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 19 |
| 8-9 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 18 |
| 10-11 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 53 |
| 12-13 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 53 |
| 14 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 51 |
| 15-17 | Di chuyển hướng 3 (`3`) | (6, 11) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 52 |
| 18 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 50 |
| 19 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 48 |
| 20-21 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 47 |
| 22-23 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 46 |
| 24 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 44 |
| 25-26 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 43 |
| 27-28 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 42 |
| 29-30 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 41 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 40 |
| 33-34 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 39 |
| 35-36 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 38 |
| 37-38 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 37 |
| 39-40 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 36 |
| 41-42 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 35 |
| 43 | Di chuyển hướng 0 (`0`) | (8, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 33 |
| 44-45 | Di chuyển hướng 0 (`0`) | (8, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 32 |
| 46-47 | Di chuyển hướng 0 (`0`) | (7, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 31 |
| 48 | Di chuyển hướng 0 (`0`) | (7, 13) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 29 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (4, 12) (ô=316)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(16, 12))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(16, 12))
- Mảng hành động đã gửi server: `[4, 3, 4, 3, 4, 3, 4, 3, 1, 1, 2, 1, 1, 2, 3, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 53 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 52 |
| 4-5 | Di chuyển hướng 4 (`4`) | (4, 14) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 51 |
| 6-7 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 50 |
| 8-9 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 49 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 48 |
| 12-13 | Di chuyển hướng 4 (`4`) | (4, 18) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 47 |
| 14-15 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 46 |
| 16-17 | Di chuyển hướng 1 (`1`) | (4, 20) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 45 |
| 18-19 | Di chuyển hướng 1 (`1`) | (5, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 44 |
| 20-21 | Di chuyển hướng 2 (`2`) | (5, 18) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 43 |
| 22-23 | Di chuyển hướng 1 (`1`) | (6, 18) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 42 |
| 24-25 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 41 |
| 26-27 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 40 |
| 28 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 38 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 37 |
| 31 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 35 |
| 32 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 33 |
| 33-34 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 32 |
| 35-36 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 31 |
| 37 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 29 |
| 38-39 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 28 |
| 40 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 26 |
| 41-42 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 25 |
| 43 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 23 |
| 44-45 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 22 |
| 46-48 | Di chuyển hướng 5 (`5`) | (17, 12) | (16, 12) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 20 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (13, 16) (ô=429)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(11, 13))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(11, 13))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 0, 5, 0, 0, 0, 4, 5, -4, 2, 2, 3, 3, 2, 3, 2, 2, 3, 1, 2, 1, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 21 |
| 1-2 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 20 |
| 3-4 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 19 |
| 5 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 17 |
| 6 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 15 |
| 7 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 13 |
| 8-9 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 12 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 16) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 11 |
| 12 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 9 |
| 13-14 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 8 |
| 15-16 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 7 |
| 17-18 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 6 |
| 19-20 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 5 |
| 21 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 3 |
| 22-25 | Chờ 4 bước (`-4`) | (2, 13) | (2, 13) | Dự kiến đứng yên tại (2, 13); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 54 |
| 26-27 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 53 |
| 28 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 51 |
| 29-30 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 50 |
| 31-32 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 49 |
| 33-34 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 48 |
| 35 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 46 |
| 36-37 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 45 |
| 38-39 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 44 |
| 40 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 42 |
| 41-42 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 41 |
| 43 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 39 |
| 44 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 37 |
| 45-46 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 36 |
| 47 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 34 |
| 48 | Chờ 1 bước (`-1`) | (11, 13) | (11, 13) | Dự kiến đứng yên tại (11, 13); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 34 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (4, 7) (ô=186)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(0, 9))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(0, 9))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 3, 3, 2, 4, 4, 5, 5, 5, 5, 4, 5, 4, 4, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 40 |
| 2 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 38 |
| 3-4 | Di chuyển hướng 0 (`0`) | (3, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 37 |
| 5 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 35 |
| 6-8 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 33 |
| 9-10 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 32 |
| 11-12 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 31 |
| 13-14 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 30 |
| 15 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 28 |
| 16 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 26 |
| 17-18 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 25 |
| 19-20 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 24 |
| 21 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 22 |
| 22-23 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 21 |
| 24-25 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 20 |
| 26-27 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 19 |
| 28-29 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 18 |
| 30-31 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 17 |
| 32-33 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 16 |
| 34 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 14 |
| 35-36 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 13 |
| 37 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 11 |
| 38-39 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 10 |
| 40-41 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 9 |
| 42-43 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 8 |
| 44-46 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 6 |
| 47-48 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 9)) | 5 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (6, 2) (ô=58)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(2, 13))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(2, 13))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 3, 4, 4, 4, 4, 5, 5, 5, 4, 4, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 54 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 54 |
| 4-5 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 54 |
| 6 | Di chuyển hướng 3 (`3`) | (7, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 54 |
| 7-8 | Di chuyển hướng 3 (`3`) | (7, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 54 |
| 9-10 | Di chuyển hướng 4 (`4`) | (8, 7) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 54 |
| 11-12 | Di chuyển hướng 4 (`4`) | (7, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 54 |
| 13-14 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 54 |
| 15 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 54 |
| 16-18 | Di chuyển hướng 5 (`5`) | (6, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 54 |
| 19 | Di chuyển hướng 5 (`5`) | (5, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 54 |
| 20-21 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 54 |
| 22 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 54 |
| 23-24 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 54 |
| 25-48 | Chờ 24 bước (`-24`) | (2, 13) | (2, 13) | Dự kiến đứng yên tại (2, 13); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 54 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (4, 12) (ô=316)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(15, 18))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(15, 18))
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 2, 3, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 54 |
| 2 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 54 |
| 3 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 54 |
| 4 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 54 |
| 5-6 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 54 |
| 7-8 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 9 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 54 |
| 10 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 54 |
| 11 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 12-13 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 54 |
| 14-15 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 54 |
| 16 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 54 |
| 17-18 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 54 |
| 19-20 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 54 |
| 21-48 | Chờ 28 bước (`-28`) | (15, 18) | (15, 18) | Dự kiến đứng yên tại (15, 18); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 54 |

