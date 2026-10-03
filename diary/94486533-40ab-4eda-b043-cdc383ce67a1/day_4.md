# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 51
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 32 | #3 | #5 | (7, 15) | 0 | 51 |
| 34 | #2 | #5 | (6, 15) | 0 | 51 |
| 35 | #3 | #5 | (6, 15) | 50 | 51 |
| 40 | #4 | #5 | (8, 13) | 5 | 51 |
| 50 | #3 | #5 | (7, 19) | 43 | 51 |
| 51 | #4 | #5 | (7, 19) | 41 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 12) (ô=267)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(3, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(3, 6))
- Mảng hành động đã gửi server: `[0, 5, 0, 4, 1, 1, 1, 1, 1, -31]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 13 |
| 3 | Di chuyển hướng 5 (`5`) | (3, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 11 |
| 4-5 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 10 |
| 6-7 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 9 |
| 8-9 | Di chuyển hướng 1 (`1`) | (1, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 8 |
| 10-11 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 7 |
| 12-13 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 6 |
| 14-16 | Di chuyển hướng 1 (`1`) | (2, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 4 |
| 17-19 | Di chuyển hướng 1 (`1`) | (3, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 2 |
| 20-50 | Chờ 31 bước (`-31`) | (3, 6) | (3, 6) | Dự kiến đứng yên tại (3, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (17, 1) (ô=39)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=8, tọa độ=(21, 4))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=8, tọa độ=(21, 4))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 4, 3, 3, 3, 4, 3, 0, 5, 0, 1, 1, 2, 1, 1, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (17, 1) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 32 |
| 2 | Di chuyển hướng 3 (`3`) | (18, 1) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 30 |
| 3 | Di chuyển hướng 3 (`3`) | (18, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 28 |
| 4-6 | Di chuyển hướng 3 (`3`) | (19, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 26 |
| 7 | Di chuyển hướng 4 (`4`) | (19, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 24 |
| 8 | Di chuyển hướng 3 (`3`) | (19, 5) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 22 |
| 9-10 | Di chuyển hướng 3 (`3`) | (19, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 21 |
| 11-12 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 20 |
| 13 | Di chuyển hướng 4 (`4`) | (20, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 18 |
| 14 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 16 |
| 15-16 | Di chuyển hướng 0 (`0`) | (20, 10) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 15 |
| 17 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 13 |
| 18 | Di chuyển hướng 0 (`0`) | (19, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 11 |
| 19-20 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 10 |
| 21-22 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 9 |
| 23-24 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 8 |
| 25-26 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 7 |
| 27-29 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 5 |
| 30-50 | Chờ 21 bước (`-21`) | (21, 4) | (21, 4) | Dự kiến đứng yên tại (21, 4); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 5 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 19) (ô=425)
- Nhiên liệu đầu ngày: 7
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 20)
- Mảng hành động đã gửi server: `[1, 1, 0, 0, 5, -25, 2, 3, 3, 2, 3, 2, 3, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 6 |
| 2 | Di chuyển hướng 1 (`1`) | (7, 18) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 4 |
| 3-4 | Di chuyển hướng 0 (`0`) | (8, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 2 |
| 5-6 | Di chuyển hướng 0 (`0`) | (7, 16) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 1 |
| 7-8 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 0 |
| 9-33 | Chờ 25 bước (`-25`) | (6, 15) | (6, 15) | Dự kiến đứng yên tại (6, 15); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 51 |
| 34-35 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 50 |
| 36-37 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 49 |
| 38-39 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 48 |
| 40-41 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 46 |
| 42-43 | Di chuyển hướng 3 (`3`) | (9, 17) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 45 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 43 |
| 46-47 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 42 |
| 48-49 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 41 |
| 50 | Chờ 1 bước (`-1`) | (10, 20) | (10, 20) | Dự kiến đứng yên tại (10, 20); hướng tới tọa độ (10, 20) | 41 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 15) (ô=337)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Mảng hành động đã gửi server: `[-33, 5, 4, 5, 4, 3, 2, 3, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-32 | Chờ 33 bước (`-33`) | (7, 15) | (7, 15) | Dự kiến đứng yên tại (7, 15); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 51 |
| 35-36 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 50 |
| 37-38 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 49 |
| 39-40 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 48 |
| 41-42 | Di chuyển hướng 3 (`3`) | (4, 17) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 47 |
| 43-44 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 46 |
| 45-47 | Di chuyển hướng 3 (`3`) | (5, 18) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 44 |
| 48-49 | Di chuyển hướng 2 (`2`) | (6, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |
| 50 | Chờ 1 bước (`-1`) | (7, 19) | (7, 19) | Dự kiến đứng yên tại (7, 19); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (17, 3) (ô=83)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Mảng hành động đã gửi server: `[1, 1, 0, 4, 4, 4, 5, 5, 4, 4, 4, 5, 5, 3, 3, 4, 4, 4, 4, 5, 4, 4, 4, 3, 3, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (17, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 36 |
| 1-2 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đến điểm hẹn tọa độ (18, 1) | 35 |
| 3 | Di chuyển hướng 0 (`0`) | (18, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 33 |
| 4-5 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 32 |
| 6-7 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 31 |
| 8-10 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 29 |
| 11-13 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 27 |
| 14 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 25 |
| 15-17 | Di chuyển hướng 4 (`4`) | (14, 3) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 23 |
| 18 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 21 |
| 19-21 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 19 |
| 22 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 17 |
| 23 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 15 |
| 24-25 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 14 |
| 26-27 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 13 |
| 28-29 | Di chuyển hướng 4 (`4`) | (11, 8) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 12 |
| 30-32 | Di chuyển hướng 4 (`4`) | (11, 9) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 10 |
| 33-34 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 9 |
| 35-36 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 8 |
| 37-38 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 7 |
| 39 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 40 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 49 |
| 41-43 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 47 |
| 44-45 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 46 |
| 46-47 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 45 |
| 48-49 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 43 |
| 50 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (21, 5) (ô=131)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(7, 19))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 4, 5, 5, 5, 5, 5, 4, 4, 4, 5, 1, 1, 2, 3, 4, 4, 3, 4, 4, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 51 |
| 3-4 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 51 |
| 5-6 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 51 |
| 7-8 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 51 |
| 9 | Di chuyển hướng 4 (`4`) | (19, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 51 |
| 10 | Di chuyển hướng 4 (`4`) | (18, 10) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 51 |
| 11-12 | Di chuyển hướng 5 (`5`) | (18, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 51 |
| 13 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 51 |
| 14 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 51 |
| 15-17 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 51 |
| 18-19 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 51 |
| 20 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 51 |
| 21 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 51 |
| 22 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 51 |
| 23-24 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 51 |
| 25-26 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 51 |
| 27 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 28 | Di chuyển hướng 4 (`4`) | (8, 13) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 51 |
| 29-31 | Di chuyển hướng 4 (`4`) | (7, 14) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 51 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 51 |
| 34-35 | Di chuyển hướng 1 (`1`) | (6, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 51 |
| 36-38 | Di chuyển hướng 1 (`1`) | (6, 14) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 51 |
| 39 | Di chuyển hướng 2 (`2`) | (7, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 40 | Di chuyển hướng 3 (`3`) | (8, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 51 |
| 41-42 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 51 |
| 43 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 51 |
| 44-45 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 51 |
| 46-47 | Di chuyển hướng 4 (`4`) | (8, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 51 |
| 48 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |
| 49-50 | Chờ 2 bước (`-2`) | (7, 19) | (7, 19) | Dự kiến đứng yên tại (7, 19); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 51 |

