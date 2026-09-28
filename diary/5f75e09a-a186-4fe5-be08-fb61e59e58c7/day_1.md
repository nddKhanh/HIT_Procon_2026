# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 53
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #0 | #5 | (5, 13) | 56 | 57 |
| 4 | #0 | #5 | (6, 13) | 56 | 57 |
| 5 | #0 | #5 | (7, 13) | 55 | 57 |
| 33 | #2 | #4 | (12, 20) | 9 | 57 |
| 36 | #3 | #5 | (19, 1) | 0 | 57 |
| 48 | #2 | #4 | (16, 21) | 46 | 57 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (4, 13) (ô=342)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 16)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 3, 3, 3, 3, 2, 2, 3, 3, 2, 1, 1, 1, 1, 1, 1, 1, 3, 3, 2, 3, 2, 2, 2, 2, 1, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 57 |
| 2-3 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 57 |
| 4 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 57 |
| 5 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 55 |
| 6-7 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(8, 15)) | 54 |
| 8-9 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 53 |
| 10-11 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 52 |
| 12-13 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 51 |
| 14 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 49 |
| 15-16 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 48 |
| 17-18 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 19)) | 47 |
| 19-20 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 46 |
| 21-22 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 45 |
| 23 | Di chuyển hướng 1 (`1`) | (13, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 43 |
| 24-25 | Di chuyển hướng 1 (`1`) | (14, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 42 |
| 26-27 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 41 |
| 28-29 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 40 |
| 30-31 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 39 |
| 32 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 37 |
| 33-35 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(17, 13)) | 35 |
| 36-37 | Di chuyển hướng 3 (`3`) | (17, 13) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 34 |
| 38 | Di chuyển hướng 3 (`3`) | (17, 14) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 32 |
| 39 | Di chuyển hướng 2 (`2`) | (18, 15) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 30 |
| 40-41 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 29 |
| 42-43 | Di chuyển hướng 2 (`2`) | (19, 16) | (20, 16) | Dự kiến đến điểm hẹn tọa độ (20, 16) | 28 |
| 44-45 | Di chuyển hướng 2 (`2`) | (20, 16) | (21, 16) | Dự kiến đến điểm hẹn tọa độ (21, 16) | 27 |
| 46-47 | Di chuyển hướng 2 (`2`) | (21, 16) | (22, 16) | Dự kiến đến điểm hẹn tọa độ (22, 16) | 26 |
| 48-49 | Di chuyển hướng 2 (`2`) | (22, 16) | (23, 16) | Dự kiến đến điểm hẹn tọa độ (23, 16) | 25 |
| 50 | Di chuyển hướng 1 (`1`) | (23, 16) | (24, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(24, 15)) | 23 |
| 51-52 | Di chuyển hướng 4 (`4`) | (24, 15) | (23, 16) | Dự kiến đến điểm hẹn tọa độ (23, 16) | 22 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 4) (ô=105)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(2, 1))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(2, 1))
- Mảng hành động đã gửi server: `[4, 3, 4, 3, 4, 4, 3, 2, 2, 1, 1, 1, 1, 2, 1, 1, 0, 1, 2, 1, 1, 1, 4, 5, 5, 5, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (1, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 56 |
| 2-3 | Di chuyển hướng 3 (`3`) | (1, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 55 |
| 4 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 53 |
| 5-6 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 52 |
| 7-8 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 51 |
| 9-10 | Di chuyển hướng 4 (`4`) | (1, 9) | (0, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(0, 10)) | 50 |
| 11-12 | Di chuyển hướng 3 (`3`) | (0, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(1, 11)) | 49 |
| 13-14 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 48 |
| 15 | Di chuyển hướng 2 (`2`) | (2, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 46 |
| 16-17 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 45 |
| 18-19 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 44 |
| 20 | Di chuyển hướng 1 (`1`) | (4, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 42 |
| 21-22 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 41 |
| 23-24 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 40 |
| 25 | Di chuyển hướng 1 (`1`) | (6, 7) | (6, 6) | Dự kiến đến điểm hẹn tọa độ (6, 6) | 38 |
| 26 | Di chuyển hướng 1 (`1`) | (6, 6) | (7, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 5)) | 36 |
| 27-28 | Di chuyển hướng 0 (`0`) | (7, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 35 |
| 29-30 | Di chuyển hướng 1 (`1`) | (6, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(7, 3)) | 34 |
| 31-32 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 33 |
| 33-34 | Di chuyển hướng 1 (`1`) | (8, 3) | (8, 2) | Dự kiến đến điểm hẹn tọa độ (8, 2) | 32 |
| 35-36 | Di chuyển hướng 1 (`1`) | (8, 2) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 31 |
| 37-38 | Di chuyển hướng 1 (`1`) | (9, 1) | (9, 0) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 0)) | 30 |
| 39-40 | Di chuyển hướng 4 (`4`) | (9, 0) | (9, 1) | Dự kiến đến điểm hẹn tọa độ (9, 1) | 29 |
| 41-42 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến đến điểm hẹn tọa độ (8, 1) | 28 |
| 43 | Di chuyển hướng 5 (`5`) | (8, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 26 |
| 44-45 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 25 |
| 46-47 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 24 |
| 48 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 22 |
| 49 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 20 |
| 50-51 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 19 |
| 52 | Chờ 1 bước (`-1`) | (2, 1) | (2, 1) | Dự kiến đứng yên tại (2, 1); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 1)) | 19 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 21) (ô=549)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(16, 21))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(16, 21))
- Mảng hành động đã gửi server: `[2, 2, 2, 0, 0, 0, 2, 3, 3, 3, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 3, 5, 5, -4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (3, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 27 |
| 2-3 | Di chuyển hướng 2 (`2`) | (4, 21) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 26 |
| 4-6 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 24 |
| 7-8 | Di chuyển hướng 0 (`0`) | (6, 21) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 23 |
| 9-11 | Di chuyển hướng 0 (`0`) | (5, 20) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 21 |
| 12-13 | Di chuyển hướng 0 (`0`) | (5, 19) | (4, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 18)) | 20 |
| 14-15 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 19 |
| 16-17 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 18 |
| 18-19 | Di chuyển hướng 3 (`3`) | (6, 19) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 17 |
| 20-21 | Di chuyển hướng 3 (`3`) | (6, 20) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 16 |
| 22-23 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 15 |
| 24-25 | Di chuyển hướng 2 (`2`) | (8, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 14 |
| 26 | Di chuyển hướng 2 (`2`) | (9, 21) | (10, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(10, 21)) | 12 |
| 27-28 | Di chuyển hướng 2 (`2`) | (10, 21) | (11, 21) | Dự kiến đến điểm hẹn tọa độ (11, 21) | 11 |
| 29-30 | Di chuyển hướng 2 (`2`) | (11, 21) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 10 |
| 31-32 | Di chuyển hướng 1 (`1`) | (12, 21) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 57 |
| 33-34 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 56 |
| 35 | Di chuyển hướng 2 (`2`) | (13, 20) | (14, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(14, 20)) | 54 |
| 36-37 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 53 |
| 38-39 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 52 |
| 40 | Di chuyển hướng 2 (`2`) | (16, 20) | (17, 20) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 20)) | 50 |
| 41-42 | Di chuyển hướng 3 (`3`) | (17, 20) | (18, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 21)) | 49 |
| 43-44 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 48 |
| 45-47 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 21)) | 57 |
| 48-51 | Chờ 4 bước (`-4`) | (16, 21) | (16, 21) | Dự kiến đứng yên tại (16, 21); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 21)) | 57 |
| 52 | Chờ 1 bước (`-1`) | (16, 21) | (16, 21) | Dự kiến đứng yên tại (16, 21); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 21)) | 57 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (20, 11) (ô=306)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(18, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(18, 9)
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 5, 5, 2, 1, 1, 1, 0, 5, 0, 0, 1, 2, 1, 2, 2, -2, 3, 4, 3, 3, 4, 4, 3, 4, 5, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 21 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 20 |
| 4-5 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 19 |
| 6-7 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 18 |
| 8 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 16 |
| 9-10 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 9)) | 15 |
| 11-12 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 14 |
| 13-14 | Di chuyển hướng 1 (`1`) | (16, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 13 |
| 15-16 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 12 |
| 17-18 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(17, 6)) | 11 |
| 19-20 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 10 |
| 21-22 | Di chuyển hướng 5 (`5`) | (17, 5) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 9 |
| 23-24 | Di chuyển hướng 0 (`0`) | (16, 5) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 8 |
| 25 | Di chuyển hướng 0 (`0`) | (15, 4) | (15, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(15, 3)) | 6 |
| 26-27 | Di chuyển hướng 1 (`1`) | (15, 3) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 5 |
| 28 | Di chuyển hướng 2 (`2`) | (15, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 3 |
| 29-30 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 2 |
| 31-32 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 1 |
| 33-34 | Di chuyển hướng 2 (`2`) | (18, 1) | (19, 1) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=0, tọa độ=(19, 1)) | 0 |
| 35-36 | Chờ 2 bước (`-2`) | (19, 1) | (19, 1) | Dự kiến đứng yên tại (19, 1); mục tiêu Spot #24 (thương hiệu=0, tọa độ=(19, 1)) | 57 |
| 37-38 | Di chuyển hướng 3 (`3`) | (19, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 56 |
| 39 | Di chuyển hướng 4 (`4`) | (19, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 54 |
| 40-41 | Di chuyển hướng 3 (`3`) | (19, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 53 |
| 42 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 51 |
| 43-44 | Di chuyển hướng 4 (`4`) | (20, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 50 |
| 45 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 48 |
| 46 | Di chuyển hướng 3 (`3`) | (19, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 46 |
| 47-48 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=1, tọa độ=(19, 9)) | 45 |
| 49-50 | Di chuyển hướng 5 (`5`) | (19, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 44 |
| 51-52 | Chờ 2 bước (`-2`) | (18, 9) | (18, 9) | Dự kiến đứng yên tại (18, 9); hướng tới tọa độ (18, 9) | 44 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (1, 4) (ô=105)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(16, 21))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(16, 21))
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 2, 2, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 2, 2, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 57 |
| 2-3 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 57 |
| 4-5 | Di chuyển hướng 3 (`3`) | (2, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 57 |
| 6-7 | Di chuyển hướng 3 (`3`) | (3, 7) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 57 |
| 8-9 | Di chuyển hướng 3 (`3`) | (3, 8) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 57 |
| 10 | Di chuyển hướng 2 (`2`) | (4, 9) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 57 |
| 11 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 57 |
| 12 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 57 |
| 13 | Di chuyển hướng 2 (`2`) | (6, 10) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 57 |
| 14-15 | Di chuyển hướng 3 (`3`) | (7, 10) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 57 |
| 16-17 | Di chuyển hướng 3 (`3`) | (8, 11) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 57 |
| 18 | Di chuyển hướng 3 (`3`) | (8, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 57 |
| 19 | Di chuyển hướng 3 (`3`) | (9, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 57 |
| 20 | Di chuyển hướng 3 (`3`) | (9, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 57 |
| 21-22 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 57 |
| 23-24 | Di chuyển hướng 3 (`3`) | (10, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 57 |
| 25-27 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 57 |
| 28-29 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(12, 19)) | 57 |
| 30-31 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 57 |
| 32-33 | Di chuyển hướng 2 (`2`) | (12, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 57 |
| 34 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 57 |
| 35-36 | Di chuyển hướng 2 (`2`) | (14, 21) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 57 |
| 37 | Di chuyển hướng 2 (`2`) | (15, 21) | (16, 21) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 21)) | 57 |
| 38-52 | Chờ 15 bước (`-15`) | (16, 21) | (16, 21) | Dự kiến đứng yên tại (16, 21); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 21)) | 57 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (4, 13) (ô=342)
- Nhiên liệu đầu ngày: 57
- Mục tiêu kế hoạch từ Solver: Spot #24 (thương hiệu=0, tọa độ=(19, 1))
- Địa điểm đích kế hoạch: Spot #24 (thương hiệu=0, tọa độ=(19, 1))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 57 |
| 2-3 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 57 |
| 4 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 57 |
| 5 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 57 |
| 6-7 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 57 |
| 8 | Di chuyển hướng 1 (`1`) | (8, 12) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 57 |
| 9-10 | Di chuyển hướng 2 (`2`) | (9, 11) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 57 |
| 11-12 | Di chuyển hướng 2 (`2`) | (10, 11) | (11, 11) | Dự kiến đến điểm hẹn tọa độ (11, 11) | 57 |
| 13-14 | Di chuyển hướng 2 (`2`) | (11, 11) | (12, 11) | Dự kiến đến điểm hẹn tọa độ (12, 11) | 57 |
| 15-16 | Di chuyển hướng 2 (`2`) | (12, 11) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 57 |
| 17 | Di chuyển hướng 2 (`2`) | (13, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 57 |
| 18-19 | Di chuyển hướng 1 (`1`) | (14, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 57 |
| 20 | Di chuyển hướng 1 (`1`) | (14, 10) | (15, 9) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 9)) | 57 |
| 21-22 | Di chuyển hướng 1 (`1`) | (15, 9) | (15, 8) | Dự kiến đến điểm hẹn tọa độ (15, 8) | 57 |
| 23-24 | Di chuyển hướng 1 (`1`) | (15, 8) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 57 |
| 25-26 | Di chuyển hướng 1 (`1`) | (16, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 57 |
| 27-28 | Di chuyển hướng 1 (`1`) | (16, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 57 |
| 29-30 | Di chuyển hướng 1 (`1`) | (17, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 57 |
| 31-32 | Di chuyển hướng 1 (`1`) | (17, 4) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 57 |
| 33 | Di chuyển hướng 1 (`1`) | (18, 3) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 57 |
| 34-35 | Di chuyển hướng 1 (`1`) | (18, 2) | (19, 1) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=0, tọa độ=(19, 1)) | 57 |
| 36-52 | Chờ 17 bước (`-17`) | (19, 1) | (19, 1) | Dự kiến đứng yên tại (19, 1); mục tiêu Spot #24 (thương hiệu=0, tọa độ=(19, 1)) | 57 |

