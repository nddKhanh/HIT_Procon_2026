# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 52
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #3 | #5 | (20, 9) | 54 | 55 |
| 3 | #3 | #5 | (19, 10) | 53 | 55 |
| 4 | #3 | #5 | (18, 10) | 53 | 55 |
| 35 | #1 | #4 | (10, 23) | 0 | 55 |
| 37 | #2 | #5 | (7, 9) | 2 | 55 |
| 38 | #1 | #4 | (9, 22) | 54 | 55 |
| 43 | #2 | #5 | (8, 7) | 49 | 55 |
| 45 | #1 | #4 | (9, 19) | 50 | 55 |
| 47 | #1 | #4 | (8, 19) | 54 | 55 |
| 50 | #1 | #4 | (7, 20) | 53 | 55 |
| 51 | #0 | #5 | (8, 7) | 17 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 14) (ô=339)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 7)
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 3, 2, 2, 2, 2, 2, 2, 3, 4, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 48 |
| 2 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 46 |
| 3-4 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 45 |
| 5-7 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 10)) | 43 |
| 8-9 | Di chuyển hướng 0 (`0`) | (2, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 42 |
| 10-11 | Di chuyển hướng 0 (`0`) | (2, 9) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 41 |
| 12-14 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 39 |
| 15-16 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 38 |
| 17-19 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 5)) | 36 |
| 20-21 | Di chuyển hướng 0 (`0`) | (2, 5) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 35 |
| 22-24 | Di chuyển hướng 1 (`1`) | (1, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 33 |
| 25-26 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 2)) | 32 |
| 27-28 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 31 |
| 29-30 | Di chuyển hướng 2 (`2`) | (2, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 30 |
| 31-32 | Di chuyển hướng 2 (`2`) | (3, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 29 |
| 33-35 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 27 |
| 36 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 25 |
| 37-38 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 24 |
| 39-41 | Di chuyển hướng 2 (`2`) | (7, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 3)) | 22 |
| 42-43 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 21 |
| 44-45 | Di chuyển hướng 4 (`4`) | (8, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 20 |
| 46-48 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 6)) | 18 |
| 49-50 | Di chuyển hướng 4 (`4`) | (8, 6) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 55 |
| 51 | Chờ 1 bước (`-1`) | (8, 7) | (8, 7) | Dự kiến đứng yên tại (8, 7); hướng tới tọa độ (8, 7) | 55 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (5, 12) (ô=293)
- Nhiên liệu đầu ngày: 23
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(7, 21))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(7, 21))
- Mảng hành động đã gửi server: `[3, 2, 3, 3, 2, 3, 3, 2, 3, 2, 2, 4, 4, 4, 4, 5, 4, -1, 0, 1, 1, 0, 5, 5, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 12) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 22 |
| 2-3 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 21 |
| 4 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 19 |
| 5-7 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 17 |
| 8 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 15 |
| 9-10 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 16)) | 14 |
| 11-12 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(10, 17)) | 13 |
| 13-14 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 12 |
| 15-17 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 10 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 8 |
| 20-21 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 7 |
| 22-23 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 6 |
| 24-25 | Di chuyển hướng 4 (`4`) | (13, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 5 |
| 26-28 | Di chuyển hướng 4 (`4`) | (12, 20) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 3 |
| 29-30 | Di chuyển hướng 4 (`4`) | (12, 21) | (11, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 22)) | 2 |
| 31-32 | Di chuyển hướng 5 (`5`) | (11, 22) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 1 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 22) | (10, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 23)) | 55 |
| 35 | Chờ 1 bước (`-1`) | (10, 23) | (10, 23) | Dự kiến đứng yên tại (10, 23); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 23)) | 55 |
| 36-37 | Di chuyển hướng 0 (`0`) | (10, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 55 |
| 38-39 | Di chuyển hướng 1 (`1`) | (9, 22) | (10, 21) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 21)) | 54 |
| 40-41 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 53 |
| 42-43 | Di chuyển hướng 0 (`0`) | (10, 20) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 52 |
| 44 | Di chuyển hướng 5 (`5`) | (10, 19) | (9, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 19)) | 55 |
| 45-46 | Di chuyển hướng 5 (`5`) | (9, 19) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 55 |
| 47-49 | Di chuyển hướng 4 (`4`) | (8, 19) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 55 |
| 50 | Di chuyển hướng 4 (`4`) | (7, 20) | (7, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 53 |
| 51 | Chờ 1 bước (`-1`) | (7, 21) | (7, 21) | Dự kiến đứng yên tại (7, 21); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 53 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 16) (ô=384)
- Nhiên liệu đầu ngày: 29
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(8, 3))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(8, 3))
- Mảng hành động đã gửi server: `[1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 3, 2, 2, 3, 3, 2, 3, 3, 0, 1, 1, 1, 0, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 28 |
| 2 | Di chuyển hướng 0 (`0`) | (1, 15) | (0, 14) | Dự kiến đến điểm hẹn tọa độ (0, 14) | 26 |
| 3-4 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đến điểm hẹn tọa độ (0, 13) | 25 |
| 5-6 | Di chuyển hướng 1 (`1`) | (0, 13) | (0, 12) | Dự kiến đến điểm hẹn tọa độ (0, 12) | 24 |
| 7-9 | Di chuyển hướng 0 (`0`) | (0, 12) | (0, 11) | Dự kiến đến điểm hẹn tọa độ (0, 11) | 22 |
| 10 | Di chuyển hướng 1 (`1`) | (0, 11) | (0, 10) | Dự kiến đến điểm hẹn tọa độ (0, 10) | 20 |
| 11-12 | Di chuyển hướng 0 (`0`) | (0, 10) | (0, 9) | Dự kiến đến điểm hẹn tọa độ (0, 9) | 19 |
| 13-14 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 18 |
| 15 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 16 |
| 16-17 | Di chuyển hướng 1 (`1`) | (1, 7) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 15 |
| 18-20 | Di chuyển hướng 1 (`1`) | (1, 6) | (2, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 5)) | 13 |
| 21-22 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 12 |
| 23-25 | Di chuyển hướng 2 (`2`) | (2, 6) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 10 |
| 26 | Di chuyển hướng 2 (`2`) | (3, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 8 |
| 27-29 | Di chuyển hướng 3 (`3`) | (4, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 6 |
| 30-31 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 5 |
| 32-34 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 3 |
| 35-36 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 55 |
| 37 | Di chuyển hướng 3 (`3`) | (7, 9) | (7, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(7, 10)) | 53 |
| 38-39 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 52 |
| 40 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 50 |
| 41-42 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 55 |
| 43-44 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 6)) | 54 |
| 45-46 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 53 |
| 47-49 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 51 |
| 50-51 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 3)) | 50 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (21, 9) (ô=237)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 21)
- Mảng hành động đã gửi server: `[5, 4, 5, 4, 4, 3, 3, 3, 3, 3, 4, 3, 3, 4, 2, 2, 2, 3, 0, 5, 5, 5, 5, 5, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 55 |
| 2 | Di chuyển hướng 4 (`4`) | (20, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 55 |
| 3 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 55 |
| 4-5 | Di chuyển hướng 4 (`4`) | (18, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 54 |
| 6-7 | Di chuyển hướng 4 (`4`) | (18, 11) | (17, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 12)) | 53 |
| 8-9 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 52 |
| 10-11 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 51 |
| 12-13 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 50 |
| 14-15 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 49 |
| 16-18 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 47 |
| 19-20 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 46 |
| 21-22 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 45 |
| 23-25 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 43 |
| 26-27 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 21)) | 42 |
| 28-29 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 41 |
| 30 | Di chuyển hướng 2 (`2`) | (21, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 39 |
| 31-32 | Di chuyển hướng 2 (`2`) | (22, 21) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 38 |
| 33-34 | Di chuyển hướng 3 (`3`) | (23, 21) | (23, 22) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(23, 22)) | 37 |
| 35-36 | Di chuyển hướng 0 (`0`) | (23, 22) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 36 |
| 37-38 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 35 |
| 39-40 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 34 |
| 41 | Di chuyển hướng 5 (`5`) | (21, 21) | (20, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 21)) | 32 |
| 42-43 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 31 |
| 44-46 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 29 |
| 47-48 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 28 |
| 49-50 | Di chuyển hướng 5 (`5`) | (17, 21) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 27 |
| 51 | Chờ 1 bước (`-1`) | (16, 21) | (16, 21) | Dự kiến đứng yên tại (16, 21); hướng tới tọa độ (16, 21) | 27 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (5, 17) (ô=413)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 20)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 3, 2, 2, 3, -18, 0, 0, 0, 1, 5, 4, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 3 (`3`) | (5, 17) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 55 |
| 4 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 55 |
| 5-6 | Di chuyển hướng 3 (`3`) | (6, 19) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 55 |
| 7-9 | Di chuyển hướng 3 (`3`) | (6, 20) | (7, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 55 |
| 10-11 | Di chuyển hướng 3 (`3`) | (7, 21) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 55 |
| 12 | Di chuyển hướng 2 (`2`) | (7, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 55 |
| 13-14 | Di chuyển hướng 2 (`2`) | (8, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 55 |
| 15-16 | Di chuyển hướng 3 (`3`) | (9, 22) | (10, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 23)) | 55 |
| 17-34 | Chờ 18 bước (`-18`) | (10, 23) | (10, 23) | Dự kiến đứng yên tại (10, 23); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 23)) | 55 |
| 35-36 | Di chuyển hướng 0 (`0`) | (10, 23) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 55 |
| 37-38 | Di chuyển hướng 0 (`0`) | (9, 22) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 55 |
| 39-40 | Di chuyển hướng 0 (`0`) | (9, 21) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 55 |
| 41-43 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 19)) | 55 |
| 44-45 | Di chuyển hướng 5 (`5`) | (9, 19) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 55 |
| 46-48 | Di chuyển hướng 4 (`4`) | (8, 19) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 55 |
| 49-51 | Chờ 3 bước (`-3`) | (7, 20) | (7, 20) | Dự kiến đứng yên tại (7, 20); hướng tới tọa độ (7, 20) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (21, 9) (ô=237)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 7)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 7)
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 0, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 0, -7, 1, 1, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 55 |
| 2 | Di chuyển hướng 4 (`4`) | (20, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 55 |
| 3 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 55 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 55 |
| 6-7 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 55 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 55 |
| 10-11 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 55 |
| 12-13 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đến điểm hẹn tọa độ (14, 9) | 55 |
| 14 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 55 |
| 15 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 55 |
| 16-18 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đến điểm hẹn tọa độ (11, 10) | 55 |
| 19-21 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 55 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 10) | (9, 10) | Dự kiến đến điểm hẹn tọa độ (9, 10) | 55 |
| 24 | Di chuyển hướng 5 (`5`) | (9, 10) | (8, 10) | Dự kiến đến điểm hẹn tọa độ (8, 10) | 55 |
| 25-27 | Di chuyển hướng 5 (`5`) | (8, 10) | (7, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(7, 10)) | 55 |
| 28-29 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 55 |
| 30-36 | Chờ 7 bước (`-7`) | (7, 9) | (7, 9) | Dự kiến đứng yên tại (7, 9); hướng tới tọa độ (7, 9) | 55 |
| 37 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 55 |
| 38-39 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 55 |
| 40-51 | Chờ 12 bước (`-12`) | (8, 7) | (8, 7) | Dự kiến đứng yên tại (8, 7); hướng tới tọa độ (8, 7) | 55 |

