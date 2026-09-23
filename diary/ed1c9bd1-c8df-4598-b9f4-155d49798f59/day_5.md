# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 50
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (13, 19) (ô=374)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, -7]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(14, 19)) | 40 |
| 2-3 | Di chuyển hướng 2 (`2`) | (14, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 39 |
| 4-5 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 38 |
| 6-7 | Di chuyển hướng 1 (`1`) | (15, 18) | (16, 17) | Dự kiến đến điểm hẹn tọa độ (16, 17) | 37 |
| 8-9 | Di chuyển hướng 0 (`0`) | (16, 17) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 36 |
| 10-11 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 35 |
| 12-13 | Di chuyển hướng 0 (`0`) | (16, 15) | (15, 14) | Dự kiến đến điểm hẹn tọa độ (15, 14) | 34 |
| 14-15 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đến điểm hẹn tọa độ (16, 13) | 33 |
| 16-18 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 31 |
| 19-20 | Di chuyển hướng 1 (`1`) | (16, 12) | (17, 11) | Dự kiến đến điểm hẹn tọa độ (17, 11) | 30 |
| 21 | Di chuyển hướng 0 (`0`) | (17, 11) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 28 |
| 22 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 26 |
| 23 | Di chuyển hướng 0 (`0`) | (17, 9) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 24 |
| 24-25 | Di chuyển hướng 1 (`1`) | (16, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 23 |
| 26-28 | Di chuyển hướng 1 (`1`) | (17, 7) | (17, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 21 |
| 29-30 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 20 |
| 31-32 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 19 |
| 33-34 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 18 |
| 35-36 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 17 |
| 37-38 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 16 |
| 39-42 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 0)) | 14 |
| 43-49 | Chờ 7 bước (`-7`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 0)) | 14 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (15, 18) (ô=357)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(4, 13))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(4, 13))
- Mảng hành động đã gửi server: `[5, 4, 5, 5, 4, 0, 1, 0, 0, 0, 5, 4, 5, 5, 5, 5, 4, 4, 4, 3, 0, 0, 1, 0, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 46 |
| 2-3 | Di chuyển hướng 4 (`4`) | (14, 18) | (14, 19) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(14, 19)) | 45 |
| 4-5 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 44 |
| 6-7 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 43 |
| 8-9 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 20)) | 42 |
| 10-11 | Di chuyển hướng 0 (`0`) | (11, 20) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 41 |
| 12-13 | Di chuyển hướng 1 (`1`) | (11, 19) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 40 |
| 14-15 | Di chuyển hướng 0 (`0`) | (11, 18) | (11, 17) | Dự kiến đến điểm hẹn tọa độ (11, 17) | 39 |
| 16-17 | Di chuyển hướng 0 (`0`) | (11, 17) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 38 |
| 18-19 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 37 |
| 20-21 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 36 |
| 22-25 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 34 |
| 26 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 32 |
| 27-28 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 31 |
| 29-30 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 30 |
| 31 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 28 |
| 32-33 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 27 |
| 34 | Di chuyển hướng 4 (`4`) | (4, 17) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 25 |
| 35-36 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 24 |
| 37-38 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 23 |
| 39-40 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 22 |
| 41-42 | Di chuyển hướng 0 (`0`) | (3, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 21 |
| 43 | Di chuyển hướng 1 (`1`) | (2, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 19 |
| 44-45 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 18 |
| 46 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 16 |
| 47 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 14 |
| 48 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 46 |
| 49 | Chờ 1 bước (`-1`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 46 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (7, 0) (ô=7)
- Nhiên liệu đầu ngày: 5
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 5)
- Mảng hành động đã gửi server: `[4, 3, 4, 4, -20, 4, 3, 5, 5, 5, 4, 4, 5, 1, 1, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (7, 0) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 4 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 3 |
| 4-5 | Di chuyển hướng 4 (`4`) | (7, 2) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 2 |
| 6 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 0 |
| 7-26 | Chờ 20 bước (`-20`) | (6, 4) | (6, 4) | Dự kiến đứng yên tại (6, 4); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 46 |
| 27-28 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 45 |
| 29-30 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(6, 6)) | 44 |
| 31-32 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 43 |
| 33-34 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 42 |
| 35-37 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 40 |
| 38-39 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 39 |
| 40-41 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 38 |
| 42-43 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 8)) | 37 |
| 44-45 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 36 |
| 46-47 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 35 |
| 48-49 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 34 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (14, 2) (ô=52)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(2, 2))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(2, 2))
- Mảng hành động đã gửi server: `[2, 3, 2, 3, 4, 3, 0, 0, 0, 5, 5, 0, 5, 5, 4, 4, 4, 4, 5, 0, 0, 5, 0, 5, 0, 5, 5, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 2 (`2`) | (14, 2) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 36 |
| 1-2 | Di chuyển hướng 3 (`3`) | (15, 2) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 35 |
| 3-4 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 34 |
| 5-6 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 33 |
| 7-8 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 32 |
| 9-10 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 31 |
| 11-12 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 30 |
| 13-14 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 29 |
| 15-16 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 28 |
| 17-18 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 27 |
| 19-20 | Di chuyển hướng 5 (`5`) | (15, 3) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 26 |
| 21 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 24 |
| 22-23 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 23 |
| 24-25 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 22 |
| 26 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 20 |
| 27 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 18 |
| 28-29 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 17 |
| 30 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 15 |
| 31-34 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 13 |
| 35-36 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 12 |
| 37-38 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 11 |
| 39-40 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 10 |
| 41-42 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 9 |
| 43 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 7 |
| 44-45 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 6 |
| 46-47 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 5 |
| 48 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 46 |
| 49 | Chờ 1 bước (`-1`) | (2, 2) | (2, 2) | Dự kiến đứng yên tại (2, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 46 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (10, 12) (ô=238)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(6, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(6, 16)
- Mảng hành động đã gửi server: `[4, 3, 4, 5, 5, 5, 0, 5, 0, 5, 4, 4, 4, 3, 3, 4, 3, 0, 5, 5, -1, 2, 1, 1, 2, 2, 1, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 39 |
| 2-3 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 38 |
| 4-6 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 36 |
| 7-8 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 35 |
| 9-12 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 33 |
| 13-14 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 32 |
| 15-16 | Di chuyển hướng 0 (`0`) | (7, 15) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 31 |
| 17 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 29 |
| 18 | Di chuyển hướng 0 (`0`) | (5, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 27 |
| 19-20 | Di chuyển hướng 5 (`5`) | (5, 13) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 26 |
| 21-22 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 25 |
| 23 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 23 |
| 24 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 21 |
| 25 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 19 |
| 26-27 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 18 |
| 28-29 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 17 |
| 30-31 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 16 |
| 32-33 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 15 |
| 34-35 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 14 |
| 36-37 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 38 | Chờ 1 bước (`-1`) | (1, 19) | (1, 19) | Dự kiến đứng yên tại (1, 19); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 39-40 | Di chuyển hướng 2 (`2`) | (1, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 45 |
| 41-42 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 44 |
| 43 | Di chuyển hướng 1 (`1`) | (2, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 42 |
| 44-45 | Di chuyển hướng 2 (`2`) | (3, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 41 |
| 46 | Di chuyển hướng 2 (`2`) | (4, 17) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 39 |
| 47-48 | Di chuyển hướng 1 (`1`) | (5, 17) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 38 |
| 49 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 36 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (1, 19) (ô=362)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 18)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 18)
- Mảng hành động đã gửi server: `[2, 2, 3, 0, 1, 0, 0, 1, 1, 1, 2, 3, 2, 3, 2, 2, 2, 3, 2, 2, 3, 3, 3, 2, 1, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (1, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 45 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 19) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 44 |
| 4-5 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 43 |
| 6-7 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 42 |
| 8-9 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 41 |
| 10-11 | Di chuyển hướng 0 (`0`) | (3, 18) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 40 |
| 12-13 | Di chuyển hướng 0 (`0`) | (3, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 39 |
| 14 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 37 |
| 15 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 35 |
| 16 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 33 |
| 17-18 | Di chuyển hướng 2 (`2`) | (4, 13) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 32 |
| 19-20 | Di chuyển hướng 3 (`3`) | (5, 13) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 31 |
| 21 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 29 |
| 22 | Di chuyển hướng 3 (`3`) | (6, 14) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 27 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 26 |
| 25-26 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 25 |
| 27-30 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 23 |
| 31-32 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 22 |
| 33-34 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 21 |
| 35-36 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 20 |
| 37 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 18 |
| 38-39 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 17 |
| 40-41 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(14, 19)) | 16 |
| 42-43 | Di chuyển hướng 2 (`2`) | (14, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 15 |
| 44-45 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 14 |
| 46-47 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 13 |
| 48-49 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 12 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (17, 6) (ô=131)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #10 (thương hiệu=10, tọa độ=(2, 2))
- Địa điểm đích kế hoạch: Spot #10 (thương hiệu=10, tọa độ=(2, 2))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 5, 0, 5, 0, 5, 5, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 46 |
| 2-3 | Di chuyển hướng 5 (`5`) | (16, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 46 |
| 4-5 | Di chuyển hướng 5 (`5`) | (15, 6) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 46 |
| 6-7 | Di chuyển hướng 5 (`5`) | (14, 6) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 46 |
| 8-9 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 46 |
| 10-11 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến đến điểm hẹn tọa độ (11, 6) | 46 |
| 12-13 | Di chuyển hướng 5 (`5`) | (11, 6) | (10, 6) | Dự kiến đến điểm hẹn tọa độ (10, 6) | 46 |
| 14-15 | Di chuyển hướng 5 (`5`) | (10, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 46 |
| 16-19 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 46 |
| 20-21 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 46 |
| 22-23 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 46 |
| 24-25 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 46 |
| 26-27 | Di chuyển hướng 0 (`0`) | (6, 4) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 46 |
| 28 | Di chuyển hướng 5 (`5`) | (6, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 46 |
| 29-30 | Di chuyển hướng 0 (`0`) | (5, 3) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 46 |
| 31-32 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 46 |
| 33 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 46 |
| 34-49 | Chờ 16 bước (`-16`) | (2, 2) | (2, 2) | Dự kiến đứng yên tại (2, 2); mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 46 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (15, 18) (ô=357)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(4, 13))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(4, 13))
- Mảng hành động đã gửi server: `[5, 5, 0, 0, 5, 5, 0, 5, 4, 5, 5, 5, 5, 4, 5, 4, 5, 4, -5, 1, 1, 1, 1, 1, 1, -3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 46 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 46 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 46 |
| 6-7 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 46 |
| 8 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 46 |
| 9-10 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 46 |
| 11-12 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 46 |
| 13-14 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 46 |
| 15-18 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 46 |
| 19 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 46 |
| 20-21 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 46 |
| 22-23 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 46 |
| 24 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 46 |
| 25-26 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 46 |
| 27 | Di chuyển hướng 5 (`5`) | (4, 17) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 46 |
| 28-29 | Di chuyển hướng 4 (`4`) | (3, 17) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 46 |
| 30 | Di chuyển hướng 5 (`5`) | (2, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 46 |
| 31-32 | Di chuyển hướng 4 (`4`) | (1, 18) | (1, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 33-37 | Chờ 5 bước (`-5`) | (1, 19) | (1, 19) | Dự kiến đứng yên tại (1, 19); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 38-39 | Di chuyển hướng 1 (`1`) | (1, 19) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 46 |
| 40-41 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 46 |
| 42-43 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 46 |
| 44 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 46 |
| 45 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 46 |
| 46 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 46 |
| 47-49 | Chờ 3 bước (`-3`) | (4, 13) | (4, 13) | Dự kiến đứng yên tại (4, 13); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 46 |

