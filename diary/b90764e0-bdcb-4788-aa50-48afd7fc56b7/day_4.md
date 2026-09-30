# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 51
- Số xe: 6
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 1 | #5 | #2 | (20, 10) | 43 | 51 |
| 17 | #4 | #1 | (5, 12) | 21 | 51 |
| 50 | #3 | #2 | (1, 2) | 3 | 51 |
| 51 | #0 | #1 | (5, 12) | 9 | 51 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (8, 18) (ô=404)
- Nhiên liệu đầu ngày: 42
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(5, 12))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(5, 12))
- Mảng hành động đã gửi server: `[3, 2, 2, 2, 2, 2, 3, 2, 5, 0, 5, 0, 0, 0, 1, 0, 0, 0, 0, 4, 5, 5, 5, 5]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (8, 18) | (9, 19) | Dự kiến đến điểm hẹn tọa độ (9, 19) | 41 |
| 2-4 | Di chuyển hướng 2 (`2`) | (9, 19) | (10, 19) | Dự kiến đến điểm hẹn tọa độ (10, 19) | 39 |
| 5 | Di chuyển hướng 2 (`2`) | (10, 19) | (11, 19) | Dự kiến đến điểm hẹn tọa độ (11, 19) | 37 |
| 6 | Di chuyển hướng 2 (`2`) | (11, 19) | (12, 19) | Dự kiến đến điểm hẹn tọa độ (12, 19) | 35 |
| 7-8 | Di chuyển hướng 2 (`2`) | (12, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 34 |
| 9-10 | Di chuyển hướng 2 (`2`) | (13, 19) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 33 |
| 11-12 | Di chuyển hướng 3 (`3`) | (14, 19) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 32 |
| 13-14 | Di chuyển hướng 2 (`2`) | (14, 20) | (15, 20) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(15, 20)) | 31 |
| 15-16 | Di chuyển hướng 5 (`5`) | (15, 20) | (14, 20) | Dự kiến đến điểm hẹn tọa độ (14, 20) | 30 |
| 17-18 | Di chuyển hướng 0 (`0`) | (14, 20) | (14, 19) | Dự kiến đến điểm hẹn tọa độ (14, 19) | 29 |
| 19-20 | Di chuyển hướng 5 (`5`) | (14, 19) | (13, 19) | Dự kiến đến điểm hẹn tọa độ (13, 19) | 28 |
| 21-22 | Di chuyển hướng 0 (`0`) | (13, 19) | (12, 18) | Dự kiến đến điểm hẹn tọa độ (12, 18) | 27 |
| 23-25 | Di chuyển hướng 0 (`0`) | (12, 18) | (12, 17) | Dự kiến đến điểm hẹn tọa độ (12, 17) | 25 |
| 26-28 | Di chuyển hướng 0 (`0`) | (12, 17) | (11, 16) | Dự kiến đạt mục tiêu Spot #17 (thương hiệu=17, tọa độ=(11, 16)) | 23 |
| 29-30 | Di chuyển hướng 1 (`1`) | (11, 16) | (12, 15) | Dự kiến đến điểm hẹn tọa độ (12, 15) | 22 |
| 31-32 | Di chuyển hướng 0 (`0`) | (12, 15) | (11, 14) | Dự kiến đến điểm hẹn tọa độ (11, 14) | 21 |
| 33-35 | Di chuyển hướng 0 (`0`) | (11, 14) | (11, 13) | Dự kiến đến điểm hẹn tọa độ (11, 13) | 19 |
| 36-37 | Di chuyển hướng 0 (`0`) | (11, 13) | (10, 12) | Dự kiến đến điểm hẹn tọa độ (10, 12) | 18 |
| 38-39 | Di chuyển hướng 0 (`0`) | (10, 12) | (10, 11) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=9, tọa độ=(10, 11)) | 17 |
| 40-41 | Di chuyển hướng 4 (`4`) | (10, 11) | (9, 12) | Dự kiến đến điểm hẹn tọa độ (9, 12) | 16 |
| 42 | Di chuyển hướng 5 (`5`) | (9, 12) | (8, 12) | Dự kiến đến điểm hẹn tọa độ (8, 12) | 14 |
| 43-45 | Di chuyển hướng 5 (`5`) | (8, 12) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 12 |
| 46-47 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 11 |
| 48-50 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 51 |

### Xe #1 - Tiếp tế

- Vị trí đầu ngày: (11, 15) (ô=341)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #19 (thương hiệu=19, tọa độ=(5, 12))
- Địa điểm đích kế hoạch: Spot #19 (thương hiệu=19, tọa độ=(5, 12))
- Mảng hành động đã gửi server: `[0, 0, 5, 5, 0, 5, 5, -36]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-3 | Di chuyển hướng 0 (`0`) | (11, 15) | (10, 14) | Dự kiến đến điểm hẹn tọa độ (10, 14) | 51 |
| 4-5 | Di chuyển hướng 0 (`0`) | (10, 14) | (10, 13) | Dự kiến đến điểm hẹn tọa độ (10, 13) | 51 |
| 6-7 | Di chuyển hướng 5 (`5`) | (10, 13) | (9, 13) | Dự kiến đến điểm hẹn tọa độ (9, 13) | 51 |
| 8 | Di chuyển hướng 5 (`5`) | (9, 13) | (8, 13) | Dự kiến đến điểm hẹn tọa độ (8, 13) | 51 |
| 9 | Di chuyển hướng 0 (`0`) | (8, 13) | (7, 12) | Dự kiến đến điểm hẹn tọa độ (7, 12) | 51 |
| 10-11 | Di chuyển hướng 5 (`5`) | (7, 12) | (6, 12) | Dự kiến đến điểm hẹn tọa độ (6, 12) | 51 |
| 12-14 | Di chuyển hướng 5 (`5`) | (6, 12) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 51 |
| 15-50 | Chờ 36 bước (`-36`) | (5, 12) | (5, 12) | Dự kiến đứng yên tại (5, 12); mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 51 |

### Xe #2 - Tiếp tế

- Vị trí đầu ngày: (20, 10) (ô=240)
- Nhiên liệu đầu ngày: 51
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(1, 2))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(1, 2))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 0, 5, 0, 0, 0, 5, 0, 5, 0, 0, 5, 5, 0, 0, 5, 5, 5, 5, 5, 4, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 5 (`5`) | (20, 10) | (19, 10) | Dự kiến đến điểm hẹn tọa độ (19, 10) | 51 |
| 3-5 | Di chuyển hướng 5 (`5`) | (19, 10) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 51 |
| 6-7 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 51 |
| 8-9 | Di chuyển hướng 5 (`5`) | (17, 10) | (16, 10) | Dự kiến đến điểm hẹn tọa độ (16, 10) | 51 |
| 10-11 | Di chuyển hướng 0 (`0`) | (16, 10) | (16, 9) | Dự kiến đến điểm hẹn tọa độ (16, 9) | 51 |
| 12-14 | Di chuyển hướng 5 (`5`) | (16, 9) | (15, 9) | Dự kiến đến điểm hẹn tọa độ (15, 9) | 51 |
| 15-16 | Di chuyển hướng 0 (`0`) | (15, 9) | (14, 8) | Dự kiến đến điểm hẹn tọa độ (14, 8) | 51 |
| 17 | Di chuyển hướng 0 (`0`) | (14, 8) | (14, 7) | Dự kiến đến điểm hẹn tọa độ (14, 7) | 51 |
| 18-19 | Di chuyển hướng 0 (`0`) | (14, 7) | (13, 6) | Dự kiến đến điểm hẹn tọa độ (13, 6) | 51 |
| 20-22 | Di chuyển hướng 5 (`5`) | (13, 6) | (12, 6) | Dự kiến đến điểm hẹn tọa độ (12, 6) | 51 |
| 23-25 | Di chuyển hướng 0 (`0`) | (12, 6) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 51 |
| 26-27 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 51 |
| 28-29 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến đến điểm hẹn tọa độ (10, 4) | 51 |
| 30 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến đến điểm hẹn tọa độ (10, 3) | 51 |
| 31-32 | Di chuyển hướng 5 (`5`) | (10, 3) | (9, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 3)) | 51 |
| 33-34 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 51 |
| 35-36 | Di chuyển hướng 0 (`0`) | (8, 3) | (7, 2) | Dự kiến đến điểm hẹn tọa độ (7, 2) | 51 |
| 37-39 | Di chuyển hướng 0 (`0`) | (7, 2) | (7, 1) | Dự kiến đến điểm hẹn tọa độ (7, 1) | 51 |
| 40 | Di chuyển hướng 5 (`5`) | (7, 1) | (6, 1) | Dự kiến đến điểm hẹn tọa độ (6, 1) | 51 |
| 41-43 | Di chuyển hướng 5 (`5`) | (6, 1) | (5, 1) | Dự kiến đến điểm hẹn tọa độ (5, 1) | 51 |
| 44 | Di chuyển hướng 5 (`5`) | (5, 1) | (4, 1) | Dự kiến đến điểm hẹn tọa độ (4, 1) | 51 |
| 45 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến đến điểm hẹn tọa độ (3, 1) | 51 |
| 46-48 | Di chuyển hướng 5 (`5`) | (3, 1) | (2, 1) | Dự kiến đến điểm hẹn tọa độ (2, 1) | 51 |
| 49 | Di chuyển hướng 4 (`4`) | (2, 1) | (1, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 2)) | 51 |
| 50 | Chờ 1 bước (`-1`) | (1, 2) | (1, 2) | Dự kiến đứng yên tại (1, 2); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 2)) | 51 |

### Xe #3 - Tuần tra

- Vị trí đầu ngày: (17, 0) (ô=17)
- Nhiên liệu đầu ngày: 37
- Mục tiêu kế hoạch từ Solver: Spot #21 (thương hiệu=21, tọa độ=(1, 2))
- Địa điểm đích kế hoạch: Spot #21 (thương hiệu=21, tọa độ=(1, 2))
- Mảng hành động đã gửi server: `[4, 4, 4, 5, 4, 4, 5, 5, 5, 5, 4, 0, 0, 1, 5, 5, 4, 5, 5, 5, 5, 0, 0, -2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 4 (`4`) | (17, 0) | (17, 1) | Dự kiến đến điểm hẹn tọa độ (17, 1) | 36 |
| 2-4 | Di chuyển hướng 4 (`4`) | (17, 1) | (16, 2) | Dự kiến đến điểm hẹn tọa độ (16, 2) | 34 |
| 5-6 | Di chuyển hướng 4 (`4`) | (16, 2) | (16, 3) | Dự kiến đến điểm hẹn tọa độ (16, 3) | 33 |
| 7 | Di chuyển hướng 5 (`5`) | (16, 3) | (15, 3) | Dự kiến đến điểm hẹn tọa độ (15, 3) | 31 |
| 8 | Di chuyển hướng 4 (`4`) | (15, 3) | (14, 4) | Dự kiến đến điểm hẹn tọa độ (14, 4) | 29 |
| 9 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến đến điểm hẹn tọa độ (14, 5) | 27 |
| 10-12 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đến điểm hẹn tọa độ (13, 5) | 25 |
| 13-15 | Di chuyển hướng 5 (`5`) | (13, 5) | (12, 5) | Dự kiến đến điểm hẹn tọa độ (12, 5) | 23 |
| 16-17 | Di chuyển hướng 5 (`5`) | (12, 5) | (11, 5) | Dự kiến đến điểm hẹn tọa độ (11, 5) | 22 |
| 18-19 | Di chuyển hướng 5 (`5`) | (11, 5) | (10, 5) | Dự kiến đến điểm hẹn tọa độ (10, 5) | 21 |
| 20-22 | Di chuyển hướng 4 (`4`) | (10, 5) | (9, 6) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=3, tọa độ=(9, 6)) | 19 |
| 23-24 | Di chuyển hướng 0 (`0`) | (9, 6) | (9, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=8, tọa độ=(9, 5)) | 18 |
| 25-26 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến đến điểm hẹn tọa độ (8, 4) | 17 |
| 27-28 | Di chuyển hướng 1 (`1`) | (8, 4) | (9, 3) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=10, tọa độ=(9, 3)) | 16 |
| 29-30 | Di chuyển hướng 5 (`5`) | (9, 3) | (8, 3) | Dự kiến đến điểm hẹn tọa độ (8, 3) | 15 |
| 31-32 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đến điểm hẹn tọa độ (7, 3) | 14 |
| 33-35 | Di chuyển hướng 4 (`4`) | (7, 3) | (6, 4) | Dự kiến đến điểm hẹn tọa độ (6, 4) | 12 |
| 36-38 | Di chuyển hướng 5 (`5`) | (6, 4) | (5, 4) | Dự kiến đến điểm hẹn tọa độ (5, 4) | 10 |
| 39-40 | Di chuyển hướng 5 (`5`) | (5, 4) | (4, 4) | Dự kiến đến điểm hẹn tọa độ (4, 4) | 9 |
| 41 | Di chuyển hướng 5 (`5`) | (4, 4) | (3, 4) | Dự kiến đến điểm hẹn tọa độ (3, 4) | 7 |
| 42-44 | Di chuyển hướng 5 (`5`) | (3, 4) | (2, 4) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=14, tọa độ=(2, 4)) | 5 |
| 45-46 | Di chuyển hướng 0 (`0`) | (2, 4) | (2, 3) | Dự kiến đến điểm hẹn tọa độ (2, 3) | 4 |
| 47-48 | Di chuyển hướng 0 (`0`) | (2, 3) | (1, 2) | Dự kiến đạt mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 2)) | 3 |
| 49-50 | Chờ 2 bước (`-2`) | (1, 2) | (1, 2) | Dự kiến đứng yên tại (1, 2); mục tiêu Spot #21 (thương hiệu=21, tọa độ=(1, 2)) | 51 |

### Xe #4 - Tuần tra

- Vị trí đầu ngày: (3, 5) (ô=113)
- Nhiên liệu đầu ngày: 33
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(2, 21)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(2, 21)
- Mảng hành động đã gửi server: `[3, 3, 3, 3, 4, 3, 3, 4, 0, 5, 4, 5, 0, 3, 3, 4, 4, 4, 4, 4, 3, 4, 2, 2]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-2 | Di chuyển hướng 3 (`3`) | (3, 5) | (3, 6) | Dự kiến đến điểm hẹn tọa độ (3, 6) | 31 |
| 3 | Di chuyển hướng 3 (`3`) | (3, 6) | (4, 7) | Dự kiến đến điểm hẹn tọa độ (4, 7) | 29 |
| 4-6 | Di chuyển hướng 3 (`3`) | (4, 7) | (4, 8) | Dự kiến đến điểm hẹn tọa độ (4, 8) | 27 |
| 7-9 | Di chuyển hướng 3 (`3`) | (4, 8) | (5, 9) | Dự kiến đến điểm hẹn tọa độ (5, 9) | 25 |
| 10-12 | Di chuyển hướng 4 (`4`) | (5, 9) | (4, 10) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=5, tọa độ=(4, 10)) | 23 |
| 13-14 | Di chuyển hướng 3 (`3`) | (4, 10) | (5, 11) | Dự kiến đến điểm hẹn tọa độ (5, 11) | 22 |
| 15-16 | Di chuyển hướng 3 (`3`) | (5, 11) | (5, 12) | Dự kiến đạt mục tiêu Spot #19 (thương hiệu=19, tọa độ=(5, 12)) | 51 |
| 17-18 | Di chuyển hướng 4 (`4`) | (5, 12) | (5, 13) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=1, tọa độ=(5, 13)) | 50 |
| 19-20 | Di chuyển hướng 0 (`0`) | (5, 13) | (4, 12) | Dự kiến đến điểm hẹn tọa độ (4, 12) | 49 |
| 21 | Di chuyển hướng 5 (`5`) | (4, 12) | (3, 12) | Dự kiến đến điểm hẹn tọa độ (3, 12) | 47 |
| 22-23 | Di chuyển hướng 4 (`4`) | (3, 12) | (3, 13) | Dự kiến đến điểm hẹn tọa độ (3, 13) | 46 |
| 24 | Di chuyển hướng 5 (`5`) | (3, 13) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 44 |
| 25-27 | Di chuyển hướng 0 (`0`) | (2, 13) | (1, 12) | Dự kiến đạt mục tiêu Spot #15 (thương hiệu=15, tọa độ=(1, 12)) | 42 |
| 28-29 | Di chuyển hướng 3 (`3`) | (1, 12) | (2, 13) | Dự kiến đến điểm hẹn tọa độ (2, 13) | 41 |
| 30-32 | Di chuyển hướng 3 (`3`) | (2, 13) | (2, 14) | Dự kiến đến điểm hẹn tọa độ (2, 14) | 39 |
| 33 | Di chuyển hướng 4 (`4`) | (2, 14) | (2, 15) | Dự kiến đến điểm hẹn tọa độ (2, 15) | 37 |
| 34-36 | Di chuyển hướng 4 (`4`) | (2, 15) | (1, 16) | Dự kiến đến điểm hẹn tọa độ (1, 16) | 35 |
| 37-38 | Di chuyển hướng 4 (`4`) | (1, 16) | (1, 17) | Dự kiến đến điểm hẹn tọa độ (1, 17) | 34 |
| 39-41 | Di chuyển hướng 4 (`4`) | (1, 17) | (0, 18) | Dự kiến đến điểm hẹn tọa độ (0, 18) | 32 |
| 42 | Di chuyển hướng 4 (`4`) | (0, 18) | (0, 19) | Dự kiến đến điểm hẹn tọa độ (0, 19) | 30 |
| 43-44 | Di chuyển hướng 3 (`3`) | (0, 19) | (0, 20) | Dự kiến đến điểm hẹn tọa độ (0, 20) | 29 |
| 45-46 | Di chuyển hướng 4 (`4`) | (0, 20) | (0, 21) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=7, tọa độ=(0, 21)) | 28 |
| 47-48 | Di chuyển hướng 2 (`2`) | (0, 21) | (1, 21) | Dự kiến đến điểm hẹn tọa độ (1, 21) | 27 |
| 49-50 | Di chuyển hướng 2 (`2`) | (1, 21) | (2, 21) | Dự kiến đến điểm hẹn tọa độ (2, 21) | 26 |

### Xe #5 - Tuần tra

- Vị trí đầu ngày: (21, 9) (ô=219)
- Nhiên liệu đầu ngày: 45
- Mục tiêu kế hoạch từ Solver: Spot #18 (thương hiệu=18, tọa độ=(17, 0))
- Địa điểm đích kế hoạch: Spot #18 (thương hiệu=18, tọa độ=(17, 0))
- Mảng hành động đã gửi server: `[4, 4, 5, 5, 2, 2, 1, 2, 0, 1, 4, 5, 5, 4, 5, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0 | Di chuyển hướng 4 (`4`) | (21, 9) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 51 |
| 1-3 | Di chuyển hướng 4 (`4`) | (20, 10) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 49 |
| 4 | Di chuyển hướng 5 (`5`) | (20, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 47 |
| 5-6 | Di chuyển hướng 5 (`5`) | (19, 11) | (18, 11) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=2, tọa độ=(18, 11)) | 46 |
| 7-8 | Di chuyển hướng 2 (`2`) | (18, 11) | (19, 11) | Dự kiến đến điểm hẹn tọa độ (19, 11) | 45 |
| 9-10 | Di chuyển hướng 2 (`2`) | (19, 11) | (20, 11) | Dự kiến đến điểm hẹn tọa độ (20, 11) | 44 |
| 11 | Di chuyển hướng 1 (`1`) | (20, 11) | (20, 10) | Dự kiến đến điểm hẹn tọa độ (20, 10) | 42 |
| 12-14 | Di chuyển hướng 2 (`2`) | (20, 10) | (21, 10) | Dự kiến đạt mục tiêu Spot #20 (thương hiệu=20, tọa độ=(21, 10)) | 40 |
| 15-16 | Di chuyển hướng 0 (`0`) | (21, 10) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 39 |
| 17 | Di chuyển hướng 1 (`1`) | (21, 9) | (21, 8) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=11, tọa độ=(21, 8)) | 37 |
| 18-19 | Di chuyển hướng 4 (`4`) | (21, 8) | (21, 9) | Dự kiến đến điểm hẹn tọa độ (21, 9) | 36 |
| 20 | Di chuyển hướng 5 (`5`) | (21, 9) | (20, 9) | Dự kiến đến điểm hẹn tọa độ (20, 9) | 34 |
| 21-22 | Di chuyển hướng 5 (`5`) | (20, 9) | (19, 9) | Dự kiến đến điểm hẹn tọa độ (19, 9) | 33 |
| 23-25 | Di chuyển hướng 4 (`4`) | (19, 9) | (18, 10) | Dự kiến đến điểm hẹn tọa độ (18, 10) | 31 |
| 26-27 | Di chuyển hướng 5 (`5`) | (18, 10) | (17, 10) | Dự kiến đạt mục tiêu Spot #12 (thương hiệu=12, tọa độ=(17, 10)) | 30 |
| 28-29 | Di chuyển hướng 1 (`1`) | (17, 10) | (18, 9) | Dự kiến đến điểm hẹn tọa độ (18, 9) | 29 |
| 30-32 | Di chuyển hướng 1 (`1`) | (18, 9) | (18, 8) | Dự kiến đến điểm hẹn tọa độ (18, 8) | 27 |
| 33-34 | Di chuyển hướng 1 (`1`) | (18, 8) | (19, 7) | Dự kiến đến điểm hẹn tọa độ (19, 7) | 26 |
| 35-36 | Di chuyển hướng 0 (`0`) | (19, 7) | (18, 6) | Dự kiến đến điểm hẹn tọa độ (18, 6) | 25 |
| 37-38 | Di chuyển hướng 0 (`0`) | (18, 6) | (18, 5) | Dự kiến đến điểm hẹn tọa độ (18, 5) | 24 |
| 39-41 | Di chuyển hướng 0 (`0`) | (18, 5) | (17, 4) | Dự kiến đến điểm hẹn tọa độ (17, 4) | 22 |
| 42-43 | Di chuyển hướng 1 (`1`) | (17, 4) | (18, 3) | Dự kiến đạt mục tiêu Spot #16 (thương hiệu=16, tọa độ=(18, 3)) | 21 |
| 44-45 | Di chuyển hướng 0 (`0`) | (18, 3) | (17, 2) | Dự kiến đến điểm hẹn tọa độ (17, 2) | 20 |
| 46-48 | Di chuyển hướng 1 (`1`) | (17, 2) | (18, 1) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=6, tọa độ=(18, 1)) | 18 |
| 49-50 | Di chuyển hướng 0 (`0`) | (18, 1) | (17, 0) | Dự kiến đạt mục tiêu Spot #18 (thương hiệu=18, tọa độ=(17, 0)) | 17 |

