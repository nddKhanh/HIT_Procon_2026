# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 55
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 3 | #1 | #7 | (1, 1) | 51 | 55 |
| 3 | #4 | #6 | (13, 16) | 53 | 55 |
| 24 | #1 | #7 | (8, 2) | 42 | 55 |
| 29 | #0 | #6 | (22, 8) | 6 | 55 |
| 37 | #2 | #7 | (8, 2) | 1 | 55 |
| 41 | #5 | #6 | (24, 2) | 1 | 55 |
| 54 | #1 | #7 | (17, 5) | 33 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (23, 1) (ô=48)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 13)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 13)
- Mảng hành động đã gửi server: `[3, 3, 3, 4, 4, 4, 4, -16, 4, 5, 5, 0, 5, 4, 4, 5, 5, 4, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 14 |
| 2-3 | Di chuyển hướng 3 (`3`) | (23, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 13 |
| 4-5 | Di chuyển hướng 3 (`3`) | (24, 3) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 12 |
| 6-7 | Di chuyển hướng 4 (`4`) | (24, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 11 |
| 8-9 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 9 |
| 10-11 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 8 |
| 12-13 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 6 |
| 14-29 | Chờ 16 bước (`-16`) | (22, 8) | (22, 8) | Dự kiến đứng yên tại (22, 8); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 55 |
| 30-31 | Di chuyển hướng 4 (`4`) | (22, 8) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 54 |
| 32-34 | Di chuyển hướng 5 (`5`) | (22, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 52 |
| 35-36 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 51 |
| 37 | Di chuyển hướng 0 (`0`) | (20, 9) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 49 |
| 38-40 | Di chuyển hướng 5 (`5`) | (19, 8) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 47 |
| 41 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 45 |
| 42-43 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 44 |
| 44-46 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 42 |
| 47 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 40 |
| 48-49 | Di chuyển hướng 4 (`4`) | (15, 10) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 39 |
| 50-51 | Di chuyển hướng 4 (`4`) | (15, 11) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 38 |
| 52-53 | Di chuyển hướng 3 (`3`) | (14, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 37 |
| 54 | Chờ 1 bước (`-1`) | (15, 13) | (15, 13) | Dự kiến đứng yên tại (15, 13); hướng tới tọa độ (15, 13) | 37 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 2) (ô=51)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 5)
- Mảng hành động đã gửi server: `[0, 0, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 1, 2, 2, 3, 0, 0, 2, 2, 3, 3, 2, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 55 |
| 3-4 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 54 |
| 5-6 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 53 |
| 7-8 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 52 |
| 9-11 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 50 |
| 12-13 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 49 |
| 14-15 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 48 |
| 16 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 46 |
| 17-18 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 45 |
| 19-20 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 44 |
| 21-23 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 55 |
| 24-25 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 54 |
| 26-27 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 53 |
| 28-30 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 51 |
| 31 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 49 |
| 32-33 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 48 |
| 34 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 46 |
| 35-36 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 45 |
| 37-38 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 44 |
| 39-40 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 43 |
| 41-42 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 42 |
| 43-45 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 40 |
| 46-47 | Di chuyển hướng 3 (`3`) | (15, 1) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 39 |
| 48 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 37 |
| 49 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 35 |
| 50-51 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 34 |
| 52-53 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 55 |
| 54 | Chờ 1 bước (`-1`) | (17, 5) | (17, 5) | Dự kiến đứng yên tại (17, 5); hướng tới tọa độ (17, 5) | 55 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (13, 1) (ô=38)
- Nhiên liệu đầu ngày: 31
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 3)
- Mảng hành động đã gửi server: `[5, 4, 4, 4, 5, 5, 4, 4, 4, 4, 4, 0, 1, 1, 1, 2, 1, 1, 0, -1, 2, 2, 2, 2, 2, 3, 2, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 30 |
| 2 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 28 |
| 3-4 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 27 |
| 5 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 25 |
| 6 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 23 |
| 7-8 | Di chuyển hướng 5 (`5`) | (9, 4) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 22 |
| 9-11 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 20 |
| 12 | Di chuyển hướng 4 (`4`) | (8, 5) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 18 |
| 13-14 | Di chuyển hướng 4 (`4`) | (7, 6) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 17 |
| 15-17 | Di chuyển hướng 4 (`4`) | (7, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 15 |
| 18-20 | Di chuyển hướng 4 (`4`) | (6, 8) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 13 |
| 21-22 | Di chuyển hướng 0 (`0`) | (6, 9) | (5, 8) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(5, 8)) | 12 |
| 23-24 | Di chuyển hướng 1 (`1`) | (5, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 11 |
| 25 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 9 |
| 26-28 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 7 |
| 29-30 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 6 |
| 31 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 4 |
| 32-34 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 2 |
| 35-36 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 55 |
| 37 | Chờ 1 bước (`-1`) | (8, 2) | (8, 2) | Dự kiến đứng yên tại (8, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 55 |
| 38-39 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 54 |
| 40-42 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 52 |
| 43-45 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 50 |
| 46-47 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 49 |
| 48 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 47 |
| 49-50 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 46 |
| 51-52 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 45 |
| 53-54 | Chờ 2 bước (`-2`) | (15, 3) | (15, 3) | Dự kiến đứng yên tại (15, 3); hướng tới tọa độ (15, 3) | 45 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 19) (ô=488)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(12, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(12, 16)
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 0, 5, 5, 4, 5, 5, 5, 5, 5, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 47 |
| 2 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 45 |
| 3 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 43 |
| 4-6 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 41 |
| 7-8 | Di chuyển hướng 5 (`5`) | (9, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 40 |
| 9-10 | Di chuyển hướng 0 (`0`) | (8, 18) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 39 |
| 11-12 | Di chuyển hướng 5 (`5`) | (8, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 38 |
| 13-14 | Di chuyển hướng 5 (`5`) | (7, 17) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 37 |
| 15-17 | Di chuyển hướng 4 (`4`) | (6, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 35 |
| 18 | Di chuyển hướng 5 (`5`) | (5, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 33 |
| 19-20 | Di chuyển hướng 5 (`5`) | (4, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 32 |
| 21-22 | Di chuyển hướng 5 (`5`) | (3, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 31 |
| 23-24 | Di chuyển hướng 5 (`5`) | (2, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 30 |
| 25-26 | Di chuyển hướng 5 (`5`) | (1, 18) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 29 |
| 27-28 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 28 |
| 29-30 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 27 |
| 31-33 | Di chuyển hướng 2 (`2`) | (0, 16) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 25 |
| 34-35 | Di chuyển hướng 2 (`2`) | (1, 16) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 24 |
| 36-37 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 23 |
| 38 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 21 |
| 39-40 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 20 |
| 41-43 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 18 |
| 44 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 16 |
| 45-46 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 14 |
| 47-48 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 13 |
| 49-50 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 12 |
| 51-53 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 10 |
| 54 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 8 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (12, 16) (ô=412)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 20)
- Mảng hành động đã gửi server: `[2, 3, 4, 4, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 3, 2, 3, 4, 4, 4, 3, 5, 5, 5, 5, 5, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 55 |
| 3-4 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 54 |
| 5 | Di chuyển hướng 4 (`4`) | (14, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 52 |
| 6 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 50 |
| 7-8 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 49 |
| 9 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 47 |
| 10 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 45 |
| 11-13 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 43 |
| 14-15 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 42 |
| 16-17 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 41 |
| 18-19 | Di chuyển hướng 2 (`2`) | (16, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 40 |
| 20-21 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 39 |
| 22-24 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 37 |
| 25 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 35 |
| 26-27 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đến điểm hẹn tọa độ (20, 15) | 34 |
| 28-30 | Di chuyển hướng 3 (`3`) | (20, 15) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 32 |
| 31 | Di chuyển hướng 2 (`2`) | (20, 16) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 30 |
| 32-33 | Di chuyển hướng 3 (`3`) | (21, 16) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 29 |
| 34-35 | Di chuyển hướng 4 (`4`) | (22, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 28 |
| 36 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 26 |
| 37 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 24 |
| 38-39 | Di chuyển hướng 3 (`3`) | (20, 20) | (21, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(21, 21)) | 23 |
| 40-41 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 22 |
| 42 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 20 |
| 43-45 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 18 |
| 46-47 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 17 |
| 48-49 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 16 |
| 50-52 | Di chuyển hướng 5 (`5`) | (16, 21) | (15, 21) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 21)) | 14 |
| 53-54 | Di chuyển hướng 0 (`0`) | (15, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 13 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (20, 0) (ô=20)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(22, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(22, 7)
- Mảng hành động đã gửi server: `[2, 2, 3, 3, 2, -32, 4, 4, 3, 4, 4, 4, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 6 |
| 2-3 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 5 |
| 4 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 3 |
| 5-6 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 2 |
| 7-8 | Di chuyển hướng 2 (`2`) | (23, 2) | (24, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 1 |
| 9-40 | Chờ 32 bước (`-32`) | (24, 2) | (24, 2) | Dự kiến đứng yên tại (24, 2); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 55 |
| 41-42 | Di chuyển hướng 4 (`4`) | (24, 2) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 54 |
| 43-44 | Di chuyển hướng 4 (`4`) | (24, 3) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 53 |
| 45-46 | Di chuyển hướng 3 (`3`) | (23, 4) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 52 |
| 47-48 | Di chuyển hướng 4 (`4`) | (24, 5) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 50 |
| 49-50 | Di chuyển hướng 4 (`4`) | (23, 6) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 49 |
| 51-52 | Di chuyển hướng 4 (`4`) | (23, 7) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 47 |
| 53-54 | Di chuyển hướng 0 (`0`) | (22, 8) | (22, 7) | Dự kiến đến điểm hẹn tọa độ (22, 7) | 46 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (12, 16) (ô=412)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(24, 2))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(24, 2))
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 0, 1, 1, -14]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 55 |
| 3-4 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 55 |
| 5-7 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 55 |
| 8-9 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 55 |
| 10-11 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 55 |
| 12-13 | Di chuyển hướng 2 (`2`) | (16, 13) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 55 |
| 14-15 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 55 |
| 16-18 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 55 |
| 19-20 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 55 |
| 21 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 55 |
| 22 | Di chuyển hướng 2 (`2`) | (20, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 55 |
| 23 | Di chuyển hướng 1 (`1`) | (21, 11) | (21, 10) | Dự kiến đến điểm hẹn tọa độ (21, 10) | 55 |
| 24-25 | Di chuyển hướng 1 (`1`) | (21, 10) | (22, 9) | Dự kiến đến điểm hẹn tọa độ (22, 9) | 55 |
| 26-28 | Di chuyển hướng 1 (`1`) | (22, 9) | (22, 8) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(22, 8)) | 55 |
| 29-30 | Di chuyển hướng 1 (`1`) | (22, 8) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 55 |
| 31-32 | Di chuyển hướng 1 (`1`) | (23, 7) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 55 |
| 33-34 | Di chuyển hướng 1 (`1`) | (23, 6) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 55 |
| 35-36 | Di chuyển hướng 0 (`0`) | (24, 5) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 55 |
| 37-38 | Di chuyển hướng 1 (`1`) | (23, 4) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 55 |
| 39-40 | Di chuyển hướng 1 (`1`) | (24, 3) | (24, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 55 |
| 41-54 | Chờ 14 bước (`-14`) | (24, 2) | (24, 2) | Dự kiến đứng yên tại (24, 2); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (0, 0) (ô=0)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 5)
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 2, 2, 2, 2, -18, 3, 3, 2, 2, 2, 2, 2, 3, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 55 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 55 |
| 4-6 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 55 |
| 7-8 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 55 |
| 9-10 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 55 |
| 11 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 55 |
| 12-13 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 55 |
| 14-15 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 55 |
| 16-18 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 55 |
| 19-36 | Chờ 18 bước (`-18`) | (8, 2) | (8, 2) | Dự kiến đứng yên tại (8, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 55 |
| 37-38 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 55 |
| 39-40 | Di chuyển hướng 3 (`3`) | (9, 3) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 55 |
| 41-42 | Di chuyển hướng 2 (`2`) | (9, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 55 |
| 43 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 55 |
| 44 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 55 |
| 45 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 55 |
| 46-48 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 55 |
| 49 | Di chuyển hướng 3 (`3`) | (14, 4) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 55 |
| 50-52 | Di chuyển hướng 2 (`2`) | (15, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 55 |
| 53 | Di chuyển hướng 2 (`2`) | (16, 5) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 55 |
| 54 | Chờ 1 bước (`-1`) | (17, 5) | (17, 5) | Dự kiến đứng yên tại (17, 5); hướng tới tọa độ (17, 5) | 55 |

