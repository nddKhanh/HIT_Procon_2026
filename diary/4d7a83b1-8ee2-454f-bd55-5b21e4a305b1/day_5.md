# Nhật ký hành trình - Ngày 5

- Số bước trong ngày: 60
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 21 | #1 | #6 | (9, 2) | 2 | 55 |
| 54 | #2 | #7 | (24, 4) | 0 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (2, 15) (ô=377)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(13, 6)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(13, 6)
- Mảng hành động đã gửi server: `[5, 4, 4, 3, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 1, 0, 0, 0, 0, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (2, 15) | (1, 15) | Dự kiến đến điểm hẹn tọa độ (1, 15) | 54 |
| 2-3 | Di chuyển hướng 4 (`4`) | (1, 15) | (0, 16) | Dự kiến đến điểm hẹn tọa độ (0, 16) | 53 |
| 4-6 | Di chuyển hướng 4 (`4`) | (0, 16) | (0, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(0, 17)) | 51 |
| 7-8 | Di chuyển hướng 3 (`3`) | (0, 17) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 50 |
| 9-10 | Di chuyển hướng 2 (`2`) | (0, 18) | (1, 18) | Dự kiến đến điểm hẹn tọa độ (1, 18) | 49 |
| 11-12 | Di chuyển hướng 2 (`2`) | (1, 18) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 48 |
| 13-14 | Di chuyển hướng 2 (`2`) | (2, 18) | (3, 18) | Dự kiến đến điểm hẹn tọa độ (3, 18) | 47 |
| 15-16 | Di chuyển hướng 2 (`2`) | (3, 18) | (4, 18) | Dự kiến đến điểm hẹn tọa độ (4, 18) | 46 |
| 17-18 | Di chuyển hướng 2 (`2`) | (4, 18) | (5, 18) | Dự kiến đến điểm hẹn tọa độ (5, 18) | 45 |
| 19 | Di chuyển hướng 1 (`1`) | (5, 18) | (6, 17) | Dự kiến đến điểm hẹn tọa độ (6, 17) | 43 |
| 20-22 | Di chuyển hướng 2 (`2`) | (6, 17) | (7, 17) | Dự kiến đến điểm hẹn tọa độ (7, 17) | 41 |
| 23-24 | Di chuyển hướng 2 (`2`) | (7, 17) | (8, 17) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(8, 17)) | 40 |
| 25-26 | Di chuyển hướng 1 (`1`) | (8, 17) | (8, 16) | Dự kiến đến điểm hẹn tọa độ (8, 16) | 39 |
| 27-28 | Di chuyển hướng 2 (`2`) | (8, 16) | (9, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(9, 16)) | 38 |
| 29-30 | Di chuyển hướng 2 (`2`) | (9, 16) | (10, 16) | Dự kiến đến điểm hẹn tọa độ (10, 16) | 37 |
| 31-33 | Di chuyển hướng 2 (`2`) | (10, 16) | (11, 16) | Dự kiến đến điểm hẹn tọa độ (11, 16) | 35 |
| 34 | Di chuyển hướng 2 (`2`) | (11, 16) | (12, 16) | Dự kiến đến điểm hẹn tọa độ (12, 16) | 33 |
| 35-37 | Di chuyển hướng 2 (`2`) | (12, 16) | (13, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 16)) | 31 |
| 38-39 | Di chuyển hướng 1 (`1`) | (13, 16) | (14, 15) | Dự kiến đến điểm hẹn tọa độ (14, 15) | 30 |
| 40 | Di chuyển hướng 1 (`1`) | (14, 15) | (14, 14) | Dự kiến đến điểm hẹn tọa độ (14, 14) | 28 |
| 41 | Di chuyển hướng 2 (`2`) | (14, 14) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 26 |
| 42-43 | Di chuyển hướng 1 (`1`) | (15, 14) | (16, 13) | Dự kiến đạt mục tiêu Spot #24 (thương hiệu=24, tọa độ=(16, 13)) | 25 |
| 44-45 | Di chuyển hướng 1 (`1`) | (16, 13) | (16, 12) | Dự kiến đến điểm hẹn tọa độ (16, 12) | 24 |
| 46-47 | Di chuyển hướng 0 (`0`) | (16, 12) | (16, 11) | Dự kiến đến điểm hẹn tọa độ (16, 11) | 23 |
| 48-50 | Di chuyển hướng 0 (`0`) | (16, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 21 |
| 51-52 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 20 |
| 53-54 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 19 |
| 55 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 17 |
| 56-58 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 15 |
| 59 | Chờ 1 bước (`-1`) | (13, 6) | (13, 6) | Dự kiến đứng yên tại (13, 6); hướng tới tọa độ (13, 6) | 15 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (5, 8) (ô=205)
- Nhiên liệu đầu ngày: 15
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 1)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 1)
- Mảng hành động đã gửi server: `[3, 1, 1, 1, 1, 1, 1, 0, -1, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 2, 2, 3, 3, 2, 0, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (5, 8) | (6, 9) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(6, 9)) | 14 |
| 2-3 | Di chuyển hướng 1 (`1`) | (6, 9) | (6, 8) | Dự kiến đến điểm hẹn tọa độ (6, 8) | 13 |
| 4-6 | Di chuyển hướng 1 (`1`) | (6, 8) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 11 |
| 7-9 | Di chuyển hướng 1 (`1`) | (7, 7) | (7, 6) | Dự kiến đến điểm hẹn tọa độ (7, 6) | 9 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 6) | (8, 5) | Dự kiến đến điểm hẹn tọa độ (8, 5) | 8 |
| 12 | Di chuyển hướng 1 (`1`) | (8, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 6 |
| 13-15 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 4 |
| 16-17 | Di chuyển hướng 0 (`0`) | (9, 3) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 3 |
| 18 | Chờ 1 bước (`-1`) | (8, 2) | (8, 2) | Dự kiến đứng yên tại (8, 2); mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 3 |
| 19-20 | Di chuyển hướng 2 (`2`) | (8, 2) | (9, 2) | Dự kiến đến điểm hẹn tọa độ (9, 2) | 55 |
| 21-23 | Di chuyển hướng 2 (`2`) | (9, 2) | (10, 2) | Dự kiến đến điểm hẹn tọa độ (10, 2) | 53 |
| 24-26 | Di chuyển hướng 2 (`2`) | (10, 2) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 51 |
| 27-28 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 50 |
| 29 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 48 |
| 30-31 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến đến điểm hẹn tọa độ (14, 1) | 47 |
| 32-34 | Di chuyển hướng 2 (`2`) | (14, 1) | (15, 1) | Dự kiến đến điểm hẹn tọa độ (15, 1) | 45 |
| 35-36 | Di chuyển hướng 2 (`2`) | (15, 1) | (16, 1) | Dự kiến đến điểm hẹn tọa độ (16, 1) | 44 |
| 37-38 | Di chuyển hướng 1 (`1`) | (16, 1) | (16, 0) | Dự kiến đến điểm hẹn tọa độ (16, 0) | 43 |
| 39-41 | Di chuyển hướng 2 (`2`) | (16, 0) | (17, 0) | Dự kiến đến điểm hẹn tọa độ (17, 0) | 41 |
| 42 | Di chuyển hướng 2 (`2`) | (17, 0) | (18, 0) | Dự kiến đến điểm hẹn tọa độ (18, 0) | 39 |
| 43-44 | Di chuyển hướng 2 (`2`) | (18, 0) | (19, 0) | Dự kiến đến điểm hẹn tọa độ (19, 0) | 38 |
| 45-46 | Di chuyển hướng 2 (`2`) | (19, 0) | (20, 0) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(20, 0)) | 37 |
| 47-48 | Di chuyển hướng 2 (`2`) | (20, 0) | (21, 0) | Dự kiến đến điểm hẹn tọa độ (21, 0) | 36 |
| 49-50 | Di chuyển hướng 2 (`2`) | (21, 0) | (22, 0) | Dự kiến đến điểm hẹn tọa độ (22, 0) | 35 |
| 51 | Di chuyển hướng 3 (`3`) | (22, 0) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 33 |
| 52-53 | Di chuyển hướng 3 (`3`) | (23, 1) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 32 |
| 54-55 | Di chuyển hướng 2 (`2`) | (23, 2) | (24, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(24, 2)) | 31 |
| 56-57 | Di chuyển hướng 0 (`0`) | (24, 2) | (24, 1) | Dự kiến đến điểm hẹn tọa độ (24, 1) | 30 |
| 58-59 | Di chuyển hướng 5 (`5`) | (24, 1) | (23, 1) | Dự kiến đến điểm hẹn tọa độ (23, 1) | 29 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (22, 8) (ô=222)
- Nhiên liệu đầu ngày: 6
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(23, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(23, 2)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, -43, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (22, 8) | (23, 7) | Dự kiến đến điểm hẹn tọa độ (23, 7) | 5 |
| 2-5 | Di chuyển hướng 1 (`1`) | (23, 7) | (23, 6) | Dự kiến đến điểm hẹn tọa độ (23, 6) | 3 |
| 6-7 | Di chuyển hướng 1 (`1`) | (23, 6) | (24, 5) | Dự kiến đến điểm hẹn tọa độ (24, 5) | 2 |
| 8-11 | Di chuyển hướng 1 (`1`) | (24, 5) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 0 |
| 12-54 | Chờ 43 bước (`-43`) | (24, 4) | (24, 4) | Dự kiến đứng yên tại (24, 4); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 55 |
| 55-56 | Di chuyển hướng 0 (`0`) | (24, 4) | (24, 3) | Dự kiến đến điểm hẹn tọa độ (24, 3) | 54 |
| 57-58 | Di chuyển hướng 0 (`0`) | (24, 3) | (23, 2) | Dự kiến đến điểm hẹn tọa độ (23, 2) | 53 |
| 59 | Chờ 1 bước (`-1`) | (23, 2) | (23, 2) | Dự kiến đứng yên tại (23, 2); hướng tới tọa độ (23, 2) | 53 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (15, 17) (ô=440)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #15 (thương hiệu=15, tọa độ=(17, 3))
- Địa điểm đích kế hoạch: Spot #15 (thương hiệu=15, tọa độ=(17, 3))
- Mảng hành động đã gửi server: `[0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 5, 4, 2, 2, 3, 2, 2, 2, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (15, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 34 |
| 2-4 | Di chuyển hướng 1 (`1`) | (14, 16) | (15, 15) | Dự kiến đến điểm hẹn tọa độ (15, 15) | 32 |
| 5-6 | Di chuyển hướng 1 (`1`) | (15, 15) | (15, 14) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(15, 14)) | 31 |
| 7-8 | Di chuyển hướng 0 (`0`) | (15, 14) | (15, 13) | Dự kiến đến điểm hẹn tọa độ (15, 13) | 30 |
| 9-10 | Di chuyển hướng 0 (`0`) | (15, 13) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 29 |
| 11-12 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 28 |
| 13-14 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 27 |
| 15-16 | Di chuyển hướng 0 (`0`) | (15, 10) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 26 |
| 17-18 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 25 |
| 19 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 23 |
| 20-22 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 21 |
| 23-25 | Di chuyển hướng 1 (`1`) | (13, 6) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 19 |
| 26-27 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 18 |
| 28 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 16 |
| 29-30 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 15 |
| 31-32 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 14 |
| 33-34 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến đến điểm hẹn tọa độ (12, 1) | 13 |
| 35 | Di chuyển hướng 4 (`4`) | (12, 1) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 11 |
| 36-37 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 10 |
| 38 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 8 |
| 39-40 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 7 |
| 41-42 | Di chuyển hướng 2 (`2`) | (14, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 6 |
| 43-45 | Di chuyển hướng 2 (`2`) | (15, 3) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 4 |
| 46-47 | Di chuyển hướng 2 (`2`) | (16, 3) | (17, 3) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 2 |
| 48-59 | Chờ 12 bước (`-12`) | (17, 3) | (17, 3) | Dự kiến đứng yên tại (17, 3); mục tiêu Spot #15 (thương hiệu=15, tọa độ=(17, 3)) | 2 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (20, 21) (ô=545)
- Nhiên liệu đầu ngày: 35
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(22, 17))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(22, 17))
- Mảng hành động đã gửi server: `[5, 5, 5, 0, 5, 0, 5, 5, 2, 3, 3, 2, 2, 2, 2, 2, 2, 0, 1, 1, 1, -20]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (20, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 33 |
| 1-3 | Di chuyển hướng 5 (`5`) | (19, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 31 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 30 |
| 6-7 | Di chuyển hướng 0 (`0`) | (17, 21) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 29 |
| 8-9 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 28 |
| 10 | Di chuyển hướng 0 (`0`) | (15, 20) | (15, 19) | Dự kiến đến điểm hẹn tọa độ (15, 19) | 26 |
| 11-13 | Di chuyển hướng 5 (`5`) | (15, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 24 |
| 14 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(13, 19)) | 22 |
| 15-16 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 21 |
| 17 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 19 |
| 18-20 | Di chuyển hướng 3 (`3`) | (14, 20) | (15, 21) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(15, 21)) | 17 |
| 21-22 | Di chuyển hướng 2 (`2`) | (15, 21) | (16, 21) | Dự kiến đến điểm hẹn tọa độ (16, 21) | 16 |
| 23-25 | Di chuyển hướng 2 (`2`) | (16, 21) | (17, 21) | Dự kiến đến điểm hẹn tọa độ (17, 21) | 14 |
| 26-27 | Di chuyển hướng 2 (`2`) | (17, 21) | (18, 21) | Dự kiến đến điểm hẹn tọa độ (18, 21) | 13 |
| 28-29 | Di chuyển hướng 2 (`2`) | (18, 21) | (19, 21) | Dự kiến đến điểm hẹn tọa độ (19, 21) | 12 |
| 30-32 | Di chuyển hướng 2 (`2`) | (19, 21) | (20, 21) | Dự kiến đến điểm hẹn tọa độ (20, 21) | 10 |
| 33 | Di chuyển hướng 2 (`2`) | (20, 21) | (21, 21) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(21, 21)) | 8 |
| 34-35 | Di chuyển hướng 0 (`0`) | (21, 21) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 7 |
| 36-37 | Di chuyển hướng 1 (`1`) | (20, 20) | (21, 19) | Dự kiến đến điểm hẹn tọa độ (21, 19) | 6 |
| 38 | Di chuyển hướng 1 (`1`) | (21, 19) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 4 |
| 39 | Di chuyển hướng 1 (`1`) | (21, 18) | (22, 17) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 2 |
| 40-59 | Chờ 20 bước (`-20`) | (22, 17) | (22, 17) | Dự kiến đứng yên tại (22, 17); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(22, 17)) | 2 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (9, 2) (ô=59)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #16 (thương hiệu=16, tọa độ=(13, 1))
- Địa điểm đích kế hoạch: Spot #16 (thương hiệu=16, tọa độ=(13, 1))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, 0, 0, 3, 3, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 1, 2, 2, 3, 0, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (9, 2) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 53 |
| 3-4 | Di chuyển hướng 5 (`5`) | (8, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 52 |
| 5-7 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 50 |
| 8-9 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 49 |
| 10-11 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 48 |
| 12 | Di chuyển hướng 5 (`5`) | (4, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 46 |
| 13-14 | Di chuyển hướng 5 (`5`) | (3, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 45 |
| 15-16 | Di chuyển hướng 5 (`5`) | (2, 2) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 44 |
| 17-19 | Di chuyển hướng 0 (`0`) | (1, 2) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 42 |
| 20-21 | Di chuyển hướng 0 (`0`) | (1, 1) | (0, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(0, 0)) | 41 |
| 22-23 | Di chuyển hướng 3 (`3`) | (0, 0) | (1, 1) | Dự kiến đến điểm hẹn tọa độ (1, 1) | 40 |
| 24-25 | Di chuyển hướng 3 (`3`) | (1, 1) | (1, 2) | Dự kiến đến điểm hẹn tọa độ (1, 2) | 39 |
| 26-28 | Di chuyển hướng 2 (`2`) | (1, 2) | (2, 2) | Dự kiến đến điểm hẹn tọa độ (2, 2) | 37 |
| 29-30 | Di chuyển hướng 2 (`2`) | (2, 2) | (3, 2) | Dự kiến đến điểm hẹn tọa độ (3, 2) | 36 |
| 31-32 | Di chuyển hướng 2 (`2`) | (3, 2) | (4, 2) | Dự kiến đến điểm hẹn tọa độ (4, 2) | 35 |
| 33 | Di chuyển hướng 2 (`2`) | (4, 2) | (5, 2) | Dự kiến đến điểm hẹn tọa độ (5, 2) | 33 |
| 34-35 | Di chuyển hướng 2 (`2`) | (5, 2) | (6, 2) | Dự kiến đến điểm hẹn tọa độ (6, 2) | 32 |
| 36-37 | Di chuyển hướng 2 (`2`) | (6, 2) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 31 |
| 38-40 | Di chuyển hướng 2 (`2`) | (7, 2) | (8, 2) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(8, 2)) | 29 |
| 41-42 | Di chuyển hướng 3 (`3`) | (8, 2) | (9, 3) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(9, 3)) | 28 |
| 43-44 | Di chuyển hướng 2 (`2`) | (9, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 27 |
| 45-47 | Di chuyển hướng 2 (`2`) | (10, 3) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 25 |
| 48-49 | Di chuyển hướng 1 (`1`) | (11, 3) | (11, 2) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(11, 2)) | 23 |
| 50-51 | Di chuyển hướng 2 (`2`) | (11, 2) | (12, 2) | Dự kiến đến điểm hẹn tọa độ (12, 2) | 22 |
| 52 | Di chuyển hướng 2 (`2`) | (12, 2) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 20 |
| 53-54 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(14, 3)) | 19 |
| 55-56 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(13, 2)) | 18 |
| 57-58 | Di chuyển hướng 0 (`0`) | (13, 2) | (13, 1) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 17 |
| 59 | Chờ 1 bước (`-1`) | (13, 1) | (13, 1) | Dự kiến đứng yên tại (13, 1); mục tiêu Spot #16 (thương hiệu=16, tọa độ=(13, 1)) | 17 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (9, 2) (ô=59)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(9, 2)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(9, 2)
- Mảng hành động đã gửi server: `[-60]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-59 | Chờ 60 bước (`-60`) | (9, 2) | (9, 2) | Dự kiến đứng yên tại (9, 2); hướng tới tọa độ (9, 2) | 55 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (2, 15) (ô=377)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(24, 4))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(24, 4))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 1, 1, 2, 1, 2, 1, 1, 1, 1, 2, 1, 2, 2, 2, -6]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (2, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 55 |
| 2-3 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 55 |
| 4 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 55 |
| 5-6 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 55 |
| 7-9 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 55 |
| 10 | Di chuyển hướng 1 (`1`) | (6, 16) | (7, 15) | Dự kiến đến điểm hẹn tọa độ (7, 15) | 55 |
| 11 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến đến điểm hẹn tọa độ (8, 15) | 55 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 55 |
| 14 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 55 |
| 15-16 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 55 |
| 17 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 55 |
| 18 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 55 |
| 19-21 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 55 |
| 22-23 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đến điểm hẹn tọa độ (13, 12) | 55 |
| 24-26 | Di chuyển hướng 2 (`2`) | (13, 12) | (14, 12) | Dự kiến đến điểm hẹn tọa độ (14, 12) | 55 |
| 27-28 | Di chuyển hướng 1 (`1`) | (14, 12) | (15, 11) | Dự kiến đến điểm hẹn tọa độ (15, 11) | 55 |
| 29-30 | Di chuyển hướng 1 (`1`) | (15, 11) | (15, 10) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(15, 10)) | 55 |
| 31-32 | Di chuyển hướng 2 (`2`) | (15, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 55 |
| 33 | Di chuyển hướng 1 (`1`) | (16, 10) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 55 |
| 34-36 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 55 |
| 37-38 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 55 |
| 39 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 55 |
| 40-41 | Di chuyển hướng 1 (`1`) | (19, 7) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 55 |
| 42-44 | Di chuyển hướng 1 (`1`) | (19, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 55 |
| 45 | Di chuyển hướng 2 (`2`) | (20, 5) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 55 |
| 46-47 | Di chuyển hướng 1 (`1`) | (21, 5) | (21, 4) | Dự kiến đến điểm hẹn tọa độ (21, 4) | 55 |
| 48-50 | Di chuyển hướng 2 (`2`) | (21, 4) | (22, 4) | Dự kiến đến điểm hẹn tọa độ (22, 4) | 55 |
| 51 | Di chuyển hướng 2 (`2`) | (22, 4) | (23, 4) | Dự kiến đến điểm hẹn tọa độ (23, 4) | 55 |
| 52-53 | Di chuyển hướng 2 (`2`) | (23, 4) | (24, 4) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 55 |
| 54-59 | Chờ 6 bước (`-6`) | (24, 4) | (24, 4) | Dự kiến đứng yên tại (24, 4); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(24, 4)) | 55 |

