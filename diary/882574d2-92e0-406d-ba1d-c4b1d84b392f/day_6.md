# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 58
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 6 | #0 | #6 | (5, 5) | 13 | 53 |
| 25 | #5 | #7 | (14, 20) | 3 | 53 |
| 29 | #2 | #6 | (15, 10) | 2 | 53 |
| 46 | #1 | #6 | (15, 10) | 4 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 7) (ô=162)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(0, 10))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(0, 10))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 0, 0, 5, 0, 0, 0, 5, 2, 2, 2, 3, 2, 2, 3, 3, 3, 3, 4, 4, 4, 3, 4, 5, 5, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 17 |
| 1 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 15 |
| 2-3 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 14 |
| 4-5 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 53 |
| 6 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 4)) | 51 |
| 7-8 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 50 |
| 9-10 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 49 |
| 11 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 47 |
| 12-13 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 46 |
| 14-16 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 0)) | 44 |
| 17-18 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 0)) | 43 |
| 19-20 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 0)) | 42 |
| 21-22 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 41 |
| 23-25 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 39 |
| 26 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 37 |
| 27-28 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 36 |
| 29-30 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 35 |
| 31-32 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 34 |
| 33 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 3)) | 32 |
| 34-35 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 31 |
| 36-37 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 30 |
| 38 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 28 |
| 39-40 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 27 |
| 41 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 25 |
| 42-43 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 24 |
| 44-45 | Di chuyển hướng 4 (`4`) | (7, 9) | (6, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(6, 10)) | 23 |
| 46-47 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 22 |
| 48 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 20 |
| 49-51 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 18 |
| 52-53 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 17 |
| 54 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 15 |
| 55-56 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 10)) | 14 |
| 57 | Chờ 1 bước (`-1`) | (0, 10) | (0, 10) | Dự kiến đứng yên tại (0, 10); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(0, 10)) | 14 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 9) (ô=216)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(14, 7))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(14, 7))
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 3, 3, 3, 3, 4, 3, 3, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 32 |
| 2-3 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 31 |
| 4-5 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 30 |
| 6-7 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 28 |
| 8-9 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 27 |
| 10-11 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 26 |
| 12-14 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 24 |
| 15 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 22 |
| 16-17 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(19, 18)) | 21 |
| 18-19 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 20 |
| 20-21 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 19 |
| 22-23 | Di chuyển hướng 2 (`2`) | (20, 20) | (21, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(21, 20)) | 18 |
| 24-25 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 17 |
| 26-27 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 16 |
| 28-29 | Di chuyển hướng 0 (`0`) | (20, 18) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 15 |
| 30-31 | Di chuyển hướng 0 (`0`) | (20, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 14 |
| 32 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 12 |
| 33-35 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 10 |
| 36-37 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 9 |
| 38-39 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 8 |
| 40-41 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 6 |
| 42-43 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 5 |
| 44-45 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 53 |
| 46-47 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 52 |
| 48-49 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 50-51 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 50 |
| 52-57 | Chờ 6 bước (`-6`) | (14, 7) | (14, 7) | Dự kiến đứng yên tại (14, 7); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 50 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (20, 9) (ô=218)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(4, 4))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(4, 4))
- Mảng hành động đã gửi server: `[5, 5, 4, 5, 5, -19, 0, 0, 0, 0, 0, 5, 5, 4, 5, 0, 5, 0, 0, 5, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 6 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 5 |
| 4-5 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 4 |
| 6-7 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 3 |
| 8-9 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 2 |
| 10-28 | Chờ 19 bước (`-19`) | (15, 10) | (15, 10) | Dự kiến đứng yên tại (15, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 53 |
| 29-30 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 52 |
| 31-32 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 33-34 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 50 |
| 35-36 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 49 |
| 37-38 | Di chuyển hướng 0 (`0`) | (13, 6) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 48 |
| 39 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 46 |
| 40-41 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 45 |
| 42 | Di chuyển hướng 4 (`4`) | (11, 5) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 43 |
| 43-44 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(9, 6)) | 42 |
| 45-46 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 41 |
| 47-48 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 40 |
| 49 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 38 |
| 50-51 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 3)) | 37 |
| 52-53 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 36 |
| 54-55 | Di chuyển hướng 4 (`4`) | (6, 3) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 35 |
| 56 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 4)) | 33 |
| 57 | Chờ 1 bước (`-1`) | (4, 4) | (4, 4) | Dự kiến đứng yên tại (4, 4); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 4)) | 33 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 20) (ô=449)
- Nhiên liệu đầu ngày: 36
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(5, 22))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(5, 22))
- Mảng hành động đã gửi server: `[5, 5, 5, 1, 1, 2, 2, 2, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 4, 3, 4, 3, 3, 3, 3, 3, 2, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 35 |
| 2-3 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 34 |
| 4-5 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 33 |
| 6-7 | Di chuyển hướng 1 (`1`) | (6, 20) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 32 |
| 8-9 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 31 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 30 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 29 |
| 14 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 27 |
| 15-16 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 26 |
| 17 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 24 |
| 18 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 22 |
| 19 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 20 |
| 20-21 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 15)) | 19 |
| 22-23 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 18 |
| 24-25 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 17 |
| 26-27 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 16 |
| 28-29 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 15 |
| 30-31 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 14)) | 14 |
| 32-33 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 13 |
| 34-35 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 12 |
| 36 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(2, 17)) | 10 |
| 37-38 | Di chuyển hướng 3 (`3`) | (2, 17) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 9 |
| 39-40 | Di chuyển hướng 3 (`3`) | (2, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 8 |
| 41-42 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 7 |
| 43-44 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 6 |
| 45-46 | Di chuyển hướng 3 (`3`) | (4, 21) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 5 |
| 47-48 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 4 |
| 49-57 | Chờ 9 bước (`-9`) | (5, 22) | (5, 22) | Dự kiến đứng yên tại (5, 22); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 4 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 21) (ô=467)
- Nhiên liệu đầu ngày: 18
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(5, 22))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(5, 22))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 0, 1, 0, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (5, 21) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 17 |
| 2-3 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 16 |
| 4-5 | Di chuyển hướng 0 (`0`) | (4, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 15 |
| 6-7 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 14 |
| 8-9 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 13 |
| 10 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 11 |
| 11-12 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 14)) | 10 |
| 13-14 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 9 |
| 15-16 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 8 |
| 17-18 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 7 |
| 19-20 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 6 |
| 21-22 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 5 |
| 23-24 | Di chuyển hướng 3 (`3`) | (6, 17) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 4 |
| 25-26 | Di chuyển hướng 3 (`3`) | (6, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 3 |
| 27-28 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 2 |
| 29-30 | Di chuyển hướng 4 (`4`) | (6, 20) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 1 |
| 31-32 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 0 |
| 33-57 | Chờ 25 bước (`-25`) | (5, 22) | (5, 22) | Dự kiến đứng yên tại (5, 22); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 23) (ô=519)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 18)
- Mảng hành động đã gửi server: `[1, 1, 1, -18, 0, 0, 0, 5, 5, 4, 5, 5, 5, 4, 4, 4, 4, 0, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (13, 23) | (13, 22) | Dự kiến đến điểm hẹn tọa độ (13, 22) | 6 |
| 2-4 | Di chuyển hướng 1 (`1`) | (13, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 4 |
| 5-6 | Di chuyển hướng 1 (`1`) | (14, 21) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 3 |
| 7-24 | Chờ 18 bước (`-18`) | (14, 20) | (14, 20) | Dự kiến đứng yên tại (14, 20); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 53 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 52 |
| 27 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 50 |
| 28-29 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 49 |
| 30-31 | Di chuyển hướng 5 (`5`) | (13, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 47 |
| 32-33 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 46 |
| 34-35 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 44 |
| 36-37 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 43 |
| 38 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 41 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 40 |
| 41-42 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 39 |
| 43-44 | Di chuyển hướng 4 (`4`) | (7, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 38 |
| 45-46 | Di chuyển hướng 4 (`4`) | (6, 20) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 37 |
| 47-48 | Di chuyển hướng 4 (`4`) | (6, 21) | (5, 22) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 36 |
| 49-50 | Di chuyển hướng 0 (`0`) | (5, 22) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 35 |
| 51-52 | Di chuyển hướng 0 (`0`) | (5, 21) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 34 |
| 53-54 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 33 |
| 55-56 | Di chuyển hướng 0 (`0`) | (4, 19) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 32 |
| 57 | Chờ 1 bước (`-1`) | (3, 18) | (3, 18) | Dự kiến đứng yên tại (3, 18); hướng tới tọa độ (3, 18) | 32 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (4, 4) (ô=92)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(15, 10))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(15, 10))
- Mảng hành động đã gửi server: `[3, -4, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, -29]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (4, 4) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 53 |
| 2-5 | Chờ 4 bước (`-4`) | (5, 5) | (5, 5) | Dự kiến đứng yên tại (5, 5); hướng tới tọa độ (5, 5) | 53 |
| 6 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 53 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 53 |
| 9-11 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 53 |
| 12 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 53 |
| 13-14 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 53 |
| 15-16 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 53 |
| 17 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 53 |
| 18-19 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 53 |
| 20 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 53 |
| 21-22 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 53 |
| 23-24 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 53 |
| 25-26 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 53 |
| 27-28 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 53 |
| 29-57 | Chờ 29 bước (`-29`) | (15, 10) | (15, 10) | Dự kiến đứng yên tại (15, 10); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 53 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (2, 14) (ô=310)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(14, 20))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(14, 20))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 3, 2, 3, 3, 2, 2, 2, 3, 3, 3, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 53 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 53 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 53 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 53 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 53 |
| 10 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 53 |
| 11-12 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 53 |
| 13 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 53 |
| 14 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 53 |
| 15 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 53 |
| 16-17 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 53 |
| 18-19 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 53 |
| 20-21 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 53 |
| 22-23 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 53 |
| 24 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 53 |
| 25-57 | Chờ 33 bước (`-33`) | (14, 20) | (14, 20) | Dự kiến đứng yên tại (14, 20); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(14, 20)) | 53 |

