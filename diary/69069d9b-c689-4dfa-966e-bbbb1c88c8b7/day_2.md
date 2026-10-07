# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 52
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 12 | #4 | #6 | (6, 10) | 24 | 54 |
| 21 | #3 | #7 | (6, 16) | 2 | 54 |
| 25 | #5 | #6 | (1, 5) | 0 | 54 |
| 30 | #2 | #6 | (3, 4) | 9 | 54 |
| 34 | #2 | #6 | (5, 3) | 50 | 54 |
| 38 | #1 | #7 | (12, 18) | 7 | 54 |
| 45 | #5 | #6 | (4, 4) | 40 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(23, 5))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(23, 5))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 3, 3, 2, 2, -37]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (17, 0) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 16 |
| 2-3 | Di chuyển hướng 3 (`3`) | (18, 0) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 15 |
| 4-6 | Di chuyển hướng 3 (`3`) | (19, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 13 |
| 7-8 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 12 |
| 9-10 | Di chuyển hướng 3 (`3`) | (20, 3) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 11 |
| 11 | Di chuyển hướng 3 (`3`) | (20, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 9 |
| 12 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 7 |
| 13-14 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 6 |
| 15-51 | Chờ 37 bước (`-37`) | (23, 5) | (23, 5) | Dự kiến đứng yên tại (23, 5); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 6 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (24, 14) (ô=388)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 17)
- Mảng hành động đã gửi server: `[5, 1, 1, 5, 4, 4, 5, 5, 5, 5, 4, 4, 4, 5, 4, 0, 5, 0, 5, 4, 3, 4, 4, 5, 0, 0, 0, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (24, 14) | (23, 14) | Dự kiến đến điểm hẹn tọa độ (23, 14) | 33 |
| 2-3 | Di chuyển hướng 1 (`1`) | (23, 14) | (24, 13) | Dự kiến đến điểm hẹn tọa độ (24, 13) | 32 |
| 4-6 | Di chuyển hướng 1 (`1`) | (24, 13) | (24, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 30 |
| 7-8 | Di chuyển hướng 5 (`5`) | (24, 12) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 29 |
| 9-10 | Di chuyển hướng 4 (`4`) | (23, 12) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 28 |
| 11-12 | Di chuyển hướng 4 (`4`) | (23, 13) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 27 |
| 13-14 | Di chuyển hướng 5 (`5`) | (22, 14) | (21, 14) | Dự kiến đến điểm hẹn tọa độ (21, 14) | 26 |
| 15-16 | Di chuyển hướng 5 (`5`) | (21, 14) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 25 |
| 17 | Di chuyển hướng 5 (`5`) | (20, 14) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 23 |
| 18-19 | Di chuyển hướng 5 (`5`) | (19, 14) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 22 |
| 20 | Di chuyển hướng 4 (`4`) | (18, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 20 |
| 21-22 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 19 |
| 23-24 | Di chuyển hướng 4 (`4`) | (17, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 18 |
| 25-26 | Di chuyển hướng 5 (`5`) | (17, 17) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 17 |
| 27 | Di chuyển hướng 4 (`4`) | (16, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 15 |
| 28-29 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 14 |
| 30-31 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 13 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 12 |
| 34 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 10 |
| 35-36 | Di chuyển hướng 4 (`4`) | (12, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 9 |
| 37 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 54 |
| 38-39 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 53 |
| 40-41 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 52 |
| 42-43 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 51 |
| 44-45 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 50 |
| 46-47 | Di chuyển hướng 0 (`0`) | (10, 19) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 49 |
| 48-49 | Di chuyển hướng 0 (`0`) | (9, 18) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 48 |
| 50-51 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 47 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 12) (ô=318)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 7)
- Mảng hành động đã gửi server: `[0, 1, 0, 5, 5, 5, 5, 5, 5, 1, 2, 1, 1, 1, 1, 2, 2, 0, 1, 1, 3, 2, 3, 3, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 27 |
| 2-4 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 25 |
| 5-6 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 23 |
| 7-8 | Di chuyển hướng 5 (`5`) | (6, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 22 |
| 9-10 | Di chuyển hướng 5 (`5`) | (5, 9) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 21 |
| 11-12 | Di chuyển hướng 5 (`5`) | (4, 9) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 20 |
| 13-14 | Di chuyển hướng 5 (`5`) | (3, 9) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 19 |
| 15 | Di chuyển hướng 5 (`5`) | (2, 9) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 17 |
| 16-17 | Di chuyển hướng 5 (`5`) | (1, 9) | (0, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 9)) | 16 |
| 18-19 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 15 |
| 20-21 | Di chuyển hướng 2 (`2`) | (0, 8) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 14 |
| 22-23 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 13 |
| 24-25 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 12 |
| 26 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 10 |
| 27-28 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 9 |
| 29-30 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 53 |
| 31 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 51 |
| 32-33 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 54 |
| 34-35 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 53 |
| 36-37 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 52 |
| 38-39 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 51 |
| 40-41 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 50 |
| 42-43 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 49 |
| 44 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 47 |
| 45-46 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 46 |
| 47-48 | Di chuyển hướng 4 (`4`) | (9, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 45 |
| 49-51 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 43 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (16, 12) (ô=328)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 12)
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 4, 5, 5, 5, 5, 5, 5, 5, -1, 4, 4, 4, 4, 0, 0, 0, 0, 0, 1, 0, 1, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 19 |
| 2 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 17 |
| 3-4 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 16 |
| 5 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 14 |
| 6-7 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 13 |
| 8 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 11 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 10 |
| 11-12 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 9 |
| 13-14 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 7 |
| 15-16 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 5 |
| 17-18 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 3 |
| 19-20 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 54 |
| 21 | Chờ 1 bước (`-1`) | (6, 16) | (6, 16) | Dự kiến đứng yên tại (6, 16); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 54 |
| 22-23 | Di chuyển hướng 4 (`4`) | (6, 16) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 53 |
| 24-26 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 51 |
| 27-28 | Di chuyển hướng 4 (`4`) | (5, 18) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 50 |
| 29-30 | Di chuyển hướng 4 (`4`) | (5, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 49 |
| 31-32 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 48 |
| 33-34 | Di chuyển hướng 0 (`0`) | (4, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 47 |
| 35-36 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 46 |
| 37-38 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 45 |
| 39-40 | Di chuyển hướng 0 (`0`) | (2, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 44 |
| 41-42 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 43 |
| 43 | Di chuyển hướng 0 (`0`) | (2, 14) | (2, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 41 |
| 44-45 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 40 |
| 46-47 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 39 |
| 48-49 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 38 |
| 50-51 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 37 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 13) (ô=349)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(23, 5))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(23, 5))
- Mảng hành động đã gửi server: `[5, 0, 5, 0, 5, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 13) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 33 |
| 2 | Di chuyển hướng 0 (`0`) | (10, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 31 |
| 3-5 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 29 |
| 6 | Di chuyển hướng 0 (`0`) | (8, 12) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 27 |
| 7-8 | Di chuyển hướng 5 (`5`) | (8, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 26 |
| 9-11 | Di chuyển hướng 0 (`0`) | (7, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 54 |
| 12-13 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 52 |
| 14-15 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 51 |
| 16-17 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 50 |
| 18-19 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 49 |
| 20-21 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 48 |
| 22-23 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 47 |
| 24-25 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 46 |
| 26-27 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 45 |
| 28 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 43 |
| 29-30 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 42 |
| 31 | Di chuyển hướng 1 (`1`) | (15, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 40 |
| 32-33 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 39 |
| 34-35 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 38 |
| 36-37 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 37 |
| 38-39 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 36 |
| 40-42 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 5)) | 34 |
| 43-44 | Di chuyển hướng 2 (`2`) | (20, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 33 |
| 45 | Di chuyển hướng 2 (`2`) | (21, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 31 |
| 46-47 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 30 |
| 48-51 | Chờ 4 bước (`-4`) | (23, 5) | (23, 5) | Dự kiến đứng yên tại (23, 5); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 30 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 9) (ô=234)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(6, 1))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(6, 1))
- Mảng hành động đã gửi server: `[1, 1, 0, 1, -17, 0, 0, 1, 1, 0, 2, 2, 3, 3, 3, 3, 2, 0, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 4 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 3 |
| 4-6 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 1 |
| 7-8 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 0 |
| 9-25 | Chờ 17 bước (`-17`) | (1, 5) | (1, 5) | Dự kiến đứng yên tại (1, 5); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 54 |
| 26-27 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 53 |
| 28-29 | Di chuyển hướng 0 (`0`) | (0, 4) | (0, 3) | Dự kiến đến điểm hẹn tọa độ (0, 3) | 52 |
| 30-31 | Di chuyển hướng 1 (`1`) | (0, 3) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 51 |
| 32-33 | Di chuyển hướng 1 (`1`) | (0, 2) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 50 |
| 34-35 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 49 |
| 36-37 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 48 |
| 38 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 46 |
| 39 | Di chuyển hướng 3 (`3`) | (2, 0) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 44 |
| 40-41 | Di chuyển hướng 3 (`3`) | (3, 1) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 43 |
| 42-43 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 42 |
| 44 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 54 |
| 45 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 52 |
| 46-47 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 51 |
| 48-49 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 50 |
| 50-51 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 49 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (2, 13) (ô=340)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 4)
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 2, 1, 0, 0, 0, 5, 0, 5, 0, 5, 2, 1, 2, 1, 2, 5, 3, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 54 |
| 2-3 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 54 |
| 4 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 54 |
| 5-6 | Di chuyển hướng 2 (`2`) | (4, 11) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 54 |
| 7 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 54 |
| 8-10 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 54 |
| 11-12 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 54 |
| 13-14 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 54 |
| 15-16 | Di chuyển hướng 0 (`0`) | (5, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 54 |
| 17-18 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 54 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 54 |
| 21 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 54 |
| 22 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 54 |
| 23-24 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 54 |
| 25-26 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 54 |
| 27-28 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 54 |
| 29 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 54 |
| 30-31 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 54 |
| 32 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 54 |
| 33-34 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 54 |
| 35 | Di chuyển hướng 3 (`3`) | (4, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 54 |
| 36-51 | Chờ 16 bước (`-16`) | (4, 4) | (4, 4) | Dự kiến đứng yên tại (4, 4); hướng tới tọa độ (4, 4) | 54 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (15, 18) (ô=483)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 18)
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 5, 5, 5, 5, 5, 5, -2, 2, 2, 2, 2, 2, 3, 3, -18]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 54 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 54 |
| 4-5 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 54 |
| 6 | Di chuyển hướng 5 (`5`) | (13, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 54 |
| 7-8 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 9-10 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 54 |
| 11-12 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 54 |
| 13-14 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 15-16 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 54 |
| 17-18 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 54 |
| 19-20 | Chờ 2 bước (`-2`) | (6, 16) | (6, 16) | Dự kiến đứng yên tại (6, 16); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 54 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 54 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 25-26 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 54 |
| 27-28 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 54 |
| 29-30 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 31-32 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 54 |
| 33 | Di chuyển hướng 3 (`3`) | (12, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 54 |
| 34-51 | Chờ 18 bước (`-18`) | (12, 18) | (12, 18) | Dự kiến đứng yên tại (12, 18); hướng tới tọa độ (12, 18) | 54 |

