# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 60
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #3 | #4 | (3, 21) | 45 | 55 |
| 26 | #0 | #4 | (13, 18) | 2 | 55 |
| 32 | #2 | #5 | (8, 6) | 7 | 55 |
| 52 | #3 | #4 | (13, 18) | 24 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (9, 16) (ô=393)
- Nhiên liệu đầu ngày: 9
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(22, 21))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(22, 21))
- Mảng hành động đã gửi server: `[3, 2, 3, 2, 2, -16, 4, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(10, 17)) | 8 |
| 2-3 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 7 |
| 4-6 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 5 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 3 |
| 9-10 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 2 |
| 11-26 | Chờ 16 bước (`-16`) | (13, 18) | (13, 18) | Dự kiến đứng yên tại (13, 18); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 55 |
| 27-28 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 54 |
| 29-30 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 53 |
| 31-32 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 52 |
| 33-34 | Di chuyển hướng 2 (`2`) | (14, 21) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 51 |
| 35-36 | Di chuyển hướng 2 (`2`) | (15, 21) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 50 |
| 37-39 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 48 |
| 40-41 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 47 |
| 42-43 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 46 |
| 44-46 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 21)) | 44 |
| 47-48 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 43 |
| 49-50 | Di chuyển hướng 2 (`2`) | (21, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 41 |
| 51-52 | Di chuyển hướng 2 (`2`) | (22, 21) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 40 |
| 53-54 | Di chuyển hướng 3 (`3`) | (23, 21) | (23, 22) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(23, 22)) | 39 |
| 55-56 | Di chuyển hướng 0 (`0`) | (23, 22) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 38 |
| 57-58 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 37 |
| 59 | Chờ 1 bước (`-1`) | (22, 21) | (22, 21) | Dự kiến đứng yên tại (22, 21); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 37 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 2) (ô=49)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #23 (thương hiệu=23, tọa độ=(7, 21))
- Địa điểm đích kế hoạch: Spot #23 (thương hiệu=23, tọa độ=(7, 21))
- Mảng hành động đã gửi server: `[3, 4, 3, 3, 4, 3, 4, 3, 3, 4, 4, 4, 4, 4, 3, 3, 4, 4, 3, 3, 2, 2, 2, 1, 2, 2, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 40 |
| 2-3 | Di chuyển hướng 4 (`4`) | (2, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 39 |
| 4-6 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 5)) | 37 |
| 7-8 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 36 |
| 9-11 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 34 |
| 12-13 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 33 |
| 14-16 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 31 |
| 17-18 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 10)) | 30 |
| 19-20 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 29 |
| 21-23 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 27 |
| 24-25 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 26 |
| 26 | Di chuyển hướng 4 (`4`) | (2, 13) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 24 |
| 27-29 | Di chuyển hướng 4 (`4`) | (1, 14) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 22 |
| 30 | Di chuyển hướng 4 (`4`) | (1, 15) | (0, 16) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(0, 16)) | 20 |
| 31-32 | Di chuyển hướng 3 (`3`) | (0, 16) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 19 |
| 33 | Di chuyển hướng 3 (`3`) | (1, 17) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 17 |
| 34-35 | Di chuyển hướng 4 (`4`) | (1, 18) | (1, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 19)) | 16 |
| 36-37 | Di chuyển hướng 4 (`4`) | (1, 19) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 15 |
| 38-39 | Di chuyển hướng 3 (`3`) | (0, 20) | (1, 21) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 21)) | 14 |
| 40-41 | Di chuyển hướng 3 (`3`) | (1, 21) | (1, 22) | Dự kiến đến điểm hẹn tọa độ (1, 22) | 13 |
| 42-44 | Di chuyển hướng 2 (`2`) | (1, 22) | (2, 22) | Dự kiến đến điểm hẹn tọa độ (2, 22) | 11 |
| 45-46 | Di chuyển hướng 2 (`2`) | (2, 22) | (3, 22) | Dự kiến đến điểm hẹn tọa độ (3, 22) | 10 |
| 47-49 | Di chuyển hướng 2 (`2`) | (3, 22) | (4, 22) | Dự kiến đến điểm hẹn tọa độ (4, 22) | 8 |
| 50-51 | Di chuyển hướng 1 (`1`) | (4, 22) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 7 |
| 52 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 5 |
| 53-55 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 3 |
| 56-59 | Chờ 4 bước (`-4`) | (7, 21) | (7, 21) | Dự kiến đứng yên tại (7, 21); mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 20) (ô=482)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 4)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 4)
- Mảng hành động đã gửi server: `[0, 0, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 0, 1, 1, 1, 0, 1, 0, 5, 5, 5, 5, 5, 5, 0, 3, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 29 |
| 2-3 | Di chuyển hướng 0 (`0`) | (2, 19) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 28 |
| 4-5 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 27 |
| 6-8 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 25 |
| 9-11 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 23 |
| 12-14 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 14)) | 21 |
| 15-16 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 20 |
| 17 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 18 |
| 18-19 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 16 |
| 20-21 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 15 |
| 22-23 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 14 |
| 24 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(7, 10)) | 12 |
| 25-26 | Di chuyển hướng 0 (`0`) | (7, 10) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 11 |
| 27 | Di chuyển hướng 1 (`1`) | (7, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 9 |
| 28-29 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 8 |
| 30-31 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 6)) | 55 |
| 32-33 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 54 |
| 34-36 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 52 |
| 37-38 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 3)) | 51 |
| 39-40 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 50 |
| 41-43 | Di chuyển hướng 5 (`5`) | (7, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 48 |
| 44-45 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đến điểm hẹn tọa độ (5, 3) | 47 |
| 46 | Di chuyển hướng 5 (`5`) | (5, 3) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 45 |
| 47-49 | Di chuyển hướng 5 (`5`) | (4, 3) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 43 |
| 50-51 | Di chuyển hướng 5 (`5`) | (3, 3) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 42 |
| 52-53 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 2)) | 41 |
| 54-55 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 40 |
| 56-57 | Di chuyển hướng 4 (`4`) | (2, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 39 |
| 58-59 | Chờ 2 bước (`-2`) | (1, 4) | (1, 4) | Dự kiến đứng yên tại (1, 4); hướng tới tọa độ (1, 4) | 39 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 22) (ô=530)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 21)
- Mảng hành động đã gửi server: `[1, 2, 1, 1, 1, 1, 1, 2, 2, 2, 3, 4, 4, 2, 3, 4, 4, 3, 1, 2, 1, 0, 1, 1, 2, 4, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (2, 22) | (3, 21) | Dự kiến đến điểm hẹn tọa độ (3, 21) | 55 |
| 2-4 | Di chuyển hướng 2 (`2`) | (3, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 53 |
| 5-6 | Di chuyển hướng 1 (`1`) | (4, 21) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 52 |
| 7 | Di chuyển hướng 1 (`1`) | (4, 20) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 50 |
| 8-10 | Di chuyển hướng 1 (`1`) | (5, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 48 |
| 11 | Di chuyển hướng 1 (`1`) | (5, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 46 |
| 12-13 | Di chuyển hướng 1 (`1`) | (6, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 45 |
| 14-15 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 44 |
| 16-17 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 43 |
| 18-20 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 16)) | 41 |
| 21-22 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(10, 17)) | 40 |
| 23-24 | Di chuyển hướng 4 (`4`) | (10, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 39 |
| 25-27 | Di chuyển hướng 4 (`4`) | (9, 18) | (9, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 19)) | 37 |
| 28-29 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 36 |
| 30-31 | Di chuyển hướng 3 (`3`) | (10, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 34 |
| 32-33 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 21)) | 33 |
| 34-35 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 32 |
| 36-37 | Di chuyển hướng 3 (`3`) | (9, 22) | (10, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 23)) | 31 |
| 38-39 | Di chuyển hướng 1 (`1`) | (10, 23) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 30 |
| 40-41 | Di chuyển hướng 2 (`2`) | (10, 22) | (11, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 22)) | 29 |
| 42-43 | Di chuyển hướng 1 (`1`) | (11, 22) | (12, 21) | Dự kiến đến điểm hẹn tọa độ (12, 21) | 28 |
| 44-45 | Di chuyển hướng 0 (`0`) | (12, 21) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 27 |
| 46-47 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 26 |
| 48-49 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 25 |
| 50-51 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 55 |
| 52-53 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 54 |
| 54-55 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 53 |
| 56-57 | Di chuyển hướng 3 (`3`) | (13, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 52 |
| 58-59 | Di chuyển hướng 2 (`2`) | (14, 21) | (15, 21) | Dự kiến đến điểm hẹn tọa độ (15, 21) | 51 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (3, 21) (ô=507)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(13, 18))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(13, 18))
- Mảng hành động đã gửi server: `[2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 2, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (3, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 55 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 21) | (5, 21) | Dự kiến đến điểm hẹn tọa độ (5, 21) | 55 |
| 5 | Di chuyển hướng 2 (`2`) | (5, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 55 |
| 6-8 | Di chuyển hướng 2 (`2`) | (6, 21) | (7, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 55 |
| 9-10 | Di chuyển hướng 2 (`2`) | (7, 21) | (8, 21) | Dự kiến đến điểm hẹn tọa độ (8, 21) | 55 |
| 11-13 | Di chuyển hướng 2 (`2`) | (8, 21) | (9, 21) | Dự kiến đến điểm hẹn tọa độ (9, 21) | 55 |
| 14-15 | Di chuyển hướng 2 (`2`) | (9, 21) | (10, 21) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 21)) | 55 |
| 16-17 | Di chuyển hướng 1 (`1`) | (10, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 55 |
| 18-19 | Di chuyển hướng 2 (`2`) | (10, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 55 |
| 20-21 | Di chuyển hướng 1 (`1`) | (11, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 55 |
| 22-23 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 55 |
| 24-25 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 55 |
| 26-59 | Chờ 34 bước (`-34`) | (13, 18) | (13, 18) | Dự kiến đứng yên tại (13, 18); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (8, 6) (ô=152)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(8, 6))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(8, 6))
- Mảng hành động đã gửi server: `[-60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-59 | Chờ 60 bước (`-60`) | (8, 6) | (8, 6) | Dự kiến đứng yên tại (8, 6); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 6)) | 55 |

