# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 54
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 4 | #1 | #5 | (10, 17) | 47 | 55 |
| 10 | #0 | #4 | (6, 5) | 15 | 55 |
| 12 | #2 | #5 | (8, 17) | 36 | 55 |
| 14 | #0 | #4 | (8, 6) | 50 | 55 |
| 16 | #0 | #4 | (9, 6) | 54 | 55 |
| 18 | #0 | #4 | (10, 7) | 54 | 55 |
| 20 | #0 | #4 | (11, 7) | 54 | 55 |
| 23 | #0 | #4 | (11, 8) | 53 | 55 |
| 27 | #0 | #4 | (14, 9) | 50 | 55 |
| 31 | #3 | #5 | (8, 17) | 14 | 55 |
| 42 | #1 | #5 | (8, 17) | 28 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 5) (ô=125)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(21, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(21, 11)
- Mảng hành động đã gửi server: `[1, 1, 2, 4, 4, 2, 2, 3, 2, 3, 2, 3, 2, 2, 3, 3, 2, 2, 2, 1, 1, 0, 3, 3, 3, 2, 3, 2, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (5, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 19 |
| 2-3 | Di chuyển hướng 1 (`1`) | (5, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 18 |
| 4-5 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 3)) | 17 |
| 6-7 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 16 |
| 8-9 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 55 |
| 10-11 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 54 |
| 12 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 52 |
| 13 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 55 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 55 |
| 16-17 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 55 |
| 18-19 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 55 |
| 20-22 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 55 |
| 23-24 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 54 |
| 25 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 52 |
| 26 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 55 |
| 27-28 | Di chuyển hướng 3 (`3`) | (14, 9) | (14, 10) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(14, 10)) | 54 |
| 29-30 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 53 |
| 31-32 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 52 |
| 33-34 | Di chuyển hướng 2 (`2`) | (16, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 10)) | 51 |
| 35-36 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 50 |
| 37-38 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(18, 8)) | 49 |
| 39-40 | Di chuyển hướng 0 (`0`) | (18, 8) | (18, 7) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 7)) | 48 |
| 41-42 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(18, 8)) | 47 |
| 43-44 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 46 |
| 45-46 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 45 |
| 47 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 43 |
| 48-49 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 42 |
| 50-51 | Di chuyển hướng 2 (`2`) | (21, 11) | (22, 11) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(22, 11)) | 41 |
| 52-53 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 40 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 15) (ô=369)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 14)
- Mảng hành động đã gửi server: `[3, 3, 4, 4, 3, 3, 4, 0, 0, 5, 5, 5, 5, 5, 5, 0, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 3, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 48 |
| 2-3 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 55 |
| 4-5 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 54 |
| 6-7 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 53 |
| 8-9 | Di chuyển hướng 3 (`3`) | (9, 19) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 52 |
| 10 | Di chuyển hướng 3 (`3`) | (9, 20) | (10, 21) | Dự kiến đến điểm hẹn tọa độ (10, 21) | 50 |
| 11-12 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(9, 22)) | 49 |
| 13-14 | Di chuyển hướng 0 (`0`) | (9, 22) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 48 |
| 15-16 | Di chuyển hướng 0 (`0`) | (9, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 47 |
| 17 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 45 |
| 18-19 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 44 |
| 20-21 | Di chuyển hướng 5 (`5`) | (6, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 43 |
| 22 | Di chuyển hướng 5 (`5`) | (5, 20) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 41 |
| 23 | Di chuyển hướng 5 (`5`) | (4, 20) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 39 |
| 24-26 | Di chuyển hướng 5 (`5`) | (3, 20) | (2, 20) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 20)) | 37 |
| 27-28 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 19)) | 36 |
| 29-30 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 35 |
| 31-32 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 34 |
| 33-34 | Di chuyển hướng 2 (`2`) | (4, 19) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 33 |
| 35 | Di chuyển hướng 2 (`2`) | (5, 19) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 31 |
| 36-37 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 30 |
| 38-39 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 29 |
| 40-41 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 55 |
| 42-43 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 44-45 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 53 |
| 46-47 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 52 |
| 48-49 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 13)) | 51 |
| 50-51 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 50 |
| 52-53 | Chờ 2 bước (`-2`) | (10, 14) | (10, 14) | Dự kiến đứng yên tại (10, 14); hướng tới tọa độ (10, 14) | 50 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 18) (ô=434)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 21)
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 1, 2, 2, 2, 3, 2, 3, 3, 3, 3, 3, 1, 2, 1, 2, 2, 2, 2, 2, 3, 2, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 41 |
| 2-3 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 40 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 39 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 18) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 38 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 37 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 55 |
| 12-13 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 54 |
| 14-15 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 53 |
| 16-17 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 52 |
| 18-19 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 51 |
| 20 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 49 |
| 21 | Di chuyển hướng 3 (`3`) | (12, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 47 |
| 22 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 45 |
| 23-24 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 44 |
| 25-27 | Di chuyển hướng 3 (`3`) | (14, 21) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 42 |
| 28-29 | Di chuyển hướng 3 (`3`) | (14, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 23)) | 41 |
| 30-31 | Di chuyển hướng 1 (`1`) | (15, 23) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 40 |
| 32-33 | Di chuyển hướng 2 (`2`) | (15, 22) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 39 |
| 34-35 | Di chuyển hướng 1 (`1`) | (16, 22) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 38 |
| 36-37 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 21)) | 37 |
| 38-39 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 36 |
| 40-41 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 35 |
| 42-43 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 21)) | 34 |
| 44-45 | Di chuyển hướng 2 (`2`) | (21, 21) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 33 |
| 46-47 | Di chuyển hướng 3 (`3`) | (22, 21) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 32 |
| 48-49 | Di chuyển hướng 2 (`2`) | (22, 22) | (23, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(23, 22)) | 31 |
| 50-51 | Di chuyển hướng 0 (`0`) | (23, 22) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 30 |
| 52-53 | Chờ 2 bước (`-2`) | (23, 21) | (23, 21) | Dự kiến đứng yên tại (23, 21); hướng tới tọa độ (23, 21) | 30 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (19, 13) (ô=331)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 7)
- Mảng hành động đã gửi server: `[5, 5, 4, 4, 5, 4, 5, 4, 4, 5, 0, 1, 5, 5, 3, 5, 5, 0, 0, 5, 5, 0, 5, 0, 0, 1, 2, 0, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (19, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 36 |
| 2-4 | Di chuyển hướng 5 (`5`) | (18, 13) | (17, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 13)) | 34 |
| 5-6 | Di chuyển hướng 4 (`4`) | (17, 13) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 33 |
| 7 | Di chuyển hướng 4 (`4`) | (16, 14) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 31 |
| 8-9 | Di chuyển hướng 5 (`5`) | (16, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 30 |
| 10 | Di chuyển hướng 4 (`4`) | (15, 15) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 28 |
| 11-12 | Di chuyển hướng 5 (`5`) | (14, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 27 |
| 13-14 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 26 |
| 15-16 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 25 |
| 17 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 23 |
| 18 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 21 |
| 19-20 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 20 |
| 21-22 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 19 |
| 23-24 | Di chuyển hướng 5 (`5`) | (10, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 17 |
| 25-26 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 16 |
| 27-28 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 15 |
| 29-30 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 55 |
| 31-32 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 54 |
| 33 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 52 |
| 34 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 50 |
| 35-36 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 49 |
| 37 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 47 |
| 38 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 45 |
| 39-40 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 44 |
| 41-42 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 43 |
| 43 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 41 |
| 44-45 | Di chuyển hướng 2 (`2`) | (3, 11) | (4, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 11)) | 40 |
| 46-47 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 39 |
| 48-49 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 38 |
| 50-51 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(2, 8)) | 37 |
| 52-53 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 36 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (3, 3) (ô=75)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 9)
- Mảng hành động đã gửi server: `[3, 3, 2, 2, 2, 2, 3, 2, 3, 2, 3, 2, 2, 3, -28]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 55 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 55 |
| 6 | Di chuyển hướng 2 (`2`) | (4, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 55 |
| 7-8 | Di chuyển hướng 2 (`2`) | (5, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 55 |
| 9-10 | Di chuyển hướng 2 (`2`) | (6, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 55 |
| 11 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 55 |
| 12 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 55 |
| 13-14 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 55 |
| 15-16 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 55 |
| 17-18 | Di chuyển hướng 2 (`2`) | (10, 7) | (11, 7) | Dự kiến đến điểm hẹn tọa độ (11, 7) | 55 |
| 19-21 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 55 |
| 22-23 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 55 |
| 24 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 55 |
| 25 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 55 |
| 26-53 | Chờ 28 bước (`-28`) | (14, 9) | (14, 9) | Dự kiến đứng yên tại (14, 9); hướng tới tọa độ (14, 9) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (11, 16) (ô=395)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 17)
- Mảng hành động đã gửi server: `[4, 5, 5, 5, -46]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (11, 16) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 55 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 55 |
| 6-7 | Di chuyển hướng 5 (`5`) | (9, 17) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 55 |
| 8-53 | Chờ 46 bước (`-46`) | (8, 17) | (8, 17) | Dự kiến đứng yên tại (8, 17); hướng tới tọa độ (8, 17) | 55 |

