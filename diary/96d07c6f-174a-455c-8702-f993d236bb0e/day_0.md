# Nhật ký hành trình - Ngày 0

- Số bước trong ngày: 32
- Số xe: 4
- Kế hoạch: Bộ giải

> Vị trí, loại xe và nhiên liệu đầu ngày lấy trực tiếp từ GET /status. Các dòng vị trí sau action và nhiên liệu còn lại là mô phỏng từ action đã gửi, vì API không trả trạng thái sau từng bước.

## Tiếp tế theo mô phỏng

| Bước | Patrol | Supply | Vị trí | Xăng trước | Xăng sau |
|---:|---:|---:|---|---:|---:|
| 30 | #2 | #3 | (1, 15) | 4 | 40 |

### Xe #0 - Tuần tra

- Vị trí đầu ngày: (5, 0) (ô=5)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #12 (thương hiệu=8, tọa độ=(15, 12))
- Địa điểm đích kế hoạch: Spot #12 (thương hiệu=8, tọa độ=(15, 12))
- Mảng hành động đã gửi server: `[2, 2, 3, 2, 2, 2, 2, 2, 2, 1, 3, 5, 4, 3, 3, 4, 5, 3, 4]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (5, 0) | (6, 0) | Dự kiến di chuyển đến (6, 0); hướng tới tọa độ (7, 0) (Spot #2 (thương hiệu=1, tọa độ=(7, 0))) | 39 |
| 2-4 | Di chuyển hướng 2 (`2`) | (6, 0) | (7, 0) | Dự kiến đạt mục tiêu Spot #2 (thương hiệu=1, tọa độ=(7, 0)) | 37 |
| 5-6 | Di chuyển hướng 3 (`3`) | (7, 0) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 36 |
| 7 | Di chuyển hướng 2 (`2`) | (8, 1) | (9, 1) | Dự kiến di chuyển đến (9, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 34 |
| 8-9 | Di chuyển hướng 2 (`2`) | (9, 1) | (10, 1) | Dự kiến di chuyển đến (10, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 33 |
| 10-11 | Di chuyển hướng 2 (`2`) | (10, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 32 |
| 12 | Di chuyển hướng 2 (`2`) | (11, 1) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 30 |
| 13 | Di chuyển hướng 2 (`2`) | (12, 1) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 28 |
| 14 | Di chuyển hướng 2 (`2`) | (13, 1) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 26 |
| 15 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 24 |
| 16-17 | Di chuyển hướng 3 (`3`) | (14, 0) | (15, 1) | Dự kiến đạt mục tiêu Spot #5 (thương hiệu=3, tọa độ=(15, 1)) | 23 |
| 18-19 | Di chuyển hướng 5 (`5`) | (15, 1) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 22 |
| 20 | Di chuyển hướng 4 (`4`) | (14, 1) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 20 |
| 21-22 | Di chuyển hướng 3 (`3`) | (13, 2) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 19 |
| 23-24 | Di chuyển hướng 3 (`3`) | (14, 3) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 18 |
| 25-27 | Di chuyển hướng 4 (`4`) | (14, 4) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (13, 5) (Spot #8 (thương hiệu=5, tọa độ=(13, 5))) | 16 |
| 28 | Di chuyển hướng 5 (`5`) | (14, 5) | (13, 5) | Dự kiến đạt mục tiêu Spot #8 (thương hiệu=5, tọa độ=(13, 5)) | 14 |
| 29-30 | Di chuyển hướng 3 (`3`) | (13, 5) | (13, 6) | Dự kiến di chuyển đến (13, 6); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 13 |
| 31 | Di chuyển hướng 4 (`4`) | (13, 6) | (13, 7) | Dự kiến di chuyển đến (13, 7); hướng tới tọa độ (15, 12) (Spot #12 (thương hiệu=8, tọa độ=(15, 12))) | 11 |

### Xe #1 - Tuần tra

- Vị trí đầu ngày: (12, 5) (ô=92)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Spot #0 (thương hiệu=0, tọa độ=(2, 0))
- Địa điểm đích kế hoạch: Spot #0 (thương hiệu=0, tọa độ=(2, 0))
- Mảng hành động đã gửi server: `[2, 2, 1, 0, 0, 1, 1, 4, 5, 5, 5, 5, 5, 5, 4, 5, 5, 5, 0, 5, 0, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 2 (`2`) | (12, 5) | (13, 5) | Dự kiến di chuyển đến (13, 5); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 39 |
| 2-3 | Di chuyển hướng 2 (`2`) | (13, 5) | (14, 5) | Dự kiến di chuyển đến (14, 5); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 38 |
| 4 | Di chuyển hướng 1 (`1`) | (14, 5) | (14, 4) | Dự kiến di chuyển đến (14, 4); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 36 |
| 5-7 | Di chuyển hướng 0 (`0`) | (14, 4) | (14, 3) | Dự kiến di chuyển đến (14, 3); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 34 |
| 8-9 | Di chuyển hướng 0 (`0`) | (14, 3) | (13, 2) | Dự kiến di chuyển đến (13, 2); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 33 |
| 10-11 | Di chuyển hướng 1 (`1`) | (13, 2) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (14, 0) (Spot #4 (thương hiệu=2, tọa độ=(14, 0))) | 32 |
| 12 | Di chuyển hướng 1 (`1`) | (14, 1) | (14, 0) | Dự kiến đạt mục tiêu Spot #4 (thương hiệu=2, tọa độ=(14, 0)) | 30 |
| 13-14 | Di chuyển hướng 4 (`4`) | (14, 0) | (14, 1) | Dự kiến di chuyển đến (14, 1); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 29 |
| 15 | Di chuyển hướng 5 (`5`) | (14, 1) | (13, 1) | Dự kiến di chuyển đến (13, 1); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 27 |
| 16 | Di chuyển hướng 5 (`5`) | (13, 1) | (12, 1) | Dự kiến di chuyển đến (12, 1); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 25 |
| 17 | Di chuyển hướng 5 (`5`) | (12, 1) | (11, 1) | Dự kiến di chuyển đến (11, 1); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 23 |
| 18 | Di chuyển hướng 5 (`5`) | (11, 1) | (10, 1) | Dự kiến di chuyển đến (10, 1); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 21 |
| 19-20 | Di chuyển hướng 5 (`5`) | (10, 1) | (9, 1) | Dự kiến di chuyển đến (9, 1); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 20 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 1) | (8, 1) | Dự kiến di chuyển đến (8, 1); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 19 |
| 23 | Di chuyển hướng 4 (`4`) | (8, 1) | (7, 2) | Dự kiến di chuyển đến (7, 2); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 17 |
| 24 | Di chuyển hướng 5 (`5`) | (7, 2) | (6, 2) | Dự kiến di chuyển đến (6, 2); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 15 |
| 25 | Di chuyển hướng 5 (`5`) | (6, 2) | (5, 2) | Dự kiến di chuyển đến (5, 2); hướng tới tọa độ (4, 2) (Spot #6 (thương hiệu=4, tọa độ=(4, 2))) | 13 |
| 26 | Di chuyển hướng 5 (`5`) | (5, 2) | (4, 2) | Dự kiến đạt mục tiêu Spot #6 (thương hiệu=4, tọa độ=(4, 2)) | 11 |
| 27-28 | Di chuyển hướng 0 (`0`) | (4, 2) | (4, 1) | Dự kiến di chuyển đến (4, 1); hướng tới tọa độ (2, 0) (Spot #0 (thương hiệu=0, tọa độ=(2, 0))) | 10 |
| 29 | Di chuyển hướng 5 (`5`) | (4, 1) | (3, 1) | Dự kiến di chuyển đến (3, 1); hướng tới tọa độ (2, 0) (Spot #0 (thương hiệu=0, tọa độ=(2, 0))) | 8 |
| 30 | Di chuyển hướng 0 (`0`) | (3, 1) | (2, 0) | Dự kiến đạt mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 6 |
| 31 | Chờ 1 bước (`-1`) | (2, 0) | (2, 0) | Dự kiến đứng yên tại (2, 0); mục tiêu Spot #0 (thương hiệu=0, tọa độ=(2, 0)) | 6 |

### Xe #2 - Tuần tra

- Vị trí đầu ngày: (0, 9) (ô=144)
- Nhiên liệu đầu ngày: 40
- Mục tiêu kế hoạch từ Solver: Điểm đích tọa độ=(1, 15)
- Địa điểm đích kế hoạch: Điểm đích tọa độ=(1, 15)
- Mảng hành động đã gửi server: `[3, 2, 2, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 4, 5, 5, 5, 5, 5, 5, 5, 5, -1, -1]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Mục tiêu kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 3 (`3`) | (0, 9) | (0, 10) | Dự kiến di chuyển đến (0, 10); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 39 |
| 2-3 | Di chuyển hướng 2 (`2`) | (0, 10) | (1, 10) | Dự kiến di chuyển đến (1, 10); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 38 |
| 4-5 | Di chuyển hướng 2 (`2`) | (1, 10) | (2, 10) | Dự kiến di chuyển đến (2, 10); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 37 |
| 6 | Di chuyển hướng 3 (`3`) | (2, 10) | (3, 11) | Dự kiến di chuyển đến (3, 11); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 35 |
| 7 | Di chuyển hướng 3 (`3`) | (3, 11) | (3, 12) | Dự kiến di chuyển đến (3, 12); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 33 |
| 8-9 | Di chuyển hướng 3 (`3`) | (3, 12) | (4, 13) | Dự kiến di chuyển đến (4, 13); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 32 |
| 10-11 | Di chuyển hướng 3 (`3`) | (4, 13) | (4, 14) | Dự kiến di chuyển đến (4, 14); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 31 |
| 12 | Di chuyển hướng 3 (`3`) | (4, 14) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 29 |
| 13 | Di chuyển hướng 2 (`2`) | (5, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 27 |
| 14 | Di chuyển hướng 2 (`2`) | (6, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 25 |
| 15 | Di chuyển hướng 2 (`2`) | (7, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 23 |
| 16 | Di chuyển hướng 2 (`2`) | (8, 15) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (9, 14) (Spot #13 (thương hiệu=9, tọa độ=(9, 14))) | 21 |
| 17-18 | Di chuyển hướng 1 (`1`) | (9, 15) | (9, 14) | Dự kiến đạt mục tiêu Spot #13 (thương hiệu=9, tọa độ=(9, 14)) | 20 |
| 19-20 | Di chuyển hướng 4 (`4`) | (9, 14) | (9, 15) | Dự kiến di chuyển đến (9, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 19 |
| 21-22 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 18 |
| 23 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 16 |
| 24 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 14 |
| 25 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 12 |
| 26 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 10 |
| 27 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 8 |
| 28 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến di chuyển đến (2, 15); hướng tới tọa độ (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 6 |
| 29 | Di chuyển hướng 5 (`5`) | (2, 15) | (1, 15) | Dự kiến đạt mục tiêu Spot #14 (thương hiệu=10, tọa độ=(1, 15)) | 40 |
| 30 | Chờ 1 bước (`-1`) | (1, 15) | (1, 15) | Dự kiến đứng yên tại (1, 15); hướng tới tọa độ (1, 15) | 40 |
| 31 | Chờ 1 bước (`-1`) | (1, 15) | (1, 15) | Dự kiến đứng yên tại (1, 15); hướng tới tọa độ (1, 15) | 40 |

### Xe #3 - Tiếp tế

- Vị trí đầu ngày: (9, 15) (ô=249)
- Nhiên liệu đầu ngày: 40
- Vai trò: Hỗ trợ xe tuần tra #2
- Điểm hẹn của xe tuần tra: Spot #14 (thương hiệu=10, tọa độ=(1, 15))
- Mảng hành động đã gửi server: `[5, 5, 5, 5, 5, 5, 5, 5, -23]`

Bảng dưới đây là mô phỏng theo action đã gửi, không phải trạng thái server xác nhận sau từng bước.

| Bước dự kiến | Hành động đã gửi | Từ ô theo mô phỏng | Đến ô dự kiến | Điểm hẹn kế hoạch | Nhiên liệu dự kiến còn lại |
|---:|---|---|---|---|---:|
| 0-1 | Di chuyển hướng 5 (`5`) | (9, 15) | (8, 15) | Dự kiến di chuyển đến (8, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 40 |
| 2 | Di chuyển hướng 5 (`5`) | (8, 15) | (7, 15) | Dự kiến di chuyển đến (7, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 40 |
| 3 | Di chuyển hướng 5 (`5`) | (7, 15) | (6, 15) | Dự kiến di chuyển đến (6, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 40 |
| 4 | Di chuyển hướng 5 (`5`) | (6, 15) | (5, 15) | Dự kiến di chuyển đến (5, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 40 |
| 5 | Di chuyển hướng 5 (`5`) | (5, 15) | (4, 15) | Dự kiến di chuyển đến (4, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 40 |
| 6 | Di chuyển hướng 5 (`5`) | (4, 15) | (3, 15) | Dự kiến di chuyển đến (3, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 40 |
| 7 | Di chuyển hướng 5 (`5`) | (3, 15) | (2, 15) | Dự kiến di chuyển đến (2, 15); hướng tới điểm hẹn của xe tuần tra #2 tại (1, 15) (Spot #14 (thương hiệu=10, tọa độ=(1, 15))) | 40 |
| 8 | Di chuyển hướng 5 (`5`) | (2, 15) | (1, 15) | Dự kiến đến điểm hẹn của xe tuần tra #2 tại (1, 15) | 40 |
| 9-31 | Chờ 23 bước (`-23`) | (1, 15) | (1, 15) | Dự kiến đứng yên tại (1, 15); điểm hẹn của xe tuần tra #2 tại (1, 15) | 40 |

