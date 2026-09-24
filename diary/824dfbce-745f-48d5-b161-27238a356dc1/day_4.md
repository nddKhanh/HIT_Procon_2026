# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 54
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 2 | #1 | #5 | (19, 14) | 48 | 49 |
| 2 | #3 | #4 | (14, 19) | 48 | 49 |
| 5 | #1 | #5 | (19, 13) | 47 | 49 |
| 28 | #0 | #5 | (19, 13) | 2 | 49 |
| 28 | #2 | #4 | (4, 12) | 5 | 49 |
| 49 | #3 | #4 | (4, 12) | 17 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 8) (ô=188)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 16)
- Mảng hành động đã gửi server: `[0, 1, 0, 0, 3, 3, 4, 4, 4, 3, 4, 4, 4, 2, -1, 3, 3, 5, 5, 4, 4, 4, 4, 0, 0, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 8) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 20 |
| 2-4 | Di chuyển hướng 1 (`1`) | (20, 7) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 18 |
| 5 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 16 |
| 6-7 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(19, 4)) | 15 |
| 8-9 | Di chuyển hướng 3 (`3`) | (19, 4) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 14 |
| 10-11 | Di chuyển hướng 3 (`3`) | (20, 5) | (20, 6) | Dự kiến đến điểm hẹn tọa độ (20, 6) | 13 |
| 12 | Di chuyển hướng 4 (`4`) | (20, 6) | (20, 7) | Dự kiến đến điểm hẹn tọa độ (20, 7) | 11 |
| 13-15 | Di chuyển hướng 4 (`4`) | (20, 7) | (19, 8) | Dự kiến đến điểm hẹn tọa độ (19, 8) | 9 |
| 16-17 | Di chuyển hướng 4 (`4`) | (19, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 8 |
| 18-19 | Di chuyển hướng 3 (`3`) | (19, 9) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 7 |
| 20-21 | Di chuyển hướng 4 (`4`) | (19, 10) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 5 |
| 22-23 | Di chuyển hướng 4 (`4`) | (19, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 4 |
| 24-25 | Di chuyển hướng 4 (`4`) | (18, 12) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 3 |
| 26-27 | Di chuyển hướng 2 (`2`) | (18, 13) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 49 |
| 28 | Chờ 1 bước (`-1`) | (19, 13) | (19, 13) | Dự kiến đứng yên tại (19, 13); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 49 |
| 29-30 | Di chuyển hướng 3 (`3`) | (19, 13) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 48 |
| 31-33 | Di chuyển hướng 3 (`3`) | (19, 14) | (20, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(20, 15)) | 46 |
| 34-35 | Di chuyển hướng 5 (`5`) | (20, 15) | (19, 15) | Dự kiến đến điểm hẹn tọa độ (19, 15) | 45 |
| 36-38 | Di chuyển hướng 5 (`5`) | (19, 15) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 43 |
| 39 | Di chuyển hướng 4 (`4`) | (18, 15) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 41 |
| 40 | Di chuyển hướng 4 (`4`) | (17, 16) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 39 |
| 41-43 | Di chuyển hướng 4 (`4`) | (17, 17) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 37 |
| 44-45 | Di chuyển hướng 4 (`4`) | (16, 18) | (16, 19) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(16, 19)) | 36 |
| 46-47 | Di chuyển hướng 0 (`0`) | (16, 19) | (15, 18) | Dự kiến đến điểm hẹn tọa độ (15, 18) | 35 |
| 48-49 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đến điểm hẹn tọa độ (15, 17) | 34 |
| 50 | Di chuyển hướng 5 (`5`) | (15, 17) | (14, 17) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 17)) | 32 |
| 51-52 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 31 |
| 53 | Chờ 1 bước (`-1`) | (13, 16) | (13, 16) | Dự kiến đứng yên tại (13, 16); hướng tới tọa độ (13, 16) | 31 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (20, 15) (ô=335)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(19, 11))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(19, 11))
- Mảng hành động đã gửi server: `[0, 0, 0, 0, 5, 5, 5, 0, 5, 5, 5, 2, 3, 4, 3, 3, 3, 2, 1, 2, 2, 1, 1, 1, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 49 |
| 2-4 | Di chuyển hướng 0 (`0`) | (19, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 49 |
| 5-6 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 48 |
| 7-8 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 47 |
| 9-10 | Di chuyển hướng 5 (`5`) | (18, 11) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 46 |
| 11-12 | Di chuyển hướng 5 (`5`) | (17, 11) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 45 |
| 13-15 | Di chuyển hướng 5 (`5`) | (16, 11) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 43 |
| 16-17 | Di chuyển hướng 0 (`0`) | (15, 11) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 42 |
| 18 | Di chuyển hướng 5 (`5`) | (14, 10) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 40 |
| 19-20 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 39 |
| 21 | Di chuyển hướng 5 (`5`) | (12, 10) | (11, 10) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(11, 10)) | 37 |
| 22-23 | Di chuyển hướng 2 (`2`) | (11, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 36 |
| 24 | Di chuyển hướng 3 (`3`) | (12, 10) | (13, 11) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(13, 11)) | 34 |
| 25-26 | Di chuyển hướng 4 (`4`) | (13, 11) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 33 |
| 27-29 | Di chuyển hướng 3 (`3`) | (12, 12) | (13, 13) | Dự kiến đến điểm hẹn tọa độ (13, 13) | 31 |
| 30 | Di chuyển hướng 3 (`3`) | (13, 13) | (13, 14) | Dự kiến đến điểm hẹn tọa độ (13, 14) | 29 |
| 31-33 | Di chuyển hướng 3 (`3`) | (13, 14) | (14, 15) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(14, 15)) | 27 |
| 34-35 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 26 |
| 36-37 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 25 |
| 38 | Di chuyển hướng 2 (`2`) | (15, 14) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 23 |
| 39-40 | Di chuyển hướng 2 (`2`) | (16, 14) | (17, 14) | Dự kiến đến điểm hẹn tọa độ (17, 14) | 22 |
| 41-42 | Di chuyển hướng 1 (`1`) | (17, 14) | (18, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(18, 13)) | 21 |
| 43-44 | Di chuyển hướng 1 (`1`) | (18, 13) | (18, 12) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 12)) | 20 |
| 45-46 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 19 |
| 47-53 | Chờ 7 bước (`-7`) | (19, 11) | (19, 11) | Dự kiến đứng yên tại (19, 11); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(19, 11)) | 19 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (3, 11) (ô=234)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(4, 2))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(4, 2))
- Mảng hành động đã gửi server: `[0, 5, 3, 3, 2, 2, -13, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến đến điểm hẹn tọa độ (2, 10) | 13 |
| 3-5 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 10)) | 11 |
| 6-7 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 10 |
| 8-10 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 8 |
| 11-12 | Di chuyển hướng 2 (`2`) | (2, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 7 |
| 13-15 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 5 |
| 16-28 | Chờ 13 bước (`-13`) | (4, 12) | (4, 12) | Dự kiến đứng yên tại (4, 12); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 49 |
| 29-30 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 48 |
| 31-33 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 46 |
| 34-35 | Di chuyển hướng 1 (`1`) | (4, 10) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 45 |
| 36-38 | Di chuyển hướng 0 (`0`) | (5, 9) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 43 |
| 39 | Di chuyển hướng 1 (`1`) | (4, 8) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 41 |
| 40-42 | Di chuyển hướng 1 (`1`) | (5, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 39 |
| 43-44 | Di chuyển hướng 1 (`1`) | (5, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 38 |
| 45 | Di chuyển hướng 1 (`1`) | (6, 5) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 36 |
| 46-48 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 34 |
| 49-51 | Di chuyển hướng 0 (`0`) | (6, 3) | (5, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(5, 2)) | 32 |
| 52-53 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 2)) | 31 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (15, 19) (ô=414)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(4, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(4, 10)
- Mảng hành động đã gửi server: `[5, 5, 5, 4, 5, 5, 5, 4, 5, 5, 5, 5, 0, 0, 5, 0, 1, 1, 2, 1, 0, 0, 1, 2, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 49 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 48 |
| 4-6 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 46 |
| 7-9 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(11, 20)) | 44 |
| 10-11 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 43 |
| 12-13 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 42 |
| 14-15 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 41 |
| 16-17 | Di chuyển hướng 4 (`4`) | (8, 20) | (8, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(8, 21)) | 40 |
| 18-19 | Di chuyển hướng 5 (`5`) | (8, 21) | (7, 21) | Dự kiến đến điểm hẹn tọa độ (7, 21) | 39 |
| 20-22 | Di chuyển hướng 5 (`5`) | (7, 21) | (6, 21) | Dự kiến đến điểm hẹn tọa độ (6, 21) | 37 |
| 23-24 | Di chuyển hướng 5 (`5`) | (6, 21) | (5, 21) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(5, 21)) | 36 |
| 25-26 | Di chuyển hướng 5 (`5`) | (5, 21) | (4, 21) | Dự kiến đến điểm hẹn tọa độ (4, 21) | 35 |
| 27-28 | Di chuyển hướng 0 (`0`) | (4, 21) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 34 |
| 29 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 32 |
| 30-31 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 31 |
| 32 | Di chuyển hướng 0 (`0`) | (2, 19) | (1, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(1, 18)) | 29 |
| 33-34 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 28 |
| 35-36 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 27 |
| 37-38 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(3, 16)) | 26 |
| 39-40 | Di chuyển hướng 1 (`1`) | (3, 16) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 25 |
| 41 | Di chuyển hướng 0 (`0`) | (4, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 23 |
| 42-44 | Di chuyển hướng 0 (`0`) | (3, 14) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 21 |
| 45 | Di chuyển hướng 1 (`1`) | (3, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 19 |
| 46-48 | Di chuyển hướng 2 (`2`) | (3, 12) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 49 |
| 49-50 | Di chuyển hướng 1 (`1`) | (4, 12) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 48 |
| 51-53 | Di chuyển hướng 0 (`0`) | (5, 11) | (4, 10) | Dự kiến đến điểm hẹn tọa độ (4, 10) | 46 |

### Xe #4 - Tiếp tế

- Vị trí đầu ngày: (15, 19) (ô=414)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(4, 12))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(4, 12))
- Mảng hành động đã gửi server: `[5, 0, 5, 0, 0, 0, 5, 0, 5, 5, 5, 0, 5, 0, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 49 |
| 2-3 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 49 |
| 4-5 | Di chuyển hướng 5 (`5`) | (13, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 49 |
| 6-8 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 49 |
| 9 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 49 |
| 10-12 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 49 |
| 13-15 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 49 |
| 16-17 | Di chuyển hướng 0 (`0`) | (10, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 49 |
| 18 | Di chuyển hướng 5 (`5`) | (9, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 49 |
| 19 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 49 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 49 |
| 22-23 | Di chuyển hướng 0 (`0`) | (6, 14) | (6, 13) | Dự kiến đến điểm hẹn tọa độ (6, 13) | 49 |
| 24-25 | Di chuyển hướng 5 (`5`) | (6, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 49 |
| 26-27 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 49 |
| 28-53 | Chờ 26 bước (`-26`) | (4, 12) | (4, 12) | Dự kiến đứng yên tại (4, 12); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 49 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (20, 15) (ô=335)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(19, 13))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(19, 13))
- Mảng hành động đã gửi server: `[0, 0, -49]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (20, 15) | (19, 14) | Dự kiến đến điểm hẹn tọa độ (19, 14) | 49 |
| 2-4 | Di chuyển hướng 0 (`0`) | (19, 14) | (19, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 49 |
| 5-53 | Chờ 49 bước (`-49`) | (19, 13) | (19, 13) | Dự kiến đứng yên tại (19, 13); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(19, 13)) | 49 |

