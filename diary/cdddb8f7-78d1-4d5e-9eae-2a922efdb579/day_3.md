# Nhật ký hành trình - Ngày 3

- Số bước trong ngày: 48
- Số xe: 8
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 17 | #3 | #6 | (11, 10) | 0 | 49 |
| 29 | #0 | #7 | (12, 18) | 0 | 49 |
| 33 | #5 | #6 | (15, 9) | 23 | 49 |
| 36 | #0 | #7 | (11, 19) | 43 | 49 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (12, 18) (ô=408)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(7, 16)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(7, 16)
- Mảng hành động đã gửi server: `[-30, 4, 3, 0, 5, 0, 0, 0, 0, 5, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-29 | Chờ 30 bước (`-30`) | (12, 18) | (12, 18) | Dự kiến đứng yên tại (12, 18); mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 49 |
| 30-31 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 48 |
| 32 | Di chuyển hướng 3 (`3`) | (12, 19) | (12, 20) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(12, 20)) | 46 |
| 33-34 | Di chuyển hướng 0 (`0`) | (12, 20) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 45 |
| 35 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 49 |
| 36-37 | Di chuyển hướng 0 (`0`) | (11, 19) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 48 |
| 38-40 | Di chuyển hướng 0 (`0`) | (10, 18) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 46 |
| 41-42 | Di chuyển hướng 0 (`0`) | (10, 17) | (9, 16) | Dự kiến đến điểm hẹn tọa độ (9, 16) | 45 |
| 43-44 | Di chuyển hướng 0 (`0`) | (9, 16) | (9, 15) | Dự kiến đến điểm hẹn tọa độ (9, 15) | 44 |
| 45 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 42 |
| 46-47 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 41 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (13, 17) (ô=387)
- Nhiên liệu đầu ngày: 20
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(21, 19))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(21, 19))
- Mảng hành động đã gửi server: `[2, 1, 2, 1, 2, 2, 3, 3, 2, 2, 3, 4, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 2 (`2`) | (13, 17) | (14, 17) | Dự kiến đến điểm hẹn tọa độ (14, 17) | 18 |
| 3-4 | Di chuyển hướng 1 (`1`) | (14, 17) | (14, 16) | Dự kiến đến điểm hẹn tọa độ (14, 16) | 17 |
| 5-7 | Di chuyển hướng 2 (`2`) | (14, 16) | (15, 16) | Dự kiến đến điểm hẹn tọa độ (15, 16) | 15 |
| 8-9 | Di chuyển hướng 1 (`1`) | (15, 16) | (16, 15) | Dự kiến đến điểm hẹn tọa độ (16, 15) | 14 |
| 10-11 | Di chuyển hướng 2 (`2`) | (16, 15) | (17, 15) | Dự kiến đến điểm hẹn tọa độ (17, 15) | 13 |
| 12-14 | Di chuyển hướng 2 (`2`) | (17, 15) | (18, 15) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(18, 15)) | 11 |
| 15-16 | Di chuyển hướng 3 (`3`) | (18, 15) | (18, 16) | Dự kiến đến điểm hẹn tọa độ (18, 16) | 10 |
| 17-19 | Di chuyển hướng 3 (`3`) | (18, 16) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 8 |
| 20-21 | Di chuyển hướng 2 (`2`) | (19, 17) | (20, 17) | Dự kiến đến điểm hẹn tọa độ (20, 17) | 7 |
| 22 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(21, 17)) | 5 |
| 23-24 | Di chuyển hướng 3 (`3`) | (21, 17) | (21, 18) | Dự kiến đến điểm hẹn tọa độ (21, 18) | 4 |
| 25-26 | Di chuyển hướng 4 (`4`) | (21, 18) | (21, 19) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 19)) | 3 |
| 27-47 | Chờ 21 bước (`-21`) | (21, 19) | (21, 19) | Dự kiến đứng yên tại (21, 19); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 19)) | 3 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 10) (ô=224)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #1 (thương hiệu=1, tọa độ=(6, 17))
- Địa điểm đích kế hoạch: Spot #1 (thương hiệu=1, tọa độ=(6, 17))
- Mảng hành động đã gửi server: `[0, 0, 0, 5, 0, 0, 0, 3, 2, 4, 4, 3, 4, 3, 4, 3, 3, 3, 3, 2, 3, 2, 3, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (4, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 35 |
| 3-5 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 33 |
| 6-7 | Di chuyển hướng 0 (`0`) | (3, 8) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 32 |
| 8 | Di chuyển hướng 5 (`5`) | (3, 7) | (2, 7) | Dự kiến đến điểm hẹn tọa độ (2, 7) | 30 |
| 9-10 | Di chuyển hướng 0 (`0`) | (2, 7) | (1, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 6)) | 29 |
| 11-12 | Di chuyển hướng 0 (`0`) | (1, 6) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 28 |
| 13-14 | Di chuyển hướng 0 (`0`) | (1, 5) | (0, 4) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(0, 4)) | 27 |
| 15-16 | Di chuyển hướng 3 (`3`) | (0, 4) | (1, 5) | Dự kiến đến điểm hẹn tọa độ (1, 5) | 26 |
| 17-18 | Di chuyển hướng 2 (`2`) | (1, 5) | (2, 5) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(2, 5)) | 25 |
| 19-20 | Di chuyển hướng 4 (`4`) | (2, 5) | (1, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(1, 6)) | 24 |
| 21-22 | Di chuyển hướng 4 (`4`) | (1, 6) | (1, 7) | Dự kiến đến điểm hẹn tọa độ (1, 7) | 23 |
| 23 | Di chuyển hướng 3 (`3`) | (1, 7) | (1, 8) | Dự kiến đến điểm hẹn tọa độ (1, 8) | 21 |
| 24-25 | Di chuyển hướng 4 (`4`) | (1, 8) | (1, 9) | Dự kiến đến điểm hẹn tọa độ (1, 9) | 20 |
| 26-27 | Di chuyển hướng 3 (`3`) | (1, 9) | (1, 10) | Dự kiến đến điểm hẹn tọa độ (1, 10) | 19 |
| 28-29 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đến điểm hẹn tọa độ (1, 11) | 18 |
| 30-31 | Di chuyển hướng 3 (`3`) | (1, 11) | (1, 12) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 12)) | 16 |
| 32-33 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 15 |
| 34-35 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 13 |
| 36-38 | Di chuyển hướng 3 (`3`) | (2, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 11 |
| 39-40 | Di chuyển hướng 2 (`2`) | (3, 15) | (4, 15) | Dự kiến đến điểm hẹn tọa độ (4, 15) | 10 |
| 41-42 | Di chuyển hướng 3 (`3`) | (4, 15) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 9 |
| 43-44 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 7 |
| 45-46 | Di chuyển hướng 3 (`3`) | (5, 16) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 6 |
| 47 | Chờ 1 bước (`-1`) | (6, 17) | (6, 17) | Dự kiến đứng yên tại (6, 17); mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 6 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (12, 11) (ô=254)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(0, 18))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(0, 18))
- Mảng hành động đã gửi server: `[0, -15, 5, 4, 5, 5, 4, 5, 5, 5, 4, 4, 4, 4, 4, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 0 (`0`) | (12, 11) | (11, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 0 |
| 3-17 | Chờ 15 bước (`-15`) | (11, 10) | (11, 10) | Dự kiến đứng yên tại (11, 10); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 49 |
| 18-19 | Di chuyển hướng 5 (`5`) | (11, 10) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 48 |
| 20-21 | Di chuyển hướng 4 (`4`) | (10, 10) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 47 |
| 22-23 | Di chuyển hướng 5 (`5`) | (10, 11) | (9, 11) | Dự kiến đến điểm hẹn tọa độ (9, 11) | 46 |
| 24 | Di chuyển hướng 5 (`5`) | (9, 11) | (8, 11) | Dự kiến đến điểm hẹn tọa độ (8, 11) | 44 |
| 25-27 | Di chuyển hướng 4 (`4`) | (8, 11) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 42 |
| 28-30 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 40 |
| 31-32 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(5, 12)) | 39 |
| 33-34 | Di chuyển hướng 5 (`5`) | (5, 12) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 38 |
| 35-36 | Di chuyển hướng 4 (`4`) | (4, 12) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 37 |
| 37 | Di chuyển hướng 4 (`4`) | (4, 13) | (3, 14) | Dự kiến đến điểm hẹn tọa độ (3, 14) | 35 |
| 38-39 | Di chuyển hướng 4 (`4`) | (3, 14) | (3, 15) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(3, 15)) | 34 |
| 40-41 | Di chuyển hướng 4 (`4`) | (3, 15) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 33 |
| 42 | Di chuyển hướng 4 (`4`) | (2, 16) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 31 |
| 43 | Di chuyển hướng 5 (`5`) | (2, 17) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 29 |
| 44-46 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(0, 18)) | 27 |
| 47 | Chờ 1 bước (`-1`) | (0, 18) | (0, 18) | Dự kiến đứng yên tại (0, 18); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(0, 18)) | 27 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (21, 11) (ô=263)
- Nhiên liệu đầu ngày: 30
- Mục tiêu kế hoạch từ Solver: Spot #7 (thương hiệu=7, tọa độ=(8, 3))
- Địa điểm đích kế hoạch: Spot #7 (thương hiệu=7, tọa độ=(8, 3))
- Mảng hành động đã gửi server: `[5, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 5, 0, 5, 4, 5, 5, 5, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 5 (`5`) | (21, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 28 |
| 1-2 | Di chuyển hướng 0 (`0`) | (20, 11) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 27 |
| 3-5 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 25 |
| 6-7 | Di chuyển hướng 0 (`0`) | (18, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 24 |
| 8 | Di chuyển hướng 0 (`0`) | (18, 9) | (17, 8) | Dự kiến đến điểm hẹn tọa độ (17, 8) | 22 |
| 9-11 | Di chuyển hướng 0 (`0`) | (17, 8) | (17, 7) | Dự kiến đến điểm hẹn tọa độ (17, 7) | 20 |
| 12-14 | Di chuyển hướng 0 (`0`) | (17, 7) | (16, 6) | Dự kiến đến điểm hẹn tọa độ (16, 6) | 18 |
| 15-16 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 17 |
| 17 | Di chuyển hướng 5 (`5`) | (16, 5) | (15, 5) | Dự kiến đến điểm hẹn tọa độ (15, 5) | 15 |
| 18-19 | Di chuyển hướng 0 (`0`) | (15, 5) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 14 |
| 20 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến đến điểm hẹn tọa độ (14, 3) | 12 |
| 21 | Di chuyển hướng 5 (`5`) | (14, 3) | (13, 3) | Dự kiến đến điểm hẹn tọa độ (13, 3) | 10 |
| 22-24 | Di chuyển hướng 0 (`0`) | (13, 3) | (12, 2) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(12, 2)) | 8 |
| 25-26 | Di chuyển hướng 5 (`5`) | (12, 2) | (11, 2) | Dự kiến đến điểm hẹn tọa độ (11, 2) | 7 |
| 27-28 | Di chuyển hướng 4 (`4`) | (11, 2) | (11, 3) | Dự kiến đến điểm hẹn tọa độ (11, 3) | 6 |
| 29-31 | Di chuyển hướng 5 (`5`) | (11, 3) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 4 |
| 32 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đến điểm hẹn tọa độ (9, 3) | 2 |
| 33-35 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 0 |
| 36-47 | Chờ 12 bước (`-12`) | (8, 3) | (8, 3) | Dự kiến đứng yên tại (8, 3); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(8, 3)) | 0 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (8, 15) (ô=338)
- Nhiên liệu đầu ngày: 46
- Mục tiêu kế hoạch từ Solver: Spot #14 (thương hiệu=14, tọa độ=(21, 10))
- Địa điểm đích kế hoạch: Spot #14 (thương hiệu=14, tọa độ=(21, 10))
- Mảng hành động đã gửi server: `[4, 5, 4, 1, 2, 1, 1, 1, 1, 2, 2, 2, 2, 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (8, 15) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 45 |
| 2-3 | Di chuyển hướng 5 (`5`) | (7, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 44 |
| 4-5 | Di chuyển hướng 4 (`4`) | (6, 16) | (6, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(6, 17)) | 42 |
| 6-7 | Di chuyển hướng 1 (`1`) | (6, 17) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 41 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 39 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 38 |
| 12-13 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 37 |
| 14-15 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 35 |
| 16 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 33 |
| 17-18 | Di chuyển hướng 2 (`2`) | (9, 12) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 32 |
| 19-20 | Di chuyển hướng 2 (`2`) | (10, 12) | (11, 12) | Dự kiến đến điểm hẹn tọa độ (11, 12) | 31 |
| 21-22 | Di chuyển hướng 2 (`2`) | (11, 12) | (12, 12) | Dự kiến đến điểm hẹn tọa độ (12, 12) | 30 |
| 23 | Di chuyển hướng 2 (`2`) | (12, 12) | (13, 12) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(13, 12)) | 28 |
| 24-25 | Di chuyển hướng 0 (`0`) | (13, 12) | (13, 11) | Dự kiến đến điểm hẹn tọa độ (13, 11) | 27 |
| 26-27 | Di chuyển hướng 1 (`1`) | (13, 11) | (13, 10) | Dự kiến đến điểm hẹn tọa độ (13, 10) | 26 |
| 28-30 | Di chuyển hướng 1 (`1`) | (13, 10) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 24 |
| 31-32 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 49 |
| 33-35 | Di chuyển hướng 2 (`2`) | (15, 9) | (16, 9) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(16, 9)) | 47 |
| 36-37 | Di chuyển hướng 2 (`2`) | (16, 9) | (17, 9) | Dự kiến đến điểm hẹn tọa độ (17, 9) | 46 |
| 38-40 | Di chuyển hướng 2 (`2`) | (17, 9) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 44 |
| 41 | Di chuyển hướng 2 (`2`) | (18, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 42 |
| 42-44 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 40 |
| 45-46 | Di chuyển hướng 2 (`2`) | (20, 9) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 39 |
| 47 | Di chuyển hướng 3 (`3`) | (21, 9) | (21, 10) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(21, 10)) | 37 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (7, 17) (ô=381)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(15, 9)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(15, 9)
- Mảng hành động đã gửi server: `[1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, -21]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 1 (`1`) | (7, 17) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 49 |
| 4-5 | Di chuyển hướng 1 (`1`) | (7, 16) | (8, 15) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(8, 15)) | 49 |
| 6-7 | Di chuyển hướng 1 (`1`) | (8, 15) | (8, 14) | Dự kiến đến điểm hẹn tọa độ (8, 14) | 49 |
| 8-9 | Di chuyển hướng 1 (`1`) | (8, 14) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 49 |
| 10 | Di chuyển hướng 1 (`1`) | (9, 13) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 49 |
| 11-12 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 49 |
| 13-14 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 49 |
| 15-16 | Di chuyển hướng 2 (`2`) | (10, 10) | (11, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(11, 10)) | 49 |
| 17-18 | Di chuyển hướng 1 (`1`) | (11, 10) | (12, 9) | Dự kiến đến điểm hẹn tọa độ (12, 9) | 49 |
| 19-21 | Di chuyển hướng 2 (`2`) | (12, 9) | (13, 9) | Dự kiến đến điểm hẹn tọa độ (13, 9) | 49 |
| 22-24 | Di chuyển hướng 2 (`2`) | (13, 9) | (14, 9) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(14, 9)) | 49 |
| 25-26 | Di chuyển hướng 2 (`2`) | (14, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 49 |
| 27-47 | Chờ 21 bước (`-21`) | (15, 9) | (15, 9) | Dự kiến đứng yên tại (15, 9); hướng tới tọa độ (15, 9) | 49 |

### Xe #7 - Tiếp tế

- Vị trí đầu ngày: (0, 18) (ô=396)
- Nhiên liệu đầu ngày: 49
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(11, 19)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(11, 19)
- Mảng hành động đã gửi server: `[1, 2, 1, 2, 2, 2, 2, 2, 3, 2, 2, 3, 2, 2, 4, 5, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (0, 18) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 49 |
| 2-4 | Di chuyển hướng 2 (`2`) | (1, 17) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 49 |
| 5 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 49 |
| 6 | Di chuyển hướng 2 (`2`) | (2, 16) | (3, 16) | Dự kiến đến điểm hẹn tọa độ (3, 16) | 49 |
| 7-8 | Di chuyển hướng 2 (`2`) | (3, 16) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 49 |
| 9-10 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(5, 16)) | 49 |
| 11-12 | Di chuyển hướng 2 (`2`) | (5, 16) | (6, 16) | Dự kiến đến điểm hẹn tọa độ (6, 16) | 49 |
| 13-14 | Di chuyển hướng 2 (`2`) | (6, 16) | (7, 16) | Dự kiến đến điểm hẹn tọa độ (7, 16) | 49 |
| 15-16 | Di chuyển hướng 3 (`3`) | (7, 16) | (8, 17) | Dự kiến đến điểm hẹn tọa độ (8, 17) | 49 |
| 17 | Di chuyển hướng 2 (`2`) | (8, 17) | (9, 17) | Dự kiến đến điểm hẹn tọa độ (9, 17) | 49 |
| 18-20 | Di chuyển hướng 2 (`2`) | (9, 17) | (10, 17) | Dự kiến đến điểm hẹn tọa độ (10, 17) | 49 |
| 21-22 | Di chuyển hướng 3 (`3`) | (10, 17) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 49 |
| 23-25 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 49 |
| 26-28 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(12, 18)) | 49 |
| 29-30 | Di chuyển hướng 4 (`4`) | (12, 18) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 49 |
| 31 | Di chuyển hướng 5 (`5`) | (12, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 49 |
| 32-47 | Chờ 16 bước (`-16`) | (11, 19) | (11, 19) | Dự kiến đứng yên tại (11, 19); hướng tới tọa độ (11, 19) | 49 |

