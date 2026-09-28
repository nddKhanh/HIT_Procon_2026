# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 56
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 22 | #0 | #4 | (18, 13) | 7 | 55 |
| 22 | #2 | #5 | (5, 13) | 10 | 55 |
| 35 | #0 | #4 | (20, 17) | 48 | 55 |
| 35 | #1 | #5 | (9, 15) | 25 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (23, 21) (ô=527)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(22, 21))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(22, 21))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 3, 3, 3, 3, 3, 4, 3, 3, 4, 2, 2, 2, 3, 0, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 19 |
| 2-3 | Di chuyển hướng 5 (`5`) | (22, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 18 |
| 4 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 16 |
| 5-6 | Di chuyển hướng 0 (`0`) | (20, 20) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 15 |
| 7-9 | Di chuyển hướng 0 (`0`) | (20, 19) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 13 |
| 10-11 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 12 |
| 12-13 | Di chuyển hướng 0 (`0`) | (20, 17) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 11 |
| 14-16 | Di chuyển hướng 0 (`0`) | (19, 16) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 9 |
| 17-18 | Di chuyển hướng 0 (`0`) | (19, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 8 |
| 19-20 | Di chuyển hướng 0 (`0`) | (18, 14) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 7 |
| 21-22 | Di chuyển hướng 0 (`0`) | (18, 13) | (17, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 12)) | 54 |
| 23 | Chờ 1 bước (`-1`) | (17, 12) | (17, 12) | Dự kiến đứng yên tại (17, 12); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 12)) | 54 |
| 24-25 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 53 |
| 26-27 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 52 |
| 28-29 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 51 |
| 30-31 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 50 |
| 32-34 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 55 |
| 35-36 | Di chuyển hướng 4 (`4`) | (20, 17) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 54 |
| 37-38 | Di chuyển hướng 3 (`3`) | (19, 18) | (20, 19) | Dự kiến đến điểm hẹn tọa độ (20, 19) | 53 |
| 39-41 | Di chuyển hướng 3 (`3`) | (20, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 51 |
| 42-43 | Di chuyển hướng 4 (`4`) | (20, 20) | (20, 21) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(20, 21)) | 50 |
| 44-45 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đến điểm hẹn tọa độ (21, 21) | 49 |
| 46 | Di chuyển hướng 2 (`2`) | (21, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 47 |
| 47-48 | Di chuyển hướng 2 (`2`) | (22, 21) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 46 |
| 49-50 | Di chuyển hướng 3 (`3`) | (23, 21) | (23, 22) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(23, 22)) | 45 |
| 51-52 | Di chuyển hướng 0 (`0`) | (23, 22) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 44 |
| 53-54 | Di chuyển hướng 5 (`5`) | (23, 21) | (22, 21) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 43 |
| 55 | Chờ 1 bước (`-1`) | (22, 21) | (22, 21) | Dự kiến đứng yên tại (22, 21); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(22, 21)) | 43 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (1, 2) (ô=49)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 14)
- Mảng hành động đã gửi server: `[3, 4, 3, 3, 4, 3, 4, 3, 3, 3, 3, 2, 2, 2, 3, 3, 2, 3, 3, 2, 3, 2, 2, 1, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (1, 2) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 50 |
| 2-3 | Di chuyển hướng 4 (`4`) | (2, 3) | (1, 4) | Dự kiến đến điểm hẹn tọa độ (1, 4) | 49 |
| 4-6 | Di chuyển hướng 3 (`3`) | (1, 4) | (2, 5) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(2, 5)) | 47 |
| 7-8 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 46 |
| 9-11 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 44 |
| 12-13 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 43 |
| 14-16 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 41 |
| 17-18 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 10)) | 40 |
| 19-20 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 39 |
| 21-23 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 37 |
| 24-25 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 36 |
| 26 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 34 |
| 27 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 32 |
| 28-29 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 31 |
| 30 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 29 |
| 31-33 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 27 |
| 34 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 55 |
| 35-36 | Di chuyển hướng 3 (`3`) | (9, 15) | (9, 16) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(9, 16)) | 54 |
| 37-38 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(10, 17)) | 53 |
| 39-40 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 52 |
| 41-43 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 50 |
| 44-45 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 48 |
| 46-47 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 47 |
| 48-49 | Di chuyển hướng 1 (`1`) | (13, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 46 |
| 50-51 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 45 |
| 52 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 43 |
| 53-54 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 42 |
| 55 | Chờ 1 bước (`-1`) | (15, 14) | (15, 14) | Dự kiến đứng yên tại (15, 14); hướng tới tọa độ (15, 14) | 42 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (1, 22) (ô=529)
- Nhiên liệu đầu ngày: 28
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 8)
- Mảng hành động đã gửi server: `[0, 0, 1, 0, 0, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1, 0, 1, 1, 0, 1, 0, 3, 3, 3, 3, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (1, 22) | (1, 21) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 21)) | 26 |
| 3-4 | Di chuyển hướng 0 (`0`) | (1, 21) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 25 |
| 5-6 | Di chuyển hướng 1 (`1`) | (0, 20) | (1, 19) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 19)) | 24 |
| 7-8 | Di chuyển hướng 0 (`0`) | (1, 19) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 23 |
| 9-10 | Di chuyển hướng 0 (`0`) | (0, 18) | (0, 17) | Dự kiến đến điểm hẹn tọa độ (0, 17) | 22 |
| 11 | Di chuyển hướng 1 (`1`) | (0, 17) | (0, 16) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(0, 16)) | 20 |
| 12-13 | Di chuyển hướng 1 (`1`) | (0, 16) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 19 |
| 14 | Di chuyển hướng 1 (`1`) | (1, 15) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 17 |
| 15-17 | Di chuyển hướng 2 (`2`) | (1, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 15 |
| 18 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(3, 14)) | 13 |
| 19-20 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 12 |
| 21 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 55 |
| 22 | Di chuyển hướng 1 (`1`) | (5, 13) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 53 |
| 23-24 | Di chuyển hướng 1 (`1`) | (5, 12) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 52 |
| 25-26 | Di chuyển hướng 2 (`2`) | (6, 11) | (7, 11) | Dự kiến đến điểm hẹn tọa độ (7, 11) | 51 |
| 27 | Di chuyển hướng 1 (`1`) | (7, 11) | (7, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(7, 10)) | 49 |
| 28-29 | Di chuyển hướng 1 (`1`) | (7, 10) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 48 |
| 30-31 | Di chuyển hướng 0 (`0`) | (8, 9) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 47 |
| 32-33 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 46 |
| 34-35 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 6)) | 45 |
| 36-37 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 44 |
| 38-40 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 42 |
| 41-42 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(8, 3)) | 41 |
| 43-44 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 40 |
| 45-46 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 39 |
| 47-49 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 37 |
| 50 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 35 |
| 51-52 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 34 |
| 53-55 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 32 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (9, 16) (ô=393)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 20)
- Mảng hành động đã gửi server: `[3, 2, 3, 2, 4, 4, 5, 4, 4, 3, 1, 2, 5, 5, 5, 5, 0, 1, 1, 2, 2, 2, 2, 1, 2, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (9, 16) | (10, 17) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(10, 17)) | 50 |
| 2-3 | Di chuyển hướng 2 (`2`) | (10, 17) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 49 |
| 4-6 | Di chuyển hướng 3 (`3`) | (11, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 47 |
| 7-8 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 45 |
| 9-10 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 44 |
| 11-12 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 43 |
| 13-14 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 42 |
| 15-16 | Di chuyển hướng 4 (`4`) | (10, 20) | (10, 21) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(10, 21)) | 41 |
| 17-18 | Di chuyển hướng 4 (`4`) | (10, 21) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 40 |
| 19-20 | Di chuyển hướng 3 (`3`) | (9, 22) | (10, 23) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(10, 23)) | 39 |
| 21-22 | Di chuyển hướng 1 (`1`) | (10, 23) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 38 |
| 23-24 | Di chuyển hướng 2 (`2`) | (10, 22) | (11, 22) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 22)) | 37 |
| 25-26 | Di chuyển hướng 5 (`5`) | (11, 22) | (10, 22) | Dự kiến đến điểm hẹn tọa độ (10, 22) | 36 |
| 27-28 | Di chuyển hướng 5 (`5`) | (10, 22) | (9, 22) | Dự kiến đến điểm hẹn tọa độ (9, 22) | 35 |
| 29-30 | Di chuyển hướng 5 (`5`) | (9, 22) | (8, 22) | Dự kiến đến điểm hẹn tọa độ (8, 22) | 34 |
| 31-32 | Di chuyển hướng 5 (`5`) | (8, 22) | (7, 22) | Dự kiến đến điểm hẹn tọa độ (7, 22) | 33 |
| 33 | Di chuyển hướng 0 (`0`) | (7, 22) | (7, 21) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(7, 21)) | 31 |
| 34-35 | Di chuyển hướng 1 (`1`) | (7, 21) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 30 |
| 36-37 | Di chuyển hướng 1 (`1`) | (7, 20) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 28 |
| 38-40 | Di chuyển hướng 2 (`2`) | (8, 19) | (9, 19) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 19)) | 26 |
| 41-42 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 25 |
| 43-44 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 23 |
| 45-47 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 21 |
| 48-49 | Di chuyển hướng 1 (`1`) | (12, 19) | (12, 18) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(12, 18)) | 20 |
| 50-51 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 18)) | 19 |
| 52-53 | Di chuyển hướng 4 (`4`) | (13, 18) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 18 |
| 54-55 | Di chuyển hướng 3 (`3`) | (13, 19) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 17 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (11, 17) (ô=419)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(20, 17)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(20, 17)
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 1, 1, 2, 1, 1, 3, 3, 3, 3, 3, -25]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (11, 17) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 55 |
| 3-5 | Di chuyển hướng 1 (`1`) | (12, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 55 |
| 6 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 55 |
| 7-9 | Di chuyển hướng 2 (`2`) | (13, 16) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 55 |
| 10 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 55 |
| 11-12 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 55 |
| 13-14 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 55 |
| 15-16 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 55 |
| 17-19 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(17, 12)) | 55 |
| 20-21 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 55 |
| 22-23 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 55 |
| 24-25 | Di chuyển hướng 3 (`3`) | (18, 14) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 55 |
| 26-27 | Di chuyển hướng 3 (`3`) | (19, 15) | (19, 16) | Dự kiến đến điểm hẹn tọa độ (19, 16) | 55 |
| 28-30 | Di chuyển hướng 3 (`3`) | (19, 16) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 55 |
| 31-55 | Chờ 25 bước (`-25`) | (20, 17) | (20, 17) | Dự kiến đứng yên tại (20, 17); hướng tới tọa độ (20, 17) | 55 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (2, 5) (ô=122)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 15)
- Mảng hành động đã gửi server: `[3, 4, 3, 4, 3, 3, 3, 3, 2, -2, 2, 2, 3, 3, 2, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 5) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 55 |
| 2-4 | Di chuyển hướng 4 (`4`) | (2, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 55 |
| 5-6 | Di chuyển hướng 3 (`3`) | (2, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 55 |
| 7-9 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 55 |
| 10-11 | Di chuyển hướng 3 (`3`) | (2, 9) | (2, 10) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(2, 10)) | 55 |
| 12-13 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 55 |
| 14-16 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 55 |
| 17-18 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 55 |
| 19 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 55 |
| 20-21 | Chờ 2 bước (`-2`) | (5, 13) | (5, 13) | Dự kiến đứng yên tại (5, 13); hướng tới tọa độ (5, 13) | 55 |
| 22 | Di chuyển hướng 2 (`2`) | (5, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 55 |
| 23-24 | Di chuyển hướng 2 (`2`) | (6, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 55 |
| 25 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 55 |
| 26-28 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 55 |
| 29 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 55 |
| 30-55 | Chờ 26 bước (`-26`) | (9, 15) | (9, 15) | Dự kiến đứng yên tại (9, 15); hướng tới tọa độ (9, 15) | 55 |

