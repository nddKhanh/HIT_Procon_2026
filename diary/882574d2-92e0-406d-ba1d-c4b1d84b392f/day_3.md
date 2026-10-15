# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 52
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #3 | #6 | (4, 17) | 52 | 53 |
| 13 | #0 | #6 | (10, 18) | 0 | 53 |
| 17 | #0 | #6 | (12, 17) | 50 | 53 |
| 20 | #0 | #6 | (14, 17) | 50 | 53 |
| 23 | #0 | #6 | (15, 15) | 50 | 53 |
| 25 | #0 | #6 | (16, 15) | 52 | 53 |
| 29 | #0 | #6 | (17, 13) | 49 | 53 |
| 31 | #0 | #7 | (17, 12) | 52 | 53 |
| 32 | #4 | #6 | (17, 13) | 22 | 53 |
| 42 | #1 | #7 | (19, 18) | 0 | 53 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 20) (ô=454)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 9)
- Mảng hành động đã gửi server: `[5, 0, 0, 0, 5, 4, -2, 1, 2, 2, 2, 1, 1, 2, 1, 1, 1, 1, 0, 1, 2, 2, 5, 5, 4, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 7 |
| 2-3 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 6 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 5 |
| 6-8 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 3 |
| 9-10 | Di chuyển hướng 5 (`5`) | (12, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 2 |
| 11 | Di chuyển hướng 4 (`4`) | (11, 17) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 0 |
| 12-13 | Chờ 2 bước (`-2`) | (10, 18) | (10, 18) | Dự kiến đứng yên tại (10, 18); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 53 |
| 14-15 | Di chuyển hướng 1 (`1`) | (10, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 52 |
| 16 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 53 |
| 17-18 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 52 |
| 19 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 53 |
| 20-21 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 52 |
| 22 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 53 |
| 23-24 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 53 |
| 25-27 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 51 |
| 28 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 53 |
| 29-30 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 53 |
| 31 | Di chuyển hướng 1 (`1`) | (17, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 51 |
| 32-33 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 50 |
| 34-35 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 49 |
| 36-37 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 48 |
| 38-39 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(20, 9)) | 47 |
| 40-41 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 46 |
| 42-43 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 45 |
| 44-45 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 44 |
| 46-47 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 43 |
| 48-49 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 42 |
| 50-51 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 41 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 20) (ô=461)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 14)
- Mảng hành động đã gửi server: `[0, 0, 0, 4, -35, 0, 1, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 3 |
| 2-3 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 2 |
| 4-5 | Di chuyển hướng 0 (`0`) | (20, 18) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 1 |
| 6-7 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(19, 18)) | 0 |
| 8-42 | Chờ 35 bước (`-35`) | (19, 18) | (19, 18) | Dự kiến đứng yên tại (19, 18); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(19, 18)) | 53 |
| 43-44 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 52 |
| 45-46 | Di chuyển hướng 1 (`1`) | (19, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 51 |
| 47 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 49 |
| 48-50 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 47 |
| 51 | Chờ 1 bước (`-1`) | (18, 14) | (18, 14) | Dự kiến đứng yên tại (18, 14); hướng tới tọa độ (18, 14) | 47 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (6, 10) (ô=226)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 6)
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 5, 2, 2, 2, 3, 2, 2, 3, 3, 3, 3, 3, 2, 2, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (6, 10) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 52 |
| 2-3 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 51 |
| 4-5 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 50 |
| 6-7 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 49 |
| 8-9 | Di chuyển hướng 0 (`0`) | (5, 6) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 48 |
| 10 | Di chuyển hướng 0 (`0`) | (5, 5) | (4, 4) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(4, 4)) | 46 |
| 11-12 | Di chuyển hướng 0 (`0`) | (4, 4) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 45 |
| 13-14 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 44 |
| 15 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 42 |
| 16-17 | Di chuyển hướng 0 (`0`) | (2, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 41 |
| 18-20 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 0)) | 39 |
| 21-22 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(0, 0)) | 38 |
| 23-24 | Di chuyển hướng 2 (`2`) | (0, 0) | (1, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 0)) | 37 |
| 25-26 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 36 |
| 27-29 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 34 |
| 30 | Di chuyển hướng 3 (`3`) | (3, 0) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 32 |
| 31-32 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 31 |
| 33-34 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 30 |
| 35-36 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 29 |
| 37 | Di chuyển hướng 3 (`3`) | (6, 2) | (7, 3) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(7, 3)) | 27 |
| 38-39 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 26 |
| 40-41 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 25 |
| 42 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 23 |
| 43-44 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(9, 6)) | 22 |
| 45-46 | Di chuyển hướng 2 (`2`) | (9, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 21 |
| 47-48 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(9, 6)) | 20 |
| 49-50 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 19 |
| 51 | Chờ 1 bước (`-1`) | (8, 6) | (8, 6) | Dự kiến đứng yên tại (8, 6); hướng tới tọa độ (8, 6) | 19 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 17) (ô=377)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(5, 22))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(5, 22))
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 3, 1, 1, 2, 2, 2, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 4, 3, 4, 3, 3, 3, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 53 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 52 |
| 4 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 50 |
| 5-6 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 49 |
| 7-8 | Di chuyển hướng 3 (`3`) | (6, 19) | (6, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 20)) | 48 |
| 9-10 | Di chuyển hướng 1 (`1`) | (6, 20) | (7, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 19)) | 47 |
| 11-12 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 46 |
| 13-14 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 45 |
| 15-16 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 44 |
| 17 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 42 |
| 18-19 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 41 |
| 20 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 39 |
| 21 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 37 |
| 22 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 35 |
| 23-24 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 15)) | 34 |
| 25-26 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 33 |
| 27-28 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 32 |
| 29-30 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 31 |
| 31-32 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(3, 15)) | 30 |
| 33-34 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 14)) | 29 |
| 35-36 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 28 |
| 37-38 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 27 |
| 39 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(2, 17)) | 25 |
| 40-41 | Di chuyển hướng 3 (`3`) | (2, 17) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 24 |
| 42-43 | Di chuyển hướng 3 (`3`) | (2, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 23 |
| 44-45 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 22 |
| 46-47 | Di chuyển hướng 3 (`3`) | (3, 20) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 21 |
| 48-49 | Di chuyển hướng 3 (`3`) | (4, 21) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 20 |
| 50-51 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(5, 22)) | 19 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 15) (ô=333)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(14, 7))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(14, 7))
- Mảng hành động đã gửi server: `[0, 2, 2, 2, 2, 3, 2, 2, 3, 3, 2, 2, 2, 2, 1, 1, 1, 2, 1, 1, 0, 1, 1, 5, 4, 5, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 14)) | 48 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 47 |
| 4-5 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 46 |
| 6-7 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 45 |
| 8-9 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 44 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(7, 15)) | 43 |
| 12-13 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 42 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 41 |
| 16 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 39 |
| 17 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 37 |
| 18 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 35 |
| 19 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 33 |
| 20-21 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 32 |
| 22 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 30 |
| 23-24 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 29 |
| 25 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 27 |
| 26-27 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 26 |
| 28-30 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 24 |
| 31 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 53 |
| 32-33 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 52 |
| 34 | Di chuyển hướng 0 (`0`) | (17, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 50 |
| 35-36 | Di chuyển hướng 1 (`1`) | (17, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 49 |
| 37-38 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(18, 9)) | 48 |
| 39-40 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 47 |
| 41-42 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 46 |
| 43-44 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 45 |
| 45-46 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 44 |
| 47-48 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 43 |
| 49-50 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 42 |
| 51 | Chờ 1 bước (`-1`) | (14, 7) | (14, 7) | Dự kiến đứng yên tại (14, 7); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 42 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (13, 23) (ô=519)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(13, 23))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(13, 23))
- Mảng hành động đã gửi server: `[-52]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-51 | Chờ 52 bước (`-52`) | (13, 23) | (13, 23) | Dự kiến đứng yên tại (13, 23); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(13, 23)) | 0 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (3, 17) (ô=377)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 13)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 3, 2, 2, 1, 2, 2, 2, 1, 1, 2, 1, 1, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 53 |
| 2-3 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 53 |
| 4-5 | Di chuyển hướng 2 (`2`) | (5, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 53 |
| 6-7 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 53 |
| 8 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 53 |
| 9 | Di chuyển hướng 3 (`3`) | (8, 17) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 53 |
| 10-11 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 53 |
| 12 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 18)) | 53 |
| 13-14 | Di chuyển hướng 1 (`1`) | (10, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 53 |
| 15 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 53 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 53 |
| 18 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 53 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 53 |
| 21 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 53 |
| 22-23 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 53 |
| 24-26 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 53 |
| 27 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 53 |
| 28-51 | Chờ 24 bước (`-24`) | (17, 13) | (17, 13) | Dự kiến đứng yên tại (17, 13); hướng tới tọa độ (17, 13) | 53 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (6, 10) (ô=226)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(19, 18))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(19, 18))
- Mảng hành động đã gửi server: `[2, 1, 1, 2, 1, 1, 1, 2, 2, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 4, -10]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 53 |
| 2 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 53 |
| 3-4 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 53 |
| 5-7 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 53 |
| 8 | Di chuyển hướng 1 (`1`) | (9, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 53 |
| 9-10 | Di chuyển hướng 1 (`1`) | (10, 7) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 53 |
| 11-12 | Di chuyển hướng 1 (`1`) | (10, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 53 |
| 13 | Di chuyển hướng 2 (`2`) | (11, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 53 |
| 14-15 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 53 |
| 16 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 53 |
| 17-18 | Di chuyển hướng 3 (`3`) | (13, 6) | (14, 7) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 7)) | 53 |
| 19-20 | Di chuyển hướng 3 (`3`) | (14, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 53 |
| 21-22 | Di chuyển hướng 3 (`3`) | (14, 8) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 53 |
| 23-24 | Di chuyển hướng 3 (`3`) | (15, 9) | (15, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(15, 10)) | 53 |
| 25-26 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 53 |
| 27-28 | Di chuyển hướng 3 (`3`) | (16, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 53 |
| 29-30 | Di chuyển hướng 3 (`3`) | (17, 11) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 53 |
| 31 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 53 |
| 32-33 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 53 |
| 34-35 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 53 |
| 36-38 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 53 |
| 39 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 17)) | 53 |
| 40-41 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(19, 18)) | 53 |
| 42-51 | Chờ 10 bước (`-10`) | (19, 18) | (19, 18) | Dự kiến đứng yên tại (19, 18); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(19, 18)) | 53 |

