# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 59
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #2 | #7 | (3, 12) | 1 | 54 |
| 46 | #1 | #7 | (16, 12) | 0 | 54 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (11, 20) (ô=531)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(11, 20))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(11, 20))
- Mảng hành động đã gửi server: `[-59]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-58 | Chờ 59 bước (`-59`) | (11, 20) | (11, 20) | Dự kiến đứng yên tại (11, 20); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(11, 20)) | 3 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (16, 12) (ô=328)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(21, 16))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(21, 16))
- Mảng hành động đã gửi server: `[-46, 2, 3, 3, 2, 2, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-45 | Chờ 46 bước (`-46`) | (16, 12) | (16, 12) | Dự kiến đứng yên tại (16, 12); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 54 |
| 46-47 | Di chuyển hướng 2 (`2`) | (16, 12) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 53 |
| 48-50 | Di chuyển hướng 3 (`3`) | (17, 12) | (18, 13) | Dự kiến đến điểm hẹn tọa độ (18, 13) | 51 |
| 51-52 | Di chuyển hướng 3 (`3`) | (18, 13) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 50 |
| 53 | Di chuyển hướng 2 (`2`) | (18, 14) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 48 |
| 54-55 | Di chuyển hướng 2 (`2`) | (19, 14) | (20, 14) | Dự kiến đến điểm hẹn tọa độ (20, 14) | 47 |
| 56 | Di chuyển hướng 3 (`3`) | (20, 14) | (21, 15) | Dự kiến đến điểm hẹn tọa độ (21, 15) | 45 |
| 57 | Di chuyển hướng 3 (`3`) | (21, 15) | (21, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(21, 16)) | 43 |
| 58 | Chờ 1 bước (`-1`) | (21, 16) | (21, 16) | Dự kiến đứng yên tại (21, 16); mục tiêu Spot #18 (thương hiệu=18, tọa độ=(21, 16)) | 43 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (2, 13) (ô=340)
- Nhiên liệu đầu ngày: 4
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 18)
- Mảng hành động đã gửi server: `[2, 1, -19, 3, 3, 3, 2, 3, 2, 2, 3, 1, 2, 1, 1, 0, 3, 3, 3, 2, 3, 2, 3, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 13) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 3 |
| 2 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 1 |
| 3-21 | Chờ 19 bước (`-19`) | (3, 12) | (3, 12) | Dự kiến đứng yên tại (3, 12); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 54 |
| 22-23 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 53 |
| 24-25 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 52 |
| 26-27 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 51 |
| 28-29 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 50 |
| 30 | Di chuyển hướng 3 (`3`) | (6, 15) | (6, 16) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(6, 16)) | 48 |
| 31-32 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(7, 16)) | 47 |
| 33-34 | Di chuyển hướng 2 (`2`) | (7, 16) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 46 |
| 35 | Di chuyển hướng 3 (`3`) | (8, 16) | (9, 17) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(9, 17)) | 44 |
| 36-37 | Di chuyển hướng 1 (`1`) | (9, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 43 |
| 38 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 41 |
| 39 | Di chuyển hướng 1 (`1`) | (10, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 39 |
| 40-41 | Di chuyển hướng 1 (`1`) | (11, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 38 |
| 42 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(11, 13)) | 36 |
| 43-44 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 35 |
| 45 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 33 |
| 46-47 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 32 |
| 48-49 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 31 |
| 50 | Di chuyển hướng 3 (`3`) | (13, 16) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 29 |
| 51-52 | Di chuyển hướng 2 (`2`) | (14, 17) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 28 |
| 53-54 | Di chuyển hướng 3 (`3`) | (15, 17) | (15, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 18)) | 27 |
| 55-56 | Di chuyển hướng 2 (`2`) | (15, 18) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 26 |
| 57-58 | Di chuyển hướng 2 (`2`) | (16, 18) | (17, 18) | Dự kiến đến điểm hẹn tọa độ (17, 18) | 25 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (5, 4) (ô=109)
- Nhiên liệu đầu ngày: 53
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(23, 5))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(23, 5))
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 1, 0, 1, 1, 2, 3, 3, 3, 4, 3, 3, 2, 1, 2, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 4) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 52 |
| 2-3 | Di chuyển hướng 3 (`3`) | (6, 4) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 51 |
| 4 | Di chuyển hướng 2 (`2`) | (7, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 49 |
| 5 | Di chuyển hướng 2 (`2`) | (8, 5) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 47 |
| 6-7 | Di chuyển hướng 3 (`3`) | (9, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 46 |
| 8-9 | Di chuyển hướng 3 (`3`) | (9, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 45 |
| 10-11 | Di chuyển hướng 3 (`3`) | (10, 7) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 44 |
| 12-13 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đến điểm hẹn tọa độ (11, 8) | 43 |
| 14-15 | Di chuyển hướng 2 (`2`) | (11, 8) | (12, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(12, 8)) | 42 |
| 16-17 | Di chuyển hướng 2 (`2`) | (12, 8) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 41 |
| 18 | Di chuyển hướng 2 (`2`) | (13, 8) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 39 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 8) | (15, 7) | Dự kiến đến điểm hẹn tọa độ (15, 7) | 38 |
| 21 | Di chuyển hướng 1 (`1`) | (15, 7) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 36 |
| 22-23 | Di chuyển hướng 1 (`1`) | (15, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 35 |
| 24-25 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 34 |
| 26-27 | Di chuyển hướng 1 (`1`) | (16, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 33 |
| 28-29 | Di chuyển hướng 0 (`0`) | (17, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 32 |
| 30 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 30 |
| 31-32 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(17, 0)) | 29 |
| 33-34 | Di chuyển hướng 2 (`2`) | (17, 0) | (18, 0) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(18, 0)) | 28 |
| 35-36 | Di chuyển hướng 3 (`3`) | (18, 0) | (19, 1) | Dự kiến đến điểm hẹn tọa độ (19, 1) | 27 |
| 37-39 | Di chuyển hướng 3 (`3`) | (19, 1) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 25 |
| 40-41 | Di chuyển hướng 3 (`3`) | (19, 2) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 24 |
| 42-43 | Di chuyển hướng 4 (`4`) | (20, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 23 |
| 44 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(20, 5)) | 21 |
| 45-46 | Di chuyển hướng 3 (`3`) | (20, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 20 |
| 47-48 | Di chuyển hướng 2 (`2`) | (20, 6) | (21, 6) | Dự kiến đến điểm hẹn tọa độ (21, 6) | 19 |
| 49 | Di chuyển hướng 1 (`1`) | (21, 6) | (22, 5) | Dự kiến đến điểm hẹn tọa độ (22, 5) | 17 |
| 50-51 | Di chuyển hướng 2 (`2`) | (22, 5) | (23, 5) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 16 |
| 52-58 | Chờ 7 bước (`-7`) | (23, 5) | (23, 5) | Dự kiến đứng yên tại (23, 5); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(23, 5)) | 16 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 20) (ô=524)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(4, 20))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(4, 20))
- Mảng hành động đã gửi server: `[-59]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-58 | Chờ 59 bước (`-59`) | (4, 20) | (4, 20) | Dự kiến đứng yên tại (4, 20); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(4, 20)) | 1 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (1, 1) (ô=27)
- Nhiên liệu đầu ngày: 48
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 5)
- Mảng hành động đã gửi server: `[0, 3, 4, 3, 4, 4, 3, 3, 4, 4, 1, 1, 0, 1, 0, 1, 1, 1, 0, 2, 2, 2, 2, 3, 3, 2, 3, 3, 3, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 47 |
| 2-3 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 1)) | 46 |
| 4-5 | Di chuyển hướng 4 (`4`) | (1, 1) | (0, 2) | Dự kiến đến điểm hẹn tọa độ (0, 2) | 45 |
| 6-7 | Di chuyển hướng 3 (`3`) | (0, 2) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 44 |
| 8-9 | Di chuyển hướng 4 (`4`) | (1, 3) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 43 |
| 10-11 | Di chuyển hướng 4 (`4`) | (0, 4) | (0, 5) | Dự kiến đến điểm hẹn tọa độ (0, 5) | 42 |
| 12-13 | Di chuyển hướng 3 (`3`) | (0, 5) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 41 |
| 14-15 | Di chuyển hướng 3 (`3`) | (0, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 40 |
| 16-18 | Di chuyển hướng 4 (`4`) | (1, 7) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 38 |
| 19-20 | Di chuyển hướng 4 (`4`) | (0, 8) | (0, 9) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(0, 9)) | 37 |
| 21-22 | Di chuyển hướng 1 (`1`) | (0, 9) | (0, 8) | Dự kiến đến điểm hẹn tọa độ (0, 8) | 36 |
| 23-24 | Di chuyển hướng 1 (`1`) | (0, 8) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 35 |
| 25-27 | Di chuyển hướng 0 (`0`) | (1, 7) | (0, 6) | Dự kiến đến điểm hẹn tọa độ (0, 6) | 33 |
| 28-29 | Di chuyển hướng 1 (`1`) | (0, 6) | (1, 5) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(1, 5)) | 32 |
| 30-31 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đến điểm hẹn tọa độ (0, 4) | 31 |
| 32-33 | Di chuyển hướng 1 (`1`) | (0, 4) | (1, 3) | Dự kiến đến điểm hẹn tọa độ (1, 3) | 30 |
| 34-35 | Di chuyển hướng 1 (`1`) | (1, 3) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 29 |
| 36-37 | Di chuyển hướng 1 (`1`) | (1, 2) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 28 |
| 38-39 | Di chuyển hướng 0 (`0`) | (2, 1) | (1, 0) | Dự kiến đến điểm hẹn tọa độ (1, 0) | 27 |
| 40 | Di chuyển hướng 2 (`2`) | (1, 0) | (2, 0) | Dự kiến đến điểm hẹn tọa độ (2, 0) | 25 |
| 41 | Di chuyển hướng 2 (`2`) | (2, 0) | (3, 0) | Dự kiến đến điểm hẹn tọa độ (3, 0) | 23 |
| 42-43 | Di chuyển hướng 2 (`2`) | (3, 0) | (4, 0) | Dự kiến đến điểm hẹn tọa độ (4, 0) | 22 |
| 44-45 | Di chuyển hướng 2 (`2`) | (4, 0) | (5, 0) | Dự kiến đến điểm hẹn tọa độ (5, 0) | 21 |
| 46 | Di chuyển hướng 3 (`3`) | (5, 0) | (6, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(6, 1)) | 19 |
| 47-48 | Di chuyển hướng 3 (`3`) | (6, 1) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 18 |
| 49-50 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(7, 2)) | 17 |
| 51-52 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 16 |
| 53 | Di chuyển hướng 3 (`3`) | (8, 3) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 14 |
| 54-55 | Di chuyển hướng 3 (`3`) | (8, 4) | (9, 5) | Dự kiến đạt mục tiêu Spot #25 (thương hiệu=25, tọa độ=(9, 5)) | 13 |
| 56-57 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 12 |
| 58 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 10 |

### Xe #6 - Tuần tra

- Vị trí đầu ngày: (24, 12) (ô=336)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(24, 12))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(24, 12))
- Mảng hành động đã gửi server: `[-59]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-58 | Chờ 59 bước (`-59`) | (24, 12) | (24, 12) | Dự kiến đứng yên tại (24, 12); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(24, 12)) | 1 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (5, 3) (ô=83)
- Nhiên liệu đầu ngày: 54
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(16, 12))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(16, 12))
- Mảng hành động đã gửi server: `[4, 4, 3, 3, 3, 3, 3, 4, 4, 5, 5, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, -13]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 54 |
| 2 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 54 |
| 3-5 | Di chuyển hướng 3 (`3`) | (4, 5) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 54 |
| 6-7 | Di chuyển hướng 3 (`3`) | (4, 6) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 54 |
| 8-9 | Di chuyển hướng 3 (`3`) | (5, 7) | (5, 8) | Dự kiến đến điểm hẹn tọa độ (5, 8) | 54 |
| 10-11 | Di chuyển hướng 3 (`3`) | (5, 8) | (6, 9) | Dự kiến đến điểm hẹn tọa độ (6, 9) | 54 |
| 12-13 | Di chuyển hướng 3 (`3`) | (6, 9) | (6, 10) | Dự kiến đến điểm hẹn tọa độ (6, 10) | 54 |
| 14 | Di chuyển hướng 4 (`4`) | (6, 10) | (6, 11) | Dự kiến đến điểm hẹn tọa độ (6, 11) | 54 |
| 15-17 | Di chuyển hướng 4 (`4`) | (6, 11) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 54 |
| 18 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 54 |
| 19-20 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(3, 12)) | 54 |
| 21-22 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 54 |
| 23-24 | Di chuyển hướng 2 (`2`) | (4, 12) | (5, 12) | Dự kiến đến điểm hẹn tọa độ (5, 12) | 54 |
| 25 | Di chuyển hướng 2 (`2`) | (5, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 54 |
| 26 | Di chuyển hướng 3 (`3`) | (6, 12) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 54 |
| 27 | Di chuyển hướng 3 (`3`) | (7, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 54 |
| 28-29 | Di chuyển hướng 3 (`3`) | (7, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 54 |
| 30-31 | Di chuyển hướng 3 (`3`) | (8, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 54 |
| 32 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 54 |
| 33 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 54 |
| 34 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 54 |
| 35-36 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 54 |
| 37-38 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 54 |
| 39 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 54 |
| 40-41 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 54 |
| 42 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 54 |
| 43-44 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 54 |
| 45 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 54 |
| 46-58 | Chờ 13 bước (`-13`) | (16, 12) | (16, 12) | Dự kiến đứng yên tại (16, 12); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(16, 12)) | 54 |

