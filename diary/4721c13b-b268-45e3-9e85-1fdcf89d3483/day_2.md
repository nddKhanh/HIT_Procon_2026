# Nhật ký hành trình - Ngày 2

- Số bước trong ngày: 54
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 13 | #1 | #5 | (5, 16) | 2 | 67 |
| 53 | #0 | #5 | (5, 16) | 18 | 67 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (14, 11) (ô=245)
- Nhiên liệu đầu ngày: 58
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 16))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 16))
- Mảng hành động đã gửi server: `[0, 5, 0, 0, 5, 5, 5, 5, 5, 0, 5, 5, 0, 0, 5, 4, 3, 4, 4, 3, 3, 3, 3, 2, 3, 3, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 57 |
| 2-3 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đến điểm hẹn tọa độ (12, 10) | 56 |
| 4 | Di chuyển hướng 0 (`0`) | (12, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 54 |
| 5 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 52 |
| 6-7 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 51 |
| 8-9 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 50 |
| 10 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 48 |
| 11-13 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 46 |
| 14 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 44 |
| 15-16 | Di chuyển hướng 0 (`0`) | (6, 8) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 43 |
| 17-18 | Di chuyển hướng 5 (`5`) | (6, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 42 |
| 19-20 | Di chuyển hướng 5 (`5`) | (5, 7) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 41 |
| 21 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 39 |
| 22-23 | Di chuyển hướng 0 (`0`) | (3, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 38 |
| 24-26 | Di chuyển hướng 5 (`5`) | (3, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 5)) | 36 |
| 27-28 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đến điểm hẹn tọa độ (1, 6) | 35 |
| 29-31 | Di chuyển hướng 3 (`3`) | (1, 6) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 33 |
| 32-34 | Di chuyển hướng 4 (`4`) | (2, 7) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 31 |
| 35-36 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 30 |
| 37-38 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 29 |
| 39 | Di chuyển hướng 3 (`3`) | (1, 10) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 27 |
| 40-41 | Di chuyển hướng 3 (`3`) | (2, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 26 |
| 42 | Di chuyển hướng 3 (`3`) | (2, 12) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 24 |
| 43-44 | Di chuyển hướng 2 (`2`) | (3, 13) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 23 |
| 45-47 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 21 |
| 48-49 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 20 |
| 50-52 | Di chuyển hướng 3 (`3`) | (5, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 67 |
| 53 | Chờ 1 bước (`-1`) | (5, 16) | (5, 16) | Dự kiến đứng yên tại (5, 16); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 67 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (5, 16) (ô=341)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(11, 8))
- Mảng hành động đã gửi server: `[-14, 0, 0, 0, 5, 0, 0, 0, 0, 1, 2, 2, 2, 3, 2, 1, 2, 2, 2, 2, 2, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-13 | Chờ 14 bước (`-14`) | (5, 16) | (5, 16) | Dự kiến đứng yên tại (5, 16); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 67 |
| 14-15 | Di chuyển hướng 0 (`0`) | (5, 16) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 66 |
| 16-18 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 64 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 63 |
| 21-23 | Di chuyển hướng 5 (`5`) | (4, 13) | (3, 13) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 13)) | 61 |
| 24-25 | Di chuyển hướng 0 (`0`) | (3, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 60 |
| 26 | Di chuyển hướng 0 (`0`) | (2, 12) | (2, 11) | Dự kiến đến điểm hẹn tọa độ (2, 11) | 58 |
| 27-28 | Di chuyển hướng 0 (`0`) | (2, 11) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 57 |
| 29 | Di chuyển hướng 0 (`0`) | (1, 10) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 55 |
| 30-31 | Di chuyển hướng 1 (`1`) | (1, 9) | (1, 8) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(1, 8)) | 54 |
| 32-33 | Di chuyển hướng 2 (`2`) | (1, 8) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 53 |
| 34-36 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 51 |
| 37-38 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 50 |
| 39 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 48 |
| 40-41 | Di chuyển hướng 2 (`2`) | (5, 9) | (6, 9) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(6, 9)) | 47 |
| 42-43 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 46 |
| 44-45 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đến điểm hẹn tọa độ (7, 8) | 45 |
| 46 | Di chuyển hướng 2 (`2`) | (7, 8) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 43 |
| 47-49 | Di chuyển hướng 2 (`2`) | (8, 8) | (9, 8) | Dự kiến đến điểm hẹn tọa độ (9, 8) | 41 |
| 50 | Di chuyển hướng 2 (`2`) | (9, 8) | (10, 8) | Dự kiến đến điểm hẹn tọa độ (10, 8) | 39 |
| 51-52 | Di chuyển hướng 2 (`2`) | (10, 8) | (11, 8) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 38 |
| 53 | Chờ 1 bước (`-1`) | (11, 8) | (11, 8) | Dự kiến đứng yên tại (11, 8); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(11, 8)) | 38 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (10, 15) (ô=325)
- Nhiên liệu đầu ngày: 66
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 11)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 11)
- Mảng hành động đã gửi server: `[2, 3, 3, 4, 3, 3, 1, 1, 2, 2, 0, 1, 0, 0, 1, 0, 0, 0, 2, 2, 3, 2, 2, 3, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(11, 15)) | 65 |
| 2-3 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 64 |
| 4-5 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 63 |
| 6 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 61 |
| 7-8 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 60 |
| 9-11 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 20)) | 58 |
| 12-13 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 57 |
| 14-16 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 18)) | 55 |
| 17-18 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 54 |
| 19-20 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 53 |
| 21-22 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 52 |
| 23-24 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 51 |
| 25-26 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 50 |
| 27 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 48 |
| 28-29 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 47 |
| 30-31 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 46 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 45 |
| 34-35 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 44 |
| 36-37 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 43 |
| 38-40 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 41 |
| 41-42 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 40 |
| 43-45 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 38 |
| 46-47 | Di chuyển hướng 2 (`2`) | (17, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 37 |
| 48-50 | Di chuyển hướng 3 (`3`) | (18, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(18, 12)) | 35 |
| 51-52 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 34 |
| 53 | Chờ 1 bước (`-1`) | (19, 11) | (19, 11) | Dự kiến đứng yên tại (19, 11); hướng tới tọa độ (19, 11) | 34 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (11, 15) (ô=326)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=2, tọa độ=(16, 1))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=2, tọa độ=(16, 1))
- Mảng hành động đã gửi server: `[2, 3, 3, 3, 2, 2, 0, 1, 0, 0, 1, 1, 2, 1, 0, 1, 1, 0, 1, 1, 2, 0, 0, 0, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (11, 15) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 66 |
| 2 | Di chuyển hướng 3 (`3`) | (12, 15) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 64 |
| 3-4 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 63 |
| 5-7 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 18)) | 61 |
| 8-9 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 60 |
| 10-11 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 59 |
| 12-13 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 58 |
| 14-15 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 57 |
| 16-17 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 56 |
| 18 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 54 |
| 19-20 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 53 |
| 21-22 | Di chuyển hướng 1 (`1`) | (15, 13) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 52 |
| 23-24 | Di chuyển hướng 2 (`2`) | (15, 12) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 51 |
| 25-26 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 49 |
| 27-28 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 48 |
| 29-31 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 46 |
| 32-34 | Di chuyển hướng 1 (`1`) | (17, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 44 |
| 35-36 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 43 |
| 37-39 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 41 |
| 40-41 | Di chuyển hướng 1 (`1`) | (17, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 40 |
| 42 | Di chuyển hướng 2 (`2`) | (18, 5) | (19, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(19, 5)) | 38 |
| 43-44 | Di chuyển hướng 0 (`0`) | (19, 5) | (18, 4) | Dự kiến đến điểm hẹn tọa độ (18, 4) | 37 |
| 45-46 | Di chuyển hướng 0 (`0`) | (18, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(18, 3)) | 36 |
| 47-48 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 35 |
| 49-51 | Di chuyển hướng 5 (`5`) | (17, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 33 |
| 52-53 | Di chuyển hướng 0 (`0`) | (16, 2) | (16, 1) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=2, tọa độ=(16, 1)) | 32 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 15) (ô=326)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(19, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(19, 10)
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 3, 1, 1, 2, 2, 0, 1, 0, 0, 1, 0, 0, 0, 2, 2, 3, 2, 2, 3, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 66 |
| 2-3 | Di chuyển hướng 3 (`3`) | (11, 16) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 65 |
| 4 | Di chuyển hướng 4 (`4`) | (12, 17) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 63 |
| 5-6 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 62 |
| 7-9 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 20)) | 60 |
| 10-11 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 59 |
| 12-14 | Di chuyển hướng 1 (`1`) | (13, 19) | (13, 18) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 18)) | 57 |
| 15-16 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 56 |
| 17-18 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(15, 18)) | 55 |
| 19-20 | Di chuyển hướng 0 (`0`) | (15, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=0, tọa độ=(15, 17)) | 54 |
| 21-22 | Di chuyển hướng 1 (`1`) | (15, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 53 |
| 23-24 | Di chuyển hướng 0 (`0`) | (15, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 52 |
| 25 | Di chuyển hướng 0 (`0`) | (15, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 50 |
| 26-27 | Di chuyển hướng 1 (`1`) | (14, 14) | (15, 13) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(15, 13)) | 49 |
| 28-29 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 48 |
| 30-31 | Di chuyển hướng 0 (`0`) | (14, 12) | (14, 11) | Dự kiến đến điểm hẹn tọa độ (14, 11) | 47 |
| 32-33 | Di chuyển hướng 0 (`0`) | (14, 11) | (13, 10) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=3, tọa độ=(13, 10)) | 46 |
| 34-35 | Di chuyển hướng 2 (`2`) | (13, 10) | (14, 10) | Dự kiến đến điểm hẹn tọa độ (14, 10) | 45 |
| 36-38 | Di chuyển hướng 2 (`2`) | (14, 10) | (15, 10) | Dự kiến đến điểm hẹn tọa độ (15, 10) | 43 |
| 39-40 | Di chuyển hướng 3 (`3`) | (15, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 42 |
| 41-43 | Di chuyển hướng 2 (`2`) | (16, 11) | (17, 11) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(17, 11)) | 40 |
| 44-45 | Di chuyển hướng 2 (`2`) | (17, 11) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 39 |
| 46-48 | Di chuyển hướng 3 (`3`) | (18, 11) | (18, 12) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=1, tọa độ=(18, 12)) | 37 |
| 49-50 | Di chuyển hướng 1 (`1`) | (18, 12) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 36 |
| 51-53 | Di chuyển hướng 1 (`1`) | (19, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 34 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (11, 15) (ô=326)
- Nhiên liệu đầu ngày: 67
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(5, 16))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(5, 16))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 4, -41]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 67 |
| 2-3 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 67 |
| 4-5 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=4, tọa độ=(8, 15)) | 67 |
| 6-7 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 67 |
| 8-10 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến đến điểm hẹn tọa độ (6, 15) | 67 |
| 11-12 | Di chuyển hướng 4 (`4`) | (6, 15) | (5, 16) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 67 |
| 13-53 | Chờ 41 bước (`-41`) | (5, 16) | (5, 16) | Dự kiến đứng yên tại (5, 16); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 16)) | 67 |

