# Nhật ký hành trình - Ngày 4

- Số bước trong ngày: 48
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 24 | #1 | #3 | (2, 8) | 0 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (1, 15) (ô=241)
- Nhiên liệu đầu ngày: 2
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 15)
- Mảng hành động đã gửi server: `[-48]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-47 | Chờ 48 bước (`-48`) | (1, 15) | (1, 15) | Dự kiến đứng yên tại (1, 15); hướng tới tọa độ (1, 15) | 2 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (9, 15) (ô=249)
- Nhiên liệu đầu ngày: 24
- Mục tiêu kế hoạch từ Solver: Spot #2 (thương hiệu=1, tọa độ=(7, 0))
- Địa điểm đích kế hoạch: Spot #2 (thương hiệu=1, tọa độ=(7, 0))
- Mảng hành động đã gửi server: `[1, 4, 5, 5, 5, 5, 0, 0, 0, 0, 0, 5, 5, 2, 1, 1, -1, 2, 2, 2, 2, 2, 1, 1, 1, 0, 0, 5, 1, 1, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(9, 14)) | 23 |
| 2-3 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (1, 10) (Spot #11 (thương hiệu=7, tọa độ=(1, 10))) | 22 |
| 4-5 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (1, 10) (Spot #11 (thương hiệu=7, tọa độ=(1, 10))) | 21 |
| 6 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (1, 10) (Spot #11 (thương hiệu=7, tọa độ=(1, 10))) | 19 |
| 7 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (1, 10) (Spot #11 (thương hiệu=7, tọa độ=(1, 10))) | 17 |
| 8 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (1, 10) (Spot #11 (thương hiệu=7, tọa độ=(1, 10))) | 15 |
| 9 | Di chuyển hướng 0 (`0`) | (5, 15) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (1, 10) (Spot #11 (thương hiệu=7, tọa độ=(1, 10))) | 13 |
| 10 | Di chuyển hướng 0 (`0`) | (4, 14) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (1, 10) (Spot #11 (thương hiệu=7, tọa độ=(1, 10))) | 11 |
| 11-12 | Di chuyển hướng 0 (`0`) | (4, 13) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (1, 10) (Spot #11 (thương hiệu=7, tọa độ=(1, 10))) | 10 |
| 13-14 | Di chuyển hướng 0 (`0`) | (3, 12) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (1, 10) (Spot #11 (thương hiệu=7, tọa độ=(1, 10))) | 9 |
| 15 | Di chuyển hướng 0 (`0`) | (3, 11) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (1, 10) (Spot #11 (thương hiệu=7, tọa độ=(1, 10))) | 7 |
| 16 | Di chuyển hướng 5 (`5`) | (2, 10) | (1, 10) | Dự kiến đạt mục tiêu Spot #11 (thương hiệu=7, tọa độ=(1, 10)) | 5 |
| 17-18 | Di chuyển hướng 5 (`5`) | (1, 10) | (0, 10) | Dự kiến đạt mục tiêu Spot #10 (thương hiệu=7, tọa độ=(0, 10)) | 4 |
| 19-20 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 3 |
| 21-22 | Di chuyển hướng 1 (`1`) | (1, 10) | (2, 9) | Dự kiến di chuyển đến (2, 9); hướng tới tọa độ (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 2 |
| 23 | Di chuyển hướng 1 (`1`) | (2, 9) | (2, 8) | Dự kiến đạt mục tiêu Spot #9 (thương hiệu=6, tọa độ=(2, 8)) | 40 |
| 24 | Chờ 1 bước (`-1`) | (2, 8) | (2, 8) | Dự kiến đứng yên tại (2, 8); hướng tới tọa độ (2, 8) | 40 |
| 25-26 | Di chuyển hướng 2 (`2`) | (2, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới tọa độ (7, 8) (Spot #1 (thương hiệu=0, tọa độ=(7, 8))) | 39 |
| 27 | Di chuyển hướng 2 (`2`) | (3, 8) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới tọa độ (7, 8) (Spot #1 (thương hiệu=0, tọa độ=(7, 8))) | 37 |
| 28 | Di chuyển hướng 2 (`2`) | (4, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới tọa độ (7, 8) (Spot #1 (thương hiệu=0, tọa độ=(7, 8))) | 35 |
| 29-30 | Di chuyển hướng 2 (`2`) | (5, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới tọa độ (7, 8) (Spot #1 (thương hiệu=0, tọa độ=(7, 8))) | 34 |
| 31-32 | Di chuyển hướng 2 (`2`) | (6, 8) | (7, 8) | Dự kiến đạt mục tiêu Spot #1 (thương hiệu=0, tọa độ=(7, 8)) | 33 |
| 33-34 | Di chuyển hướng 1 (`1`) | (7, 8) | (8, 7) | Dự kiến di chuyển đến (8, 7); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 32 |
| 35 | Di chuyển hướng 1 (`1`) | (8, 7) | (8, 6) | Dự kiến di chuyển đến (8, 6); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 30 |
| 36 | Di chuyển hướng 1 (`1`) | (8, 6) | (9, 5) | Dự kiến di chuyển đến (9, 5); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 28 |
| 37-38 | Di chuyển hướng 0 (`0`) | (9, 5) | (8, 4) | Dự kiến di chuyển đến (8, 4); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 27 |
| 39-40 | Di chuyển hướng 0 (`0`) | (8, 4) | (8, 3) | Dự kiến di chuyển đến (8, 3); hướng tới tọa độ (7, 3) (Spot #7 (thương hiệu=4, tọa độ=(7, 3))) | 26 |
| 41-42 | Di chuyển hướng 5 (`5`) | (8, 3) | (7, 3) | Dự kiến đạt mục tiêu Spot #7 (thương hiệu=4, tọa độ=(7, 3)) | 25 |
| 43-44 | Di chuyển hướng 1 (`1`) | (7, 3) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (7, 0) (Spot #2 (thương hiệu=1, tọa độ=(7, 0))) | 24 |
| 45 | Di chuyển hướng 1 (`1`) | (7, 2) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (7, 0) (Spot #2 (thương hiệu=1, tọa độ=(7, 0))) | 22 |
| 46 | Di chuyển hướng 0 (`0`) | (8, 1) | (7, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 20 |
| 47 | Chờ 1 bước (`-1`) | (7, 0) | (7, 0) | Dự kiến đứng yên tại (7, 0); mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 20 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (12, 9) (ô=156)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #8 (thương hiệu=5, tọa độ=(13, 5))
- Địa điểm đích kế hoạch: Spot #8 (thương hiệu=5, tọa độ=(13, 5))
- Mảng hành động đã gửi server: `[1, 1, 0, 5, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 1, 3, 5, 4, 3, 3, 4, 5, -16]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 1 (`1`) | (12, 9) | (12, 8) | Dự kiến di chuyển đến (12, 8); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 38 |
| 2 | Di chuyển hướng 1 (`1`) | (12, 8) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 36 |
| 3-4 | Di chuyển hướng 0 (`0`) | (13, 7) | (12, 6) | Dự kiến di chuyển đến (12, 6); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 35 |
| 5 | Di chuyển hướng 5 (`5`) | (12, 6) | (11, 6) | Dự kiến di chuyển đến (11, 6); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 33 |
| 6 | Di chuyển hướng 0 (`0`) | (11, 6) | (11, 5) | Dự kiến di chuyển đến (11, 5); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 31 |
| 7 | Di chuyển hướng 0 (`0`) | (11, 5) | (10, 4) | Dự kiến di chuyển đến (10, 4); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 29 |
| 8 | Di chuyển hướng 0 (`0`) | (10, 4) | (10, 3) | Dự kiến di chuyển đến (10, 3); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 27 |
| 9 | Di chuyển hướng 0 (`0`) | (10, 3) | (9, 2) | Dự kiến di chuyển đến (9, 2); hướng tới tọa độ (9, 1) (Spot #3 (thương hiệu=1, tọa độ=(9, 1))) | 25 |
| 10 | Di chuyển hướng 0 (`0`) | (9, 2) | (9, 1) | Dự kiến đạt mục tiêu Spot #3 (thương hiệu=1, tọa độ=(9, 1)) | 23 |
| 11-12 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến di chuyển đến (10, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 22 |
| 13-14 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 21 |
| 15 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 19 |
| 16 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 17 |
| 17 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 15 |
| 18 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 13 |
| 19-20 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 12 |
| 21-22 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 11 |
| 23 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 9 |
| 24-25 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 8 |
| 26-27 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 7 |
| 28-30 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 5 |
| 31 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 3 |
| 32-47 | Chờ 16 bước (`-16`) | (13, 5) | (13, 5) | Dự kiến đứng yên tại (13, 5); mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 3 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (12, 9) (ô=156)
- Nhiên liệu đầu ngày: 40
- Vai trò: Hỗ trợ xe tuần tra #1
- Điểm hẹn của xe tuần tra: Spot #9 (thương hiệu=6, tọa độ=(2, 8))
- Mảng hành động đã gửi server: `[0, 5, 5, 5, 5, 5, 5, 5, 5, 5, -32]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 0 (`0`) | (12, 9) | (11, 8) | Dự kiến di chuyển đến (11, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 40 |
| 2-3 | Di chuyển hướng 5 (`5`) | (11, 8) | (10, 8) | Dự kiến di chuyển đến (10, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 40 |
| 4-5 | Di chuyển hướng 5 (`5`) | (10, 8) | (9, 8) | Dự kiến di chuyển đến (9, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 40 |
| 6 | Di chuyển hướng 5 (`5`) | (9, 8) | (8, 8) | Dự kiến di chuyển đến (8, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 40 |
| 7 | Di chuyển hướng 5 (`5`) | (8, 8) | (7, 8) | Dự kiến di chuyển đến (7, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 40 |
| 8-9 | Di chuyển hướng 5 (`5`) | (7, 8) | (6, 8) | Dự kiến di chuyển đến (6, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 40 |
| 10-11 | Di chuyển hướng 5 (`5`) | (6, 8) | (5, 8) | Dự kiến di chuyển đến (5, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 40 |
| 12-13 | Di chuyển hướng 5 (`5`) | (5, 8) | (4, 8) | Dự kiến di chuyển đến (4, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 40 |
| 14 | Di chuyển hướng 5 (`5`) | (4, 8) | (3, 8) | Dự kiến di chuyển đến (3, 8); hướng tới điểm hẹn của xe tuần tra #1 tại (2, 8) (Spot #9 (thương hiệu=6, tọa độ=(2, 8))) | 40 |
| 15 | Di chuyển hướng 5 (`5`) | (3, 8) | (2, 8) | Dự kiến đến điểm hẹn của xe tuần tra #1 tại (2, 8) | 40 |
| 16-47 | Chờ 32 bước (`-32`) | (2, 8) | (2, 8) | Dự kiến đứng yên tại (2, 8); điểm hẹn của xe tuần tra #1 tại (2, 8) | 40 |

