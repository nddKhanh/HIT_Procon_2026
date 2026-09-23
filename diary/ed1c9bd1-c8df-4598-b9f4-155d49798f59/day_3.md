# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 46
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 2) (ô=40)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 2)
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 3, 2, 3, 3, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 0, 5, 1, 1, 1, 4, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 46 |
| 2 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 44 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 43 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 46 |
| 7 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 44 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 4) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 46 |
| 10-11 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 46 |
| 12-13 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 46 |
| 14-15 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 46 |
| 16-17 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 44 |
| 18 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 46 |
| 19-20 | Di chuyển hướng 2 (`2`) | (10, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 45 |
| 21-22 | Di chuyển hướng 2 (`2`) | (11, 4) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 44 |
| 23-24 | Di chuyển hướng 2 (`2`) | (12, 4) | (13, 4) | Dự kiến đến điểm hẹn tọa độ (13, 4) | 43 |
| 25-26 | Di chuyển hướng 2 (`2`) | (13, 4) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 42 |
| 27-28 | Di chuyển hướng 2 (`2`) | (14, 4) | (15, 4) | Dự kiến đến điểm hẹn tọa độ (15, 4) | 41 |
| 29-30 | Di chuyển hướng 2 (`2`) | (15, 4) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 40 |
| 31-32 | Di chuyển hướng 2 (`2`) | (16, 4) | (17, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 39 |
| 33-34 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 38 |
| 35-36 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 37 |
| 37-38 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 46 |
| 39-40 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 45 |
| 41 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 0)) | 43 |
| 42-43 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 42 |
| 44 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 46 |
| 45 | Chờ 1 bước (`-1`) | (16, 2) | (16, 2) | Dự kiến đứng yên tại (16, 2); hướng tới tọa độ (16, 2) | 46 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (14, 19) (ô=375)
- Nhiên liệu đầu ngày: 38
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(3, 20))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(3, 20))
- Mảng hành động đã gửi server: `[5, 5, 4, 2, 1, 2, 1, 2, 5, 5, 0, 0, 5, 5, 0, 5, 4, 5, 5, 5, 4, 5, 4, 4, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 37 |
| 2-3 | Di chuyển hướng 5 (`5`) | (13, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 36 |
| 4-5 | Di chuyển hướng 4 (`4`) | (12, 19) | (11, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 20)) | 35 |
| 6-7 | Di chuyển hướng 2 (`2`) | (11, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 34 |
| 8-9 | Di chuyển hướng 1 (`1`) | (12, 20) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 33 |
| 10-11 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(14, 19)) | 32 |
| 12-13 | Di chuyển hướng 1 (`1`) | (14, 19) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 31 |
| 14-15 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 30 |
| 16-17 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 29 |
| 18-19 | Di chuyển hướng 5 (`5`) | (14, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 28 |
| 20-21 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 27 |
| 22-23 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 26 |
| 24 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 24 |
| 25-26 | Di chuyển hướng 5 (`5`) | (11, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 23 |
| 27-28 | Di chuyển hướng 0 (`0`) | (10, 16) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 22 |
| 29-30 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 21 |
| 31-32 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 19 |
| 33 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 17 |
| 34-35 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 16 |
| 36-37 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 15 |
| 38 | Di chuyển hướng 4 (`4`) | (5, 16) | (5, 17) | Dự kiến đến điểm hẹn tọa độ (5, 17) | 13 |
| 39-40 | Di chuyển hướng 5 (`5`) | (5, 17) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 12 |
| 41 | Di chuyển hướng 4 (`4`) | (4, 17) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 10 |
| 42-43 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 9 |
| 44-45 | Di chuyển hướng 3 (`3`) | (3, 19) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 8 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (17, 8) (ô=169)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(8, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(8, 5)
- Mảng hành động đã gửi server: `[1, 0, 0, 0, 0, 1, 1, 1, 4, 3, 3, 4, 0, 5, 5, 0, 5, -1, 5, 5, 4, 4, 4, 4, 5, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 1 (`1`) | (17, 8) | (18, 7) | Dự kiến đến điểm hẹn tọa độ (18, 7) | 22 |
| 3-4 | Di chuyển hướng 0 (`0`) | (18, 7) | (17, 6) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(17, 6)) | 21 |
| 5-6 | Di chuyển hướng 0 (`0`) | (17, 6) | (17, 5) | Dự kiến đến điểm hẹn tọa độ (17, 5) | 20 |
| 7-8 | Di chuyển hướng 0 (`0`) | (17, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 19 |
| 9-10 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 18 |
| 11-12 | Di chuyển hướng 1 (`1`) | (16, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 17 |
| 13-14 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 16 |
| 15 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 0)) | 14 |
| 16-17 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 13 |
| 18 | Di chuyển hướng 3 (`3`) | (17, 1) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 11 |
| 19-20 | Di chuyển hướng 3 (`3`) | (17, 2) | (18, 3) | Dự kiến đến điểm hẹn tọa độ (18, 3) | 10 |
| 21-22 | Di chuyển hướng 4 (`4`) | (18, 3) | (17, 4) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(17, 4)) | 9 |
| 23-24 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đến điểm hẹn tọa độ (17, 3) | 8 |
| 25-26 | Di chuyển hướng 5 (`5`) | (17, 3) | (16, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(16, 3)) | 7 |
| 27-28 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 6 |
| 29-30 | Di chuyển hướng 0 (`0`) | (15, 3) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 5 |
| 31 | Di chuyển hướng 5 (`5`) | (14, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 46 |
| 32 | Chờ 1 bước (`-1`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 46 |
| 33-34 | Di chuyển hướng 5 (`5`) | (13, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 45 |
| 35-36 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 44 |
| 37 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 42 |
| 38 | Di chuyển hướng 4 (`4`) | (11, 3) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 40 |
| 39-40 | Di chuyển hướng 4 (`4`) | (10, 4) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 39 |
| 41 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 37 |
| 42-43 | Di chuyển hướng 5 (`5`) | (9, 6) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 35 |
| 44-45 | Di chuyển hướng 0 (`0`) | (8, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 34 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (2, 2) (ô=40)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 1)
- Mảng hành động đã gửi server: `[2, 3, 2, 2, 3, 4, 3, 5, 5, 5, 4, 4, 5, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 46 |
| 2 | Di chuyển hướng 3 (`3`) | (3, 2) | (4, 3) | Dự kiến đến điểm hẹn tọa độ (4, 3) | 44 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 3) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 43 |
| 5-6 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 46 |
| 7 | Di chuyển hướng 3 (`3`) | (6, 3) | (6, 4) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(6, 4)) | 44 |
| 8-9 | Di chuyển hướng 4 (`4`) | (6, 4) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 43 |
| 10-11 | Di chuyển hướng 3 (`3`) | (6, 5) | (6, 6) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(6, 6)) | 42 |
| 12-13 | Di chuyển hướng 5 (`5`) | (6, 6) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 41 |
| 14-15 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 40 |
| 16-18 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 38 |
| 19-20 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 37 |
| 21-22 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 36 |
| 23-24 | Di chuyển hướng 5 (`5`) | (2, 8) | (1, 8) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(1, 8)) | 35 |
| 25-26 | Di chuyển hướng 1 (`1`) | (1, 8) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 34 |
| 27-28 | Di chuyển hướng 1 (`1`) | (2, 7) | (2, 6) | Dự kiến đến điểm hẹn tọa độ (2, 6) | 33 |
| 29-30 | Di chuyển hướng 1 (`1`) | (2, 6) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 32 |
| 31-32 | Di chuyển hướng 1 (`1`) | (3, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 31 |
| 33 | Di chuyển hướng 2 (`2`) | (3, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 29 |
| 34-35 | Di chuyển hướng 1 (`1`) | (4, 4) | (5, 3) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(5, 3)) | 28 |
| 36-37 | Di chuyển hướng 2 (`2`) | (5, 3) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 27 |
| 38 | Di chuyển hướng 1 (`1`) | (6, 3) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 25 |
| 39-40 | Di chuyển hướng 1 (`1`) | (6, 2) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 24 |
| 41-42 | Di chuyển hướng 1 (`1`) | (7, 1) | (7, 0) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(7, 0)) | 23 |
| 43-44 | Di chuyển hướng 4 (`4`) | (7, 0) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 22 |
| 45 | Chờ 1 bước (`-1`) | (7, 1) | (7, 1) | Dự kiến đứng yên tại (7, 1); hướng tới tọa độ (7, 1) | 22 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (11, 13) (ô=258)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(5, 14)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(5, 14)
- Mảng hành động đã gửi server: `[4, 4, 5, 4, 5, 4, 4, 4, 5, 4, 5, 0, 1, 4, 5, 5, -1, 1, 1, 1, 1, 1, 1, 3, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (11, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 18 |
| 3-5 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 16 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 15 |
| 8-9 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 13 |
| 10 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 11 |
| 11-12 | Di chuyển hướng 4 (`4`) | (7, 16) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 10 |
| 13-14 | Di chuyển hướng 4 (`4`) | (7, 17) | (6, 18) | Dự kiến đến điểm hẹn tọa độ (6, 18) | 9 |
| 15-16 | Di chuyển hướng 4 (`4`) | (6, 18) | (6, 19) | Dự kiến đến điểm hẹn tọa độ (6, 19) | 8 |
| 17-18 | Di chuyển hướng 5 (`5`) | (6, 19) | (5, 19) | Dự kiến đến điểm hẹn tọa độ (5, 19) | 7 |
| 19-20 | Di chuyển hướng 4 (`4`) | (5, 19) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 6 |
| 21-22 | Di chuyển hướng 5 (`5`) | (4, 20) | (3, 20) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 20)) | 5 |
| 23-24 | Di chuyển hướng 0 (`0`) | (3, 20) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 4 |
| 25-26 | Di chuyển hướng 1 (`1`) | (3, 19) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 3 |
| 27-28 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 2 |
| 29-30 | Di chuyển hướng 5 (`5`) | (3, 19) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 1 |
| 31-32 | Di chuyển hướng 5 (`5`) | (2, 19) | (1, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 33 | Chờ 1 bước (`-1`) | (1, 19) | (1, 19) | Dự kiến đứng yên tại (1, 19); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 34-35 | Di chuyển hướng 1 (`1`) | (1, 19) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 45 |
| 36-37 | Di chuyển hướng 1 (`1`) | (1, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 44 |
| 38-39 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 43 |
| 40 | Di chuyển hướng 1 (`1`) | (2, 16) | (3, 15) | Dự kiến đến điểm hẹn tọa độ (3, 15) | 41 |
| 41 | Di chuyển hướng 1 (`1`) | (3, 15) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 39 |
| 42 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 37 |
| 43-44 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 36 |
| 45 | Di chuyển hướng 2 (`2`) | (4, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 34 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (14, 18) (ô=356)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 19)
- Mảng hành động đã gửi server: `[2, 5, 0, 0, 0, 0, 0, 0, 5, 4, 3, 4, 5, 0, 5, 5, 5, 5, 0, 3, 3, 4, 4, 4, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (14, 18) | (15, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(15, 18)) | 45 |
| 2-3 | Di chuyển hướng 5 (`5`) | (15, 18) | (14, 18) | Dự kiến đến điểm hẹn tọa độ (14, 18) | 44 |
| 4-5 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 43 |
| 6-7 | Di chuyển hướng 0 (`0`) | (14, 17) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 42 |
| 8-9 | Di chuyển hướng 0 (`0`) | (13, 16) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 41 |
| 10-11 | Di chuyển hướng 0 (`0`) | (13, 15) | (12, 14) | Dự kiến đến điểm hẹn tọa độ (12, 14) | 40 |
| 12-13 | Di chuyển hướng 0 (`0`) | (12, 14) | (12, 13) | Dự kiến đến điểm hẹn tọa độ (12, 13) | 39 |
| 14-15 | Di chuyển hướng 0 (`0`) | (12, 13) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 38 |
| 16-18 | Di chuyển hướng 5 (`5`) | (11, 12) | (10, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(10, 12)) | 36 |
| 19-20 | Di chuyển hướng 4 (`4`) | (10, 12) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 35 |
| 21-22 | Di chuyển hướng 3 (`3`) | (10, 13) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 34 |
| 23-25 | Di chuyển hướng 4 (`4`) | (10, 14) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 32 |
| 26-27 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 31 |
| 28-29 | Di chuyển hướng 0 (`0`) | (9, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 29 |
| 30-31 | Di chuyển hướng 5 (`5`) | (8, 14) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 28 |
| 32-33 | Di chuyển hướng 5 (`5`) | (7, 14) | (6, 14) | Dự kiến đến điểm hẹn tọa độ (6, 14) | 27 |
| 34 | Di chuyển hướng 5 (`5`) | (6, 14) | (5, 14) | Dự kiến đến điểm hẹn tọa độ (5, 14) | 25 |
| 35 | Di chuyển hướng 5 (`5`) | (5, 14) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 23 |
| 36 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(4, 13)) | 21 |
| 37-38 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến đến điểm hẹn tọa độ (4, 14) | 20 |
| 39 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến đến điểm hẹn tọa độ (5, 15) | 18 |
| 40 | Di chuyển hướng 4 (`4`) | (5, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 16 |
| 41-42 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 15 |
| 43 | Di chuyển hướng 4 (`4`) | (4, 17) | (3, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(3, 18)) | 13 |
| 44-45 | Di chuyển hướng 4 (`4`) | (3, 18) | (3, 19) | Dự kiến đến điểm hẹn tọa độ (3, 19) | 12 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (2, 2) (ô=40)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(16, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(16, 2)
- Mảng hành động đã gửi server: `[2, 2, 2, 3, 2, 3, 3, 3, 2, 1, 1, 1, 1, 2, 2, -8, 2, 2, 2, -9]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 46 |
| 2 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 46 |
| 3-4 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 46 |
| 5-6 | Di chuyển hướng 3 (`3`) | (5, 2) | (6, 3) | Dự kiến đến điểm hẹn tọa độ (6, 3) | 46 |
| 7 | Di chuyển hướng 2 (`2`) | (6, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 46 |
| 8 | Di chuyển hướng 3 (`3`) | (7, 3) | (7, 4) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(7, 4)) | 46 |
| 9-10 | Di chuyển hướng 3 (`3`) | (7, 4) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 46 |
| 11-12 | Di chuyển hướng 3 (`3`) | (8, 5) | (8, 6) | Dự kiến đến điểm hẹn tọa độ (8, 6) | 46 |
| 13-14 | Di chuyển hướng 2 (`2`) | (8, 6) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 46 |
| 15-16 | Di chuyển hướng 1 (`1`) | (9, 6) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 46 |
| 17 | Di chuyển hướng 1 (`1`) | (10, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 46 |
| 18-19 | Di chuyển hướng 1 (`1`) | (10, 4) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 46 |
| 20 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 46 |
| 21 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 46 |
| 22-23 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 46 |
| 24-31 | Chờ 8 bước (`-8`) | (13, 2) | (13, 2) | Dự kiến đứng yên tại (13, 2); mục tiêu Spot #8 (thương hiệu=8, tọa độ=(13, 2)) | 46 |
| 32-33 | Di chuyển hướng 2 (`2`) | (13, 2) | (14, 2) | Dự kiến đến điểm hẹn tọa độ (14, 2) | 46 |
| 34 | Di chuyển hướng 2 (`2`) | (14, 2) | (15, 2) | Dự kiến đến điểm hẹn tọa độ (15, 2) | 46 |
| 35-36 | Di chuyển hướng 2 (`2`) | (15, 2) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 46 |
| 37-45 | Chờ 9 bước (`-9`) | (16, 2) | (16, 2) | Dự kiến đứng yên tại (16, 2); hướng tới tọa độ (16, 2) | 46 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (14, 18) (ô=356)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #17 (thương hiệu=17, tọa độ=(1, 19))
- Địa điểm đích kế hoạch: Spot #17 (thương hiệu=17, tọa độ=(1, 19))
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 0, 5, 5, 4, 5, 5, 5, 5, 4, 5, 4, 5, 4, -17]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 18) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 46 |
| 2-3 | Di chuyển hướng 5 (`5`) | (14, 17) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 46 |
| 4-5 | Di chuyển hướng 0 (`0`) | (13, 17) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 46 |
| 6 | Di chuyển hướng 5 (`5`) | (12, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 46 |
| 7-8 | Di chuyển hướng 0 (`0`) | (11, 16) | (11, 15) | Dự kiến đến điểm hẹn tọa độ (11, 15) | 46 |
| 9-10 | Di chuyển hướng 5 (`5`) | (11, 15) | (10, 15) | Dự kiến đến điểm hẹn tọa độ (10, 15) | 46 |
| 11-12 | Di chuyển hướng 5 (`5`) | (10, 15) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 46 |
| 13-14 | Di chuyển hướng 4 (`4`) | (9, 15) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 46 |
| 15 | Di chuyển hướng 5 (`5`) | (8, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 46 |
| 16-17 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 46 |
| 18-19 | Di chuyển hướng 5 (`5`) | (6, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 46 |
| 20 | Di chuyển hướng 5 (`5`) | (5, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 46 |
| 21-22 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đến điểm hẹn tọa độ (4, 17) | 46 |
| 23 | Di chuyển hướng 5 (`5`) | (4, 17) | (3, 17) | Dự kiến đến điểm hẹn tọa độ (3, 17) | 46 |
| 24-25 | Di chuyển hướng 4 (`4`) | (3, 17) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 46 |
| 26 | Di chuyển hướng 5 (`5`) | (2, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 46 |
| 27-28 | Di chuyển hướng 4 (`4`) | (1, 18) | (1, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |
| 29-45 | Chờ 17 bước (`-17`) | (1, 19) | (1, 19) | Dự kiến đứng yên tại (1, 19); mục tiêu Spot #17 (thương hiệu=17, tọa độ=(1, 19)) | 46 |

