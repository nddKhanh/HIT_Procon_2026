# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 52
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #5 | (22, 22) | 54 | 55 |
| 4 | #1 | #5 | (22, 21) | 54 | 55 |
| 29 | #3 | #5 | (9, 18) | 7 | 55 |
| 32 | #2 | #4 | (3, 9) | 19 | 55 |
| 33 | #1 | #5 | (11, 17) | 36 | 55 |
| 40 | #1 | #5 | (11, 16) | 50 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (18, 7) (ô=186)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 5)
- Mảng hành động đã gửi server: `[3, 3, 3, 2, 3, 2, 5, 0, 5, 5, 5, 5, 5, 5, 0, 0, 5, 5, 5, 0, 0, 5, 0, 0, 0, 4, 4, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (18, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(18, 8)) | 54 |
| 2-3 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 53 |
| 4-5 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 52 |
| 6 | Di chuyển hướng 2 (`2`) | (19, 10) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 50 |
| 7-8 | Di chuyển hướng 3 (`3`) | (20, 10) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 49 |
| 9-10 | Di chuyển hướng 2 (`2`) | (21, 11) | (22, 11) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(22, 11)) | 48 |
| 11-12 | Di chuyển hướng 5 (`5`) | (22, 11) | (21, 11) | Dự kiến đến điểm hẹn tọa độ (21, 11) | 47 |
| 13-14 | Di chuyển hướng 0 (`0`) | (21, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 46 |
| 15-16 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 45 |
| 17 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 43 |
| 18 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 10)) | 41 |
| 19-20 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 40 |
| 21-22 | Di chuyển hướng 5 (`5`) | (16, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 39 |
| 23-24 | Di chuyển hướng 5 (`5`) | (15, 10) | (14, 10) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(14, 10)) | 38 |
| 25-26 | Di chuyển hướng 0 (`0`) | (14, 10) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 37 |
| 27-28 | Di chuyển hướng 0 (`0`) | (14, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 36 |
| 29 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 34 |
| 30 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 32 |
| 31-32 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 31 |
| 33-35 | Di chuyển hướng 0 (`0`) | (10, 8) | (10, 7) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(10, 7)) | 29 |
| 36-37 | Di chuyển hướng 0 (`0`) | (10, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 28 |
| 38-39 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 27 |
| 40-41 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 26 |
| 42 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đến điểm hẹn tọa độ (7, 4) | 24 |
| 43-44 | Di chuyển hướng 0 (`0`) | (7, 4) | (7, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 3)) | 23 |
| 45-46 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 22 |
| 47-48 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 21 |
| 49-50 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đến điểm hẹn tọa độ (5, 5) | 20 |
| 51 | Chờ 1 bước (`-1`) | (5, 5) | (5, 5) | Dự kiến đứng yên tại (5, 5); hướng tới tọa độ (5, 5) | 20 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (23, 22) (ô=551)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 15)
- Mảng hành động đã gửi server: `[5, 0, 5, 5, 5, 5, 5, 4, 5, 4, 0, 0, 0, 0, 0, 5, 0, 5, 0, 2, 2, 0, 0, 0, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 55 |
| 2-3 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 21)) | 54 |
| 6-7 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 53 |
| 8-9 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 52 |
| 10-11 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 21)) | 51 |
| 12-13 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 50 |
| 14-15 | Di chuyển hướng 4 (`4`) | (17, 21) | (16, 22) | Dự kiến đến điểm hẹn tọa độ (16, 22) | 49 |
| 16-17 | Di chuyển hướng 5 (`5`) | (16, 22) | (15, 22) | Dự kiến đến điểm hẹn tọa độ (15, 22) | 48 |
| 18-19 | Di chuyển hướng 4 (`4`) | (15, 22) | (15, 23) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(15, 23)) | 47 |
| 20-21 | Di chuyển hướng 0 (`0`) | (15, 23) | (14, 22) | Dự kiến đến điểm hẹn tọa độ (14, 22) | 46 |
| 22-23 | Di chuyển hướng 0 (`0`) | (14, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 45 |
| 24-26 | Di chuyển hướng 0 (`0`) | (14, 21) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 43 |
| 27-28 | Di chuyển hướng 0 (`0`) | (13, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 42 |
| 29 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 40 |
| 30 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 38 |
| 31 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 36 |
| 32-33 | Di chuyển hướng 5 (`5`) | (11, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 54 |
| 34-35 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 53 |
| 36-37 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 52 |
| 38-39 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 55 |
| 40-41 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 54 |
| 42-43 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 53 |
| 44-46 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(10, 13)) | 51 |
| 47-48 | Di chuyển hướng 4 (`4`) | (10, 13) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 50 |
| 49-50 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 49 |
| 51 | Chờ 1 bước (`-1`) | (9, 15) | (9, 15) | Dự kiến đứng yên tại (9, 15); hướng tới tọa độ (9, 15) | 49 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 2) (ô=50)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 18)
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 0, 5, 5, 5, 0, 4, 3, 3, 3, 4, 4, 4, 3, 3, 3, 5, 4, 4, 3, 4, 3, 4, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 40 |
| 2 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 38 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 37 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 36 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 3)) | 35 |
| 9-10 | Di chuyển hướng 0 (`0`) | (7, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 34 |
| 11-12 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 33 |
| 13-14 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 32 |
| 15 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 30 |
| 16-17 | Di chuyển hướng 0 (`0`) | (3, 2) | (3, 1) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 1)) | 29 |
| 18-19 | Di chuyển hướng 4 (`4`) | (3, 1) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 28 |
| 20-21 | Di chuyển hướng 3 (`3`) | (2, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 27 |
| 22 | Di chuyển hướng 3 (`3`) | (3, 3) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 25 |
| 23-24 | Di chuyển hướng 3 (`3`) | (3, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 24 |
| 25 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 22 |
| 26-27 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 21 |
| 28-29 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(2, 8)) | 20 |
| 30-31 | Di chuyển hướng 3 (`3`) | (2, 8) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 55 |
| 32-33 | Di chuyển hướng 3 (`3`) | (3, 9) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 54 |
| 34-35 | Di chuyển hướng 3 (`3`) | (3, 10) | (4, 11) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(4, 11)) | 53 |
| 36-37 | Di chuyển hướng 5 (`5`) | (4, 11) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 52 |
| 38-39 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 51 |
| 40 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 49 |
| 41-42 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 48 |
| 43-44 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 47 |
| 45-46 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 46 |
| 47 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 44 |
| 48-50 | Di chuyển hướng 3 (`3`) | (2, 17) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 42 |
| 51 | Chờ 1 bước (`-1`) | (2, 18) | (2, 18) | Dự kiến đứng yên tại (2, 18); hướng tới tọa độ (2, 18) | 42 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (3, 18) (ô=435)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(19, 13))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(19, 13))
- Mảng hành động đã gửi server: `[5, 4, 3, 1, 2, 2, 2, 1, 2, 1, 2, 2, 0, 4, 3, 2, 2, 2, 2, 1, 1, 1, 1, 2, 1, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (3, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 22 |
| 2-3 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 19)) | 21 |
| 4-5 | Di chuyển hướng 3 (`3`) | (2, 19) | (2, 20) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 20)) | 20 |
| 6-7 | Di chuyển hướng 1 (`1`) | (2, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 19 |
| 8-9 | Di chuyển hướng 2 (`2`) | (3, 19) | (4, 19) | Dự kiến đến điểm hẹn tọa độ (4, 19) | 18 |
| 10-11 | Di chuyển hướng 2 (`2`) | (4, 19) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 17 |
| 12 | Di chuyển hướng 2 (`2`) | (5, 19) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 15 |
| 13-14 | Di chuyển hướng 1 (`1`) | (6, 19) | (6, 18) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(6, 18)) | 14 |
| 15-16 | Di chuyển hướng 2 (`2`) | (6, 18) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 13 |
| 17-18 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 12 |
| 19-20 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 11 |
| 21-22 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 10 |
| 23-24 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(9, 16)) | 9 |
| 25-26 | Di chuyển hướng 4 (`4`) | (9, 16) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 8 |
| 27-28 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 55 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 54 |
| 31-33 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 52 |
| 34 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 50 |
| 35 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 48 |
| 36-37 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 47 |
| 38-39 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 46 |
| 40-41 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 45 |
| 42 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 43 |
| 43-44 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 42 |
| 45 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 13)) | 40 |
| 46-47 | Di chuyển hướng 2 (`2`) | (17, 13) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 39 |
| 48-50 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(19, 13)) | 37 |
| 51 | Chờ 1 bước (`-1`) | (19, 13) | (19, 13) | Dự kiến đứng yên tại (19, 13); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(19, 13)) | 37 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (18, 7) (ô=186)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 3)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 3)
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 5, 0, 5, 5, 4, 5, 5, 5, 4, 5, 5, 5, 5, 0, 0, 1, 1, 1, 0, 0, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (18, 7) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 55 |
| 2-3 | Di chuyển hướng 4 (`4`) | (17, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 55 |
| 6-7 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 55 |
| 8-9 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 55 |
| 10-11 | Di chuyển hướng 0 (`0`) | (14, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 55 |
| 12 | Di chuyển hướng 5 (`5`) | (13, 8) | (12, 8) | Dự kiến đến điểm hẹn tọa độ (12, 8) | 55 |
| 13 | Di chuyển hướng 5 (`5`) | (12, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 55 |
| 14-15 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 55 |
| 16-17 | Di chuyển hướng 5 (`5`) | (11, 9) | (10, 9) | Dự kiến đến điểm hẹn tọa độ (10, 9) | 55 |
| 18-19 | Di chuyển hướng 5 (`5`) | (10, 9) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 55 |
| 20-21 | Di chuyển hướng 5 (`5`) | (9, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 55 |
| 22-23 | Di chuyển hướng 4 (`4`) | (8, 9) | (7, 10) | Dự kiến đến điểm hẹn tọa độ (7, 10) | 55 |
| 24 | Di chuyển hướng 5 (`5`) | (7, 10) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 55 |
| 25-26 | Di chuyển hướng 5 (`5`) | (6, 10) | (5, 10) | Dự kiến đến điểm hẹn tọa độ (5, 10) | 55 |
| 27 | Di chuyển hướng 5 (`5`) | (5, 10) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 55 |
| 28-29 | Di chuyển hướng 5 (`5`) | (4, 10) | (3, 10) | Dự kiến đến điểm hẹn tọa độ (3, 10) | 55 |
| 30-31 | Di chuyển hướng 0 (`0`) | (3, 10) | (3, 9) | Dự kiến đến điểm hẹn tọa độ (3, 9) | 55 |
| 32-33 | Di chuyển hướng 0 (`0`) | (3, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(2, 8)) | 55 |
| 34-35 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 55 |
| 36-37 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 55 |
| 38-39 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 55 |
| 40 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 55 |
| 41-42 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 55 |
| 43-51 | Chờ 9 bước (`-9`) | (3, 3) | (3, 3) | Dự kiến đứng yên tại (3, 3); hướng tới tọa độ (3, 3) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (23, 22) (ô=551)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(11, 16))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(11, 16))
- Mảng hành động đã gửi server: `[5, 0, 0, 5, 5, 5, 5, 0, 5, 5, 0, 5, 5, 5, 5, 5, 1, 2, 1, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 22) | (22, 22) | Dự kiến đến điểm hẹn tọa độ (22, 22) | 55 |
| 2-3 | Di chuyển hướng 0 (`0`) | (22, 22) | (22, 21) | Dự kiến đến điểm hẹn tọa độ (22, 21) | 55 |
| 4-5 | Di chuyển hướng 0 (`0`) | (22, 21) | (21, 20) | Dự kiến đến điểm hẹn tọa độ (21, 20) | 55 |
| 6 | Di chuyển hướng 5 (`5`) | (21, 20) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 55 |
| 7 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 55 |
| 8-9 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 55 |
| 10-11 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 55 |
| 12-13 | Di chuyển hướng 0 (`0`) | (17, 20) | (17, 19) | Dự kiến đến điểm hẹn tọa độ (17, 19) | 55 |
| 14-15 | Di chuyển hướng 5 (`5`) | (17, 19) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 55 |
| 16-17 | Di chuyển hướng 5 (`5`) | (16, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 55 |
| 18-20 | Di chuyển hướng 0 (`0`) | (15, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 55 |
| 21 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 55 |
| 22-23 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 55 |
| 24 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 55 |
| 25 | Di chuyển hướng 5 (`5`) | (11, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 55 |
| 26-28 | Di chuyển hướng 5 (`5`) | (10, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 55 |
| 29-30 | Di chuyển hướng 1 (`1`) | (9, 18) | (10, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(10, 17)) | 55 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 55 |
| 33-34 | Di chuyển hướng 1 (`1`) | (11, 17) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 55 |
| 35-51 | Chờ 17 bước (`-17`) | (11, 16) | (11, 16) | Dự kiến đứng yên tại (11, 16); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 55 |

