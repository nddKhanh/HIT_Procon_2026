# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 59
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #1 | #6 | (6, 25) | 58 | 60 |
| 5 | #1 | #6 | (5, 25) | 59 | 60 |
| 6 | #1 | #6 | (4, 25) | 58 | 60 |
| 9 | #1 | #6 | (2, 24) | 57 | 60 |
| 12 | #3 | #6 | (2, 24) | 3 | 60 |
| 15 | #3 | #6 | (3, 24) | 59 | 60 |
| 17 | #3 | #6 | (4, 23) | 59 | 60 |
| 20 | #3 | #6 | (5, 22) | 57 | 60 |
| 22 | #3 | #6 | (6, 22) | 59 | 60 |
| 31 | #3 | #6 | (11, 19) | 51 | 60 |
| 35 | #2 | #7 | (17, 9) | 0 | 60 |
| 35 | #3 | #6 | (12, 16) | 55 | 60 |
| 38 | #3 | #6 | (14, 15) | 57 | 60 |
| 52 | #1 | #6 | (14, 15) | 28 | 60 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (10, 0) (ô=10)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 6)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 5, 3, 4, 3, 2, 3, 3, 3, 2, 3, 3, 4, 5, 5, 5, 4, 1, 1, 1, 1, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 59 |
| 2-3 | Di chuyển hướng 5 (`5`) | (9, 0) | (8, 0) | Dự kiến đến điểm hẹn tọa độ (8, 0) | 58 |
| 4-5 | Di chuyển hướng 5 (`5`) | (8, 0) | (7, 0) | Dự kiến đến điểm hẹn tọa độ (7, 0) | 57 |
| 6-7 | Di chuyển hướng 5 (`5`) | (7, 0) | (6, 0) | Dự kiến đến điểm hẹn tọa độ (6, 0) | 56 |
| 8-9 | Di chuyển hướng 5 (`5`) | (6, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 55 |
| 10-11 | Di chuyển hướng 5 (`5`) | (5, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 54 |
| 12-13 | Di chuyển hướng 5 (`5`) | (4, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 53 |
| 14-16 | Di chuyển hướng 5 (`5`) | (3, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 51 |
| 17-18 | Di chuyển hướng 5 (`5`) | (2, 0) | (1, 0) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(1, 0)) | 50 |
| 19-20 | Di chuyển hướng 4 (`4`) | (1, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 49 |
| 21-22 | Di chuyển hướng 5 (`5`) | (1, 1) | (0, 1) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 1)) | 48 |
| 23-24 | Di chuyển hướng 3 (`3`) | (0, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 47 |
| 25-26 | Di chuyển hướng 4 (`4`) | (0, 2) | (0, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(0, 3)) | 46 |
| 27-28 | Di chuyển hướng 3 (`3`) | (0, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 45 |
| 29-30 | Di chuyển hướng 2 (`2`) | (0, 4) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 44 |
| 31 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 42 |
| 32-33 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 41 |
| 34 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 39 |
| 35-36 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 38 |
| 37 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 36 |
| 38-40 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 9)) | 34 |
| 41-42 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(4, 10)) | 33 |
| 43-44 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 32 |
| 45 | Di chuyển hướng 5 (`5`) | (3, 10) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 30 |
| 46-47 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 29 |
| 48 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 11)) | 27 |
| 49-50 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 26 |
| 51 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 24 |
| 52-53 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 23 |
| 54-55 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 22 |
| 56-57 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 21 |
| 58 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 19 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (7, 25) (ô=657)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 19)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 2, 2, 2, 2, 3, 2, 2, 2, 2, 2, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 2, 2, 2, 3, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (7, 25) | (6, 25) | Dự kiến đến điểm hẹn tọa độ (6, 25) | 60 |
| 3-4 | Di chuyển hướng 5 (`5`) | (6, 25) | (5, 25) | Dự kiến đến điểm hẹn tọa độ (5, 25) | 60 |
| 5 | Di chuyển hướng 5 (`5`) | (5, 25) | (4, 25) | Dự kiến đến điểm hẹn tọa độ (4, 25) | 60 |
| 6 | Di chuyển hướng 5 (`5`) | (4, 25) | (3, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 25)) | 58 |
| 7-8 | Di chuyển hướng 0 (`0`) | (3, 25) | (2, 24) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 24)) | 60 |
| 9-10 | Di chuyển hướng 2 (`2`) | (2, 24) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 59 |
| 11-12 | Di chuyển hướng 2 (`2`) | (3, 24) | (4, 24) | Dự kiến đến điểm hẹn tọa độ (4, 24) | 58 |
| 13-14 | Di chuyển hướng 2 (`2`) | (4, 24) | (5, 24) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(5, 24)) | 57 |
| 15-16 | Di chuyển hướng 2 (`2`) | (5, 24) | (6, 24) | Dự kiến đến điểm hẹn tọa độ (6, 24) | 56 |
| 17 | Di chuyển hướng 3 (`3`) | (6, 24) | (7, 25) | Dự kiến đến điểm hẹn tọa độ (7, 25) | 54 |
| 18-20 | Di chuyển hướng 2 (`2`) | (7, 25) | (8, 25) | Dự kiến đến điểm hẹn tọa độ (8, 25) | 52 |
| 21 | Di chuyển hướng 2 (`2`) | (8, 25) | (9, 25) | Dự kiến đến điểm hẹn tọa độ (9, 25) | 50 |
| 22-24 | Di chuyển hướng 2 (`2`) | (9, 25) | (10, 25) | Dự kiến đến điểm hẹn tọa độ (10, 25) | 48 |
| 25-26 | Di chuyển hướng 2 (`2`) | (10, 25) | (11, 25) | Dự kiến đến điểm hẹn tọa độ (11, 25) | 47 |
| 27-28 | Di chuyển hướng 2 (`2`) | (11, 25) | (12, 25) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(12, 25)) | 46 |
| 29-30 | Di chuyển hướng 1 (`1`) | (12, 25) | (12, 24) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(12, 24)) | 45 |
| 31-32 | Di chuyển hướng 0 (`0`) | (12, 24) | (12, 23) | Dự kiến đến điểm hẹn tọa độ (12, 23) | 44 |
| 33-35 | Di chuyển hướng 0 (`0`) | (12, 23) | (11, 22) | Dự kiến đến điểm hẹn tọa độ (11, 22) | 42 |
| 36-37 | Di chuyển hướng 1 (`1`) | (11, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 41 |
| 38-39 | Di chuyển hướng 0 (`0`) | (12, 21) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 40 |
| 40 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 38 |
| 41-42 | Di chuyển hướng 0 (`0`) | (12, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 37 |
| 43 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 35 |
| 44 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 33 |
| 45-46 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 15)) | 32 |
| 47-48 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 31 |
| 49-50 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 30 |
| 51 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 60 |
| 52-54 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 58 |
| 55 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 56 |
| 56 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 54 |
| 57-58 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 53 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (22, 9) (ô=256)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 5)
- Mảng hành động đã gửi server: `[2, 2, 1, 2, 5, 5, 5, 4, 5, 5, 5, 5, 5, -12, 1, 0, 0, 0, 0, 1, 1, 1, 4, 4, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (22, 9) | (23, 9) | Dự kiến đến điểm hẹn tọa độ (23, 9) | 16 |
| 2 | Di chuyển hướng 2 (`2`) | (23, 9) | (24, 9) | Dự kiến đến điểm hẹn tọa độ (24, 9) | 14 |
| 3-4 | Di chuyển hướng 1 (`1`) | (24, 9) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 13 |
| 5 | Di chuyển hướng 2 (`2`) | (24, 8) | (25, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(25, 8)) | 11 |
| 6-7 | Di chuyển hướng 5 (`5`) | (25, 8) | (24, 8) | Dự kiến đến điểm hẹn tọa độ (24, 8) | 10 |
| 8 | Di chuyển hướng 5 (`5`) | (24, 8) | (23, 8) | Dự kiến đến điểm hẹn tọa độ (23, 8) | 8 |
| 9-10 | Di chuyển hướng 5 (`5`) | (23, 8) | (22, 8) | Dự kiến đến điểm hẹn tọa độ (22, 8) | 7 |
| 11-12 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 6 |
| 13-14 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 5 |
| 15-16 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 4 |
| 17-19 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 2 |
| 20-21 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 1 |
| 22-23 | Di chuyển hướng 5 (`5`) | (18, 9) | (17, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 0 |
| 24-35 | Chờ 12 bước (`-12`) | (17, 9) | (17, 9) | Dự kiến đứng yên tại (17, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |
| 36-37 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 59 |
| 38-39 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 58 |
| 40 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 56 |
| 41 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 54 |
| 42-43 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 53 |
| 44-45 | Di chuyển hướng 1 (`1`) | (15, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(16, 3)) | 52 |
| 46-47 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 51 |
| 48-49 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(17, 1)) | 50 |
| 50-51 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 49 |
| 52-53 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(16, 3)) | 48 |
| 54-55 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 47 |
| 56-57 | Di chuyển hướng 4 (`4`) | (15, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 46 |
| 58 | Chờ 1 bước (`-1`) | (15, 5) | (15, 5) | Dự kiến đứng yên tại (15, 5); hướng tới tọa độ (15, 5) | 46 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (8, 21) (ô=554)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(17, 24))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(17, 24))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 4, 5, 5, 0, -1, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 3, 3, 3, 3, 3, 3, 4, 3, 3, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (8, 21) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 13 |
| 1 | Di chuyển hướng 5 (`5`) | (7, 22) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 11 |
| 2-3 | Di chuyển hướng 4 (`4`) | (6, 22) | (6, 23) | Dự kiến đến điểm hẹn tọa độ (6, 23) | 10 |
| 4-5 | Di chuyển hướng 4 (`4`) | (6, 23) | (5, 24) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(5, 24)) | 9 |
| 6-7 | Di chuyển hướng 4 (`4`) | (5, 24) | (5, 25) | Dự kiến đến điểm hẹn tọa độ (5, 25) | 8 |
| 8 | Di chuyển hướng 5 (`5`) | (5, 25) | (4, 25) | Dự kiến đến điểm hẹn tọa độ (4, 25) | 6 |
| 9 | Di chuyển hướng 5 (`5`) | (4, 25) | (3, 25) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(3, 25)) | 4 |
| 10-11 | Di chuyển hướng 0 (`0`) | (3, 25) | (2, 24) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 24)) | 60 |
| 12 | Chờ 1 bước (`-1`) | (2, 24) | (2, 24) | Dự kiến đứng yên tại (2, 24); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 24)) | 60 |
| 13-14 | Di chuyển hướng 2 (`2`) | (2, 24) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 60 |
| 15-16 | Di chuyển hướng 1 (`1`) | (3, 24) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 60 |
| 17-18 | Di chuyển hướng 1 (`1`) | (4, 23) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 59 |
| 19 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 60 |
| 20-21 | Di chuyển hướng 2 (`2`) | (5, 22) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 60 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 59 |
| 24 | Di chuyển hướng 1 (`1`) | (7, 22) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 57 |
| 25 | Di chuyển hướng 2 (`2`) | (8, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 55 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 21) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 54 |
| 28-29 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 53 |
| 30 | Di chuyển hướng 1 (`1`) | (10, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 60 |
| 31-32 | Di chuyển hướng 1 (`1`) | (11, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 59 |
| 33 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 57 |
| 34 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 60 |
| 35-36 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 59 |
| 37 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 60 |
| 38-40 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 58 |
| 41 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 56 |
| 42 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 54 |
| 43-44 | Di chuyển hướng 3 (`3`) | (15, 18) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 53 |
| 45-47 | Di chuyển hướng 3 (`3`) | (16, 19) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 51 |
| 48-49 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 50 |
| 50 | Di chuyển hướng 4 (`4`) | (17, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 48 |
| 51-52 | Di chuyển hướng 3 (`3`) | (16, 22) | (17, 23) | Dự kiến đến điểm hẹn tọa độ (17, 23) | 47 |
| 53-54 | Di chuyển hướng 3 (`3`) | (17, 23) | (17, 24) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(17, 24)) | 46 |
| 55-56 | Di chuyển hướng 5 (`5`) | (17, 24) | (16, 24) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 24)) | 45 |
| 57-58 | Di chuyển hướng 2 (`2`) | (16, 24) | (17, 24) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(17, 24)) | 44 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 18) (ô=488)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(22, 18))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(22, 18))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 3, 0, 5, 0, 0, 1, 1, 1, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (20, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 15 |
| 1-2 | Di chuyển hướng 3 (`3`) | (21, 19) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 14 |
| 3-4 | Di chuyển hướng 3 (`3`) | (21, 20) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 13 |
| 5-7 | Di chuyển hướng 3 (`3`) | (22, 21) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 11 |
| 8-9 | Di chuyển hướng 3 (`3`) | (22, 22) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 10 |
| 10-12 | Di chuyển hướng 3 (`3`) | (23, 23) | (23, 24) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(23, 24)) | 8 |
| 13-14 | Di chuyển hướng 0 (`0`) | (23, 24) | (23, 23) | Dự kiến đến điểm hẹn tọa độ (23, 23) | 7 |
| 15-17 | Di chuyển hướng 5 (`5`) | (23, 23) | (22, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(22, 23)) | 5 |
| 18-19 | Di chuyển hướng 0 (`0`) | (22, 23) | (21, 22) | Dự kiến đến điểm hẹn tọa độ (21, 22) | 4 |
| 20-21 | Di chuyển hướng 0 (`0`) | (21, 22) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 3 |
| 22-23 | Di chuyển hướng 1 (`1`) | (21, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 2 |
| 24-25 | Di chuyển hướng 1 (`1`) | (21, 20) | (22, 19) | Dự kiến đến điểm hẹn tọa độ (22, 19) | 1 |
| 26-27 | Di chuyển hướng 1 (`1`) | (22, 19) | (22, 18) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(22, 18)) | 0 |
| 28-58 | Chờ 31 bước (`-31`) | (22, 18) | (22, 18) | Dự kiến đứng yên tại (22, 18); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(22, 18)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (12, 3) (ô=90)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 0)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 0)
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 4, 4, 5, 4, 5, 5, 4, 2, 2, 2, 2, 2, 2, 3, 2, 3, 0, 1, 1, 1, 1, 0, 1, 0, 0, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 54 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 53 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 52 |
| 6-7 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 51 |
| 8-9 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 50 |
| 10-11 | Di chuyển hướng 4 (`4`) | (7, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 49 |
| 12-13 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 48 |
| 14-15 | Di chuyển hướng 4 (`4`) | (6, 5) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 47 |
| 16-17 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 46 |
| 18 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 44 |
| 19 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 7)) | 42 |
| 20-21 | Di chuyển hướng 2 (`2`) | (3, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 41 |
| 22 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 39 |
| 23-24 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 38 |
| 25-26 | Di chuyển hướng 2 (`2`) | (6, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 37 |
| 27-28 | Di chuyển hướng 2 (`2`) | (7, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 36 |
| 29-30 | Di chuyển hướng 2 (`2`) | (8, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 35 |
| 31-33 | Di chuyển hướng 3 (`3`) | (9, 7) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 33 |
| 34 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 31 |
| 35-36 | Di chuyển hướng 3 (`3`) | (10, 8) | (11, 9) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(11, 9)) | 30 |
| 37-38 | Di chuyển hướng 0 (`0`) | (11, 9) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 29 |
| 39-40 | Di chuyển hướng 1 (`1`) | (10, 8) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 28 |
| 41-42 | Di chuyển hướng 1 (`1`) | (11, 7) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 27 |
| 43-44 | Di chuyển hướng 1 (`1`) | (11, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 26 |
| 45-46 | Di chuyển hướng 1 (`1`) | (12, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 25 |
| 47-48 | Di chuyển hướng 0 (`0`) | (12, 4) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 24 |
| 49-50 | Di chuyển hướng 1 (`1`) | (12, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(12, 2)) | 23 |
| 51-52 | Di chuyển hướng 0 (`0`) | (12, 2) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 22 |
| 53-54 | Di chuyển hướng 0 (`0`) | (12, 1) | (11, 0) | Dự kiến đến điểm hẹn tọa độ (11, 0) | 21 |
| 55 | Di chuyển hướng 5 (`5`) | (11, 0) | (10, 0) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(10, 0)) | 19 |
| 56-57 | Di chuyển hướng 5 (`5`) | (10, 0) | (9, 0) | Dự kiến đến điểm hẹn tọa độ (9, 0) | 18 |
| 58 | Chờ 1 bước (`-1`) | (9, 0) | (9, 0) | Dự kiến đứng yên tại (9, 0); hướng tới tọa độ (9, 0) | 18 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 25) (ô=657)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 15)
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 5, -3, 2, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, -22]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (7, 25) | (6, 25) | Dự kiến đến điểm hẹn tọa độ (6, 25) | 60 |
| 3-4 | Di chuyển hướng 5 (`5`) | (6, 25) | (5, 25) | Dự kiến đến điểm hẹn tọa độ (5, 25) | 60 |
| 5 | Di chuyển hướng 5 (`5`) | (5, 25) | (4, 25) | Dự kiến đến điểm hẹn tọa độ (4, 25) | 60 |
| 6 | Di chuyển hướng 0 (`0`) | (4, 25) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 60 |
| 7-8 | Di chuyển hướng 5 (`5`) | (3, 24) | (2, 24) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 24)) | 60 |
| 9-11 | Chờ 3 bước (`-3`) | (2, 24) | (2, 24) | Dự kiến đứng yên tại (2, 24); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 24)) | 60 |
| 12-13 | Di chuyển hướng 2 (`2`) | (2, 24) | (3, 24) | Dự kiến đến điểm hẹn tọa độ (3, 24) | 60 |
| 14-15 | Di chuyển hướng 1 (`1`) | (3, 24) | (4, 23) | Dự kiến đến điểm hẹn tọa độ (4, 23) | 60 |
| 16-17 | Di chuyển hướng 1 (`1`) | (4, 23) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 60 |
| 18 | Di chuyển hướng 2 (`2`) | (4, 22) | (5, 22) | Dự kiến đến điểm hẹn tọa độ (5, 22) | 60 |
| 19-20 | Di chuyển hướng 2 (`2`) | (5, 22) | (6, 22) | Dự kiến đến điểm hẹn tọa độ (6, 22) | 60 |
| 21-22 | Di chuyển hướng 2 (`2`) | (6, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 60 |
| 23 | Di chuyển hướng 1 (`1`) | (7, 22) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 60 |
| 24 | Di chuyển hướng 1 (`1`) | (8, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 60 |
| 25 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 60 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 60 |
| 28-29 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 60 |
| 30-31 | Di chuyển hướng 1 (`1`) | (11, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 60 |
| 32 | Di chuyển hướng 1 (`1`) | (11, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 60 |
| 33 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 60 |
| 34-35 | Di chuyển hướng 1 (`1`) | (12, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 60 |
| 36 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 60 |
| 37-58 | Chờ 22 bước (`-22`) | (14, 15) | (14, 15) | Dự kiến đứng yên tại (14, 15); hướng tới tọa độ (14, 15) | 60 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (10, 0) (ô=10)
- Nhiên liệu đầu ngày: 60
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(17, 9))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(17, 9))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 3, 4, 3, 4, 3, 4, 3, 2, 2, 1, 1, 2, 1, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (10, 0) | (11, 1) | Dự kiến đến điểm hẹn tọa độ (11, 1) | 60 |
| 2-4 | Di chuyển hướng 3 (`3`) | (11, 1) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 60 |
| 5-6 | Di chuyển hướng 3 (`3`) | (11, 2) | (12, 3) | Dự kiến đến điểm hẹn tọa độ (12, 3) | 60 |
| 7-8 | Di chuyển hướng 3 (`3`) | (12, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 60 |
| 9-10 | Di chuyển hướng 4 (`4`) | (12, 4) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 60 |
| 11-12 | Di chuyển hướng 3 (`3`) | (12, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 60 |
| 13-14 | Di chuyển hướng 4 (`4`) | (12, 6) | (12, 7) | Dự kiến đến điểm hẹn tọa độ (12, 7) | 60 |
| 15-16 | Di chuyển hướng 3 (`3`) | (12, 7) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 60 |
| 17-18 | Di chuyển hướng 4 (`4`) | (12, 8) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 60 |
| 19 | Di chuyển hướng 3 (`3`) | (12, 9) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 60 |
| 20-22 | Di chuyển hướng 4 (`4`) | (12, 10) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 60 |
| 23-24 | Di chuyển hướng 3 (`3`) | (12, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 60 |
| 25-26 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 60 |
| 27 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 60 |
| 28 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 60 |
| 29-30 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 60 |
| 31-32 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 60 |
| 33-34 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |
| 35-58 | Chờ 24 bước (`-24`) | (17, 9) | (17, 9) | Dự kiến đứng yên tại (17, 9); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(17, 9)) | 60 |

