# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 48
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (16, 2) (ô=54)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 19)
- Mảng hành động đã gửi server: `[1, 1, 4, 4, 4, 4, 3, 3, 4, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 45 |
| 2-3 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 0)) | 43 |
| 4-5 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 42 |
| 6-7 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 40 |
| 8-9 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 39 |
| 10-11 | Di chuyển hướng 4 (`4`) | (16, 3) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 38 |
| 12-13 | Di chuyển hướng 3 (`3`) | (15, 4) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 37 |
| 14-15 | Di chuyển hướng 3 (`3`) | (16, 5) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 36 |
| 16-17 | Di chuyển hướng 4 (`4`) | (16, 6) | (16, 7) | Dự kiến đến điểm hẹn tọa độ (16, 7) | 35 |
| 18-19 | Di chuyển hướng 3 (`3`) | (16, 7) | (16, 8) | Dự kiến đến điểm hẹn tọa độ (16, 8) | 34 |
| 20-21 | Di chuyển hướng 3 (`3`) | (16, 8) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 33 |
| 22 | Di chuyển hướng 4 (`4`) | (17, 9) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 31 |
| 23 | Di chuyển hướng 4 (`4`) | (16, 10) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 29 |
| 24-25 | Di chuyển hướng 4 (`4`) | (16, 11) | (15, 12) | Dự kiến đến điểm hẹn tọa độ (15, 12) | 28 |
| 26-28 | Di chuyển hướng 4 (`4`) | (15, 12) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 26 |
| 29-30 | Di chuyển hướng 4 (`4`) | (15, 13) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 25 |
| 31-32 | Di chuyển hướng 4 (`4`) | (14, 14) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 24 |
| 33-34 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 23 |
| 35-36 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 22 |
| 37-38 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 45 |
| 39-40 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 44 |
| 41-42 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 20)) | 43 |
| 43-44 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 42 |
| 45-46 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 41 |
| 47 | Chờ 1 bước (`-1`) | (13, 19) | (13, 19) | Dự kiến đứng yên tại (13, 19); hướng tới tọa độ (13, 19) | 41 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (3, 20) (ô=383)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(15, 18))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(15, 18))
- Mảng hành động đã gửi server: `[0, 1, 5, 4, 5, -1, 1, 1, 1, 1, 1, 1, 3, 2, 2, 2, 2, 3, 2, 3, 2, 2, 3, 3, 3, 2, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 7 |
| 2-3 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 6 |
| 4-5 | Di chuyển hướng 5 (`5`) | (3, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 5 |
| 6 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 3 |
| 7-8 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 9 | Chờ 1 bước (`-1`) | (1, 19) | (1, 19) | Dự kiến đứng yên tại (1, 19); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 10-11 | Di chuyển hướng 1 (`1`) | (1, 19) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 45 |
| 12-13 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 45 |
| 14-15 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 45 |
| 16 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 43 |
| 17 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 41 |
| 18 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 39 |
| 19-20 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 38 |
| 21 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 36 |
| 22 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 34 |
| 23 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 46 |
| 24-25 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 46 |
| 26-27 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 46 |
| 28-31 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 46 |
| 32-33 | Di chuyển hướng 3 (`3`) | (10, 15) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 45 |
| 34-35 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 46 |
| 36-37 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 45 |
| 38 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 46 |
| 39-40 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 45 |
| 41-42 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(14, 19)) | 44 |
| 43-44 | Di chuyển hướng 2 (`2`) | (14, 19) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 43 |
| 45-46 | Di chuyển hướng 1 (`1`) | (15, 19) | (15, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 46 |
| 47 | Chờ 1 bước (`-1`) | (15, 18) | (15, 18) | Dự kiến đứng yên tại (15, 18); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 46 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (8, 5) (ô=103)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(7, 0))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(7, 0))
- Mảng hành động đã gửi server: `[0, 5, 4, 3, 0, 0, 0, 4, 4, 4, 4, 4, 5, 1, 1, 1, 1, 0, 0, 2, 2, 2, 1, 2, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (8, 5) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 33 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 4) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 32 |
| 4-5 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 31 |
| 6-7 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(6, 6)) | 30 |
| 8-9 | Di chuyển hướng 0 (`0`) | (6, 6) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 29 |
| 10-11 | Di chuyển hướng 0 (`0`) | (6, 5) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 28 |
| 12-14 | Di chuyển hướng 0 (`0`) | (5, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 26 |
| 15-16 | Di chuyển hướng 4 (`4`) | (5, 3) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 25 |
| 17-18 | Di chuyển hướng 4 (`4`) | (4, 4) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 24 |
| 19-20 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 23 |
| 21-22 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 22 |
| 23-24 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 21 |
| 25-26 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 8)) | 20 |
| 27-28 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 19 |
| 29-30 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 18 |
| 31-32 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 17 |
| 33-34 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 16 |
| 35 | Di chuyển hướng 0 (`0`) | (3, 4) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 14 |
| 36-37 | Di chuyển hướng 0 (`0`) | (3, 3) | (2, 2) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(2, 2)) | 13 |
| 38-39 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 12 |
| 40 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 10 |
| 41-42 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 9 |
| 43-44 | Di chuyển hướng 1 (`1`) | (5, 2) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 8 |
| 45 | Di chuyển hướng 2 (`2`) | (6, 1) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 6 |
| 46-47 | Di chuyển hướng 1 (`1`) | (7, 1) | (7, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 0)) | 5 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 1) (ô=26)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(14, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(14, 2)
- Mảng hành động đã gửi server: `[3, 3, 4, 3, 3, 2, 1, 2, 1, 2, 2, 2, 2, 2, 2, 4, 3, -1, 0, 0, 0, 0, 5, 5, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (7, 1) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 21 |
| 2-3 | Di chuyển hướng 3 (`3`) | (7, 2) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 20 |
| 4 | Di chuyển hướng 4 (`4`) | (8, 3) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 18 |
| 5-6 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 17 |
| 7-8 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 16 |
| 9-10 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 15 |
| 11-14 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 13 |
| 15 | Di chuyển hướng 2 (`2`) | (10, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 11 |
| 16-17 | Di chuyển hướng 1 (`1`) | (11, 5) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 10 |
| 18-19 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 9 |
| 20-21 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 8 |
| 22-23 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 7 |
| 24-25 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 6 |
| 26-27 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 5 |
| 28-29 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 4 |
| 30-31 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 3 |
| 32-33 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 46 |
| 34 | Chờ 1 bước (`-1`) | (17, 6) | (17, 6) | Dự kiến đứng yên tại (17, 6); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 46 |
| 35-36 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 45 |
| 37-38 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 44 |
| 39-40 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 43 |
| 41-42 | Di chuyển hướng 0 (`0`) | (16, 3) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 42 |
| 43-44 | Di chuyển hướng 5 (`5`) | (15, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 41 |
| 45 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 39 |
| 46-47 | Di chuyển hướng 2 (`2`) | (13, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 38 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (5, 14) (ô=271)
- Nhiên liệu đầu ngày: 34
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=12, tọa độ=(10, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=12, tọa độ=(10, 12))
- Mảng hành động đã gửi server: `[5, 0, 4, 4, 4, 3, 3, 4, 3, 2, 1, 1, 1, 1, 2, 1, 2, 2, 1, 0, 1, -8]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 32 |
| 1 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 30 |
| 2-3 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 29 |
| 4 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 27 |
| 5 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 25 |
| 6 | Di chuyển hướng 3 (`3`) | (2, 16) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 23 |
| 7-8 | Di chuyển hướng 3 (`3`) | (3, 17) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 22 |
| 9-10 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 21 |
| 11-12 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 20 |
| 13-14 | Di chuyển hướng 2 (`2`) | (3, 20) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 19 |
| 15-16 | Di chuyển hướng 1 (`1`) | (4, 20) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 18 |
| 17-18 | Di chuyển hướng 1 (`1`) | (5, 19) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 17 |
| 19-20 | Di chuyển hướng 1 (`1`) | (5, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 16 |
| 21-22 | Di chuyển hướng 1 (`1`) | (6, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 15 |
| 23-24 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 14 |
| 25-26 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 13 |
| 27-28 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 46 |
| 29-32 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 44 |
| 33-34 | Di chuyển hướng 1 (`1`) | (10, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 43 |
| 35-37 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 41 |
| 38-39 | Di chuyển hướng 1 (`1`) | (10, 13) | (10, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(10, 12)) | 40 |
| 40-47 | Chờ 8 bước (`-8`) | (10, 12) | (10, 12) | Dự kiến đứng yên tại (10, 12); mục tiêu Spot #12 (thương hiệu=12, tọa độ=(10, 12)) | 40 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (3, 19) (ô=364)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(1, 19))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(1, 19))
- Mảng hành động đã gửi server: `[3, 0, 1, 5, 4, 5, -37]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 11 |
| 2-3 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 10 |
| 4-5 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 9 |
| 6-7 | Di chuyển hướng 5 (`5`) | (3, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 8 |
| 8 | Di chuyển hướng 4 (`4`) | (2, 18) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 6 |
| 9-10 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 11-47 | Chờ 37 bước (`-37`) | (1, 19) | (1, 19) | Dự kiến đứng yên tại (1, 19); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (16, 2) (ô=54)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(17, 6))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(17, 6))
- Mảng hành động đã gửi server: `[3, 3, 4, 3, -40]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (16, 2) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 46 |
| 2-3 | Di chuyển hướng 3 (`3`) | (17, 3) | (17, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 46 |
| 4-5 | Di chuyển hướng 4 (`4`) | (17, 4) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 46 |
| 6-7 | Di chuyển hướng 3 (`3`) | (17, 5) | (17, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 46 |
| 8-47 | Chờ 40 bước (`-40`) | (17, 6) | (17, 6) | Dự kiến đứng yên tại (17, 6); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 46 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (1, 19) (ô=362)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(15, 18))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(15, 18))
- Mảng hành động đã gửi server: `[-11, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 2, 2, 3, 2, 3, 2, 3, 2, -4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-10 | Chờ 11 bước (`-11`) | (1, 19) | (1, 19) | Dự kiến đứng yên tại (1, 19); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 11-12 | Di chuyển hướng 1 (`1`) | (1, 19) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 46 |
| 13-14 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 46 |
| 15-16 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 46 |
| 17 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 46 |
| 18 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 46 |
| 19 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 46 |
| 20 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 46 |
| 21 | Di chuyển hướng 2 (`2`) | (5, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 46 |
| 22 | Di chuyển hướng 2 (`2`) | (6, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 46 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 14) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 46 |
| 25-26 | Di chuyển hướng 3 (`3`) | (8, 14) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 46 |
| 27-30 | Di chuyển hướng 2 (`2`) | (9, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 46 |
| 31-32 | Di chuyển hướng 2 (`2`) | (10, 15) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 46 |
| 33-34 | Di chuyển hướng 3 (`3`) | (11, 15) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 46 |
| 35-36 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 46 |
| 37 | Di chuyển hướng 3 (`3`) | (12, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 46 |
| 38-39 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 46 |
| 40-41 | Di chuyển hướng 3 (`3`) | (14, 17) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 46 |
| 42-43 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 46 |
| 44-47 | Chờ 4 bước (`-4`) | (15, 18) | (15, 18) | Dự kiến đứng yên tại (15, 18); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 46 |

