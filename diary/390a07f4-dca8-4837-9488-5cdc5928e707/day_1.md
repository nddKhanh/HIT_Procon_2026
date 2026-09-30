# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 49
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #0 | #5 | (16, 5) | 47 | 53 |
| 8 | #1 | #6 | (7, 5) | 39 | 53 |
| 13 | #0 | #5 | (9, 8) | 35 | 53 |
| 14 | #2 | #6 | (7, 5) | 18 | 53 |
| 16 | #3 | #6 | (7, 5) | 38 | 53 |
| 22 | #1 | #5 | (9, 9) | 40 | 53 |
| 26 | #0 | #6 | (7, 5) | 40 | 53 |
| 28 | #2 | #5 | (9, 9) | 40 | 53 |
| 41 | #4 | #5 | (9, 9) | 5 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (15, 5) (ô=145)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 12)
- Mảng hành động đã gửi server: `[2, 3, 4, 5, 5, 5, 5, 5, 5, 4, 1, 0, 1, 1, 5, 5, 4, 4, 0, 4, 4, 4, 4, 3, 4, 4, 3, 3, 5, 5, 0, 5, 5, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 47 |
| 2-3 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 51 |
| 4 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 49 |
| 5 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 47 |
| 6 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 45 |
| 7 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 43 |
| 8 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 41 |
| 9 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 39 |
| 10 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 37 |
| 11 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 35 |
| 12-13 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 52 |
| 14 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 50 |
| 15-16 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 49 |
| 17-18 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 48 |
| 19-20 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 47 |
| 21 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 45 |
| 22 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 43 |
| 23 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 41 |
| 24-25 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 53 |
| 26-27 | Di chuyển hướng 4 (`4`) | (7, 5) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 52 |
| 28 | Di chuyển hướng 4 (`4`) | (6, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 50 |
| 29-30 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 49 |
| 31 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 47 |
| 32 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 45 |
| 33 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 43 |
| 34 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 41 |
| 35 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 39 |
| 36-37 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 38 |
| 38-39 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 37 |
| 40 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 35 |
| 41 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 13)) | 33 |
| 42-43 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 32 |
| 44-45 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 13)) | 31 |
| 46-47 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 30 |
| 48 | Chờ 1 bước (`-1`) | (1, 12) | (1, 12) | Dự kiến đứng yên tại (1, 12); hướng tới tọa độ (1, 12) | 30 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 2) (ô=59)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 11)
- Mảng hành động đã gửi server: `[4, 3, 3, 4, 0, 2, 1, 2, 2, 4, 4, 3, 4, 4, 5, 0, 0, 5, 4, 4, 3, 4, 4, 3, 3, 5, 5, 0, 5, 5, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 45 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 44 |
| 4 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 42 |
| 5 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 40 |
| 6-7 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 53 |
| 8-9 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 52 |
| 10 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 50 |
| 11 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 48 |
| 12 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 46 |
| 13-14 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 45 |
| 15-16 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 44 |
| 17-18 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 43 |
| 19 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 41 |
| 20-21 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 53 |
| 22-23 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 52 |
| 24 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 50 |
| 25-26 | Di chuyển hướng 0 (`0`) | (7, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 49 |
| 27 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 47 |
| 28-29 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 46 |
| 30 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 44 |
| 31 | Di chuyển hướng 3 (`3`) | (5, 9) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 42 |
| 32 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 40 |
| 33 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 38 |
| 34 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 36 |
| 35-36 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 35 |
| 37-38 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 34 |
| 39 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 32 |
| 40 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 13)) | 30 |
| 41-42 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 29 |
| 43-44 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(1, 13)) | 28 |
| 45-46 | Di chuyển hướng 1 (`1`) | (1, 13) | (1, 12) | Dự kiến đến điểm hẹn tọa độ (1, 12) | 27 |
| 47-48 | Di chuyển hướng 1 (`1`) | (1, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 26 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 13) (ô=341)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(2, 10))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(2, 10))
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 2, 1, 0, 2, 1, 2, 2, 4, 4, 3, 4, 4, -1, 5, 4, 5, 5, 4, 4, 3, 3, 0, 0, 5, 0, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 30 |
| 2 | Di chuyển hướng 1 (`1`) | (3, 12) | (4, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 11)) | 28 |
| 3-4 | Di chuyển hướng 1 (`1`) | (4, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 27 |
| 5-6 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 26 |
| 7 | Di chuyển hướng 1 (`1`) | (5, 9) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 24 |
| 8 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 22 |
| 9-10 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 21 |
| 11 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 19 |
| 12-13 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 53 |
| 14-15 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 52 |
| 16 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 50 |
| 17 | Di chuyển hướng 2 (`2`) | (8, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 48 |
| 18 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 46 |
| 19-20 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 45 |
| 21-22 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 44 |
| 23-24 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 43 |
| 25 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 41 |
| 26-27 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 53 |
| 28 | Chờ 1 bước (`-1`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 53 |
| 29-30 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 52 |
| 31 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 50 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 49 |
| 34-35 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 48 |
| 36 | Di chuyển hướng 4 (`4`) | (5, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 46 |
| 37 | Di chuyển hướng 4 (`4`) | (5, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 44 |
| 38 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 42 |
| 39-40 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 41 |
| 41-42 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 40 |
| 43-44 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 39 |
| 45 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 37 |
| 46 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 35 |
| 47-48 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 10)) | 34 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (10, 5) (ô=140)
- Nhiên liệu đầu ngày: 50
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 14)
- Mảng hành động đã gửi server: `[1, 4, 4, 3, 4, 0, 5, 0, 0, 0, 5, 0, 0, 3, 4, 4, 5, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 3, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(10, 4)) | 49 |
| 2-3 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 48 |
| 4-5 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 47 |
| 6-7 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 46 |
| 8 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 44 |
| 9-10 | Di chuyển hướng 0 (`0`) | (9, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 43 |
| 11-12 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 41 |
| 13 | Di chuyển hướng 0 (`0`) | (8, 7) | (7, 6) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 6)) | 39 |
| 14-15 | Di chuyển hướng 0 (`0`) | (7, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 53 |
| 16-17 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 52 |
| 18 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 50 |
| 19 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 3)) | 48 |
| 20-21 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(4, 2)) | 47 |
| 22-23 | Di chuyển hướng 3 (`3`) | (4, 2) | (5, 3) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 3)) | 46 |
| 24-25 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 45 |
| 26 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 43 |
| 27-28 | Di chuyển hướng 5 (`5`) | (4, 5) | (3, 5) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(3, 5)) | 42 |
| 29-30 | Di chuyển hướng 2 (`2`) | (3, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 41 |
| 31-32 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 40 |
| 33 | Di chuyển hướng 3 (`3`) | (5, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 38 |
| 34 | Di chuyển hướng 3 (`3`) | (5, 6) | (6, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(6, 7)) | 36 |
| 35-36 | Di chuyển hướng 4 (`4`) | (6, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 35 |
| 37 | Di chuyển hướng 4 (`4`) | (5, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 33 |
| 38 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 31 |
| 39-40 | Di chuyển hướng 4 (`4`) | (4, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(4, 11)) | 30 |
| 41-42 | Di chuyển hướng 3 (`3`) | (4, 11) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 29 |
| 43 | Di chuyển hướng 3 (`3`) | (4, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(5, 13)) | 27 |
| 44-45 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 14)) | 26 |
| 46-47 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 25 |
| 48 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 23 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (16, 0) (ô=16)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(10, 5))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(10, 5))
- Mảng hành động đã gửi server: `[3, 4, 3, 3, 0, 1, 2, 5, 5, 5, 0, 3, 3, 3, 2, 3, 5, 4, 4, 5, 5, 5, 5, 5, 5, 4, 4, 1, 1, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (16, 0) | (17, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(17, 1)) | 46 |
| 2-3 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 45 |
| 4 | Di chuyển hướng 3 (`3`) | (16, 2) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 43 |
| 5-6 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 4)) | 42 |
| 7-8 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 41 |
| 9-10 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 2)) | 40 |
| 11-12 | Di chuyển hướng 2 (`2`) | (17, 2) | (18, 2) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(18, 2)) | 39 |
| 13-14 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(17, 2)) | 38 |
| 15-16 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 37 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 2) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 35 |
| 18 | Di chuyển hướng 0 (`0`) | (15, 2) | (15, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 1)) | 33 |
| 19-20 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 32 |
| 21 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 30 |
| 22 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 28 |
| 23 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 4)) | 26 |
| 24-25 | Di chuyển hướng 3 (`3`) | (17, 4) | (18, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(18, 5)) | 25 |
| 26-27 | Di chuyển hướng 5 (`5`) | (18, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 24 |
| 28-30 | Di chuyển hướng 4 (`4`) | (17, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 22 |
| 31 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 20 |
| 32 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 18 |
| 33 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 16 |
| 34 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 14 |
| 35 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 12 |
| 36 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 10 |
| 37 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 8 |
| 38 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 6 |
| 39-40 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 53 |
| 41-42 | Di chuyển hướng 1 (`1`) | (9, 9) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 52 |
| 43-44 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 51 |
| 45 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(9, 6)) | 49 |
| 46-47 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 48 |
| 48 | Chờ 1 bước (`-1`) | (10, 5) | (10, 5) | Dự kiến đứng yên tại (10, 5); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(10, 5)) | 48 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (17, 3) (ô=95)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(9, 9))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(9, 9))
- Mảng hành động đã gửi server: `[4, 4, 3, 4, 5, 5, 5, 5, 5, 5, 4, 4, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (17, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 53 |
| 2 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 53 |
| 3-4 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 53 |
| 5 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 53 |
| 6 | Di chuyển hướng 5 (`5`) | (16, 7) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 53 |
| 7 | Di chuyển hướng 5 (`5`) | (15, 7) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 53 |
| 8 | Di chuyển hướng 5 (`5`) | (14, 7) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 53 |
| 9 | Di chuyển hướng 5 (`5`) | (13, 7) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 53 |
| 10 | Di chuyển hướng 5 (`5`) | (12, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 53 |
| 11 | Di chuyển hướng 5 (`5`) | (11, 7) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 53 |
| 12 | Di chuyển hướng 4 (`4`) | (10, 7) | (9, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(9, 8)) | 53 |
| 13-14 | Di chuyển hướng 4 (`4`) | (9, 8) | (9, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 53 |
| 15-48 | Chờ 34 bước (`-34`) | (9, 9) | (9, 9) | Dự kiến đứng yên tại (9, 9); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 9)) | 53 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (8, 6) (ô=164)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(7, 5))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(7, 5))
- Mảng hành động đã gửi server: `[0, 5, -44]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 53 |
| 4 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 53 |
| 5-48 | Chờ 44 bước (`-44`) | (7, 5) | (7, 5) | Dự kiến đứng yên tại (7, 5); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(7, 5)) | 53 |

