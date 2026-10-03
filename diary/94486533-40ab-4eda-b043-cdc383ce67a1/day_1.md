# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 46
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

Không phát sinh lần nạp nhiên liệu nào.

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (6, 19) (ô=424)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(17, 21))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(17, 21))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 2, 2, 2, 2, 3, 3, 2, 2, 3, -24]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (6, 19) | (7, 19) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(7, 19)) | 20 |
| 2-3 | Di chuyển hướng 1 (`1`) | (7, 19) | (7, 18) | Dự kiến đến điểm hẹn tọa độ (7, 18) | 19 |
| 4 | Di chuyển hướng 2 (`2`) | (7, 18) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 17 |
| 5-7 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 15 |
| 8 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 13 |
| 9-10 | Di chuyển hướng 2 (`2`) | (10, 18) | (11, 18) | Dự kiến đến điểm hẹn tọa độ (11, 18) | 12 |
| 11-12 | Di chuyển hướng 2 (`2`) | (11, 18) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 11 |
| 13-14 | Di chuyển hướng 2 (`2`) | (12, 18) | (13, 18) | Dự kiến đến điểm hẹn tọa độ (13, 18) | 10 |
| 15 | Di chuyển hướng 3 (`3`) | (13, 18) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 8 |
| 16-17 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 7 |
| 18 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 5 |
| 19 | Di chuyển hướng 2 (`2`) | (15, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 3 |
| 20-21 | Di chuyển hướng 3 (`3`) | (16, 20) | (17, 21) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(17, 21)) | 2 |
| 22-45 | Chờ 24 bước (`-24`) | (17, 21) | (17, 21) | Dự kiến đứng yên tại (17, 21); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(17, 21)) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (4, 16) (ô=356)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #3 (thương hiệu=3, tọa độ=(10, 6))
- Địa điểm đích kế hoạch: Spot #3 (thương hiệu=3, tọa độ=(10, 6))
- Mảng hành động đã gửi server: `[4, 1, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 0, 0, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (4, 16) | (4, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(4, 17)) | 20 |
| 2-3 | Di chuyển hướng 1 (`1`) | (4, 17) | (4, 16) | Dự kiến đến điểm hẹn tọa độ (4, 16) | 19 |
| 4-5 | Di chuyển hướng 2 (`2`) | (4, 16) | (5, 16) | Dự kiến đến điểm hẹn tọa độ (5, 16) | 18 |
| 6-7 | Di chuyển hướng 1 (`1`) | (5, 16) | (6, 15) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(6, 15)) | 17 |
| 8-9 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(7, 15)) | 16 |
| 10-11 | Di chuyển hướng 1 (`1`) | (7, 15) | (7, 14) | Dự kiến đến điểm hẹn tọa độ (7, 14) | 15 |
| 12-14 | Di chuyển hướng 1 (`1`) | (7, 14) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 13 |
| 15 | Di chuyển hướng 1 (`1`) | (8, 13) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 11 |
| 16 | Di chuyển hướng 2 (`2`) | (8, 12) | (9, 12) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(9, 12)) | 9 |
| 17-18 | Di chuyển hướng 1 (`1`) | (9, 12) | (10, 11) | Dự kiến đến điểm hẹn tọa độ (10, 11) | 8 |
| 19-20 | Di chuyển hướng 1 (`1`) | (10, 11) | (10, 10) | Dự kiến đến điểm hẹn tọa độ (10, 10) | 7 |
| 21-22 | Di chuyển hướng 1 (`1`) | (10, 10) | (11, 9) | Dự kiến đến điểm hẹn tọa độ (11, 9) | 6 |
| 23-25 | Di chuyển hướng 1 (`1`) | (11, 9) | (11, 8) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(11, 8)) | 4 |
| 26-27 | Di chuyển hướng 0 (`0`) | (11, 8) | (11, 7) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(11, 7)) | 3 |
| 28-29 | Di chuyển hướng 0 (`0`) | (11, 7) | (10, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 2 |
| 30-45 | Chờ 16 bước (`-16`) | (10, 6) | (10, 6) | Dự kiến đứng yên tại (10, 6); mục tiêu Spot #3 (thương hiệu=3, tọa độ=(10, 6)) | 2 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (21, 3) (ô=87)
- Nhiên liệu đầu ngày: 14
- Mục tiêu kế hoạch từ Solver: Spot #13 (thương hiệu=13, tọa độ=(17, 1))
- Địa điểm đích kế hoạch: Spot #13 (thương hiệu=13, tọa độ=(17, 1))
- Mảng hành động đã gửi server: `[3, 4, 4, 0, 0, 0, 0, 5, 0, -27]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (21, 3) | (21, 4) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(21, 4)) | 12 |
| 3-4 | Di chuyển hướng 4 (`4`) | (21, 4) | (21, 5) | Dự kiến đến điểm hẹn tọa độ (21, 5) | 11 |
| 5-7 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 9 |
| 8-9 | Di chuyển hướng 0 (`0`) | (20, 6) | (20, 5) | Dự kiến đến điểm hẹn tọa độ (20, 5) | 8 |
| 10-11 | Di chuyển hướng 0 (`0`) | (20, 5) | (19, 4) | Dự kiến đến điểm hẹn tọa độ (19, 4) | 7 |
| 12 | Di chuyển hướng 0 (`0`) | (19, 4) | (19, 3) | Dự kiến đến điểm hẹn tọa độ (19, 3) | 5 |
| 13-15 | Di chuyển hướng 0 (`0`) | (19, 3) | (18, 2) | Dự kiến đến điểm hẹn tọa độ (18, 2) | 3 |
| 16 | Di chuyển hướng 5 (`5`) | (18, 2) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 1 |
| 17-18 | Di chuyển hướng 0 (`0`) | (17, 2) | (17, 1) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 0 |
| 19-45 | Chờ 27 bước (`-27`) | (17, 1) | (17, 1) | Dự kiến đứng yên tại (17, 1); mục tiêu Spot #13 (thương hiệu=13, tọa độ=(17, 1)) | 0 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (7, 19) (ô=425)
- Nhiên liệu đầu ngày: 12
- Mục tiêu kế hoạch từ Solver: Spot #20 (thương hiệu=20, tọa độ=(11, 21))
- Địa điểm đích kế hoạch: Spot #20 (thương hiệu=20, tọa độ=(11, 21))
- Mảng hành động đã gửi server: `[2, 1, 2, 2, 3, 4, 3, -34]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (7, 19) | (8, 19) | Dự kiến đến điểm hẹn tọa độ (8, 19) | 11 |
| 2 | Di chuyển hướng 1 (`1`) | (8, 19) | (8, 18) | Dự kiến đến điểm hẹn tọa độ (8, 18) | 9 |
| 3-5 | Di chuyển hướng 2 (`2`) | (8, 18) | (9, 18) | Dự kiến đến điểm hẹn tọa độ (9, 18) | 7 |
| 6 | Di chuyển hướng 2 (`2`) | (9, 18) | (10, 18) | Dự kiến đến điểm hẹn tọa độ (10, 18) | 5 |
| 7-8 | Di chuyển hướng 3 (`3`) | (10, 18) | (11, 19) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(11, 19)) | 4 |
| 9-10 | Di chuyển hướng 4 (`4`) | (11, 19) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 3 |
| 11 | Di chuyển hướng 3 (`3`) | (10, 20) | (11, 21) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 1 |
| 12-45 | Chờ 34 bước (`-34`) | (11, 21) | (11, 21) | Dự kiến đứng yên tại (11, 21); mục tiêu Spot #20 (thương hiệu=20, tọa độ=(11, 21)) | 1 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (21, 5) (ô=131)
- Nhiên liệu đầu ngày: 11
- Mục tiêu kế hoạch từ Solver: Spot #11 (thương hiệu=11, tọa độ=(20, 10))
- Địa điểm đích kế hoạch: Spot #11 (thương hiệu=11, tọa độ=(20, 10))
- Mảng hành động đã gửi server: `[4, 5, 4, 4, 3, 2, 3, -33]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 4 (`4`) | (21, 5) | (20, 6) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(20, 6)) | 9 |
| 3-4 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 8 |
| 5-6 | Di chuyển hướng 4 (`4`) | (19, 6) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 7 |
| 7-8 | Di chuyển hướng 4 (`4`) | (19, 7) | (18, 8) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(18, 8)) | 6 |
| 9-10 | Di chuyển hướng 3 (`3`) | (18, 8) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 5 |
| 11 | Di chuyển hướng 2 (`2`) | (19, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 3 |
| 12 | Di chuyển hướng 3 (`3`) | (20, 9) | (20, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 1 |
| 13-45 | Chờ 33 bước (`-33`) | (20, 10) | (20, 10) | Dự kiến đứng yên tại (20, 10); mục tiêu Spot #11 (thương hiệu=11, tọa độ=(20, 10)) | 1 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (10, 6) (ô=142)
- Nhiên liệu đầu ngày: 21
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(2, 11))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(2, 11))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 0, 5, 5, 4, 4, 4, 4, 4, 2, -15]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (10, 6) | (10, 7) | Dự kiến đến điểm hẹn tọa độ (10, 7) | 20 |
| 2 | Di chuyển hướng 5 (`5`) | (10, 7) | (9, 7) | Dự kiến đến điểm hẹn tọa độ (9, 7) | 18 |
| 3-4 | Di chuyển hướng 5 (`5`) | (9, 7) | (8, 7) | Dự kiến đến điểm hẹn tọa độ (8, 7) | 17 |
| 5-7 | Di chuyển hướng 5 (`5`) | (8, 7) | (7, 7) | Dự kiến đến điểm hẹn tọa độ (7, 7) | 15 |
| 8-9 | Di chuyển hướng 5 (`5`) | (7, 7) | (6, 7) | Dự kiến đến điểm hẹn tọa độ (6, 7) | 14 |
| 10 | Di chuyển hướng 0 (`0`) | (6, 7) | (5, 6) | Dự kiến đến điểm hẹn tọa độ (5, 6) | 12 |
| 11-13 | Di chuyển hướng 5 (`5`) | (5, 6) | (4, 6) | Dự kiến đến điểm hẹn tọa độ (4, 6) | 10 |
| 14-16 | Di chuyển hướng 5 (`5`) | (4, 6) | (3, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(3, 6)) | 8 |
| 17-18 | Di chuyển hướng 4 (`4`) | (3, 6) | (3, 7) | Dự kiến đến điểm hẹn tọa độ (3, 7) | 7 |
| 19-21 | Di chuyển hướng 4 (`4`) | (3, 7) | (2, 8) | Dự kiến đến điểm hẹn tọa độ (2, 8) | 5 |
| 22-24 | Di chuyển hướng 4 (`4`) | (2, 8) | (2, 9) | Dự kiến đến điểm hẹn tọa độ (2, 9) | 3 |
| 25-26 | Di chuyển hướng 4 (`4`) | (2, 9) | (1, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(1, 10)) | 2 |
| 27-28 | Di chuyển hướng 4 (`4`) | (1, 10) | (1, 11) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(1, 11)) | 1 |
| 29-30 | Di chuyển hướng 2 (`2`) | (1, 11) | (2, 11) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 0 |
| 31-45 | Chờ 15 bước (`-15`) | (2, 11) | (2, 11) | Dự kiến đứng yên tại (2, 11); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(2, 11)) | 0 |

