# Nhật ký hành trình - Ngày 6

- Số bước trong ngày: 55
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 11 | #2 | #6 | (15, 17) | 40 | 51 |
| 19 | #0 | #6 | (15, 17) | 29 | 51 |
| 34 | #3 | #5 | (17, 0) | 1 | 51 |
| 41 | #4 | #6 | (15, 17) | 10 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 18) (ô=390)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #4 (thương hiệu=4, tọa độ=(13, 5))
- Địa điểm đích kế hoạch: Spot #4 (thương hiệu=4, tọa độ=(13, 5))
- Mảng hành động đã gửi server: `[5, 3, 3, 3, 3, 1, 1, 0, 1, 1, 0, 0, 2, 2, 1, 1, 1, 1, 0, 0, 5, 5, 5, 4, 5, 1, 1, 0, 0, 1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 39 |
| 2-3 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 38 |
| 4-5 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 37 |
| 6-7 | Di chuyển hướng 3 (`3`) | (12, 20) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 36 |
| 8-9 | Di chuyển hướng 3 (`3`) | (13, 21) | (13, 22) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 22)) | 35 |
| 10-11 | Di chuyển hướng 1 (`1`) | (13, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 34 |
| 12-13 | Di chuyển hướng 1 (`1`) | (14, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 33 |
| 14-15 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 32 |
| 16 | Di chuyển hướng 1 (`1`) | (14, 19) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 30 |
| 17-18 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 51 |
| 19-20 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 50 |
| 21-22 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 49 |
| 23-24 | Di chuyển hướng 2 (`2`) | (14, 15) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 48 |
| 25 | Di chuyển hướng 2 (`2`) | (15, 15) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 46 |
| 26 | Di chuyển hướng 1 (`1`) | (16, 15) | (16, 14) | Dự kiến đến điểm hẹn tọa độ (16, 14) | 44 |
| 27-29 | Di chuyển hướng 1 (`1`) | (16, 14) | (17, 13) | Dự kiến đến điểm hẹn tọa độ (17, 13) | 42 |
| 30-31 | Di chuyển hướng 1 (`1`) | (17, 13) | (17, 12) | Dự kiến đến điểm hẹn tọa độ (17, 12) | 41 |
| 32-33 | Di chuyển hướng 1 (`1`) | (17, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 40 |
| 34 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 38 |
| 35-37 | Di chuyển hướng 0 (`0`) | (17, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 36 |
| 38-39 | Di chuyển hướng 5 (`5`) | (17, 9) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 35 |
| 40 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 33 |
| 41-43 | Di chuyển hướng 5 (`5`) | (15, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 31 |
| 44-45 | Di chuyển hướng 4 (`4`) | (14, 9) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 30 |
| 46 | Di chuyển hướng 5 (`5`) | (13, 10) | (12, 10) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(12, 10)) | 28 |
| 47-48 | Di chuyển hướng 1 (`1`) | (12, 10) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 27 |
| 49-50 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 26 |
| 51-52 | Di chuyển hướng 0 (`0`) | (13, 8) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 25 |
| 53 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 23 |
| 54 | Di chuyển hướng 1 (`1`) | (12, 6) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 21 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 4) (ô=96)
- Nhiên liệu đầu ngày: 41
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 5)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 5)
- Mảng hành động đã gửi server: `[3, 0, 5, 5, 5, 4, 5, 5, 5, 5, 5, 4, 5, 0, 1, 3, 3, 3, 2, 2, 3, 3, 2, 3, -3, 1, 0, 1, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 40 |
| 2-3 | Di chuyển hướng 0 (`0`) | (13, 5) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 39 |
| 4-5 | Di chuyển hướng 5 (`5`) | (12, 4) | (11, 4) | Dự kiến đến điểm hẹn tọa độ (11, 4) | 38 |
| 6-7 | Di chuyển hướng 5 (`5`) | (11, 4) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 37 |
| 8-11 | Di chuyển hướng 5 (`5`) | (10, 4) | (9, 4) | Dự kiến đến điểm hẹn tọa độ (9, 4) | 35 |
| 12-14 | Di chuyển hướng 4 (`4`) | (9, 4) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 33 |
| 15 | Di chuyển hướng 5 (`5`) | (9, 5) | (8, 5) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 5)) | 31 |
| 16-17 | Di chuyển hướng 5 (`5`) | (8, 5) | (7, 5) | Dự kiến đến điểm hẹn tọa độ (7, 5) | 30 |
| 18-19 | Di chuyển hướng 5 (`5`) | (7, 5) | (6, 5) | Dự kiến đến điểm hẹn tọa độ (6, 5) | 29 |
| 20-21 | Di chuyển hướng 5 (`5`) | (6, 5) | (5, 5) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(5, 5)) | 28 |
| 22-23 | Di chuyển hướng 5 (`5`) | (5, 5) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 27 |
| 24-25 | Di chuyển hướng 4 (`4`) | (4, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 26 |
| 26 | Di chuyển hướng 5 (`5`) | (3, 6) | (2, 6) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(2, 6)) | 24 |
| 27-28 | Di chuyển hướng 0 (`0`) | (2, 6) | (2, 5) | Dự kiến đến điểm hẹn tọa độ (2, 5) | 23 |
| 29-30 | Di chuyển hướng 1 (`1`) | (2, 5) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 22 |
| 31-32 | Di chuyển hướng 3 (`3`) | (2, 4) | (3, 5) | Dự kiến đến điểm hẹn tọa độ (3, 5) | 21 |
| 33-34 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 20 |
| 35 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 18 |
| 36 | Di chuyển hướng 2 (`2`) | (4, 7) | (5, 7) | Dự kiến đến điểm hẹn tọa độ (5, 7) | 16 |
| 37 | Di chuyển hướng 2 (`2`) | (5, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 14 |
| 38-39 | Di chuyển hướng 3 (`3`) | (6, 7) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 13 |
| 40 | Di chuyển hướng 3 (`3`) | (6, 8) | (7, 9) | Dự kiến đến điểm hẹn tọa độ (7, 9) | 11 |
| 41 | Di chuyển hướng 2 (`2`) | (7, 9) | (8, 9) | Dự kiến đến điểm hẹn tọa độ (8, 9) | 9 |
| 42-43 | Di chuyển hướng 3 (`3`) | (8, 9) | (8, 10) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 10)) | 8 |
| 44-46 | Chờ 3 bước (`-3`) | (8, 10) | (8, 10) | Dự kiến đứng yên tại (8, 10); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(8, 10)) | 8 |
| 47-48 | Di chuyển hướng 1 (`1`) | (8, 10) | (9, 9) | Dự kiến đến điểm hẹn tọa độ (9, 9) | 7 |
| 49 | Di chuyển hướng 0 (`0`) | (9, 9) | (8, 8) | Dự kiến đến điểm hẹn tọa độ (8, 8) | 5 |
| 50-51 | Di chuyển hướng 1 (`1`) | (8, 8) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 4 |
| 52-53 | Di chuyển hướng 1 (`1`) | (9, 7) | (9, 6) | Dự kiến đến điểm hẹn tọa độ (9, 6) | 3 |
| 54 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đến điểm hẹn tọa độ (9, 5) | 1 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (14, 20) (ô=434)
- Nhiên liệu đầu ngày: 47
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(17, 10)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(17, 10)
- Mảng hành động đã gửi server: `[0, 0, 0, 3, 2, 1, 0, 0, 4, 4, 4, 5, 3, 3, 3, 3, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 46 |
| 2 | Di chuyển hướng 0 (`0`) | (14, 19) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 44 |
| 3-4 | Di chuyển hướng 0 (`0`) | (13, 18) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 43 |
| 5-6 | Di chuyển hướng 3 (`3`) | (13, 17) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 42 |
| 7-8 | Di chuyển hướng 2 (`2`) | (13, 18) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 41 |
| 9-10 | Di chuyển hướng 1 (`1`) | (14, 18) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 51 |
| 11-12 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 50 |
| 13-14 | Di chuyển hướng 0 (`0`) | (14, 16) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 49 |
| 15-16 | Di chuyển hướng 4 (`4`) | (14, 15) | (13, 16) | Dự kiến đến điểm hẹn tọa độ (13, 16) | 48 |
| 17-18 | Di chuyển hướng 4 (`4`) | (13, 16) | (13, 17) | Dự kiến đến điểm hẹn tọa độ (13, 17) | 47 |
| 19-20 | Di chuyển hướng 4 (`4`) | (13, 17) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 46 |
| 21-22 | Di chuyển hướng 5 (`5`) | (12, 18) | (11, 18) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(11, 18)) | 45 |
| 23-24 | Di chuyển hướng 3 (`3`) | (11, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 44 |
| 25-26 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 43 |
| 27-28 | Di chuyển hướng 3 (`3`) | (12, 20) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 42 |
| 29-30 | Di chuyển hướng 3 (`3`) | (13, 21) | (13, 22) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 22)) | 41 |
| 31-32 | Di chuyển hướng 1 (`1`) | (13, 22) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 40 |
| 33-34 | Di chuyển hướng 1 (`1`) | (14, 21) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 39 |
| 35-36 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(15, 20)) | 38 |
| 37-38 | Di chuyển hướng 1 (`1`) | (15, 20) | (16, 19) | Dự kiến đến điểm hẹn tọa độ (16, 19) | 37 |
| 39-41 | Di chuyển hướng 1 (`1`) | (16, 19) | (16, 18) | Dự kiến đến điểm hẹn tọa độ (16, 18) | 35 |
| 42 | Di chuyển hướng 1 (`1`) | (16, 18) | (17, 17) | Dự kiến đến điểm hẹn tọa độ (17, 17) | 33 |
| 43-44 | Di chuyển hướng 1 (`1`) | (17, 17) | (17, 16) | Dự kiến đến điểm hẹn tọa độ (17, 16) | 32 |
| 45 | Di chuyển hướng 1 (`1`) | (17, 16) | (18, 15) | Dự kiến đến điểm hẹn tọa độ (18, 15) | 30 |
| 46-47 | Di chuyển hướng 1 (`1`) | (18, 15) | (18, 14) | Dự kiến đến điểm hẹn tọa độ (18, 14) | 29 |
| 48 | Di chuyển hướng 1 (`1`) | (18, 14) | (19, 13) | Dự kiến đến điểm hẹn tọa độ (19, 13) | 27 |
| 49 | Di chuyển hướng 0 (`0`) | (19, 13) | (18, 12) | Dự kiến đến điểm hẹn tọa độ (18, 12) | 25 |
| 50-51 | Di chuyển hướng 0 (`0`) | (18, 12) | (18, 11) | Dự kiến đến điểm hẹn tọa độ (18, 11) | 24 |
| 52 | Di chuyển hướng 0 (`0`) | (18, 11) | (17, 10) | Dự kiến đến điểm hẹn tọa độ (17, 10) | 22 |
| 53-54 | Chờ 2 bước (`-2`) | (17, 10) | (17, 10) | Dự kiến đứng yên tại (17, 10); hướng tới tọa độ (17, 10) | 22 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (13, 9) (ô=202)
- Nhiên liệu đầu ngày: 22
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(14, 9))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(14, 9))
- Mảng hành động đã gửi server: `[1, 1, 1, 2, 2, 2, 2, 3, 2, 5, 0, 0, 0, 0, 0, 1, 1, 5, 4, 5, 5, 4, 4, 4, 3, 4, 3, 3, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (13, 9) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 21 |
| 2-3 | Di chuyển hướng 1 (`1`) | (13, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 20 |
| 4-5 | Di chuyển hướng 1 (`1`) | (14, 7) | (14, 6) | Dự kiến đến điểm hẹn tọa độ (14, 6) | 19 |
| 6-7 | Di chuyển hướng 2 (`2`) | (14, 6) | (15, 6) | Dự kiến đến điểm hẹn tọa độ (15, 6) | 18 |
| 8-9 | Di chuyển hướng 2 (`2`) | (15, 6) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 17 |
| 10-11 | Di chuyển hướng 2 (`2`) | (16, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 16 |
| 12-13 | Di chuyển hướng 2 (`2`) | (17, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 15 |
| 14-15 | Di chuyển hướng 3 (`3`) | (18, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 14 |
| 16 | Di chuyển hướng 2 (`2`) | (19, 7) | (20, 7) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(20, 7)) | 12 |
| 17-18 | Di chuyển hướng 5 (`5`) | (20, 7) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 11 |
| 19 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 9 |
| 20-21 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 8 |
| 22-24 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 6 |
| 25-26 | Di chuyển hướng 0 (`0`) | (17, 4) | (17, 3) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(17, 3)) | 5 |
| 27-28 | Di chuyển hướng 0 (`0`) | (17, 3) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 4 |
| 29-30 | Di chuyển hướng 1 (`1`) | (16, 2) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 3 |
| 31-33 | Di chuyển hướng 1 (`1`) | (17, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 51 |
| 34-35 | Di chuyển hướng 5 (`5`) | (17, 0) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 50 |
| 36-37 | Di chuyển hướng 4 (`4`) | (16, 0) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 49 |
| 38-39 | Di chuyển hướng 5 (`5`) | (16, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 48 |
| 40-41 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(14, 1)) | 47 |
| 42-43 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến đến điểm hẹn tọa độ (13, 2) | 46 |
| 44-45 | Di chuyển hướng 4 (`4`) | (13, 2) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 45 |
| 46 | Di chuyển hướng 4 (`4`) | (13, 3) | (12, 4) | Dự kiến đến điểm hẹn tọa độ (12, 4) | 43 |
| 47-48 | Di chuyển hướng 3 (`3`) | (12, 4) | (13, 5) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(13, 5)) | 42 |
| 49-50 | Di chuyển hướng 4 (`4`) | (13, 5) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 41 |
| 51 | Di chuyển hướng 3 (`3`) | (12, 6) | (13, 7) | Dự kiến đến điểm hẹn tọa độ (13, 7) | 39 |
| 52 | Di chuyển hướng 3 (`3`) | (13, 7) | (13, 8) | Dự kiến đến điểm hẹn tọa độ (13, 8) | 37 |
| 53-54 | Di chuyển hướng 3 (`3`) | (13, 8) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 36 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (4, 20) (ô=424)
- Nhiên liệu đầu ngày: 32
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 21)
- Mảng hành động đã gửi server: `[0, 3, 2, 2, 2, 2, 1, 0, 1, 0, 1, 1, 1, 2, 3, 3, 2, 2, 3, 3, 4, 3, 3, 5, 4, 4, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (4, 20) | (4, 19) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(4, 19)) | 31 |
| 2-3 | Di chuyển hướng 3 (`3`) | (4, 19) | (4, 20) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(4, 20)) | 30 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 29 |
| 6-7 | Di chuyển hướng 2 (`2`) | (5, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 28 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 27 |
| 10-11 | Di chuyển hướng 2 (`2`) | (7, 20) | (8, 20) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(8, 20)) | 26 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 20) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 25 |
| 14-15 | Di chuyển hướng 0 (`0`) | (9, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 24 |
| 16 | Di chuyển hướng 1 (`1`) | (8, 18) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 22 |
| 17-18 | Di chuyển hướng 0 (`0`) | (9, 17) | (8, 16) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(8, 16)) | 21 |
| 19-20 | Di chuyển hướng 1 (`1`) | (8, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 20 |
| 21-22 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đến điểm hẹn tọa độ (9, 14) | 19 |
| 23-24 | Di chuyển hướng 1 (`1`) | (9, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 18 |
| 25-28 | Di chuyển hướng 2 (`2`) | (10, 13) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 16 |
| 29-30 | Di chuyển hướng 3 (`3`) | (11, 13) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 15 |
| 31-32 | Di chuyển hướng 3 (`3`) | (11, 14) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 14 |
| 33-34 | Di chuyển hướng 2 (`2`) | (12, 15) | (13, 15) | Dự kiến đến điểm hẹn tọa độ (13, 15) | 13 |
| 35-36 | Di chuyển hướng 2 (`2`) | (13, 15) | (14, 15) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(14, 15)) | 12 |
| 37-38 | Di chuyển hướng 3 (`3`) | (14, 15) | (14, 16) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(14, 16)) | 11 |
| 39-40 | Di chuyển hướng 3 (`3`) | (14, 16) | (15, 17) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 51 |
| 41-42 | Di chuyển hướng 4 (`4`) | (15, 17) | (14, 18) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(14, 18)) | 50 |
| 43-44 | Di chuyển hướng 3 (`3`) | (14, 18) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 49 |
| 45-46 | Di chuyển hướng 3 (`3`) | (15, 19) | (15, 20) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(15, 20)) | 48 |
| 47-48 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 47 |
| 49-50 | Di chuyển hướng 4 (`4`) | (14, 20) | (14, 21) | Dự kiến đến điểm hẹn tọa độ (14, 21) | 46 |
| 51-52 | Di chuyển hướng 4 (`4`) | (14, 21) | (13, 22) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(13, 22)) | 45 |
| 53-54 | Di chuyển hướng 0 (`0`) | (13, 22) | (13, 21) | Dự kiến đến điểm hẹn tọa độ (13, 21) | 44 |

### Xe #5 - Tiếp tế

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (17, 0) | (17, 0) | Dự kiến đứng yên tại (17, 0); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(17, 0)) | 51 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (15, 17) (ô=372)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(15, 17))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(15, 17))
- Mảng hành động đã gửi server: `[-55]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-54 | Chờ 55 bước (`-55`) | (15, 17) | (15, 17) | Dự kiến đứng yên tại (15, 17); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(15, 17)) | 51 |

