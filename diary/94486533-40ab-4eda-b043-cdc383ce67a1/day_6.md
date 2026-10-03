# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 55
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #5 | (18, 8) | 38 | 51 |
| 19 | #4 | #5 | (9, 12) | 5 | 51 |
| 32 | #2 | #5 | (4, 17) | 1 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (3, 6) (ô=135)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(3, 6))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(3, 6))
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (3, 6) | (3, 6) | Dự kiến đứng yên tại (3, 6); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (18, 9) (ô=216)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(11, 8))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(11, 8))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 1, 1, 0, 5, 0, 5, 5, 0, 1, 4, 4, 4, 5, 4, 5, 4, 4, 5, 5, 3, 3, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 38 |
| 1-2 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 50 |
| 3-4 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 49 |
| 5-6 | Di chuyển hướng 2 (`2`) | (19, 6) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 48 |
| 7-8 | Di chuyển hướng 1 (`1`) | (20, 6) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 47 |
| 9-11 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 45 |
| 12-13 | Di chuyển hướng 0 (`0`) | (21, 4) | (21, 3) | Dự kiến đến điểm hẹn tọa độ (21, 3) | 44 |
| 14-16 | Di chuyển hướng 5 (`5`) | (21, 3) | (20, 3) | Dự kiến đến điểm hẹn tọa độ (20, 3) | 42 |
| 17-18 | Di chuyển hướng 0 (`0`) | (20, 3) | (19, 2) | Dự kiến đến điểm hẹn tọa độ (19, 2) | 41 |
| 19 | Di chuyển hướng 5 (`5`) | (19, 2) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 39 |
| 20 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 37 |
| 21-22 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 36 |
| 23-24 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(17, 0)) | 35 |
| 25-26 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 34 |
| 27-28 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 33 |
| 29-31 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 31 |
| 32-34 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 29 |
| 35 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 27 |
| 36-38 | Di chuyển hướng 5 (`5`) | (14, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 25 |
| 39 | Di chuyển hướng 4 (`4`) | (13, 4) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 23 |
| 40-42 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 21 |
| 43 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 19 |
| 44 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 17 |
| 45-46 | Di chuyển hướng 3 (`3`) | (10, 6) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 16 |
| 47-48 | Di chuyển hướng 3 (`3`) | (11, 7) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 15 |
| 49-54 | Chờ 6 bước (`-6`) | (11, 8) | (11, 8) | Dự kiến đứng yên tại (11, 8); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 15 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 17) (ô=378)
- Nhiên liệu đầu ngày: 1
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(2, 11))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(2, 11))
- Mảng hành động đã gửi server: `[-33, 0, 0, 0, 1, 0, 0, 0, 4, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-32 | Chờ 33 bước (`-33`) | (4, 17) | (4, 17) | Dự kiến đứng yên tại (4, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 51 |
| 33-34 | Di chuyển hướng 0 (`0`) | (4, 17) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 50 |
| 35-37 | Di chuyển hướng 0 (`0`) | (3, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 48 |
| 38-40 | Di chuyển hướng 0 (`0`) | (3, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 46 |
| 41-42 | Di chuyển hướng 1 (`1`) | (2, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 45 |
| 43-44 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 44 |
| 45-47 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 42 |
| 48-49 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 41 |
| 50-51 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 40 |
| 52-53 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 39 |
| 54 | Chờ 1 bước (`-1`) | (2, 11) | (2, 11) | Dự kiến đứng yên tại (2, 11); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 39 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (18, 2) (ô=62)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(20, 10))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(20, 10))
- Mảng hành động đã gửi server: `[3, 3, 4, 1, 2, 2, 4, 4, 4, 3, 4, 3, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 3 (`3`) | (18, 2) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 19 |
| 1-3 | Di chuyển hướng 3 (`3`) | (19, 3) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 17 |
| 4 | Di chuyển hướng 4 (`4`) | (19, 4) | (19, 5) | Dự kiến đến điểm hẹn tọa độ (19, 5) | 15 |
| 5 | Di chuyển hướng 1 (`1`) | (19, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 13 |
| 6 | Di chuyển hướng 2 (`2`) | (19, 4) | (20, 4) | Dự kiến đến điểm hẹn tọa độ (20, 4) | 11 |
| 7-9 | Di chuyển hướng 2 (`2`) | (20, 4) | (21, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 9 |
| 10-11 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 8 |
| 12-14 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 6 |
| 15-16 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 5 |
| 17-18 | Di chuyển hướng 3 (`3`) | (20, 7) | (20, 8) | Dự kiến đến điểm hẹn tọa độ (20, 8) | 4 |
| 19 | Di chuyển hướng 4 (`4`) | (20, 8) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 2 |
| 20-21 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 0 |
| 22-54 | Chờ 33 bước (`-33`) | (20, 10) | (20, 10) | Dự kiến đứng yên tại (20, 10); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 0 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 18) (ô=400)
- Nhiên liệu đầu ngày: 17
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(10, 20)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(10, 20)
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 3, 1, 1, 1, 1, 4, 4, 4, 4, 4, 3, 4, 5, 2, 2, 1, 2, 2, 3, 4, 3, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (4, 18) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 16 |
| 2-4 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 14 |
| 5-6 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 13 |
| 7-8 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 12 |
| 9-10 | Di chuyển hướng 3 (`3`) | (7, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 11 |
| 11-12 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 10 |
| 13 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 8 |
| 14-15 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 7 |
| 16-18 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 51 |
| 19-20 | Di chuyển hướng 4 (`4`) | (9, 12) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 50 |
| 21-23 | Di chuyển hướng 4 (`4`) | (9, 13) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 48 |
| 24-25 | Di chuyển hướng 4 (`4`) | (8, 14) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 47 |
| 26 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 45 |
| 27-28 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 44 |
| 29-31 | Di chuyển hướng 3 (`3`) | (7, 17) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 42 |
| 32-33 | Di chuyển hướng 4 (`4`) | (7, 18) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 40 |
| 34-35 | Di chuyển hướng 5 (`5`) | (7, 19) | (6, 19) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(6, 19)) | 39 |
| 36-37 | Di chuyển hướng 2 (`2`) | (6, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 38 |
| 38-39 | Di chuyển hướng 2 (`2`) | (7, 19) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 37 |
| 40 | Di chuyển hướng 1 (`1`) | (8, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 35 |
| 41-43 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 33 |
| 44-45 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 31 |
| 46-47 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 30 |
| 48-49 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 29 |
| 50-51 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 27 |
| 52-53 | Di chuyển hướng 0 (`0`) | (11, 21) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 26 |
| 54 | Chờ 1 bước (`-1`) | (10, 20) | (10, 20) | Dự kiến đứng yên tại (10, 20); hướng tới tọa độ (10, 20) | 26 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (19, 7) (ô=173)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #9 (thương hiệu=9, tọa độ=(4, 17))
- Địa điểm đích kế hoạch: Spot #9 (thương hiệu=9, tọa độ=(4, 17))
- Mảng hành động đã gửi server: `[4, 4, 4, 4, 5, 5, 5, 4, 5, 5, 5, 5, 5, 4, 5, 5, 4, 4, 4, 4, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 51 |
| 2-3 | Di chuyển hướng 4 (`4`) | (18, 8) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 51 |
| 4 | Di chuyển hướng 4 (`4`) | (18, 9) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 51 |
| 5-6 | Di chuyển hướng 4 (`4`) | (17, 10) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 51 |
| 7 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 51 |
| 8 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 51 |
| 9-11 | Di chuyển hướng 5 (`5`) | (15, 11) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 51 |
| 12-13 | Di chuyển hướng 4 (`4`) | (14, 11) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 51 |
| 14 | Di chuyển hướng 5 (`5`) | (13, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 51 |
| 15 | Di chuyển hướng 5 (`5`) | (12, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 51 |
| 16 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 51 |
| 17-18 | Di chuyển hướng 5 (`5`) | (10, 12) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 51 |
| 19-20 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 51 |
| 21 | Di chuyển hướng 4 (`4`) | (8, 12) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 22 | Di chuyển hướng 5 (`5`) | (8, 13) | (7, 13) | Dự kiến đến điểm hẹn tọa độ (7, 13) | 51 |
| 23 | Di chuyển hướng 5 (`5`) | (7, 13) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 51 |
| 24 | Di chuyển hướng 4 (`4`) | (6, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 51 |
| 25-26 | Di chuyển hướng 4 (`4`) | (5, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 51 |
| 27-29 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 51 |
| 30-31 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 51 |
| 32-54 | Chờ 23 bước (`-23`) | (4, 17) | (4, 17) | Dự kiến đứng yên tại (4, 17); mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 51 |

