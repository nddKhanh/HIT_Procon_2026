# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 47
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 26 | #5 | #7 | (9, 5) | 35 | 54 |
| 42 | #0 | #7 | (9, 5) | 25 | 54 |
| 46 | #2 | #7 | (9, 5) | 23 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 6) (ô=160)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 5)
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 5, 4, 1, 1, 0, 1, 2, 1, 2, 2, 2, 0, 1, 1, 3, 2, 3, 3, 3, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 53 |
| 2 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 51 |
| 3 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 49 |
| 4-5 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 48 |
| 6-7 | Di chuyển hướng 5 (`5`) | (1, 8) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 47 |
| 8-9 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 9)) | 46 |
| 10-11 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 45 |
| 12-13 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 44 |
| 14-16 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 42 |
| 17-18 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 41 |
| 19-20 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 40 |
| 21-22 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 39 |
| 23 | Di chuyển hướng 2 (`2`) | (2, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 37 |
| 24-25 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 36 |
| 26 | Di chuyển hướng 2 (`2`) | (4, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 34 |
| 27-28 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 33 |
| 29-30 | Di chuyển hướng 1 (`1`) | (5, 3) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 32 |
| 31-32 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 31 |
| 33-34 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 30 |
| 35-36 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 29 |
| 37-38 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 28 |
| 39 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 26 |
| 40-41 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 54 |
| 42-43 | Di chuyển hướng 2 (`2`) | (9, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 53 |
| 44-45 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 52 |
| 46 | Chờ 1 bước (`-1`) | (11, 5) | (11, 5) | Dự kiến đứng yên tại (11, 5); hướng tới tọa độ (11, 5) | 52 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (24, 17) (ô=466)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 14)
- Mảng hành động đã gửi server: `[1, 1, 1, 0, 0, 5, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 1, 1, 1, 0, 0, 1, 4, 4, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (24, 17) | (24, 16) | Dự kiến đến điểm hẹn tọa độ (24, 16) | 53 |
| 2-3 | Di chuyển hướng 1 (`1`) | (24, 16) | (25, 15) | Dự kiến đến điểm hẹn tọa độ (25, 15) | 52 |
| 4-6 | Di chuyển hướng 1 (`1`) | (25, 15) | (25, 14) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(25, 14)) | 50 |
| 7-8 | Di chuyển hướng 0 (`0`) | (25, 14) | (25, 13) | Dự kiến đến điểm hẹn tọa độ (25, 13) | 49 |
| 9 | Di chuyển hướng 0 (`0`) | (25, 13) | (24, 12) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 47 |
| 10-11 | Di chuyển hướng 5 (`5`) | (24, 12) | (23, 12) | Dự kiến đến điểm hẹn tọa độ (23, 12) | 46 |
| 12-13 | Di chuyển hướng 4 (`4`) | (23, 12) | (23, 13) | Dự kiến đến điểm hẹn tọa độ (23, 13) | 45 |
| 14-15 | Di chuyển hướng 4 (`4`) | (23, 13) | (22, 14) | Dự kiến đến điểm hẹn tọa độ (22, 14) | 44 |
| 16-17 | Di chuyển hướng 4 (`4`) | (22, 14) | (22, 15) | Dự kiến đến điểm hẹn tọa độ (22, 15) | 43 |
| 18-19 | Di chuyển hướng 4 (`4`) | (22, 15) | (21, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(21, 16)) | 42 |
| 20-21 | Di chuyển hướng 4 (`4`) | (21, 16) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 41 |
| 22 | Di chuyển hướng 4 (`4`) | (21, 17) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 39 |
| 23-24 | Di chuyển hướng 5 (`5`) | (20, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 38 |
| 25 | Di chuyển hướng 5 (`5`) | (19, 18) | (18, 18) | Dự kiến đến điểm hẹn tọa độ (18, 18) | 36 |
| 26-28 | Di chuyển hướng 5 (`5`) | (18, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 34 |
| 29 | Di chuyển hướng 5 (`5`) | (17, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 32 |
| 30-31 | Di chuyển hướng 5 (`5`) | (16, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 31 |
| 32-33 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 30 |
| 34 | Di chuyển hướng 1 (`1`) | (16, 17) | (16, 16) | Dự kiến đến điểm hẹn tọa độ (16, 16) | 28 |
| 35-37 | Di chuyển hướng 1 (`1`) | (16, 16) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 26 |
| 38 | Di chuyển hướng 0 (`0`) | (17, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 24 |
| 39-40 | Di chuyển hướng 0 (`0`) | (16, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 23 |
| 41 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 21 |
| 42-43 | Di chuyển hướng 4 (`4`) | (16, 12) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 20 |
| 44 | Di chuyển hướng 4 (`4`) | (16, 13) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 18 |
| 45-46 | Di chuyển hướng 5 (`5`) | (15, 14) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 17 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (21, 4) (ô=125)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=25, tọa độ=(9, 5))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=25, tọa độ=(9, 5))
- Mảng hành động đã gửi server: `[3, 2, 5, 5, 0, 0, 0, 0, 0, 5, 4, 4, 4, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (21, 4) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 53 |
| 2-3 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 52 |
| 4-5 | Di chuyển hướng 5 (`5`) | (23, 5) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 51 |
| 6-7 | Di chuyển hướng 5 (`5`) | (22, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 50 |
| 8 | Di chuyển hướng 0 (`0`) | (21, 5) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 48 |
| 9 | Di chuyển hướng 0 (`0`) | (20, 4) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 46 |
| 10-11 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 45 |
| 12-13 | Di chuyển hướng 0 (`0`) | (19, 2) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 44 |
| 14-16 | Di chuyển hướng 0 (`0`) | (19, 1) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 42 |
| 17-18 | Di chuyển hướng 5 (`5`) | (18, 0) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 41 |
| 19-20 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 40 |
| 21-22 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 39 |
| 23 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 37 |
| 24-25 | Di chuyển hướng 3 (`3`) | (16, 3) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 36 |
| 26-27 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 35 |
| 28-29 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 34 |
| 30-31 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 33 |
| 32 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 31 |
| 33-34 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 30 |
| 35 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 28 |
| 36-37 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 27 |
| 38-39 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 26 |
| 40-41 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 25 |
| 42-43 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 24 |
| 44-45 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 54 |
| 46 | Chờ 1 bước (`-1`) | (9, 5) | (9, 5) | Dự kiến đứng yên tại (9, 5); mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 54 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 15) (ô=390)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(20, 5))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(20, 5))
- Mảng hành động đã gửi server: `[1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 15) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 53 |
| 2-3 | Di chuyển hướng 1 (`1`) | (0, 14) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 52 |
| 4-5 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 13)) | 51 |
| 6-7 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 50 |
| 8 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 48 |
| 9-10 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 47 |
| 11-12 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 46 |
| 13 | Di chuyển hướng 2 (`2`) | (5, 11) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 44 |
| 14-16 | Di chuyển hướng 1 (`1`) | (6, 11) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 42 |
| 17 | Di chuyển hướng 1 (`1`) | (6, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 40 |
| 18-19 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 39 |
| 20-21 | Di chuyển hướng 1 (`1`) | (8, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 38 |
| 22-23 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 37 |
| 24-25 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 36 |
| 26-27 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 35 |
| 28-29 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 34 |
| 30-31 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 33 |
| 32 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 31 |
| 33-34 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 30 |
| 35 | Di chuyển hướng 1 (`1`) | (15, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 28 |
| 36-37 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 27 |
| 38-39 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 26 |
| 40-41 | Di chuyển hướng 2 (`2`) | (17, 5) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 25 |
| 42-43 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 24 |
| 44-46 | Di chuyển hướng 2 (`2`) | (19, 5) | (20, 5) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 5)) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (0, 16) (ô=416)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 18)
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 3, 2, 1, 1, 1, 1, 2, 2, 3, 1, 2, 1, 1, 0, 3, 3, 3, 2, 3, 2, 3, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 16) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 53 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 17) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 52 |
| 4 | Di chuyển hướng 3 (`3`) | (1, 18) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 50 |
| 5-6 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 49 |
| 7 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 47 |
| 8-9 | Di chuyển hướng 2 (`2`) | (3, 20) | (4, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 46 |
| 10-11 | Di chuyển hướng 1 (`1`) | (4, 20) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 45 |
| 12-13 | Di chuyển hướng 1 (`1`) | (5, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 44 |
| 14-15 | Di chuyển hướng 1 (`1`) | (5, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 43 |
| 16-18 | Di chuyển hướng 1 (`1`) | (6, 17) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 41 |
| 19-20 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 40 |
| 21-22 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 39 |
| 23 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 37 |
| 24-25 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 36 |
| 26 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 34 |
| 27 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 32 |
| 28-29 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 31 |
| 30 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 29 |
| 31-32 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 28 |
| 33 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 26 |
| 34-35 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 25 |
| 36-37 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 24 |
| 38 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 22 |
| 39-40 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 21 |
| 41-42 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 20 |
| 43-44 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 19 |
| 45-46 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 18 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (4, 0) (ô=4)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 8)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 3, 2, 2, 2, 2, 2, 3, 2, 3, 3, 3, 5, 5, 0, 5, 5, 5, 5, 4, 5, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 53 |
| 2-3 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 52 |
| 4 | Di chuyển hướng 5 (`5`) | (2, 0) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 50 |
| 5 | Di chuyển hướng 5 (`5`) | (1, 0) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 48 |
| 6-7 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 47 |
| 8-9 | Di chuyển hướng 2 (`2`) | (1, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 46 |
| 10-11 | Di chuyển hướng 2 (`2`) | (2, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 45 |
| 12-13 | Di chuyển hướng 2 (`2`) | (3, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 44 |
| 14 | Di chuyển hướng 2 (`2`) | (4, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 42 |
| 15-16 | Di chuyển hướng 2 (`2`) | (5, 1) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 41 |
| 17-18 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 40 |
| 19-20 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 39 |
| 21-22 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 38 |
| 23 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 36 |
| 24-25 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 54 |
| 26-27 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 53 |
| 28 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 51 |
| 29 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 49 |
| 30-31 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(5, 4)) | 48 |
| 32-33 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 47 |
| 34 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 45 |
| 35-36 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đến điểm hẹn tọa độ (2, 4) | 44 |
| 37 | Di chuyển hướng 4 (`4`) | (2, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 42 |
| 38-39 | Di chuyển hướng 5 (`5`) | (2, 5) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 41 |
| 40-41 | Di chuyển hướng 4 (`4`) | (1, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 40 |
| 42-43 | Di chuyển hướng 4 (`4`) | (0, 6) | (0, 7) | Dự kiến đến điểm hẹn tọa độ (0, 7) | 39 |
| 44-46 | Di chuyển hướng 3 (`3`) | (0, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 37 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (12, 18) (ô=480)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(21, 16))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(21, 16))
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 5, 5, 2, 3, 3, 3, 3, 2, 1, 1, 0, 1, 2, 1, 1, 2, 1, 1, 2, 3, 3, 2, 2, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 53 |
| 2 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 51 |
| 3-4 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 50 |
| 5 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 48 |
| 6 | Di chuyển hướng 5 (`5`) | (9, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 46 |
| 7 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 44 |
| 8-9 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 43 |
| 10 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 41 |
| 11-12 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 40 |
| 13-14 | Di chuyển hướng 3 (`3`) | (9, 18) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 39 |
| 15-16 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 38 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 37 |
| 19-20 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 36 |
| 21-22 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 35 |
| 23-24 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 34 |
| 25 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 32 |
| 26-27 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 31 |
| 28 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 29 |
| 29-30 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 28 |
| 31 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 26 |
| 32-33 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 25 |
| 34 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 23 |
| 35-36 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 22 |
| 37-39 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 20 |
| 40-41 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 19 |
| 42 | Di chuyển hướng 2 (`2`) | (18, 14) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 17 |
| 43-44 | Di chuyển hướng 2 (`2`) | (19, 14) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 16 |
| 45 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 14 |
| 46 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(21, 16)) | 12 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (16, 4) (ô=120)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #25 (thương hiệu=25, tọa độ=(9, 5))
- Địa điểm đích kế hoạch: Spot #25 (thương hiệu=25, tọa độ=(9, 5))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 5, 5, 0, 0, 0, 5, 5, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (16, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 54 |
| 2-3 | Di chuyển hướng 4 (`4`) | (16, 5) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 54 |
| 4-5 | Di chuyển hướng 4 (`4`) | (15, 6) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 54 |
| 6 | Di chuyển hướng 4 (`4`) | (15, 7) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 54 |
| 7-8 | Di chuyển hướng 5 (`5`) | (14, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 54 |
| 9 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 54 |
| 10-11 | Di chuyển hướng 0 (`0`) | (12, 8) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 54 |
| 12-13 | Di chuyển hướng 0 (`0`) | (12, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 54 |
| 14-15 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 54 |
| 16-17 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 54 |
| 18-19 | Di chuyển hướng 5 (`5`) | (10, 5) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 54 |
| 20-46 | Chờ 27 bước (`-27`) | (9, 5) | (9, 5) | Dự kiến đứng yên tại (9, 5); mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 54 |

