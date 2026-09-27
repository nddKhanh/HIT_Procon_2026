# Nhật ký hành trình - Ngày 1

- Số bước trong ngày: 51
- Số xe: 7
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 27 | #4 | #6 | (3, 14) | 0 | 55 |
| 32 | #5 | #6 | (0, 14) | 2 | 55 |
| 37 | #4 | #6 | (2, 12) | 49 | 55 |
| 39 | #2 | #6 | (3, 10) | 2 | 55 |
| 46 | #5 | #6 | (3, 10) | 45 | 55 |
| 50 | #4 | #6 | (3, 10) | 41 | 55 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (20, 6) (ô=164)
- Nhiên liệu đầu ngày: 19
- Mục tiêu kế hoạch từ Solver: Spot #22 (thương hiệu=22, tọa độ=(16, 3))
- Địa điểm đích kế hoạch: Spot #22 (thương hiệu=22, tọa độ=(16, 3))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 1, 0, -38]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (20, 6) | (19, 6) | Dự kiến đến điểm hẹn tọa độ (19, 6) | 18 |
| 2-3 | Di chuyển hướng 5 (`5`) | (19, 6) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 17 |
| 4-5 | Di chuyển hướng 5 (`5`) | (18, 6) | (17, 6) | Dự kiến đến điểm hẹn tọa độ (17, 6) | 16 |
| 6-8 | Di chuyển hướng 5 (`5`) | (17, 6) | (16, 6) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(16, 6)) | 14 |
| 9-10 | Di chuyển hướng 0 (`0`) | (16, 6) | (16, 5) | Dự kiến đến điểm hẹn tọa độ (16, 5) | 13 |
| 11 | Di chuyển hướng 1 (`1`) | (16, 5) | (16, 4) | Dự kiến đến điểm hẹn tọa độ (16, 4) | 11 |
| 12 | Di chuyển hướng 0 (`0`) | (16, 4) | (16, 3) | Dự kiến đạt mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 3)) | 9 |
| 13-50 | Chờ 38 bước (`-38`) | (16, 3) | (16, 3) | Dự kiến đứng yên tại (16, 3); mục tiêu Spot #22 (thương hiệu=22, tọa độ=(16, 3)) | 9 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (21, 19) (ô=477)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #5 (thương hiệu=5, tọa độ=(19, 21))
- Địa điểm đích kế hoạch: Spot #5 (thương hiệu=5, tọa độ=(19, 21))
- Mảng hành động đã gửi server: `[0, 5, 0, 5, 3, 2, 1, 2, 2, 2, 3, 4, 3, 4, 4, 4, 5, 5, 5, 0, 1, -11]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (21, 19) | (20, 18) | Dự kiến đến điểm hẹn tọa độ (20, 18) | 54 |
| 2-3 | Di chuyển hướng 5 (`5`) | (20, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 53 |
| 4 | Di chuyển hướng 0 (`0`) | (19, 18) | (19, 17) | Dự kiến đến điểm hẹn tọa độ (19, 17) | 51 |
| 5 | Di chuyển hướng 5 (`5`) | (19, 17) | (18, 17) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(18, 17)) | 49 |
| 6-7 | Di chuyển hướng 3 (`3`) | (18, 17) | (18, 18) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(18, 18)) | 48 |
| 8-9 | Di chuyển hướng 2 (`2`) | (18, 18) | (19, 18) | Dự kiến đến điểm hẹn tọa độ (19, 18) | 47 |
| 10 | Di chuyển hướng 1 (`1`) | (19, 18) | (20, 17) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(20, 17)) | 45 |
| 11-12 | Di chuyển hướng 2 (`2`) | (20, 17) | (21, 17) | Dự kiến đến điểm hẹn tọa độ (21, 17) | 44 |
| 13-14 | Di chuyển hướng 2 (`2`) | (21, 17) | (22, 17) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(22, 17)) | 43 |
| 15-16 | Di chuyển hướng 2 (`2`) | (22, 17) | (23, 17) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(23, 17)) | 42 |
| 17-18 | Di chuyển hướng 3 (`3`) | (23, 17) | (23, 18) | Dự kiến đến điểm hẹn tọa độ (23, 18) | 41 |
| 19-21 | Di chuyển hướng 4 (`4`) | (23, 18) | (23, 19) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(23, 19)) | 39 |
| 22-23 | Di chuyển hướng 3 (`3`) | (23, 19) | (23, 20) | Dự kiến đến điểm hẹn tọa độ (23, 20) | 38 |
| 24 | Di chuyển hướng 4 (`4`) | (23, 20) | (23, 21) | Dự kiến đến điểm hẹn tọa độ (23, 21) | 36 |
| 25-27 | Di chuyển hướng 4 (`4`) | (23, 21) | (22, 22) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(22, 22)) | 34 |
| 28-29 | Di chuyển hướng 4 (`4`) | (22, 22) | (22, 23) | Dự kiến đạt mục tiêu Spot #23 (thương hiệu=23, tọa độ=(22, 23)) | 33 |
| 30-31 | Di chuyển hướng 5 (`5`) | (22, 23) | (21, 23) | Dự kiến đến điểm hẹn tọa độ (21, 23) | 32 |
| 32-33 | Di chuyển hướng 5 (`5`) | (21, 23) | (20, 23) | Dự kiến đến điểm hẹn tọa độ (20, 23) | 31 |
| 34-35 | Di chuyển hướng 5 (`5`) | (20, 23) | (19, 23) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(19, 23)) | 30 |
| 36-37 | Di chuyển hướng 0 (`0`) | (19, 23) | (18, 22) | Dự kiến đến điểm hẹn tọa độ (18, 22) | 29 |
| 38-39 | Di chuyển hướng 1 (`1`) | (18, 22) | (19, 21) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(19, 21)) | 28 |
| 40-50 | Chờ 11 bước (`-11`) | (19, 21) | (19, 21) | Dự kiến đứng yên tại (19, 21); mục tiêu Spot #5 (thương hiệu=5, tọa độ=(19, 21)) | 28 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (4, 14) (ô=340)
- Nhiên liệu đầu ngày: 8
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(0, 12)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(0, 12)
- Mảng hành động đã gửi server: `[5, 1, 1, 0, 0, -29, 4, 4, 4, 5, 4, 0, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (4, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 7 |
| 2-3 | Di chuyển hướng 1 (`1`) | (3, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 6 |
| 4-5 | Di chuyển hướng 1 (`1`) | (4, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 5 |
| 6-7 | Di chuyển hướng 0 (`0`) | (4, 12) | (4, 11) | Dự kiến đến điểm hẹn tọa độ (4, 11) | 4 |
| 8-9 | Di chuyển hướng 0 (`0`) | (4, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 2 |
| 10-38 | Chờ 29 bước (`-29`) | (3, 10) | (3, 10) | Dự kiến đứng yên tại (3, 10); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |
| 39-40 | Di chuyển hướng 4 (`4`) | (3, 10) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 54 |
| 41 | Di chuyển hướng 4 (`4`) | (3, 11) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 52 |
| 42 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 50 |
| 43 | Di chuyển hướng 5 (`5`) | (2, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 48 |
| 44-45 | Di chuyển hướng 4 (`4`) | (1, 13) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 47 |
| 46-47 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 46 |
| 48-49 | Di chuyển hướng 1 (`1`) | (0, 13) | (0, 12) | Dự kiến đến điểm hẹn tọa độ (0, 12) | 45 |
| 50 | Chờ 1 bước (`-1`) | (0, 12) | (0, 12) | Dự kiến đứng yên tại (0, 12); hướng tới tọa độ (0, 12) | 45 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (0, 13) (ô=312)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #6 (thương hiệu=6, tọa độ=(2, 4))
- Địa điểm đích kế hoạch: Spot #6 (thương hiệu=6, tọa độ=(2, 4))
- Mảng hành động đã gửi server: `[2, 2, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 4, 4, -26]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (0, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 23 |
| 2-3 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 22 |
| 4 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 20 |
| 5 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 18 |
| 6 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 16 |
| 7-8 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 15 |
| 9-10 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 13 |
| 11-12 | Di chuyển hướng 1 (`1`) | (3, 8) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 12 |
| 13-14 | Di chuyển hướng 0 (`0`) | (4, 7) | (3, 6) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(3, 6)) | 10 |
| 15-16 | Di chuyển hướng 1 (`1`) | (3, 6) | (4, 5) | Dự kiến đến điểm hẹn tọa độ (4, 5) | 9 |
| 17 | Di chuyển hướng 0 (`0`) | (4, 5) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 7 |
| 18 | Di chuyển hướng 1 (`1`) | (3, 4) | (4, 3) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=4, tọa độ=(4, 3)) | 5 |
| 19-20 | Di chuyển hướng 0 (`0`) | (4, 3) | (3, 2) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(3, 2)) | 4 |
| 21-22 | Di chuyển hướng 4 (`4`) | (3, 2) | (3, 3) | Dự kiến đến điểm hẹn tọa độ (3, 3) | 3 |
| 23-24 | Di chuyển hướng 4 (`4`) | (3, 3) | (2, 4) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 1 |
| 25-50 | Chờ 26 bước (`-26`) | (2, 4) | (2, 4) | Dự kiến đứng yên tại (2, 4); mục tiêu Spot #6 (thương hiệu=6, tọa độ=(2, 4)) | 1 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 14) (ô=339)
- Nhiên liệu đầu ngày: 0
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(3, 10))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(3, 10))
- Mảng hành động đã gửi server: `[-28, 2, 1, 0, 5, 5, 4, 4, 5, 0, 2, 2, 1, 1, 1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-27 | Chờ 28 bước (`-28`) | (3, 14) | (3, 14) | Dự kiến đứng yên tại (3, 14); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 55 |
| 28-29 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 54 |
| 30-31 | Di chuyển hướng 1 (`1`) | (4, 14) | (5, 13) | Dự kiến đến điểm hẹn tọa độ (5, 13) | 53 |
| 32 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(4, 12)) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 50 |
| 35-36 | Di chuyển hướng 5 (`5`) | (3, 12) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 37 | Di chuyển hướng 4 (`4`) | (2, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 53 |
| 38 | Di chuyển hướng 4 (`4`) | (2, 13) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 51 |
| 39-40 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 50 |
| 41-42 | Di chuyển hướng 0 (`0`) | (0, 14) | (0, 13) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(0, 13)) | 49 |
| 43-44 | Di chuyển hướng 2 (`2`) | (0, 13) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 48 |
| 45-46 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 47 |
| 47 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 45 |
| 48 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 43 |
| 49 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |
| 50 | Chờ 1 bước (`-1`) | (3, 10) | (3, 10) | Dự kiến đứng yên tại (3, 10); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (0, 13) (ô=312)
- Nhiên liệu đầu ngày: 3
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(3, 8)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(3, 8)
- Mảng hành động đã gửi server: `[3, -30, 2, 2, 2, 2, 0, 0, 0, 1, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 13) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 2 |
| 2-31 | Chờ 30 bước (`-30`) | (0, 14) | (0, 14) | Dự kiến đứng yên tại (0, 14); mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 55 |
| 32-33 | Di chuyển hướng 2 (`2`) | (0, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 54 |
| 34-35 | Di chuyển hướng 2 (`2`) | (1, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 53 |
| 36 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 51 |
| 37-38 | Di chuyển hướng 2 (`2`) | (3, 14) | (4, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=13, tọa độ=(4, 14)) | 50 |
| 39-40 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến đến điểm hẹn tọa độ (4, 13) | 49 |
| 41-42 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 48 |
| 43-44 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 47 |
| 45 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |
| 46-47 | Di chuyển hướng 1 (`1`) | (3, 10) | (4, 9) | Dự kiến đến điểm hẹn tọa độ (4, 9) | 54 |
| 48-49 | Di chuyển hướng 0 (`0`) | (4, 9) | (3, 8) | Dự kiến đến điểm hẹn tọa độ (3, 8) | 52 |
| 50 | Chờ 1 bước (`-1`) | (3, 8) | (3, 8) | Dự kiến đứng yên tại (3, 8); hướng tới tọa độ (3, 8) | 52 |

### Xe #6 - Tiếp tế

- Vị trí đầu ngày: (21, 19) (ô=477)
- Nhiên liệu đầu ngày: 55
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=2, tọa độ=(3, 10))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=2, tọa độ=(3, 10))
- Mảng hành động đã gửi server: `[4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 0, 1, 0, 1, 0, 1, 2, 5, 5, 5, 1, 2, 1, 1, 1, -12]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (21, 19) | (20, 20) | Dự kiến đến điểm hẹn tọa độ (20, 20) | 55 |
| 2 | Di chuyển hướng 5 (`5`) | (20, 20) | (19, 20) | Dự kiến đến điểm hẹn tọa độ (19, 20) | 55 |
| 3 | Di chuyển hướng 5 (`5`) | (19, 20) | (18, 20) | Dự kiến đến điểm hẹn tọa độ (18, 20) | 55 |
| 4 | Di chuyển hướng 5 (`5`) | (18, 20) | (17, 20) | Dự kiến đến điểm hẹn tọa độ (17, 20) | 55 |
| 5 | Di chuyển hướng 5 (`5`) | (17, 20) | (16, 20) | Dự kiến đến điểm hẹn tọa độ (16, 20) | 55 |
| 6 | Di chuyển hướng 5 (`5`) | (16, 20) | (15, 20) | Dự kiến đến điểm hẹn tọa độ (15, 20) | 55 |
| 7 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 55 |
| 8 | Di chuyển hướng 5 (`5`) | (14, 20) | (13, 20) | Dự kiến đến điểm hẹn tọa độ (13, 20) | 55 |
| 9 | Di chuyển hướng 5 (`5`) | (13, 20) | (12, 20) | Dự kiến đến điểm hẹn tọa độ (12, 20) | 55 |
| 10 | Di chuyển hướng 5 (`5`) | (12, 20) | (11, 20) | Dự kiến đến điểm hẹn tọa độ (11, 20) | 55 |
| 11 | Di chuyển hướng 5 (`5`) | (11, 20) | (10, 20) | Dự kiến đến điểm hẹn tọa độ (10, 20) | 55 |
| 12 | Di chuyển hướng 5 (`5`) | (10, 20) | (9, 20) | Dự kiến đến điểm hẹn tọa độ (9, 20) | 55 |
| 13 | Di chuyển hướng 5 (`5`) | (9, 20) | (8, 20) | Dự kiến đến điểm hẹn tọa độ (8, 20) | 55 |
| 14 | Di chuyển hướng 5 (`5`) | (8, 20) | (7, 20) | Dự kiến đến điểm hẹn tọa độ (7, 20) | 55 |
| 15 | Di chuyển hướng 5 (`5`) | (7, 20) | (6, 20) | Dự kiến đến điểm hẹn tọa độ (6, 20) | 55 |
| 16 | Di chuyển hướng 5 (`5`) | (6, 20) | (5, 20) | Dự kiến đến điểm hẹn tọa độ (5, 20) | 55 |
| 17 | Di chuyển hướng 5 (`5`) | (5, 20) | (4, 20) | Dự kiến đến điểm hẹn tọa độ (4, 20) | 55 |
| 18 | Di chuyển hướng 5 (`5`) | (4, 20) | (3, 20) | Dự kiến đến điểm hẹn tọa độ (3, 20) | 55 |
| 19 | Di chuyển hướng 5 (`5`) | (3, 20) | (2, 20) | Dự kiến đến điểm hẹn tọa độ (2, 20) | 55 |
| 20 | Di chuyển hướng 0 (`0`) | (2, 20) | (2, 19) | Dự kiến đến điểm hẹn tọa độ (2, 19) | 55 |
| 21 | Di chuyển hướng 1 (`1`) | (2, 19) | (2, 18) | Dự kiến đến điểm hẹn tọa độ (2, 18) | 55 |
| 22 | Di chuyển hướng 0 (`0`) | (2, 18) | (2, 17) | Dự kiến đến điểm hẹn tọa độ (2, 17) | 55 |
| 23 | Di chuyển hướng 1 (`1`) | (2, 17) | (2, 16) | Dự kiến đến điểm hẹn tọa độ (2, 16) | 55 |
| 24 | Di chuyển hướng 0 (`0`) | (2, 16) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 55 |
| 25 | Di chuyển hướng 1 (`1`) | (2, 15) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 26 | Di chuyển hướng 2 (`2`) | (2, 14) | (3, 14) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(3, 14)) | 55 |
| 27-28 | Di chuyển hướng 5 (`5`) | (3, 14) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 55 |
| 29 | Di chuyển hướng 5 (`5`) | (2, 14) | (1, 14) | Dự kiến đến điểm hẹn tọa độ (1, 14) | 55 |
| 30-31 | Di chuyển hướng 5 (`5`) | (1, 14) | (0, 14) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 14)) | 55 |
| 32-33 | Di chuyển hướng 1 (`1`) | (0, 14) | (1, 13) | Dự kiến đến điểm hẹn tọa độ (1, 13) | 55 |
| 34-35 | Di chuyển hướng 2 (`2`) | (1, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 55 |
| 36 | Di chuyển hướng 1 (`1`) | (2, 13) | (2, 12) | Dự kiến đến điểm hẹn tọa độ (2, 12) | 55 |
| 37 | Di chuyển hướng 1 (`1`) | (2, 12) | (3, 11) | Dự kiến đến điểm hẹn tọa độ (3, 11) | 55 |
| 38 | Di chuyển hướng 1 (`1`) | (3, 11) | (3, 10) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |
| 39-50 | Chờ 12 bước (`-12`) | (3, 10) | (3, 10) | Dự kiến đứng yên tại (3, 10); mục tiêu Spot #2 (thương hiệu=2, tọa độ=(3, 10)) | 55 |

